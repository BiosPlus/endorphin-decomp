package main

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
)

func isIsolatedEnv() bool {
	return strings.TrimSpace(os.Getenv("WORK_ISOLATED")) == "1"
}

func isWipPath(cppPath string) bool {
	return strings.HasPrefix(filepath.ToSlash(cppPath), "src/wip/")
}

func wipPathForVA(vaHex string) string {
	va, _, err := normalizeVA(vaHex)
	if err != nil {
		return ""
	}
	return fmt.Sprintf("src/wip/fn_%s.cpp", strings.TrimPrefix(va, "0x"))
}

// extractIsolatedShardFunc extracts the shard's preamble (everything before the first
// // [0x...] marker) plus the single target // [0xVA] function block into a temporary
// .cpp file for fast single-function iteration. Returns an error if the shard has <= 1
// function or lacks the target marker (caller should fall back to full shard compile).
func extractIsolatedShardFunc(cppPath, vaHex string) (string, func(), error) {
	b, err := os.ReadFile(cppPath)
	if err != nil {
		return "", func() {}, err
	}
	normTarget := "0x" + strings.ToUpper(strings.TrimPrefix(vaHex, "0x"))
	lines := strings.Split(string(b), "\n")

	markerCount := 0
	firstMarkerIdx := -1
	targetStart := -1
	targetEnd := len(lines)

	for i, l := range lines {
		trimmed := strings.TrimSpace(l)
		if m := unitMarkerLineRe.FindStringSubmatch(trimmed); len(m) == 2 {
			markerCount++
			if firstMarkerIdx == -1 {
				firstMarkerIdx = i
			}
			va := "0x" + strings.ToUpper(strings.TrimPrefix(m[1], "0x"))
			if targetStart != -1 && i > targetStart {
				targetEnd = i
				break
			}
			if va == normTarget {
				targetStart = i
			}
		}
	}

	if markerCount <= 1 {
		return "", func() {}, fmt.Errorf("single-function file")
	}
	if firstMarkerIdx == -1 || targetStart == -1 {
		return "", func() {}, fmt.Errorf("marker %s not found in %s", normTarget, cppPath)
	}

	preamble := strings.Join(lines[:firstMarkerIdx], "\n")
	targetBlock := strings.Join(lines[targetStart:targetEnd], "\n")
	content := strings.TrimRight(preamble, "\n") + "\n\n" + strings.TrimSpace(targetBlock) + "\n"

	tmpDir, err := os.MkdirTemp("", "endorphin_iso_*")
	if err != nil {
		return "", func() {}, err
	}
	cleanup := func() { _ = os.RemoveAll(tmpDir) }
	tmpCpp := filepath.Join(tmpDir, "unit.cpp")
	if err := os.WriteFile(tmpCpp, []byte(content), 0644); err != nil {
		cleanup()
		return "", func() {}, err
	}
	return tmpCpp, cleanup, nil
}

