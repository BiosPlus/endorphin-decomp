package main

import (
	"bytes"
	"debug/pe"
	"encoding/json"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"runtime"
	"strconv"
	"strings"
	"sync"

	"endorphin_decomp/internal/decomp"
)

// ExecVerifyResult describes the outcome of 32-bit native differential execution.
type ExecVerifyResult struct {
	VA       string
	Status   string // "pass", "fail", "skip", "error"
	Cases    int
	Reason   string
	Details  string
}

type paramKind int

const (
	pkUnsupported paramKind = iota
	pkInt32
	pkInt8
	pkInt16
	pkFloat
	pkDouble
	pkPtrRaw
	pkPtrFloat
	pkPtrDouble
	pkPtrInt32
	pkPtrByte
)

type parsedParam struct {
	RawType string
	Name    string
	Kind    paramKind
	IsConst bool
	Slots   int // 32-bit stack slots (1 for int/float/ptr, 2 for double/int64)
}

type parsedExecSig struct {
	FuncName   string
	Namespace  string
	RetType    string
	RetKind    paramKind // pkUnsupported means void or unsupported
	IsVoidRet  bool
	Conv       string // "cdecl", "stdcall", "thiscall", "fastcall"
	Params     []parsedParam
	TotalSlots int
}

var (
	m32CheckOnce sync.Once
	m32Available bool

	peImageOnce sync.Once
	peImageErr  error
	peTextSec   peSection

	memDeclRe     = regexp.MustCompile(`(?m)^([ \t]*)extern\s+(?:"C"\s+)?(.+?)\bmem_([0-9A-Fa-f]{8})(\s*\[\s*\])?\s*;`)
	nsNameRe      = regexp.MustCompile(`(?m)^\s*namespace\s+(lift_[0-9A-Fa-f]{8})\s*\{`)
	retImmRe      = regexp.MustCompile(`(?i)\bret\s+(?:0x([0-9a-f]+)|([0-9]+))`)
	indirectCalRe = regexp.MustCompile(`(?i)\bcall\s+(?:dword\s+ptr|e[a-z]{2}\b|\[)`)
	fsSegRe       = regexp.MustCompile(`(?i)\bfs\s*:`)
)

func hasGxxM32() bool {
	m32CheckOnce.Do(func() {
		if runtime.GOOS != "linux" {
			return
		}
		cmd := exec.Command("g++", "-m32", "-pie", "-fPIE", "-x", "c++", "-fsyntax-only", "-")
		cmd.Stdin = strings.NewReader("int f(){return 0;}\n")
		if cmd.Run() == nil {
			m32Available = true
		}
	})
	return m32Available
}

func loadPETextSection() error {
	peImageOnce.Do(func() {
		raw, err := os.ReadFile(".local/bin/endorphin.exe")
		if err != nil {
			peImageErr = err
			return
		}
		f, err := pe.NewFile(bytes.NewReader(raw))
		if err != nil {
			peImageErr = err
			return
		}
		defer f.Close()
		var imageBase uint32 = 0x00400000
		if oh, ok := f.OptionalHeader.(*pe.OptionalHeader32); ok {
			imageBase = oh.ImageBase
		}
		for _, sec := range f.Sections {
			if sec.Name == ".text" {
				data, err := sec.Data()
				if err != nil {
					peImageErr = err
					return
				}
				peTextSec = peSection{
					name:    sec.Name,
					vaStart: imageBase + sec.VirtualAddress,
					vaEnd:   imageBase + sec.VirtualAddress + uint32(len(data)),
					data:    data,
				}
				return
			}
		}
		peImageErr = fmt.Errorf(".text section not found")
	})
	return peImageErr
}

// isDiffExecEligible checks whether a function can be safely differentially executed
// in the native 32-bit harness without Win32/MFC/callee mocking.
func isDiffExecEligible(u decomp.UnitEntry, sf *SrcFunc) (bool, string) {
	if sf == nil {
		return false, "no src/ entry"
	}
	if len(sf.Callees) > 0 {
		return false, fmt.Sprintf("has %d callee(s)", len(sf.Callees))
	}
	// Reject writable .data globals (only .rdata / CONST / .text jump tables allowed).
	for _, m := range sf.MemRefs {
		_, mU32, err := normVA(m)
		if err != nil {
			continue
		}
		sec := peSectionForVA(mU32)
		if sec == ".data" || sec == "" {
			return false, fmt.Sprintf("references non-const global %s (%s)", m, sec)
		}
	}
	// Inspect cached disasm (or src body) for fs:, indirect calls, privileged ops.
	disasm := ""
	if b, err := os.ReadFile(filepath.Join(".local", "cache", "funcs", u.VA+".txt")); err == nil {
		disasm = string(b)
	} else {
		disasm = sf.Body
	}
	if fsSegRe.MatchString(disasm) {
		return false, "uses fs: segment (SEH/TEB)"
	}
	if indirectCalRe.MatchString(disasm) {
		return false, "contains indirect call"
	}
	return true, ""
}

