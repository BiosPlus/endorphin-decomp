package main

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
	"time"
)

func TestTokenCounterIncremental(t *testing.T) {
	p := filepath.Join(t.TempDir(), "log")
	write := func(s string) {
		f, _ := os.OpenFile(p, os.O_APPEND|os.O_CREATE|os.O_WRONLY, 0o644)
		f.WriteString(s)
		f.Close()
	}
	d := &dashboard{tokens: map[string]*tokenCounter{}}
	write(`{"type":"system","subtype":"init"}` + "\n" +
		`{"type":"assistant","message":{"id":"m1","usage":{"input_tokens":1000,"cache_creation_input_tokens":500,"output_tokens":10}}}` + "\n" +
		`{"type":"assistant","message":{"id":"m1","usage":{"input_tokens":1000,"cache_creation_input_tokens":500,"output_tokens":100}}}` + "\n" +
		`{"type":"assistant","message":{"id":"m2","usage":{"input_tokens":2000,`) // partial line
	if got := d.agentTokens("a", p); got != "1.6k" {
		t.Fatalf("first read = %q, want 1.6k", got)
	}
	write(`"cache_creation_input_tokens":0,"output_tokens":400}}}` + "\n")
	d.tokens["a"].last = time.Time{} // skip the 5s throttle
	if got := d.agentTokens("a", p); got != "4.0k" {
		t.Fatalf("second read = %q, want 4.0k", got)
	}
}

func TestParseClockIsFuture(t *testing.T) {
	v, ok := parseClock("5:30 pm")
	if !ok || v <= time.Now().Unix() || v > time.Now().Add(24*time.Hour).Unix() {
		t.Fatalf("parseClock = %d, %v", v, ok)
	}
}

func TestAgySettingsIsolatedDropsInclude(t *testing.T) {
	s := agySettings("/r", true)
	for _, bad := range []string{"write_file(/r/include)", "edit_file(/r/include)"} {
		if strings.Contains(s, bad) {
			t.Fatalf("isolated settings still allow %s", bad)
		}
	}
	if !strings.Contains(agySettings("/r", false), "edit_file(/r/include)") {
		t.Fatal("non-isolated settings lost include/")
	}
}

func newTestGrind() *grind {
	cfg := &config{
		Efforts: []string{"low", "medium"},
		Tiers: [][]string{
			{"claude-haiku-5.5"},
			{"claude-sonnet-5.5"},
			{"gemini-4-hydrogen"},
		},
		EventsLog: filepath.Join(os.TempDir(), "grind_test_events.log"),
	}
	g := &grind{
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
	g.pools = newPools(cfg, func(string, ...any) {})
	for t, ms := range cfg.Tiers {
		for _, m := range ms {
			g.modelIdx[m], g.modelTier[m] = len(g.chain), t
			g.chain = append(g.chain, m)
		}
	}
	g.running = make([]int, len(g.chain))
	return g
}

func TestAdvanceSkipsRateLimitedClaudeToAgyAndGemini(t *testing.T) {
	g := newTestGrind()
	g.pools.markLimited("claude", "hard", time.Now().Add(time.Hour).Unix())

	// With claude cooling down (and agy lacking haiku), tier 0 skips to tier 1 (sonnet via agy).
	g.advance("0x00401000", 0)
	if got := g.fnTier["0x00401000"]; got != 1 {
		t.Fatalf("fnTier with claude limited = %d, want 1", got)
	}

	// If agy-other is also limited, tier 0 & 1 skip straight to tier 2 (gemini-4-hydrogen).
	g.pools.markLimited("agy-other", "hard", time.Now().Add(time.Hour).Unix())
	g.advance("0x00402000", 0)
	if got := g.fnTier["0x00402000"]; got != 2 {
		t.Fatalf("fnTier with claude + agy-other limited = %d, want 2", got)
	}
}

func TestAdvanceDoesNotDeferWhenAllPoolsCoolingDown(t *testing.T) {
	g := newTestGrind()
	exp := time.Now().Add(time.Hour).Unix()
	g.pools.markLimited("claude", "hard", exp)
	g.pools.markLimited("agy-other", "hard", exp)
	g.pools.markLimited("agy-gemini", "hard", exp)

	// Even when starting past the last tier, an unattempted owed tier must wait rather than defer.
	g.advance("0x00403000", len(g.cfg.Tiers))
	if got := g.fnTier["0x00403000"]; got != 0 {
		t.Fatalf("fnTier waiting on all pools = %d, want 0", got)
	}
	if len(g.pending[0]) != 1 || g.pending[0][0] != "0x00403000" {
		t.Fatalf("pending[0] = %v, want [0x00403000]", g.pending[0])
	}
}

func TestBuildAgentPromptSpillsLargeBriefing(t *testing.T) {
	root := t.TempDir()
	smallPrompt, smallPath := buildAgentPrompt(root, "0x00401000", "Edit only TARGET_CPP.", "gemini-4-hydrogen@low", "TARGET_ASM: nop")
	if smallPath != "" {
		t.Fatalf("small briefing unexpectedly spilled to %q", smallPath)
	}
	if !strings.Contains(smallPrompt, "TARGET_ASM: nop") {
		t.Fatal("small prompt missing inline briefing")
	}

	huge := strings.Repeat("A", maxArgPromptBytes+1024)
	bigPrompt, bigPath := buildAgentPrompt(root, "0x0076EBB0", "Edit only TARGET_CPP.", "gemini-4-hydrogen@low", huge)
	if bigPath == "" {
		t.Fatal("large briefing did not spill to file")
	}
	if len(bigPrompt) > maxArgPromptBytes {
		t.Fatalf("spilled prompt still too large: %d bytes", len(bigPrompt))
	}
	if !strings.Contains(bigPrompt, ".local/briefings/") {
		t.Fatalf("spilled prompt missing briefing file path: %q", bigPrompt)
	}
	got, err := os.ReadFile(bigPath)
	if err != nil || string(got) != huge {
		t.Fatalf("briefing file mismatch: err=%v len=%d", err, len(got))
	}
}
