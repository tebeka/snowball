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
	fmt.Println(stemmer.Stem("running")) // Will print "run"
	// Output:
	// run
}
