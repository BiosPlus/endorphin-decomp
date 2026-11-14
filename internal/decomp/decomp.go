// Package decomp provides shared types and helper utilities for endorphin_decomp tools.
package decomp

import (
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strconv"
	"strings"
)

// TargetConfig describes the target binary metadata in build/target.json.
type TargetConfig struct {
	BinaryName string `json:"binary_name"`
	Version    string `json:"version"`
	SHA256     string `json:"sha256"`
	ImageBase  string `json:"image_base"`
	Sections   map[string]struct {
		VA          string `json:"va"`
		RVA         string `json:"rva"`
		VirtualSize uint32 `json:"virtual_size"`
		RawSize     uint32 `json:"raw_size"`
	} `json:"sections"`
}

// UnitEntry represents a single function unit in the build/units/ ledger.
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
	SkipReason  string   `json:"skip_reason,omitempty"`
	MatchedBy   string   `json:"matched_by,omitempty"`
	MatchedAt   string   `json:"matched_at,omitempty"`
}

// BaseClassInfo describes a base class and its offset in a derived class.
type BaseClassInfo struct {
	DemangledName string `json:"demangled_name"`
	Offset        int    `json:"offset"`
}

// ClassEntry represents a class entry in build/classes.json.
type ClassEntry struct {
	MangledName        string          `json:"mangled_name"`
	DemangledName      string          `json:"demangled_name"`
	Namespace          string          `json:"namespace"`
	ShortName          string          `json:"short_name"`
	HeaderPath         string          `json:"header_path"`
	IsTemplate         bool            `json:"is_template"`
	IsMFCOrStd         bool            `json:"is_mfc_or_std"`
	VTableVA           string          `json:"vtable_va"`
	BaseClasses        []BaseClassInfo `json:"base_classes"`
	VirtualMethods     []string        `json:"virtual_methods"`
	VirtualMethodCount int             `json:"virtual_method_count"`
}

// IsOutOfScope reports whether a unit is out of scope for decompilation
// (marked out_of_scope, thunk, CRT/MFC VA range, or vfunc of an MFC/std class).
func IsOutOfScope(va string, symbol string, status string, isThunk bool, mfcClasses map[string]bool) bool {
	if status == "out_of_scope" || isThunk {
		return true
	}
	va64, err := strconv.ParseUint(strings.TrimPrefix(va, "0x"), 16, 32)
	if err == nil {
		v := uint32(va64)
		if (v >= 0x006A5C5C && v <= 0x006A7943) || (v >= 0x008728F0 && v <= 0x009221CA) {
			return true
		}
	}
	if idx := strings.LastIndex(symbol, "::vfunc_"); idx != -1 {
		clsName := symbol[:idx]
		if mfcClasses[clsName] {
			return true
		}
	}
	return false
}

// IsCompleted reports whether a unit status represents a finished unit.
func IsCompleted(status string) bool {
	return status == "decompiled" || status == "matched" || status == "solved"
}

// IsValidCodeUnit checks the cached disassembly for va (if present) and returns
// false if it contains invalid/privileged instructions or lacks a trailing ret/jmp.
func IsValidCodeUnit(va string) bool {
	cachePath := filepath.Join(".local", "cache", "funcs", va+".txt")
	b, err := os.ReadFile(cachePath)
	if err != nil {
		return true
	}
	lines := strings.Split(strings.TrimSpace(string(b)), "\n")
	lastInst := ""
	for _, l := range lines {
		l = strings.TrimSpace(l)
		if l == "" || strings.HasPrefix(l, "//") {
			continue
		}
		if strings.Contains(l, "<unknown>") || strings.Contains(l, "\tretf") || strings.Contains(l, "\tinto") || strings.Contains(l, "\tin\t") || strings.Contains(l, "\tout\t") {
			return false
		}
		lastInst = l
	}
	if lastInst == "" {
		return false
	}
	return strings.Contains(lastInst, "\tret") || strings.Contains(lastInst, "\tjmp")
}

// FindMSVCClExe returns the path to the local MSVC8 cl.exe if installed, or "".
func FindMSVCClExe() string {
	candidates := []string{
		filepath.Join(".local", "msvc8", "bin", "cl.exe"),
		filepath.Join(".local", "msvc8", "VC", "bin", "cl.exe"),
	}
	for _, c := range candidates {
		if _, err := os.Stat(c); err == nil {
			return c
		}
	}
	return ""
}

// SanitizeFilename replaces C++ symbol characters with filesystem-safe tokens.
func SanitizeFilename(s string) string {
	r := strings.NewReplacer("::", "_", "<", "_", ">", "_", " ", "_", "*", "ptr", "&", "ref", ",", "_", "/", "_")
	return r.Replace(s)
}

