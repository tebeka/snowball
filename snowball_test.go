package snowball

import (
	"testing"
)

/*
func TestStem(t *testing.T) {
	stemmer = New("en")
	word = "running"
	stemmed = stemmer.Stem(word)
	if stemmed != "run" {
		t.Fatalf("stem(%s) -> '%s' (expected 'run')", word, stemmed)
	}
}
*/

func TestList(t *testing.T) {
	if len(List()) == 0 {
		t.Fatal("No langs")
	}
}

func TestListEnglish(t *testing.T) {
	found := false
	for _, v := range List() {
		if v == "english" {
			found = true
			break
		}
	}

	if !found {
		t.Fatal("english not found")
	}
}


func TestNew(t *testing.T) {
	lang := "english"
	stemmer, err := New(lang)

	if err != nil {
		t.Fatalf("error creating english stemmer - %s", err)
	}

	if stemmer.Lang() != lang {
		t.Fatalf("lang is not english (is %s)", stemmer.Lang())
	}
}


func TestNewNoLang(t *testing.T) {
	lang := "klingon"
	_, err := New(lang)

	if err == nil {
		t.Fatal("dude, we have a klingon stemmer!")
	}
}
