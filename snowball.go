package main

import (
	"runtime"
)

// #include "libstemmer_c/include/libstemmer.h"
import "C"


type Stemmer struct {
	stemmer *C.struct_sb_stemmer
}

func free(stemmer *Stemmer) {
	C.sb_stemmer_delete(stemmer.stemmer)
}

func New(lang, charenc string) *Stemmer {
	stemmer := &Stemmer{
		C.sb_stemmer_new(C.CString(lang), C.CString(charenc)),
	}
	runtime.SetFinalizer(stemmer, free)

	return stemmer
}

func (stemmer *Stmmer) Stem(word string) string {
	return "" // FIXME
}
