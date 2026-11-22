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
