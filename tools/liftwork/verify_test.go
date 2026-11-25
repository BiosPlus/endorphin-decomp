package main

import (
	"strings"
	"testing"

	"endorphin_decomp/internal/decomp"
)

func TestValidateLiftedSemantics(t *testing.T) {
	u := decomp.UnitEntry{VA: "0x007F9F30", Size: 64, Symbol: "sub_007F9F30"}
	sf := &SrcFunc{
		VA:      "0x007F9F30",
		Callees: []string{"0x004BA2D0"},
		MemRefs: []string{"0x00B43584"}, // .data global
		Body:    "__asm { call ext_004BA2D0\n mov eax, [mem_00B43584]\n ret }",
	}
	byVA := map[string]decomp.UnitEntry{
		"0x004BA2D0": {VA: "0x004BA2D0", Symbol: "helper_fn"},
	}

	// 1. Clean lift passes with zero issues.
	good := `
#include "lift_compat.h"
extern "C" int ext_004BA2D0(int);
extern "C" uint32_t mem_00B43584;
// [0x007F9F30]
// @name scaleFloatArray
// @summary Scales floats
int fn_007F9F30(int n) {
    return ext_004BA2D0(n) + static_cast<int>(mem_00B43584);
}
`
	if errs := semanticErrors(validateLiftedSemantics(good, u, sf, byVA, nil)); len(errs) != 0 {
		t.Fatalf("clean lift failed: %+v", errs)
	}

	// 2. Undefined helper like mem_read/mem_write is rejected.
	badHelper := `
#include "lift_compat.h"
template <typename T> T mem_read(uint32_t addr);
template <typename T> void mem_write(uint32_t addr, T val);
// [0x007F9F30]
// @name scaleFloatArray
// @summary Scales floats
void sub_007F9F30(uint32_t dst) {
    mem_write<float>(dst, mem_read<float>(dst));
}
`
	errs := semanticErrors(validateLiftedSemantics(badHelper, u, &SrcFunc{VA: u.VA}, byVA, nil))
	foundUndef := false
	for _, e := range errs {
		if e.Code == "undef_helper" && strings.Contains(e.Message, "mem_read") {
			foundUndef = true
		}
	}
	if !foundUndef {
		t.Fatalf("expected undef_helper error, got: %+v", errs)
	}

	// 3. Function pointer extern must NOT trigger undef_helper.
	fnPtrSrc := `
#include "lift_compat.h"
extern uint32_t (__stdcall *mem_00925694)(uint32_t hWnd, uint32_t Msg);
// [0x00401080]
// @name CWnd::SetFont
// @summary Sends WM_SETFONT
uint32_t sub_00401080(uint32_t h) {
    return mem_00925694(h, 0x30);
}
`
	if errs := semanticErrors(validateLiftedSemantics(fnPtrSrc, decomp.UnitEntry{VA: "0x00401080", Size: 32}, &SrcFunc{VA: "0x00401080"}, byVA, nil)); len(errs) != 0 {
		t.Fatalf("function pointer extern falsely rejected: %+v", errs)
	}

	// 4. Missing callee & hallucinated callee & missing global are caught.
	badRefs := `
#include "lift_compat.h"
extern "C" void ext_004BA2D0();
extern "C" void ext_00DEAD00();
extern "C" uint32_t mem_00B43584;
// [0x007F9F30]
// @name badLift
// @summary Drops callee and calls wrong one
void fn_007F9F30() {
    ext_00DEAD00();
}
`
	errs = semanticErrors(validateLiftedSemantics(badRefs, u, sf, byVA, nil))
	codes := map[string]bool{}
	for _, e := range errs {
		codes[e.Code] = true
	}
	for _, want := range []string{"missing_callee", "hallucinated_callee", "missing_global"} {
		if !codes[want] {
			t.Errorf("expected error code %q, got %+v", want, errs)
		}
	}

	// 5. Empty body for non-trivial function is rejected.
	emptyBody := `
#include "lift_compat.h"
// [0x007F9F30]
// @name stub
// @summary Empty stub
void fn_007F9F30(void* self) {
    (void)self;
}
`
	errs = semanticErrors(validateLiftedSemantics(emptyBody, u, &SrcFunc{VA: u.VA, Body: "__asm { mov eax, [ecx]\n add eax, 1\n ret }"}, byVA, nil))
	if len(errs) == 0 || errs[0].Code != "empty_body" {
		t.Fatalf("expected empty_body error, got %+v", errs)
	}
}

func TestParseExecSignatureAndRewriteMem(t *testing.T) {
	src := `
// [0x007F66D0]
namespace lift_007F66D0 {
extern const double mem_009453D8;
// @name vec3DistanceSqLessThanScaledEps
// @summary Checks squared distance
uint8_t __cdecl sub_007F66D0(const float* a, const float* b, float threshold) {
    return (a[0] - b[0] < threshold * mem_009453D8) ? 1 : 0;
}
}
`
	sig, err := parseExecSignature(src, "0x007F66D0", &SrcFunc{Body: "__asm { ret }"})
	if err != nil {
		t.Fatalf("parseExecSignature failed: %v", err)
	}
	if sig.FuncName != "sub_007F66D0" || sig.Namespace != "lift_007F66D0" || sig.Conv != "cdecl" || len(sig.Params) != 3 {
		t.Fatalf("unexpected sig: %+v", sig)
	}
	rewritten := rewriteMemDeclsForExec(src)
	if !strings.Contains(rewritten, "#define mem_009453D8 (*reinterpret_cast<const double*>(0x009453D8u))") {
		t.Fatalf("unexpected rewrite:\n%s", rewritten)
	}
}
