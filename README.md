# [Snowball](http://snowball.tartarus.org/) Stemmer for Go

[![GoDoc](https://godoc.org/github.com/tebeka/snowball?status.svg)](https://pkg.go.dev/github.com/tebeka/snowball?tab=doc)
[![Test](https://github.com/tebeka/snowball/workflows/Test/badge.svg)](https://github.com/tebeka/snowball/actions?query=workflow%3ATest)

## Usage

```go
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
```

For bugs, comments, sources and more - head over to
[https://github.com/tebeka/snowball](https://github.com/tebeka/snowball).

This project was mostly a learning exercise for me, I don't consider it
production quality.

---
Miki Tebeka <miki.tebeka@gmail.com>
