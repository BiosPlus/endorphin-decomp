package main

import (
	"bufio"
	"flag"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"
	"time"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
	"endorphin_decomp/internal/worklock"
)

// DisasmLine represents one parsed instruction line from .local/cache/funcs/0xXXXXXXXX.txt.
type DisasmLine struct {
	VA      uint32
	RawHex  string
	Bytes   []byte
	Inst    string
	Comment string
}

type autoLiftCandidate struct {
	VA         string
	Unit       decomp.UnitEntry
	SrcFunc    *SrcFunc
	LiftedPath string
	Pattern    string
	LiftedBy   string
	Preamble   []string // #include / extern "C" lines needed
	FuncBlock  string   // complete // [0xVA] ... function block with @name/@summary/etc.
	Meta       ParsedMeta
}

func readCachedDisasm(vaHex string) ([]DisasmLine, error) {
	path := filepath.Join(".local", "cache", "funcs", unitstore.NormVA(vaHex)+".txt")
	f, err := os.Open(path)
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var lines []DisasmLine
	sc := bufio.NewScanner(f)
	for sc.Scan() {
		line := sc.Text()
		if !strings.HasPrefix(line, "  ") {
			continue
		}
		colonIdx := strings.IndexByte(line, ':')
		if colonIdx == -1 {
			continue
		}
		addrStr := strings.TrimSpace(line[:colonIdx])
		va64, err := strconv.ParseUint(addrStr, 16, 32)
		if err != nil {
			continue
		}
		rest := line[colonIdx+1:]
		tabIdx := strings.IndexByte(rest, '\t')
		if tabIdx == -1 {
			continue
		}
		rawHex := strings.TrimSpace(rest[:tabIdx])
		instAndComment := strings.TrimSpace(rest[tabIdx+1:])
		inst := instAndComment
		comment := ""
		if semiIdx := strings.Index(instAndComment, " ; "); semiIdx != -1 {
			inst = strings.TrimSpace(instAndComment[:semiIdx])
			comment = strings.TrimSpace(instAndComment[semiIdx+3:])
		}
		inst = strings.ReplaceAll(inst, "\t", " ")
		var rawBytes []byte
		for _, tok := range strings.Fields(rawHex) {
			if len(tok) == 2 {
				if v, err := strconv.ParseUint(tok, 16, 8); err == nil {
					rawBytes = append(rawBytes, byte(v))
				}
			}
		}
		lines = append(lines, DisasmLine{
			VA:      uint32(va64),
			RawHex:  rawHex,
			Bytes:   rawBytes,
			Inst:    inst,
			Comment: comment,
		})
	}
	return lines, sc.Err()
}

func stripDisasmAngle(ins string) string {
	if lt := strings.Index(ins, " <"); lt != -1 {
		ins = ins[:lt]
	}
	return strings.TrimSpace(ins)
}

func stripPaddingLines(lines []DisasmLine) []DisasmLine {
	var body []DisasmLine
	for _, l := range lines {
		ins := stripDisasmAngle(l.Inst)
		if ins == "nop" || ins == "int3" || ins == "lea esp, [esp]" || ins == "lea ecx, [ecx]" || ins == "lea ebx, [ebx]" || ins == "lea eax, [eax]" || ins == "mov edi, edi" {
			continue
		}
		body = append(body, l)
	}
	return body
}

func parseRetStackBytes(retInst string) (int, bool) {
	retInst = strings.TrimSpace(retInst)
	if retInst == "ret" || retInst == "retn" {
		return 0, true
	}
	for _, prefix := range []string{"ret ", "retn "} {
		if strings.HasPrefix(retInst, prefix) {
			valStr := strings.TrimSpace(strings.TrimPrefix(retInst, prefix))
			v, err := strconv.ParseInt(valStr, 0, 32)
			if err == nil && v >= 0 && v%4 == 0 {
				return int(v), true
			}
		}
	}
	return 0, false
}

func parseImmInt(s string) (int64, bool) {
	s = strings.TrimSpace(s)
	if v, err := strconv.ParseInt(s, 0, 64); err == nil {
		return v, true
	}
	if v, err := strconv.ParseUint(s, 0, 64); err == nil {
		return int64(v), true
	}
	return 0, false
}

func parseHexAddr32(s string) (uint32, bool) {
	s = strings.TrimSpace(s)
	if !strings.HasPrefix(s, "0x") && !strings.HasPrefix(s, "0X") {
		return 0, false
	}
	v, err := strconv.ParseUint(s[2:], 16, 32)
	if err != nil {
		return 0, false
	}
	return uint32(v), true
}

func extractRegDisp(memExpr, baseReg string) (int64, bool) {
	start := strings.IndexByte(memExpr, '[')
	end := strings.IndexByte(memExpr, ']')
	if start == -1 || end == -1 || end <= start {
		return 0, false
	}
	inner := strings.TrimSpace(memExpr[start+1 : end])
	if inner == baseReg {
		return 0, true
	}
	if !strings.HasPrefix(inner, baseReg) {
		return 0, false
	}
	rest := strings.TrimSpace(strings.TrimPrefix(inner, baseReg))
	if strings.HasPrefix(rest, "+") {
		v, ok := parseImmInt(strings.TrimPrefix(rest, "+"))
		return v, ok
	}
	if strings.HasPrefix(rest, "-") {
		v, ok := parseImmInt(strings.TrimPrefix(rest, "-"))
		return -v, ok
	}
	return 0, false
}

func stripPtrQualifier(expr, ptrKind string, requirePtr bool) (string, bool) {
	expr = strings.TrimSpace(expr)
	if ptrKind != "" {
		pfx := ptrKind + " ptr "
		if strings.HasPrefix(expr, pfx) {
			return strings.TrimSpace(strings.TrimPrefix(expr, pfx)), true
		}
		if requirePtr {
			return "", false
		}
	}
	if strings.HasPrefix(expr, "[") {
		return expr, true
	}
	return "", false
}

func parseIndirectMemAddr(expr, ptrKind string) (uint32, bool) {
	mem, ok := stripPtrQualifier(expr, ptrKind, false)
	if !ok || !strings.HasPrefix(mem, "[") || !strings.HasSuffix(mem, "]") {
		return 0, false
	}
	inner := strings.TrimSpace(mem[1 : len(mem)-1])
	return parseHexAddr32(inner)
}

func fmtSignedHex(v int64) string {
	if v < 0 {
		return fmt.Sprintf("-0x%X", -v)
	}
	return fmt.Sprintf("0x%X", v)
}

func fmtFieldOffset(v int64) string {
	if v < 0 {
		return fmt.Sprintf("-0x%X", -v)
	}
	return fmt.Sprintf("+0x%X", v)
}

func fmtFieldName(prefix string, off int64) string {
	if off < 0 {
		return fmt.Sprintf("%s_neg_0x%X", prefix, -off)
	}
	return fmt.Sprintf("%s_0x%X", prefix, off)
}

func classFromSymbol(sym string) string {
	if i := strings.LastIndex(sym, "::"); i != -1 {
		return strings.TrimSpace(sym[:i])
	}
	return ""
}

func lookupSymLabel(va uint32, syms map[string]SymbolEntry, units map[string]decomp.UnitEntry) string {
	norm := fmt.Sprintf("0x%08X", va)
	if s, ok := syms[norm]; ok && s.Name != "" {
		return s.Name
	}
	if u, ok := units[norm]; ok && u.Symbol != "" {
		return u.Symbol
	}
	return norm
}

func formatLiftParams(retBytes int, isThiscall bool) string {
	nParams := retBytes / 4
	var params []string
	if isThiscall {
		params = append(params, "void* self")
		if nParams > 0 {
			params = append(params, "int edx_unused")
		}
	}
	for i := 0; i < nParams; i++ {
		params = append(params, fmt.Sprintf("int a%d", i+1))
	}
	if len(params) == 0 {
		return "void"
	}
	return strings.Join(params, ", ")
}

func formatLiftHeader(u decomp.UnitEntry, name, cls, summary string, fields []FieldSpec) string {
	var sb strings.Builder
	fmt.Fprintf(&sb, "// [%s] %s (%d bytes)\n", u.VA, u.Symbol, u.Size)
	fmt.Fprintf(&sb, "// @name %s\n", name)
	if cls != "" {
		fmt.Fprintf(&sb, "// @class %s\n", cls)
	}
	fmt.Fprintf(&sb, "// @summary %s\n", summary)
	for _, f := range fields {
		if f.Class != "" && f.Name != "" && f.Type != "" {
			fmt.Fprintf(&sb, "// @field %s %s %s %s\n", f.Class, f.Offset, f.Type, f.Name)
		}
	}
	return sb.String()
}

