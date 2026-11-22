package main

import (
	"encoding/binary"
	"math"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"endorphin_decomp/internal/decomp"
)

func TestValidateLiftedSource(t *testing.T) {
	good := `
#include "lift_compat.h"
// Lifted from x86 __asm block; no inline asm remains
// [0x0056DA30]
// @name BVHIO::readHeader
// @class BVHIO
// @summary Reads the BVH header line
int readHeader(void* self, int flags) {
    return lift_field<int>(self, 0x10) + flags;
}
`
	if err := validateLiftedSource(good); err != nil {
		t.Fatalf("valid C++ unexpectedly rejected: %v", err)
	}

	badCases := []struct {
		name string
		src  string
	}{
		{"__asm", `void f() { __asm { mov eax, 1 } }`},
		{"naked", `extern "C" __declspec(naked) void f() {}`},
		{"_emit", `void f() { _emit 0x90; }`},
		{"gcc_asm", `void f() { __asm__("nop"); }`},
		{"todo_line_comment", "// TODO: finish\nvoid f() {}\n"},
		{"todo_colon", "/* TODO: fix */\nvoid f() {}\n"},
		{"empty_code", "// only comments\n"},
	}
	for _, tc := range badCases {
		if err := validateLiftedSource(tc.src); err == nil {
			t.Errorf("case %q: expected rejection, got nil", tc.name)
		}
	}
}

func TestParseMetadata(t *testing.T) {
	src := `
#include "lift_compat.h"
// [0x0056DA30]
// @name BVHIO::readHeader
// @summary Reads a BVH file header and stores the frame count
// @field BVHIO +0x10 int frameCount
// @field BVHIO +0x14 const char *fileName
// @field BVHIO 0x18 unsigned int flags
int readHeader(void* self, const char* path) {
    return 0;
}
`
	m, err := parseMetadata(src)
	if err != nil {
		t.Fatalf("parseMetadata failed: %v", err)
	}
	if m.Name != "BVHIO::readHeader" {
		t.Fatalf("Name = %q, want BVHIO::readHeader", m.Name)
	}
	if m.Class != "BVHIO" {
		t.Fatalf("Class = %q, want BVHIO (inferred from @name)", m.Class)
	}
	if m.Summary != "Reads a BVH file header and stores the frame count" {
		t.Fatalf("Summary = %q", m.Summary)
	}
	if !strings.Contains(m.Signature, "int readHeader(void* self, const char* path)") {
		t.Fatalf("Signature = %q", m.Signature)
	}
	if len(m.Fields) != 3 {
		t.Fatalf("len(Fields) = %d, want 3 (%+v)", len(m.Fields), m.Fields)
	}
	if m.Fields[1].Offset != "+0x14" || m.Fields[1].Type != "const char*" || m.Fields[1].Name != "fileName" {
		t.Fatalf("Fields[1] = %+v, want {BVHIO +0x14 const char* fileName}", m.Fields[1])
	}
	if m.Fields[2].Offset != "+0x18" || m.Fields[2].Type != "unsigned int" || m.Fields[2].Name != "flags" {
		t.Fatalf("Fields[2] = %+v", m.Fields[2])
	}

	// Missing @name
	if _, err := parseMetadata("// @summary ok\nvoid f() {}\n"); err == nil {
		t.Fatal("expected error for missing @name")
	}
	// Placeholder @name
	if _, err := parseMetadata("// @name <ClassName::method>\n// @summary ok\nvoid f() {}\n"); err == nil {
		t.Fatal("expected error for placeholder @name")
	}
	// Missing @summary
	if _, err := parseMetadata("// @name Foo::bar\nvoid f() {}\n"); err == nil {
		t.Fatal("expected error for missing @summary")
	}
}

func TestMatchesScope(t *testing.T) {
	tests := []struct {
		scope, path, sym string
		want             bool
	}{
		{"all", "src/classes/Anything.cpp", "Anything::vfunc_1", true},
		{"core", "src/classes/BVHIO.cpp", "BVHIO::vfunc_3", true},
		{"core", "src/classes/Acclaim2CharacterIO.cpp", "Acclaim2CharacterIO::vfunc_1", true},
		{"core", "src/Geometry/Vec3.cpp", "Geometry::Vec3::vfunc_0", true},
		{"core", "src/classes/RandomDialog.cpp", "RandomDialog::vfunc_1", false},
		{"BVHIO,OBJIO", "src/classes/OBJIO.cpp", "OBJIO::vfunc_2", true},
		{"BVHIO,OBJIO", "src/classes/FBXIO.cpp", "FBXIO::vfunc_2", false},
		{"Acclaim*", "src/classes/AcclaimIO.cpp", "AcclaimIO::vfunc_1", true},
	}
	for _, tc := range tests {
		if got := matchesScope(tc.scope, tc.path, tc.sym); got != tc.want {
			t.Errorf("matchesScope(%q, %q, %q) = %v, want %v", tc.scope, tc.path, tc.sym, got, tc.want)
		}
	}
}

