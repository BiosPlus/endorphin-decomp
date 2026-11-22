package main

import (
	"bytes"
	"debug/pe"
	"encoding/binary"
	"encoding/json"
	"fmt"
	"math"
	"os"
	"path/filepath"
	"strings"
	"sync"

	"endorphin_decomp/internal/decomp"
)

var (
	peOnce     sync.Once
	peSections []peSection

	classesOnce sync.Once
	classesByName map[string]decomp.ClassEntry
)

type peSection struct {
	name    string
	vaStart uint32
	vaEnd   uint32
	data    []byte
}

func initPESections() {
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
		if sec.Name != ".rdata" && sec.Name != ".data" && sec.Name != "CONST" {
			continue
		}
		data, err := sec.Data()
		if err != nil || len(data) == 0 {
			continue
		}
		vaStart := imageBase + sec.VirtualAddress
		peSections = append(peSections, peSection{
			name:    sec.Name,
			vaStart: vaStart,
			vaEnd:   vaStart + uint32(len(data)),
			data:    data,
		})
	}
}

// decodeMemRef inspects .rdata/.data/CONST in .local/bin/endorphin.exe at va
// and returns a human-readable description (string literal, float/double, or u32).
func decodeMemRef(va uint32) string {
	peOnce.Do(initPESections)
	var rem []byte
	var secName string
	for _, sec := range peSections {
		if va >= sec.vaStart && va < sec.vaEnd {
			rem = sec.data[va-sec.vaStart:]
			secName = sec.name
			break
		}
	}
	if len(rem) == 0 {
		return ""
	}
	return decodeMemBytes(rem, secName)
}

func decodeMemBytes(rem []byte, secName string) string {
	if len(rem) == 0 {
		return ""
	}
	// Check for null-terminated printable ASCII string (length >= 2).
	maxScan := len(rem)
	if maxScan > 256 {
		maxScan = 256
	}
	strLen := -1
	for i := 0; i < maxScan; i++ {
		c := rem[i]
		if c == 0 {
			if i >= 2 {
				strLen = i
			}
			break
		}
		if (c < 0x20 || c > 0x7e) && c != '\t' && c != '\n' && c != '\r' {
			break
		}
	}
	if strLen >= 2 {
		s := string(rem[:strLen])
		if len(s) > 96 {
			s = s[:96] + "..."
		}
		return fmt.Sprintf("%s string %q", secName, s)
	}

	// Check for plausible IEEE-754 float (32-bit) or double (64-bit).
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

		if plausibleF32 && plausibleF64 {
			return fmt.Sprintf("%s float %g / double %g (u32 0x%08X)", secName, f32, f64, u32)
		}
		if plausibleF32 {
			return fmt.Sprintf("%s float %g (u32 0x%08X)", secName, f32, u32)
		}
		if plausibleF64 {
			return fmt.Sprintf("%s double %g", secName, f64)
		}
		return fmt.Sprintf("%s u32 0x%08X", secName, u32)
	}
	return ""
}

func loadClassesMap() map[string]decomp.ClassEntry {
	classesOnce.Do(func() {
		classesByName = map[string]decomp.ClassEntry{}
		b, err := os.ReadFile("build/classes.json")
		if err != nil {
			return
		}
		var list []decomp.ClassEntry
		if json.Unmarshal(b, &list) != nil {
			return
		}
		for _, c := range list {
			if c.DemangledName != "" {
				classesByName[c.DemangledName] = c
			}
			if c.ShortName != "" {
				if _, exists := classesByName[c.ShortName]; !exists {
					classesByName[c.ShortName] = c
				}
			}
		}
	})
	return classesByName
}

func inferClassFromSymbol(symbol string) string {
	if idx := strings.LastIndex(symbol, "::"); idx != -1 {
		return strings.TrimSpace(symbol[:idx])
	}
	return ""
}

func readLiftedClassHeader(className string) string {
	if className == "" {
		return ""
	}
	p := filepath.Join(liftedIncDir, decomp.SanitizeFilename(className)+".h")
	b, err := os.ReadFile(p)
	if err != nil {
		return ""
	}
	s := strings.TrimSpace(string(b))
	if len(s) > 4096 {
		s = s[:4096] + "\n// ... (truncated)"
	}
	return s
}