// classifyAndLiftPattern attempts to deterministically lift a small/boilerplate x86 function
// into clean, portable C++20 with full @name/@class/@summary/@field annotations.
func classifyAndLiftPattern(
	u decomp.UnitEntry,
	lines []DisasmLine,
	syms map[string]SymbolEntry,
	units map[string]decomp.UnitEntry,
) (pattern string, preamble []string, funcBlock string, ok bool) {
	body := stripPaddingLines(lines)
	if len(body) == 0 {
		return "", nil, "", false
	}

	shortHex := strings.TrimPrefix(unitstore.NormVA(u.VA), "0x")
	fnIdent := "fn_" + shortHex
	cls := classFromSymbol(u.Symbol)
	baseName := u.Symbol
	if baseName == "" {
		baseName = "sub_" + shortHex
	}

	inst := func(i int) string { return stripDisasmAngle(body[i].Inst) }
	lastInst := inst(len(body) - 1)

	// ---- Pattern 1: Single-instruction 5-byte no-op (`add eax, 0x0`) ----
	if len(body) == 1 && (inst(0) == "add eax, 0x0" || inst(0) == "add eax, 0") {
		hdr := formatLiftHeader(u, baseName, cls, "No-op stub (add eax, 0).", nil)
		code := fmt.Sprintf("%svoid %s(void) {\n    // No-op stub (add eax, 0x0).\n}\n", hdr, fnIdent)
		return "noop_add_eax_0", nil, code, true
	}

	// ---- Pattern Group A: JMP / Thunk patterns ----
	if strings.HasPrefix(lastInst, "jmp ") {
		rhs := strings.TrimSpace(strings.TrimPrefix(lastInst, "jmp "))

		// Helper to parse direct or IAT jump target.
		parseJmpTarget := func(targetExpr string) (isDirect bool, addr uint32, ok bool) {
			if v, ok := parseHexAddr32(targetExpr); ok {
				return true, v, true
			}
			if v, ok := parseIndirectMemAddr(targetExpr, "dword"); ok {
				return false, v, true
			}
			return false, 0, false
		}

		// A1: Pure jump thunk (`jmp 0xTARGET` or `jmp dword ptr [0xIAT]`)
		if len(body) == 1 {
			if isDirect, addr, ok := parseJmpTarget(rhs); ok {
				lbl := lookupSymLabel(addr, syms, units)
				if isDirect {
					ext := fmt.Sprintf("ext_%08X", addr)
					pre := []string{fmt.Sprintf("extern \"C\" void %s(void);", ext)}
					hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Pure jump thunk forwarding to %s.", lbl), nil)
					code := fmt.Sprintf("%sextern \"C\" void %s(void) {\n    %s();\n}\n", hdr, fnIdent, ext)
					return "pure_jmp_thunk", pre, code, true
				}
				mem := fmt.Sprintf("mem_%08X", addr)
				pre := []string{fmt.Sprintf("extern \"C\" uintptr_t %s;", mem)}
				comment := body[0].Comment
				if comment == "" {
					comment = mem
				}
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("IAT jump thunk forwarding to %s.", comment), nil)
				code := fmt.Sprintf("%sextern \"C\" void %s(void) {\n    typedef void (*TargetFn)(void);\n    TargetFn target = reinterpret_cast<TargetFn>(%s);\n    target();\n}\n", hdr, fnIdent, mem)
				return "iat_jmp_thunk", pre, code, true
			}
		}

		// A2: 2-instruction thunks (`add/sub ecx, imm; jmp`, `mov ecx, [ecx+off]; jmp`, `mov [ecx], vtbl; jmp`)
		if len(body) == 2 {
			i0 := inst(0)
			if isDirect, addr, ok := parseJmpTarget(rhs); ok {
				// This-adjustor thunk
				var adj int64
				isAdj := false
				if strings.HasPrefix(i0, "add ecx, ") {
					if v, ok := parseImmInt(strings.TrimPrefix(i0, "add ecx, ")); ok {
						adj, isAdj = v, true
					}
				} else if strings.HasPrefix(i0, "sub ecx, ") {
					if v, ok := parseImmInt(strings.TrimPrefix(i0, "sub ecx, ")); ok {
						adj, isAdj = -v, true
					}
				}
				if isAdj {
					lbl := lookupSymLabel(addr, syms, units)
					adjExpr := fmt.Sprintf("static_cast<char*>(self) + %s", fmtSignedHex(adj))
					if adj < 0 {
						adjExpr = fmt.Sprintf("static_cast<char*>(self) - 0x%X", -adj)
					}
					if isDirect {
						ext := fmt.Sprintf("ext_%08X", addr)
						pre := []string{fmt.Sprintf("extern \"C\" void __fastcall %s(void* self);", ext)}
						hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("This-adjustor thunk: adjusts `this` by %s and tail-calls %s.", fmtFieldOffset(adj), lbl), nil)
						code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    %s(%s);\n}\n", hdr, fnIdent, ext, adjExpr)
						return "this_adjustor_thunk", pre, code, true
					}
					mem := fmt.Sprintf("mem_%08X", addr)
					pre := []string{fmt.Sprintf("extern \"C\" uintptr_t %s;", mem)}
					hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("This-adjustor thunk: adjusts `this` by %s and forwards through %s.", fmtFieldOffset(adj), mem), nil)
					code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    typedef void (__fastcall* ForwardFn)(void*);\n    ForwardFn target = reinterpret_cast<ForwardFn>(%s);\n    target(%s);\n}\n", hdr, fnIdent, mem, adjExpr)
					return "this_adjustor_thunk", pre, code, true
				}

				// Member forwarding thunk: `mov ecx, dword ptr [ecx + DISP]` + `jmp`
				if strings.HasPrefix(i0, "mov ecx, ") {
					if memExpr, ok := stripPtrQualifier(strings.TrimPrefix(i0, "mov ecx, "), "dword", false); ok {
						if disp, ok := extractRegDisp(memExpr, "ecx"); ok {
							lbl := lookupSymLabel(addr, syms, units)
							var fields []FieldSpec
							if cls != "" {
								fields = append(fields, FieldSpec{
									Class:  cls,
									Offset: fmtFieldOffset(disp),
									Type:   "void*",
									Name:   fmtFieldName("delegate", disp),
								})
							}
							if isDirect {
								ext := fmt.Sprintf("ext_%08X", addr)
								pre := []string{fmt.Sprintf("extern \"C\" void __fastcall %s(void* self);", ext)}
								hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Member forwarding thunk: loads subobject pointer at %s and tail-calls %s.", fmtFieldOffset(disp), lbl), fields)
								code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    void* delegate_obj = lift_field<void*>(self, %s);\n    %s(delegate_obj);\n}\n", hdr, fnIdent, fmtSignedHex(disp), ext)
								return "member_forward_thunk", pre, code, true
							}
							mem := fmt.Sprintf("mem_%08X", addr)
							pre := []string{fmt.Sprintf("extern \"C\" uintptr_t %s;", mem)}
							hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Member forwarding thunk: loads subobject pointer at %s and forwards through %s.", fmtFieldOffset(disp), mem), fields)
							code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    typedef void (__fastcall* ForwardFn)(void*);\n    void* delegate_obj = lift_field<void*>(self, %s);\n    ForwardFn target = reinterpret_cast<ForwardFn>(%s);\n    target(delegate_obj);\n}\n", hdr, fnIdent, fmtSignedHex(disp), mem)
							return "member_forward_thunk", pre, code, true
						}
					}
				}

				// Base destructor tail-call: `mov dword ptr [ecx], 0xVTABLE` + `jmp`
				if strings.HasPrefix(i0, "mov dword ptr [ecx], ") {
					if vtbl, ok := parseHexAddr32(strings.TrimPrefix(i0, "mov dword ptr [ecx], ")); ok {
						vmem := fmt.Sprintf("mem_%08X", vtbl)
						lbl := lookupSymLabel(addr, syms, units)
						var fields []FieldSpec
						if cls != "" {
							fields = append(fields, FieldSpec{Class: cls, Offset: "+0x0", Type: "void*", Name: "vtable"})
						}
						if isDirect {
							ext := fmt.Sprintf("ext_%08X", addr)
							pre := []string{
								fmt.Sprintf("extern \"C\" int %s;", vmem),
								fmt.Sprintf("extern \"C\" void __fastcall %s(void* self);", ext),
							}
							hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Destructor tail-call: restores vtable %s and tail-calls base destructor %s.", vmem, lbl), fields)
							code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    lift_field<void*>(self, 0x0) = &%s;\n    %s(self);\n}\n", hdr, fnIdent, vmem, ext)
							return "base_dtor_tail_call", pre, code, true
						}
						tmem := fmt.Sprintf("mem_%08X", addr)
						pre := []string{
							fmt.Sprintf("extern \"C\" int %s;", vmem),
							fmt.Sprintf("extern \"C\" uintptr_t %s;", tmem),
						}
						comment := body[1].Comment
						if comment == "" {
							comment = tmem
						}
						hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Destructor tail-call: restores vtable %s and tail-calls %s.", vmem, comment), fields)
						code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    typedef void (__fastcall* DtorFn)(void*);\n    lift_field<void*>(self, 0x0) = &%s;\n    DtorFn base_dtor = reinterpret_cast<DtorFn>(%s);\n    base_dtor(self);\n}\n", hdr, fnIdent, vmem, tmem)
						return "base_dtor_tail_call", pre, code, true
					}
				}
			}

			// A3: 2-instruction vcall thunk: `mov eax, dword ptr [ecx]; jmp dword ptr [eax + OFF]`
			if i0 == "mov eax, dword ptr [ecx]" || i0 == "mov eax, [ecx]" {
				if memExpr, ok := stripPtrQualifier(rhs, "dword", false); ok {
					if disp, ok := extractRegDisp(memExpr, "eax"); ok && disp >= 0 {
						var fields []FieldSpec
						if cls != "" {
							fields = append(fields, FieldSpec{Class: cls, Offset: "+0x0", Type: "void*", Name: "vtable"})
						}
						hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Virtual dispatch thunk: forwards to vtable slot at %s.", fmtFieldOffset(disp)), fields)
						code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    typedef void (__fastcall* VFunc)(void*);\n    void* vtable = lift_field<void*>(self, 0x0);\n    VFunc target = lift_field<VFunc>(vtable, %s);\n    target(self);\n}\n", hdr, fnIdent, fmtSignedHex(disp))
						return "vcall_forward_thunk", nil, code, true
					}
				}
			}
		}

		// A4: 3-instruction vcall thunk: `mov eax, [ecx]; mov edx, [eax + OFF]; jmp edx`
		if len(body) == 3 {
			i0, i1 := inst(0), inst(1)
			if (i0 == "mov eax, dword ptr [ecx]" || i0 == "mov eax, [ecx]") && rhs == "edx" && strings.HasPrefix(i1, "mov edx, ") {
				if memExpr, ok := stripPtrQualifier(strings.TrimPrefix(i1, "mov edx, "), "dword", false); ok {
					if disp, ok := extractRegDisp(memExpr, "eax"); ok && disp >= 0 {
						var fields []FieldSpec
						if cls != "" {
							fields = append(fields, FieldSpec{Class: cls, Offset: "+0x0", Type: "void*", Name: "vtable"})
						}
						hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Virtual dispatch thunk: forwards to vtable slot at %s.", fmtFieldOffset(disp)), fields)
						code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self) {\n    typedef void (__fastcall* VFunc)(void*);\n    void* vtable = lift_field<void*>(self, 0x0);\n    VFunc target = lift_field<VFunc>(vtable, %s);\n    target(self);\n}\n", hdr, fnIdent, fmtSignedHex(disp))
						return "vcall_forward_thunk", nil, code, true
					}
				}
			}
		}

		return "", nil, "", false
	}

	// ---- From here on, function must end in `ret` / `ret N` ----
	retBytes, isRet := parseRetStackBytes(lastInst)
	if !isRet {
		return "", nil, "", false
	}

	// ---- Pattern B: Scalar deleting destructor ----
	// Standard MSVC8 shape:
	//   push esi
	//   mov esi, ecx
	//   call <dtor>
	//   test byte ptr [esp + 0x8], 0x1
	//   je <L_ret>
	//   push esi
	//   call <operator_delete>
	//   add esp, 0x4
	// L_ret:
	//   mov eax, esi
	//   pop esi
	//   ret 0x4
	if len(body) == 11 && retBytes == 4 &&
		inst(0) == "push esi" &&
		inst(1) == "mov esi, ecx" &&
		strings.HasPrefix(inst(2), "call ") &&
		inst(3) == "test byte ptr [esp + 0x8], 0x1" &&
		strings.HasPrefix(inst(4), "je ") &&
		inst(5) == "push esi" &&
		strings.HasPrefix(inst(6), "call ") &&
		inst(7) == "add esp, 0x4" &&
		inst(8) == "mov eax, esi" &&
		inst(9) == "pop esi" {
		dtorRHS := strings.TrimSpace(strings.TrimPrefix(inst(2), "call "))
		delRHS := strings.TrimSpace(strings.TrimPrefix(inst(6), "call "))
		dtorAddr, dtorDirect := parseHexAddr32(dtorRHS)
		delAddr, delDirect := parseHexAddr32(delRHS)
		delIAT, delIsIAT := parseIndirectMemAddr(delRHS, "dword")
		if dtorDirect && (delDirect || delIsIAT) {
			dtorExt := fmt.Sprintf("ext_%08X", dtorAddr)
			dtorLbl := lookupSymLabel(dtorAddr, syms, units)
			pre := []string{fmt.Sprintf("extern \"C\" void __fastcall %s(void* self);", dtorExt)}
			var delCall string
			if delDirect {
				delExt := fmt.Sprintf("ext_%08X", delAddr)
				pre = append(pre, fmt.Sprintf("extern \"C\" void __cdecl %s(void* ptr);", delExt))
				delCall = fmt.Sprintf("%s(self);", delExt)
			} else {
				delMem := fmt.Sprintf("mem_%08X", delIAT)
				pre = append(pre, fmt.Sprintf("extern \"C\" uintptr_t %s;", delMem))
				delCall = fmt.Sprintf("reinterpret_cast<void (__cdecl*)(void*)>(%s)(self);", delMem)
			}
			hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("MSVC scalar deleting destructor: calls %s and frees memory when (flags & 1) is set.", dtorLbl), nil)
			code := fmt.Sprintf("%sextern \"C\" void* __fastcall %s(void* self, int edx_unused, unsigned int flags) {\n    (void)edx_unused;\n    %s(self);\n    if ((flags & 1u) != 0) {\n        %s\n    }\n    return self;\n}\n", hdr, fnIdent, dtorExt, delCall)
			return "scalar_deleting_dtor", pre, code, true
		}
	}

	// ---- Pattern C: Guarded null-check subobject offset getter ----
	//   test ecx, ecx
	//   je L_null
	//   lea eax, [ecx + DISP]
	//   ret [N]
	// L_null:
	//   xor eax, eax
	//   ret [N]
	if len(body) == 6 &&
		inst(0) == "test ecx, ecx" &&
		strings.HasPrefix(inst(1), "je ") &&
		strings.HasPrefix(inst(2), "lea eax, ") &&
		inst(3) == lastInst &&
		(inst(4) == "xor eax, eax" || inst(4) == "sub eax, eax") {
		if disp, ok := extractRegDisp(strings.TrimPrefix(inst(2), "lea eax, "), "ecx"); ok {
			thisParams := formatLiftParams(retBytes, true)
			hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Null-safe subobject pointer adjustment: returns `this %s` if non-null, else nullptr.", fmtFieldOffset(disp)), nil)
			code := fmt.Sprintf("%sextern \"C\" void* __fastcall %s(%s) {\n    if (self == nullptr) {\n        return nullptr;\n    }\n    return static_cast<char*>(self) + %s;\n}\n", hdr, fnIdent, thisParams, fmtSignedHex(disp))
			return "guarded_this_offset", nil, code, true
		}
	}

	// ---- Pattern D: Container element count (`(end - begin) >> shift`) ----
	//   mov eax, dword ptr [ecx + END]
	//   sub eax, dword ptr [ecx + BEG]
	//   sar eax, SHIFT
	//   ret [N]
	if len(body) == 4 &&
		strings.HasPrefix(inst(0), "mov eax, ") &&
		strings.HasPrefix(inst(1), "sub eax, ") &&
		strings.HasPrefix(inst(2), "sar eax, ") {
		m0, ok0 := stripPtrQualifier(strings.TrimPrefix(inst(0), "mov eax, "), "dword", false)
		m1, ok1 := stripPtrQualifier(strings.TrimPrefix(inst(1), "sub eax, "), "dword", false)
		if ok0 && ok1 {
			dEnd, okE := extractRegDisp(m0, "ecx")
			dBeg, okB := extractRegDisp(m1, "ecx")
			shift, okS := parseImmInt(strings.TrimPrefix(inst(2), "sar eax, "))
			if okE && okB && okS && shift >= 0 && shift <= 30 {
				var fields []FieldSpec
				if cls != "" {
					fields = append(fields,
						FieldSpec{Class: cls, Offset: fmtFieldOffset(dBeg), Type: "char*", Name: fmtFieldName("begin", dBeg)},
						FieldSpec{Class: cls, Offset: fmtFieldOffset(dEnd), Type: "char*", Name: fmtFieldName("end", dEnd)},
					)
				}
				thisParams := formatLiftParams(retBytes, true)
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Returns container element count: (field[%s] - field[%s]) >> %d.", fmtFieldOffset(dEnd), fmtFieldOffset(dBeg), shift), fields)
				code := fmt.Sprintf("%sextern \"C\" int32_t __fastcall %s(%s) {\n    const char* end_ptr = lift_field<const char*>(self, %s);\n    const char* beg_ptr = lift_field<const char*>(self, %s);\n    return static_cast<int32_t>((end_ptr - beg_ptr) >> %d);\n}\n", hdr, fnIdent, thisParams, fmtSignedHex(dEnd), fmtSignedHex(dBeg), shift)
				return "vector_size", nil, code, true
			}
		}
	}

	// Remaining patterns require no direct calls.
	if u.NumCallees > 0 {
		return "", nil, "", false
	}

	callConv := "__stdcall"
	if retBytes == 0 {
		callConv = "__cdecl"
	}
	params := formatLiftParams(retBytes, false)
	thisParams := formatLiftParams(retBytes, true)

	// ---- Pattern E: Empty return ----
	if len(body) == 1 {
		hdr := formatLiftHeader(u, baseName, cls, "Empty function (returns immediately).", nil)
		code := fmt.Sprintf("%sextern \"C\" void %s %s(%s) {\n    return;\n}\n", hdr, callConv, fnIdent, params)
		return "empty_ret", nil, code, true
	}

	// ---- Pattern F: 2-instruction leaf functions ----
	if len(body) == 2 {
		i0 := inst(0)

		// Constants
		if i0 == "xor eax, eax" || i0 == "sub eax, eax" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns constant 0.", nil)
			code := fmt.Sprintf("%sextern \"C\" int32_t %s %s(%s) {\n    return 0;\n}\n", hdr, callConv, fnIdent, params)
			return "ret_const", nil, code, true
		}
		if i0 == "xor al, al" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns constant false.", nil)
			code := fmt.Sprintf("%sextern \"C\" bool %s %s(%s) {\n    return false;\n}\n", hdr, callConv, fnIdent, params)
			return "ret_const", nil, code, true
		}
		if i0 == "or eax, -0x1" || i0 == "or eax, -1" || i0 == "or eax, 0xffffffff" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns constant -1.", nil)
			code := fmt.Sprintf("%sextern \"C\" int32_t %s %s(%s) {\n    return -1;\n}\n", hdr, callConv, fnIdent, params)
			return "ret_const", nil, code, true
		}
		if i0 == "fldz" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns constant 0.0f.", nil)
			code := fmt.Sprintf("%sextern \"C\" float %s %s(%s) {\n    return 0.0f;\n}\n", hdr, callConv, fnIdent, params)
			return "ret_const", nil, code, true
		}
		if i0 == "fld1" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns constant 1.0f.", nil)
			code := fmt.Sprintf("%sextern \"C\" float %s %s(%s) {\n    return 1.0f;\n}\n", hdr, callConv, fnIdent, params)
			return "ret_const", nil, code, true
		}
		if i0 == "mov eax, ecx" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns `this` pointer unchanged.", nil)
			code := fmt.Sprintf("%sextern \"C\" void* __fastcall %s(%s) {\n    return self;\n}\n", hdr, fnIdent, thisParams)
			return "ret_this", nil, code, true
		}

		// Global address / global dword load
		if strings.HasPrefix(i0, "mov eax, ") {
			rhs := strings.TrimSpace(strings.TrimPrefix(i0, "mov eax, "))
			if addr, ok := parseIndirectMemAddr(rhs, "dword"); ok {
				mem := fmt.Sprintf("mem_%08X", addr)
				pre := []string{fmt.Sprintf("extern \"C\" int32_t %s;", mem)}
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Returns global int32 value from %s.", mem), nil)
				code := fmt.Sprintf("%sextern \"C\" int32_t %s %s(%s) {\n    return %s;\n}\n", hdr, callConv, fnIdent, params, mem)
				return "ret_global", pre, code, true
			}
			if imm, ok := parseImmInt(rhs); ok {
				if len(u.Relocations) > 0 && imm > 0x400000 {
					mem := fmt.Sprintf("mem_%08X", uint32(imm))
					pre := []string{fmt.Sprintf("extern \"C\" int %s;", mem)}
					hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Returns address of global %s.", mem), nil)
					code := fmt.Sprintf("%sextern \"C\" void* %s %s(%s) {\n    return &%s;\n}\n", hdr, callConv, fnIdent, params, mem)
					return "ret_global_addr", pre, code, true
				}
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Returns constant %s.", fmtSignedHex(imm)), nil)
				code := fmt.Sprintf("%sextern \"C\" int32_t %s %s(%s) {\n    return %s;\n}\n", hdr, callConv, fnIdent, params, fmtSignedHex(imm))
				return "ret_const", nil, code, true
			}
		}
		if strings.HasPrefix(i0, "mov al, ") {
			rhs := strings.TrimSpace(strings.TrimPrefix(i0, "mov al, "))
			if imm, ok := parseImmInt(rhs); ok {
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Returns constant byte %s.", fmtSignedHex(imm)), nil)
				code := fmt.Sprintf("%sextern \"C\" uint8_t %s %s(%s) {\n    return %s;\n}\n", hdr, callConv, fnIdent, params, fmtSignedHex(imm))
				return "ret_const", nil, code, true
			}
		}

		// Field getters on `this` (`ecx`)
		type getterSpec struct {
			prefix     string
			ptrKind    string
			requirePtr bool
			fieldType  string
			retType    string
			desc       string
		}
		getters := []getterSpec{
			{"fld ", "dword", true, "float", "float", "float"},
			{"fld ", "qword", true, "double", "double", "double"},
			{"mov eax, ", "dword", false, "int32_t", "int32_t", "int32_t"},
			{"mov al, ", "byte", false, "uint8_t", "uint8_t", "uint8_t"},
			{"mov ax, ", "word", false, "int16_t", "int16_t", "int16_t"},
			{"movzx eax, ", "byte", true, "uint8_t", "uint32_t", "uint8_t"},
			{"movzx eax, ", "word", true, "uint16_t", "uint32_t", "uint16_t"},
			{"movsx eax, ", "byte", true, "int8_t", "int32_t", "int8_t"},
			{"movsx eax, ", "word", true, "int16_t", "int32_t", "int16_t"},
		}
		for _, g := range getters {
			if strings.HasPrefix(i0, g.prefix) {
				if memExpr, ok := stripPtrQualifier(strings.TrimPrefix(i0, g.prefix), g.ptrKind, g.requirePtr); ok {
					if disp, ok := extractRegDisp(memExpr, "ecx"); ok {
						var fields []FieldSpec
						if cls != "" {
							fields = append(fields, FieldSpec{
								Class:  cls,
								Offset: fmtFieldOffset(disp),
								Type:   g.fieldType,
								Name:   fmtFieldName("field", disp),
							})
						}
						hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Getter returning %s field at offset %s.", g.desc, fmtFieldOffset(disp)), fields)
						code := fmt.Sprintf("%sextern \"C\" %s __fastcall %s(%s) {\n    return static_cast<%s>(lift_field<%s>(self, %s));\n}\n",
							hdr, g.retType, fnIdent, thisParams, g.retType, g.fieldType, fmtSignedHex(disp))
						return "this_field_getter", nil, code, true
					}
				}
			}
		}

		// Subobject pointer getter: `lea eax, [ecx + DISP]`
		if strings.HasPrefix(i0, "lea eax, ") {
			if disp, ok := extractRegDisp(strings.TrimPrefix(i0, "lea eax, "), "ecx"); ok {
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Returns pointer to subobject/field at offset %s.", fmtFieldOffset(disp)), nil)
				code := fmt.Sprintf("%sextern \"C\" void* __fastcall %s(%s) {\n    return static_cast<char*>(self) + %s;\n}\n", hdr, fnIdent, thisParams, fmtSignedHex(disp))
				return "this_lea_getter", nil, code, true
			}
		}

		// Constant field setter: `mov dword/word/byte ptr [ecx + DISP], IMM`
		type constStoreSpec struct {
			ptrKind   string
			fieldType string
		}
		for _, cs := range []constStoreSpec{{"dword", "int32_t"}, {"word", "uint16_t"}, {"byte", "uint8_t"}} {
			pfx := "mov " + cs.ptrKind + " ptr "
			if strings.HasPrefix(i0, pfx) {
				if comma := strings.LastIndexByte(i0, ','); comma != -1 {
					lhs := strings.TrimSpace(i0[len(pfx):comma])
					rhs := strings.TrimSpace(i0[comma+1:])
					if disp, ok := extractRegDisp(lhs, "ecx"); ok {
						if imm, ok := parseImmInt(rhs); ok {
							if len(u.Relocations) > 0 && cs.ptrKind == "dword" && imm > 0x400000 {
								mem := fmt.Sprintf("mem_%08X", uint32(imm))
								pre := []string{fmt.Sprintf("extern \"C\" int %s;", mem)}
								var fields []FieldSpec
								if cls != "" {
									fields = append(fields, FieldSpec{Class: cls, Offset: fmtFieldOffset(disp), Type: "void*", Name: fmtFieldName("field", disp)})
								}
								hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Stores address of %s into field at offset %s.", mem, fmtFieldOffset(disp)), fields)
								code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(%s) {\n    lift_field<void*>(self, %s) = &%s;\n}\n", hdr, fnIdent, thisParams, fmtSignedHex(disp), mem)
								return "this_const_setter", pre, code, true
							}
							var fields []FieldSpec
							if cls != "" {
								fields = append(fields, FieldSpec{Class: cls, Offset: fmtFieldOffset(disp), Type: cs.fieldType, Name: fmtFieldName("field", disp)})
							}
							hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Sets %s field at offset %s to constant %s.", cs.fieldType, fmtFieldOffset(disp), fmtSignedHex(imm)), fields)
							code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(%s) {\n    lift_field<%s>(self, %s) = static_cast<%s>(%s);\n}\n",
								hdr, fnIdent, thisParams, cs.fieldType, fmtSignedHex(disp), cs.fieldType, fmtSignedHex(imm))
							return "this_const_setter", nil, code, true
						}
					}
				}
			}
		}
	}

	// ---- Pattern G: 3-instruction leaf functions ----
	if len(body) == 3 && len(u.Relocations) == 0 {
		i0, i1 := inst(0), inst(1)

		// `xor eax, eax; inc eax; ret`
		if (i0 == "xor eax, eax" || i0 == "sub eax, eax") && i1 == "inc eax" {
			hdr := formatLiftHeader(u, baseName, cls, "Returns constant 1.", nil)
			code := fmt.Sprintf("%sextern \"C\" int32_t %s %s(%s) {\n    return 1;\n}\n", hdr, callConv, fnIdent, params)
			return "ret_const", nil, code, true
		}

		// Float setter: `fld dword ptr [esp + 0x4]; fstp dword ptr [ecx + DISP]; ret 0x4`
		if retBytes == 4 && i0 == "fld dword ptr [esp + 0x4]" && strings.HasPrefix(i1, "fstp dword ptr ") {
			if disp, ok := extractRegDisp(strings.TrimPrefix(i1, "fstp dword ptr "), "ecx"); ok {
				var fields []FieldSpec
				if cls != "" {
					fields = append(fields, FieldSpec{Class: cls, Offset: fmtFieldOffset(disp), Type: "float", Name: fmtFieldName("field", disp)})
				}
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Setter storing float argument into field at offset %s.", fmtFieldOffset(disp)), fields)
				code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self, int edx_unused, float value) {\n    (void)edx_unused;\n    lift_field<float>(self, %s) = value;\n}\n", hdr, fnIdent, fmtSignedHex(disp))
				return "this_float_setter", nil, code, true
			}
		}

		// Double setter: `fld qword ptr [esp + 0x4]; fstp qword ptr [ecx + DISP]; ret 0x8`
		if retBytes == 8 && i0 == "fld qword ptr [esp + 0x4]" && strings.HasPrefix(i1, "fstp qword ptr ") {
			if disp, ok := extractRegDisp(strings.TrimPrefix(i1, "fstp qword ptr "), "ecx"); ok {
				var fields []FieldSpec
				if cls != "" {
					fields = append(fields, FieldSpec{Class: cls, Offset: fmtFieldOffset(disp), Type: "double", Name: fmtFieldName("field", disp)})
				}
				hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Setter storing double argument into field at offset %s.", fmtFieldOffset(disp)), fields)
				code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self, int edx_unused, double value) {\n    (void)edx_unused;\n    lift_field<double>(self, %s) = value;\n}\n", hdr, fnIdent, fmtSignedHex(disp))
				return "this_double_setter", nil, code, true
			}
		}

		// Integer/word/byte setter: `mov eax/ax/al, [esp + 0x4]; mov [ecx + DISP], eax/ax/al; ret 0x4`
		if retBytes == 4 {
			type intSetterSpec struct {
				reg       string
				ptrKind   string
				fieldType string
				argType   string
			}
			for _, s := range []intSetterSpec{
				{"eax", "dword", "int32_t", "int32_t"},
				{"ax", "word", "int16_t", "int16_t"},
				{"al", "byte", "uint8_t", "uint8_t"},
			} {
				loadPfx := "mov " + s.reg + ", "
				storeSfx := ", " + s.reg
				if strings.HasPrefix(i0, loadPfx) && strings.HasPrefix(i1, "mov ") && strings.HasSuffix(i1, storeSfx) {
					m0, ok0 := stripPtrQualifier(strings.TrimPrefix(i0, loadPfx), s.ptrKind, false)
					m1, ok1 := stripPtrQualifier(strings.TrimSuffix(strings.TrimPrefix(i1, "mov "), storeSfx), s.ptrKind, false)
					if ok0 && ok1 {
						argDisp, okA := extractRegDisp(m0, "esp")
						fldDisp, okF := extractRegDisp(m1, "ecx")
						if okA && argDisp == 4 && okF {
							var fields []FieldSpec
							if cls != "" {
								fields = append(fields, FieldSpec{Class: cls, Offset: fmtFieldOffset(fldDisp), Type: s.fieldType, Name: fmtFieldName("field", fldDisp)})
							}
							hdr := formatLiftHeader(u, baseName, cls, fmt.Sprintf("Setter storing %s argument into field at offset %s.", s.fieldType, fmtFieldOffset(fldDisp)), fields)
							code := fmt.Sprintf("%sextern \"C\" void __fastcall %s(void* self, int edx_unused, %s value) {\n    (void)edx_unused;\n    lift_field<%s>(self, %s) = value;\n}\n",
								hdr, fnIdent, s.argType, s.fieldType, fmtSignedHex(fldDisp))
							return "this_int_setter", nil, code, true
						}
					}
				}
			}
		}
	}

	return "", nil, "", false
}

