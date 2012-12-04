// snowball stemmer
//
// Example:
//  stemmer = snowball.New("en")
//  fmt.Println(stemmer.stem("running")) // Will print "run"
package snowball

import (
	"fmt"
	"runtime"
	"unsafe"
)


// #include "libstemmer.h"
import "C"
type Stemmer struct {
	lang string
	stemmer *C.struct_sb_stemmer
}

func free(stemmer *Stemmer) {
	C.sb_stemmer_delete(stemmer.stemmer)
}

// New creates a new stemmer for lang
func New(lang string) (*Stemmer, error) {
	stemmer := &Stemmer{
		lang,
		C.sb_stemmer_new(C.CString(lang), nil),
	}

	if stemmer.stemmer == nil {
		return nil, fmt.Errorf("can't create stemmer for lang %s", lang)
	}

	runtime.SetFinalizer(stemmer, free)

	return stemmer, nil
}

func (stemmer *Stemmer) Lang() string {
	return stemmer.lang
}

/*
// Stem returns them stem of word (e.g. running -> run)
func (stemmer *Stemmer) Stem(word string) string {
	cstr := C.sb_stemmer_stem(stemmer.stemmer, C.CString(word), C.int(len(word)))
	return C.GoString(cstr)
}
*/

// List returns the list of languages supported by snowball
func List() []string {
	names := []string{}

	cp := uintptr(unsafe.Pointer(C.sb_stemmer_list()))
	size := unsafe.Sizeof(uintptr(0))

	for {
		name := C.GoString(*(**C.char)(unsafe.Pointer(cp)))
		if len(name) == 0 {
			break
		}
		names = append(names, name)
		cp += size
	}
	return names
}
