package snowball_test

import (
	"fmt"

	"github.com/tebeka/snowball"
)

func Example() {
	stemmer, err := snowball.New("english")
	if err != nil {
		fmt.Println("error", err)
		return
	}
	defer stemmer.Close()

	fmt.Println(stemmer.Stem("working"))
	fmt.Println(stemmer.Stem("works"))
	fmt.Println(stemmer.Stem("worked"))
	// Output:
	// work
	// work
	// work
}