// ---- Pass 2: Identical-shape lift clone propagation -----------------------------------------------------

var (
	alShapeHexRe = regexp.MustCompile(`-?0x[0-9a-fA-F]+`)
	alShapeWSRe  = regexp.MustCompile(`\s+`)
	alShapeBrRe  = regexp.MustCompile(`^(call|jmp|j[a-z]+|loop[a-z]*)$`)
)

type alOpKind int

const (
	alOpInternalBranch alOpKind = iota
	alOpExt
	alOpHex
)

type alShapeOp struct {
	kind  alOpKind
	uval  uint32
	sval  int64
	isNeg bool
}

func (o alShapeOp) key() string {
	switch o.kind {
	case alOpInternalBranch:
		return "I"
	case alOpExt:
		return fmt.Sprintf("E:%08X", o.uval)
	case alOpHex:
		if o.isNeg {
			return fmt.Sprintf("H:-%d", -o.sval)
		}
		return fmt.Sprintf("H:%08X", o.uval)
	}
	return ""
}

func normalizeDisasmShape(lines []DisasmLine) (string, []alShapeOp, bool) {
	if len(lines) == 0 {
		return "", nil, false
	}
	startVA := lines[0].VA
	last := lines[len(lines)-1]
	endVA := last.VA + uint32(len(last.Bytes))

	var ins []string
	var opsOut []alShapeOp
	for _, l := range lines {
		text := stripDisasmAngle(l.Inst)
		if text == "" {
			continue
		}
		mn := text
		ops := ""
		if sp := strings.IndexByte(text, ' '); sp != -1 {
			mn = strings.TrimSpace(text[:sp])
			ops = strings.TrimSpace(text[sp+1:])
		}
		if alShapeBrRe.MatchString(mn) && strings.HasPrefix(ops, "0x") {
			if v, err := strconv.ParseUint(strings.TrimPrefix(ops, "0x"), 16, 32); err == nil {
				tVA := uint32(v)
				if tVA >= startVA && tVA < endVA {
					opsOut = append(opsOut, alShapeOp{kind: alOpInternalBranch})
				} else {
					opsOut = append(opsOut, alShapeOp{kind: alOpExt, uval: tVA})
				}
				ops = "T"
			}
		} else {
			ops = alShapeHexRe.ReplaceAllStringFunc(ops, func(m string) string {
				if strings.HasPrefix(m, "-") {
					if sv, err := strconv.ParseInt(m, 0, 64); err == nil {
						opsOut = append(opsOut, alShapeOp{kind: alOpHex, sval: sv, uval: uint32(sv), isNeg: true})
					}
				} else {
					if uv, err := strconv.ParseUint(strings.TrimPrefix(m, "0x"), 16, 32); err == nil {
						opsOut = append(opsOut, alShapeOp{kind: alOpHex, sval: int64(uv), uval: uint32(uv)})
					}
				}
				return "N"
			})
		}
		norm := alShapeWSRe.ReplaceAllString(strings.TrimSpace(mn+" "+ops), " ")
		ins = append(ins, norm)
	}
	if len(ins) == 0 {
		return "", nil, false
	}
	return strings.Join(ins, "|"), opsOut, true
}

