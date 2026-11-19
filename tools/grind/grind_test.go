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