func TestParseSrcFile(t *testing.T) {
	src := `// Decompiled translation unit: src/classes/BVHIO.cpp
extern "C" void ext_00553720();
extern "C" int mem_00A9ED4C;

extern "C" __declspec(naked) int __fastcall fn_0056DA30(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9ED4C]
        call ext_00553720
        ret
    }
}

// [0x0056E000] BVHIO::vfunc_5 (12 bytes)
extern "C" int __fastcall fn_0056E000(void* self) {
    return 42;
}
`
	m := map[string]*SrcFunc{}
	parseSrcFile("src/classes/BVHIO.cpp", src, m)
	if len(m) != 2 {
		t.Fatalf("got %d funcs, want 2", len(m))
	}
	f1 := m["0x0056DA30"]
	if f1 == nil || !f1.HasAsm || len(f1.Callees) != 1 || f1.Callees[0] != "0x00553720" || len(f1.MemRefs) != 1 || f1.MemRefs[0] != "0x00A9ED4C" {
		t.Fatalf("unexpected f1: %+v", f1)
	}
	f2 := m["0x0056E000"]
	if f2 == nil || f2.HasAsm {
		t.Fatalf("unexpected f2: %+v", f2)
	}
}

func TestDecodeMemBytes(t *testing.T) {
	if got := decodeMemBytes([]byte("HIERARCHY\x00rest"), ".rdata"); !strings.Contains(got, `"HIERARCHY"`) {
		t.Fatalf("string decode = %q", got)
	}
	var fbuf [4]byte
	binary.LittleEndian.PutUint32(fbuf[:], math.Float32bits(3.5))
	if got := decodeMemBytes(fbuf[:], ".rdata"); !strings.Contains(got, "float 3.5") {
		t.Fatalf("float decode = %q", got)
	}
	var dbuf [8]byte
	binary.LittleEndian.PutUint64(dbuf[:], math.Float64bits(0.017453292519943295))
	if got := decodeMemBytes(dbuf[:], ".rdata"); !strings.Contains(got, "double") {
		t.Fatalf("double decode = %q", got)
	}
}

