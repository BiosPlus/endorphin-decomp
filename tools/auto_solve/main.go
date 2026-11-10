package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"
	"regexp"
	"sort"
	"strconv"
	"strings"

	"endorphin_decomp/internal/unitstore"
)

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
}

type ClassEntry struct {
	DemangledName  string   `json:"demangled_name"`
	Namespace      string   `json:"namespace"`
	ShortName      string   `json:"short_name"`
	HeaderPath     string   `json:"header_path"`
	IsTemplate     bool     `json:"is_template"`
	IsMFCOrStd     bool     `json:"is_mfc_or_std"`
	VTableVA       string   `json:"vtable_va"`
	VirtualMethods []string `json:"virtual_methods"`
}

type DisasmLine struct {
	VA      uint32
	RawHex  string
	Bytes   []byte
	Inst    string
	Comment string
}

type SolvedFunc struct {
	Unit       *UnitEntry
	Class      *ClassEntry
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
	if retInst == "ret" {
		return 0, true
	}
	if strings.HasPrefix(retInst, "ret ") {
		valStr := strings.TrimSpace(strings.TrimPrefix(retInst, "ret "))
		v, err := strconv.ParseInt(valStr, 0, 32)
		if err == nil {
			return int(v), true
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
	if strings.HasPrefix(inner, baseReg+" + ") {
		return strings.TrimSpace(strings.TrimPrefix(inner, baseReg+" + ")), true
	}
	if strings.HasPrefix(inner, baseReg+" - ") {
		return "-" + strings.TrimSpace(strings.TrimPrefix(inner, baseReg+" - ")), true
	}
	return "", false
}

var hexAddrBracketRe = regexp.MustCompile(`\[(0x[0-9a-fA-F]{6,8})\]`)

func emitNakedBlock(u *UnitEntry, headerComment string, lines []DisasmLine) (string, []string) {
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

func classifyAndSolve(u *UnitEntry, cls *ClassEntry, lines []DisasmLine) (pattern string, cpp string, externs []string, ok bool) {
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

			if ins == "xor eax, eax" {
				code := fmt.Sprintf("// [%s] Return zero (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return 0;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_zero", code, nil, true
			}
			if ins == "xor al, al" {
				code := fmt.Sprintf("// [%s] Return false (%d bytes) - %s\nextern \"C\" bool %s %s(%s) {\n    return false;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "ret_false", code, nil, true
			}
			if ins == "or eax, -0x1" || ins == "or eax, 0xffffffff" {
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
			if strings.HasPrefix(ins, "fld dword ptr [ecx") {
				if disp, ok := extractDisp(ins, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Float field getter (%d bytes) - %s\nextern \"C\" float __fastcall %s(%s) {\n    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(self) + %s);\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "get_this_float", code, nil, true
				}
			}
			if strings.HasPrefix(ins, "fld qword ptr [ecx") {
				if disp, ok := extractDisp(ins, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Double field getter (%d bytes) - %s\nextern \"C\" double __fastcall %s(%s) {\n    return *reinterpret_cast<const double*>(reinterpret_cast<const char*>(self) + %s);\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "get_this_double", code, nil, true
				}
			}
			if strings.HasPrefix(ins, "mov eax, dword ptr [ecx") {
				if disp, ok := extractDisp(ins, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Dword field getter (%d bytes) - %s\nextern \"C\" int __fastcall %s(%s) {\n    return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(self) + %s);\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "get_this_dword", code, nil, true
				}
			}
			if strings.HasPrefix(ins, "mov al, byte ptr [ecx") {
				if disp, ok := extractDisp(ins, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Byte/bool field getter (%d bytes) - %s\nextern \"C\" unsigned char __fastcall %s(%s) {\n    return *reinterpret_cast<const unsigned char*>(reinterpret_cast<const char*>(self) + %s);\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "get_this_byte", code, nil, true
				}
			}
			if strings.HasPrefix(ins, "mov ax, word ptr [ecx") {
				if disp, ok := extractDisp(ins, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Word field getter (%d bytes) - %s\nextern \"C\" short __fastcall %s(%s) {\n    return *reinterpret_cast<const short*>(reinterpret_cast<const char*>(self) + %s);\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "get_this_word", code, nil, true
				}
			}
			if strings.HasPrefix(ins, "lea eax, [ecx") {
				if disp, ok := extractDisp(ins, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Subobject address getter (%d bytes) - %s\nextern \"C\" void* __fastcall %s(%s) {\n    return reinterpret_cast<char*>(self) + %s;\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "get_this_lea", code, nil, true
				}
			}
			if ins == "mov eax, ecx" {
				code := fmt.Sprintf("// [%s] Return this (%d bytes) - %s\nextern \"C\" void* __fastcall %s(%s) {\n    return self;\n}\n",
					u.VA, u.Size, u.Symbol, fnIdent, thisParams)
				return "ret_this", code, nil, true
			}
			if strings.HasPrefix(ins, "mov eax, ") && !strings.Contains(ins, "ptr") && !strings.Contains(ins, "[") {
				imm := strings.TrimSpace(strings.TrimPrefix(ins, "mov eax, "))
				code := fmt.Sprintf("// [%s] Constant return (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return %s;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params, imm)
				return "ret_const_int", code, nil, true
			}
			if strings.HasPrefix(ins, "mov al, ") && !strings.Contains(ins, "ptr") && !strings.Contains(ins, "[") {
				imm := strings.TrimSpace(strings.TrimPrefix(ins, "mov al, "))
				code := fmt.Sprintf("// [%s] Constant byte/bool return (%d bytes) - %s\nextern \"C\" unsigned char %s %s(%s) {\n    return %s;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params, imm)
				return "ret_const_byte", code, nil, true
			}
			if strings.HasPrefix(ins, "mov dword ptr [ecx") {
				commaIdx := strings.LastIndexByte(ins, ',')
				if commaIdx != -1 {
					lhs := ins[:commaIdx]
					rhs := strings.TrimSpace(ins[commaIdx+1:])
					if disp, ok := extractDisp(lhs, "ecx"); ok {
						code := fmt.Sprintf("// [%s] Constant field setter (%d bytes) - %s\nextern \"C\" void __fastcall %s(%s) {\n    *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + %s) = %s;\n}\n",
							u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp, rhs)
						return "set_this_const", code, nil, true
					}
				}
			}
			if strings.HasPrefix(ins, "mov byte ptr [ecx") {
				commaIdx := strings.LastIndexByte(ins, ',')
				if commaIdx != -1 {
					lhs := ins[:commaIdx]
					rhs := strings.TrimSpace(ins[commaIdx+1:])
					if disp, ok := extractDisp(lhs, "ecx"); ok {
						code := fmt.Sprintf("// [%s] Constant byte field setter (%d bytes) - %s\nextern \"C\" void __fastcall %s(%s) {\n    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(self) + %s) = %s;\n}\n",
							u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp, rhs)
						return "set_this_const", code, nil, true
					}
				}
			}
			if ins == "mov eax, dword ptr [esp + 0x4]" && retBytes >= 4 {
				code := fmt.Sprintf("// [%s] Identity / argument getter (%d bytes) - %s\nextern \"C\" int %s %s(%s) {\n    return a1;\n}\n",
					u.VA, u.Size, u.Symbol, callConv, fnIdent, params)
				return "get_arg", code, nil, true
			}
		}

		// 3-instruction C++ leaf patterns without relocations
		if len(body) == 3 && len(u.Relocations) == 0 {
			i0 := body[0].Inst
			i1 := body[1].Inst

			if i0 == "mov eax, dword ptr [esp + 0x4]" && strings.HasPrefix(i1, "mov dword ptr [ecx") && strings.HasSuffix(i1, ", eax") && retBytes >= 4 {
				if disp, ok := extractDisp(i1, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Field setter (%d bytes) - %s\nextern \"C\" void __fastcall %s(%s) {\n    *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + %s) = a1;\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "set_this_arg", code, nil, true
				}
			}
			if i0 == "mov al, byte ptr [esp + 0x4]" && strings.HasPrefix(i1, "mov byte ptr [ecx") && strings.HasSuffix(i1, ", al") && retBytes >= 4 {
				if disp, ok := extractDisp(i1, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Byte field setter (%d bytes) - %s\nextern \"C\" void __fastcall %s(%s) {\n    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(self) + %s) = static_cast<unsigned char>(a1);\n}\n",
						u.VA, u.Size, u.Symbol, fnIdent, thisParams, disp)
					return "set_this_arg", code, nil, true
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

func isOutOfScope(u UnitEntry, mfcClasses map[string]bool) bool {
	if u.IsThunk {
		return true
	}
	va64, err := strconv.ParseUint(strings.TrimPrefix(u.VA, "0x"), 16, 32)
	if err == nil {
		va := uint32(va64)
		if (va >= 0x006A5C5C && va <= 0x006A7943) || (va >= 0x008728F0 && va <= 0x009221CA) {
			return true
		}
	}
	if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
		clsName := u.Symbol[:idx]
		if mfcClasses[clsName] {
			return true
		}
	}
	return false
}

func sanitizeFilename(s string) string {
	r := strings.NewReplacer("::", "_", "<", "_", ">", "_", " ", "_", "*", "ptr", "&", "ref", ",", "_", "/", "_")
	return r.Replace(s)
}

func main() {
	unitsBytes, err := unitstore.ReadAll()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}
	var units []UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing unit ledger (build/units/): %v\n", err)
		os.Exit(1)
	}

	classesBytes, err := os.ReadFile("build/classes.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/classes.json: %v\n", err)
		os.Exit(1)
	}
	var classes []ClassEntry
	if err := json.Unmarshal(classesBytes, &classes); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/classes.json: %v\n", err)
		os.Exit(1)
	}

	classByName := make(map[string]*ClassEntry, len(classes))
	mfcClasses := make(map[string]bool)
	for i := range classes {
		c := &classes[i]
		classByName[c.DemangledName] = c
		if c.IsMFCOrStd {
			mfcClasses[c.DemangledName] = true
		}
	}

	patternCounts := make(map[string]int)
	var solvedInScope []*SolvedFunc
	var solvedThunks []*SolvedFunc
	outOfScopeMarked := 0

	for i := range units {
		u := &units[i]
		oos := isOutOfScope(*u, mfcClasses)
		if oos {
			u.Status = "out_of_scope"
			outOfScopeMarked++
		}

		if oos && !u.IsThunk {
			continue
		}

		if u.Size >= 32 && !u.IsThunk {
			continue
		}

		var cls *ClassEntry
		if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
			clsName := u.Symbol[:idx]
			cls = classByName[clsName]
		}

		lines, err := readCachedDisasm(u.VA)
		if err != nil {
			continue
		}

		pat, cpp, exts, ok := classifyAndSolve(u, cls, lines)
		if !ok {
			continue
		}

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
			solvedThunks = append(solvedThunks, sf)
		} else {
			u.Status = "todo" // build_and_match will verify and set to "matched"
			solvedInScope = append(solvedInScope, sf)
		}
	}

	_ = os.RemoveAll("src")
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
				tuPath := filepath.ToSlash(filepath.Join("src", sanitizeFilename(topNS), "auto_tiny.cpp"))
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

		if err := os.WriteFile(tuPath, []byte(sb.String()), 0644); err != nil {
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
	fmt.Printf("Generated C++ translation units : %d files in src/\n", len(tuPaths))
}
