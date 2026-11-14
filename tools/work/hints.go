package main

import (
	"fmt"
	"os"
	"strings"
)

func splitInstOperands(txt string) (op, dst, src string) {
	s := strings.TrimSpace(strings.ToLower(txt))
	if s == "" {
		return "", "", ""
	}
	sp := strings.IndexAny(s, " \t")
	if sp == -1 {
		return s, "", ""
	}
	op = s[:sp]
	rest := strings.TrimSpace(s[sp+1:])
	if comma := strings.IndexByte(rest, ','); comma != -1 {
		dst = strings.TrimSpace(rest[:comma])
		src = strings.TrimSpace(rest[comma+1:])
	} else {
		dst = rest
	}
	return op, dst, src
}

func isX86Reg(s string) bool {
	switch s {
	case "eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi",
		"ax", "cx", "dx", "bx", "sp", "bp", "si", "di",
		"al", "cl", "dl", "bl", "ah", "ch", "dh", "bh":
		return true
	}
	return false
}

func isRegOpSelf(txt, wantOp string) bool {
	op, dst, src := splitInstOperands(txt)
	return op == wantOp && dst != "" && dst == src && isX86Reg(dst)
}

func isOpZero(txt, wantOp string) bool {
	op, _, src := splitInstOperands(txt)
	return op == wantOp && (src == "0" || src == "0x0")
}

func isX87Op(op string) bool {
	switch op {
	case "fld", "flds", "fldl", "fldz", "fld1", "fst", "fstp",
		"fadd", "fsub", "fmul", "fdiv", "fcomp", "fcompp", "fcom",
		"fucom", "fucomp", "fucompp", "fnstsw", "fild", "fistp":
		return true
	}
	return false
}

func isSSEFloatOp(op string) bool {
	switch op {
	case "movss", "movsd", "addss", "subss", "mulss", "divss",
		"comiss", "ucomiss", "comisd", "ucomisd",
		"cvtsi2ss", "cvttss2si", "xorps", "pxor":
		return true
	}
	return false
}

func isCalleeSavedPushPop(txt string) bool {
	op, dst, _ := splitInstOperands(txt)
	if op != "push" && op != "pop" {
		return false
	}
	return dst == "esi" || dst == "edi" || dst == "ebx"
}

func isEcxSaveMove(txt string) bool {
	op, dst, src := splitInstOperands(txt)
	if op != "mov" || src != "ecx" {
		return false
	}
	return dst == "esi" || dst == "edi" || dst == "ebx" || dst == "ebp"
}

func isSubOrAddEsp4(txt, wantOp string) bool {
	op, dst, src := splitInstOperands(txt)
	return op == wantOp && dst == "esp" && (src == "4" || src == "0x4")
}

