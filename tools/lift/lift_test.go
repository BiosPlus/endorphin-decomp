package main

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
	"time"
)

func TestLoadConfigDefaults(t *testing.T) {
	t.Setenv("LIFT_SCOPE", "")
	t.Setenv("LIFT_DEPS_FIRST", "")
	t.Setenv("LIFT_ISOLATED", "")
	cfg, err := loadConfig(nil)
	if err != nil {
		t.Fatalf("loadConfig failed: %v", err)
	}
	if cfg.Scope != "core" {
		t.Fatalf("Scope = %q, want core", cfg.Scope)
	}
	if !cfg.DepsFirst || !cfg.LiftIsolated {
		t.Fatalf("expected DepsFirst=true, LiftIsolated=true; got %v, %v", cfg.DepsFirst, cfg.LiftIsolated)
	}
	if cfg.AttemptsFile != ".local/lift_attempts.tsv" {
		t.Fatalf("AttemptsFile = %q", cfg.AttemptsFile)
	}
	if cfg.AutoLiftEvery != 5 {
		t.Fatalf("AutoLiftEvery = %d, want 5", cfg.AutoLiftEvery)
	}
}

func TestAgyLiftSettings(t *testing.T) {
	iso := agyLiftSettings("/repo", true)
	if !strings.Contains(iso, "write_file(/repo/lifted/wip)") {
		t.Fatalf("isolated settings missing lifted/wip write: %s", iso)
	}
	if !strings.Contains(iso, `"deny":[`) || !strings.Contains(iso, "write_file(/repo/src)") {
		t.Fatalf("settings must deny src/ writes: %s", iso)
	}
	nonIso := agyLiftSettings("/repo", false)
	if !strings.Contains(nonIso, "write_file(/repo/lifted)") {
		t.Fatalf("non-isolated settings missing lifted write: %s", nonIso)
	}
}

func TestBuildLiftPromptSpill(t *testing.T) {
	root := t.TempDir()
	small, path := buildLiftPrompt(root, "0x0056DA30", "SRC_BODY: ret")
	if path != "" || !strings.Contains(small, "SRC_BODY: ret") {
		t.Fatalf("small prompt unexpected: path=%q", path)
	}
	huge := strings.Repeat("X", maxArgPromptBytes+1024)
	big, bigPath := buildLiftPrompt(root, "0x0056DA30", huge)
	if bigPath == "" || len(big) > maxArgPromptBytes || !strings.Contains(big, ".local/lift_briefings/") {
		t.Fatalf("spilled prompt invalid: len=%d path=%q", len(big), bigPath)
	}
	got, err := os.ReadFile(bigPath)
	if err != nil || string(got) != huge {
		t.Fatalf("spilled file mismatch: err=%v len=%d", err, len(got))
	}
}

func newTestLifter() *lifter {
	cfg := &config{
		Scope:   "core",
		Efforts: []string{"low", "medium"},
		Tiers: [][]string{
			{"claude-haiku-5.5"},
			{"claude-sonnet-5.5"},
			{"gemini-4-hydrogen"},
		},
		EventsLog: filepath.Join(os.TempDir(), "lift_test_events.log"),
	}
	l := &lifter{
		cfg:        cfg,
		hasClaude:  true,
		hasAgy:     true,
		modelIdx:   map[string]int{},
		modelTier:  map[string]int{},
		failed:     map[string]bool{},
		agyNoModel: map[string]bool{"claude-haiku-5.5": true},
		pending:    make([][]string, len(cfg.Tiers)),
		fnTier:     map[string]int{},
		fnOwed:     map[string][]string{},
		funcSize:   map[string]int{},
		funcCpp:    map[string]string{},
		funcSym:    map[string]string{},
		funcSys:    map[string]string{},
		inflightAddr: map[string]bool{},
		inflightCpp:  map[string]int{},
		jobs:         map[string]int{},
		fnStart:      map[string]time.Time{},
	}
	l.pools = newPools(cfg, func(string, ...any) {})
	for t, ms := range cfg.Tiers {
		for _, m := range ms {
			l.modelIdx[m], l.modelTier[m] = len(l.chain), t
			l.chain = append(l.chain, m)
		}
	}
	l.running = make([]int, len(l.chain))
	return l
}

