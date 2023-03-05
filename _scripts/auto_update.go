//go:build ignore

package main

import (
	"context"
	"encoding/json"
	"fmt"
	"io"
	"log"
	"net/http"
	"os"
	"strings"
)

func main() {
	current, err := currentVersion()
	if err != nil {
		log.Fatalf("error: current - %s", err)
	}

	latest, err := latestVersion(context.Background())
	if err != nil {
		log.Fatalf("error: latest - %s", err)
	}

	if current == latest {
		log.Printf("info: no version change (%s)", current)
		return
	}

	if latest < current {
		log.Fatalf("error: latest (%s) < current (%s)", latest, current)
	}
}

func currentVersion() (string, error) {
	file, err := os.Open("lib-version.txt")
	if err != nil {
		return "", err
	}
	defer file.Close()

	data, err := io.ReadAll(file)
	if err != nil {
		return "", err
	}

	return strings.TrimSpace(string(data)), nil
}

func latestVersion(ctx context.Context) (string, error) {
	const url = "https://api.github.com/repos/snowballstem/snowball/tags"
	req, err := http.NewRequestWithContext(ctx, http.MethodGet, url, nil)
	if err != nil {
		return "", err
	}

	resp, err := http.DefaultClient.Do(req)
	if err != nil {
		return "", err
	}

	if resp.StatusCode != http.StatusOK {
		return "", fmt.Errorf("%q - bad status: %s", url, resp.Status)
	}

	var reply []struct {
		Version string `json:"name"`
	}
	if err := json.NewDecoder(resp.Body).Decode(&reply); err != nil {
		return "", err
	}

	ver := ""
	for _, v := range reply {
		if v.Version > ver {
			ver = v.Version
		}
	}

	// v2.2.0 -> 2.2.0
	return ver[1:], nil
}