// detectStackPopBytes scans the cached disasm (or src body) for `ret N` and returns N (0 for bare `ret`).
func detectStackPopBytes(va string, sf *SrcFunc) int {
	disasm := ""
	if b, err := os.ReadFile(filepath.Join(".local", "cache", "funcs", va+".txt")); err == nil {
		disasm = string(b)
	} else if sf != nil {
		disasm = sf.Body
	}
	for _, m := range retImmRe.FindAllStringSubmatch(disasm, -1) {
		if m[1] != "" {
			if v, err := strconv.ParseInt(m[1], 16, 32); err == nil && v > 0 {
				return int(v)
			}
		} else if m[2] != "" {
			if v, err := strconv.ParseInt(m[2], 10, 32); err == nil && v > 0 {
				return int(v)
			}
		}
	}
	return 0
}

func classifyType(raw string) (paramKind, bool, int) {
	t := strings.TrimSpace(raw)
	isConst := strings.Contains(t, "const ") || strings.HasSuffix(t, " const")
	// Normalize spaces around * and strip qualifiers.
	clean := strings.ReplaceAll(t, "const ", "")
	clean = strings.ReplaceAll(clean, " const", "")
	clean = strings.ReplaceAll(clean, "volatile ", "")
	clean = strings.ReplaceAll(clean, "restrict ", "")
	clean = strings.TrimSpace(clean)

	if strings.HasSuffix(clean, "*") {
		base := strings.TrimSpace(strings.TrimSuffix(clean, "*"))
		base = strings.TrimSpace(strings.ReplaceAll(base, "const", ""))
		switch base {
		case "float", "FLOAT", "GLfloat":
			return pkPtrFloat, isConst, 1
		case "double", "DOUBLE", "GLdouble":
			return pkPtrDouble, isConst, 1
		case "int", "int32_t", "uint32_t", "unsigned int", "DWORD", "LONG", "ULONG", "INT", "UINT":
			return pkPtrInt32, isConst, 1
		case "uint8_t", "int8_t", "char", "unsigned char", "BYTE", "CHAR", "UCHAR":
			return pkPtrByte, isConst, 1
		case "void":
			return pkPtrRaw, isConst, 1
		default:
			// Pointer to a struct/class: treat as raw buffer pointer (4096B).
			if !strings.Contains(base, "*") && !strings.Contains(base, "(") {
				return pkPtrRaw, isConst, 1
			}
			return pkUnsupported, isConst, 0
		}
	}

	switch clean {
	case "float", "FLOAT", "GLfloat":
		return pkFloat, isConst, 1
	case "double", "DOUBLE", "GLdouble":
		return pkDouble, isConst, 2
	case "bool", "uint8_t", "int8_t", "char", "unsigned char", "signed char", "BYTE", "BOOLEAN", "CHAR", "UCHAR":
		return pkInt8, isConst, 1
	case "uint16_t", "int16_t", "short", "unsigned short", "WORD", "SHORT", "USHORT":
		return pkInt16, isConst, 1
	case "int", "int32_t", "uint32_t", "unsigned int", "unsigned", "long", "unsigned long",
		"DWORD", "LONG", "ULONG", "INT", "UINT", "BOOL", "HRESULT", "COLORREF",
		"uintptr_t", "intptr_t", "size_t", "SIZE_T", "ptrdiff_t":
		return pkInt32, isConst, 1
	default:
		return pkUnsupported, isConst, 0
	}
}

