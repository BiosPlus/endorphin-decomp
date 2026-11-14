package main

import (
	"bytes"
	"debug/pe"
	"encoding/binary"
	"fmt"
	"math"
	"os"
	"regexp"
	"strings"
	"sync"
)

var (
	declspecNakedRe = regexp.MustCompile(`__declspec\s*\(\s*naked\s*\)\s*`)
	multiSpaceRe    = regexp.MustCompile(`\s+`)

	peMemOnce     sync.Once
	peMemSections []peMemSection
)

type peMemSection struct {
	name    string
	vaStart uint32
	vaEnd   uint32
	data    []byte
}

func initPEMemSections() {
	raw, err := os.ReadFile(".local/bin/endorphin.exe")
	if err != nil {
		return
	}
	f, err := pe.NewFile(bytes.NewReader(raw))
	if err != nil {
		return
	}
	defer f.Close()

	var imageBase uint32 = 0x00400000
	if oh, ok := f.OptionalHeader.(*pe.OptionalHeader32); ok {
		imageBase = oh.ImageBase
	}

	for _, sec := range f.Sections {
		if sec.Name != ".rdata" && sec.Name != ".data" {
			continue
		}
		data, err := sec.Data()
		if err != nil || len(data) == 0 {
			continue
		}
		vaStart := imageBase + sec.VirtualAddress
		peMemSections = append(peMemSections, peMemSection{
			name:    sec.Name,
			vaStart: vaStart,
			vaEnd:   vaStart + uint32(len(data)),
			data:    data,
		})
	}
}

// lookupMatchedCalleeSignature inspects src/ for an implemented function at
// calleeVA and returns a rewritten `extern "C" ... ext_XXXXXXXX(...);`
// declaration preserving its return type, calling convention, and parameters.
// Returns "" if the callee is not found or still has `// TODO: implement`.
func lookupMatchedCalleeSignature(calleeVA string) string {
	vaHex, vaU32, err := normalizeVA(calleeVA)
	if err != nil {
		return ""
	}
	cppPath := lookupCppForVA(vaHex)
	if cppPath == "" {
		return ""
	}
	b, err := os.ReadFile(cppPath)
	if err != nil {
		return ""
	}

	hexPart := strings.TrimPrefix(vaHex, "0x")
	fnPat := regexp.MustCompile(`(?i)\bextern\s+"C"\b.*\bfn_` + hexPart + `\s*\(`)
	lines := strings.Split(string(b), "\n")

	for i, line := range lines {
		if !fnPat.MatchString(line) {
			continue
		}

		// Collect signature lines until the closing ')' of the parameter list.
		var sigBuf strings.Builder
		sigEndLine := i
		for j := i; j < len(lines) && j < i+10; j++ {
			if sigBuf.Len() > 0 {
				sigBuf.WriteByte(' ')
			}
			sigBuf.WriteString(strings.TrimSpace(lines[j]))
			sigEndLine = j
			if strings.Contains(lines[j], ")") {
				break
			}
		}

		// Check whether this function body is still an unimplemented stub.
		for j := i; j < len(lines); j++ {
			trimmed := strings.TrimSpace(lines[j])
			if j > i && unitMarkerLineRe.MatchString(trimmed) {
				break
			}
			if strings.Contains(trimmed, "TODO: implement") {
				return ""
			}
			if j > sigEndLine && strings.HasPrefix(lines[j], "}") {
				break
			}
		}

		sig := sigBuf.String()
		// Strip trailing body opener or semicolon after the parameter list.
		if idx := strings.LastIndex(sig, ")"); idx != -1 {
			sig = sig[:idx+1]
		}
		sig = declspecNakedRe.ReplaceAllString(sig, "")
		sig = multiSpaceRe.ReplaceAllString(strings.TrimSpace(sig), " ")

		fnNameRe := regexp.MustCompile(`(?i)\bfn_` + hexPart + `\b`)
		sig = fnNameRe.ReplaceAllString(sig, fmt.Sprintf("ext_%08X", vaU32))
		return sig + ";"
	}
	return ""
}

// annotateMemGlobal inspects .rdata/.data in .local/bin/endorphin.exe at va
// and returns an inline C comment describing a printable ASCII string or
// plausible IEEE-754 float/double constant, or "" if unknown/out of range.
func annotateMemGlobal(va uint32) string {
	peMemOnce.Do(initPEMemSections)

	var rem []byte
	for _, sec := range peMemSections {
		if va >= sec.vaStart && va < sec.vaEnd {
			rem = sec.data[va-sec.vaStart:]
			break
		}
	}
	if len(rem) == 0 {
		return ""
	}

	// Check for null-terminated printable ASCII string (length >= 3).
	maxScan := len(rem)
	if maxScan > 256 {
		maxScan = 256
	}
	strLen := -1
	for i := 0; i < maxScan; i++ {
		c := rem[i]
		if c == 0 {
			if i >= 3 {
				strLen = i
			}
			break
		}
		if (c < 0x20 || c > 0x7e) && c != '\t' && c != '\n' && c != '\r' {
			break
		}
	}
	if strLen >= 3 {
		s := string(rem[:strLen])
		if len(s) > 64 {
			s = s[:64] + "..."
		}
		return fmt.Sprintf("/* %q */", s)
	}

	// Check for plausible IEEE-754 float (32-bit) or double (64-bit) constant.
	if len(rem) >= 4 {
		u32 := binary.LittleEndian.Uint32(rem[:4])
		f32 := math.Float32frombits(u32)
		abs32 := math.Abs(float64(f32))
		plausibleF32 := u32 != 0 && !math.IsNaN(float64(f32)) && !math.IsInf(float64(f32), 0) && abs32 >= 1e-6 && abs32 <= 1e9

		var plausibleF64 bool
		var f64 float64
		if len(rem) >= 8 {
			u64 := binary.LittleEndian.Uint64(rem[:8])
			f64 = math.Float64frombits(u64)
			abs64 := math.Abs(f64)
			plausibleF64 = u64 != 0 && !math.IsNaN(f64) && !math.IsInf(f64, 0) && abs64 >= 1e-6 && abs64 <= 1e9
		}

		if plausibleF32 {
			return fmt.Sprintf("/* float %g / u32 0x%08X */", f32, u32)
		}
		if plausibleF64 {
			return fmt.Sprintf("/* double %g */", f64)
		}
		if u32 != 0 {
			return fmt.Sprintf("/* u32 0x%08X */", u32)
		}
	}

	return ""
}
