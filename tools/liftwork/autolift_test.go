package main

import (
	"strings"
	"testing"

	"endorphin_decomp/internal/decomp"
)

func TestClassifyAndLiftPatterns(t *testing.T) {
	syms := map[string]SymbolEntry{
		"0x004F97F0": {Name: "AnimatableTransform::vfunc_9"},
	}
	units := map[string]decomp.UnitEntry{
		"0x0063E0F0": {VA: "0x0063E0F0", Symbol: "AdvXMLParser::CharRef::dtor"},
	}

	cases := []struct {
		name      string
		unit      decomp.UnitEntry
		lines     []DisasmLine
		wantPat   string
		wantSub   string
		wantField string
	}{
		{
			name: "noop add eax, 0",
			unit: decomp.UnitEntry{VA: "0x0085E04B", Size: 5, Symbol: "sub_0085E04B"},
			lines: []DisasmLine{
				{VA: 0x0085E04B, Inst: "add eax, 0x0"},
			},
			wantPat: "noop_add_eax_0",
			wantSub: "void fn_0085E04B(void)",
		},
		{
			name: "this adjustor thunk",
			unit: decomp.UnitEntry{VA: "0x00499B40", Size: 8, Symbol: "NMData::State::vfunc_9_off_10"},
			lines: []DisasmLine{
				{VA: 0x00499B40, Inst: "sub ecx, 0x8"},
				{VA: 0x00499B43, Inst: "jmp 0x4f97f0 <.text+0xf87f0>"},
			},
			wantPat: "this_adjustor_thunk",
			wantSub: "ext_004F97F0(static_cast<char*>(self) - 0x8);",
		},
		{
			name: "float field setter",
			unit: decomp.UnitEntry{VA: "0x00622320", Size: 10, Symbol: "NMData::SkeletalCalibrationVariables::vfunc_19"},
			lines: []DisasmLine{
				{VA: 0x00622320, Inst: "fld dword ptr [esp + 0x4]"},
				{VA: 0x00622324, Inst: "fstp dword ptr [ecx + 0x10]"},
				{VA: 0x00622327, Inst: "ret 0x4"},
			},
			wantPat:   "this_float_setter",
			wantSub:   "lift_field<float>(self, 0x10) = value;",
			wantField: "// @field NMData::SkeletalCalibrationVariables +0x10 float field_0x10",
		},
		{
			name: "vcall forward thunk",
			unit: decomp.UnitEntry{VA: "0x004CE8C0", Size: 10, Symbol: "NMData::IncarnationEventData::vfunc_88"},
			lines: []DisasmLine{
				{VA: 0x004CE8C0, Inst: "mov eax, dword ptr [ecx]"},
				{VA: 0x004CE8C2, Inst: "mov edx, dword ptr [eax + 0x158]"},
				{VA: 0x004CE8C8, Inst: "jmp edx"},
			},
			wantPat:   "vcall_forward_thunk",
			wantSub:   "lift_field<VFunc>(vtable, 0x158)",
			wantField: "// @field NMData::IncarnationEventData +0x0 void* vtable",
		},
		{
			name: "guarded this offset",
			unit: decomp.UnitEntry{VA: "0x00499B30", Size: 11, Symbol: "NMData::Transition::vfunc_17"},
			lines: []DisasmLine{
				{VA: 0x00499B30, Inst: "test ecx, ecx"},
				{VA: 0x00499B32, Inst: "je 0x499b38 <.text+0x98b38>"},
				{VA: 0x00499B34, Inst: "lea eax, [ecx + 0x8]"},
				{VA: 0x00499B37, Inst: "ret"},
				{VA: 0x00499B38, Inst: "xor eax, eax"},
				{VA: 0x00499B3A, Inst: "ret"},
			},
			wantPat: "guarded_this_offset",
			wantSub: "return static_cast<char*>(self) + 0x8;",
		},
		{
			name: "scalar deleting dtor",
			unit: decomp.UnitEntry{VA: "0x0063EA30", Size: 30, Symbol: "AdvXMLParser::CharRef::vfunc_0", NumCallees: 2},
			lines: []DisasmLine{
				{VA: 0x0063EA30, Inst: "push esi"},
				{VA: 0x0063EA31, Inst: "mov esi, ecx"},
				{VA: 0x0063EA33, Inst: "call 0x63e0f0 <.text+0x23d0f0>"},
				{VA: 0x0063EA38, Inst: "test byte ptr [esp + 0x8], 0x1"},
				{VA: 0x0063EA3D, Inst: "je 0x63ea48 <.text+0x23da48>"},
				{VA: 0x0063EA3F, Inst: "push esi"},
				{VA: 0x0063EA40, Inst: "call 0x6a5c5c <.text+0x2a4c5c>"},
				{VA: 0x0063EA45, Inst: "add esp, 0x4"},
				{VA: 0x0063EA48, Inst: "mov eax, esi"},
				{VA: 0x0063EA4A, Inst: "pop esi"},
				{VA: 0x0063EA4B, Inst: "ret 0x4"},
			},
			wantPat: "scalar_deleting_dtor",
			wantSub: "if ((flags & 1u) != 0)",
		},
	}

	for _, tc := range cases {
		t.Run(tc.name, func(t *testing.T) {
			pat, _, block, ok := classifyAndLiftPattern(tc.unit, tc.lines, syms, units)
			if !ok {
				t.Fatalf("expected pattern %q, got no match", tc.wantPat)
			}
			if pat != tc.wantPat {
				t.Fatalf("pattern = %q, want %q", pat, tc.wantPat)
			}
			if !strings.Contains(block, tc.wantSub) {
				t.Fatalf("block missing %q:\n%s", tc.wantSub, block)
			}
			if tc.wantField != "" && !strings.Contains(block, tc.wantField) {
				t.Fatalf("block missing field %q:\n%s", tc.wantField, block)
			}
			if err := validateLiftedSource(block); err != nil {
				t.Fatalf("validateLiftedSource failed: %v", err)
			}
			if _, err := parseMetadata(block); err != nil {
				t.Fatalf("parseMetadata failed: %v", err)
			}
		})
	}
}

