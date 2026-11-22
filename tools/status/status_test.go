package main

import (
	"encoding/json"
	"os"
	"path/filepath"
	"strings"
	"testing"

	"endorphin_decomp/internal/decomp"
)

func setupSampleRepo(t *testing.T) (string, []decomp.UnitEntry, map[string]bool) {
	t.Helper()
	tmp := t.TempDir()

	// Create sample src/ files across core subsystems + non-core + wip (which must be ignored).
	files := map[string]string{
		filepath.Join(tmp, "src", "classes", "BVHIO.cpp"): `
// [0x0056DA30]
extern "C" __declspec(naked) void __fastcall fn_0056DA30(void* self) {
    __asm { ret }
}

// [0x0056DA60]
extern "C" int __fastcall fn_0056DA60(void* self) {
    return 1;
}
`,
		filepath.Join(tmp, "src", "Geometry", "Vec3.cpp"): `
// [0x005B1110]
extern "C" __declspec(naked) void fn_005B1110() {
    __asm { ret }
}
`,
		filepath.Join(tmp, "src", "classes", "SomeNonCore.cpp"): `
// [0x00600010]
extern "C" __declspec(naked) void fn_00600010() {
    __asm { ret }
}
`,
		filepath.Join(tmp, "src", "wip", "fn_0056DA30.cpp"): `
// Should be skipped during src/ walk
// [0x0056DA30]
extern "C" int fn_0056DA30() { return 0; }
`,
	}
	for p, body := range files {
		if err := os.MkdirAll(filepath.Dir(p), 0o755); err != nil {
			t.Fatal(err)
		}
		if err := os.WriteFile(p, []byte(body), 0o644); err != nil {
			t.Fatal(err)
		}
	}

	units := []decomp.UnitEntry{
		{VA: "0x0056DA30", Size: 40, Symbol: "sub_0056DA30", Status: "matched", MatchedBy: "claude-haiku-5.5@low", MatchedAt: "2026-11-12T10:00:00Z"},
		{VA: "0x0056DA60", Size: 16, Symbol: "BVHIO::vfunc_2", Status: "matched", MatchedBy: "script:auto_solve", MatchedAt: "2026-11-12T10:01:00Z"},
		{VA: "0x005B1110", Size: 24, Symbol: "Geometry::Vec3::vfunc_0", Status: "matched", MatchedBy: "gemini-4-hydrogen@low", MatchedAt: "2026-11-12T10:02:00Z"},
		{VA: "0x00600010", Size: 64, Symbol: "sub_00600010", Status: "matched", MatchedBy: "claude-sonnet-5.5@medium", MatchedAt: "2026-11-12T10:03:00Z"},
		{VA: "0x00401000", Size: 10, Symbol: "CButton::vfunc_1", Status: "out_of_scope", IsThunk: false},
	}
	mfcClasses := map[string]bool{"CButton": true}
	return tmp, units, mfcClasses
}

