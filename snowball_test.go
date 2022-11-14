package snowball

import (
	"fmt"
	"testing"

	"github.com/stretchr/testify/require"
)

func TestList(t *testing.T) {
	require.Greater(t, len(Languages()), 0, "no langs")
}

func TestListEnglish(t *testing.T) {
	found := false
	for _, v := range Languages() {
		if v == "english" {
			found = true
			break
		}
	}

	require.True(t, found, "english not found")
}

func TestNew(t *testing.T) {
	lang := "english"
	stmr, err := New(lang)
	require.NoError(t, err, "create english stemmer")
	require.Equal(t, lang, stmr.Lang())
}

func TestClose(t *testing.T) {
	stmr, err := New("english")
	require.NoError(t, err, "create english stemmer")
	stmr.Close()
	require.Nil(t, stmr.stmr, "didn't free C stemmer")
}

func TestNewNoLang(t *testing.T) {
	lang := "klingon"
	_, err := New(lang)
	require.Error(t, err, "dude, we have a klingon stemmer!")
}

func TestStem(t *testing.T) {
	var testCases = []struct {
		lang string
		word string
		stem string
	}{
		{"english", "running", "run"},
		{"german", "käuflich", "kauflich"},
	}

	for _, tc := range testCases {
		name := fmt.Sprintf("%s:%s", tc.lang, tc.word)
		t.Run(name, func(t *testing.T) {
			stmr, err := New(tc.lang)
			require.NoErrorf(t, err, "can't create stemmer")
			s := stmr.Stem(tc.word)
			require.Equal(t, tc.stem, s)
		})
	}
}
