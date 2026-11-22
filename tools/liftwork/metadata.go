package main

import (
	"fmt"
	"os/exec"
	"regexp"
	"strconv"
	"strings"
)

// ParsedMeta holds structured annotations extracted from a lifted C++ file.
type ParsedMeta struct {
	Name      string
	Class     string
	Summary   string
	Signature string
	Fields    []FieldSpec
}

var (
	metaNameRe    = regexp.MustCompile(`(?m)^\s*//\s*@name\s+(.+?)\s*$`)
	metaClassRe   = regexp.MustCompile(`(?m)^\s*//\s*@class\s+(.+?)\s*$`)
	metaSummaryRe = regexp.MustCompile(`(?m)^\s*//\s*@summary\s+(.+?)\s*$`)
	metaFieldRe   = regexp.MustCompile(`(?m)^\s*//\s*@field\s+(\S+)\s+\+?(-?0x[0-9A-Fa-f]+|[0-9]+)\s+(.+?)\s*$`)

	// Forbidden markers checked against code (comments stripped for asm/naked/_emit; raw text for TODO).
	forbiddenAsmRe  = regexp.MustCompile(`\b(__asm|__asm__|asm|_emit)\b|__declspec\s*\(\s*naked\s*\)`)
	forbiddenTodoRe = regexp.MustCompile(`(?i)(//\s*TODO\b|/\*\s*TODO\b|\bTODO\s*:)`)
)

// stripCppComments removes // and /* */ comments while preserving string/char literals and newlines.
func stripCppComments(src string) string {
	var out strings.Builder
	out.Grow(len(src))
	n := len(src)
	i := 0
	for i < n {
		c := src[i]
		// String or char literal
		if c == '"' || c == '\'' {
			quote := c
			out.WriteByte(c)
			i++
			for i < n {
				ch := src[i]
				out.WriteByte(ch)
				i++
				if ch == '\\' && i < n {
					out.WriteByte(src[i])
					i++
					continue
				}
				if ch == quote {
					break
				}
			}
			continue
		}
		// Line comment
		if c == '/' && i+1 < n && src[i+1] == '/' {
			i += 2
			for i < n && src[i] != '\n' {
				i++
			}
			continue
		}
		// Block comment
		if c == '/' && i+1 < n && src[i+1] == '*' {
			i += 2
			for i+1 < n && !(src[i] == '*' && src[i+1] == '/') {
				if src[i] == '\n' {
					out.WriteByte('\n')
				}
				i++
			}
			if i+1 < n {
				i += 2
			}
			continue
		}
		out.WriteByte(c)
		i++
	}
	return out.String()
}

// validateLiftedSource enforces hard rules: zero __asm, __declspec(naked), _emit, or TODO stubs.
func validateLiftedSource(src string) error {
	if forbiddenTodoRe.MatchString(src) {
		return fmt.Errorf("lifted source contains TODO marker (stubs/incomplete lifts are forbidden)")
	}
	codeOnly := stripCppComments(src)
	if m := forbiddenAsmRe.FindString(codeOnly); m != "" {
		return fmt.Errorf("lifted source contains forbidden inline assembly / naked marker: %q", m)
	}
	if strings.TrimSpace(codeOnly) == "" {
		return fmt.Errorf("lifted source has no C++ code")
	}
	return nil
}

// normalizeOffset parses hex ("0x14", "+0x14") or decimal ("20") and returns canonical "+0x14" and int value.
func normalizeOffset(raw string) (string, int64, error) {
	s := strings.TrimSpace(raw)
	s = strings.TrimPrefix(s, "+")
	var v int64
	var err error
	if strings.HasPrefix(strings.ToLower(s), "0x") || strings.HasPrefix(strings.ToLower(s), "-0x") {
		v, err = strconv.ParseInt(s, 0, 64)
	} else {
		v, err = strconv.ParseInt(s, 10, 64)
	}
	if err != nil {
		return "", 0, fmt.Errorf("invalid field offset %q: %w", raw, err)
	}
	if v < 0 {
		return fmt.Sprintf("-0x%X", -v), v, nil
	}
	return fmt.Sprintf("+0x%X", v), v, nil
}

// parseFieldLine parses the `<type> <fieldName>` tail of a `// @field` annotation.
// Supports multi-word types and pointers like `const char* name` or `unsigned int count`.
func parseFieldTypeAndName(tail string) (string, string, error) {
	// Strip trailing inline comment if present.
	if idx := strings.Index(tail, "//"); idx != -1 {
		tail = tail[:idx]
	}
	tail = strings.TrimSpace(strings.TrimSuffix(strings.TrimSpace(tail), ";"))
	fields := strings.Fields(tail)
	if len(fields) < 2 {
		return "", "", fmt.Errorf("expected '<type> <fieldName>', got %q", tail)
	}
	name := fields[len(fields)-1]
	// Handle pointer/reference attached to name (e.g. `char *ptr` -> type `char*`, name `ptr`).
	ptrPrefix := ""
	for strings.HasPrefix(name, "*") || strings.HasPrefix(name, "&") {
		ptrPrefix += name[:1]
		name = name[1:]
	}
	if name == "" {
		return "", "", fmt.Errorf("missing field name in %q", tail)
	}
	typ := strings.Join(fields[:len(fields)-1], " ") + ptrPrefix
	return typ, name, nil
}

