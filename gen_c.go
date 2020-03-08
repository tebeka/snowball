// +build ignore

package main

import (
	"archive/tar"
	"bufio"
	"compress/gzip"
	"fmt"
	"io"
	"log"
	"net/http"
	"os"
	"path"
	"path/filepath"
	"regexp"
	"strings"
)

var (
	// #include "../src_c/stem_ISO_8859_1_danish.h"
	incRe = regexp.MustCompile(`#include ".*/([^/]+\.h)"`)
)

func main() {
	old, err := existingFiles()
	current := make(map[string]bool)

	url := "https://snowballstem.org/dist/libstemmer_c.tgz"
	resp, err := http.Get(url)
	if err != nil {
		log.Fatalf("error: can't download %s - %s", url, err)
	}
	defer resp.Body.Close()
	zr, err := gzip.NewReader(resp.Body)
	if err != nil {
		log.Fatal("error: not a zip - %s", err)
	}

	tr := tar.NewReader(zr)
	for {
		h, err := tr.Next()
		if err == io.EOF {
			break
		}
		if !isSrc(h.Name) {
			continue
		}
		current[path.Base(h.Name)] = true
		out := path.Join(".", path.Base(h.Name))
		file, err := os.Create(out)
		if err != nil {
			log.Fatal("error: %s", err)
		}
		fmt.Printf("%s → %s\n", h.Name, out)
		s := bufio.NewScanner(tr)
		for s.Scan() {
			line := incRe.ReplaceAllString(s.Text(), `#include "$1"`)
			fmt.Fprintln(file, line)
		}

		if err := s.Err(); err != nil {
			log.Fatal("error: %s - %s", h.Name, err)
		}
		file.Close()
	}

	for _, name := range old {
		if !current[name] {
			fmt.Printf("DELETE %s\n", name)
			os.Remove(name)
		}
	}
}

func isSrc(name string) bool {
	ext := path.Ext(name)
	if !(ext == ".h" || ext == ".c") {
		return false
	}

	if strings.Contains(name, "/examples") {
		return false
	}

	// We're using the UTF-8 version
	if strings.Contains(name, "libstemmer.c") {
		return false
	}
	return true
}

func existingFiles() ([]string, error) {
	matches, err := filepath.Glob("*.[ch]")
	if err != nil {
		return nil, err
	}

	var files []string
	for _, name := range matches {
		files = append(files, path.Base(name))
	}
	return files, nil
}