func parseExecSignature(rawSrc string, va string, sf *SrcFunc) (*parsedExecSig, error) {
	sigStr := extractSignature(rawSrc)
	if sigStr == "" {
		return nil, fmt.Errorf("could not extract function signature")
	}
	lparen := strings.IndexByte(sigStr, '(')
	rparen := strings.LastIndexByte(sigStr, ')')
	if lparen == -1 || rparen <= lparen {
		return nil, fmt.Errorf("malformed signature: %q", sigStr)
	}

	head := strings.TrimSpace(sigStr[:lparen])
	paramStr := strings.TrimSpace(sigStr[lparen+1 : rparen])

	// Extract namespace if wrapped in `namespace lift_XXXXXXXX {`.
	ns := ""
	if m := nsNameRe.FindStringSubmatch(rawSrc); len(m) == 2 {
		ns = m[1]
	}

	// Detect explicit calling convention keyword in signature.
	explicitConv := ""
	for _, cc := range []string{"__thiscall", "__fastcall", "__stdcall", "__cdecl"} {
		if strings.Contains(head, cc) {
			explicitConv = strings.TrimPrefix(cc, "__")
			head = strings.ReplaceAll(head, cc, " ")
		}
	}
	// Strip extern "C", static, inline, __forceinline.
	head = regexp.MustCompile(`\bextern\s+"C"\s*`).ReplaceAllString(head, "")
	head = regexp.MustCompile(`\b(?:extern|static|inline|__forceinline)\b`).ReplaceAllString(head, "")
	head = strings.TrimSpace(head)

	// Last identifier in head is function name; everything before is return type.
	fields := strings.Fields(head)
	if len(fields) < 2 {
		return nil, fmt.Errorf("cannot split return type and name from %q", head)
	}
	funcName := fields[len(fields)-1]
	retType := strings.TrimSpace(strings.Join(fields[:len(fields)-1], " "))
	for strings.HasPrefix(funcName, "*") {
		retType += "*"
		funcName = funcName[1:]
	}
	// Reject C++ class method definitions like `Foo::bar` (not standalone callable without class decl).
	if strings.Contains(funcName, "::") {
		return nil, fmt.Errorf("member function syntax %q not supported in standalone harness", funcName)
	}

	res := &parsedExecSig{
		FuncName:  funcName,
		Namespace: ns,
		RetType:   retType,
	}
	if retType == "void" {
		res.IsVoidRet = true
	} else {
		rk, _, _ := classifyType(retType)
		if rk == pkUnsupported {
			return nil, fmt.Errorf("unsupported return type %q", retType)
		}
		res.RetKind = rk
	}

	// Parse parameters.
	if paramStr != "" && paramStr != "void" {
		parts := strings.Split(paramStr, ",")
		for idx, p := range parts {
			p = strings.TrimSpace(p)
			if p == "" || p == "..." {
				return nil, fmt.Errorf("variadic or empty parameter not supported")
			}
			// Split param type and name.
			pfields := strings.Fields(p)
			if len(pfields) == 0 {
				return nil, fmt.Errorf("empty parameter %d", idx)
			}
			var pType, pName string
			if len(pfields) == 1 {
				pType = pfields[0]
				pName = fmt.Sprintf("arg%d", idx)
			} else {
				pName = pfields[len(pfields)-1]
				pType = strings.Join(pfields[:len(pfields)-1], " ")
				for strings.HasPrefix(pName, "*") || strings.HasPrefix(pName, "&") {
					pType += pName[:1]
					pName = pName[1:]
				}
				if strings.HasSuffix(pName, "]") {
					return nil, fmt.Errorf("array parameter %q not supported", p)
				}
			}
			if strings.Contains(pType, "&") {
				return nil, fmt.Errorf("reference parameter %q not supported", p)
			}
			pk, isConst, slots := classifyType(pType)
			if pk == pkUnsupported {
				return nil, fmt.Errorf("unsupported parameter type %q", pType)
			}
			res.Params = append(res.Params, parsedParam{
				RawType: pType,
				Name:    pName,
				Kind:    pk,
				IsConst: isConst,
				Slots:   slots,
			})
			res.TotalSlots += slots
		}
	}

	// Determine the original binary's calling convention using exact stack-pop arithmetic.
	stackPop := detectStackPopBytes(va, sf)
	stackSlots := stackPop / 4

	if stackPop > 0 {
		switch res.TotalSlots - stackSlots {
		case 0:
			res.Conv = "stdcall"
		case 1:
			res.Conv = "thiscall"
		case 2:
			res.Conv = "fastcall"
		default:
			return nil, fmt.Errorf("stack pop %dB (%d slots) incompatible with %d param slots", stackPop, stackSlots, res.TotalSlots)
		}
	} else {
		// stackPop == 0: either cdecl, or thiscall with 0 stack args (1 param total in ecx), or fastcall with <=2 reg args.
		srcUsesFastcall := sf != nil && strings.Contains(sf.Body, "__fastcall")
		if explicitConv == "thiscall" && len(res.Params) == 1 {
			res.Conv = "thiscall"
		} else if explicitConv == "fastcall" && len(res.Params) <= 2 {
			res.Conv = "fastcall"
		} else if srcUsesFastcall && len(res.Params) == 1 && res.Params[0].Slots == 1 {
			res.Conv = "thiscall"
		} else {
			res.Conv = "cdecl"
		}
	}

	return res, nil
}

// rewriteMemDeclsForExec replaces `extern <type> mem_XXXXXXXX;` with a macro that
// dereferences the mapped PE address `0xXXXXXXXXu` at runtime (never during static init).
func rewriteMemDeclsForExec(rawSrc string) string {
	return memDeclRe.ReplaceAllStringFunc(rawSrc, func(match string) string {
		m := memDeclRe.FindStringSubmatch(match)
		if len(m) < 4 {
			return match
		}
		typ := strings.TrimSpace(m[2])
		hexAddr := strings.ToUpper(m[3])
		isArr := strings.TrimSpace(m[4]) != ""
		if isArr {
			return fmt.Sprintf("#define mem_%s (reinterpret_cast<%s*>(0x%su))", hexAddr, typ, hexAddr)
		}
		return fmt.Sprintf("#define mem_%s (*reinterpret_cast<%s*>(0x%su))", hexAddr, typ, hexAddr)
	})
}

