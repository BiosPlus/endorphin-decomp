package main

import (
	"io/fs"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"sync"
)

var (
	cppIndexOnce sync.Once
	cppIndexMu   sync.Mutex
	cppIndexMap  map[string]string

	cppMarkerRe = regexp.MustCompile(`//\s*\[(0x[0-9A-Fa-f]{8})\]`)
	cppFnRe     = regexp.MustCompile(`\bfn_([0-9A-Fa-f]{8})\b`)
)

func initCppIndex() {
	m := make(map[string]string)
	hasMarker := make(map[string]bool)

	_ = filepath.WalkDir("src", func(path string, d fs.DirEntry, err error) error {
		if err != nil || d.IsDir() || !strings.HasSuffix(path, ".cpp") {
			return nil
		}
		b, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		slashPath := filepath.ToSlash(path)
		s := string(b)

		for _, match := range cppMarkerRe.FindAllStringSubmatch(s, -1) {
			if va, _, err := normalizeVA(match[1]); err == nil && !hasMarker[va] {
				m[va] = slashPath
				hasMarker[va] = true
			}
		}
		for _, match := range cppFnRe.FindAllStringSubmatch(s, -1) {
			if va, _, err := normalizeVA(match[1]); err == nil {
				if _, exists := m[va]; !exists {
					m[va] = slashPath
				}
			}
		}
		return nil
	})

	cppIndexMu.Lock()
	cppIndexMap = m
	cppIndexMu.Unlock()
}

// lookupCppForVA returns the src/ .cpp file path containing vaHex, scanning
// src/ at most once per process.
func lookupCppForVA(vaHex string) string {
	va, _, err := normalizeVA(vaHex)
	if err != nil {
		return ""
	}
	cppIndexOnce.Do(initCppIndex)
	cppIndexMu.Lock()
	p := cppIndexMap[va]
	cppIndexMu.Unlock()
	return p
}

// registerCppForVA records a newly created .cpp file for vaHex in the
// in-memory index so subsequent lookups see it without rescanning src/.
func registerCppForVA(vaHex, cppPath string) {
	va, _, err := normalizeVA(vaHex)
	if err != nil || cppPath == "" {
		return
	}
	cppIndexOnce.Do(initCppIndex)
	cppIndexMu.Lock()
	cppIndexMap[va] = filepath.ToSlash(cppPath)
	cppIndexMu.Unlock()
}
