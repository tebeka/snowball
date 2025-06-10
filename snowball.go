// Package snowball implements a stemmer
package snowball

import (
	_ "embed"
	"fmt"
	"unsafe"
)

/*
#include <stdlib.h>
#include "libstemmer.h"
*/
import "C"

const (
	// Version is the library version
	Version = "0.8.0"
)

var (
	//go:embed "lib-version.txt"
	SnowballVersion string
)

// Stemmer structure.
// Warning: Stemmers are not goroutine safe, create a stemmer per goroutine or
// use a pool (such as sync.Pool) to ensure safety.
type Stemmer struct {
	lang string
	stmr *C.struct_sb_stemmer
}

// New creates a new stemmer for lang.
func New(lang string) (*Stemmer, error) {
	clang := C.CString(lang)

	stmr := &Stemmer{
		lang,
		C.sb_stemmer_new(clang, nil),
	}

	if stmr.stmr == nil {
		return nil, fmt.Errorf("can't create stemmer for lang %s", lang)
	}

	return stmr, nil
}

// Close closes the stemmer and frees the underlying C memory.
func (stmr *Stemmer) Close() error {
	if stmr.stmr != nil {
		C.sb_stemmer_delete(stmr.stmr)
		stmr.stmr = nil
	}

	return nil
}

// Lang return the stemmer language.
func (stmr *Stemmer) Lang() string {
	return stmr.lang
}

// Stem returns them stem of word (e.g. running -> run).
func (stmr *Stemmer) Stem(word string) string {
	ptr := unsafe.Pointer(C.CString(word))
	defer C.free(ptr)

	w := (*C.sb_symbol)(ptr)
	res := unsafe.Pointer(C.sb_stemmer_stem(stmr.stmr, w, C.int(len(word))))
	if res == nil {
		return word // TODO: Is this what we want?
	}
	// We don't free res, snowball's documentation says:
	// The return value is owned by the stemmer - it must not be freed

	size := C.sb_stemmer_length(stmr.stmr)
	buf := C.GoBytes(res, size)
	return string(buf)
}

// LangList returns the list of languages supported by snowball.
// DEPRECATED: Use Languages
func LangList() []string {
	return Languages()
}

// Languages returns the list of languages supported by snowball.
func Languages() []string {
	return langList
}

var langList []string

func init() {
	// We don't need to free since sb_stemmer_list return pointer to static variable
	cp := uintptr(unsafe.Pointer(C.sb_stemmer_list()))
	size := unsafe.Sizeof(uintptr(0))

	for {
		name := C.GoString(*(**C.char)(unsafe.Pointer(cp)))
		if len(name) == 0 {
			break
		}
		langList = append(langList, name)
		cp += size
	}
}