func TestSubstituteLiftedClone(t *testing.T) {
	srcLines := []DisasmLine{
		{VA: 0x00622320, Bytes: []byte{0xd9, 0x44, 0x24, 0x04}, Inst: "fld dword ptr [esp + 0x4]"},
		{VA: 0x00622324, Bytes: []byte{0xd9, 0x59, 0x10}, Inst: "fstp dword ptr [ecx + 0x10]"},
		{VA: 0x00622327, Bytes: []byte{0xc2, 0x04, 0x00}, Inst: "ret 0x4"},
	}
	tgtLines := []DisasmLine{
		{VA: 0x00622330, Bytes: []byte{0xd9, 0x44, 0x24, 0x04}, Inst: "fld dword ptr [esp + 0x4]"},
		{VA: 0x00622334, Bytes: []byte{0xd9, 0x59, 0x14}, Inst: "fstp dword ptr [ecx + 0x14]"},
		{VA: 0x00622337, Bytes: []byte{0xc2, 0x04, 0x00}, Inst: "ret 0x4"},
	}

	k1, ops1, ok1 := normalizeDisasmShape(srcLines)
	k2, ops2, ok2 := normalizeDisasmShape(tgtLines)
	if !ok1 || !ok2 || k1 != k2 {
		t.Fatalf("expected matching shapes: %q vs %q", k1, k2)
	}

	srcBlock := liftedSourceBlock{
		VA: "0x00622320",
		Block: `// [0x00622320] NMData::SkeletalCalibrationVariables::vfunc_19 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_19
// @class NMData::SkeletalCalibrationVariables
// @summary Stores float at +0x10.
// @field NMData::SkeletalCalibrationVariables +0x10 float field_0x10
extern "C" void __fastcall fn_00622320(void* self, int edx_unused, float value) {
    (void)edx_unused;
    *reinterpret_cast<float*>(static_cast<unsigned char*>(self) + 0x10) = value;
}`,
	}
	srcEntry := LiftEntry{
		VA:    "0x00622320",
		Name:  "NMData::SkeletalCalibrationVariables::vfunc_19",
		Class: "NMData::SkeletalCalibrationVariables",
		Fields: []FieldSpec{
			{Class: "NMData::SkeletalCalibrationVariables", Offset: "+0x10", Type: "float", Name: "field_0x10"},
		},
	}
	tgtUnit := decomp.UnitEntry{
		VA:     "0x00622330",
		Size:   10,
		Symbol: "NMData::SkeletalCalibrationVariables::vfunc_20",
	}

	_, out, ok := substituteLiftedClone(srcBlock, srcEntry, srcLines, ops1, tgtUnit, tgtLines, ops2)
	if !ok {
		t.Fatalf("expected clone substitution to succeed")
	}
	if !strings.Contains(out, "fn_00622330") || !strings.Contains(out, "+ 0x14") {
		t.Fatalf("unexpected substituted clone:\n%s", out)
	}
	if !strings.Contains(out, "// @field NMData::SkeletalCalibrationVariables +0x14 float field_0x14") {
		t.Fatalf("expected remapped @field in clone:\n%s", out)
	}
	if err := validateLiftedSource(out); err != nil {
		t.Fatalf("validateLiftedSource failed: %v", err)
	}
	if _, err := parseMetadata(out); err != nil {
		t.Fatalf("parseMetadata failed: %v", err)
	}
}
