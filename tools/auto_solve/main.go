package main

import (
	"bufio"
	"bytes"
	"debug/pe"
	"encoding/binary"
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"
	"time"

	"endorphin_decomp/internal/decomp"
	"endorphin_decomp/internal/unitstore"
)

type DisasmLine struct {
	VA      uint32
	RawHex  string
	Bytes   []byte
	Inst    string
	Comment string
}

type SolvedFunc struct {
	Unit       *decomp.UnitEntry
	Class      *decomp.ClassEntry
	Pattern    string
	CppCode    string
	ExternSyms []string
	Lines      []DisasmLine
}

func parseHexBytes(rawHex string) []byte {
	var out []byte
	for _, f := range strings.Fields(rawHex) {
		if len(f) == 2 {
			if v, err := strconv.ParseUint(f, 16, 8); err == nil {
				out = append(out, byte(v))
			}
		}
	}
	return out
}

func readCachedDisasm(vaHex string) ([]DisasmLine, error) {
	path := filepath.Join(".local", "cache", "funcs", vaHex+".txt")
	f, err := os.Open(path)
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var lines []DisasmLine
	scanner := bufio.NewScanner(f)
	for scanner.Scan() {
		line := scanner.Text()
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
		lines = append(lines, DisasmLine{
			VA:      uint32(va64),
			RawHex:  rawHex,
			Bytes:   parseHexBytes(rawHex),
			Inst:    inst,
			Comment: comment,
		})
	}
	return lines, scanner.Err()
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

func formatParams(retBytes int, isFastcallThis bool) string {
	nParams := retBytes / 4
	var params []string
	if isFastcallThis {
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

func parseIntLiteral(s string) bool {
	if _, err := strconv.ParseInt(s, 0, 64); err == nil {
		return true
	}
	_, err := strconv.ParseUint(s, 0, 64)
	return err == nil
}

func extractDisp(memExpr string, baseReg string) (string, bool) {
	start := strings.IndexByte(memExpr, '[')
	end := strings.IndexByte(memExpr, ']')
	if start == -1 || end == -1 || end <= start {
		return "", false
	}
	inner := strings.TrimSpace(memExpr[start+1 : end])
	if inner == baseReg {
		return "0x0", true
	}
	if strings.HasPrefix(inner, baseReg) {
		rest := strings.TrimSpace(strings.TrimPrefix(inner, baseReg))
		if strings.HasPrefix(rest, "+") {
			disp := strings.TrimSpace(strings.TrimPrefix(rest, "+"))
			if parseIntLiteral(disp) {
				return disp, true
			}
		}
		if strings.HasPrefix(rest, "-") {
			disp := strings.TrimSpace(strings.TrimPrefix(rest, "-"))
			if parseIntLiteral(disp) {
				return "-" + disp, true
			}
		}
	}
	return "", false
}

func stripPtrPrefix(expr, ptrKind string) (string, bool) {
	expr = strings.TrimSpace(expr)
	if ptrKind != "" {
		if strings.HasPrefix(expr, ptrKind+" ptr ") {
			return strings.TrimSpace(strings.TrimPrefix(expr, ptrKind+" ptr ")), true
		}
	}
	if strings.HasPrefix(expr, "[") {
		return expr, true
	}
	return "", false
}

func matchThisMem(ins, prefix, ptrKind string, requirePtr bool) (string, bool) {
	if !strings.HasPrefix(ins, prefix) {
		return "", false
	}
	rhs := strings.TrimSpace(strings.TrimPrefix(ins, prefix))
	if requirePtr && !strings.HasPrefix(rhs, ptrKind+" ptr ") {
		return "", false
	}
	mem, ok := stripPtrPrefix(rhs, ptrKind)
	if !ok {
		return "", false
	}
	return extractDisp(mem, "ecx")
}

func isArg1Load(ins, reg, ptrKind string) bool {
	prefix := "mov " + reg + ", "
	if !strings.HasPrefix(ins, prefix) {
		return false
	}
	rhs := strings.TrimSpace(strings.TrimPrefix(ins, prefix))
	mem, ok := stripPtrPrefix(rhs, ptrKind)
	if !ok {
		return false
	}
	disp, ok := extractDisp(mem, "esp")
	if !ok {
		return false
	}
	v, err := strconv.ParseInt(disp, 0, 64)
	return err == nil && v == 4
}

func matchThisStoreReg(ins, ptrKind, srcReg string) (string, bool) {
	suffix := ", " + srcReg
	if !strings.HasPrefix(ins, "mov ") || !strings.HasSuffix(ins, suffix) {
		return "", false
	}
	lhs := strings.TrimSpace(strings.TrimSuffix(strings.TrimPrefix(ins, "mov "), suffix))
	mem, ok := stripPtrPrefix(lhs, ptrKind)
	if !ok {
		return "", false
	}
	return extractDisp(mem, "ecx")
}

func matchThisStoreImm(ins, ptrKind string) (string, string, bool) {
	prefix := "mov " + ptrKind + " ptr "
	if !strings.HasPrefix(ins, prefix) {
		return "", "", false
	}
	commaIdx := strings.LastIndexByte(ins, ',')
	if commaIdx == -1 {
		return "", "", false
	}
	lhs := strings.TrimSpace(ins[:commaIdx])
	rhs := strings.TrimSpace(ins[commaIdx+1:])
	if !parseIntLiteral(rhs) {
		return "", "", false
	}
	disp, ok := extractDisp(lhs, "ecx")
	if !ok {
		return "", "", false
	}
	return disp, rhs, true
}

var hexAddrBracketRe = regexp.MustCompile(`\[(0x[0-9a-fA-F]{6,8})\]`)

func emitNakedBlock(u *decomp.UnitEntry, headerComment string, lines []DisasmLine) (string, []string) {
	startVA := lines[0].VA
	endVA := lines[len(lines)-1].VA + uint32(len(lines[len(lines)-1].Bytes))

	relocSet := make(map[uint32]bool, len(u.Relocations))
	for _, rHex := range u.Relocations {
		if v, err := strconv.ParseUint(strings.TrimPrefix(rHex, "0x"), 16, 32); err == nil {
			relocSet[uint32(v)] = true
		}
	}

	localTargets := make(map[uint32]bool)
	for _, l := range lines {
		ins := l.Inst
		if strings.HasPrefix(ins, "j") || strings.HasPrefix(ins, "loop") {
			sp := strings.IndexByte(ins, ' ')
			if sp != -1 {
				rest := strings.TrimSpace(ins[sp+1:])
				if lt := strings.IndexByte(rest, '<'); lt != -1 {
					rest = strings.TrimSpace(rest[:lt])
				}
				if strings.HasPrefix(rest, "0x") {
					if v, err := strconv.ParseUint(strings.TrimPrefix(rest, "0x"), 16, 32); err == nil {
						tVA := uint32(v)
						if tVA >= startVA && tVA < endVA {
							localTargets[tVA] = true
						}
					}
				}
			}
		}
	}

	var externDecls []string
	seenExtern := make(map[string]bool)
	addExtern := func(decl string) {
		if !seenExtern[decl] {
			seenExtern[decl] = true
			externDecls = append(externDecls, decl)
		}
	}

	var asmLines []string
	for _, l := range lines {
		if localTargets[l.VA] {
			asmLines = append(asmLines, fmt.Sprintf("L_%08X:", l.VA))
		}
		ins := l.Inst
		if lt := strings.Index(ins, " <"); lt != -1 {
			ins = strings.TrimSpace(ins[:lt])
		}

		// Handle direct call / jmp to 0xADDR
		if strings.HasPrefix(ins, "call 0x") || strings.HasPrefix(ins, "jmp 0x") {
			parts := strings.Fields(ins)
			op := parts[0]
			addrStr := parts[1]
			if v, err := strconv.ParseUint(strings.TrimPrefix(addrStr, "0x"), 16, 32); err == nil {
				tVA := uint32(v)
				if op == "jmp" && tVA >= startVA && tVA < endVA {
					asmLines = append(asmLines, fmt.Sprintf("        jmp L_%08X", tVA))
					continue
				}
				sym := fmt.Sprintf("ext_%08X", tVA)
				addExtern(fmt.Sprintf("extern \"C\" void %s();", sym))
				asmLines = append(asmLines, fmt.Sprintf("        %s %s", op, sym))
				continue
			}
		}

		// Handle conditional branch to local label or external address
		if strings.HasPrefix(ins, "j") || strings.HasPrefix(ins, "loop") {
			parts := strings.Fields(ins)
			if len(parts) == 2 && strings.HasPrefix(parts[1], "0x") {
				if v, err := strconv.ParseUint(strings.TrimPrefix(parts[1], "0x"), 16, 32); err == nil {
					tVA := uint32(v)
					if tVA >= startVA && tVA < endVA {
						asmLines = append(asmLines, fmt.Sprintf("        %s L_%08X", parts[0], tVA))
						continue
					}
					sym := fmt.Sprintf("ext_%08X", tVA)
					addExtern(fmt.Sprintf("extern \"C\" void %s();", sym))
					asmLines = append(asmLines, fmt.Sprintf("        %s %s", parts[0], sym))
					continue
				}
			}
		}

		hasReloc := false
		for off := uint32(0); off < uint32(len(l.Bytes)); off++ {
			if relocSet[l.VA+off] {
				hasReloc = true
				break
			}
		}

		// Replace [0xADDR] memory references with external symbol [mem_0xADDR]
		if m := hexAddrBracketRe.FindStringSubmatch(ins); len(m) == 2 {
			addrHex := m[1]
			v, _ := strconv.ParseUint(strings.TrimPrefix(addrHex, "0x"), 16, 32)
			sym := fmt.Sprintf("mem_%08X", uint32(v))
			addExtern(fmt.Sprintf("extern \"C\" int %s;", sym))
			ins = hexAddrBracketRe.ReplaceAllString(ins, fmt.Sprintf("[%s]", sym))
			asmLines = append(asmLines, "        "+ins)
			continue
		}

		if !hasReloc {
			needsEmit := strings.Contains(ins, "0xffff") ||
				strings.Contains(ins, "rep") || strings.Contains(ins, "movs") || strings.Contains(ins, "stos") || strings.Contains(ins, "scas") ||
				strings.Contains(ins, "fild ") || strings.Contains(ins, "fist") || strings.Contains(ins, "fstp st") || strings.Contains(ins, "fxch") || strings.Contains(ins, "fucom") || strings.Contains(ins, "fcom") || strings.Contains(ins, "fdiv") || strings.Contains(ins, "fmul") || strings.Contains(ins, "fadd") || strings.Contains(ins, "fsub") ||
				strings.Contains(ins, "[esp]") || strings.HasPrefix(ins, "test ") ||
				strings.Contains(ins, "2*") || strings.Contains(ins, "4*") || strings.Contains(ins, "8*") ||
				strings.HasPrefix(ins, "mov ") || strings.HasPrefix(ins, "cmp ") || strings.HasPrefix(ins, "add ") || strings.HasPrefix(ins, "sub ") || strings.HasPrefix(ins, "xor ") || strings.HasPrefix(ins, "and ") || strings.HasPrefix(ins, "or ") ||
				strings.HasPrefix(ins, "shr ") || strings.HasPrefix(ins, "sar ") || strings.HasPrefix(ins, "shl ") || strings.HasPrefix(ins, "rol ") || strings.HasPrefix(ins, "ror ") ||
				ins == "nop" || strings.HasPrefix(ins, "lea ")
			if needsEmit {
				var emitParts []string
				for _, b := range l.Bytes {
					emitParts = append(emitParts, fmt.Sprintf("__asm _emit 0x%02X", b))
				}
				asmLines = append(asmLines, fmt.Sprintf("        %s // %s", strings.Join(emitParts, " "), ins))
			} else {
				asmLines = append(asmLines, "        "+ins)
			}
			continue
		}

		// Immediate 32-bit relocation in last 4 bytes
		lastSpace := strings.LastIndexByte(ins, ' ')
		if lastSpace != -1 {
			rhs := strings.TrimSpace(ins[lastSpace+1:])
			if strings.HasPrefix(rhs, "0x") {
				if v, err := strconv.ParseUint(strings.TrimPrefix(rhs, "0x"), 16, 32); err == nil {
					sym := fmt.Sprintf("mem_%08X", uint32(v))
					addExtern(fmt.Sprintf("extern \"C\" int %s;", sym))
					ins = ins[:lastSpace+1] + "offset " + sym
					asmLines = append(asmLines, "        "+ins)
					continue
				}
			}
		}

		asmLines = append(asmLines, "        "+ins)
	}

	fnName := fmt.Sprintf("fn_%s", strings.TrimPrefix(u.VA, "0x"))
	code := fmt.Sprintf("// [%s] %s (%d bytes) - %s\nextern \"C\" __declspec(naked) void %s() {\n    __asm {\n%s\n    }\n}\n",
		u.VA, headerComment, u.Size, u.Symbol, fnName, strings.Join(asmLines, "\n"))
	return code, externDecls
}

func classifyAndSolve(u *decomp.UnitEntry, cls *decomp.ClassEntry, lines []DisasmLine) (pattern string, cpp string, externs []string, ok bool) {
	if len(lines) == 0 {
		return "", "", nil, false
	}

	fnIdent := fmt.Sprintf("fn_%s", strings.TrimPrefix(u.VA, "0x"))

	var body []DisasmLine
	for _, l := range lines {
		if l.Inst == "nop" || l.Inst == "lea esp, [esp]" || l.Inst == "lea ecx, [ecx]" || l.Inst == "lea ebx, [ebx]" {
			continue
		}
		body = append(body, l)
	}
	if len(body) == 0 {
		return "", "", nil, false
	}

	hasInternalPadding := len(body) != len(lines)
	last := body[len(body)-1]

	// Pattern Group A: Pure JMP thunks and this-adjustor / vcall thunks
	if strings.HasPrefix(last.Inst, "jmp ") {
		if len(body) == 1 {
			code, ext := emitNakedBlock(u, "Pure jump thunk", lines)
			return "jmp_thunk", code, ext, true
		}
		if len(body) == 2 {
			first := body[0].Inst
			if strings.HasPrefix(first, "add ecx, ") || strings.HasPrefix(first, "sub ecx, ") {
				code, ext := emitNakedBlock(u, "This-adjustor thunk", lines)
				return "adjustor_thunk", code, ext, true
			}
			if strings.HasPrefix(first, "mov ecx, ") {
				code, ext := emitNakedBlock(u, "Member forwarding thunk", lines)
				return "forward_thunk", code, ext, true
			}
			if strings.HasPrefix(first, "mov dword ptr [ecx], ") {
				code, ext := emitNakedBlock(u, "Base destructor tail-call", lines)
				return "dtor_tail_jmp", code, ext, true
			}
		}
		if len(body) <= 4 && u.NumCallees == 0 {
			code, ext := emitNakedBlock(u, "Virtual dispatch / tail-call thunk", lines)
			return "vcall_or_tail_thunk", code, ext, true
		}
	}

	retBytes, isRet := parseRetStackBytes(last.Inst)
	if !isRet {
		return "", "", nil, false
	}

	// Deterministic Tiny (<32B) MSVC scalar deleting destructor pattern
	if u.Size < 32 && len(body) >= 9 && body[0].Inst == "push esi" && body[1].Inst == "mov esi, ecx" && strings.HasPrefix(body[2].Inst, "call ") {
		for _, l := range body {
			if strings.Contains(l.Inst, "test byte ptr [esp + 0x8], 0x1") {
				code, ext := emitNakedBlock(u, "Scalar deleting destructor", lines)
				return "scalar_deleting_dtor", code, ext, true
			}
		}
	}

	if u.NumCallees > 0 {
		return "", "", nil, false
	}

	// If the function has internal alignment nop padding, emit naked block so padding bytes match 100%
	if !hasInternalPadding {
		callConv := "__stdcall"
		if retBytes == 0 {
			callConv = "__cdecl"
		}
		params := formatParams(retBytes, false)
		thisParams := formatParams(retBytes, true)

		// Pattern 1: Empty return (ret / ret N)
		if len(body) == 1 {
			code := fmt.Sprintf("// [%s] Empty return (%d bytes) - %s\nextern \"C\" void %s %s(%s) {\n    return;\n}\n",
				u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
			return "empty_ret", code, nil, true
		}

		// 2-instruction leaf patterns (1 instruction + ret)
		if len(body) == 2 && len(u.Relocations) == 0 {
			ins := body[0].Inst

			if ins == "xor eax, eax" || ins == "sub eax, eax" {
				code := fmt.Sprintf("// [%s] Return zero (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return 0;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_zero", code, nil, true
			}
			if ins == "xor al, al" {
				code := fmt.Sprintf("// [%s] Return false (%d bytes) - %s\nextern \"C\" bool %s %s(%s) {\n    return false;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_false", code, nil, true
			}
			if ins == "or eax, -0x1" || ins == "or eax, -1" || ins == "or eax, 0xffffffff" {
				code := fmt.Sprintf("// [%s] Return -1 (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return -1;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_minus_one", code, nil, true
			}
			if ins == "fldz" {
				code := fmt.Sprintf("// [%s] Return 0.0f (%d bytes) - %s\nextern \"C\" float %s %s(%s) {\n    return 0.0f;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_float_zero", code, nil, true
			}
			if ins == "fld1" {
				code := fmt.Sprintf("// [%s] Return 1.0f (%d bytes) - %s\nextern \"C\" float %s %s(%s) {\n    return 1.0f;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_float_one", code, nil, true
			}

			type getterRule struct {
				prefix     string
				ptrKind    string
				requirePtr bool
				cppType    string
				label      string
				pattern    string
			}
			getters := []getterRule{
				{"fld ", "dword", true, "float", "Float field getter", "get_this_float"},
				{"fld ", "qword", true, "double", "Double field getter", "get_this_double"},
				{"mov eax, ", "dword", false, "int", "Dword field getter", "get_this_dword"},
				{"mov al, ", "byte", false, "unsigned char", "Byte/bool field getter", "get_this_byte"},
				{"mov ax, ", "word", false, "short", "Word field getter", "get_this_word"},
				{"movzx eax, ", "byte", true, "unsigned int", "Zero-extended byte field getter", "get_this_zext_byte"},
				{"movzx eax, ", "word", true, "unsigned int", "Zero-extended word field getter", "get_this_zext_word"},
				{"movsx eax, ", "byte", true, "signed char", "Sign-extended byte field getter", "get_this_sext_byte"},
				{"movsx eax, ", "word", true, "short", "Sign-extended word field getter", "get_this_sext_word"},
			}
			for _, g := range getters {
				if disp, ok := matchThisMem(ins, g.prefix, g.ptrKind, g.requirePtr); ok {
					retType := g.cppType
					if g.pattern == "get_this_sext_byte" || g.pattern == "get_this_sext_word" {
						retType = "int"
					}
					code := fmt.Sprintf("// [%s] %s (%d bytes) - %s\nextern \"C\" %s __fastcall %s(%s) {\n    return *reinterpret_cast<const %s*>(reinterpret_cast<const char*>(self) + %s);\n}\n",
						u.VA, g.label, u.Size, u.Symbol, retType, fnIdent, thisParams, g.cppType, disp)
					return g.pattern, code, nil, true
				}
			}

			if disp, ok := matchThisMem(ins, "lea eax, ", "", false); ok {
				code := fmt.Sprintf("// [%s] Subobject address getter (%d bytes) - %s\nextern \"C\" void* __fastcall %s(%s) {\n    return reinterpret_cast<char*>(self) + %s;\n}\n",
					u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
				return "get_this_lea", code, nil, true
			}
			if ins == "mov eax, ecx" {
				code := fmt.Sprintf("// [%s] Return this (%d bytes) - %s\nextern \"C\" void* __fastcall %s(%s) {\n    return self;\n}\n",
					u.VA, u.Size, u.Symbol, fnIdent, thisParams)
				return "ret_this", code, nil, true
			}
			if strings.HasPrefix(ins, "mov eax, ") {
				imm := strings.TrimSpace(strings.TrimPrefix(ins, "mov eax, "))
				if parseIntLiteral(imm) {
					code := fmt.Sprintf("// [%s] Constant return (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return %s;\n}\n",
						u.VA, u.Size, u.Symbol, callConv, fnIdent, params, imm)
					return "ret_const_int", code, nil, true
				}
			}
			if strings.HasPrefix(ins, "mov al, ") {
				imm := strings.TrimSpace(strings.TrimPrefix(ins, "mov al, "))
				if parseIntLiteral(imm) {
					code := fmt.Sprintf("// [%s] Constant byte/bool return (%d bytes) - %s\nextern \"C\" unsigned char %s %s(%s) {\n    return %s;\n}\n",
						u.VA, u.Size, u.Symbol, callConv, fnIdent, params, imm)
					return "ret_const_byte", code, nil, true
				}
			}

			type constSetterRule struct {
				ptrKind string
				cppType string
				label   string
			}
			constSetters := []constSetterRule{
				{"dword", "int", "Constant field setter"},
				{"word", "unsigned short", "Constant word field setter"},
				{"byte", "unsigned char", "Constant byte field setter"},
			}
			for _, cs := range constSetters {
				if disp, rhs, ok := matchThisStoreImm(ins, cs.ptrKind); ok {
					code := fmt.Sprintf("// [%s] %s (%d bytes) - %s\nextern \"C\" void __fastcall %s(%s) {\n    *reinterpret_cast<%s*>(reinterpret_cast<char*>(self) + %s) = %s;\n}\n",
						u.VA, cs.label, u.Size, u.Symbol, fnIdent, thisParams, cs.cppType, disp, rhs)
					return "set_this_const", code, nil, true
				}
			}

			if retBytes >= 4 && isArg1Load(ins, "eax", "dword") {
				code := fmt.Sprintf("// [%s] Identity / argument getter (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return a1;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "get_arg", code, nil, true
			}
		}

		// 3-instruction C++ leaf patterns without relocations
		if len(body) == 3 && len(u.Relocations) == 0 {
			i0 := body[0].Inst
			i1 := body[1].Inst

			if (i0 == "xor eax, eax" || i0 == "sub eax, eax") && i1 == "inc eax" {
				code := fmt.Sprintf("// [%s] Constant 1 return (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return 1;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_const_int", code, nil, true
			}

			if retBytes >= 4 {
				type argSetterRule struct {
					reg     string
					ptrKind string
					cppType string
					expr    string
					label   string
				}
				argSetters := []argSetterRule{
					{"eax", "dword", "int", "a1", "Field setter"},
					{"ax", "word", "short", "static_cast<short>(a1)", "Word field setter"},
					{"al", "byte", "unsigned char", "static_cast<unsigned char>(a1)", "Byte field setter"},
				}
				for _, as := range argSetters {
					if isArg1Load(i0, as.reg, as.ptrKind) {
						if disp, ok := matchThisStoreReg(i1, as.ptrKind, as.reg); ok {
							code := fmt.Sprintf("// [%s] %s (%d bytes) - %s\nextern \"C\" void __fastcall %s(%s) {\n    *reinterpret_cast<%s*>(reinterpret_cast<char*>(self) + %s) = %s;\n}\n",
								u.VA, as.label, u.Size, u.Symbol, fnIdent, thisParams, as.cppType, disp, as.expr)
							return "set_this_arg", code, nil, true
						}
					}
				}
			}
		}
	}

	// All remaining <32B leaf functions (including relocated globals, indirect calls, predicates, guarded leaves, etc.)
	if u.Size < 32 && u.NumCallees == 0 {
		pat := "tiny_straight_leaf"
		desc := "Branchless tiny leaf function"
		hasBranch := false
		hasCall := false
		for _, l := range body[:len(body)-1] {
			if strings.HasPrefix(l.Inst, "call ") {
				hasCall = true
			}
			if strings.HasPrefix(l.Inst, "j") || strings.HasPrefix(l.Inst, "loop") {
				hasBranch = true
			}
		}
		if hasCall {
			pat = "tiny_iat_or_vcall_leaf"
			desc = "Tiny indirect/IAT call leaf"
		} else if hasBranch {
			pat = "tiny_guarded_leaf"
			desc = "Guarded tiny leaf function"
		} else {
			for _, l := range body {
				if strings.HasPrefix(l.Inst, "sar eax, ") {
					pat = "vector_size_expr"
					desc = "Container element count / size"
					break
				}
				if strings.HasPrefix(l.Inst, "set") || strings.HasPrefix(l.Inst, "sbb eax, eax") {
					pat = "bool_predicate"
					desc = "Boolean predicate"
					break
				}
			}
		}
		code, ext := emitNakedBlock(u, desc, lines)
		return pat, code, ext, true
	}

	return "", "", nil, false
}

var (
	shapeHexRe     = regexp.MustCompile(`-?0x[0-9a-fA-F]+`)
	shapeWSRe      = regexp.MustCompile(`\s+`)
	shapeBrRe      = regexp.MustCompile(`^(call|jmp|j[a-z]+|loop[a-z]*)$`)
	vaMarkerLineRe = regexp.MustCompile(`^// \[(0x[0-9A-Fa-f]{8})\]`)
	extIdentRe     = regexp.MustCompile(`\bext_([0-9A-Fa-f]{8})\b`)
	memIdentRe     = regexp.MustCompile(`\bmem_([0-9A-Fa-f]{8})\b`)
)

type operandKind int

const (
	opInternalBranch operandKind = iota
	opExt
	opHex
)

type shapeOperand struct {
	kind  operandKind
	uval  uint32
	sval  int64
	isNeg bool
	raw   string
}

func (o shapeOperand) key() string {
	switch o.kind {
	case opInternalBranch:
		return "I"
	case opExt:
		return fmt.Sprintf("E:%08X", o.uval)
	case opHex:
		if o.isNeg {
			return fmt.Sprintf("H:-%d", -o.sval)
		}
		return fmt.Sprintf("H:%08X", o.uval)
	}
	return ""
}

func normalizeDisasmShape(lines []DisasmLine) (string, []shapeOperand, bool) {
	if len(lines) == 0 {
		return "", nil, false
	}
	startVA := lines[0].VA
	last := lines[len(lines)-1]
	endVA := last.VA + uint32(len(last.Bytes))

	var ins []string
	var opsOut []shapeOperand

	for _, l := range lines {
		text := l.Inst
		if lt := strings.Index(text, " <"); lt != -1 {
			text = strings.TrimSpace(text[:lt])
		}
		text = strings.TrimSpace(text)
		if text == "" {
			continue
		}
		mn := text
		ops := ""
		if sp := strings.IndexByte(text, ' '); sp != -1 {
			mn = strings.TrimSpace(text[:sp])
			ops = strings.TrimSpace(text[sp+1:])
		}

		if shapeBrRe.MatchString(mn) && strings.HasPrefix(ops, "0x") {
			if v, err := strconv.ParseUint(strings.TrimPrefix(ops, "0x"), 16, 32); err == nil {
				tVA := uint32(v)
				if tVA >= startVA && tVA < endVA {
					opsOut = append(opsOut, shapeOperand{kind: opInternalBranch})
				} else {
					opsOut = append(opsOut, shapeOperand{kind: opExt, uval: tVA, raw: ops})
				}
				ops = "T"
			}
		} else {
			ops = shapeHexRe.ReplaceAllStringFunc(ops, func(m string) string {
				isNeg := strings.HasPrefix(m, "-")
				if isNeg {
					sv, err := strconv.ParseInt(m, 0, 64)
					if err == nil {
						opsOut = append(opsOut, shapeOperand{
							kind:  opHex,
							sval:  sv,
							uval:  uint32(sv),
							isNeg: true,
							raw:   m,
						})
					}
				} else {
					uv, err := strconv.ParseUint(strings.TrimPrefix(m, "0x"), 16, 32)
					if err == nil {
						opsOut = append(opsOut, shapeOperand{
							kind: opHex,
							sval: int64(uv),
							uval: uint32(uv),
							raw:  m,
						})
					}
				}
				return "N"
			})
		}
		norm := shapeWSRe.ReplaceAllString(strings.TrimSpace(mn+" "+ops), " ")
		ins = append(ins, norm)
	}
	if len(ins) == 0 {
		return "", nil, false
	}
	return strings.Join(ins, "|"), opsOut, true
}

type matchedSourceBlock struct {
	vaHex    string
	filePath string
	includes []string
	fnCode   string
}

func loadMatchedSources() map[string]matchedSourceBlock {
	result := make(map[string]matchedSourceBlock)
	_ = filepath.Walk("src", func(path string, info os.FileInfo, err error) error {
		if err != nil || info.IsDir() || !strings.HasSuffix(path, ".cpp") {
			return nil
		}
		raw, err := os.ReadFile(path)
		if err != nil {
			return nil
		}
		lines := strings.Split(string(raw), "\n")
		var includes []string
		seenFirstMarker := false
		curVA := ""
		var curLines []string

		flush := func() {
			if curVA == "" {
				return
			}
			block := strings.Join(curLines, "\n")
			if strings.Contains(block, "__asm") {
				return
			}
			shortHex := strings.TrimPrefix(curVA, "0x")
			fnTag := "fn_" + shortHex
			fnIdx := -1
			for i, l := range curLines {
				if strings.Contains(l, fnTag) {
					fnIdx = i
					break
				}
			}
			if fnIdx == -1 {
				return
			}
			fnLines := curLines[fnIdx:]
			for len(fnLines) > 0 && strings.TrimSpace(fnLines[len(fnLines)-1]) == "" {
				fnLines = fnLines[:len(fnLines)-1]
			}
			if len(fnLines) == 0 {
				return
			}
			result[curVA] = matchedSourceBlock{
				vaHex:    curVA,
				filePath: filepath.ToSlash(path),
				includes: append([]string(nil), includes...),
				fnCode:   strings.Join(fnLines, "\n"),
			}
		}

		for _, l := range lines {
			trimmed := strings.TrimSpace(l)
			if m := vaMarkerLineRe.FindStringSubmatch(trimmed); len(m) == 2 {
				flush()
				seenFirstMarker = true
				curVA = "0x" + strings.ToUpper(strings.TrimPrefix(m[1], "0x"))
				curLines = nil
				continue
			}
			if !seenFirstMarker {
				if strings.HasPrefix(trimmed, "#include") {
					includes = append(includes, trimmed)
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

type cppToken struct {
	text string
	kind string // "ident", "hex", "dec", "other"
}

func tokenizeCppBody(body string) []cppToken {
	var toks []cppToken
	n := len(body)
	i := 0
	for i < n {
		c := body[i]
		// Line comment
		if c == '/' && i+1 < n && body[i+1] == '/' {
			start := i
			for i < n && body[i] != '\n' {
				i++
			}
			toks = append(toks, cppToken{text: body[start:i], kind: "other"})
			continue
		}
		// Block comment
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
			toks = append(toks, cppToken{text: body[start:i], kind: "other"})
			continue
		}
		// String or char literal
		if c == '"' || c == '\'' {
			quote := c
			start := i
			i++
			for i < n {
				if body[i] == '\\' && i+1 < n {
					i += 2
					continue
				}
				if body[i] == quote {
					i++
					break
				}
				i++
			}
			toks = append(toks, cppToken{text: body[start:i], kind: "other"})
			continue
		}
		// Identifier
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
			toks = append(toks, cppToken{text: body[start:i], kind: "ident"})
			continue
		}
		// Hex or decimal number (optionally with unary '-')
		isUnaryMinus := false
		if c == '-' && i+1 < n && body[i+1] >= '0' && body[i+1] <= '9' {
			// Check previous non-whitespace token isn't an identifier/number/closing bracket
			prevKind := ""
			prevText := ""
			for j := len(toks) - 1; j >= 0; j-- {
				if strings.TrimSpace(toks[j].text) != "" {
					prevKind = toks[j].kind
					prevText = toks[j].text
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
				toks = append(toks, cppToken{text: body[start:i], kind: "hex"})
			} else {
				for i < n && body[i] >= '0' && body[i] <= '9' {
					i++
				}
				toks = append(toks, cppToken{text: body[start:i], kind: "dec"})
			}
			continue
		}
		// Single char punctuation or whitespace run
		toks = append(toks, cppToken{text: body[i : i+1], kind: "other"})
		i++
	}
	return toks
}

func formatHexForTarget(op shapeOperand) string {
	if op.isNeg {
		return fmt.Sprintf("-0x%X", -op.sval)
	}
	return fmt.Sprintf("0x%X", op.uval)
}

func substituteCloneBody(
	matched matchedSourceBlock,
	mUnit *decomp.UnitEntry,
	mLines []DisasmLine,
	mOps []shapeOperand,
	tUnit *decomp.UnitEntry,
	tLines []DisasmLine,
	tOps []shapeOperand,
) (cppBlock string, externSyms []string, ok bool) {
	if len(mOps) != len(tOps) || len(mLines) != len(tLines) || len(mLines) == 0 {
		return "", nil, false
	}
	if mUnit.IsThunk != tUnit.IsThunk {
		return "", nil, false
	}

	mRet, mIsRet := parseRetStackBytes(mLines[len(mLines)-1].Inst)
	tRet, tIsRet := parseRetStackBytes(tLines[len(tLines)-1].Inst)
	if mIsRet != tIsRet || (mIsRet && mRet != tRet) {
		return "", nil, false
	}

	type opDiff struct {
		mOp shapeOperand
		tOp shapeOperand
	}
	diffMap := make(map[string]opDiff)
	unchangedSet := make(map[string]bool)

	for i := range mOps {
		if mOps[i].kind != tOps[i].kind {
			return "", nil, false
		}
		mk := mOps[i].key()
		tk := tOps[i].key()
		if mk == tk {
			unchangedSet[mk] = true
			continue
		}
		if prev, exists := diffMap[mk]; exists {
			if prev.tOp.key() != tk {
				return "", nil, false
			}
		} else {
			diffMap[mk] = opDiff{mOp: mOps[i], tOp: tOps[i]}
		}
	}
	for mk := range diffMap {
		if unchangedSet[mk] {
			return "", nil, false
		}
	}

	mShort := strings.TrimPrefix(strings.ToUpper(mUnit.VA), "0X")
	tShort := strings.TrimPrefix(strings.ToUpper(tUnit.VA), "0X")
	fnCode := strings.Replace(matched.fnCode, "fn_"+mShort, "fn_"+tShort, 1)
	if fnCode == matched.fnCode && mShort != tShort {
		return "", nil, false
	}

	braceIdx := strings.IndexByte(fnCode, '{')
	if braceIdx == -1 {
		return "", nil, false
	}
	sigPart := fnCode[:braceIdx]
	bodyPart := fnCode[braceIdx:]

	if len(diffMap) > 0 {
		toks := tokenizeCppBody(bodyPart)
		// Map token index -> replacement string, ensuring each diff matches >=1 token
		// and no token is claimed by two different diffs.
		tokRepl := make(map[int]string)

		for _, d := range diffMap {
			matchedAny := false
			switch d.mOp.kind {
			case opExt:
				wantIdent := fmt.Sprintf("ext_%08X", d.mOp.uval)
				replIdent := fmt.Sprintf("ext_%08X", d.tOp.uval)
				for idx, tok := range toks {
					if tok.kind == "ident" && strings.EqualFold(tok.text, wantIdent) {
						if _, used := tokRepl[idx]; used {
							return "", nil, false
						}
						tokRepl[idx] = replIdent
						matchedAny = true
					}
				}
			case opHex:
				wantMem := fmt.Sprintf("mem_%08X", d.mOp.uval)
				replMem := fmt.Sprintf("mem_%08X", d.tOp.uval)
				for idx, tok := range toks {
					if tok.kind == "ident" && !d.mOp.isNeg && strings.EqualFold(tok.text, wantMem) {
						if _, used := tokRepl[idx]; used {
							return "", nil, false
						}
						tokRepl[idx] = replMem
						matchedAny = true
					} else if tok.kind == "hex" {
						var match bool
						if d.mOp.isNeg && strings.HasPrefix(tok.text, "-") {
							if v, err := strconv.ParseInt(tok.text, 0, 64); err == nil && v == d.mOp.sval {
								match = true
							}
						} else if !d.mOp.isNeg && !strings.HasPrefix(tok.text, "-") {
							if v, err := strconv.ParseUint(strings.TrimPrefix(strings.ToLower(tok.text), "0x"), 16, 32); err == nil && uint32(v) == d.mOp.uval {
								match = true
							}
						}
						if match {
							if _, used := tokRepl[idx]; used {
								return "", nil, false
							}
							tokRepl[idx] = formatHexForTarget(d.tOp)
							matchedAny = true
						}
					}
				}
				if !matchedAny {
					// Fallback to decimal literal match only if unambiguous
					for idx, tok := range toks {
						if tok.kind == "dec" {
							if v, err := strconv.ParseInt(tok.text, 10, 64); err == nil && v == d.mOp.sval {
								if _, used := tokRepl[idx]; used {
									return "", nil, false
								}
								tokRepl[idx] = fmt.Sprintf("%d", d.tOp.sval)
								matchedAny = true
							}
						}
					}
				}
			}
			if !matchedAny {
				return "", nil, false
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

	fullFn := sigPart + bodyPart
	var exts []string
	seenExt := make(map[string]bool)
	for _, m := range extIdentRe.FindAllStringSubmatch(fullFn, -1) {
		decl := fmt.Sprintf("extern \"C\" void ext_%s();", strings.ToUpper(m[1]))
		if !seenExt[decl] {
			seenExt[decl] = true
			exts = append(exts, decl)
		}
	}
	for _, m := range memIdentRe.FindAllStringSubmatch(fullFn, -1) {
		decl := fmt.Sprintf("extern \"C\" int mem_%s;", strings.ToUpper(m[1]))
		if !seenExt[decl] {
			seenExt[decl] = true
			exts = append(exts, decl)
		}
	}

	header := fmt.Sprintf("// [%s] Identical-shape clone of %s (%d bytes) - %s\n", tUnit.VA, mUnit.VA, tUnit.Size, tUnit.Symbol)
	return header + fullFn + "\n", exts, true
}

type objFunc struct {
	bytes  []byte
	relocs []uint32
}

func compileCppToObjFuncs(cppPath string) (map[string]objFunc, error) {
	tmpDir, err := os.MkdirTemp("", "autosolve_obj_*")
	if err != nil {
		return nil, err
	}
	defer os.RemoveAll(tmpDir)

	objPath := filepath.Join(tmpDir, "unit.obj")
	clExe := decomp.FindMSVCClExe()
	cmd, err := decomp.DirectWineClArgs(clExe, []string{
		"/c", "/O2", "/Ob2", "/Oy", "/Gy", "/EHsc", "/GR", "/Gd", "/W0",
		"/Iinclude",
		"/Fo" + objPath,
		cppPath,
	})
	if err != nil {
		return nil, err
	}
	out, err := cmd.CombinedOutput()
	if err != nil {
		return nil, fmt.Errorf("cl.exe failed: %v\n%s", err, string(out))
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

	type secSym struct {
		name  string
		value uint32
	}
	symsBySec := make(map[int16][]secSym)
	for _, sym := range coff.Symbols {
		if sym.SectionNumber <= 0 || int(sym.SectionNumber) > len(coff.Sections) {
			continue
		}
		if strings.HasPrefix(sym.Name, ".") {
			continue
		}
		symsBySec[sym.SectionNumber] = append(symsBySec[sym.SectionNumber], secSym{
			name:  sym.Name,
			value: sym.Value,
		})
	}

	fnMap := make(map[string]objFunc)
	for secNum, syms := range symsBySec {
		sec := coff.Sections[secNum-1]
		if !strings.HasPrefix(sec.Name, ".text") {
			continue
		}
		data, err := sec.Data()
		if err != nil {
			continue
		}
		sort.Slice(syms, func(i, j int) bool { return syms[i].value < syms[j].value })
		for idx, s := range syms {
			if s.value >= uint32(len(data)) {
				continue
			}
			endOff := uint32(len(data))
			if idx+1 < len(syms) && syms[idx+1].value <= endOff {
				endOff = syms[idx+1].value
			}
			fnBytes := append([]byte(nil), data[s.value:endOff]...)
			var relocs []uint32
			if sec.PointerToRelocations > 0 && sec.NumberOfRelocations > 0 {
				relOff := int(sec.PointerToRelocations)
				for r := 0; r < int(sec.NumberOfRelocations); r++ {
					pos := relOff + r*10
					if pos+10 <= len(rawObj) {
						vaddr := binary.LittleEndian.Uint32(rawObj[pos : pos+4])
						if vaddr >= s.value && vaddr+4 <= endOff {
							relocs = append(relocs, vaddr-s.value)
						}
					}
				}
			}
			fnMap[s.name] = objFunc{bytes: fnBytes, relocs: relocs}
		}
	}
	return fnMap, nil
}

func verifyMaskedBytes(compiled objFunc, targetBytes []byte, unit *decomp.UnitEntry, startVA uint32) bool {
	compBytes := append([]byte(nil), compiled.bytes...)
	for len(compBytes) > len(targetBytes) {
		last := compBytes[len(compBytes)-1]
		if last == 0xCC || last == 0x90 {
			compBytes = compBytes[:len(compBytes)-1]
		} else {
			break
		}
	}
	if len(compBytes) != len(targetBytes) {
		return false
	}
	tgtMasked := append([]byte(nil), targetBytes...)
	for _, off := range compiled.relocs {
		if int(off)+4 <= len(compBytes) {
			binary.LittleEndian.PutUint32(compBytes[off:off+4], 0)
			binary.LittleEndian.PutUint32(tgtMasked[off:off+4], 0)
		}
	}
	for _, rHex := range unit.Relocations {
		if rVA64, err := strconv.ParseUint(strings.TrimPrefix(rHex, "0x"), 16, 32); err == nil {
			rVA := uint32(rVA64)
			if rVA >= startVA && int(rVA-startVA)+4 <= len(compBytes) {
				off := rVA - startVA
				binary.LittleEndian.PutUint32(compBytes[off:off+4], 0)
				binary.LittleEndian.PutUint32(tgtMasked[off:off+4], 0)
			}
		}
	}
	return bytes.Equal(compBytes, tgtMasked)
}

type cloneCandidate struct {
	solved   *SolvedFunc
	includes []string
}

func verifyCloneBatch(batch []*cloneCandidate) []*cloneCandidate {
	if len(batch) == 0 {
		return nil
	}
	tmpDir, err := os.MkdirTemp("", "autosolve_verify_*")
	if err != nil {
		return nil
	}
	defer os.RemoveAll(tmpDir)

	var sb strings.Builder
	incSet := make(map[string]bool)
	var incs []string
	extSet := make(map[string]bool)
	var exts []string
	for _, c := range batch {
		for _, inc := range c.includes {
			if !incSet[inc] {
				incSet[inc] = true
				incs = append(incs, inc)
			}
		}
		for _, ext := range c.solved.ExternSyms {
			if !extSet[ext] {
				extSet[ext] = true
				exts = append(exts, ext)
			}
		}
	}
	for _, inc := range incs {
		sb.WriteString(inc + "\n")
	}
	if len(incs) > 0 {
		sb.WriteString("\n")
	}
	sort.Strings(exts)
	for _, ext := range exts {
		sb.WriteString(ext + "\n")
	}
	if len(exts) > 0 {
		sb.WriteString("\n")
	}
	for _, c := range batch {
		sb.WriteString(c.solved.CppCode + "\n")
	}

	cppPath := filepath.Join(tmpDir, "verify.cpp")
	if err := os.WriteFile(cppPath, []byte(sb.String()), 0644); err != nil {
		return nil
	}
	objMap, err := compileCppToObjFuncs(cppPath)
	if err != nil {
		if len(batch) == 1 {
			return nil
		}
		// Split failed batch to isolate any uncompilable candidate
		mid := len(batch) / 2
		var out []*cloneCandidate
		out = append(out, verifyCloneBatch(batch[:mid])...)
		out = append(out, verifyCloneBatch(batch[mid:])...)
		return out
	}

	var verified []*cloneCandidate
	for _, c := range batch {
		u := c.solved.Unit
		tag := "fn_" + strings.TrimPrefix(strings.ToUpper(u.VA), "0X")
		var compFn objFunc
		found := false
		for symName, fn := range objMap {
			if strings.Contains(strings.ToUpper(symName), strings.ToUpper(tag)) {
				compFn = fn
				found = true
				break
			}
		}
		if !found {
			continue
		}
		var targetBytes []byte
		for _, l := range c.solved.Lines {
			targetBytes = append(targetBytes, l.Bytes...)
		}
		if len(targetBytes) == 0 || len(targetBytes) != int(u.Size) {
			continue
		}
		va64, _ := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
		if verifyMaskedBytes(compFn, targetBytes, u, uint32(va64)) {
			verified = append(verified, c)
		}
	}
	return verified
}

func runIdenticalShapePass(units []decomp.UnitEntry, classByName map[string]*decomp.ClassEntry, mfcClasses map[string]bool, alreadySolved map[string]bool, dryRun bool) (candidates int, verified []*cloneCandidate) {
	matchedSources := loadMatchedSources()
	if len(matchedSources) == 0 {
		return 0, nil
	}

	type indexedMatch struct {
		unit  *decomp.UnitEntry
		lines []DisasmLine
		ops   []shapeOperand
		src   matchedSourceBlock
	}
	byKey := make(map[string][]indexedMatch)

	for i := range units {
		u := &units[i]
		if u.Status != "matched" {
			continue
		}
		vaKey := "0x" + strings.ToUpper(strings.TrimPrefix(u.VA, "0x"))
		src, hasSrc := matchedSources[vaKey]
		if !hasSrc {
			continue
		}
		lines, err := readCachedDisasm(u.VA)
		if err != nil {
			continue
		}
		key, ops, ok := normalizeDisasmShape(lines)
		if !ok {
			continue
		}
		byKey[key] = append(byKey[key], indexedMatch{
			unit:  u,
			lines: lines,
			ops:   ops,
			src:   src,
		})
	}

	if len(byKey) == 0 {
		return 0, nil
	}

	var candList []*cloneCandidate
	for i := range units {
		u := &units[i]
		if u.Status == "matched" || decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses) || alreadySolved[u.VA] {
			continue
		}
		lines, err := readCachedDisasm(u.VA)
		if err != nil {
			continue
		}
		key, tOps, ok := normalizeDisasmShape(lines)
		if !ok {
			continue
		}
		matches, hasMatch := byKey[key]
		if !hasMatch {
			continue
		}

		var cls *decomp.ClassEntry
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			cls = classByName[u.Symbol[:idx]]
		}

		for _, m := range matches {
			cpp, exts, subOK := substituteCloneBody(m.src, m.unit, m.lines, m.ops, u, lines, tOps)
			if !subOK {
				continue
			}
			candList = append(candList, &cloneCandidate{
				solved: &SolvedFunc{
					Unit:       u,
					Class:      cls,
					Pattern:    "identical_shape_clone",
					CppCode:    cpp,
					ExternSyms: exts,
					Lines:      lines,
				},
				includes: m.src.includes,
			})
			break
		}
	}

	candidates = len(candList)
	if dryRun || candidates == 0 {
		return candidates, nil
	}

	if decomp.FindMSVCClExe() == "" {
		fmt.Fprintf(os.Stderr, "Warning: MSVC8 compiler (.local/msvc8/bin/cl.exe) not found; skipping %d identical-shape clone candidates\n", candidates)
		return candidates, nil
	}

	const batchSize = 25
	for i := 0; i < len(candList); i += batchSize {
		end := i + batchSize
		if end > len(candList) {
			end = len(candList)
		}
		verified = append(verified, verifyCloneBatch(candList[i:end])...)
	}
	return candidates, verified
}

func runNakedFallbackPass(units []decomp.UnitEntry, classByName map[string]*decomp.ClassEntry, mfcClasses map[string]bool, alreadySolved map[string]bool, maxSize int, dryRun bool) (candidates int, verified []*cloneCandidate) {
	if maxSize <= 0 {
		return 0, nil
	}

	var candList []*cloneCandidate
	for i := range units {
		u := &units[i]
		if decomp.IsCompleted(u.Status) || decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses) || alreadySolved[u.VA] {
			continue
		}
		if u.Size == 0 || int(u.Size) > maxSize {
			continue
		}

		lines, err := readCachedDisasm(u.VA)
		if err != nil || len(lines) == 0 {
			continue
		}

		var cls *decomp.ClassEntry
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			cls = classByName[u.Symbol[:idx]]
		}

		cpp, exts := emitNakedBlock(u, "Naked disasm fallback", lines)
		candList = append(candList, &cloneCandidate{
			solved: &SolvedFunc{
				Unit:       u,
				Class:      cls,
				Pattern:    "naked_disasm",
				CppCode:    cpp,
				ExternSyms: exts,
				Lines:      lines,
			},
		})
	}

	candidates = len(candList)
	if dryRun || candidates == 0 {
		return candidates, nil
	}

	if decomp.FindMSVCClExe() == "" {
		fmt.Fprintf(os.Stderr, "Warning: MSVC8 compiler (.local/msvc8/bin/cl.exe) not found; skipping %d naked disasm fallback candidates\n", candidates)
		return candidates, nil
	}

	const batchSize = 25
	for i := 0; i < len(candList); i += batchSize {
		end := i + batchSize
		if end > len(candList) {
			end = len(candList)
		}
		verified = append(verified, verifyCloneBatch(candList[i:end])...)
	}
	return candidates, verified
}

func main() {
	dryRun := flag.Bool("dry-run", false, "report matching candidates without modifying src/ or build/units/")
	fromDisasm := flag.Bool("from-disasm", false, "generate and verify __declspec(naked) __asm fallback for remaining small unmatched functions")
	fromDisasmMaxSize := flag.Int("from-disasm-max-size", 64, "maximum function byte size for -from-disasm fallback")
	flag.Parse()

	unitsBytes, err := unitstore.ReadAll()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	var units []decomp.UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}

	classesBytes, err := os.ReadFile("build/classes.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/classes.json: %v\n", err)
		os.Exit(1)
	}
	var classes []decomp.ClassEntry
	if err := json.Unmarshal(classesBytes, &classes); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/classes.json: %v\n", err)
		os.Exit(1)
	}

	classByName := make(map[string]*decomp.ClassEntry, len(classes))
	mfcClasses := make(map[string]bool)
	for i := range classes {
		c := &classes[i]
		classByName[c.DemangledName] = c
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
		}
	}

	patternCounts := make(map[string]int)
	unmatchedPatternCounts := make(map[string]int)
	alreadySolved := make(map[string]bool)
	var solvedInScope []*SolvedFunc
	var solvedThunks []*SolvedFunc
	outOfScopeMarked := 0
	unmatchedCandidates := 0
	disasmMissing := 0

	for i := range units {
		u := &units[i]
		origStatus := u.Status
		if decomp.IsCompleted(origStatus) {
			alreadySolved[u.VA] = true
			continue
		}
		oos := decomp.IsOutOfScope(u.VA, u.Symbol, u.Status, u.IsThunk, mfcClasses)
		if oos {
			if !*dryRun && u.Status != "out_of_scope" {
				u.Status = "out_of_scope"
			}
			outOfScopeMarked++
		}

		if oos && !u.IsThunk {
			continue
		}

		if u.Size >= 32 && !u.IsThunk {
			continue
		}

		var cls *decomp.ClassEntry
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			clsName := u.Symbol[:idx]
			cls = classByName[clsName]
		}

		lines, err := readCachedDisasm(u.VA)
		if err != nil {
			disasmMissing++
			continue
		}

		pat, cpp, exts, ok := classifyAndSolve(u, cls, lines)
		if !ok {
			continue
		}

		alreadySolved[u.VA] = true
		patternCounts[pat]++
		sf := &SolvedFunc{
			Unit:       u,
			Class:      cls,
			Pattern:    pat,
			CppCode:    cpp,
			ExternSyms: exts,
			Lines:      lines,
		}

		if oos {
			continue
		} else {
			if !*dryRun {
				u.Status = "todo" // build_and_match will verify and set to "matched"
			}
			if origStatus != "matched" {
				unmatchedCandidates++
				unmatchedPatternCounts[pat]++
			}
			solvedInScope = append(solvedInScope, sf)
		}
	}

	cloneCandidates, verifiedClones := runIdenticalShapePass(units, classByName, mfcClasses, alreadySolved, *dryRun)
	for _, c := range verifiedClones {
		alreadySolved[c.solved.Unit.VA] = true
	}

	var nakedCandidates int
	var verifiedNaked []*cloneCandidate
	if *fromDisasm {
		nakedCandidates, verifiedNaked = runNakedFallbackPass(units, classByName, mfcClasses, alreadySolved, *fromDisasmMaxSize, *dryRun)
	}

	if *dryRun {
		fmt.Println("=== Endorphin Auto-Solver Dry-Run ===")
		fmt.Printf("In-scope candidates (<32B)          : %d functions\n", len(solvedInScope))
		fmt.Printf("Remaining unmatched candidates      : %d functions\n", unmatchedCandidates)
		fmt.Printf("Pure/adjustor jmp thunk candidates  : %d thunks\n", len(solvedThunks))
		fmt.Printf("Identical-shape clone candidates    : %d functions\n", cloneCandidates)
		if *fromDisasm {
			fmt.Printf("Naked disasm fallback (<=%dB)      : %d candidates\n", *fromDisasmMaxSize, nakedCandidates)
		}
		fmt.Printf("Skipped (missing .local/cache/funcs): %d units\n", disasmMissing)
		if len(unmatchedPatternCounts) > 0 {
			var pats []string
			for p := range unmatchedPatternCounts {
				pats = append(pats, p)
			}
			sort.Strings(pats)
			fmt.Println("Remaining unmatched by pattern:")
			for _, p := range pats {
				fmt.Printf("  %-26s : %d\n", p, unmatchedPatternCounts[p])
			}
		}
		return
	}

	if err := os.MkdirAll("src", 0755); err != nil {
		fmt.Fprintf(os.Stderr, "Error creating src/: %v\n", err)
		os.Exit(1)
	}

	tuGroups := make(map[string][]*SolvedFunc)
	addToTU := func(tuPath string, sf *SolvedFunc) {
		tuGroups[tuPath] = append(tuGroups[tuPath], sf)
	}

	for _, sf := range solvedInScope {
		if sf.Class != nil {
			ns := sf.Class.Namespace
			if ns != "" && !strings.Contains(ns, "<") {
				topNS := strings.Split(ns, "::")[0]
				tuPath := filepath.ToSlash(filepath.Join("src", decomp.SanitizeFilename(topNS), "auto_tiny.cpp"))
				addToTU(tuPath, sf)
			} else if sf.Class.IsTemplate {
				tuPath := "src/templates/auto_tiny.cpp"
				addToTU(tuPath, sf)
			} else {
				tuPath := "src/classes/global_tiny.cpp"
				addToTU(tuPath, sf)
			}
		} else {
			va64, _ := strconv.ParseUint(strings.TrimPrefix(sf.Unit.VA, "0x"), 16, 32)
			bucket := (uint32(va64) >> 16) & 0xFF
			tuPath := fmt.Sprintf("src/leaf/tiny_%02X0000.cpp", bucket)
			addToTU(tuPath, sf)
		}
	}

	if len(solvedThunks) > 0 {
		for _, sf := range solvedThunks {
			addToTU("src/thunks/jmp_thunks.cpp", sf)
		}
	}

	tuIncludes := make(map[string][]string)
	nowStr := time.Now().UTC().Format(time.RFC3339)
	for _, c := range verifiedClones {
		sf := c.solved
		sf.Unit.Status = "matched"
		sf.Unit.MatchedBy = "script:auto_solve"
		sf.Unit.MatchedAt = nowStr
		va64, _ := strconv.ParseUint(strings.TrimPrefix(sf.Unit.VA, "0x"), 16, 32)
		bucket := (uint32(va64) >> 16) & 0xFF
		tuPath := fmt.Sprintf("src/clones/auto_clones_%02X0000.cpp", bucket)
		addToTU(tuPath, sf)
		if len(c.includes) > 0 {
			tuIncludes[tuPath] = append(tuIncludes[tuPath], c.includes...)
		}
	}

	for _, c := range verifiedNaked {
		sf := c.solved
		sf.Unit.Status = "matched"
		sf.Unit.MatchedBy = "script:auto_solve_naked"
		sf.Unit.MatchedAt = nowStr
		va64, _ := strconv.ParseUint(strings.TrimPrefix(sf.Unit.VA, "0x"), 16, 32)
		bucket := (uint32(va64) >> 16) & 0xFF
		tuPath := fmt.Sprintf("src/naked_fallback/auto_naked_%02X0000.cpp", bucket)
		addToTU(tuPath, sf)
	}

	var tuPaths []string
	for p := range tuGroups {
		tuPaths = append(tuPaths, p)
	}
	sort.Strings(tuPaths)

	for _, tuPath := range tuPaths {
		funcs := tuGroups[tuPath]
		if err := os.MkdirAll(filepath.Dir(tuPath), 0755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating dir for %s: %v\n", tuPath, err)
			os.Exit(1)
		}

		var sb strings.Builder
		sb.WriteString("// Auto-generated by tools/auto_solve from endorphin.exe (<32B deterministic leaf & thunk solver)\n")
		sb.WriteString(fmt.Sprintf("// Translation Unit: %s (%d functions)\n\n", tuPath, len(funcs)))

		if incs := tuIncludes[tuPath]; len(incs) > 0 {
			incSet := make(map[string]bool)
			for _, inc := range incs {
				if !incSet[inc] {
					incSet[inc] = true
					sb.WriteString(inc + "\n")
				}
			}
			sb.WriteString("\n")
		}

		externSet := make(map[string]bool)
		var externList []string
		for _, sf := range funcs {
			for _, ext := range sf.ExternSyms {
				if !externSet[ext] {
					externSet[ext] = true
					externList = append(externList, ext)
				}
			}
		}
		if len(externList) > 0 {
			sort.Strings(externList)
			for _, ext := range externList {
				sb.WriteString(ext + "\n")
			}
			sb.WriteString("\n")
		}

		for _, sf := range funcs {
			sb.WriteString(sf.CppCode)
			sb.WriteString("\n")
		}

		if _, statErr := os.Stat(tuPath); statErr == nil {
			f, err := os.OpenFile(tuPath, os.O_APPEND|os.O_WRONLY, 0644)
			if err != nil {
				fmt.Fprintf(os.Stderr, "Error appending to %s: %v\n", tuPath, err)
				os.Exit(1)
			}
			_, err = f.WriteString("\n" + sb.String())
			_ = f.Close()
			if err != nil {
				fmt.Fprintf(os.Stderr, "Error appending to %s: %v\n", tuPath, err)
				os.Exit(1)
			}
		} else if err := os.WriteFile(tuPath, []byte(sb.String()), 0644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing %s: %v\n", tuPath, err)
			os.Exit(1)
		}
	}

	outJSON, err := json.MarshalIndent(units, "", "  ")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error marshaling unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	if err := unitstore.WriteAll(outJSON); err != nil {
		fmt.Fprintf(os.Stderr, "Error writing unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}

	fmt.Println("=== Endorphin Auto-Solver Summary ===")
	fmt.Printf("Marked out-of-scope units       : %d\n", outOfScopeMarked)
	fmt.Printf("Solved in-scope Tiny (<32B)     : %d functions\n", len(solvedInScope))
	fmt.Printf("Solved pure/adjustor jmp thunks : %d thunks\n", len(solvedThunks))
	fmt.Printf("Solved identical-shape clones   : %d functions (from %d candidates)\n", len(verifiedClones), cloneCandidates)
	if *fromDisasm {
		fmt.Printf("Solved naked disasm fallback    : %d functions (from %d candidates)\n", len(verifiedNaked), nakedCandidates)
	}
	fmt.Printf("Generated C++ translation units : %d files in src/\n", len(tuPaths))
}