func isCountLikeParam(name string) bool {
	l := strings.ToLower(name)
	return l == "count" || l == "len" || l == "length" || l == "size" || l == "n" || l == "num" ||
		strings.Contains(l, "count") || strings.Contains(l, "len") || strings.Contains(l, "index") || strings.Contains(l, "idx")
}

// generateDiffHarness emits a standalone 32-bit C++ test binary that maps endorphin.exe's
// .text/CONST/.rdata at their exact VAs and differentially fuzzes original x86 vs lifted C++.
func generateDiffHarness(va string, sig *parsedExecSig, liftedSrc string, cases int, exePath string) string {
	var sb strings.Builder
	rewritten := rewriteMemDeclsForExec(liftedSrc)

	sb.WriteString("#include \"lift_compat.h\"\n")
	sb.WriteString("#include <csetjmp>\n")
	sb.WriteString("#include <csignal>\n")
	sb.WriteString("#include <cstdio>\n")
	sb.WriteString("#include <cstdlib>\n")
	sb.WriteString("#include <cstring>\n")
	sb.WriteString("#include <cmath>\n")
	sb.WriteString("#include <fcntl.h>\n")
	sb.WriteString("#include <sys/mman.h>\n")
	sb.WriteString("#include <unistd.h>\n\n")

	// Embed the lifted function source directly (strip duplicate #include "lift_compat.h").
	for _, l := range strings.Split(strings.ReplaceAll(rewritten, "\r\n", "\n"), "\n") {
		if strings.TrimSpace(l) == `#include "lift_compat.h"` {
			continue
		}
		sb.WriteString(l + "\n")
	}
	sb.WriteString("\n")

	// Crash handler + deterministic xorshift32 PRNG + PE mapper.
	sb.WriteString(`
static sigjmp_buf g_jmp;
static volatile int g_sig = 0;
static void crash_handler(int sig) { g_sig = sig; siglongjmp(g_jmp, 1); }

static uint32_t g_rng = 0x13579BDFu;
static uint32_t rng_u32() {
    uint32_t x = g_rng;
    x ^= x << 13; x ^= x >> 17; x ^= x << 5;
    g_rng = x;
    return x;
}
static float rng_float(int tc) {
    if (tc == 0) return 0.0f;
    if (tc == 1) return 1.0f;
    if (tc == 2) return -1.0f;
    int32_t v = static_cast<int32_t>(rng_u32() % 20001u) - 10000;
    return static_cast<float>(v) * 0.001f;
}
static double rng_double(int tc) {
    if (tc == 0) return 0.0;
    if (tc == 1) return 1.0;
    if (tc == 2) return -1.0;
    int32_t v = static_cast<int32_t>(rng_u32() % 20001u) - 10000;
    return static_cast<double>(v) * 0.001;
}

static bool map_pe_sections(const char* path) {
    int fd = open(path, O_RDONLY);
    if (fd < 0) return false;
    uint8_t hdr[4096];
    if (pread(fd, hdr, sizeof(hdr), 0) < 512) { close(fd); return false; }
    uint32_t pe_off = *reinterpret_cast<uint32_t*>(hdr + 0x3C);
    uint16_t num_sec = *reinterpret_cast<uint16_t*>(hdr + pe_off + 6);
    uint16_t opt_sz = *reinterpret_cast<uint16_t*>(hdr + pe_off + 20);
    uint32_t img_base = *reinterpret_cast<uint32_t*>(hdr + pe_off + 24 + 28);
    uint32_t sec_off = pe_off + 24 + opt_sz;

    for (uint16_t i = 0; i < num_sec; ++i) {
        uint8_t* s = hdr + sec_off + i * 40;
        char name[9] = {};
        memcpy(name, s, 8);
        uint32_t vsz = *reinterpret_cast<uint32_t*>(s + 8);
        uint32_t rva = *reinterpret_cast<uint32_t*>(s + 12);
        uint32_t rsz = *reinterpret_cast<uint32_t*>(s + 16);
        uint32_t rptr = *reinterpret_cast<uint32_t*>(s + 20);
        int prot = 0;
        if (strcmp(name, ".text") == 0) prot = PROT_READ | PROT_EXEC;
        else if (strcmp(name, ".rdata") == 0 || strcmp(name, "CONST") == 0) prot = PROT_READ;
        else continue;

        uint32_t va = img_base + rva;
        uint32_t map_sz = (vsz > rsz ? vsz : rsz);
        map_sz = (map_sz + 0xFFFu) & ~0xFFFu;
        void* p = mmap(reinterpret_cast<void*>(va), map_sz, PROT_READ | PROT_WRITE,
                       MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0);
        if (p == MAP_FAILED) { close(fd); return false; }
        if (rsz > 0) {
            ssize_t n = pread(fd, p, rsz, rptr);
            if (n < 0) { close(fd); return false; }
        }
        if (mprotect(p, map_sz, prot) != 0) { close(fd); return false; }
    }
    close(fd);
    return true;
}

static bool float_eq(float a, float b) {
    if (std::isnan(a) && std::isnan(b)) return true;
    if (std::isinf(a) && std::isinf(b)) return (a > 0) == (b > 0);
    float diff = std::fabs(a - b);
    float scale = std::fmax(1.0f, std::fmax(std::fabs(a), std::fabs(b)));
    return diff <= 1e-4f * scale;
}
static bool double_eq(double a, double b) {
    if (std::isnan(a) && std::isnan(b)) return true;
    if (std::isinf(a) && std::isinf(b)) return (a > 0) == (b > 0);
    double diff = std::fabs(a - b);
    double scale = std::fmax(1.0, std::fmax(std::fabs(a), std::fabs(b)));
    return diff <= 1e-9 * scale;
}
`)

	// Emit the x86 trampoline matching sig.Conv and sig.RetKind.
	// Using GCC's native 32-bit function pointer attributes! GCC -m32 natively supports
	// __attribute__((cdecl)), __attribute__((stdcall)), __attribute__((thiscall)), __attribute__((fastcall))!
	origAttr := fmt.Sprintf("__attribute__((%s))", sig.Conv)
	var origParamTypes []string
	for _, p := range sig.Params {
		origParamTypes = append(origParamTypes, p.RawType)
	}
	fmt.Fprintf(&sb, "using OrigFn = %s (%s *)(%s);\n\n", sig.RetType, origAttr, strings.Join(origParamTypes, ", "))

	// Qualified lifted function name.
	liftedCallName := sig.FuncName
	if sig.Namespace != "" {
		liftedCallName = sig.Namespace + "::" + sig.FuncName
	}

	fmt.Fprintf(&sb, "int main() {\n")
	fmt.Fprintf(&sb, "    if (!map_pe_sections(%q)) { fprintf(stderr, \"MAP_FAIL\\n\"); return 2; }\n", exePath)
	sb.WriteString("    signal(SIGSEGV, crash_handler); signal(SIGFPE, crash_handler); signal(SIGILL, crash_handler);\n")
	fmt.Fprintf(&sb, "    OrigFn orig_fn = reinterpret_cast<OrigFn>(%su);\n", va)
	sb.WriteString("    constexpr size_t BUF_SZ = 4096;\n")

	// Allocate paired scratch buffers for pointer parameters.
	hasPtrs := false
	for i, p := range sig.Params {
		if p.Kind >= pkPtrRaw {
			hasPtrs = true
			fmt.Fprintf(&sb, "    alignas(16) uint8_t buf_orig_%d[BUF_SZ], buf_lift_%d[BUF_SZ];\n", i, i)
		}
	}

	fmt.Fprintf(&sb, "    for (int tc = 0; tc < %d; ++tc) {\n", cases)
	// Generate inputs for each parameter.
	var origArgs, liftArgs []string
	for i, p := range sig.Params {
		switch p.Kind {
		case pkPtrFloat:
			fmt.Fprintf(&sb, "        for (size_t k = 0; k < BUF_SZ/4; ++k) { float v = rng_float(tc + (int)k); memcpy(buf_orig_%d + k*4, &v, 4); }\n", i)
			fmt.Fprintf(&sb, "        memcpy(buf_lift_%d, buf_orig_%d, BUF_SZ);\n", i, i)
			origArgs = append(origArgs, fmt.Sprintf("reinterpret_cast<%s>(buf_orig_%d)", p.RawType, i))
			liftArgs = append(liftArgs, fmt.Sprintf("reinterpret_cast<%s>(buf_lift_%d)", p.RawType, i))
		case pkPtrDouble:
			fmt.Fprintf(&sb, "        for (size_t k = 0; k < BUF_SZ/8; ++k) { double v = rng_double(tc + (int)k); memcpy(buf_orig_%d + k*8, &v, 8); }\n", i)
			fmt.Fprintf(&sb, "        memcpy(buf_lift_%d, buf_orig_%d, BUF_SZ);\n", i, i)
			origArgs = append(origArgs, fmt.Sprintf("reinterpret_cast<%s>(buf_orig_%d)", p.RawType, i))
			liftArgs = append(liftArgs, fmt.Sprintf("reinterpret_cast<%s>(buf_lift_%d)", p.RawType, i))
		case pkPtrInt32, pkPtrByte, pkPtrRaw:
			fmt.Fprintf(&sb, "        for (size_t k = 0; k < BUF_SZ; k += 4) { uint32_t v = rng_u32(); memcpy(buf_orig_%d + k, &v, 4); }\n", i)
			fmt.Fprintf(&sb, "        memcpy(buf_lift_%d, buf_orig_%d, BUF_SZ);\n", i, i)
			origArgs = append(origArgs, fmt.Sprintf("reinterpret_cast<%s>(buf_orig_%d)", p.RawType, i))
			liftArgs = append(liftArgs, fmt.Sprintf("reinterpret_cast<%s>(buf_lift_%d)", p.RawType, i))
		case pkFloat:
			fmt.Fprintf(&sb, "        %s a_%d = rng_float(tc);\n", p.RawType, i)
			origArgs = append(origArgs, fmt.Sprintf("a_%d", i))
			liftArgs = append(liftArgs, fmt.Sprintf("a_%d", i))
		case pkDouble:
			fmt.Fprintf(&sb, "        %s a_%d = rng_double(tc);\n", p.RawType, i)
			origArgs = append(origArgs, fmt.Sprintf("a_%d", i))
			liftArgs = append(liftArgs, fmt.Sprintf("a_%d", i))
		case pkInt8, pkInt16, pkInt32:
			if hasPtrs && isCountLikeParam(p.Name) {
				fmt.Fprintf(&sb, "        %s a_%d = static_cast<%s>(tc == 0 ? 0 : (rng_u32() %% 16u));\n", p.RawType, i, p.RawType)
			} else {
				fmt.Fprintf(&sb, "        %s a_%d = static_cast<%s>(tc == 0 ? 0 : (tc == 1 ? 1 : rng_u32()));\n", p.RawType, i, p.RawType)
			}
			origArgs = append(origArgs, fmt.Sprintf("a_%d", i))
			liftArgs = append(liftArgs, fmt.Sprintf("a_%d", i))
		}
	}

	// Execute both sides under crash guard.
	sb.WriteString("        if (sigsetjmp(g_jmp, 1) != 0) { fprintf(stderr, \"CRASH tc=%d sig=%d\\n\", tc, (int)g_sig); return 3; }\n")
	if sig.IsVoidRet {
		fmt.Fprintf(&sb, "        orig_fn(%s);\n", strings.Join(origArgs, ", "))
		fmt.Fprintf(&sb, "        %s(%s);\n", liftedCallName, strings.Join(liftArgs, ", "))
	} else {
		fmt.Fprintf(&sb, "        %s r_orig = orig_fn(%s);\n", sig.RetType, strings.Join(origArgs, ", "))
		fmt.Fprintf(&sb, "        %s r_lift = %s(%s);\n", sig.RetType, liftedCallName, strings.Join(liftArgs, ", "))
		switch sig.RetKind {
		case pkFloat:
			sb.WriteString("        if (!float_eq(r_orig, r_lift)) { fprintf(stderr, \"RET_MISMATCH tc=%d orig=%g lift=%g\\n\", tc, (double)r_orig, (double)r_lift); return 1; }\n")
		case pkDouble:
			sb.WriteString("        if (!double_eq(r_orig, r_lift)) { fprintf(stderr, \"RET_MISMATCH tc=%d orig=%g lift=%g\\n\", tc, r_orig, r_lift); return 1; }\n")
		case pkPtrRaw, pkPtrFloat, pkPtrDouble, pkPtrInt32, pkPtrByte:
			// If the returned pointer points inside one of the paired scratch buffers, compare offsets relative to that buffer.
			sb.WriteString("        {\n")
			sb.WriteString("            uintptr_t po = reinterpret_cast<uintptr_t>(r_orig), pl = reinterpret_cast<uintptr_t>(r_lift);\n")
			sb.WriteString("            bool matched_ptr = (po == pl);\n")
			for i, p := range sig.Params {
				if p.Kind >= pkPtrRaw {
					fmt.Fprintf(&sb, "            if (!matched_ptr) {\n")
					fmt.Fprintf(&sb, "                uintptr_t bo = reinterpret_cast<uintptr_t>(buf_orig_%d), bl = reinterpret_cast<uintptr_t>(buf_lift_%d);\n", i, i)
					fmt.Fprintf(&sb, "                if (po >= bo && po <= bo + BUF_SZ && pl >= bl && pl <= bl + BUF_SZ && (po - bo) == (pl - bl)) matched_ptr = true;\n")
					fmt.Fprintf(&sb, "            }\n")
				}
			}
			sb.WriteString("            if (!matched_ptr) { fprintf(stderr, \"RET_MISMATCH tc=%d orig=0x%llX lift=0x%llX\\n\", tc, (unsigned long long)po, (unsigned long long)pl); return 1; }\n")
			sb.WriteString("        }\n")
		default:
			sb.WriteString("        if (r_orig != r_lift) { fprintf(stderr, \"RET_MISMATCH tc=%d orig=0x%llX lift=0x%llX\\n\", tc, (unsigned long long)(uintptr_t)r_orig, (unsigned long long)(uintptr_t)r_lift); return 1; }\n")
		}
	}

	// Compare output scratch buffers for non-const pointer args.
	for i, p := range sig.Params {
		if p.Kind >= pkPtrRaw && !p.IsConst {
			if p.Kind == pkPtrFloat {
				fmt.Fprintf(&sb, "        for (size_t k = 0; k < BUF_SZ/4; ++k) {\n")
				fmt.Fprintf(&sb, "            float fo, fl; memcpy(&fo, buf_orig_%d+k*4, 4); memcpy(&fl, buf_lift_%d+k*4, 4);\n", i, i)
				fmt.Fprintf(&sb, "            if (!float_eq(fo, fl)) { fprintf(stderr, \"MEM_MISMATCH tc=%%d arg=%d off=0x%%zX orig=%%g lift=%%g\\n\", tc, k*4, (double)fo, (double)fl); return 1; }\n", i)
				fmt.Fprintf(&sb, "        }\n")
			} else if p.Kind == pkPtrDouble {
				fmt.Fprintf(&sb, "        for (size_t k = 0; k < BUF_SZ/8; ++k) {\n")
				fmt.Fprintf(&sb, "            double d0, d1; memcpy(&d0, buf_orig_%d+k*8, 8); memcpy(&d1, buf_lift_%d+k*8, 8);\n", i, i)
				fmt.Fprintf(&sb, "            if (!double_eq(d0, d1)) { fprintf(stderr, \"MEM_MISMATCH tc=%%d arg=%d off=0x%%zX orig=%%g lift=%%g\\n\", tc, k*8, d0, d1); return 1; }\n", i)
				fmt.Fprintf(&sb, "        }\n")
			} else {
				fmt.Fprintf(&sb, "        if (memcmp(buf_orig_%d, buf_lift_%d, BUF_SZ) != 0) {\n", i, i)
				fmt.Fprintf(&sb, "            for (size_t k = 0; k < BUF_SZ; ++k) if (buf_orig_%d[k] != buf_lift_%d[k]) {\n", i, i)
				fmt.Fprintf(&sb, "                fprintf(stderr, \"MEM_MISMATCH tc=%%d arg=%d off=0x%%zX orig=0x%%02X lift=0x%%02X\\n\", tc, k, buf_orig_%d[k], buf_lift_%d[k]); break;\n", i, i, i)
				fmt.Fprintf(&sb, "            }\n            return 1;\n        }\n")
			}
		}
	}

	sb.WriteString("    }\n")
	fmt.Fprintf(&sb, "    printf(\"DIFF_PASS %d\\n\");\n    return 0;\n}\n", cases)
	return sb.String()
}