// parseMetadata extracts @name, @class, @summary, @field, and function signature from lifted C++ source.
func parseMetadata(src string) (ParsedMeta, error) {
	var m ParsedMeta
	if sm := metaNameRe.FindStringSubmatch(src); len(sm) == 2 {
		m.Name = strings.TrimSpace(sm[1])
	}
	if sm := metaClassRe.FindStringSubmatch(src); len(sm) == 2 {
		m.Class = strings.TrimSpace(sm[1])
	}
	if sm := metaSummaryRe.FindStringSubmatch(src); len(sm) == 2 {
		m.Summary = strings.TrimSpace(sm[1])
	}
	if m.Class == "" && strings.Contains(m.Name, "::") {
		if idx := strings.LastIndex(m.Name, "::"); idx != -1 {
			m.Class = strings.TrimSpace(m.Name[:idx])
		}
	}

	seenField := map[string]bool{}
	for _, fm := range metaFieldRe.FindAllStringSubmatch(src, -1) {
		cls := strings.TrimSpace(fm[1])
		offStr, _, err := normalizeOffset(fm[2])
		if err != nil {
			return m, err
		}
		typ, fname, err := parseFieldTypeAndName(fm[3])
		if err != nil {
			return m, fmt.Errorf("@field %s %s: %w", cls, offStr, err)
		}
		key := cls + "|" + offStr + "|" + typ + "|" + fname
		if !seenField[key] {
			seenField[key] = true
			m.Fields = append(m.Fields, FieldSpec{
				Class:  cls,
				Offset: offStr,
				Type:   typ,
				Name:   fname,
			})
		}
	}

	m.Signature = extractSignature(src)
	if m.Name == "" {
		return m, fmt.Errorf("missing required metadata tag: // @name <functionName>")
	}
	if strings.HasPrefix(m.Name, "<") || strings.EqualFold(m.Name, "todo") {
		return m, fmt.Errorf("placeholder @name %q must be replaced with a real name", m.Name)
	}
	if m.Summary == "" {
		return m, fmt.Errorf("missing required metadata tag: // @summary <one-line description>")
	}
	if strings.HasPrefix(m.Summary, "<") {
		return m, fmt.Errorf("placeholder @summary %q must be replaced with a real description", m.Summary)
	}
	return m, nil
}

// extractSignature finds the first C++ function definition header in src.
func extractSignature(src string) string {
	lines := strings.Split(strings.ReplaceAll(src, "\r\n", "\n"), "\n")
	var buf strings.Builder
	collecting := false
	for _, l := range lines {
		t := strings.TrimSpace(l)
		if t == "" || strings.HasPrefix(t, "//") || strings.HasPrefix(t, "#") {
			continue
		}
		// Skip forward declarations / typedefs / using / struct / namespace lines ending in ';'
		if !collecting {
			if strings.HasPrefix(t, "extern ") && strings.HasSuffix(t, ";") {
				continue
			}
			if strings.HasPrefix(t, "typedef ") || strings.HasPrefix(t, "using ") || strings.HasPrefix(t, "struct ") || strings.HasPrefix(t, "class ") || strings.HasPrefix(t, "namespace ") {
				continue
			}
		}
		if strings.Contains(t, "(") || collecting {
			collecting = true
			if buf.Len() > 0 {
				buf.WriteByte(' ')
			}
			buf.WriteString(t)
			if idx := strings.IndexByte(t, '{'); idx != -1 {
				s := buf.String()
				if bidx := strings.IndexByte(s, '{'); bidx != -1 {
					s = s[:bidx]
				}
				return strings.TrimSpace(s)
			}
			if strings.HasSuffix(t, ";") {
				// It was a declaration, not a definition; reset.
				buf.Reset()
				collecting = false
			}
		}
	}
	return ""
}

// findNativeCompiler returns "g++" or "clang++" if available in PATH.
func findNativeCompiler() (string, error) {
	for _, cc := range []string{"g++", "clang++"} {
		if p, err := exec.LookPath(cc); err == nil {
			return p, nil
		}
	}
	return "", fmt.Errorf("neither g++ nor clang++ found in PATH")
}

// syntaxCheckCpp compiles cppPath with -std=c++17 -fsyntax-only -Wall -Wno-unused.
func syntaxCheckCpp(cppPath string) (string, error) {
	cc, err := findNativeCompiler()
	if err != nil {
		return "", err
	}
	args := []string{
		"-std=c++17",
		"-fsyntax-only",
		"-Wall",
		"-Wno-unused",
		"-Ilifted/include",
		"-Iinclude",
		cppPath,
	}
	out, err := exec.Command(cc, args...).CombinedOutput()
	return string(out), err
}