type liftedSourceBlock struct {
	VA       string
	Preamble []string
	Block    string
}

func loadLiftedSources() map[string]liftedSourceBlock {
	result := map[string]liftedSourceBlock{}
	if _, err := os.Stat(liftedRootDir); os.IsNotExist(err) {
		return result
	}
	_ = filepath.WalkDir(liftedRootDir, func(path string, d os.DirEntry, err error) error {
		if err != nil {
			return nil
		}
		slash := filepath.ToSlash(path)
		if d.IsDir() {
			if slash == liftedWipDir || strings.HasPrefix(slash, liftedWipDir+"/") || slash == liftedIncDir {
				return filepath.SkipDir
			}
			return nil
		}
		if !strings.HasSuffix(path, ".cpp") {
			return nil
		}
		raw, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		lines := strings.Split(strings.ReplaceAll(string(raw), "\r\n", "\n"), "\n")
		var preamble []string
		seenMarker := false
		curVA := ""
		var curLines []string

		flush := func() {
			if curVA == "" || len(curLines) == 0 {
				return
			}
			blk := strings.TrimSpace(strings.Join(curLines, "\n"))
			if blk != "" {
				result[curVA] = liftedSourceBlock{
					VA:       curVA,
					Preamble: append([]string(nil), preamble...),
					Block:    blk,
				}
			}
		}

		for _, l := range lines {
			t := strings.TrimSpace(l)
			if m := markerLineRe.FindStringSubmatch(t); len(m) == 2 {
				flush()
				seenMarker = true
				curVA = unitstore.NormVA(m[1])
				curLines = []string{l}
				continue
			}
			if !seenMarker {
				if t != "" && !strings.HasPrefix(t, liftShardBannerPrefix) && !strings.HasPrefix(t, "//") {
					preamble = append(preamble, l)
				}
				continue
			}
			if curVA != "" {
				curLines = append(curLines, l)
			}
		}
		flush()
		return nil
	})
	return result
}