// generateEnhancedHints produces compiler-oriented mismatch hints combining the
// baseline checks from generateHaikuHints with MSVC 2005 (/O2 /Ob2 /Oy) patterns.
func generateEnhancedHints(tgtInsts, compInsts []AsmInst, tgtLen, compLen int) []string {
	var hints []string
	if len(tgtInsts) > 0 && len(compInsts) > 0 {
		tLast := tgtInsts[len(tgtInsts)-1].Text
		cLast := compInsts[len(compInsts)-1].Text
		if strings.HasPrefix(tLast, "ret") && strings.HasPrefix(cLast, "ret") && tLast != cLast {
			hints = append(hints, fmt.Sprintf("Stack return mismatch: target has `%s` vs your `%s`. Adjust __fastcall/__stdcall/__cdecl or parameter count.", tLast, cLast))
		}
	}

	var tSubEsp, cSubEsp string
	var hasJccDiff, hasRegDiff bool
	var hasXorMovZero, hasTestCmpZero, hasLeaAddMov bool
	var tHasX87, cHasX87, tHasSSE, cHasSSE bool
	var tHasPushEcx, cHasPushEcx, tHasPopEcx, cHasPopEcx bool
	var tHasSubEsp4, cHasSubEsp4, tHasAddEsp4, cHasAddEsp4 bool
	var tHasEcxSave, cHasEcxSave bool
	var tCalleePushPop, cCalleePushPop int

	for _, inst := range tgtInsts {
		op, _, _ := splitInstOperands(inst.Text)
		if isX87Op(op) {
			tHasX87 = true
		}
		if isSSEFloatOp(op) {
			tHasSSE = true
		}
		if strings.EqualFold(strings.TrimSpace(inst.Text), "push ecx") {
			tHasPushEcx = true
		}
		if strings.EqualFold(strings.TrimSpace(inst.Text), "pop ecx") {
			tHasPopEcx = true
		}
		if isSubOrAddEsp4(inst.Text, "sub") {
			tHasSubEsp4 = true
		}
		if isSubOrAddEsp4(inst.Text, "add") {
			tHasAddEsp4 = true
		}
		if isEcxSaveMove(inst.Text) {
			tHasEcxSave = true
		}
		if isCalleeSavedPushPop(inst.Text) {
			tCalleePushPop++
		}
	}
	for _, inst := range compInsts {
		op, _, _ := splitInstOperands(inst.Text)
		if isX87Op(op) {
			cHasX87 = true
		}
		if isSSEFloatOp(op) {
			cHasSSE = true
		}
		if strings.EqualFold(strings.TrimSpace(inst.Text), "push ecx") {
			cHasPushEcx = true
		}
		if strings.EqualFold(strings.TrimSpace(inst.Text), "pop ecx") {
			cHasPopEcx = true
		}
		if isSubOrAddEsp4(inst.Text, "sub") {
			cHasSubEsp4 = true
		}
		if isSubOrAddEsp4(inst.Text, "add") {
			cHasAddEsp4 = true
		}
		if isEcxSaveMove(inst.Text) {
			cHasEcxSave = true
		}
		if isCalleeSavedPushPop(inst.Text) {
			cCalleePushPop++
		}
	}

	maxLen := len(tgtInsts)
	if len(compInsts) < maxLen {
		maxLen = len(compInsts)
	}
	for i := 0; i < maxLen; i++ {
		tTxt := tgtInsts[i].Text
		cTxt := compInsts[i].Text
		if strings.HasPrefix(tTxt, "sub esp,") {
			tSubEsp = tTxt
		}
		if strings.HasPrefix(cTxt, "sub esp,") {
			cSubEsp = cTxt
		}
		if tTxt != cTxt {
			tOp, _, _ := splitInstOperands(tTxt)
			cOp, _, _ := splitInstOperands(cTxt)
			if tOp != "" && cOp != "" {
				if strings.HasPrefix(tOp, "j") && strings.HasPrefix(cOp, "j") && tOp != cOp {
					hasJccDiff = true
				} else if tOp == cOp {
					hasRegDiff = true
				}
				if (isRegOpSelf(tTxt, "xor") && isOpZero(cTxt, "mov")) || (isRegOpSelf(cTxt, "xor") && isOpZero(tTxt, "mov")) {
					hasXorMovZero = true
				}
				if (isRegOpSelf(tTxt, "test") && isOpZero(cTxt, "cmp")) || (isRegOpSelf(cTxt, "test") && isOpZero(tTxt, "cmp")) {
					hasTestCmpZero = true
				}
				if (tOp == "lea" && (cOp == "add" || cOp == "mov")) || (cOp == "lea" && (tOp == "add" || tOp == "mov")) {
					hasLeaAddMov = true
				}
			}
		}
	}

	if tSubEsp != cSubEsp && (tSubEsp != "" || cSubEsp != "") {
		hints = append(hints, fmt.Sprintf("Stack frame size mismatch: target `%s` vs your `%s`. Adjust local variables.", tSubEsp, cSubEsp))
	}
	if hasJccDiff {
		hints = append(hints, "Jump inversion detected: invert the `if (...)` condition or swap early-return / else branches.")
	}
	if hasRegDiff {
		hints = append(hints, "Register/offset order difference: check struct member offsets, pointer vs value types, or expression evaluation order.")
	}
	if hasXorMovZero {
		hints = append(hints, "Zero-init mismatch (xor reg, reg vs mov reg, 0): MSVC8 /O2 prefers xor reg, reg unless flag preservation or control flow prevents it.")
	}
	if hasTestCmpZero {
		hints = append(hints, "Zero-check mismatch (test reg, reg vs cmp reg, 0): check signed vs unsigned comparison, pointer vs integer null check, or == 0 vs <= 0.")
	}
	if (tHasX87 && cHasSSE) || (cHasX87 && tHasSSE) {
		hints = append(hints, "Float codegen mismatch (x87 fld/fstp/fcomp vs SSE movss/comiss): check float vs double types, /arch:SSE vs x87, or intermediate casts.")
	}
	if (tHasPushEcx && !cHasPushEcx && (cHasSubEsp4 || cSubEsp != "")) ||
		(cHasPushEcx && !tHasPushEcx && (tHasSubEsp4 || tSubEsp != "")) ||
		(tHasPopEcx && !cHasPopEcx && cHasAddEsp4) ||
		(cHasPopEcx && !tHasPopEcx && tHasAddEsp4) {
		hints = append(hints, "Frame-slot allocation mismatch (push ecx / pop ecx vs sub esp, 4): MSVC8 /O2 uses push ecx for 1-word local slots; check local variable count/types.")
	}
	if hasLeaAddMov {
		hints = append(hints, "Address calculation mismatch (lea vs add/mov): check pointer arithmetic, struct member offset vs base pointer, or array indexing.")
	}
	if tHasEcxSave != cHasEcxSave || tCalleePushPop != cCalleePushPop {
		hints = append(hints, "Calling convention / ecx preservation mismatch (mov esi, ecx or extra push/pop): check __thiscall vs __stdcall/__cdecl, constness, or register pressure.")
	}
	if compLen != tgtLen && len(hints) == 0 {
		hints = append(hints, fmt.Sprintf("Size difference: target is %d bytes vs your %d bytes.", tgtLen, compLen))
	}
	return hints
}