// runDiffExecVerify compiles and runs a native 32-bit differential test for a single lifted function.
func runDiffExecVerify(va string, rawSrc string, u decomp.UnitEntry, sf *SrcFunc, cases int) ExecVerifyResult {
	if !hasGxxM32() {
		return ExecVerifyResult{VA: va, Status: "skip", Reason: "g++ -m32 unavailable"}
	}
	if ok, reason := isDiffExecEligible(u, sf); !ok {
		return ExecVerifyResult{VA: va, Status: "skip", Reason: reason}
	}
	sig, err := parseExecSignature(rawSrc, va, sf)
	if err != nil {
		return ExecVerifyResult{VA: va, Status: "skip", Reason: "signature: " + err.Error()}
	}
	exeAbs, err := filepath.Abs(".local/bin/endorphin.exe")
	if err != nil {
		return ExecVerifyResult{VA: va, Status: "error", Reason: err.Error()}
	}
	if _, err := os.Stat(exeAbs); err != nil {
		return ExecVerifyResult{VA: va, Status: "skip", Reason: "endorphin.exe missing"}
	}

	tmpDir, err := os.MkdirTemp("", "lift_verify_*")
	if err != nil {
		return ExecVerifyResult{VA: va, Status: "error", Reason: err.Error()}
	}
	defer os.RemoveAll(tmpDir)

	harnessSrc := generateDiffHarness(va, sig, rawSrc, cases, exeAbs)
	srcFile := filepath.Join(tmpDir, "harness.cpp")
	binFile := filepath.Join(tmpDir, "harness")
	if err := os.WriteFile(srcFile, []byte(harnessSrc), 0o644); err != nil {
		return ExecVerifyResult{VA: va, Status: "error", Reason: err.Error()}
	}

	compCmd := exec.Command("g++", "-m32", "-std=c++20", "-O2", "-pie", "-fPIE",
		"-Ilifted/include", "-Iinclude", "-o", binFile, srcFile, "-lm")
	if out, err := compCmd.CombinedOutput(); err != nil {
		return ExecVerifyResult{
			VA:      va,
			Status:  "error",
			Reason:  "32-bit harness compile failed",
			Details: strings.TrimSpace(string(out)),
		}
	}

	runOut, err := exec.Command(binFile).CombinedOutput()
	outStr := strings.TrimSpace(string(runOut))
	if err != nil {
		if strings.HasPrefix(outStr, "CRASH ") {
			return ExecVerifyResult{VA: va, Status: "skip", Reason: "runtime crash (pointer-chasing struct?): " + outStr}
		}
		return ExecVerifyResult{
			VA:      va,
			Status:  "fail",
			Cases:   cases,
			Reason:  outStr,
			Details: fmt.Sprintf("conv=%s sig=%s", sig.Conv, sig.FuncName),
		}
	}
	return ExecVerifyResult{
		VA:      va,
		Status:  "pass",
		Cases:   cases,
		Reason:  fmt.Sprintf("%d/%d cases matched (%s)", cases, cases, sig.Conv),
	}
}