type cppTok struct {
	text string
	kind string // "ident", "hex", "dec", "other"
}

func tokenizeCpp(body string) []cppTok {
	var toks []cppTok
	n := len(body)
	i := 0
	for i < n {
		c := body[i]
		if c == '/' && i+1 < n && body[i+1] == '/' {
			start := i
			for i < n && body[i] != '\n' {
				i++
			}
			toks = append(toks, cppTok{text: body[start:i], kind: "other"})
			continue
		}
		if c == '/' && i+1 < n && body[i+1] == '*' {
			start := i
			i += 2
			for i+1 < n && !(body[i] == '*' && body[i+1] == '/') {
				i++
			}
			if i+1 < n {
				i += 2
			} else {
				i = n
			}
			toks = append(toks, cppTok{text: body[start:i], kind: "other"})
			continue
		}
		if c == '"' || c == '\'' {
			q := c
			start := i
			i++
			for i < n {
				if body[i] == '\\' && i+1 < n {
					i += 2
					continue
				}
				if body[i] == q {
					i++
					break
				}
				i++
			}
			toks = append(toks, cppTok{text: body[start:i], kind: "other"})
			continue
		}
		if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_' {
			start := i
			i++
			for i < n {
				ch := body[i]
				if (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_' {
					i++
				} else {
					break
				}
			}
			toks = append(toks, cppTok{text: body[start:i], kind: "ident"})
			continue
		}
		isUnaryMinus := false
		if c == '-' && i+1 < n && body[i+1] >= '0' && body[i+1] <= '9' {
			prevKind, prevText := "", ""
			for j := len(toks) - 1; j >= 0; j-- {
				if strings.TrimSpace(toks[j].text) != "" {
					prevKind, prevText = toks[j].kind, toks[j].text
					break
				}
			}
			if prevKind != "ident" && prevKind != "hex" && prevKind != "dec" && prevText != ")" && prevText != "]" {
				isUnaryMinus = true
			}
		}
		if (c >= '0' && c <= '9') || isUnaryMinus {
			start := i
			if isUnaryMinus {
				i++
			}
			if i+1 < n && body[i] == '0' && (body[i+1] == 'x' || body[i+1] == 'X') {
				i += 2
				for i < n {
					ch := body[i]
					if (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F') {
						i++
					} else {
						break
					}
				}
				toks = append(toks, cppTok{text: body[start:i], kind: "hex"})
			} else {
				for i < n && body[i] >= '0' && body[i] <= '9' {
					i++
				}
				toks = append(toks, cppTok{text: body[start:i], kind: "dec"})
			}
			continue
		}
		toks = append(toks, cppTok{text: body[i : i+1], kind: "other"})
		i++
	}
	return toks
}

