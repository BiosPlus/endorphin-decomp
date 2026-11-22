package main

import (
	"fmt"
	"math"
	"os"
	"regexp"
	"strconv"
	"strings"
	"sync"
	"time"
)

func poolOf(backend, model string) string {
	switch {
	case backend == "claude":
		return "claude"
	case strings.HasPrefix(model, "gemini-"):
		return "agy-gemini"
	default:
		return "agy-other"
	}
}

var allPools = []string{"claude", "agy-gemini", "agy-other"}

type pools struct {
	mu      sync.Mutex
	until   map[string]time.Time
	strikes map[string]int
	cfg     *config
	emit    func(string, ...any)
}

func newPools(cfg *config, emit func(string, ...any)) *pools {
	return &pools{until: map[string]time.Time{}, strikes: map[string]int{}, cfg: cfg, emit: emit}
}

func (p *pools) coolingDown(pool string) bool {
	p.mu.Lock()
	defer p.mu.Unlock()
	return time.Now().Before(p.until[pool])
}

func (p *pools) resetsAt(pool string) (time.Time, bool) {
	p.mu.Lock()
	defer p.mu.Unlock()
	t := p.until[pool]
	return t, time.Now().Before(t)
}

func (p *pools) healthy(pool string) {
	p.mu.Lock()
	delete(p.strikes, pool)
	p.mu.Unlock()
}

func (p *pools) markLimited(pool, kind string, reset int64) {
	p.mu.Lock()
	now := time.Now()
	if now.Before(p.until[pool]) {
		p.mu.Unlock()
		return
	}
	p.strikes[pool]++
	strikes := p.strikes[pool]
	var wait int
	switch {
	case kind == "hard" && reset > now.Unix():
		wait = int(reset-now.Unix()) + 30
	case kind == "hard":
		wait = p.cfg.LimitProbeSecs * int(math.Pow(2, float64(strikes-1)))
		if wait > p.cfg.LimitProbeMaxSecs {
			wait = p.cfg.LimitProbeMaxSecs
		}
	default:
		wait = p.cfg.CooldownBaseSecs * int(math.Pow(3, float64(strikes-1)))
		if wait > 7200 {
			wait = 7200
		}
	}
	p.until[pool] = now.Add(time.Duration(wait) * time.Second)
	p.mu.Unlock()
	p.emit("[!] %s limit on pool %s (strike %d) — waiting %dm (%d s)", kind, pool, strikes, wait/60, wait)
}

var preambleRe = regexp.MustCompile(`"subtype":"(init|hook_started|hook_response)"|"type":"system"`)

func logBody(path string) string {
	b, err := os.ReadFile(path)
	if err != nil {
		return ""
	}
	var keep []string
	for _, l := range strings.Split(string(b), "\n") {
		if !preambleRe.MatchString(l) {
			keep = append(keep, l)
		}
	}
	return strings.Join(keep, "\n")
}

var (
	rateLimitRe = regexp.MustCompile(`(?i)rate_limit_error|rate limit exceeded|quota exceeded|usage limit|credit balance is too low|HTTP/[0-9.]+ 429|status( code)?[: ]+429|RESOURCE_EXHAUSTED|overloaded_error|hit your.*limit|too many requests`)
	hardLimitRe = regexp.MustCompile(`(?i)usage limit|hit your.*limit|limit reached|quota exceeded|credit balance is too low|RESOURCE_EXHAUSTED`)
	resetEpoch  = regexp.MustCompile(`(?i)limit reached\|([0-9]{10})`)
	resetClock  = regexp.MustCompile(`(?i)resets? (?:at )?([0-9]{1,2}(?::[0-9]{2})? ?[ap]m)`)
	invalidRe   = regexp.MustCompile(`(?i)invalid model selection|unknown model|model.*not found`)
)

func isRateLimitLog(path string) bool { return rateLimitRe.MatchString(logBody(path)) }

func isInvalidModelLog(path string) bool {
	b, _ := os.ReadFile(path)
	return invalidRe.Match(b)
}

func classifyRateLimit(path string) (string, int64) {
	body := logBody(path)
	if !hardLimitRe.MatchString(body) {
		return "soft", 0
	}
	if m := resetEpoch.FindStringSubmatch(body); m != nil {
		v, _ := strconv.ParseInt(m[1], 10, 64)
		return "hard", v
	}
	if m := resetClock.FindStringSubmatch(body); m != nil {
		if t, ok := parseClock(m[1]); ok {
			return "hard", t
		}
	}
	return "hard", 0
}

func parseClock(s string) (int64, bool) {
	s = strings.ToLower(strings.ReplaceAll(s, " ", ""))
	for _, layout := range []string{"3:04pm", "3pm"} {
		if t, err := time.ParseInLocation(layout, s, time.Local); err == nil {
			now := time.Now()
			at := time.Date(now.Year(), now.Month(), now.Day(), t.Hour(), t.Minute(), 0, 0, time.Local)
			if !at.After(now) {
				at = at.Add(24 * time.Hour)
			}
			return at.Unix(), true
		}
	}
	return 0, false
}

func fmtDur(s int64) string {
	switch {
	case s >= 3600:
		return fmt.Sprintf("%dh%02dm%02ds", s/3600, s%3600/60, s%60)
	case s >= 60:
		return fmt.Sprintf("%dm%02ds", s/60, s%60)
	default:
		return fmt.Sprintf("%ds", s)
	}
}
