package main

import (
	"io/fs"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"sync"

	"endorphin_decomp/internal/unitstore"
)

// SrcFunc holds extracted information about a matched function in src/.
type SrcFunc struct {
	VA      string
	SrcPath string
	Body    string
	HasAsm  bool
	Callees []string // normalized VAs from ext_XXXXXXXX
	MemRefs []string // normalized VAs from mem_XXXXXXXX
}

var (
	markerLineRe = regexp.MustCompile(`^//\s*\[(0x[0-9A-Fa-f]{8})\]`)
	fnDefRe      = regexp.MustCompile(`(?i)\bextern\s+"C"\s+.*\bfn_([0-9A-Fa-f]{8})\s*\(`)
	extRefRe     = regexp.MustCompile(`\bext_([0-9A-Fa-f]{8})\b`)
	memRefRe     = regexp.MustCompile(`\bmem_([0-9A-Fa-f]{8})\b`)
	asmBodyRe    = regexp.MustCompile(`\b__asm\b|__declspec\s*\(\s*naked\s*\)|\b_emit\b`)

	srcIndexOnce sync.Once
	srcIndexMap  map[string]*SrcFunc
)

// coreScopePatterns is the built-in `--scope core` preset from LIFT_PLAN.md.
var coreScopePatterns = []string{
	"BVHIO",
	"AcclaimIO",
	"Acclaim2*",
	"FBXIO",
	"NMFileIO",
	"OBJIO",
	"CDLCharacterIO",
	"CSMMotionIO",
	"NMCIO",
	"ExportDialog",
	"ExportUnavailableDialog",
	"MdtArthur",
	"RuntimeEngine",
	"Geometry",
	"Sensors",
	"StateMachine",
	"Interpolator",
	"ExprParser",
	"NMData",
	"Primitives",
	"NMCamera",
	"Chromosome",
	"MultiTrackView",
}

func scanSrcDir(root string) map[string]*SrcFunc {
	out := make(map[string]*SrcFunc, 25000)
	_ = filepath.WalkDir(root, func(path string, d fs.DirEntry, err error) error {
		if err != nil {
			return nil
		}
		slash := filepath.ToSlash(path)
		if d.IsDir() {
			if slash == "src/wip" || strings.HasPrefix(slash, "src/wip/") || strings.HasSuffix(slash, "/wip") {
				return filepath.SkipDir
			}
			return nil
		}
		if !strings.HasSuffix(path, ".cpp") {
			return nil
		}
		b, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		parseSrcFile(slash, string(b), out)
		return nil
	})
	return out
}

// parseSrcFile extracts all function blocks from a src/ translation unit.
// It handles both `// [0xXXXXXXXX]` markers and bare `extern "C" ... fn_XXXXXXXX(` blocks.
func parseSrcFile(srcPath, content string, out map[string]*SrcFunc) {
	lines := strings.Split(strings.ReplaceAll(content, "\r\n", "\n"), "\n")

	type span struct {
		va    string
		start int
	}
	var spans []span
	seenStart := map[string]bool{}

	for i, l := range lines {
		t := strings.TrimSpace(l)
		if m := markerLineRe.FindStringSubmatch(t); len(m) == 2 {
			va := unitstore.NormVA(m[1])
			spans = append(spans, span{va: va, start: i})
			seenStart[va] = true
			continue
		}
		if m := fnDefRe.FindStringSubmatch(t); len(m) == 2 {
			va := unitstore.NormVA("0x" + m[1])
			// Only start a new span if the previous span wasn't just the marker for this same VA.
			if len(spans) > 0 && spans[len(spans)-1].va == va && i-spans[len(spans)-1].start <= 4 {
				continue
			}
			if !seenStart[va] {
				spans = append(spans, span{va: va, start: i})
				seenStart[va] = true
			}
		}
	}

	for idx, sp := range spans {
		end := len(lines)
		if idx+1 < len(spans) {
			end = spans[idx+1].start
		}
		body := strings.TrimSpace(strings.Join(lines[sp.start:end], "\n"))
		callees := uniqueRefs(extRefRe.FindAllStringSubmatch(body, -1))
		memRefs := uniqueRefs(memRefRe.FindAllStringSubmatch(body, -1))
		out[sp.va] = &SrcFunc{
			VA:      sp.va,
			SrcPath: srcPath,
			Body:    body,
			HasAsm:  asmBodyRe.MatchString(body),
			Callees: callees,
			MemRefs: memRefs,
		}
	}
}

func uniqueRefs(matches [][]string) []string {
	if len(matches) == 0 {
		return nil
	}
	seen := make(map[string]bool, len(matches))
	out := make([]string, 0, len(matches))
	for _, m := range matches {
		if len(m) < 2 {
			continue
		}
		va := unitstore.NormVA("0x" + m[1])
		if !seen[va] {
			seen[va] = true
			out = append(out, va)
		}
	}
	return out
}

func getSrcIndex() map[string]*SrcFunc {
	srcIndexOnce.Do(func() {
		srcIndexMap = scanSrcDir("src")
	})
	return srcIndexMap
}

// matchesScope reports whether a function with the given srcPath and symbol matches scope.
// scope may be "all", "core", or a comma-separated list of prefixes/globs.
func matchesScope(scope, srcPath, symbol string) bool {
	scope = strings.TrimSpace(scope)
	if scope == "" || strings.EqualFold(scope, "all") {
		return true
	}
	var patterns []string
	if strings.EqualFold(scope, "core") {
		patterns = coreScopePatterns
	} else {
		for _, p := range strings.Split(scope, ",") {
			p = strings.TrimSpace(p)
			if p != "" {
				patterns = append(patterns, p)
			}
		}
	}
	if len(patterns) == 0 {
		return true
	}

	slash := filepath.ToSlash(srcPath)
	rel := strings.TrimPrefix(slash, "src/")
	base := strings.TrimSuffix(filepath.Base(rel), ".cpp")
	topDir := ""
	if i := strings.IndexByte(rel, '/'); i != -1 {
		topDir = rel[:i]
	}
	symClass := symbol
	if i := strings.LastIndex(symbol, "::"); i != -1 {
		symClass = symbol[:i]
	}

	for _, pat := range patterns {
		if matchPattern(pat, base) || matchPattern(pat, topDir) || matchPattern(pat, rel) || matchPattern(pat, symClass) || matchPattern(pat, symbol) {
			return true
		}
	}
	return false
}

func matchPattern(pat, target string) bool {
	if target == "" || pat == "" {
		return false
	}
	if strings.ContainsAny(pat, "*?[") {
		if ok, _ := filepath.Match(strings.ToLower(pat), strings.ToLower(target)); ok {
			return true
		}
		// Also match prefix before trailing '*' against namespace::class or dir/file.
		if strings.HasSuffix(pat, "*") {
			pfx := strings.ToLower(strings.TrimSuffix(pat, "*"))
			if strings.HasPrefix(strings.ToLower(target), pfx) {
				return true
			}
		}
		return false
	}
	lp, lt := strings.ToLower(pat), strings.ToLower(target)
	if lt == lp {
		return true
	}
	// Match namespace/dir prefix (e.g. "Geometry" matches "Geometry::Vec3" or "Geometry/Vec3.cpp").
	if strings.HasPrefix(lt, lp+"::") || strings.HasPrefix(lt, lp+"/") || strings.HasPrefix(lt, lp+"_") {
		return true
	}
	return false
}