func substituteLiftedClone(
	src liftedSourceBlock,
	srcEntry LiftEntry,
	srcLines []DisasmLine,
	srcOps []alShapeOp,
	tgtUnit decomp.UnitEntry,
	tgtLines []DisasmLine,
	tgtOps []alShapeOp,
) (preamble []string, funcBlock string, ok bool) {
	if len(srcOps) != len(tgtOps) || len(srcLines) != len(tgtLines) || len(srcLines) == 0 {
		return nil, "", false
	}

	sRet, sIsRet := parseRetStackBytes(stripDisasmAngle(srcLines[len(srcLines)-1].Inst))
	tRet, tIsRet := parseRetStackBytes(stripDisasmAngle(tgtLines[len(tgtLines)-1].Inst))
	if sIsRet != tIsRet || (sIsRet && sRet != tRet) {
		return nil, "", false
	}

	type opDiff struct {
		sOp alShapeOp
		tOp alShapeOp
	}
	diffMap := map[string]opDiff{}
	unchanged := map[string]bool{}
	for i := range srcOps {
		if srcOps[i].kind != tgtOps[i].kind {
			return nil, "", false
		}
		sk, tk := srcOps[i].key(), tgtOps[i].key()
		if sk == tk {
			unchanged[sk] = true
			continue
		}
		if prev, exists := diffMap[sk]; exists {
			if prev.tOp.key() != tk {
				return nil, "", false
			}
		} else {
			diffMap[sk] = opDiff{sOp: srcOps[i], tOp: tgtOps[i]}
		}
	}
	for sk := range diffMap {
		if unchanged[sk] {
			return nil, "", false
		}
	}

	// Separate metadata header lines from the C++ function code.
	blkLines := strings.Split(src.Block, "\n")
	codeStart := 0
	for i, l := range blkLines {
		t := strings.TrimSpace(l)
		if t == "" || strings.HasPrefix(t, "//") {
			codeStart = i + 1
			continue
		}
		break
	}
	if codeStart >= len(blkLines) {
		return nil, "", false
	}
	codePart := strings.Join(blkLines[codeStart:], "\n")

	sShort := strings.TrimPrefix(unitstore.NormVA(srcEntry.VA), "0x")
	tShort := strings.TrimPrefix(unitstore.NormVA(tgtUnit.VA), "0x")
	codePart = strings.Replace(codePart, "fn_"+sShort, "fn_"+tShort, 1)
	if !strings.Contains(codePart, "fn_"+tShort) {
		return nil, "", false
	}

	braceIdx := strings.IndexByte(codePart, '{')
	if braceIdx == -1 {
		return nil, "", false
	}
	sigPart := codePart[:braceIdx]
	bodyPart := codePart[braceIdx:]

	// Track hex offset remapping for @field updates.
	hexRemap := map[int64]int64{}

	if len(diffMap) > 0 {
		toks := tokenizeCpp(bodyPart)
		tokRepl := map[int]string{}
		for _, d := range diffMap {
			matchedAny := false
			switch d.sOp.kind {
			case alOpExt:
				want := fmt.Sprintf("ext_%08X", d.sOp.uval)
				repl := fmt.Sprintf("ext_%08X", d.tOp.uval)
				for idx, tok := range toks {
					if tok.kind == "ident" && strings.EqualFold(tok.text, want) {
						if _, used := tokRepl[idx]; used {
							return nil, "", false
						}
						tokRepl[idx] = repl
						matchedAny = true
					}
				}
			case alOpHex:
				hexRemap[d.sOp.sval] = d.tOp.sval
				wantMem := fmt.Sprintf("mem_%08X", d.sOp.uval)
				replMem := fmt.Sprintf("mem_%08X", d.tOp.uval)
				for idx, tok := range toks {
					if tok.kind == "ident" && !d.sOp.isNeg && strings.EqualFold(tok.text, wantMem) {
						if _, used := tokRepl[idx]; used {
							return nil, "", false
						}
						tokRepl[idx] = replMem
						matchedAny = true
					} else if tok.kind == "hex" {
						match := false
						if d.sOp.isNeg && strings.HasPrefix(tok.text, "-") {
							if v, err := strconv.ParseInt(tok.text, 0, 64); err == nil && v == d.sOp.sval {
								match = true
							}
						} else if !d.sOp.isNeg && !strings.HasPrefix(tok.text, "-") {
							if v, err := strconv.ParseUint(strings.TrimPrefix(strings.ToLower(tok.text), "0x"), 16, 32); err == nil && uint32(v) == d.sOp.uval {
								match = true
							}
						}
						if match {
							if _, used := tokRepl[idx]; used {
								return nil, "", false
							}
							tokRepl[idx] = fmtSignedHex(d.tOp.sval)
							matchedAny = true
						}
					}
				}
				if !matchedAny {
					for idx, tok := range toks {
						if tok.kind == "dec" {
							if v, err := strconv.ParseInt(tok.text, 10, 64); err == nil && v == d.sOp.sval {
								if _, used := tokRepl[idx]; used {
									return nil, "", false
								}
								tokRepl[idx] = fmt.Sprintf("%d", d.tOp.sval)
								matchedAny = true
							}
						}
					}
				}
			}
			if !matchedAny {
				return nil, "", false
			}
		}
		var sb strings.Builder
		for idx, tok := range toks {
			if r, has := tokRepl[idx]; has {
				sb.WriteString(r)
			} else {
				sb.WriteString(tok.text)
			}
		}
		bodyPart = sb.String()
	}

	fullCode := sigPart + bodyPart

	// Build preamble: copy source preamble (filtering out old ext_/mem_ decls we replaced),
	// and rewrite ext_/mem_ declarations for any substituted identifiers.
	var pre []string
	seenPre := map[string]bool{}
	addPre := func(l string) {
		t := strings.TrimSpace(l)
		if t != "" && !seenPre[t] {
			seenPre[t] = true
			pre = append(pre, t)
		}
	}
	// Map old ext_/mem_ -> new ext_/mem_ so we can reuse exact signatures from the source preamble!
	extReplMap := map[string]string{}
	memReplMap := map[string]string{}
	for _, d := range diffMap {
		if d.sOp.kind == alOpExt {
			extReplMap[fmt.Sprintf("ext_%08X", d.sOp.uval)] = fmt.Sprintf("ext_%08X", d.tOp.uval)
		} else if d.sOp.kind == alOpHex && !d.sOp.isNeg {
			memReplMap[fmt.Sprintf("mem_%08X", d.sOp.uval)] = fmt.Sprintf("mem_%08X", d.tOp.uval)
		}
	}
	for _, pl := range src.Preamble {
		t := strings.TrimSpace(pl)
		if strings.HasPrefix(t, "#include") {
			addPre(t)
			continue
		}
		// Copy extern decls that are still referenced (or their substituted counterparts).
		if strings.HasPrefix(t, "extern ") {
			rewritten := t
			for oldSym, newSym := range extReplMap {
				if strings.Contains(rewritten, oldSym) {
					rewritten = strings.ReplaceAll(rewritten, oldSym, newSym)
				}
			}
			for oldSym, newSym := range memReplMap {
				if strings.Contains(rewritten, oldSym) {
					rewritten = strings.ReplaceAll(rewritten, oldSym, newSym)
				}
			}
			// Only include if referenced in fullCode
			keep := false
			for _, m := range extRefRe.FindAllString(fullCode, -1) {
				if strings.Contains(rewritten, m) {
					keep = true
					break
				}
			}
			if !keep {
				for _, m := range memRefRe.FindAllString(fullCode, -1) {
					if strings.Contains(rewritten, m) {
						keep = true
						break
					}
				}
			}
			if keep {
				addPre(rewritten)
			}
		}
	}

	// Build target metadata cleanly.
	tgtCls := classFromSymbol(tgtUnit.Symbol)
	tgtName := tgtUnit.Symbol
	if tgtName == "" {
		tgtName = "sub_" + tShort
	}
	var fields []FieldSpec
	if tgtCls != "" {
		for _, f := range srcEntry.Fields {
			if f.Class != srcEntry.Class {
				continue
			}
			_, offVal, err := normalizeOffset(f.Offset)
			if err != nil {
				continue
			}
			newOff := offVal
			if mapped, ok := hexRemap[offVal]; ok {
				newOff = mapped
			}
			fname := f.Name
			if newOff != offVal {
				fname = fmtFieldName("field", newOff)
			}
			fields = append(fields, FieldSpec{
				Class:  tgtCls,
				Offset: fmtFieldOffset(newOff),
				Type:   f.Type,
				Name:   fname,
			})
		}
	}
	summary := fmt.Sprintf("Auto-lifted identical-shape clone of %s (%s).", srcEntry.VA, srcEntry.Name)
	hdr := formatLiftHeader(tgtUnit, tgtName, tgtCls, summary, fields)
	return pre, hdr + fullCode + "\n", true
}