func TestCollectPhase2StatsZeroState(t *testing.T) {
	tmp, units, mfc := setupSampleRepo(t)
	opts := Phase2Options{
		SrcDir:          filepath.Join(tmp, "src"),
		LiftedLedgerDir: filepath.Join(tmp, "build", "lifted"), // does not exist
		SymbolsPath:     filepath.Join(tmp, "lifted", "symbols.json"),
		IncludeDir:      filepath.Join(tmp, "lifted", "include"),
		UseGitLog:       false,
	}

	p2 := collectPhase2Stats(units, mfc, opts)

	if p2.ScopeAll.TotalFuncs != 4 || p2.ScopeAll.TotalBytes != 144 {
		t.Fatalf("ScopeAll = %+v, want 4 funcs / 144 bytes", p2.ScopeAll)
	}
	if p2.ScopeAll.AlreadyPureCppFuncs != 1 || p2.ScopeAll.AsmFuncs != 3 {
		t.Fatalf("ScopeAll pure/asm = %d/%d, want 1/3", p2.ScopeAll.AlreadyPureCppFuncs, p2.ScopeAll.AsmFuncs)
	}
	if p2.ScopeAll.LiftedFuncs != 0 || p2.ScopeAll.LiftedAsmFuncs != 0 || p2.ScopeAll.RemainAsmFuncs != 3 {
		t.Fatalf("ScopeAll lifted/remain = %+v", p2.ScopeAll)
	}
	if p2.ScopeCore.TotalFuncs != 3 || p2.ScopeCore.AsmFuncs != 2 || p2.ScopeCore.AlreadyPureCppFuncs != 1 {
		t.Fatalf("ScopeCore = %+v, want 3 total / 2 asm / 1 pure", p2.ScopeCore)
	}
	if p2.InitialRTTINamedFuncs != 2 || p2.NewlyInferredNamedFuncs != 0 || p2.TotalNamedFuncs != 2 {
		t.Fatalf("naming = initial:%d inferred:%d total:%d, want 2/0/2",
			p2.InitialRTTINamedFuncs, p2.NewlyInferredNamedFuncs, p2.TotalNamedFuncs)
	}
	if p2.TotalFieldAnnotations != 0 || p2.ClassesWithFields != 0 || len(p2.Leaderboard) != 0 {
		t.Fatalf("expected zero fields and empty leaderboard, got fields=%d classes=%d lb=%d",
			p2.TotalFieldAnnotations, p2.ClassesWithFields, len(p2.Leaderboard))
	}

	// Render HTML and CI summary in zero-state and check for no division-by-zero / template errors.
	tiers, _ := buildDecileTiers(units, mfc)
	htmlDoc := renderHTMLDashboard(
		10, 8, 2,
		5, 154,
		1, 0, 1,
		10, 0, 10,
		4, 4,
		144, 144,
		tiers, nil, nil, p2,
	)
	for _, want := range []string{
		"Phase 1: MSVC8 Byte-Match",
		"100.00% Complete",
		"Phase 2: Portable C++ Lifting",
		"Ready for Phase 2 Lifting",
		"Squad Leaderboard (AI Model Matches)",
		"In-Scope Progress by Size Decile",
		"No lifted functions yet",
	} {
		if !strings.Contains(htmlDoc, want) {
			t.Errorf("zero-state HTML missing %q", want)
		}
	}
	for _, bad := range []string{"NaN", "+Inf", "-Inf", "%!("} {
		if strings.Contains(htmlDoc, bad) {
			t.Fatalf("zero-state HTML contains %q", bad)
		}
	}

	ci := renderCISummary(
		10, 8, 2,
		5, 154,
		1, 0, 1,
		10, 0, 10,
		4, 4,
		144, 144,
		tiers, nil, p2,
	)
	if !strings.Contains(ci, "Phase 2: Portable C++ Lifting") || !strings.Contains(ci, "*(no lifted functions yet)*") {
		t.Fatalf("zero-state CI summary missing Phase 2 sections:\n%s", ci)
	}
}

