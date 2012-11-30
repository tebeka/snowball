package snowball

import (
	"testing"
)

func TestStem(t *testing.T) {
	stemmer = New("en")
	word = "running"
	stemmed = stemmer.Stem(word)
	if stemmed != "run" {
		t.Fatalf("stem(%s) -> '%s' (expected 'run')", word, stemmed)
	}
}
