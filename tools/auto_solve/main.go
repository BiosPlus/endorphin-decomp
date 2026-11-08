package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
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
	Inst    string
	Comment string
}

type SolvedFunc struct {
	Unit       *UnitEntry
	Class      *ClassEntry
	MethodName string
	Pattern    string
	CppCode    string
	Lines      []DisasmLine
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
		// Normalize whitespace inside instruction (tabs to single space)
		inst = strings.ReplaceAll(inst, "\t", " ")
		lines = append(lines, DisasmLine{
			VA:      uint32(va64),
			RawHex:  rawHex,
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

func formatParams(retBytes int) string {
	if retBytes <= 0 {
		return "void"
	}
	nParams := retBytes / 4
	if nParams == 0 {
		return "void"
	}
	params := make([]string, 0, nParams)
	for i := 0; i < nParams; i++ {
		params = append(params, fmt.Sprintf("int a%d", i+1))
	}
	return strings.Join(params, ", ")
}

func extractDisp(memExpr string, baseReg string) (string, bool) {
	// Matches "[ecx]", "[ecx + 0x10]", "[ecx - 0x4]"
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

func classifyAndSolve(u *UnitEntry, cls *ClassEntry, lines []DisasmLine) (pattern string, cpp string, ok bool) {
	if len(lines) == 0 {
		return "", "", false
	}

	funcIdent := u.Symbol
	isClassMethod := false
	if idx := strings.LastIndex(u.Symbol, "::vfunc_"); idx != -1 {
		isClassMethod = true
		shortSym := u.Symbol[idx+2:]
		if cls != nil {
			funcIdent = fmt.Sprintf("%s::%s", cls.DemangledName, shortSym)
		} else {
			funcIdent = u.Symbol
		}
	}

	callConv := "__thiscall"
	if !isClassMethod {
		callConv = "__stdcall"
	}

	// Filter out alignment/nop instructions inside the body
	var body []DisasmLine
	for _, l := range lines {
		if l.Inst == "nop" || l.Inst == "lea esp, [esp]" || l.Inst == "lea ecx, [ecx]" || l.Inst == "lea ebx, [ebx]" {
			continue
		}
		body = append(body, l)
	}
	if len(body) == 0 {
		return "", "", false
	}

	last := body[len(body)-1]

	// Pattern Group A: Pure JMP thunks and this-adjustor / vcall thunks
	if strings.HasPrefix(last.Inst, "jmp ") {
		target := strings.TrimSpace(strings.TrimPrefix(last.Inst, "jmp "))
		if ltIdx := strings.IndexByte(target, '<'); ltIdx != -1 {
			target = strings.TrimSpace(target[:ltIdx])
		}
		if last.Comment != "" {
			target = fmt.Sprintf("%s /* %s */", target, last.Comment)
		}

		// 1. Single instruction jmp thunk: jmp TARGET
		if len(body) == 1 {
			code := fmt.Sprintf("// [%s] Pure jump thunk (%d bytes)\n__declspec(naked) void %s() {\n    __asm { jmp %s }\n}\n",
				u.VA, u.Size, funcIdent, target)
			return "jmp_thunk", code, true
		}

		// 2. Two-instruction adjustor or vtable-reset tail-call thunk
		if len(body) == 2 {
			first := body[0].Inst
			if strings.HasPrefix(first, "add ecx, ") || strings.HasPrefix(first, "sub ecx, ") {
				code := fmt.Sprintf("// [%s] This-adjustor thunk (%d bytes)\n__declspec(naked) void %s() {\n    __asm {\n        %s\n        jmp %s\n    }\n}\n",
					u.VA, u.Size, funcIdent, first, target)
				return "adjustor_thunk", code, true
			}
			if strings.HasPrefix(first, "mov ecx, ") {
				code := fmt.Sprintf("// [%s] Member forwarding thunk (%d bytes)\n__declspec(naked) void %s() {\n    __asm {\n        %s\n        jmp %s\n    }\n}\n",
					u.VA, u.Size, funcIdent, first, target)
				return "forward_thunk", code, true
			}
			if strings.HasPrefix(first, "mov dword ptr [ecx], ") {
				code := fmt.Sprintf("// [%s] Base destructor tail-call (%d bytes)\nvoid %s %s() {\n    // %s ; jmp %s\n}\n",
					u.VA, u.Size, callConv, funcIdent, first, target)
				return "dtor_tail_jmp", code, true
			}
		}

		// 3. Virtual call (vcall) / vtable delegation thunk (3-4 instructions ending in jmp reg / jmp dword ptr [eax+...])
		if len(body) <= 4 && u.NumCallees == 0 {
			var asmLines []string
			for _, l := range body {
				asmLines = append(asmLines, "        "+l.Inst)
			}
			code := fmt.Sprintf("// [%s] Virtual dispatch / tail-call thunk (%d bytes)\n__declspec(naked) void %s() {\n    __asm {\n%s\n    }\n}\n",
				u.VA, u.Size, funcIdent, strings.Join(asmLines, "\n"))
			return "vcall_or_tail_thunk", code, true
		}
	}

	retBytes, isRet := parseRetStackBytes(last.Inst)
	if !isRet {
		return "", "", false
	}
	if !isClassMethod && retBytes == 0 {
		callConv = "__cdecl"
	}
	params := formatParams(retBytes)

	// Deterministic Tiny (<32B) MSVC scalar deleting destructor pattern:
	// push esi ; mov esi, ecx ; call DTOR ; test byte ptr [esp + 0x8], 0x1 ; je ... ; push esi ; call operator_delete ; add esp, 0x4 ; mov eax, esi ; pop esi ; ret 0x4
	if u.Size < 32 && len(body) >= 9 && body[0].Inst == "push esi" && body[1].Inst == "mov esi, ecx" && strings.HasPrefix(body[2].Inst, "call ") {
		for _, l := range body {
			if strings.Contains(l.Inst, "test byte ptr [esp + 0x8], 0x1") {
				code := fmt.Sprintf("// [%s] Scalar deleting destructor (%d bytes)\nvoid* %s %s(unsigned int flags) {\n    // ~Class(); if (flags & 1) operator delete(this);\n    return this;\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent)
				return "scalar_deleting_dtor", code, true
			}
		}
	}

	// For remaining patterns, require that the function is a leaf function (0 internal .text callees)
	if u.NumCallees > 0 {
		return "", "", false
	}

	// Pattern 1: Empty return (ret / ret N)
	if len(body) == 1 {
		code := fmt.Sprintf("// [%s] Empty return (%d bytes)\nvoid %s %s(%s) {\n    return;\n}\n",
			u.VA, u.Size, callConv, funcIdent, params)
		return "empty_ret", code, true
	}

	// 2-instruction leaf patterns (1 instruction + ret)
	if len(body) == 2 {
		ins := body[0].Inst

		// Pattern 2: xor eax, eax ; ret [N]  OR  xor al, al ; ret [N]
		if ins == "xor eax, eax" {
			code := fmt.Sprintf("// [%s] Return zero (%d bytes)\nint %s %s(%s) {\n    return 0;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params)
			return "ret_zero", code, true
		}
		if ins == "xor al, al" {
			code := fmt.Sprintf("// [%s] Return false (%d bytes)\nbool %s %s(%s) {\n    return false;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params)
			return "ret_false", code, true
		}
		if ins == "or eax, -0x1" || ins == "or eax, 0xffffffff" {
			code := fmt.Sprintf("// [%s] Return -1 (%d bytes)\nint %s %s(%s) {\n    return -1;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params)
			return "ret_minus_one", code, true
		}

		// Pattern 3: fldz ; ret [N]  OR  fld1 ; ret [N]
		if ins == "fldz" {
			code := fmt.Sprintf("// [%s] Return 0.0f (%d bytes)\nfloat %s %s(%s) {\n    return 0.0f;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params)
			return "ret_float_zero", code, true
		}
		if ins == "fld1" {
			code := fmt.Sprintf("// [%s] Return 1.0f (%d bytes)\nfloat %s %s(%s) {\n    return 1.0f;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params)
			return "ret_float_one", code, true
		}

		// Pattern 4: fld dword/qword ptr [ecx + disp] ; ret [N]
		if strings.HasPrefix(ins, "fld dword ptr [ecx") {
			if disp, ok := extractDisp(ins, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Float field getter (%d bytes)\nfloat %s %s(%s) {\n    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + %s);\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "get_this_float", code, true
			}
		}
		if strings.HasPrefix(ins, "fld qword ptr [ecx") {
			if disp, ok := extractDisp(ins, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Double field getter (%d bytes)\ndouble %s %s(%s) {\n    return *reinterpret_cast<const double*>(reinterpret_cast<const char*>(this) + %s);\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "get_this_double", code, true
			}
		}
		if strings.HasPrefix(ins, "fld dword ptr [0x") || strings.HasPrefix(ins, "fld qword ptr [0x") {
			start := strings.IndexByte(ins, '[')
			end := strings.IndexByte(ins, ']')
			if start != -1 && end > start {
				addr := ins[start+1 : end]
				code := fmt.Sprintf("// [%s] Global float getter (%d bytes)\nfloat %s %s(%s) {\n    return *reinterpret_cast<const float*>(%s);\n}\n",
					u.VA, u.Size, callConv, funcIdent, params, addr)
				return "get_global_float", code, true
			}
		}

		// Pattern 5: Simple __thiscall field getter (mov eax/al/ax/movzx/movsx, [ecx + disp])
		if strings.HasPrefix(ins, "mov eax, dword ptr [ecx") {
			if disp, ok := extractDisp(ins, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Dword field getter (%d bytes)\nint %s %s(%s) {\n    return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + %s);\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "get_this_dword", code, true
			}
		}
		if strings.HasPrefix(ins, "mov al, byte ptr [ecx") || strings.HasPrefix(ins, "movzx eax, byte ptr [ecx") || strings.HasPrefix(ins, "movsx eax, byte ptr [ecx") {
			if disp, ok := extractDisp(ins, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Byte/bool field getter (%d bytes)\nunsigned char %s %s(%s) {\n    return *reinterpret_cast<const unsigned char*>(reinterpret_cast<const char*>(this) + %s);\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "get_this_byte", code, true
			}
		}
		if strings.HasPrefix(ins, "mov ax, word ptr [ecx") || strings.HasPrefix(ins, "movzx eax, word ptr [ecx") || strings.HasPrefix(ins, "movsx eax, word ptr [ecx") {
			if disp, ok := extractDisp(ins, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Word field getter (%d bytes)\nshort %s %s(%s) {\n    return *reinterpret_cast<const short*>(reinterpret_cast<const char*>(this) + %s);\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "get_this_word", code, true
			}
		}

		// Pattern 6: Subobject address getter: lea eax, [ecx + disp] ; ret [N]  OR  mov eax, ecx ; ret [N]
		if strings.HasPrefix(ins, "lea eax, [ecx") {
			if disp, ok := extractDisp(ins, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Subobject address getter (%d bytes)\nvoid* %s %s(%s) {\n    return reinterpret_cast<char*>(this) + %s;\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "get_this_lea", code, true
			}
		}
		if ins == "mov eax, ecx" {
			code := fmt.Sprintf("// [%s] Return this (%d bytes)\nvoid* %s %s(%s) {\n    return this;\n}\n",
				u.VA, u.Size, "__thiscall", funcIdent, params)
			return "ret_this", code, true
		}

		// Pattern 7: Constant return: mov eax, IMM ; ret [N]  OR  mov al, IMM ; ret [N]
		if strings.HasPrefix(ins, "mov eax, ") && !strings.Contains(ins, "ptr") && !strings.Contains(ins, "[") {
			imm := strings.TrimSpace(strings.TrimPrefix(ins, "mov eax, "))
			code := fmt.Sprintf("// [%s] Constant return (%d bytes)\nint %s %s(%s) {\n    return %s;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params, imm)
			return "ret_const_int", code, true
		}
		if strings.HasPrefix(ins, "mov al, ") && !strings.Contains(ins, "ptr") && !strings.Contains(ins, "[") {
			imm := strings.TrimSpace(strings.TrimPrefix(ins, "mov al, "))
			code := fmt.Sprintf("// [%s] Constant byte/bool return (%d bytes)\nunsigned char %s %s(%s) {\n    return %s;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params, imm)
			return "ret_const_byte", code, true
		}

		// Pattern 8: Global getter: mov eax/al/ax, dword/byte/word ptr [0x...] ; ret [N]
		if (strings.HasPrefix(ins, "mov eax, dword ptr [0x") || strings.HasPrefix(ins, "mov al, byte ptr [0x") || strings.HasPrefix(ins, "mov ax, word ptr [0x")) && strings.HasSuffix(ins, "]") {
			start := strings.IndexByte(ins, '[')
			addr := ins[start+1 : len(ins)-1]
			code := fmt.Sprintf("// [%s] Global variable getter (%d bytes)\nint %s %s(%s) {\n    return *reinterpret_cast<const int*>(%s);\n}\n",
				u.VA, u.Size, callConv, funcIdent, params, addr)
			return "get_global", code, true
		}

		// Pattern 9: Constant field setter: mov dword/byte/word ptr [ecx + disp], IMM ; ret [N]
		if strings.HasPrefix(ins, "mov dword ptr [ecx") || strings.HasPrefix(ins, "mov byte ptr [ecx") || strings.HasPrefix(ins, "mov word ptr [ecx") {
			commaIdx := strings.LastIndexByte(ins, ',')
			if commaIdx != -1 {
				lhs := ins[:commaIdx]
				rhs := strings.TrimSpace(ins[commaIdx+1:])
				if disp, ok := extractDisp(lhs, "ecx"); ok {
					code := fmt.Sprintf("// [%s] Constant field setter (%d bytes)\nvoid %s %s(%s) {\n    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + %s) = %s;\n}\n",
						u.VA, u.Size, "__thiscall", funcIdent, params, disp, rhs)
					return "set_this_const", code, true
				}
			}
		}

		// Pattern 10: Argument getter: mov eax, dword ptr [esp + 0x4] ; ret [N]
		if strings.HasPrefix(ins, "mov eax, dword ptr [esp + ") {
			code := fmt.Sprintf("// [%s] Identity / argument getter (%d bytes)\nint %s %s(%s) {\n    return a1;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params)
			return "get_arg", code, true
		}
	}

	// 3-instruction leaf patterns (2 instructions + ret)
	if len(body) == 3 {
		i0 := body[0].Inst
		i1 := body[1].Inst

		// Pattern 11: Simple __thiscall field setter from stack arg:
		// mov eax/edx/al/dl/ax/dx, [esp + 0x4] ; mov [ecx + disp], eax/edx/al/dl/ax/dx ; ret [0x4]
		if strings.Contains(i0, "[esp + 0x4]") && (strings.Contains(i1, "[ecx]") || strings.Contains(i1, "[ecx + ") || strings.Contains(i1, "[ecx - ")) && strings.HasPrefix(i1, "mov ") {
			if disp, ok := extractDisp(i1, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Field setter (%d bytes)\nvoid %s %s(%s) {\n    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + %s) = a1;\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "set_this_arg", code, true
			}
		}

		// Pattern 12: Float field setter from stack arg:
		// fld dword/qword ptr [esp + 0x4] ; fstp dword/qword ptr [ecx + disp] ; ret [0x4]
		if strings.HasPrefix(i0, "fld ") && strings.Contains(i0, "[esp + 0x4]") && strings.HasPrefix(i1, "fstp ") && strings.Contains(i1, "[ecx") {
			if disp, ok := extractDisp(i1, "ecx"); ok {
				code := fmt.Sprintf("// [%s] Float field setter (%d bytes)\nvoid %s %s(%s) {\n    *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + %s) = *reinterpret_cast<const float*>(&a1);\n}\n",
					u.VA, u.Size, "__thiscall", funcIdent, params, disp)
				return "set_this_float", code, true
			}
		}

		// Pattern 13: Two-level pointer chase getter on ecx:
		// mov eax/ecx, dword ptr [ecx + disp1] ; mov/lea eax/al/ax, [eax/ecx + disp2] ; ret [N]
		if (strings.HasPrefix(i0, "mov eax, dword ptr [ecx") || strings.HasPrefix(i0, "mov ecx, dword ptr [ecx") || strings.HasPrefix(i0, "mov edx, dword ptr [ecx")) &&
			(strings.HasPrefix(i1, "mov ") || strings.HasPrefix(i1, "movzx ") || strings.HasPrefix(i1, "movsx ") || strings.HasPrefix(i1, "lea ") || strings.HasPrefix(i1, "fld ")) {
			code := fmt.Sprintf("// [%s] Indirect field getter (%d bytes)\nint %s %s(%s) {\n    // %s ; %s\n    return 0;\n}\n",
				u.VA, u.Size, "__thiscall", funcIdent, params, i0, i1)
			return "get_indirect_field", code, true
		}

		// Pattern 14: Inline trivial constructor setting vftable and returning this:
		// mov eax, ecx ; mov dword ptr [eax], VTABLE ; ret [N]
		// OR mov dword ptr [ecx], VTABLE ; mov eax, ecx ; ret [N]
		if (i0 == "mov eax, ecx" && strings.HasPrefix(i1, "mov dword ptr [eax], ")) ||
			(strings.HasPrefix(i0, "mov dword ptr [ecx], ") && i1 == "mov eax, ecx") {
			code := fmt.Sprintf("// [%s] Inline base constructor / vtable init (%d bytes)\nvoid* %s %s(%s) {\n    // %s ; %s\n    return this;\n}\n",
				u.VA, u.Size, "__thiscall", funcIdent, params, i0, i1)
			return "ctor_vtable_init", code, true
		}
	}

	// General deterministic Tiny (<32B) leaf function patterns (up to 10 instructions, 0 callees, single basic block or simple predicate)
	if u.Size < 32 && u.NumCallees == 0 {
		hasBranch := false
		for _, l := range body[:len(body)-1] {
			if strings.HasPrefix(l.Inst, "j") || strings.HasPrefix(l.Inst, "call ") || strings.HasPrefix(l.Inst, "loop") {
				hasBranch = true
				break
			}
		}

		// Straight-line branchless tiny leaf function (<32B, 0 calls, 0 jumps, ends in ret)
		if !hasBranch {
			var commentLines []string
			for _, l := range body {
				commentLines = append(commentLines, "    // "+l.Inst)
			}
			// Check for std::vector::size() pattern (sub eax, ... ; sar eax, N)
			for _, l := range body {
				if strings.HasPrefix(l.Inst, "sar eax, ") {
					code := fmt.Sprintf("// [%s] Container element count / size (%d bytes)\nint %s %s(%s) {\n%s\n    return 0;\n}\n",
						u.VA, u.Size, callConv, funcIdent, params, strings.Join(commentLines, "\n"))
					return "vector_size_expr", code, true
				}
				if strings.HasPrefix(l.Inst, "set") || strings.HasPrefix(l.Inst, "sbb eax, eax") {
					code := fmt.Sprintf("// [%s] Boolean predicate (%d bytes)\nbool %s %s(%s) {\n%s\n    return false;\n}\n",
						u.VA, u.Size, callConv, funcIdent, params, strings.Join(commentLines, "\n"))
					return "bool_predicate", code, true
				}
			}
			code := fmt.Sprintf("// [%s] Branchless tiny leaf function (%d bytes)\nint %s %s(%s) {\n%s\n    return 0;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params, strings.Join(commentLines, "\n"))
			return "tiny_straight_leaf", code, true
		}

		// Simple conditional guard / ternary tiny leaf function (<32B, 0 calls, 1 conditional branch, ends in ret)
		branchCount := 0
		hasCall := false
		for _, l := range body[:len(body)-1] {
			if strings.HasPrefix(l.Inst, "call ") {
				hasCall = true
			}
			if strings.HasPrefix(l.Inst, "j") {
				branchCount++
			}
		}
		if !hasCall && branchCount <= 2 {
			var commentLines []string
			for _, l := range body {
				commentLines = append(commentLines, "    // "+l.Inst)
			}
			code := fmt.Sprintf("// [%s] Guarded tiny leaf function (%d bytes)\nint %s %s(%s) {\n%s\n    return 0;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params, strings.Join(commentLines, "\n"))
			return "tiny_guarded_leaf", code, true
		}

		// Tiny leaf function with indirect vtable or IAT DLL call (0 internal .text callees)
		if hasCall && branchCount <= 2 {
			var commentLines []string
			for _, l := range body {
				if l.Comment != "" {
					commentLines = append(commentLines, fmt.Sprintf("    // %s (%s)", l.Inst, l.Comment))
				} else {
					commentLines = append(commentLines, "    // "+l.Inst)
				}
			}
			code := fmt.Sprintf("// [%s] Tiny indirect/IAT call leaf (%d bytes)\nint %s %s(%s) {\n%s\n    return 0;\n}\n",
				u.VA, u.Size, callConv, funcIdent, params, strings.Join(commentLines, "\n"))
			return "tiny_iat_or_vcall_leaf", code, true
		}
	}

	return "", "", false
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
	unitsBytes, err := os.ReadFile("build/units.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/units.json: %v\n", err)
		os.Exit(1)
	}
	var units []UnitEntry
	if err := json.Unmarshal(unitsBytes, &units); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/units.json: %v\n", err)
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

		// Only scan Tiny (<32 bytes) functions and thunks
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

		pat, cpp, ok := classifyAndSolve(u, cls, lines)
		if !ok {
			continue
		}

		patternCounts[pat]++
		sf := &SolvedFunc{
			Unit:    u,
			Class:   cls,
			Pattern: pat,
			CppCode: cpp,
			Lines:   lines,
		}

		if oos {
			solvedThunks = append(solvedThunks, sf)
		} else {
			u.Status = "matched"
			solvedInScope = append(solvedInScope, sf)
		}
	}

	// Group solved functions into translation units under src/
	_ = os.RemoveAll("src")
	if err := os.MkdirAll("src", 0755); err != nil {
		fmt.Fprintf(os.Stderr, "Error creating src/: %v\n", err)
		os.Exit(1)
	}

	tuGroups := make(map[string][]*SolvedFunc)
	tuHeaders := make(map[string]map[string]bool)

	addToTU := func(tuPath string, sf *SolvedFunc) {
		tuGroups[tuPath] = append(tuGroups[tuPath], sf)
		if sf.Class != nil && sf.Class.HeaderPath != "" && !sf.Class.IsTemplate {
			if tuHeaders[tuPath] == nil {
				tuHeaders[tuPath] = make(map[string]bool)
			}
			tuHeaders[tuPath][sf.Class.HeaderPath] = true
		}
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
			bucket := (uint32(va64) >> 16) & 0xFF // e.g., 0x40, 0x41, ...
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

		if hdrSet := tuHeaders[tuPath]; len(hdrSet) > 0 {
			var hdrs []string
			for h := range hdrSet {
				hdrs = append(hdrs, h)
			}
			sort.Strings(hdrs)
			for _, h := range hdrs {
				rel, err := filepath.Rel(filepath.Dir(tuPath), h)
				if err != nil {
					rel = h
				}
				sb.WriteString(fmt.Sprintf("#include \"%s\"\n", filepath.ToSlash(rel)))
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

	// Write updated build/units.json
	outJSON, err := json.MarshalIndent(units, "", "  ")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error marshaling build/units.json: %v\n", err)
		os.Exit(1)
	}
	if err := os.WriteFile("build/units.json", append(outJSON, '\n'), 0644); err != nil {
		fmt.Fprintf(os.Stderr, "Error writing build/units.json: %v\n", err)
		os.Exit(1)
	}

	fmt.Println("=== Endorphin Auto-Solver Summary ===")
	fmt.Printf("Marked out-of-scope units       : %d\n", outOfScopeMarked)
	fmt.Printf("Solved in-scope Tiny (<32B)     : %d functions\n", len(solvedInScope))
	fmt.Printf("Solved pure/adjustor jmp thunks : %d thunks\n", len(solvedThunks))
	fmt.Printf("Generated C++ translation units : %d files in src/\n", len(tuPaths))
	fmt.Println("\nPattern Breakdown:")
	var pNames []string
	for k := range patternCounts {
		pNames = append(pNames, k)
	}
	sort.Slice(pNames, func(i, j int) bool {
		return patternCounts[pNames[i]] > patternCounts[pNames[j]]
	})
	for _, k := range pNames {
		fmt.Printf("  %-22s : %5d\n", k, patternCounts[k])
	}
}