func TestAdvanceSkipsLimitedPool(t *testing.T) {
	l := newTestLifter()
	l.pools.markLimited("claude", "hard", time.Now().Add(time.Hour).Unix())
	l.advance("0x0056DA30", 0)
	if got := l.fnTier["0x0056DA30"]; got != 1 {
		t.Fatalf("fnTier = %d, want 1", got)
	}
	l.pools.markLimited("agy-other", "hard", time.Now().Add(time.Hour).Unix())
	l.advance("0x0056DA40", 0)
	if got := l.fnTier["0x0056DA40"]; got != 2 {
		t.Fatalf("fnTier = %d, want 2", got)
	}
}

func TestTokenCounter(t *testing.T) {
	p := filepath.Join(t.TempDir(), "log")
	_ = os.WriteFile(p, []byte(`{"type":"assistant","message":{"id":"m1","usage":{"input_tokens":1500,"cache_creation_input_tokens":500,"output_tokens":200}}}`+"\n"), 0o644)
	d := &dashboard{tokens: map[string]*tokenCounter{}}
	if got := d.agentTokens("0x0056DA30", p); got != "2.2k" {
		t.Fatalf("agentTokens = %q, want 2.2k", got)
	}
}

func TestFuncSystem(t *testing.T) {
	cases := []struct {
		cpp, sym, want string
	}{
		{"lifted/NMData/State.cpp", "NMData::State::vfunc_1", "NMData"},
		{"lifted/MultiTrackView/MultiTrackViewStates/MoveState.cpp", "MultiTrackView::MoveState::vfunc_4", "MultiTrackView"},
		{"lifted/classes/BVHIO.cpp", "BVHIO::readJoint", "BVHIO"},
		{"lifted/classes/global_tiny.cpp", "RuntimeEngine::tick", "RuntimeEngine"},
		{"lifted/classes/BVHIO.cpp", "fn_00412340", "BVHIO"},
		{"lifted/leaf/tiny_660000.cpp", "fn_00660010", "leaf"},
	}
	for _, tc := range cases {
		if got := funcSystem(tc.cpp, tc.sym); got != tc.want {
			t.Errorf("funcSystem(%q, %q) = %q, want %q", tc.cpp, tc.sym, got, tc.want)
		}
	}
}

func TestAutoLiftDrainOnAgentMatchesOnly(t *testing.T) {
	l := newTestLifter()
	l.cfg.AutoLiftEvery = 5
	l.cfg.ResultsLog = filepath.Join(t.TempDir(), "results.log")

	// Deferred and auto_lift completions should not trigger draining.
	for i := 0; i < 6; i++ {
		l.finish("0x00000001", "deferred", "all-eligible-models")
		l.finish("0x00000002", "lifted", "auto_lift")
	}
	if l.autoLiftDraining {
		t.Fatalf("autoLiftDraining triggered by deferred/auto_lift completions")
	}
	if got := l.autoLiftRemaining(); got != 5 {
		t.Fatalf("autoLiftRemaining = %d, want 5", got)
	}

	// 4 agent-lifted matches should not trigger yet.
	for i := 0; i < 4; i++ {
		l.finish("0x00000003", "lifted", "claude-haiku-5.5@low")
	}
	if l.autoLiftDraining {
		t.Fatalf("autoLiftDraining triggered too early at %d matches", l.agentLifted)
	}
	if got := l.autoLiftRemaining(); got != 1 {
		t.Fatalf("autoLiftRemaining = %d, want 1", got)
	}

	// 5th agent-lifted match triggers draining.
	l.jobs["0x00000099"] = 0
	l.finish("0x00000004", "lifted", "claude-haiku-5.5@low")
	if !l.autoLiftDraining {
		t.Fatalf("expected autoLiftDraining=true after 5th agent match")
	}
}

func TestEventColorShowsVerboseEvents(t *testing.T) {
	for _, ev := range []string{
		"12:00:00 [pull] #1/50 0x00400000 [NMData]",
		"12:00:01 [>] 0x00400000 [NMData]: step 1/5",
		"12:00:02 [-] Unlifted 0x00400000 [NMData]",
		"12:00:03 [~] 0x00400000 [NMData]: tier 1",
		"12:00:04 [*] Auto-lift threshold reached",
		"12:00:05 [+] LIFTED 0x00400000 [NMData]",
		"12:00:06 [done] 0x00400000 [NMData]",
	} {
		if _, ok := eventColor(ev); !ok {
			t.Errorf("eventColor(%q) unexpectedly hidden", ev)
		}
	}
}