// mergeWipIntoShard merges a matched WIP file (src/wip/fn_XXXX.cpp) into its real
// target shard .cpp, deduplicating #include and preamble declarations. Returns a
// restore function that reverts shardPath if verification fails.
func mergeWipIntoShard(wipPath, shardPath, vaHex, symbol string, size uint32) (func(), error) {
	wipBytes, err := os.ReadFile(wipPath)
	if err != nil {
		return nil, err
	}

	origBytes, readErr := os.ReadFile(shardPath)
	existed := readErr == nil
	restore := func() {
		if existed {
			_ = os.WriteFile(shardPath, origBytes, 0644)
		} else {
			_ = os.Remove(shardPath)
		}
	}

	// If shard already has a stub for vaHex, strip it first so we don't duplicate.
	if existed {
		_, _ = stripFunctionFromCpp(shardPath, vaHex)
	}

	wipLines := strings.Split(strings.ReplaceAll(string(wipBytes), "\r\n", "\n"), "\n")
	var wipIncludes []string
	var wipPreamble []string
	var wipFuncLines []string
	inFunc := false

	for _, l := range wipLines {
		trimmed := strings.TrimSpace(l)
		if strings.HasPrefix(trimmed, "#include") {
			wipIncludes = append(wipIncludes, trimmed)
			continue
		}
		if !inFunc {
			if m := unitMarkerLineRe.FindStringSubmatch(trimmed); len(m) == 2 {
				inFunc = true
				wipFuncLines = append(wipFuncLines, l)
				continue
			}
			if strings.HasPrefix(trimmed, "// Decompiled translation unit:") ||
				strings.HasPrefix(trimmed, "// Isolated WIP translation unit:") ||
				trimmed == "" {
				continue
			}
			wipPreamble = append(wipPreamble, l)
		} else {
			wipFuncLines = append(wipFuncLines, l)
		}
	}

	var funcBlock string
	if inFunc {
		funcBlock = strings.TrimSpace(strings.Join(wipFuncLines, "\n"))
	} else {
		// Agent removed the // [0xVA] marker; reconstruct it and move everything into the block.
		var body []string
		body = append(body, wipPreamble...)
		wipPreamble = nil
		body = append(body, wipFuncLines...)
		funcBlock = fmt.Sprintf("// [%s] %s (%d bytes)\n%s", vaHex, symbol, size, strings.TrimSpace(strings.Join(body, "\n")))
	}

	var shardContent string
	if curBytes, err := os.ReadFile(shardPath); err == nil {
		shardContent = strings.ReplaceAll(string(curBytes), "\r\n", "\n")
	} else {
		shardContent = fmt.Sprintf("// Decompiled translation unit: %s\n", shardPath)
	}

	shardLines := strings.Split(shardContent, "\n")
	firstMarker := -1
	for i, l := range shardLines {
		if unitMarkerLineRe.MatchString(strings.TrimSpace(l)) {
			firstMarker = i
			break
		}
	}

	var shardPreambleLines, shardBodyLines []string
	if firstMarker == -1 {
		shardPreambleLines = shardLines
	} else {
		shardPreambleLines = shardLines[:firstMarker]
		shardBodyLines = shardLines[firstMarker:]
	}

	existingPreamble := make(map[string]bool)
	for _, l := range shardPreambleLines {
		t := strings.TrimSpace(l)
		if t != "" {
			existingPreamble[t] = true
		}
	}

	var newIncludes []string
	for _, inc := range wipIncludes {
		if !existingPreamble[inc] {
			existingPreamble[inc] = true
			newIncludes = append(newIncludes, inc)
		}
	}
	var newDecls []string
	for _, decl := range wipPreamble {
		t := strings.TrimSpace(decl)
		if t == "" {
			continue
		}
		if strings.HasPrefix(t, "extern ") || strings.HasPrefix(t, "using ") ||
			strings.HasPrefix(t, "typedef ") || strings.HasPrefix(t, "#define ") {
			if existingPreamble[t] {
				continue
			}
			existingPreamble[t] = true
		}
		newDecls = append(newDecls, decl)
	}

	// Trim trailing blank lines from shardPreambleLines before appending new preamble items.
	for len(shardPreambleLines) > 0 && strings.TrimSpace(shardPreambleLines[len(shardPreambleLines)-1]) == "" {
		shardPreambleLines = shardPreambleLines[:len(shardPreambleLines)-1]
	}
	shardPreambleLines = append(shardPreambleLines, newIncludes...)
	shardPreambleLines = append(shardPreambleLines, newDecls...)

	var out strings.Builder
	out.WriteString(strings.Join(shardPreambleLines, "\n"))
	out.WriteString("\n")
	if bodyStr := strings.TrimSpace(strings.Join(shardBodyLines, "\n")); bodyStr != "" {
		out.WriteString("\n")
		out.WriteString(bodyStr)
		out.WriteString("\n")
	}
	out.WriteString("\n")
	out.WriteString(funcBlock)
	out.WriteString("\n")

	if err := os.MkdirAll(filepath.Dir(shardPath), 0755); err != nil {
		return restore, err
	}
	if err := os.WriteFile(shardPath, []byte(out.String()), 0644); err != nil {
		return restore, err
	}
	return restore, nil
}

// cleanWipFiles removes any unmatched .cpp files in src/wip/.
func cleanWipFiles(units []UnitEntry, unitIdxByVA map[string]int) int {
	entries, err := os.ReadDir(filepath.Join("src", "wip"))
	if err != nil {
		return 0
	}
	cleaned := 0
	for _, e := range entries {
		if e.IsDir() || !strings.HasSuffix(e.Name(), ".cpp") {
			continue
		}
		m := cppFnRe.FindStringSubmatch(e.Name())
		if len(m) != 2 {
			continue
		}
		va := "0x" + strings.ToUpper(m[1])
		if idx, ok := unitIdxByVA[va]; ok {
			st := units[idx].Status
			if st == "matched" || st == "solved" || st == "decompiled" {
				continue
			}
		}
		if err := os.Remove(filepath.Join("src", "wip", e.Name())); err == nil {
			cleaned++
		}
	}
	return cleaned
}
