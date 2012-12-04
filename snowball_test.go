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