func isHeaderDeclStart(trimmed string) bool {
	return strings.HasPrefix(trimmed, "class ") ||
		strings.HasPrefix(trimmed, "struct ") ||
		strings.HasPrefix(trimmed, "enum ") ||
		strings.HasPrefix(trimmed, "typedef ") ||
		strings.HasPrefix(trimmed, "union ") ||
		strings.HasPrefix(trimmed, "namespace ")
}

func isHeaderBoilerplate(trimmed string) bool {
	if trimmed == "" {
		return true
	}
	if strings.HasPrefix(trimmed, "#pragma") ||
		strings.HasPrefix(trimmed, "#include") ||
		strings.HasPrefix(trimmed, "#ifndef") ||
		strings.HasPrefix(trimmed, "#define") ||
		strings.HasPrefix(trimmed, "#endif") {
		return true
	}
	return false
}

func isCommentOnlyLine(trimmed string) bool {
	return strings.HasPrefix(trimmed, "//") ||
		strings.HasPrefix(trimmed, "/*") ||
		strings.HasPrefix(trimmed, "*") ||
		strings.HasPrefix(trimmed, "*/")
}

// formatHeaderPreview reads headerPath and returns up to maxLines (default 60)
// prioritizing struct/class field declarations over boilerplate comments and includes.
func formatHeaderPreview(headerPath string, maxLines int) []string {
	if maxLines <= 0 {
		maxLines = 60
	}
	hb, err := os.ReadFile(headerPath)
	if err != nil {
		return nil
	}
	rawLines := strings.Split(strings.TrimSpace(string(hb)), "\n")

	// Skip leading boilerplate/comments until the first type declaration if one exists.
	startIdx := 0
	for i, line := range rawLines {
		tr := strings.TrimSpace(line)
		if isHeaderDeclStart(tr) {
			startIdx = i
			break
		}
	}

	var filtered []string
	for _, line := range rawLines[startIdx:] {
		tr := strings.TrimSpace(line)
		if strings.HasPrefix(tr, "#pragma") ||
			strings.HasPrefix(tr, "#include") ||
			strings.HasPrefix(tr, "#ifndef") ||
			strings.HasPrefix(tr, "#define") ||
			strings.HasPrefix(tr, "#endif") {
			continue
		}
		filtered = append(filtered, line)
	}

	// If still over budget, drop standalone comment-only and blank lines to fit more fields.
	if len(filtered) > maxLines {
		var compact []string
		for _, line := range filtered {
			tr := strings.TrimSpace(line)
			if isHeaderBoilerplate(tr) || isCommentOnlyLine(tr) {
				continue
			}
			compact = append(compact, line)
		}
		if len(compact) > 0 {
			filtered = compact
		}
	}

	if len(filtered) > maxLines {
		if maxLines >= 4 {
			out := make([]string, 0, maxLines)
			out = append(out, filtered[:maxLines-2]...)
			out = append(out, "    // ... (truncated) ...", "};")
			return out
		}
		return filtered[:maxLines]
	}
	return filtered
}
