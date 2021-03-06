package snowball_test

import (
	"fmt"

	"github.com/tebeka/snowball"
)

func Example() {
	fmt.Printf("%d languages\n", len(snowball.Languages()))
	stemmer, err := snowball.New("english")
	if err != nil {
		fmt.Println("error", err)
		return
	}
	fmt.Println(stemmer.Stem("running"))
	// Output:
	// 26 languages
	// run
}
