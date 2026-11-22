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

// ImageSymClassLabel is the COFF storage class of a code label. MSVC emits one per switch case ($LN<n>);
// they mark positions inside a function and must never be treated as function boundaries. (The jump
// table itself gets a static $LN symbol, which correctly ends the function's code.)
const ImageSymClassLabel = 6

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

// noReturnCallees are callee symbols that never return, so a call to one may legitimately end a function
// (MSVC emits no ret after `throw` / exit()). Matched against the symbol comment on the call line.
var noReturnCallees = []string{
	"_CxxThrowException",
	"MSVCR80!exit",
	"MSVCR80!_exit",
	"MSVCR80!abort",
	"_invalid_parameter_noinfo",
	"_amsg_exit",
}

// instMnemonic returns the mnemonic of a cached objdump line ("  ADDR: bytes \tmnem\toperands").
func instMnemonic(l string) string {
	parts := strings.Split(l, "\t")
	if len(parts) < 2 {
		return ""
	}
	return strings.TrimSpace(parts[1])
}

func isPadMnemonic(m string) bool { return m == "nop" || m == "int3" }

// IsValidCodeUnit checks the cached disassembly for va (if present) and returns false if it contains
// invalid/privileged instructions, or if (ignoring trailing nop/int3 alignment padding) it does not end in
// ret/jmp or a call to a known no-return function. Units with nop/int3 padding after a ret/jmp followed by
// more code are several functions glued together by the splitter and are rejected too.
func IsValidCodeUnit(va string) bool {
	cachePath := filepath.Join(".local", "cache", "funcs", va+".txt")
	b, err := os.ReadFile(cachePath)
	if err != nil {
		return true
	}
	lines := strings.Split(strings.TrimSpace(string(b)), "\n")
	var insts []string
	for _, l := range lines {
		l = strings.TrimSpace(l)
		if l == "" || strings.HasPrefix(l, "//") {
			continue
		}
		if strings.Contains(l, "<unknown>") || strings.Contains(l, "\tretf") || strings.Contains(l, "\tinto") || strings.Contains(l, "\tin\t") || strings.Contains(l, "\tout\t") {
			return false
		}
		insts = append(insts, l)
	}
	// Drop trailing alignment padding (int3, nop, and multi-byte fillers like lea esp,[esp+0] / mov edi,edi).
	for len(insts) > 0 && (isPadMnemonic(instMnemonic(insts[len(insts)-1])) || isPadLine(insts[len(insts)-1])) {
		insts = insts[:len(insts)-1]
	}
	if len(insts) == 0 {
		return false
	}
	// Interior padding right after an unconditional exit means a glued multi-function unit.
	for i := 0; i+1 < len(insts); i++ {
		m := instMnemonic(insts[i])
		if (m == "ret" || m == "jmp" || IsNoreturnCall(insts[i])) && isPadMnemonic(instMnemonic(insts[i+1])) {
			return false
		}
	}
	last := insts[len(insts)-1]
	switch instMnemonic(last) {
	case "ret", "jmp":
		return true
	case "call":
		return IsNoreturnCall(last)
	}
	return false
}

// TrimPadForCompare trims trailing 0xCC/0x90 alignment padding from compiled and target bytes so that padding
// on either side (COFF section alignment on the compiled .obj, inter-function padding captured in a target
// unit) does not cause a size mismatch. Both are cut to the longer of the two padding-stripped lengths, so any
// real code byte present on one side is still compared against the other.
func TrimPadForCompare(comp, tgt []byte) ([]byte, []byte) {
	strip := func(b []byte) int {
		n := len(b)
		for n > 0 && (b[n-1] == 0xCC || b[n-1] == 0x90) {
			n--
		}
		return n
	}
	l := strip(comp)
	if t := strip(tgt); t > l {
		l = t
	}
	if l > len(comp) || l > len(tgt) {
		return comp, tgt
	}
	return comp[:l], tgt[:l]
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
	r := strings.NewReplacer(
		"::", "_", "<", "_", ">", "_", " ", "_", "*", "ptr", "&", "ref",
		",", "_", "/", "_", "\\", "_", ":", "_", "?", "_", "\"", "_", "|", "_",
	)
	out := r.Replace(s)
	if strings.Trim(out, "_.") == "" {
		return "Unknown"
	}
	return out
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