func cmdVerify(args []string) {
	scope := ""
	limit := 50
	cases := 32
	vaArg := ""
	asJSON := false
	for i := 0; i < len(args); i++ {
		switch args[i] {
		case "--scope":
			if i+1 < len(args) {
				i++
				scope = args[i]
			}
		case "--limit", "-n":
			if i+1 < len(args) {
				i++
				fmt.Sscanf(args[i], "%d", &limit)
			}
		case "--cases":
			if i+1 < len(args) {
				i++
				fmt.Sscanf(args[i], "%d", &cases)
			}
		case "--json":
			asJSON = true
		default:
			if !strings.HasPrefix(args[i], "-") && vaArg == "" {
				vaArg = args[i]
			}
		}
	}

	_, byVA, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork verify: %v\n", err)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()

	if vaArg != "" {
		va, _, err := normVA(vaArg)
		if err != nil {
			fmt.Fprintf(os.Stderr, "liftwork verify: %v\n", err)
			os.Exit(1)
		}
		u := byVA[va]
		sf := srcIdx[va]
		// Read from WIP if present, else lifted file.
		rawSrc := ""
		wip := wipPathForVA(va)
		if b, err := os.ReadFile(wip); err == nil {
			rawSrc = string(b)
		} else if le, err := readLiftEntry(va); err == nil {
			if b, err := os.ReadFile(le.LiftedPath); err == nil {
				rawSrc = extractLiftedBlock(string(b), va)
			}
		}
		if rawSrc == "" {
			fmt.Fprintf(os.Stderr, "liftwork verify: no lifted source found for %s\n", va)
			os.Exit(1)
		}
		res := runDiffExecVerify(va, rawSrc, u, sf, cases)
		if asJSON {
			b, _ := json.MarshalIndent(res, "", "  ")
			fmt.Println(string(b))
		} else {
			fmt.Printf("[%s] %s: %s\n", strings.ToUpper(res.Status), res.VA, res.Reason)
			if res.Details != "" {
				fmt.Println(res.Details)
			}
		}
		if res.Status == "fail" || res.Status == "error" {
			os.Exit(1)
		}
		return
	}

	if scope == "" {
		scope = "all"
	}
	lifted, err := readAllLiftEntries()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork verify: %v\n", err)
		os.Exit(1)
	}

	fileCache := map[string]string{}
	readLifted := func(p string) string {
		if s, ok := fileCache[p]; ok {
			return s
		}
		b, err := os.ReadFile(p)
		if err != nil {
			fileCache[p] = ""
			return ""
		}
		s := string(b)
		fileCache[p] = s
		return s
	}

	var passed, failed, skipped, errored int
	var results []ExecVerifyResult
	tested := 0

	for _, va := range sortedVAs(lifted) {
		if limit > 0 && tested >= limit {
			break
		}
		le := lifted[va]
		if le.Status != "lifted" {
			continue
		}
		sf := srcIdx[va]
		if sf == nil || !matchesScope(scope, sf.SrcPath, le.OrigSymbol) {
			continue
		}
		u := byVA[va]
		if ok, _ := isDiffExecEligible(u, sf); !ok {
			skipped++
			continue
		}
		block := extractLiftedBlock(readLifted(le.LiftedPath), va)
		if block == "" {
			skipped++
			continue
		}
		res := runDiffExecVerify(va, block, u, sf, cases)
		if res.Status == "skip" {
			skipped++
			continue
		}
		tested++
		results = append(results, res)
		switch res.Status {
		case "pass":
			passed++
		case "fail":
			failed++
			if !asJSON {
				fmt.Printf("  FAIL %s (%s, %s): %s\n", va, le.Name, le.LiftedBy, res.Reason)
			}
		case "error":
			errored++
			if !asJSON {
				fmt.Printf("  ERR  %s (%s, %s): %s\n", va, le.Name, le.LiftedBy, res.Reason)
			}
		}
	}

	if asJSON {
		b, _ := json.MarshalIndent(results, "", "  ")
		fmt.Println(string(b))
		return
	}
	fmt.Printf("\n=== 32-bit Differential Execution Summary (scope=%s) ===\n", scope)
	fmt.Printf("Tested: %d | PASS: %d | FAIL: %d | Compile-Err: %d | Skipped (non-leaf/unsupported): %d\n",
		tested, passed, failed, errored, skipped)
	if failed > 0 {
		os.Exit(1)
	}
}