// verifyAutoLiftBatch compiles a batch of auto-lift candidates together with native g++ -fsyntax-only.
// If a batch fails, it bisects to isolate and keep all valid candidates.
func verifyAutoLiftBatch(batch []*autoLiftCandidate) []*autoLiftCandidate {
	if len(batch) == 0 {
		return nil
	}
	tmpDir, err := os.MkdirTemp("", "autolift_verify_*")
	if err != nil {
		return nil
	}
	defer os.RemoveAll(tmpDir)

	var sb strings.Builder
	sb.WriteString("#include \"lift_compat.h\"\n")
	seenPre := map[string]bool{`#include "lift_compat.h"`: true}
	var preList []string
	for _, c := range batch {
		for _, p := range c.Preamble {
			t := strings.TrimSpace(p)
			if t != "" && !seenPre[t] {
				seenPre[t] = true
				preList = append(preList, t)
			}
		}
	}
	sort.Strings(preList)
	for _, p := range preList {
		sb.WriteString(p + "\n")
	}
	sb.WriteString("\n")
	for _, c := range batch {
		sb.WriteString(c.FuncBlock + "\n")
	}

	cppPath := filepath.Join(tmpDir, "verify.cpp")
	if err := os.WriteFile(cppPath, []byte(sb.String()), 0o644); err != nil {
		return nil
	}
	if _, err := syntaxCheckCpp(cppPath); err != nil {
		if len(batch) == 1 {
			return nil
		}
		mid := len(batch) / 2
		var out []*autoLiftCandidate
		out = append(out, verifyAutoLiftBatch(batch[:mid])...)
		out = append(out, verifyAutoLiftBatch(batch[mid:])...)
		return out
	}
	return batch
}

// ---- CLI entry point: `liftwork auto-lift` --------------------------------------------------------------

