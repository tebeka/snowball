# [Snowball](http://snowball.tartarus.org/) Stemmer for Go

[![Go Reference](https://pkg.go.dev/badge/github.com/tebeka/snowball.svg)](https://pkg.go.dev/github.com/tebeka/snowball)
[![Test](https://github.com/tebeka/snowball/workflows/Test/badge.svg)](https://github.com/tebeka/snowball/actions?query=workflow%3ATest)

## Usage

```go
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

	fmt.Println(stemmer.Stem("worked"))
	fmt.Println(stemmer.Stem("working"))
	fmt.Println(stemmer.Stem("works"))
	// Output:
	// work
	// work
	// work
}
```

This project was mostly a learning exercise for me, I don't consider it production quality.

## Installing

`go get github.com/tebeka/snowball@latest`

You will need a C compiler on your machine.

## Development

If you want to update the underlying C library, run `update-c.sh`. Make sure to run the tests after.
