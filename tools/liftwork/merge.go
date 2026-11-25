package main

import (
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strings"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

const (
	liftWipBannerPrefix   = "// Isolated lift WIP:"
	liftShardBannerPrefix = "// Lifted C++ translation unit:"
)

var (
	externCBlockStartRe = regexp.MustCompile(`^extern\s+"C"\s*\{\s*$`)
	externCInlineRe     = regexp.MustCompile(`\bextern\s+"C"\s+`)
)

// stripExternCForNamespace rewrites `extern "C"` declarations and `extern "C" { ... }`
// blocks so they use C++ linkage scoped to the enclosing per-VA namespace. This prevents
// cross-function collisions when two lifted functions in the same translation unit declare
// the same ext_XXXXXXXX or mem_XXXXXXXX symbol with different parameter lists or types.
func stripExternCForNamespace(lines []string) []string {
	out := make([]string, 0, len(lines))
	inExternCBlock := false
	blockDepth := 0
	for _, l := range lines {
		t := strings.TrimSpace(l)
		if !inExternCBlock && externCBlockStartRe.MatchString(t) {
			inExternCBlock = true
			blockDepth = 1
			continue
		}
		if inExternCBlock {
			code := stripCppComments(l)
			opens := strings.Count(code, "{")
			closes := strings.Count(code, "}")
			nextDepth := blockDepth + opens - closes
			if nextDepth <= 0 && t == "}" {
				inExternCBlock = false
				blockDepth = 0
				continue
			}
			blockDepth = nextDepth
			if blockDepth <= 0 {
				inExternCBlock = false
				blockDepth = 0
			}
		}
		if strings.Contains(l, `extern "C"`) {
			// Replace `extern "C" ` with `extern ` unless followed by typedef/using.
			replaced := externCInlineRe.ReplaceAllStringFunc(l, func(m string) string {
				return "extern "
			})
			// Fix rare `extern typedef` / `extern using` if present.
			replaced = strings.ReplaceAll(replaced, "extern typedef ", "typedef ")
			replaced = strings.ReplaceAll(replaced, "extern using ", "using ")
			out = append(out, replaced)
			continue
		}
		out = append(out, l)
	}
	return out
}

// stripLiftedFunc removes any existing // [0xVA] block from a lifted .cpp file content.
func stripLiftedFunc(content, vaHex string) string {
	norm := unitstore.NormVA(vaHex)
	lines := strings.Split(strings.ReplaceAll(content, "\r\n", "\n"), "\n")
	var out []string
	skipping := false
	for _, l := range lines {
		// Only match unindented column-0 `// [0xXXXXXXXX]` block markers (never indented inline comments).
		if m := markerLineRe.FindStringSubmatch(l); len(m) == 2 {
			if unitstore.NormVA(m[1]) == norm {
				skipping = true
				continue
			}
			skipping = false
		}
		if !skipping {
			out = append(out, l)
		}
	}
	return strings.TrimRight(strings.Join(out, "\n"), "\n") + "\n"
}

// mergeLiftedFile merges a verified lifted WIP file into dstPath (lifted/<rel-path>.cpp).
// Deduplicates #include lines into the file preamble, isolates per-function declarations,
// helper structs/constants, and the function body inside `namespace lift_<VA> { ... }`
// so independently lifted functions never collide in the same translation unit, strips
// any prior block for vaHex, and writes dstPath atomically.
func mergeLiftedFile(wipPath, dstPath, vaHex string) error {
	wipBytes, err := os.ReadFile(wipPath)
	if err != nil {
		return err
	}
	norm := unitstore.NormVA(vaHex)
	vaHexUpper := strings.TrimPrefix(norm, "0x")
	wipLines := strings.Split(strings.ReplaceAll(string(wipBytes), "\r\n", "\n"), "\n")

	var wipIncludes []string
	var wipPreamble []string
	var wipFuncLines []string
	markerLine := ""
	inFunc := false

	for _, l := range wipLines {
		t := strings.TrimSpace(l)
		if strings.HasPrefix(t, "#include") {
			wipIncludes = append(wipIncludes, t)
			continue
		}
		if !inFunc {
			if m := markerLineRe.FindStringSubmatch(t); len(m) == 2 {
				inFunc = true
				markerLine = l
				continue
			}
			if strings.HasPrefix(t, liftWipBannerPrefix) || strings.HasPrefix(t, liftShardBannerPrefix) {
				continue
			}
			wipPreamble = append(wipPreamble, l)
		} else {
			wipFuncLines = append(wipFuncLines, l)
		}
	}

	if markerLine == "" {
		markerLine = fmt.Sprintf("// [%s]", norm)
	}

	var innerLines []string
	trimmedPreamble := strings.TrimSpace(strings.Join(wipPreamble, "\n"))
	if trimmedPreamble != "" {
		innerLines = append(innerLines, strings.Split(trimmedPreamble, "\n")...)
	}
	trimmedFunc := strings.TrimSpace(strings.Join(wipFuncLines, "\n"))
	if trimmedFunc != "" {
		if len(innerLines) > 0 {
			innerLines = append(innerLines, "")
		}
		innerLines = append(innerLines, strings.Split(trimmedFunc, "\n")...)
	}
	innerLines = stripExternCForNamespace(innerLines)

	nsName := "lift_" + vaHexUpper
	funcBlock := fmt.Sprintf("%s\nnamespace %s {\n%s\n} // namespace %s",
		markerLine, nsName, strings.TrimSpace(strings.Join(innerLines, "\n")), nsName)

	var dstContent string
	if curBytes, err := os.ReadFile(dstPath); err == nil {
		dstContent = stripLiftedFunc(string(curBytes), norm)
	} else {
		dstContent = fmt.Sprintf("%s %s\n#include \"lift_compat.h\"\n", liftShardBannerPrefix, filepath.ToSlash(dstPath))
	}

	dstLines := strings.Split(strings.ReplaceAll(dstContent, "\r\n", "\n"), "\n")
	firstMarker := -1
	for i, l := range dstLines {
		if markerLineRe.MatchString(strings.TrimSpace(l)) {
			firstMarker = i
			break
		}
	}

	var dstPreamble, dstBody []string
	if firstMarker == -1 {
		dstPreamble = dstLines
	} else {
		dstPreamble = dstLines[:firstMarker]
		dstBody = dstLines[firstMarker:]
	}

	existing := map[string]bool{}
	for _, l := range dstPreamble {
		if t := strings.TrimSpace(l); t != "" {
			existing[t] = true
		}
	}

	var newIncludes []string
	for _, inc := range wipIncludes {
		if !existing[inc] {
			existing[inc] = true
			newIncludes = append(newIncludes, inc)
		}
	}

	for len(dstPreamble) > 0 && strings.TrimSpace(dstPreamble[len(dstPreamble)-1]) == "" {
		dstPreamble = dstPreamble[:len(dstPreamble)-1]
	}
	dstPreamble = append(dstPreamble, newIncludes...)

	var out strings.Builder
	out.WriteString(strings.Join(dstPreamble, "\n"))
	out.WriteString("\n")
	if bodyStr := strings.TrimSpace(strings.Join(dstBody, "\n")); bodyStr != "" {
		out.WriteString("\n")
		out.WriteString(bodyStr)
		out.WriteString("\n")
	}
	out.WriteString("\n")
	out.WriteString(funcBlock)
	out.WriteString("\n")

	return writeFileAtomic(dstPath, []byte(out.String()), 0o644)
}

// aggregatedField tracks a single (offset, type, name) observation and all VAs that reported it.
type aggregatedField struct {
	OffsetVal int64
	OffsetStr string
	Type      string
	Name      string
	VAs       []string
}

// rebuildStructsAndSymbols idempotently rebuilds lifted/symbols.json and all lifted/include/<Class>.h
// headers from build/lifted/*/*.json. Returns (symbolsCount, headersCount, conflictsCount, err).
func rebuildStructsAndSymbols() (int, int, int, error) {
	entries, err := readAllLiftEntries()
	if err != nil {
		return 0, 0, 0, err
	}
	return rebuildStructsAndSymbolsFromEntries(entries, loadClassesMap())
}

func rebuildStructsAndSymbolsFromEntries(entries map[string]LiftEntry, classes map[string]decomp.ClassEntry) (int, int, int, error) {
	syms := make(map[string]SymbolEntry, len(entries))

	// class -> (offsetStr|type|name -> *aggregatedField)
	byClass := map[string]map[string]*aggregatedField{}

	for _, va := range sortedVAs(entries) {
		e := entries[va]
		if e.Status != "lifted" {
			continue
		}
		syms[va] = SymbolEntry{
			Name:       e.Name,
			Class:      e.Class,
			Signature:  e.Signature,
			Summary:    e.Summary,
			LiftedPath: e.LiftedPath,
		}
		for _, f := range e.Fields {
			if f.Class == "" || f.Name == "" || f.Type == "" {
				continue
			}
			cls := f.Class
			if cls == "?" || strings.Trim(decomp.SanitizeFilename(cls), "_.") == "" {
				cls = "Unknown"
			}
			offStr, offVal, err := normalizeOffset(f.Offset)
			if err != nil {
				continue
			}
			cmap := byClass[cls]
			if cmap == nil {
				cmap = map[string]*aggregatedField{}
				byClass[cls] = cmap
			}
			key := fmt.Sprintf("%d|%s|%s", offVal, f.Type, f.Name)
			af := cmap[key]
			if af == nil {
				af = &aggregatedField{
					OffsetVal: offVal,
					OffsetStr: offStr,
					Type:      f.Type,
					Name:      f.Name,
				}
				cmap[key] = af
			}
			af.VAs = append(af.VAs, va)
		}
	}

	if err := writeSymbolsJSON(syms); err != nil {
		return 0, 0, 0, err
	}

	classNames := make([]string, 0, len(byClass))
	for c := range byClass {
		classNames = append(classNames, c)
	}
	sort.Strings(classNames)

	totalConflicts := 0
	for _, cls := range classNames {
		cmap := byClass[cls]
		fields := make([]*aggregatedField, 0, len(cmap))
		offsetCount := map[int64]int{}
		for _, af := range cmap {
			sort.Strings(af.VAs)
			fields = append(fields, af)
			offsetCount[af.OffsetVal]++
		}
		sort.Slice(fields, func(i, j int) bool {
			if fields[i].OffsetVal != fields[j].OffsetVal {
				return fields[i].OffsetVal < fields[j].OffsetVal
			}
			if fields[i].Name != fields[j].Name {
				return fields[i].Name < fields[j].Name
			}
			return fields[i].Type < fields[j].Type
		})

		conflicts := 0
		for _, n := range offsetCount {
			if n > 1 {
				conflicts++
			}
		}
		totalConflicts += conflicts

		hdrContent := renderClassHeader(cls, fields, offsetCount, classes)
		hdrPath := filepath.Join(liftedIncDir, decomp.SanitizeFilename(cls)+".h")
		if err := writeFileAtomic(hdrPath, []byte(hdrContent), 0o644); err != nil {
			return len(syms), len(classNames), totalConflicts, err
		}
	}

	return len(syms), len(classNames), totalConflicts, nil
}

func renderClassHeader(cls string, fields []*aggregatedField, offsetCount map[int64]int, classes map[string]decomp.ClassEntry) string {
	var sb strings.Builder
	sb.WriteString("#pragma once\n\n")
	fmt.Fprintf(&sb, "// Auto-generated by liftwork merge-structs from build/lifted/*/*.json\n")
	fmt.Fprintf(&sb, "// Class: %s\n", cls)
	if ci, ok := classes[cls]; ok {
		if len(ci.BaseClasses) > 0 {
			var bases []string
			for _, b := range ci.BaseClasses {
				bases = append(bases, fmt.Sprintf("%s (+0x%X)", b.DemangledName, b.Offset))
			}
			fmt.Fprintf(&sb, "// RTTI Bases: %s\n", strings.Join(bases, ", "))
		}
		if ci.VTableVA != "" {
			fmt.Fprintf(&sb, "// RTTI VTable: %s (%d virtual methods)\n", ci.VTableVA, len(ci.VirtualMethods))
		}
	}
	sb.WriteString("\n#include \"lift_compat.h\"\n\n")

	safeName := decomp.SanitizeFilename(cls)
	fmt.Fprintf(&sb, "// Recovered field layout for %s:\n", cls)
	fmt.Fprintf(&sb, "namespace lifted_layout {\n")
	fmt.Fprintf(&sb, "struct %s_Fields {\n", safeName)
	for _, af := range fields {
		conflictTag := ""
		if offsetCount[af.OffsetVal] > 1 {
			conflictTag = " // CONFLICT: multiple definitions at " + af.OffsetStr
		}
		fmt.Fprintf(&sb, "    // %-6s %-24s %s  (evidence: %s)%s\n",
			af.OffsetStr, af.Type, af.Name, strings.Join(af.VAs, ", "), conflictTag)
	}
	fmt.Fprintf(&sb, "};\n")
	fmt.Fprintf(&sb, "} // namespace lifted_layout\n")
	return sb.String()
}
