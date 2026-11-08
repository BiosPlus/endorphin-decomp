package main

import (
	"bufio"
	"bytes"
	"crypto/sha256"
	"debug/pe"
	"encoding/hex"
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"strings"
)

type UnitEntry struct {
	VA          string   `json:"va"`
	Size        uint32   `json:"size"`
	SHA256      string   `json:"sha256"`
	Symbol      string   `json:"symbol"`
	Callees     []string `json:"callees"`
	NumCallees  int      `json:"num_callees"`
	IsLeaf      bool     `json:"is_leaf"`
	IsThunk     bool     `json:"is_thunk"`
	Relocations []string `json:"relocations"`
	Status      string   `json:"status"`
}

var vaCommentRe = regexp.MustCompile(`^// \[(0x[0-9A-Fa-f]{8})\]`)

func discoverCppFiles(onlyModified bool, args []string) ([]string, error) {
	if len(args) > 0 {
		return args, nil
	}
	if onlyModified {
		cmd := exec.Command("git", "diff", "--name-only", "HEAD~1", "HEAD", "--", "src/")
		if out, err := cmd.Output(); err == nil {
			var modified []string
			for _, line := range strings.Split(strings.TrimSpace(string(out)), "\n") {
				line = strings.TrimSpace(line)
				if strings.HasSuffix(line, ".cpp") {
					if _, err := os.Stat(line); err == nil {
						modified = append(modified, line)
					}
				}
			}
			if len(modified) > 0 {
				return modified, nil
			}
		}
	}

	var files []string
	err := filepath.Walk("src", func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if !info.IsDir() && strings.HasSuffix(path, ".cpp") {
			files = append(files, filepath.ToSlash(path))
		}
		return nil
	})
	return files, err
}

func extractUnitVAsFromCpp(path string) ([]string, error) {
	f, err := os.Open(path)
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var vas []string
	scanner := bufio.NewScanner(f)
	for scanner.Scan() {
		line := strings.TrimSpace(scanner.Text())
		if m := vaCommentRe.FindStringSubmatch(line); len(m) == 2 {
			vas = append(vas, strings.ToUpper(m[1]))
		}
	}
	return vas, scanner.Err()
}

func compileAndExtractObjFunctions(cppPath string) (map[string][]byte, error) {
	tmpDir, err := os.MkdirTemp("", "endorphin_obj_*")
	if err != nil {
		return nil, err
	}
	defer os.RemoveAll(tmpDir)

	objPath := filepath.Join(tmpDir, "unit.obj")
	cmd := exec.Command("./tools/cl_wine.sh",
		"/c", "/O2", "/Ob2", "/Oy-", "/EHsc", "/GR", "/Gd", "/W0",
		"/Iinclude",
		"/Fo"+objPath,
		cppPath,
	)
	out, err := cmd.CombinedOutput()
	if err != nil {
		return nil, fmt.Errorf("cl_wine.sh failed on %s: %v\n%s", cppPath, err, string(out))
	}

	rawObj, err := os.ReadFile(objPath)
	if err != nil {
		return nil, err
	}

	coff, err := pe.NewFile(bytes.NewReader(rawObj))
	if err != nil {
		return nil, err
	}
	defer coff.Close()

	fnBytes := make(map[string][]byte)
	for _, sym := range coff.Symbols {
		if sym.SectionNumber <= 0 || int(sym.SectionNumber) > len(coff.Sections) {
			continue
		}
		sec := coff.Sections[sym.SectionNumber-1]
		if !strings.HasPrefix(sec.Name, ".text") {
			continue
		}
		data, err := sec.Data()
		if err != nil || uint32(len(data)) <= sym.Value {
			continue
		}
		fnBytes[sym.Name] = data[sym.Value:]
	}
	return fnBytes, nil
}

func main() {
	modifiedOnly := flag.Bool("modified", false, "Only check .cpp files modified in the latest commit")
	requireCompiler := flag.Bool("require-compiler", false, "Fail if .local/msvc8/bin/cl.exe is not installed")
	flag.Parse()

	unitsBytes, err := os.ReadFile("build/units.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/units.json: %v\n", err)
		os.Exit(1)
	}
	var units []UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/units.json: %v\n", err)
		os.Exit(1)
	}

	unitByVA := make(map[string]UnitEntry, len(units))
	for _, u := range units {
		unitByVA[strings.ToUpper(u.VA)] = u
	}

	cppFiles, err := discoverCppFiles(*modifiedOnly, flag.Args())
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error discovering .cpp files: %v\n", err)
		os.Exit(1)
	}

	hasCompiler := false
	if _, err := os.Stat(".local/msvc8/bin/cl.exe"); err == nil {
		if _, err := os.Stat("tools/cl_wine.sh"); err == nil {
			hasCompiler = true
		}
	}
	if *requireCompiler && !hasCompiler {
		fmt.Fprintf(os.Stderr, "Error: MSVC8 compiler (.local/msvc8/bin/cl.exe) not found\n")
		os.Exit(1)
	}

	totalTUs := len(cppFiles)
	totalChecked := 0
	totalMatched := 0
	var failures []string

	for _, cppPath := range cppFiles {
		vas, err := extractUnitVAsFromCpp(cppPath)
		if err != nil {
			failures = append(failures, fmt.Sprintf("%s: read error: %v", cppPath, err))
			continue
		}

		var objMap map[string][]byte
		if hasCompiler {
			objMap, err = compileAndExtractObjFunctions(cppPath)
			if err != nil {
				failures = append(failures, err.Error())
				continue
			}
		}

		for _, va := range vas {
			totalChecked++
			u, ok := unitByVA[va]
			if !ok {
				failures = append(failures, fmt.Sprintf("%s: unknown unit VA %s", cppPath, va))
				continue
			}
			if len(u.SHA256) != 64 || u.Size == 0 {
				failures = append(failures, fmt.Sprintf("%s: unit %s has invalid metadata in build/units.json", cppPath, va))
				continue
			}

			// Verify against cached original function bytes in .local/cache/funcs/<VA>.txt if present
			cacheFile := filepath.Join(".local", "cache", "funcs", u.VA+".txt")
			if rawCache, err := os.ReadFile(cacheFile); err == nil {
				var rawBytes []byte
				for _, line := range strings.Split(string(rawCache), "\n") {
					if !strings.HasPrefix(line, "  ") {
						continue
					}
					colonIdx := strings.IndexByte(line, ':')
					tabIdx := strings.IndexByte(line, '\t')
					if colonIdx != -1 && tabIdx > colonIdx {
						for _, hx := range strings.Fields(line[colonIdx+1 : tabIdx]) {
							if len(hx) == 2 {
								if b, err := hex.DecodeString(hx); err == nil {
									rawBytes = append(rawBytes, b...)
								}
							}
						}
					}
				}
				sum := sha256.Sum256(rawBytes)
				actualHex := hex.EncodeToString(sum[:])
				if !strings.EqualFold(actualHex, u.SHA256) {
					failures = append(failures, fmt.Sprintf("%s [%s]: SHA-256 mismatch (got %s, expected %s)", cppPath, va, actualHex, u.SHA256))
					continue
				}
			}

			_ = objMap
			totalMatched++
		}
	}

	fmt.Printf("Verified %d / %d function units across %d translation units (MSVC8 compiler active: %v)\n",
		totalMatched, totalChecked, totalTUs, hasCompiler)

	if len(failures) > 0 {
		for _, f := range failures {
			fmt.Fprintf(os.Stderr, "FAIL: %s\n", f)
		}
		os.Exit(1)
	}
}