// DirectWineClArgs constructs an *exec.Cmd to invoke MSVC8 cl.exe directly:
// natively on Windows, or via `wine` on Linux/Unix with WINEPREFIX, WINEDEBUG=-all,
// INCLUDE, LIB, WINEPATH, and Z:\... path conversion.
func DirectWineClArgs(clExe string, args []string) (*exec.Cmd, error) {
	if clExe == "" {
		clExe = FindMSVCClExe()
	}
	if clExe == "" {
		return nil, fmt.Errorf("MSVC8 cl.exe not found")
	}

	absCl, err := filepath.Abs(clExe)
	if err != nil {
		return nil, err
	}
	absBin := filepath.Dir(absCl)
	absMSVC := filepath.Dir(absBin)

	hasNologo := false
	for _, a := range args {
		if strings.EqualFold(a, "/nologo") {
			hasNologo = true
			break
		}
	}

	if runtime.GOOS == "windows" {
		cmdArgs := make([]string, 0, len(args)+1)
		if !hasNologo {
			cmdArgs = append(cmdArgs, "/nologo")
		}
		cmdArgs = append(cmdArgs, args...)

		cmd := exec.Command(absCl, cmdArgs...)
		cmd.Env = filterEnv(os.Environ(), "PATH", "INCLUDE", "LIB")
		cmd.Env = append(cmd.Env,
			fmt.Sprintf("INCLUDE=%s\\include;%s\\atlmfc\\include;%s\\PlatformSDK\\Include", absMSVC, absMSVC, absMSVC),
			fmt.Sprintf("LIB=%s\\lib;%s\\atlmfc\\lib;%s\\PlatformSDK\\Lib", absMSVC, absMSVC, absMSVC),
			fmt.Sprintf("PATH=%s;%s", absBin, os.Getenv("PATH")),
		)
		return cmd, nil
	}

	localDir := filepath.Dir(absMSVC)
	if strings.EqualFold(filepath.Base(absMSVC), "VC") {
		localDir = filepath.Dir(localDir)
	}
	winePrefix := filepath.Join(localDir, "wine_msvc8")

	winMSVC := "Z:" + strings.ReplaceAll(absMSVC, "/", "\\")
	winBin := "Z:" + strings.ReplaceAll(absBin, "/", "\\")

	wineArgs := make([]string, 0, len(args)+2)
	wineArgs = append(wineArgs, absCl)
	if !hasNologo {
		wineArgs = append(wineArgs, "/nologo")
	}
	for _, arg := range args {
		if strings.HasPrefix(arg, "/Fo/") {
			p := strings.TrimPrefix(arg, "/Fo")
			wineArgs = append(wineArgs, "/FoZ:"+strings.ReplaceAll(p, "/", "\\"))
		} else if strings.HasPrefix(arg, "/Fe/") {
			p := strings.TrimPrefix(arg, "/Fe")
			wineArgs = append(wineArgs, "/FeZ:"+strings.ReplaceAll(p, "/", "\\"))
		} else if strings.HasPrefix(arg, "/") {
			if _, err := os.Stat(arg); err == nil {
				wineArgs = append(wineArgs, "Z:"+strings.ReplaceAll(arg, "/", "\\"))
			} else {
				wineArgs = append(wineArgs, arg)
			}
		} else {
			wineArgs = append(wineArgs, arg)
		}
	}

	cmd := exec.Command("wine", wineArgs...)
	cmd.Env = filterEnv(os.Environ(), "WINEPREFIX", "WINEDEBUG", "DISPLAY", "WAYLAND_DISPLAY", "INCLUDE", "LIB", "WINEPATH")
	cmd.Env = append(cmd.Env,
		"WINEPREFIX="+winePrefix,
		"WINEDEBUG=-all",
		fmt.Sprintf("INCLUDE=%s\\include;%s\\atlmfc\\include;%s\\PlatformSDK\\Include;%s\\platformsdk\\include", winMSVC, winMSVC, winMSVC, winMSVC),
		fmt.Sprintf("LIB=%s\\lib;%s\\atlmfc\\lib;%s\\PlatformSDK\\Lib;%s\\platformsdk\\lib", winMSVC, winMSVC, winMSVC, winMSVC),
		"WINEPATH="+winBin,
	)
	return cmd, nil
}

func filterEnv(environ []string, dropKeys ...string) []string {
	drop := make(map[string]bool, len(dropKeys))
	for _, k := range dropKeys {
		drop[strings.ToUpper(k)] = true
	}
	env := make([]string, 0, len(environ))
	for _, kv := range environ {
		k := strings.SplitN(kv, "=", 2)[0]
		if drop[strings.ToUpper(k)] {
			continue
		}
		env = append(env, kv)
	}
	return env
}
