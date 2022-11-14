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
	defer stemmer.Close()
	fmt.Println(stemmer.Stem("running"))
	// Output:
	// 29 languages
	// run
}
