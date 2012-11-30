// snowball stemmer
//
// Example:
//  stemmer = snowball.New("en")
//  fmt.Println(stemmer.stem("running")) // Will print "run"
package main

import (
	"fmt"
	"runtime"
)

// FIXME: Currently cgo does not find the source files in libstemmer_c/

// #include "libstemmer_c/include/libstemmer.h"
import "C"

type Stemmer struct {
	stemmer *C.struct_sb_stemmer
}

func free(stemmer *Stemmer) {
	C.sb_stemmer_delete(stemmer.stemmer)
}

// New creates a new stemmer for lang
func New(lang string) (*Stemmer, error) {
	stemmer := &Stemmer{
		C.sb_stemmer_new(C.CString(lang), nil),
	}

	if stemmer.stemmer == nil {
		return nil, fmt.Errorf("bad lang or charenc")
	}

	runtime.SetFinalizer(stemmer, free)

	return stemmer, nil
}

// Stem returns them stem of word (e.g. running -> run)
func (stemmer *Stmmer) Stem(word string) string {
	cstr := C.sb_stemmer_stem(stemmer.stemmer, C.CString(word), C.int(len(word)))
	return C.GoString(cstr)
}

// List returns the list of languages supported by snowball
func List() []string {
	cnames := C.sb_stemmer_list()
	size := int(unsafe.Sizeof(cnames) / unsafe.Sizeof(cnames[0]))
	names = []string{}
	for i := 0; i < size; i++ {
		name := C.GoString(names[i])
		if len(name) > 0 {
			names = append(names, name)
		}
	}

	return names
}
