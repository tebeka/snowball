package snowball

import (
	"testing"
)

func TestList(t *testing.T) {
	if len(LangList()) == 0 {
		t.Fatal("No langs")
	}
}

func TestListEnglish(t *testing.T) {
	found := false
	for _, v := range LangList() {
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
	stmr, err := New(lang)

	if err != nil {
		t.Fatalf("error creating english stemmer - %s", err)
	}

	if stmr.Lang() != lang {
		t.Fatalf("lang is not english (is %s)", stmr.Lang())
	}
}

func Test_free(t *testing.T) {
	stmr, err := New("english")

	if err != nil {
		t.Fatalf("error creating english stemmer - %s", err)
	}

	free(stmr)
	if stmr.stmr != nil {
		t.Fatalf("didn't free C stemmer")
	}
}

func TestNewNoLang(t *testing.T) {
	lang := "klingon"
	_, err := New(lang)

	if err == nil {
		t.Fatal("dude, we have a klingon stemmer!")
	}
}

func check(t *testing.T, lang, word, stem string) {
	stmr, err := New(lang)
	if err != nil {
		t.Fatalf("can't create stemmer for %s - %s", lang, err)
	}

	w := stmr.Stem(word)
	if w != stem {
		t.Fatalf("error stemming '%s', got %s instead of '%s'", word, w, stem)
	}
}

func TestStemEn(t *testing.T) {
	check(t, "english", "running", "run")
}

func TestStemDe(t *testing.T) {
	check(t, "german", "käuflich", "kauflich")
}
