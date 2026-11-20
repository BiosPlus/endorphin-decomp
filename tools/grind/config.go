package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
)

// config mirrors the knobs of the old tools/grind.sh one-for-one (same environment variable names and
// positional arguments), plus AUTO_SOLVE_EVERY.
type config struct {
	MaxWaves, WaveSize, PushEvery int

	AgentTimeout      int      // AGENT_TIMEOUT: per-function agent timeout in seconds (per effort attempt)
	Efforts           []string // AGENT_EFFORTS: per-model effort cadence
	SkipMedBelowPct   float64  // SKIP_MED_BELOW_PCT
	CooldownBaseSecs  int      // COOLDOWN_BASE_SECS
	PreferAgyClaude   bool     // PREFER_AGY_CLAUDE
	DepsFirst         bool     // DEPS_FIRST
	RunAutoSolve      bool     // RUN_AUTO_SOLVE
	AutoSolveEvery    int      // AUTO_SOLVE_EVERY: re-run auto_solve after this many finished functions (0 = only at start)
	RetryDeferred     bool     // RETRY_DEFERRED
	MaxSize           int      // MAX_SIZE
	IgnoreAttempts    bool     // IGNORE_ATTEMPTS
	StatusOnMatch     bool     // STATUS_ON_MATCH
	WorkIsolated      bool     // WORK_ISOLATED
	PerFileCap        int      // PER_FILE_CAP
	EscCap            int      // ESC_CAP
	ModelCaps         map[string]int
	EscBacklogFactor  int
	ModelMinSize      map[string]int
	AdaptiveChain     bool
	RouteMinTrials    string
	RouteMinYield     string
	Tiers             [][]string // MODEL_TIERS
	LimitProbeSecs    int
	LimitProbeMaxSecs int
	Verbose           bool // GRIND_VERBOSE
	Plain             bool // GRIND_PLAIN
	DashEventRows     int
	AttemptsFile      string
	ResultsLog        string
	EventsLog         string
}

func envStr(k, def string) string {
	if v, ok := os.LookupEnv(k); ok && v != "" {
		return v
	}
	return def
}

func envInt(k string, def int) int {
	if v, err := strconv.Atoi(envStr(k, "")); err == nil {
		return v
	}
	return def
}

func envBool(k string, def bool) bool {
	switch envStr(k, "") {
	case "1":
		return true
	case "0":
		return false
	}
	return def
}

func parseKV(s string) map[string]int {
	out := map[string]int{}
	for _, part := range strings.Split(s, ",") {
		if k, v, ok := strings.Cut(strings.TrimSpace(part), "="); ok {
			if n, err := strconv.Atoi(v); err == nil {
				out[k] = n
			}
		}
	}
	return out
}

func loadConfig(args []string) (*config, error) {
	pos := func(i, def int) (int, error) {
		if i < len(args) {
			n, err := strconv.Atoi(args[i])
			if err != nil {
				return 0, fmt.Errorf("argument %d (%q) is not a number", i+1, args[i])
			}
			return n, nil
		}
		return def, nil
	}
	c := &config{}
	var err error
	if c.MaxWaves, err = pos(0, 50); err != nil {
		return nil, err
	}
	if c.WaveSize, err = pos(1, 5); err != nil {
		return nil, err
	}
	if c.PushEvery, err = pos(2, 5); err != nil {
		return nil, err
	}
	c.AgentTimeout = envInt("AGENT_TIMEOUT", 360)
	c.Efforts = strings.Fields(envStr("AGENT_EFFORTS", envStr("AGENT_EFFORT", "low medium")))
	c.SkipMedBelowPct, _ = strconv.ParseFloat(envStr("SKIP_MED_BELOW_PCT", "0"), 64)
	c.CooldownBaseSecs = envInt("COOLDOWN_BASE_SECS", 180)
	c.PreferAgyClaude = envBool("PREFER_AGY_CLAUDE", true) // sonnet/opus: agy first, claude harness when agy quota cools down
	c.DepsFirst = envBool("DEPS_FIRST", true)
	c.RunAutoSolve = envBool("RUN_AUTO_SOLVE", true)
	c.AutoSolveEvery = envInt("AUTO_SOLVE_EVERY", 25)
	c.RetryDeferred = envBool("RETRY_DEFERRED", false)
	c.MaxSize = envInt("MAX_SIZE", 65535)
	c.IgnoreAttempts = envBool("IGNORE_ATTEMPTS", false)
	c.StatusOnMatch = envBool("STATUS_ON_MATCH", false)
	c.WorkIsolated = envBool("WORK_ISOLATED", true)
	c.PerFileCap = envInt("PER_FILE_CAP", 10)
	if !c.WorkIsolated {
		c.PerFileCap = 1
	}
	c.EscCap = envInt("ESC_CAP", 2)
	c.ModelCaps = parseKV(envStr("MODEL_CAPS", ""))
	c.EscBacklogFactor = envInt("ESC_BACKLOG_FACTOR", 4)
	c.ModelMinSize = parseKV(envStr("MODEL_MIN_SIZE", ""))
	c.AdaptiveChain = envBool("ADAPTIVE_CHAIN", true)
	c.RouteMinTrials = envStr("ROUTE_MIN_TRIALS", "20")
	c.RouteMinYield = envStr("ROUTE_MIN_YIELD", "0.05")
	for _, t := range strings.Split(envStr("MODEL_TIERS",
		"claude-haiku-5.5|claude-sonnet-5.5|gemini-4-hydrogen|claude-opus-5.5 gemini-4-neon|gemini-4-carbon"), "|") {
		if f := strings.Fields(t); len(f) > 0 {
			c.Tiers = append(c.Tiers, f)
		}
	}
	if len(c.Tiers) == 0 {
		return nil, fmt.Errorf("MODEL_TIERS is empty")
	}
	c.LimitProbeSecs = envInt("LIMIT_PROBE_SECS", 900)
	c.LimitProbeMaxSecs = envInt("LIMIT_PROBE_MAX_SECS", 3600)
	c.Verbose = envBool("GRIND_VERBOSE", false)
	c.Plain = envBool("GRIND_PLAIN", false)
	c.DashEventRows = envInt("DASH_EVENT_ROWS", 8)
	c.AttemptsFile = envStr("GRIND_ATTEMPTS_FILE", ".local/grind_attempts.tsv")
	c.ResultsLog = envStr("GRIND_RESULTS_LOG", ".local/grind_results.log")
	c.EventsLog = envStr("GRIND_EVENTS_LOG", ".local/grind_events.log")
	return c, nil
}

// baseModel strips an optional "agy/" or "claude/" backend pin from a tier entry.
func baseModel(spec string) string {
	if i := strings.IndexByte(spec, '/'); i != -1 {
		return spec[i+1:]
	}
	return spec
}

func pinOf(spec string) string {
	if i := strings.IndexByte(spec, '/'); i != -1 {
		return spec[:i]
	}
	return ""
}