func TestCollectPhase2StatsPopulated(t *testing.T) {
	tmp, units, mfc := setupSampleRepo(t)

	// Write mock build/lifted entries, lifted/symbols.json, and lifted/include headers.
	writeJSON := func(path string, v any) {
		t.Helper()
		if err := os.MkdirAll(filepath.Dir(path), 0o755); err != nil {
			t.Fatal(err)
		}
		b, err := json.MarshalIndent(v, "", "  ")
		if err != nil {
			t.Fatal(err)
		}
		if err := os.WriteFile(path, b, 0o644); err != nil {
			t.Fatal(err)
		}
	}

	writeJSON(filepath.Join(tmp, "build", "lifted", "0056", "0056DA30.json"), LiftEntry{
		VA:         "0x0056DA30",
		Size:       40,
		OrigSymbol: "sub_0056DA30",
		SrcPath:    "src/classes/BVHIO.cpp",
		LiftedPath: "lifted/classes/BVHIO.cpp",
		Name:       "BVHIO::readHeader<char>",
		Class:      "BVHIO",
		Signature:  "bool readHeader(void* self)",
		Summary:    "Parses BVH header & stores frame count.",
		Fields: []FieldSpec{
			{Class: "BVHIO", Offset: "+0x10", Type: "int", Name: "frameCount"},
			{Class: "BVHIO", Offset: "+0x14", Type: "float", Name: "frameTime"},
		},
		Status:   "lifted",
		LiftedBy: "claude-haiku-5.5@low",
		LiftedAt: "2026-11-22T05:06:00Z",
	})
	writeJSON(filepath.Join(tmp, "build", "lifted", "005B", "005B1110.json"), LiftEntry{
		VA:         "0x005B1110",
		Size:       24,
		OrigSymbol: "Geometry::Vec3::vfunc_0",
		SrcPath:    "src/Geometry/Vec3.cpp",
		LiftedPath: "lifted/Geometry/Vec3.cpp",
		Name:       "Geometry::Vec3::lengthSq",
		Class:      "Geometry::Vec3",
		Signature:  "float lengthSq(const void* self)",
		Summary:    "Computes squared vector length.",
		Fields: []FieldSpec{
			{Class: "Geometry::Vec3", Offset: "+0x0", Type: "float", Name: "x"},
		},
		Status:   "lifted",
		LiftedBy: "gemini-4-hydrogen@low",
		LiftedAt: "2026-11-22T05:10:00Z",
	})
	writeJSON(filepath.Join(tmp, "build", "lifted", "0060", "00600010.json"), LiftEntry{
		VA:         "0x00600010",
		Size:       64,
		OrigSymbol: "sub_00600010",
		SrcPath:    "src/classes/SomeNonCore.cpp",
		LiftedPath: "lifted/classes/SomeNonCore.cpp",
		Status:     "skipped",
		SkipReason: "complex jump table",
	})
	writeJSON(filepath.Join(tmp, "lifted", "symbols.json"), map[string]SymbolEntry{
		"0x0056DA30": {Name: "BVHIO::readHeader<char>", Class: "BVHIO", Summary: "Parses BVH header."},
		"0x005B1110": {Name: "Geometry::Vec3::lengthSq", Class: "Geometry::Vec3", Summary: "Computes squared vector length."},
	})
	if err := os.MkdirAll(filepath.Join(tmp, "lifted", "include"), 0o755); err != nil {
		t.Fatal(err)
	}
	for _, h := range []string{"lift_compat.h", "BVHIO.h", "Geometry_Vec3.h"} {
		if err := os.WriteFile(filepath.Join(tmp, "lifted", "include", h), []byte("#pragma once\n"), 0o644); err != nil {
			t.Fatal(err)
		}
	}

	opts := Phase2Options{
		SrcDir:          filepath.Join(tmp, "src"),
		LiftedLedgerDir: filepath.Join(tmp, "build", "lifted"),
		SymbolsPath:     filepath.Join(tmp, "lifted", "symbols.json"),
		IncludeDir:      filepath.Join(tmp, "lifted", "include"),
		UseGitLog:       false,
	}
	p2 := collectPhase2Stats(units, mfc, opts)

	if p2.ScopeCore.LiftedAsmFuncs != 2 || p2.ScopeCore.AsmFuncs != 2 || p2.ScopeCore.LiftedAsmBytes != 64 {
		t.Fatalf("ScopeCore lifted = %+v, want 2/2 funcs, 64 bytes", p2.ScopeCore)
	}
	if p2.ScopeCore.PortableCppFuncs != 3 || p2.ScopeCore.PortableCppBytes != 80 {
		t.Fatalf("ScopeCore portable = %+v, want 3 funcs / 80 bytes", p2.ScopeCore)
	}
	if p2.ScopeAll.SkippedFuncs != 1 || p2.ScopeAll.RemainAsmFuncs != 1 {
		t.Fatalf("ScopeAll skipped/remain = %+v, want 1 skipped, 1 remain", p2.ScopeAll)
	}
	// Initial RTTI: BVHIO::vfunc_2 and Geometry::Vec3::vfunc_0 (2).
	// Newly inferred: sub_0056DA30 -> BVHIO::readHeader<char>, AND Vec3::vfunc_0 -> Vec3::lengthSq (2).
	// Total unique named: 0056DA30, 0056DA60, 005B1110 = 3.
	if p2.InitialRTTINamedFuncs != 2 || p2.NewlyInferredNamedFuncs != 2 || p2.TotalNamedFuncs != 3 {
		t.Fatalf("naming = initial:%d inferred:%d total:%d, want 2/2/3",
			p2.InitialRTTINamedFuncs, p2.NewlyInferredNamedFuncs, p2.TotalNamedFuncs)
	}
	if p2.TotalFieldAnnotations != 3 || p2.UniqueFields != 3 || p2.ClassesWithFields != 2 || p2.GeneratedHeaders != 2 {
		t.Fatalf("fields/headers = ann:%d uniq:%d cls:%d hdr:%d, want 3/3/2/2",
			p2.TotalFieldAnnotations, p2.UniqueFields, p2.ClassesWithFields, p2.GeneratedHeaders)
	}
	if len(p2.Leaderboard) != 2 {
		t.Fatalf("len(Leaderboard) = %d, want 2", len(p2.Leaderboard))
	}
	if p2.Leaderboard[0].Model != "claude-haiku-5.5@low" || p2.Leaderboard[0].LiftedBytes != 40 || p2.Leaderboard[0].FieldsRecovered != 2 {
		t.Fatalf("Leaderboard[0] = %+v", p2.Leaderboard[0])
	}

	// Verify subsystem breakdown for BVHIO and Geometry.
	var foundBVH, foundGeom bool
	for _, sub := range p2.Subsystems {
		if sub.Name == "BVHIO" {
			foundBVH = true
			if sub.Stats.TotalFuncs != 2 || sub.Stats.AlreadyPureCppFuncs != 1 || sub.Stats.LiftedAsmFuncs != 1 || sub.FieldCount != 2 {
				t.Fatalf("BVHIO subsystem = %+v", sub)
			}
		}
		if sub.Name == "Geometry" {
			foundGeom = true
			if sub.Stats.TotalFuncs != 1 || sub.Stats.LiftedAsmFuncs != 1 || sub.FieldCount != 1 {
				t.Fatalf("Geometry subsystem = %+v", sub)
			}
		}
	}
	if !foundBVH || !foundGeom {
		t.Fatalf("missing expected subsystems: bvh=%v geom=%v", foundBVH, foundGeom)
	}

	// Render HTML and verify HTML escaping + presence of Phase 1 & Phase 2 content.
	tiers, _ := buildDecileTiers(units, mfc)
	for i := range units {
		if oos, _ := isOutOfScope(units[i], mfc); !oos {
			tIdx := i
			if tIdx >= len(tiers) {
				tIdx = len(tiers) - 1
			}
			tiers[tIdx].TotalFuncs++
			tiers[tIdx].TotalBytes += uint64(units[i].Size)
			tiers[tIdx].MatchedFuncs++
			tiers[tIdx].MatchedBytes += uint64(units[i].Size)
		}
	}
	p1Leaderboard := []ModelStats{
		{Model: "claude-haiku-5.5@low", MatchedFuncs: 1, MatchedBytes: 40, Sizes: []uint32{40}},
	}
	htmlDoc := renderHTMLDashboard(
		10, 8, 2,
		5, 154,
		1, 0, 1,
		10, 0, 10,
		4, 4,
		144, 144,
		tiers, p1Leaderboard, nil, p2,
	)

	for _, want := range []string{
		"<!DOCTYPE html>",
		"id=\"tab-overview\"",
		"id=\"tab-phase2\"",
		"id=\"tab-phase1\"",
		"BVHIO::readHeader&lt;char&gt;", // HTML-escaped template parameter!
		"Parses BVH header &amp; stores frame count.",
		"Geometry::Vec3::lengthSq",
		"lifted/include/BVHIO.h",
		"claude-haiku-5.5@low",
		"gemini-4-hydrogen@low",
		"Phase 1: MSVC8 Byte-Match",
		"Squad Leaderboard (AI Model Matches)",
		"In-Scope Progress by Size Decile",
		"Binary Scope Breakdown",
	} {
		if !strings.Contains(htmlDoc, want) {
			t.Errorf("populated HTML missing %q", want)
		}
	}
	if strings.Contains(htmlDoc, "BVHIO::readHeader<char>") {
		t.Errorf("raw unescaped '<char>' found in HTML output")
	}

	ci := renderCISummary(
		10, 8, 2,
		5, 154,
		1, 0, 1,
		10, 0, 10,
		4, 4,
		144, 144,
		tiers, p1Leaderboard, p2,
	)
	for _, want := range []string{
		"Endorphin 2.7.1 Decompilation Scoreboard",
		"Phase 2: Portable C++ Lifting & Struct Recovery",
		"**BVHIO**",
		"**Geometry**",
		"`claude-haiku-5.5@low`",
		"`gemini-4-hydrogen@low`",
	} {
		if !strings.Contains(ci, want) {
			t.Errorf("populated CI summary missing %q:\n%s", want, ci)
		}
	}
}