func TestMergeAndStructRebuild(t *testing.T) {
	tmp := t.TempDir()
	origWD, err := os.Getwd()
	if err != nil {
		t.Fatal(err)
	}
	if err := os.Chdir(tmp); err != nil {
		t.Fatal(err)
	}
	defer os.Chdir(origWD)

	// Test mergeLiftedFile (two functions into same destination, plus idempotent re-merge)
	wip1 := wipPathForVA("0x0056DA30")
	dst := "lifted/classes/BVHIO.cpp"
	content1 := `// Isolated lift WIP: lifted/wip/fn_0056DA30.cpp -> lifted/classes/BVHIO.cpp
#include "lift_compat.h"
extern "C" void ext_00553720();

// [0x0056DA30]
// @name BVHIO::fnA
// @summary First function
void fnA() {}
`
	if err := writeFileAtomic(wip1, []byte(content1), 0o644); err != nil {
		t.Fatal(err)
	}
	if err := mergeLiftedFile(wip1, dst, "0x0056DA30"); err != nil {
		t.Fatal(err)
	}
	// Re-merge same VA with updated body -> must replace, not duplicate.
	content1v2 := strings.ReplaceAll(content1, "First function", "First function v2")
	if err := writeFileAtomic(wip1, []byte(content1v2), 0o644); err != nil {
		t.Fatal(err)
	}
	if err := mergeLiftedFile(wip1, dst, "0x0056DA30"); err != nil {
		t.Fatal(err)
	}
	mergedB, err := os.ReadFile(dst)
	if err != nil {
		t.Fatal(err)
	}
	merged := string(mergedB)
	if strings.Count(merged, "// [0x0056DA30]") != 1 {
		t.Fatalf("expected 1 occurrence of marker, got:\n%s", merged)
	}
	if !strings.Contains(merged, "First function v2") {
		t.Fatalf("updated body missing:\n%s", merged)
	}

	// Test rebuildStructsAndSymbolsFromEntries with conflict detection
	entries := map[string]LiftEntry{
		"0x0056DA30": {
			VA: "0x0056DA30", Name: "BVHIO::read", Class: "BVHIO", Summary: "Reads BVH", Status: "lifted",
			Fields: []FieldSpec{
				{Class: "BVHIO", Offset: "+0x10", Type: "int", Name: "frameCount"},
				{Class: "BVHIO", Offset: "+0x04", Type: "float", Name: "frameTime"},
			},
		},
		"0x0056DA80": {
			VA: "0x0056DA80", Name: "BVHIO::write", Class: "BVHIO", Summary: "Writes BVH", Status: "lifted",
			Fields: []FieldSpec{
				{Class: "BVHIO", Offset: "+0x10", Type: "uint32_t", Name: "numFrames"}, // conflict at +0x10
			},
		},
	}
	syms, hdrs, conflicts, err := rebuildStructsAndSymbolsFromEntries(entries, map[string]decomp.ClassEntry{
		"BVHIO": {DemangledName: "BVHIO", VTableVA: "0x00950000"},
	})
	if err != nil {
		t.Fatal(err)
	}
	if syms != 2 || hdrs != 1 || conflicts != 1 {
		t.Fatalf("got syms=%d hdrs=%d conflicts=%d, want 2, 1, 1", syms, hdrs, conflicts)
	}
	hdrB, err := os.ReadFile(filepath.Join(liftedIncDir, "BVHIO.h"))
	if err != nil {
		t.Fatal(err)
	}
	hdr := string(hdrB)
	idx04 := strings.Index(hdr, "+0x4")
	idx10 := strings.Index(hdr, "+0x10")
	if idx04 < 0 || idx10 < 0 || idx04 > idx10 {
		t.Fatalf("fields not sorted by offset:\n%s", hdr)
	}
	if !strings.Contains(hdr, "CONFLICT") {
		t.Fatalf("expected CONFLICT annotation:\n%s", hdr)
	}
}

func TestRenderBriefing(t *testing.T) {
	u := decomp.UnitEntry{VA: "0x0056DA30", Size: 38, Symbol: "BVHIO::vfunc_3"}
	syms := map[string]SymbolEntry{
		"0x00553720": {Name: "NMFileIO::open", Signature: "bool open(void* self)", Summary: "Opens file"},
	}
	classes := map[string]decomp.ClassEntry{
		"BVHIO": {
			DemangledName: "BVHIO",
			VTableVA:      "0x00950000",
			BaseClasses:   []decomp.BaseClassInfo{{DemangledName: "NMFileIO", Offset: 0}},
		},
	}
	brief := renderBriefing(u, "BVHIO", "src/classes/BVHIO.cpp", "lifted/classes/BVHIO.cpp", "lifted/wip/fn_0056DA30.cpp",
		"__asm { ret }", []string{"0x00553720"}, nil, syms, classes, map[string]decomp.UnitEntry{})
	for _, want := range []string{"0x0056DA30", "RTTI_HIERARCHY", "NMFileIO (+0x0)"[:8], "[LIFTED] NMFileIO::open", "SRC_BODY"} {
		if !strings.Contains(brief, want) {
			t.Errorf("briefing missing %q:\n%s", want, brief)
		}
	}
}

func TestStripDisasmHeaderAndCompactClassHeader(t *testing.T) {
	dis := "// Function: Foo::bar\n// Size: 8 bytes | SHA-256: abc\n\n  00401000: c3 ret\n"
	if got := stripDisasmHeader(dis); got != "00401000: c3 ret" {
		t.Fatalf("stripDisasmHeader = %q", got)
	}

	hdr := `#pragma once
// Auto-generated
#include "lift_compat.h"
namespace lifted_layout {
struct Foo_Fields {
    // +0x4   float                    frameTime  (evidence: 0x0056DA30)
    // +0x10  int                      frameCount  (evidence: 0x0056DA30) // CONFLICT: multiple definitions at +0x10
};
}
`
	got := compactClassHeader(hdr)
	if strings.Contains(got, "#pragma") || strings.Contains(got, "evidence:") {
		t.Fatalf("compactClassHeader kept boilerplate:\n%s", got)
	}
	if !strings.Contains(got, "+0x4") || !strings.Contains(got, "frameTime") || !strings.Contains(got, "// CONFLICT") {
		t.Fatalf("compactClassHeader missing fields/conflict:\n%s", got)
	}
}