func cmdAutoLift(args []string) {
	fs := flag.NewFlagSet("auto-lift", flag.ExitOnError)
	dryRun := fs.Bool("dry-run", false, "report candidates without modifying lifted/ or build/lifted/")
	scope := fs.String("scope", "all", "scope filter: core, all, or comma-separated prefixes/globs")
	noPatterns := fs.Bool("no-patterns", false, "skip Pass 1 (deterministic pattern lifter)")
	noClones := fs.Bool("no-clones", false, "skip Pass 2 (identical-shape clone propagation)")
	noCommit := fs.Bool("no-commit", false, "skip git commit after merging")
	limit := fs.Int("limit", 0, "max functions to auto-lift in this run (0 = unlimited)")
	_ = fs.Parse(args)

	units, unitMap, err := loadUnits()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork auto-lift: %v\n", err)
		os.Exit(1)
	}
	liftedEntries, err := readAllLiftEntries()
	if err != nil {
		fmt.Fprintf(os.Stderr, "liftwork auto-lift: %v\n", err)
		os.Exit(1)
	}
	srcIdx := getSrcIndex()
	syms := readSymbolsJSON()

	isInFlight := func(va string) bool {
		_, err := os.Stat(wipPathForVA(va))
		return err == nil
	}

	alreadyHandled := map[string]bool{}
	for va := range liftedEntries {
		alreadyHandled[va] = true
	}

	var patternCands []*autoLiftCandidate
	patternCounts := map[string]int{}
	disasmMissing := 0

	// ---- Pass 1: Deterministic patterns ----
	if !*noPatterns {
		for _, u := range units {
			va := unitstore.NormVA(u.VA)
			if alreadyHandled[va] || isInFlight(va) {
				continue
			}
			sf := srcIdx[va]
			if sf == nil || !sf.HasAsm {
				continue
			}
			if !matchesScope(*scope, sf.SrcPath, u.Symbol) {
				continue
			}
			lines, err := readCachedDisasm(va)
			if err != nil || len(lines) == 0 {
				disasmMissing++
				continue
			}
			pat, pre, block, ok := classifyAndLiftPattern(u, lines, syms, unitMap)
			if !ok {
				continue
			}
			if err := validateLiftedSource(block); err != nil {
				continue
			}
			meta, err := parseMetadata(block)
			if err != nil {
				continue
			}
			alreadyHandled[va] = true
			patternCounts[pat]++
			patternCands = append(patternCands, &autoLiftCandidate{
				VA:         va,
				Unit:       u,
				SrcFunc:    sf,
				LiftedPath: liftedPathForSrc(sf.SrcPath),
				Pattern:    pat,
				LiftedBy:   "script:auto_lift",
				Preamble:   pre,
				FuncBlock:  block,
				Meta:       meta,
			})
		}
	}

	// ---- Pass 2: Identical-shape clone propagation ----
	var cloneCands []*autoLiftCandidate
	if !*noClones {
		liftedSrcs := loadLiftedSources()
		type indexedLift struct {
			entry LiftEntry
			lines []DisasmLine
			ops   []alShapeOp
			src   liftedSourceBlock
		}
		byShape := map[string][]indexedLift{}
		for va, e := range liftedEntries {
			if e.Status != "lifted" {
				continue
			}
			blk, ok := liftedSrcs[va]
			if !ok {
				continue
			}
			lines, err := readCachedDisasm(va)
			if err != nil || len(lines) == 0 {
				continue
			}
			key, ops, ok := normalizeDisasmShape(lines)
			if !ok {
				continue
			}
			byShape[key] = append(byShape[key], indexedLift{
				entry: e,
				lines: lines,
				ops:   ops,
				src:   blk,
			})
		}

		if len(byShape) > 0 {
			for _, u := range units {
				va := unitstore.NormVA(u.VA)
				if alreadyHandled[va] || isInFlight(va) {
					continue
				}
				sf := srcIdx[va]
				if sf == nil || !sf.HasAsm {
					continue
				}
				if !matchesScope(*scope, sf.SrcPath, u.Symbol) {
					continue
				}
				lines, err := readCachedDisasm(va)
				if err != nil || len(lines) == 0 {
					continue
				}
				key, tOps, ok := normalizeDisasmShape(lines)
				if !ok {
					continue
				}
				matches := byShape[key]
				if len(matches) == 0 {
					continue
				}
				for _, m := range matches {
					pre, block, subOK := substituteLiftedClone(m.src, m.entry, m.lines, m.ops, u, lines, tOps)
					if !subOK {
						continue
					}
					if err := validateLiftedSource(block); err != nil {
						continue
					}
					meta, err := parseMetadata(block)
					if err != nil {
						continue
					}
					alreadyHandled[va] = true
					cloneCands = append(cloneCands, &autoLiftCandidate{
						VA:         va,
						Unit:       u,
						SrcFunc:    sf,
						LiftedPath: liftedPathForSrc(sf.SrcPath),
						Pattern:    "identical_shape_clone",
						LiftedBy:   "script:auto_lift_clone",
						Preamble:   pre,
						FuncBlock:  block,
						Meta:       meta,
					})
					break
				}
			}
		}
	}

	allCands := append(patternCands, cloneCands...)
	if *limit > 0 && len(allCands) > *limit {
		allCands = allCands[:*limit]
	}

	if *dryRun {
		fmt.Printf("=== Endorphin Auto-Lift Dry-Run (scope=%s) ===\n", *scope)
		fmt.Printf("Pass 1 (deterministic patterns) : %d functions\n", len(patternCands))
		fmt.Printf("Pass 2 (identical-shape clones) : %d functions\n", len(cloneCands))
		fmt.Printf("Total auto-lift candidates      : %d functions\n", len(allCands))
		if disasmMissing > 0 {
			fmt.Printf("Skipped (missing disasm cache)  : %d units\n", disasmMissing)
		}
		if len(patternCounts) > 0 {
			var pats []string
			for p := range patternCounts {
				pats = append(pats, p)
			}
			sort.Strings(pats)
			fmt.Println("Pass 1 breakdown by pattern:")
			for _, p := range pats {
				fmt.Printf("  %-24s : %d\n", p, patternCounts[p])
			}
		}
		return
	}

	if len(allCands) == 0 {
		fmt.Println("auto-lift: 0 candidates")
		return
	}

	// Verify candidates in batches with native g++ -fsyntax-only (unlocked).
	const batchSize = 40
	var verified []*autoLiftCandidate
	for i := 0; i < len(allCands); i += batchSize {
		end := i + batchSize
		if end > len(allCands) {
			end = len(allCands)
		}
		verified = append(verified, verifyAutoLiftBatch(allCands[i:end])...)
	}
	if len(verified) == 0 {
		fmt.Printf("auto-lift: 0/%d candidates passed g++ syntax check\n", len(allCands))
		return
	}

	// Under worklock, re-check for races, merge into lifted/, write ledger, rebuild symbols/headers, commit.
	written := 0
	var touchedFiles []string
	var touchedLedgers []string

	worklock.With(func() {
		// Group verified candidates by destination lifted file.
		byDst := map[string][]*autoLiftCandidate{}
		for _, c := range verified {
			if isInFlight(c.VA) {
				continue
			}
			if _, err := readLiftEntry(c.VA); err == nil {
				continue
			}
			byDst[c.LiftedPath] = append(byDst[c.LiftedPath], c)
		}
		var dstPaths []string
		for p := range byDst {
			dstPaths = append(dstPaths, p)
		}
		sort.Strings(dstPaths)

		nowStr := time.Now().UTC().Format(time.RFC3339)
		for _, dstPath := range dstPaths {
			cands := byDst[dstPath]
			origBytes, origErr := os.ReadFile(dstPath)

			merged := make([]*autoLiftCandidate, 0, len(cands))
			for _, c := range cands {
				tmpWip, err := os.CreateTemp("", "autolift_wip_*.cpp")
				if err != nil {
					continue
				}
				var wsb strings.Builder
				wsb.WriteString("#include \"lift_compat.h\"\n")
				for _, p := range c.Preamble {
					wsb.WriteString(p + "\n")
				}
				wsb.WriteString("\n")
				wsb.WriteString(c.FuncBlock)
				_, _ = tmpWip.WriteString(wsb.String())
				_ = tmpWip.Close()

				if err := mergeLiftedFile(tmpWip.Name(), dstPath, c.VA); err == nil {
					merged = append(merged, c)
				}
				_ = os.Remove(tmpWip.Name())
			}
			if len(merged) == 0 {
				continue
			}

			// Verify the merged destination TU still compiles cleanly.
			if _, err := syntaxCheckCpp(dstPath); err != nil {
				// Roll back dstPath so we never leave a broken lifted TU.
				if origErr == nil {
					_ = writeFileAtomic(dstPath, origBytes, 0o644)
				} else {
					_ = os.Remove(dstPath)
				}
				continue
			}

			touchedFiles = append(touchedFiles, dstPath)
			for _, c := range merged {
				entry := LiftEntry{
					VA:         c.VA,
					Size:       c.Unit.Size,
					OrigSymbol: c.Unit.Symbol,
					SrcPath:    c.SrcFunc.SrcPath,
					LiftedPath: dstPath,
					Name:       c.Meta.Name,
					Class:      c.Meta.Class,
					Signature:  c.Meta.Signature,
					Summary:    c.Meta.Summary,
					Fields:     c.Meta.Fields,
					Status:     "lifted",
					LiftedBy:   c.LiftedBy,
					LiftedAt:   nowStr,
				}
				if err := writeLiftEntry(entry); err == nil {
					touchedLedgers = append(touchedLedgers, liftLedgerPath(c.VA))
					written++
				}
			}
		}

		if written > 0 {
			_, _, _, _ = rebuildStructsAndSymbols()
			if !*noCommit {
				gitPaths := append([]string{}, touchedFiles...)
				gitPaths = append(gitPaths, touchedLedgers...)
				gitPaths = append(gitPaths, symbolsPath)
				if _, err := os.Stat(liftedIncDir); err == nil {
					gitPaths = append(gitPaths, liftedIncDir)
				}
				if err := exec.Command("git", append([]string{"add", "--"}, gitPaths...)...).Run(); err == nil {
					msg := fmt.Sprintf("Auto-lift %d functions (scope=%s) [model: script:auto_lift]", written, *scope)
					_ = exec.Command("git", "commit", "-m", msg).Run()
				}
			}
		}
	})

	fmt.Printf("auto-lift: lifted %d functions (verified=%d/%d, patterns=%d, clones=%d, files=%d)\n",
		written, len(verified), len(allCands), len(patternCands), len(cloneCands), len(touchedFiles))
}
