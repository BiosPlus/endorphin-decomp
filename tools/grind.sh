#!/usr/bin/env bash
set -uo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"

MAX_WAVES="${1:-50}"                    # Number of parallel waves to run before stopping
WAVE_SIZE="${2:-5}"                     # Parallel functions per wave (1 dedicated agent per function try)
PUSH_EVERY="${3:-5}"                    # Run git push every N waves
AGENT_TIMEOUT="${AGENT_TIMEOUT:-360}"   # Per-function agent timeout in seconds (per effort attempt)
AGENT_EFFORTS="${AGENT_EFFORTS:-${AGENT_EFFORT:-low medium}}" # Per-model effort cadence (low -> medium before next model)
SKIP_MED_BELOW_PCT="${SKIP_MED_BELOW_PCT:-0}" # Skip medium effort on same model if low-effort best match % is >0 and below this (0 disables)
COOLDOWN_BASE_SECS="${COOLDOWN_BASE_SECS:-180}" # Initial rate-limit cooldown (3m -> 9m -> 27m)
PREFER_AGY_CLAUDE="${PREFER_AGY_CLAUDE:-0}"     # Set to 1 to prefer AGY for Sonnet/Opus before native claude CLI
DEPS_FIRST="${DEPS_FIRST:-1}"                  # 1 = prefer functions whose callees are already matched
RUN_AUTO_SOLVE="${RUN_AUTO_SOLVE:-1}"          # 1 = run auto_solve pre-pass before LLM waves
RETRY_DEFERRED="${RETRY_DEFERRED:-0}"          # 1 = also queue previously deferred functions (skips models that already failed them)
MAX_SIZE="${MAX_SIZE:-65535}"                  # Maximum function byte size to pull from work next
IGNORE_ATTEMPTS="${IGNORE_ATTEMPTS:-0}"        # 1 = ignore .local/grind_attempts.tsv history
# 0 = defer `status -readme` until right before `git push` and session end (exports WORK_SKIP_README=1 for `work`
# so per-match `work commit-pending` skips regenerating README.md); 1 = regenerate README.md on every match.
STATUS_ON_MATCH="${STATUS_ON_MATCH:-0}"
if [[ "$STATUS_ON_MATCH" == 0 ]]; then
  export WORK_SKIP_README=1
fi
export WORK_ISOLATED="${WORK_ISOLATED:-1}"
# Pipeline: tier 0 runs on EVERY function with WAVE_SIZE concurrent runners. A function moves up a tier only once every model in its tier has failed it.
# Each model has its own concurrency cap (tier 0: WAVE_SIZE; later tiers: ESC_CAP unless overridden below).
ESC_CAP="${ESC_CAP:-2}"
MODEL_CAPS="${MODEL_CAPS:-}"                    # e.g. claude-opus-5.5=1,gemini-4-argon=1
ESC_BACKLOG_FACTOR="${ESC_BACKLOG_FACTOR:-4}"   # pause pulling new tier-0 work if > FACTOR*WAVE_SIZE functions are waiting on escalations
# Optional minimum function size (bytes) per model, e.g. "claude-opus-5.5=128,gemini-4-argon=128". Off by default:
# any function that fails the cheaper models escalates all the way up regardless of size.
MODEL_MIN_SIZE="${MODEL_MIN_SIZE:-}"
# Adaptive chain: skip an escalation stage whose measured yield (from .local/grind_results.log + grind_attempts.tsv, per
# function-size band) is below ROUTE_MIN_YIELD once it has >= ROUTE_MIN_TRIALS trials. Stage 0 is never skipped. Set 0 to disable.
ADAPTIVE_CHAIN="${ADAPTIVE_CHAIN:-1}"
ROUTE_MIN_TRIALS="${ROUTE_MIN_TRIALS:-20}"
ROUTE_MIN_YIELD="${ROUTE_MIN_YIELD:-0.05}"

# Model tiers, cheapest first. Every model in a tier gets one real attempt at a function before it moves up a tier, and
# within a tier a function goes to whichever owed model is free and not rate-limited (spreads load across all 3 quota pools
# right from tier 0: claude, agy-gemini, and agy-other). Prefix an entry with "agy/" or "claude/" to pin it to one backend.
# Override with MODEL_TIERS="modelA modelB|modelC modelD|modelE" ("|" separates tiers).
MODEL_TIERS="${MODEL_TIERS:-claude-haiku-5.5 gemini-3.8-flash gemini-4-hydrogen agy/claude-sonnet-5.5|gemini-4-argon claude-opus-5.5|gemini-4-carbon}"
# Quota pools. Each has its own 5h usage window, so a limit hit cools down the whole pool, not just one model:
#   claude     = native claude CLI (haiku/sonnet/opus)      agy-gemini = every gemini-* model on agy
#   agy-other  = everything else on agy (claude models)
# Hard usage limits (not transient 429s) use LIMIT_PROBE_SECS (doubling, capped at LIMIT_PROBE_MAX_SECS) unless the CLI
# prints a reset time we can parse.
LIMIT_PROBE_SECS="${LIMIT_PROBE_SECS:-900}"
LIMIT_PROBE_MAX_SECS="${LIMIT_PROBE_MAX_SECS:-3600}"
MODEL_CHAIN=()                 # flat list, tier order
declare -A MODEL_IDX=() MODEL_TIER=()
TIER_MODELS=()                 # tier index -> space-separated models
IFS='|' read -ra _tiers <<< "$MODEL_TIERS"
for _ti in "${!_tiers[@]}"; do
  TIER_MODELS[$_ti]="${_tiers[$_ti]}"
  for _m in ${_tiers[$_ti]}; do MODEL_IDX[$_m]=${#MODEL_CHAIN[@]}; MODEL_TIER[$_m]=$_ti; MODEL_CHAIN+=("$_m"); done
done
NUM_TIERS="${#TIER_MODELS[@]}"

# Ensure git pre-commit security hook is installed if .git/hooks is writable
if [[ -f "$REPO_ROOT/tools/pre-commit" && -w "$REPO_ROOT/.git/hooks" ]]; then
  cp -f "$REPO_ROOT/tools/pre-commit" "$REPO_ROOT/.git/hooks/pre-commit" 2>/dev/null || true
  chmod +x "$REPO_ROOT/.git/hooks/pre-commit" 2>/dev/null || true
fi

# Pre-compile Go tools into .local/bin/ to avoid repeated `go run` compilations across parallel workers
mkdir -p "$REPO_ROOT/.local/bin"
build_tool_if_needed() {
  local name="$1"
  local bin="$REPO_ROOT/.local/bin/$name"
  # Rebuild if any .go file in the tool dir is newer than the binary (tools may span several files)
  if [[ ! -x "$bin" || -n "$(find "$REPO_ROOT/tools/$name" "$REPO_ROOT/internal" -name '*.go' -newer "$bin" -print -quit)" ]]; then
    echo "[*] Building fast binary: .local/bin/$name ..."
    go build -o "$bin" "./tools/$name"
  fi
}
build_tool_if_needed "work"
build_tool_if_needed "status"
build_tool_if_needed "build_and_match"

WORK_BIN="$REPO_ROOT/.local/bin/work"
STATUS_BIN="$REPO_ROOT/.local/bin/status"
BAM_BIN="$REPO_ROOT/.local/bin/build_and_match"

# Start persistent wineserver (5 min idle persistence) so parallel MSVC8 cl.exe calls don't pay Wine startup cost
if command -v wineserver >/dev/null 2>&1 && [[ -d "$REPO_ROOT/.local/msvc8" ]]; then
  export WINEPREFIX="$REPO_ROOT/.local/wine_msvc8"
  export WINEDEBUG="-all"
  wineserver -p300 >/dev/null 2>&1 || true
fi

# Verify CLIs are genuinely runnable (not broken wrapper shims)
HAS_CLAUDE=0
HAS_CLAUDE_EFFORT=0
HAS_AGY=0
if command -v claude >/dev/null 2>&1 && claude --version >/dev/null 2>&1; then
  HAS_CLAUDE=1
  claude --help 2>&1 | grep -q -- '--effort' && HAS_CLAUDE_EFFORT=1
fi
if command -v agy >/dev/null 2>&1 && agy --help >/dev/null 2>&1; then
  HAS_AGY=1
fi

if [[ "${GRIND_VERBOSE:-0}" == 1 ]]; then
echo "=== Endorphin Autonomous Parallel Grinder (1 Agent / Function Try) ==="
echo "Verified CLIs : claude=$HAS_CLAUDE | agy=$HAS_AGY | efforts=${AGENT_EFFORTS// /->}"
echo "Pipeline      : tier0 runners=$WAVE_SIZE (tries every function) | escalation cap=${ESC_CAP}/model | total_pulls=$((MAX_WAVES*WAVE_SIZE)) | push_every=$((PUSH_EVERY*WAVE_SIZE)) | timeout=${AGENT_TIMEOUT}s"
echo "Model Tiers   : ${MODEL_TIERS//|/  ->  }"
echo "Policy        : each model tries ${AGENT_EFFORTS// / -> } in order; if a model fails entirely, next model in tier tries; if tier fails, moves up a tier"
echo "Security Mode : Scoped Allowlist + Sandbox + PreToolUse Guard [NO skip-dangerously]"
else
  echo "Endorphin grinder: tier0 x$WAVE_SIZE, escalation cap ${ESC_CAP}/model, ${MAX_WAVES} waves, efforts ${AGENT_EFFORTS// /->}, timeout ${AGENT_TIMEOUT}s  (claude=$HAS_CLAUDE agy=$HAS_AGY; GRIND_VERBOSE=1 for details)"
fi

if [[ $HAS_CLAUDE -eq 0 && $HAS_AGY -eq 0 ]]; then
  echo "Error: Neither a working 'claude' nor 'agy' CLI was found in PATH."
  exit 1
fi

# Inline session-only least-privilege settings for `agy` (never saved to disk, no extra dotfiles required).
# NOTE: agy converts write_file/edit_file allow/deny entries into sandbox readwrite/readonly paths, and the sandbox rejects
# globs ("globs not supported") and relative paths ("non-absolute file path"). Any such entry makes EVERY sandboxed shell
# command fail to launch, so use absolute, glob-free directories here. build/units must stay writable: `work check` records
# matches there (.git stays read-only; the host runs `work commit-pending`).
AGY_INLINE_SETTINGS='{"agentMode":"auto","enableTerminalSandbox":true,"toolPermission":"proceed-in-sandbox","permissions":{"allow":["read_file(*)","write_file('"$REPO_ROOT"'/src)","write_file('"$REPO_ROOT"'/include)","write_file('"$REPO_ROOT"'/build/units)","write_file('"$REPO_ROOT"'/.local)","edit_file('"$REPO_ROOT"'/src)","edit_file('"$REPO_ROOT"'/include)","command(./.local/bin/work*)","command(go run ./tools/work*)","command(./.local/bin/status*)","command(go run ./tools/status*)","command(./.local/bin/build_and_match*)","command(./tools/cl_wine.sh*)","command(git status*)","command(git diff*)","command(git log*)","command(git show*)","command(git add*)","command(git commit*)","command(git checkout*)"],"deny":["write_file('"$REPO_ROOT"'/docs)","command(sudo*)","command(rm -rf*)","command(python*)","command(curl*)","command(wget*)"]}}'

# Per-backend cooldown tracking, kept in files so every concurrent worker subshell shares one view.
# $STATE_DIR/cd.<pool>  = epoch seconds when that quota pool becomes eligible again (pools: see MODEL_TIERS above)
# $STATE_DIR/st.<pool>  = strike count (reset when a run on the pool finishes without hitting a limit)
STATE_DIR="$(mktemp -d /tmp/endorphin_grind_state.XXXXXX)"

# ---- Event log + live dashboard ----------------------------------------------------------------------
# Every status message goes through emit() into $EVENTS (workers run in subshells, so a file is the shared channel).
# On a terminal the main loop redraws a dashboard in place and shows the latest events inside it; when stdout is not a
# TTY (or GRIND_PLAIN=1) the events are printed as ordinary lines instead. The full event history is appended to
# .local/grind_events.log when the session ends.
EVENTS="$STATE_DIR/events"
EVENTS_HISTORY="${GRIND_EVENTS_LOG:-$REPO_ROOT/.local/grind_events.log}"
: > "$EVENTS"
DASH=0
[[ -t 1 && "${GRIND_PLAIN:-0}" != 1 && "${TERM:-dumb}" != dumb ]] && DASH=1
DASH_EVENT_ROWS="${DASH_EVENT_ROWS:-8}"
trap 'cat "$EVENTS" >> "$EVENTS_HISTORY" 2>/dev/null; rm -rf "$STATE_DIR"' EXIT

emit() { printf '%(%T)T %s\n' -1 "$*" >> "$EVENTS"; }

fmt_dur() {   # seconds -> 1h02m03s / 4m05s / 6s
  local s="${1:-0}"
  if (( s >= 3600 )); then printf '%dh%02dm%02ds' $((s/3600)) $((s%3600/60)) $((s%60))
  elif (( s >= 60 )); then printf '%dm%02ds' $((s/60)) $((s%60))
  else printf '%ds' "$s"; fi
}

_state_key() { echo "${1//[^A-Za-z0-9._-]/_}"; }

is_backend_cooling_down() {
  local k; k="$(_state_key "$1")"
  local now until=0
  now="$(date +%s)"
  [[ -f "$STATE_DIR/cd.$k" ]] && until="$(cat "$STATE_DIR/cd.$k" 2>/dev/null || echo 0)"
  (( now < until ))
}

# Quota pool a backend+model draws from (each pool has its own usage window)
pool_of() {   # $1=backend $2=model
  if [[ "$1" == claude ]]; then echo claude
  elif [[ "$2" == gemini-* ]]; then echo agy-gemini
  else echo agy-other; fi
}

# $1=pool $2=kind (hard|soft) $3=reset epoch parsed from the CLI output (0 = unknown)
mark_rate_limited() {
  local pool="$1" kind="${2:-soft}" reset="${3:-0}"
  local k; k="$(_state_key "$pool")"
  # Several workers can hit the same limit at once: count only one strike per cooldown episode
  if is_backend_cooling_down "$pool"; then
    return
  fi
  local strikes=0 now wait_secs
  now="$(date +%s)"
  [[ -f "$STATE_DIR/st.$k" ]] && strikes="$(cat "$STATE_DIR/st.$k" 2>/dev/null || echo 0)"
  ((strikes++))
  echo "$strikes" > "$STATE_DIR/st.$k"

  if [[ "$kind" == hard && "$reset" =~ ^[0-9]+$ ]] && (( reset > now )); then
    wait_secs=$(( reset - now + 30 ))                # wait for the window the CLI told us about
  elif [[ "$kind" == hard ]]; then
    wait_secs=$(( LIMIT_PROBE_SECS * (2 ** (strikes - 1)) ))   # 5h window, unknown reset: probe now and then
    (( wait_secs > LIMIT_PROBE_MAX_SECS )) && wait_secs=$LIMIT_PROBE_MAX_SECS
  else
    wait_secs=$(( COOLDOWN_BASE_SECS * (3 ** (strikes - 1)) ))   # transient 429/overloaded: 3m, 9m, 27m, then 2h
    (( wait_secs > 7200 )) && wait_secs=7200
  fi
  echo $(( now + wait_secs )) > "$STATE_DIR/cd.$k"
  emit "[!] $kind limit on pool $pool (strike $strikes) — waiting $((wait_secs / 60))m ($wait_secs s)"
}

# Print "<hard|soft> <reset_epoch|0>" for a rate-limited agent log. Hard = a usage/quota window; soft = transient 429/overload.
# Reset time is parsed best-effort from "|<epoch>" or "resets <time>" in the CLI's message.
classify_rate_limit() {
  local log_file="$1" body kind=soft reset=0 t
  body="$(grep -vE '"subtype":"(init|hook_started|hook_response)"|"type":"system"' "$log_file" 2>/dev/null)"
  grep -qiE "usage limit|hit your.*limit|limit reached|quota exceeded|credit balance is too low|RESOURCE_EXHAUSTED" <<< "$body" && kind=hard
  if [[ "$kind" == hard ]]; then
    reset="$(grep -oiE 'limit reached\|[0-9]{10}' <<< "$body" | head -n1 | grep -oE '[0-9]{10}$')"
    if [[ -z "$reset" ]]; then
      t="$(grep -oiE 'resets? (at )?[0-9]{1,2}(:[0-9]{2})? ?[ap]m' <<< "$body" | head -n1 | sed -E 's/^resets? (at )?//I')"
      [[ -n "$t" ]] && reset="$(date -d "$t" +%s 2>/dev/null || echo 0)"
      # a bare clock time already past today means tomorrow
      [[ "$reset" =~ ^[0-9]+$ ]] && (( reset > 0 && reset <= $(date +%s) )) && reset=$(( reset + 86400 ))
    fi
  fi
  echo "$kind ${reset:-0}"
}

# Check whether a specific backend ("claude" or "agy") can run a base model right now.
backend_usable_for_model() {
  local backend="$1" model_choice="$2"
  case "$backend" in
    claude)
      [[ "$model_choice" == claude-* && $HAS_CLAUDE -eq 1 ]] && ! is_backend_cooling_down claude
      ;;
    agy)
      [[ "$model_choice" != claude-haiku-5.5 && $HAS_AGY -eq 1 ]] && ! is_backend_cooling_down "$(pool_of agy "$model_choice")"
      ;;
    *)
      return 1
      ;;
  esac
}

# Resolve which CLI backend ("claude" or "agy") to use for a tier entry ("<model>" or "<backend>/<model>").
# Note: claude-sonnet-5.5 and claude-opus-5.5 are available on BOTH claude and agy; claude-haiku-5.5 is claude-only.
# An explicit "<backend>/" prefix (e.g. "agy/claude-sonnet-5.5") pins that entry strictly to that backend so it never
# falls back to or drains another quota pool. Availability is per quota pool (pool_of), not per model.
resolve_backend_for_model() {
  local spec="$1" pin="" model_choice
  [[ "$spec" == */* ]] && pin="${spec%%/*}"
  model_choice="${spec#*/}"

  if [[ -n "$pin" ]]; then
    if backend_usable_for_model "$pin" "$model_choice"; then
      echo "$pin"
      return
    fi
    echo "none"
    return
  fi

  case "$model_choice" in
    claude-haiku-5.5)
      backend_usable_for_model claude "$model_choice" && { echo "claude"; return; }
      ;;
    claude-sonnet-5.5|claude-opus-5.5)
      if [[ "$PREFER_AGY_CLAUDE" -eq 1 ]]; then
        backend_usable_for_model agy "$model_choice" && { echo "agy"; return; }
        backend_usable_for_model claude "$model_choice" && { echo "claude"; return; }
      else
        backend_usable_for_model claude "$model_choice" && { echo "claude"; return; }
        backend_usable_for_model agy "$model_choice" && { echo "agy"; return; }
      fi
      ;;
    gemini-3.8-flash|gemini-4-hydrogen|gemini-4-argon|gemini-4-carbon)
      backend_usable_for_model agy "$model_choice" && { echo "agy"; return; }
      ;;
  esac
  echo "none"
}

is_rate_limit_log() {
  local log_file="$1"
  # stream-json logs start with a huge init/hook preamble (tool and skill descriptions); only scan the real events
  grep -vE '"subtype":"(init|hook_started|hook_response)"|"type":"system"' "$log_file" | grep -qiE "rate_limit_error|rate limit exceeded|quota exceeded|usage limit|credit balance is too low|HTTP/[0-9.]+ 429|status( code)?[: ]+429|RESOURCE_EXHAUSTED|overloaded_error|hit your.*limit|too many requests"
}

is_invalid_model_log() {
  local log_file="$1"
  grep -qiE "invalid model selection|unknown model|model.*not found" "$log_file"
}

# Run a command with its pid (== process group id, since `timeout` makes itself a group leader) recorded in
# $STATE_DIR/pg.*, so an interrupt can kill every agent group even after the worker subshells are gone.
launch_tracked() {
  local pf="$STATE_DIR/pg.$BASHPID.$RANDOM" rc=0
  bash -c 'echo $$ > "$1"; shift; exec "$@"' _ "$pf" "$@" || rc=$?
  rm -f "$pf"
  return $rc
}

run_agy_with_model() {
  local agy_model="$1"
  local agy_effort="$2"
  local prompt="$3"
  local log_file="$4"

  launch_tracked timeout --kill-after=20s "${AGENT_TIMEOUT_EFF:-$AGENT_TIMEOUT}s" \
    agy --model "$agy_model" \
    --effort "$agy_effort" \
    --mode auto \
    --sandbox \
    --settings "$AGY_INLINE_SETTINGS" \
    --print-timeout "${AGENT_TIMEOUT_EFF:-$AGENT_TIMEOUT}s" \
    -p "$prompt" >"$log_file" 2>&1
}

# Try candidate agy model slugs in order for a given effort and cache the first accepted slug in $STATE_DIR/slug.<key>.
run_agy_first_valid_slug() {
  local key="$1" effort="$2" prompt="$3" log_file="$4"; shift 4
  local cached="" slug rc=0
  [[ -f "$STATE_DIR/slug.$key" ]] && cached="$(cat "$STATE_DIR/slug.$key" 2>/dev/null || true)"
  if [[ -n "$cached" ]]; then
    run_agy_with_model "$cached" "$effort" "$prompt" "$log_file" || rc=$?
    if ! is_invalid_model_log "$log_file"; then
      return $rc
    fi
    rm -f "$STATE_DIR/slug.$key"
  fi
  for slug in "$@"; do
    [[ "$slug" == "$cached" ]] && continue
    rc=0
    run_agy_with_model "$slug" "$effort" "$prompt" "$log_file" || rc=$?
    if ! is_invalid_model_log "$log_file"; then
      echo "$slug" > "$STATE_DIR/slug.$key"
      return $rc
    fi
  done
  return $rc
}

# Run a single dedicated agent on a single function address using the chosen base model, effort, and backend
run_single_function_agent() {
  local model_choice="$1"
  local effort="$2"
  local backend="$3"
  local addr="$4"
  local log_file="$5"

  export DECOMP_EFFORT="$effort"
  export DECOMP_MODEL="${model_choice}@${effort}"

  local briefing prompt
  briefing="$("$WORK_BIN" claim "$addr" 2>/dev/null || true)"
  if [[ -n "$briefing" ]]; then
    prompt="You are assigned a single function: ${addr} (already claimed below).
Rules:
- C++03 only. Edit only TARGET_CPP (and include/ if needed). Keep // [VA] and fn_XXXXXXXX intact.
- Use HEADER_PREVIEW and SUGGESTED_EXTERNS; if SIMILAR_MATCHED is present, treat solved neighbors as hints for the C++ idiom; if PRIOR_ATTEMPTS is present, use it to avoid dead ends (never search for earlier source).
- Switch to __declspec(naked) __asm after 3-4 failed C++03 tries.
- Verify with: ./.local/bin/work check ${addr} --model ${DECOMP_MODEL}
- Max 10 tries; stop immediately as soon as ${addr} matches or after 10 tries.
- Do NOT run work next, work claim, or work skip, and do NOT touch any other function, HTML files, or build/units.json.

${briefing}"
  else
    prompt="Read CLAUDE.md. You are assigned a single function: ${addr}. Run './.local/bin/work claim ${addr}' and match ${addr} using './.local/bin/work check ${addr} --model ${DECOMP_MODEL}'. Use HEADER_PREVIEW and SUGGESTED_EXTERNS from the claim output; if SIMILAR_MATCHED is present, treat those solved neighbors as a hint for the C++ idiom (identical-shape ones usually differ only in constants, offsets and call targets). If PRIOR_ATTEMPTS is present, it lists facts about earlier failed checks on this function (where the output diverged, what the compiler emitted); use it to avoid dead ends, but do not assume the earlier approach was close, and never go looking for the earlier source. Iterate up to 10 tries (switch to __declspec(naked) __asm after 3-4 failed C++03 tries). Stop immediately as soon as ${addr} matches or after 10 tries. Do NOT run work next, do NOT call work skip, and do NOT touch any other function, HTML files, or build/units.json."
  fi

  local exit_code=0
  if [[ "$backend" == "claude" ]]; then
    local claude_alias="haiku"
    case "$model_choice" in
      claude-haiku-5.5)  claude_alias="haiku" ;;
      claude-sonnet-5.5) claude_alias="sonnet" ;;
      claude-opus-5.5)   claude_alias="opus" ;;
    esac
    local -a claude_effort_args=()
    [[ $HAS_CLAUDE_EFFORT -eq 1 ]] && claude_effort_args=(--effort "$effort")
    export CLAUDE_CODE_EFFORT_LEVEL="$effort"

    launch_tracked timeout --kill-after=20s "${AGENT_TIMEOUT_EFF:-$AGENT_TIMEOUT}s" \
      claude --model "$claude_alias" \
      "${claude_effort_args[@]}" \
      --permission-mode acceptEdits \
      --output-format stream-json --verbose \
      --allowedTools \
        "Read" "Grep" "Glob" \
        "Edit(src/**)" "Edit(include/**)" "Write(src/**)" "Write(include/**)" \
        "Bash(./.local/bin/work*)" "Bash(go run ./tools/work*)" \
        "Bash(./.local/bin/status*)" "Bash(go run ./tools/status*)" \
        "Bash(./.local/bin/build_and_match*)" "Bash(go run ./tools/build_and_match*)" \
        "Bash(./tools/cl_wine.sh*)" \
        "Bash(git status*)" "Bash(git diff*)" "Bash(git log*)" "Bash(git show*)" \
        "Bash(git add*)" "Bash(git commit*)" "Bash(git checkout -- src/*)" \
      -p "$prompt" >"$log_file" 2>&1 || exit_code=$?
  else
    case "$model_choice" in
      gemini-3.8-flash)
        run_agy_with_model "gemini-3.8-flash" "$effort" "$prompt" "$log_file" || exit_code=$?
        ;;
      gemini-4-hydrogen)
        run_agy_with_model "gemini-4-hydrogen" "$effort" "$prompt" "$log_file" || exit_code=$?
        ;;
      claude-sonnet-5.5)
        run_agy_first_valid_slug "sonnet.${effort}" "$effort" "$prompt" "$log_file" \
          "claude-sonnet-5-5" "claude-sonnet-5-5-${effort}" "claude-sonnet-5.5" "claude-sonnet-5-5@default" "claude-sonnet-4-6@default" || exit_code=$?
        ;;
      claude-opus-5.5)
        run_agy_first_valid_slug "opus.${effort}" "$effort" "$prompt" "$log_file" \
          "claude-opus-5-5" "claude-opus-5-5-${effort}" "claude-opus-5.5" "claude-opus-5-5@default" "claude-opus-4-6@default" || exit_code=$?
        ;;
      gemini-4-argon)
        run_agy_with_model "gemini-4-argon" "$effort" "$prompt" "$log_file" || exit_code=$?
        ;;
      gemini-4-carbon)
        run_agy_with_model "gemini-4-carbon" "$effort" "$prompt" "$log_file" || exit_code=$?
        ;;
    esac
  fi

  if "$WORK_BIN" is-matched "$addr" >/dev/null 2>&1; then
    # Ensure individual commit is recorded immediately on the host (e.g. if agent ran inside read-only .git sandbox)
    "$WORK_BIN" commit-pending >/dev/null 2>&1 || true
  else
    if is_rate_limit_log "$log_file"; then
      classify_rate_limit "$log_file" > "$STATE_DIR/rl.$addr"
      return 42
    fi
  fi
  return $exit_code
}

# ---- Stage configuration ---------------------------------------------------------------------------
# The models form a tiered pipeline. Tier 0 tries EVERY function (WAVE_SIZE runners in total across its models; each tier-0
# model may use up to WAVE_SIZE of them). A function is owed one real attempt from each model in its current tier and goes to
# whichever owed model is free and not rate-limited; once every model in the tier has failed it, it moves up a tier.
# Later tiers have a small per-model concurrency cap, so escalations never starve tier 0.
declare -A MODEL_CAP=()
declare -A MODEL_MIN=()
IFS=',' read -ra _mins <<< "$MODEL_MIN_SIZE"
for _c in "${_mins[@]}"; do
  [[ "$_c" == *=* ]] && MODEL_MIN["${_c%%=*}"]="${_c#*=}"
done
IFS=',' read -ra _caps <<< "$MODEL_CAPS"
for _c in "${_caps[@]}"; do
  [[ "$_c" == *=* ]] && MODEL_CAP["${_c%%=*}"]="${_c#*=}"
done

stage_cap() {
  local idx="$1" spec="${MODEL_CHAIN[$1]}" base cap
  base="${spec#*/}"
  cap="${MODEL_CAP[$spec]:-${MODEL_CAP[$base]:-}}"
  if (( ${MODEL_TIER[$spec]} == 0 )) && [[ -z "$cap" ]]; then echo "$WAVE_SIZE"; return; fi
  cap="${cap:-$ESC_CAP}"
  (( cap < 1 )) && cap=1
  echo "$cap"
}

# ---- Attempt history: (addr, model) pairs that already failed, so later sessions skip them ----
ATTEMPTS_FILE="${GRIND_ATTEMPTS_FILE:-$REPO_ROOT/.local/grind_attempts.tsv}"
declare -A FAILED_ATTEMPTS=()
if [[ "$IGNORE_ATTEMPTS" != 1 && -f "$ATTEMPTS_FILE" ]]; then
  while IFS=$'\t' read -r _fa_addr _fa_tag || [[ -n "$_fa_addr" ]]; do
    [[ -n "$_fa_addr" && -n "$_fa_tag" ]] && FAILED_ATTEMPTS["${_fa_addr}"$'\t'"${_fa_tag}"]=1
  done < "$ATTEMPTS_FILE"
fi
already_failed() {
  [[ "$IGNORE_ATTEMPTS" == 1 ]] && return 1
  [[ -n "${FAILED_ATTEMPTS[$1$'\t'$2]:-}" ]]
}
record_failure() {
  FAILED_ATTEMPTS["$1"$'\t'"$2"]=1
  printf '%s\t%s\n' "$1" "$2" >> "$ATTEMPTS_FILE" 2>/dev/null || true
}

# Append one line per finished function: time, addr, size, outcome, winning model, seconds taken
RESULTS_LOG="${GRIND_RESULTS_LOG:-$REPO_ROOT/.local/grind_results.log}"
log_result() {
  local addr="$1" size="$2" outcome="$3" model="$4" start="$5"
  printf '%s\t%s\t%sB\t%s\t%s\t%ss\n' "$(date '+%F %T')" "$addr" "$size" "$outcome" "$model" "$(( $(date +%s) - start ))" >> "$RESULTS_LOG" 2>/dev/null || true
}

# ---- Adaptive chain: skip stages with proven-low yield for a function's size band ----
# `work route --machine` prints "<model> <lo> <hi> skip|keep" per size band, computed once per session from the
# results log and attempt history. A band with too little evidence is judged on the model's all-size results, and
# a model with too little evidence overall is kept.
ROUTE_RULES=()
if [[ "$ADAPTIVE_CHAIN" == 1 ]]; then
  mapfile -t ROUTE_RULES < <("$WORK_BIN" route --machine --min-trials "$ROUTE_MIN_TRIALS" --min-yield "$ROUTE_MIN_YIELD" 2>/dev/null || true)
  [[ "${GRIND_VERBOSE:-0}" == 1 ]] && echo "Adaptive chain: ON (skip stage if measured yield < ${ROUTE_MIN_YIELD} over >= ${ROUTE_MIN_TRIALS} trials; ADAPTIVE_CHAIN=0 disables)"
  [[ "${GRIND_VERBOSE:-0}" == 1 ]] && "$WORK_BIN" route --min-trials "$ROUTE_MIN_TRIALS" --min-yield "$ROUTE_MIN_YIELD" 2>/dev/null | sed 's/^/  /' || true
fi

low_yield_stage() {   # $1=model $2=size_bytes ; true if that stage should be skipped for this size
  local m lo hi dec rule
  for rule in "${ROUTE_RULES[@]}"; do
    read -r m lo hi dec <<< "$rule"
    [[ "$m" == "$1" && "$dec" == skip ]] && (( $2 >= lo && $2 < hi )) && return 0
  done
  return 1
}

# True if function $1 still needs an attempt on base model $3 at effort $4 (tier $2).
effort_eligible() {
  local addr="$1" tier="$2" base="$3" effort="$4" tag="${3}@${4}" size="${FUNC_SIZES[$1]:-0}"
  if (( tier > 0 )) && low_yield_stage "$tag" "$size"; then return 1; fi
  already_failed "$addr" "$tag" && return 1
  return 0
}

# One model slot for ONE function: runs the configured effort cadence (low -> medium) on that model in a background subshell.
# Writes "matched <model>@<effort>" | "failed" | "limited" | "unavailable" to $STATE_DIR/res.<addr>.
# "failed" = every eligible effort on this model really tried and did not match (each recorded in the attempts file).
# "limited"/"unavailable" = the quota pool stopped the run: the unfinished effort is NOT recorded against the model, so
# the model stays owed (resuming directly at the unfinished effort once the pool resets).
attempt_worker() {
  local addr="$1" model_idx="$2"
  local model_spec="${MODEL_CHAIN[$model_idx]}" total_steps="${#MODEL_CHAIN[@]}"
  local model_choice="${model_spec#*/}" tier="${MODEL_TIER[$model_spec]}"
  local effort model_tag backend log_file rc next_backend rl_kind rl_reset

  # Larger functions get more time per effort attempt: +1s per 2 bytes, capped at 3x the base timeout
  local extra=$(( ${FUNC_SIZES[$addr]:-0} / 2 )) cap=$(( AGENT_TIMEOUT * 2 ))
  (( extra > cap )) && extra=$cap
  AGENT_TIMEOUT_EFF=$(( AGENT_TIMEOUT + extra ))

  for effort in $AGENT_EFFORTS; do
    effort_eligible "$addr" "$tier" "$model_choice" "$effort" || continue
    model_tag="${model_choice}@${effort}"

    # Retry the same model+effort on an alternate backend (e.g. claude -> agy) if unpinned and the first one is rate-limited
    while true; do
      backend="$(resolve_backend_for_model "$model_spec")"
      if [[ "$backend" == "none" ]]; then
        emit "[!] $addr: $model_spec ($effort) unavailable / cooling down on all allowed backends"
        echo unavailable > "$STATE_DIR/res.$addr"
        return 0
      fi

      emit "[>] $addr (${FUNC_SIZES[$addr]}B): step $((model_idx + 1))/$total_steps $model_tag via $backend"
      log_file="$(mktemp "/tmp/endorphin_${model_choice}_${effort}_${addr}.XXXXXX.log")"
      printf '%s %s %s %s\n' "$model_tag" "$backend" "$(date +%s)" "$log_file" > "$STATE_DIR/run.$addr"
      rc=0
      run_single_function_agent "$model_choice" "$effort" "$backend" "$addr" "$log_file" || rc=$?
      rm -f "$log_file"

      if [[ $rc -ne 42 ]]; then rm -f "$STATE_DIR/st.$(_state_key "$(pool_of "$backend" "$model_choice")")"; fi   # pool is healthy again
      if "$WORK_BIN" is-matched "$addr" >/dev/null 2>&1; then
        emit "[+] MATCHED $addr via $model_tag ($backend) in $(fmt_dur $(( $(date +%s) - ${FN_START[$addr]:-$(date +%s)} )))"
        echo "matched $model_tag" > "$STATE_DIR/res.$addr"
        return 0
      fi

      emit "[-] Unmatched on $model_tag ($backend): $addr"
      # Give the next effort / model a fresh stub rather than this run's half-finished attempt
      "$WORK_BIN" clean "$addr" >/dev/null 2>&1 || true
      if [[ $rc -eq 42 ]]; then
        rl_kind=soft; rl_reset=0
        read -r rl_kind rl_reset < "$STATE_DIR/rl.$addr" 2>/dev/null || true
        rm -f "$STATE_DIR/rl.$addr"
        mark_rate_limited "$(pool_of "$backend" "$model_choice")" "$rl_kind" "$rl_reset"
        next_backend="$(resolve_backend_for_model "$model_spec")"
        if [[ "$next_backend" != "none" && "$next_backend" != "$backend" ]]; then
          emit "[*] $addr: switching $model_tag to alternate backend ($next_backend)"
          continue
        fi
        echo limited > "$STATE_DIR/res.$addr"     # not a failure: do not record it, do not count it against the model
        return 0
      fi
      record_failure "$addr" "$model_tag"
      if [[ "$effort" == "low" && "$SKIP_MED_BELOW_PCT" != "0" ]]; then
        local best_pct
        best_pct="$(diag_best_pct "$addr")"
        if awk -v b="$best_pct" -v t="$SKIP_MED_BELOW_PCT" 'BEGIN { exit !(b > 0 && b < t) }'; then
          emit "[~] $addr: skipping medium on $model_choice (best match ${best_pct}% < ${SKIP_MED_BELOW_PCT}%)"
          break 2
        fi
      fi
      break
    done
  done
  echo failed > "$STATE_DIR/res.$addr"
}

# ---- Staged pipeline scheduler ---------------------------------------------------------------------
TOTAL_JOBS=$(( MAX_WAVES * WAVE_SIZE ))          # functions pulled from the queue (each starts in tier 0)
PUSH_EVERY_JOBS=$(( PUSH_EVERY * WAVE_SIZE ))
NUM_STAGES="${#MODEL_CHAIN[@]}"

declare -A FUNC_SIZES=()
declare -A FUNC_CPP_OF=()
declare -A FN_START=()
declare -A JOB_INFO=()        # pid -> "addr stage"
declare -A INFLIGHT_ADDR=()   # addr -> 1 while the function is anywhere in the pipeline
declare -A SEEN_ADDR=()       # addrs pulled this session (never re-pulled)
declare -A PENDING=()         # tier -> space-separated FIFO of addrs waiting for a model in that tier
declare -A STAGE_RUNNING=()   # model index -> running attempts
declare -A FN_TIER=()         # addr -> current tier
declare -A FN_OWED=()         # addr -> models in its current tier that still owe it a real attempt
for (( s=0; s<NUM_TIERS; s++ )); do PENDING[$s]=""; done
for (( s=0; s<NUM_STAGES; s++ )); do STAGE_RUNNING[$s]=0; done

launched=0; finished=0; matched_count=0; deferred_count=0

cleanup_children() {
  local pf pg pgs=()
  for pf in "$STATE_DIR"/pg.*; do
    [[ -f "$pf" ]] || continue
    pg="$(cat "$pf" 2>/dev/null)"
    [[ "$pg" =~ ^[0-9]+$ ]] && pgs+=("$pg")
  done
  for pg in "${pgs[@]}"; do kill -TERM -- "-$pg" 2>/dev/null || true; done
  for pg in "${!JOB_INFO[@]}"; do kill -TERM "$pg" 2>/dev/null || true; done
  sleep 2
  for pg in "${pgs[@]}"; do kill -KILL -- "-$pg" 2>/dev/null || true; done   # agents that ignore TERM
}
trap 'echo; echo "[!] Interrupted — stopping workers."; cleanup_children; exit 130' INT TERM

# Cached queue of candidates (refetched when stale, empty, or fully conflicting)
CANDIDATES=()
CANDIDATE_REFRESH_AT=0
refresh_candidates() {
  mapfile -t CANDIDATES < <("$WORK_BIN" next -n 500 --peek --addrs-only --max-size "$MAX_SIZE" $([[ "$DEPS_FIRST" == 1 ]] && echo --deps-first) $([[ "$RETRY_DEFERRED" == 1 ]] && echo --retry-deferred) 2>/dev/null || true)
  CANDIDATE_REFRESH_AT=$(( finished + WAVE_SIZE ))
}

# First cached candidate not already pulled / in flight (by address). Sets NEXT_ADDR/NEXT_CPP.
pick_next_candidate() {
  NEXT_ADDR=""; NEXT_CPP=""
  local pass item addr size cpp
  (( finished >= CANDIDATE_REFRESH_AT )) && refresh_candidates
  for pass in 1 2; do
    for item in "${CANDIDATES[@]}"; do
      [[ -z "$item" ]] && continue
      IFS='|' read -r addr size cpp <<< "$item"
      [[ -n "${SEEN_ADDR[$addr]:-}" ]] && continue
      [[ -n "${INFLIGHT_ADDR[$addr]:-}" ]] && continue
      NEXT_ADDR="$addr"; NEXT_CPP="$cpp"; FUNC_SIZES["$addr"]="$size"
      return 0
    done
    (( pass == 1 )) && refresh_candidates
  done
  return 1
}

# Models in tier $2 that still have at least one eligible effort attempt for function $1: not size-gated, not skipped by
# low-yield routing (tier 0 models are never skipped), and not already failed across every configured effort in an earlier
# session. Availability is NOT considered here (that is dispatch's job).
owed_models() {
  local addr="$1" t="$2" spec base eff ok min_sz size="${FUNC_SIZES[$1]:-0}" out=""
  for spec in ${TIER_MODELS[$t]}; do
    base="${spec#*/}"
    min_sz="${MODEL_MIN[$spec]:-${MODEL_MIN[$base]:-0}}"
    (( size < min_sz )) && continue
    ok=0
    for eff in $AGENT_EFFORTS; do
      effort_eligible "$addr" "$t" "$base" "$eff" && { ok=1; break; }
    done
    (( ok )) && out+="$spec "
  done
  echo "${out% }"
}

total_pending() { local s n=0 w; for s in "${!PENDING[@]}"; do for w in ${PENDING[$s]}; do ((n++)); done; done; echo "$n"; }
tier_load() {   # attempts running + functions waiting in tier $1
  local t="$1" n=0 w m
  for w in ${PENDING[$t]}; do ((n++)); done
  for m in ${TIER_MODELS[$t]}; do (( n += STAGE_RUNNING[${MODEL_IDX[$m]}] )); done
  echo "$n"
}
escalation_backlog() {   # functions that are past tier 0 (pending or running)
  local t n=0
  for (( t=1; t<NUM_TIERS; t++ )); do (( n += $(tier_load "$t") )); done
  echo "$n"
}

finish_function() {   # $1=addr $2=outcome(matched|deferred) $3=model
  local addr="$1" outcome="$2" model="$3"
  unset "INFLIGHT_ADDR[$addr]"
  ((finished++))
  if [[ "$outcome" == matched ]]; then ((matched_count++)); else ((deferred_count++)); fi
  log_result "$addr" "${FUNC_SIZES[$addr]:-?}" "$outcome" "$model" "${FN_START[$addr]:-$(date +%s)}"
  "$WORK_BIN" commit-pending >/dev/null 2>&1 || true
  emit "[done] $addr ($outcome via $model) finished=$finished/$TOTAL_JOBS matched=$matched_count deferred=$deferred_count"
  if (( PUSH_EVERY_JOBS > 0 && finished % PUSH_EVERY_JOBS == 0 )); then
    if ! verify_before_push; then
      emit "[!] Push BLOCKED: committed sources fail byte verification (see $PREPUSH_LOG). Fix and push manually."
      return
    fi
    if [[ "$STATUS_ON_MATCH" == 0 ]]; then
      "$STATUS_BIN" -readme >/dev/null 2>&1 || true
      if ! git diff --quiet -- README.md 2>/dev/null; then
        git add README.md >/dev/null 2>&1 && git commit -m "Update README.md status" >/dev/null 2>&1 || true
      fi
    fi
    emit "[*] Pushing progress to GitHub (triggers Windows CI + HTML dashboard build)"
    if git push >/dev/null 2>&1; then emit "[*] Push ok"; else emit "[!] Push failed"; fi
  fi
}

# Re-verify the committed (HEAD) version of every .cpp changed since the upstream branch, so a
# collateral-damage edit that slipped into a commit never reaches CI. Uses HEAD blobs, not the
# working tree, so in-flight worker edits can't cause false failures.
PREPUSH_LOG="$REPO_ROOT/.local/prepush.log"
VERIFIED_BLOBS_CACHE="$REPO_ROOT/.local/cache/verified_blobs.txt"
verify_before_push() {
  local upstream tmp f blob_sha
  local -a files=() paths=() new_blobs=()
  upstream="$(git rev-parse -q --verify '@{u}' 2>/dev/null)" || { emit "[!] No upstream; skipping pre-push verify"; return 0; }
  mapfile -t files < <(git diff --name-only "$upstream" HEAD -- 'src/*.cpp')
  (( ${#files[@]} == 0 )) && return 0
  mkdir -p "$(dirname "$VERIFIED_BLOBS_CACHE")"
  touch "$VERIFIED_BLOBS_CACHE"
  tmp="$REPO_ROOT/.local/prepush"
  rm -rf "$tmp"
  for f in "${files[@]}"; do
    blob_sha="$(git rev-parse -q --verify "HEAD:$f" 2>/dev/null)" || continue   # deleted file
    if grep -qxF "$blob_sha" "$VERIFIED_BLOBS_CACHE"; then
      continue
    fi
    mkdir -p "$tmp/$(dirname "$f")"
    git show "$blob_sha" > "$tmp/$f"
    paths+=(".local/prepush/$f")
    new_blobs+=("$blob_sha")
  done
  (( ${#paths[@]} == 0 )) && return 0
  emit "[*] Pre-push verify: ${#paths[@]} changed .cpp file(s)"
  if "$BAM_BIN" -require-compiler "${paths[@]}" > "$PREPUSH_LOG" 2>&1; then
    printf '%s\n' "${new_blobs[@]}" >> "$VERIFIED_BLOBS_CACHE"
    return 0
  fi
  return 1
}

defer_function() {
  local addr="$1"
  emit "[x] Deferring $addr: unmatched after all eligible models"
  "$WORK_BIN" skip "$addr" "Unmatched after escalation through all eligible models in the chain" || true
  finish_function "$addr" deferred "all-eligible-models"
}

diag_best_pct() {   # $1=addr -> prints best match % from .local/diag/<VA>.tsv (0 if none)
  local addr="$1" va_upper diag_file
  va_upper="${addr#0x}"
  va_upper="${va_upper^^}"
  diag_file="$REPO_ROOT/.local/diag/${va_upper}.tsv"
  if [[ -s "$diag_file" ]]; then
    awk -F'\t' 'NF>=2 && $2+0 > max { max = $2+0 } END { printf "%.1f", max+0 }' "$diag_file" 2>/dev/null || echo 0
  else
    echo 0
  fi
}

enqueue_pending() {   # $1=tier $2=addr ; prepends near-matches (>=90%) so they finish first
  local t="$1" addr="$2" bp
  bp="$(diag_best_pct "$addr")"
  if awk -v b="$bp" 'BEGIN { exit !(b >= 90) }'; then
    PENDING[$t]="$addr ${PENDING[$t]}"
  else
    PENDING[$t]+="$addr "
  fi
}

advance_function() {   # put a function into the first tier >= $2 that still has owed models, or defer it
  local addr="$1" t="$2" owed
  for (( ; t<NUM_TIERS; t++ )); do
    owed="$(owed_models "$addr" "$t")"
    if [[ -n "$owed" ]]; then
      FN_TIER["$addr"]=$t; FN_OWED["$addr"]="$owed"
      enqueue_pending "$t" "$addr"
      emit "[~] $addr: tier $t owes attempts from: $owed"
      return
    fi
  done
  defer_function "$addr"
}

# Launch waiting functions on owed models that have a free slot and a usable quota pool. Among those, take the least loaded
# model so work spreads across pools, breaking ties by function size (<128B -> smaller/faster, >=256B -> stronger).
# A function whose owed models are all busy or rate-limited just keeps waiting.
dispatch_stages() {
  local t addr m idx best score bestscore newq cap fsize tie
  for (( t=0; t<NUM_TIERS; t++ )); do
    newq=""
    for addr in ${PENDING[$t]}; do
      best=-1; bestscore=0
      fsize="${FUNC_SIZES[$addr]:-0}"
      for m in ${FN_OWED[$addr]}; do
        idx=${MODEL_IDX[$m]}; cap="$(stage_cap "$idx")"
        (( STAGE_RUNNING[$idx] >= cap )) && continue
        [[ "$(resolve_backend_for_model "$m")" == none ]] && continue
        score=$(( STAGE_RUNNING[$idx] * 1000 / cap ))
        if (( fsize >= 256 )); then
          tie=$(( NUM_STAGES - idx ))
        else
          tie=$idx
        fi
        score=$(( score * 100 + tie ))
        if (( best < 0 || score < bestscore )); then best=$idx; bestscore=$score; fi
      done
      if (( best < 0 )); then newq+="$addr "; continue; fi
      rm -f "$STATE_DIR/res.$addr"
      attempt_worker "$addr" "$best" &
      JOB_INFO["$!"]="$addr $best"
      ((STAGE_RUNNING[$best]++))
    done
    PENDING[$t]="$newq"   # entries keep a trailing space so appends stay separated
  done
}

reap_finished() {
  local pid addr s res win_model m rest _eff
  for pid in "${!JOB_INFO[@]}"; do
    if ! kill -0 "$pid" 2>/dev/null; then
      read -r addr s <<< "${JOB_INFO[$pid]}"      # s = model index
      unset 'JOB_INFO[$pid]'
      rm -f "$STATE_DIR/run.$addr"
      unset "TOK_SIZE[$addr]" "TOK_VAL[$addr]" "TOK_LAST_TS[$addr]" "TOK_OFFSET[$addr]"
      ((STAGE_RUNNING[$s]--))
      res=failed; win_model=""
      [[ -f "$STATE_DIR/res.$addr" ]] && read -r res win_model < "$STATE_DIR/res.$addr"
      case "$res" in
        matched)
          finish_function "$addr" matched "${win_model:-${MODEL_CHAIN[$s]#*/}}" ;;
        limited|unavailable)
          # Quota stopped the run, not the model: it stays owed, and the function waits for the pool to reset
          emit "[~] $addr: ${MODEL_CHAIN[$s]} $res; still owed, waiting"
          enqueue_pending "${FN_TIER[$addr]}" "$addr" ;;
        *)
          for _eff in $AGENT_EFFORTS; do
            FAILED_ATTEMPTS["$addr"$'\t'"${MODEL_CHAIN[$s]#*/}"@"$_eff"]=1
          done
          rest=""
          for m in ${FN_OWED[$addr]}; do [[ "$m" != "${MODEL_CHAIN[$s]}" && "${m#*/}" != "${MODEL_CHAIN[$s]#*/}" ]] && rest+="$m "; done
          FN_OWED["$addr"]="${rest% }"
          if [[ -n "$rest" ]]; then enqueue_pending "${FN_TIER[$addr]}" "$addr"
          else advance_function "$addr" $(( ${FN_TIER[$addr]} + 1 )); fi ;;
      esac
    fi
  done
}

# ---- Dashboard rendering ---------------------------------------------------------------------------
SESSION_START="$(date +%s)"
EVENTS_SHOWN=0
DASH_PREV_LINES=0

C_RST=$'\033[0m'; C_DIM=$'\033[2m'; C_BOLD=$'\033[1m'
C_RED=$'\033[31m'; C_GRN=$'\033[32m'; C_YEL=$'\033[33m'; C_BLU=$'\033[34m'; C_MAG=$'\033[35m'; C_CYN=$'\033[36m'

# Only these events scroll past above the dashboard; everything else stays in the history log.
event_style() {   # $1=text ; sets EV_COLOR, returns 1 if the event should not be shown on screen
  EV_COLOR=""
  case "$1" in
    *"[+]"*)                 EV_COLOR="$C_GRN" ;;
    *"[x]"*|*"[!]"*)         EV_COLOR="$C_RED" ;;
    *"[*] Push"*)            EV_COLOR="$C_DIM" ;;
    *) return 1 ;;
  esac
}

fmt_tok() {   # 1234 -> 1.2k, 1500000 -> 1.5M
  local n="${1:-0}"
  if (( n >= 1000000 )); then printf '%d.%dM' $((n/1000000)) $((n%1000000/100000))
  elif (( n >= 1000 )); then printf '%d.%dk' $((n/1000)) $((n%1000/100))
  else printf '%d' "$n"; fi
}

# Tokens an agent has used so far, read live from its claude stream-json log: input + cache-creation + output per message
# (cache reads are excluded: they only count the same context being re-read each turn). Streamed events carry partial
# output counts, so this slightly undercounts until the agent finishes. Cached by log size and throttled to at most once
# every 5 seconds per active addr so 1s render ticks don't fork jq repeatedly. Prints "-" when the log has no usage data.
declare -A TOK_SIZE=() TOK_VAL=() TOK_LAST_TS=() TOK_OFFSET=()
agent_tokens() {   # $1=addr $2=log file ; sets AGENT_TOK (not a subshell, so the cache persists)
  local f="$2" sz now off delta
  AGENT_TOK="-"; [[ -f "$f" ]] || return
  sz="$(stat -c %s "$f" 2>/dev/null || echo 0)"
  off="${TOK_OFFSET[$1]:-0}"
  (( sz < off )) && { off=0; TOK_OFFSET[$1]=0; TOK_VAL[$1]=""; }
  if (( sz > off )) && [[ "${TOK_SIZE[$1]:-}" != "$sz" ]]; then
    printf -v now '%(%s)T' -1
    if (( now - ${TOK_LAST_TS[$1]:-0} >= 5 )); then
      TOK_SIZE[$1]="$sz"
      TOK_LAST_TS[$1]="$now"
      delta="$(tail -c +$((off + 1)) "$f" 2>/dev/null | head -c $((sz - off)) | jq -nR '[inputs | fromjson? | select(.type=="assistant") | .message] | group_by(.id)
        | map((map(.usage.input_tokens // 0) | max) + (map(.usage.cache_creation_input_tokens // 0) | max) + (map(.usage.output_tokens // 0) | max))
        | add // empty' 2>/dev/null)"
      TOK_OFFSET[$1]="$sz"
      if [[ -n "$delta" ]]; then
        TOK_VAL[$1]=$(( ${TOK_VAL[$1]:-0} + delta ))
      fi
    fi
  fi
  AGENT_TOK="${TOK_VAL[$1]:--}"
}

mini_bar() {   # $1=value $2=max $3=width -> [=====>    ]
  local v="$1" m="$2" w="$3" f a b
  (( m < 1 )) && m=1; (( v > m )) && v=$m
  f=$(( v * w / m ))
  printf -v a '%*s' "$f" ''; printf -v b '%*s' $(( w - f )) ''
  printf '[%s%s]' "${a// /=}" "${b// / }"
}

render() {
  local total; total="$(wc -l < "$EVENTS")"
  if (( ! DASH )); then
    # Plain mode: just print events that arrived since the last call
    (( total > EVENTS_SHOWN )) && tail -n +$((EVENTS_SHOWN + 1)) "$EVENTS"
    EVENTS_SHOWN=$total
    return
  fi

  local cols now elapsed out="" line ev
  cols="$(tput cols 2>/dev/null || echo 100)"; (( cols < 50 )) && cols=50
  now="$(date +%s)"; elapsed=$(( now - SESSION_START ))

  # Erase the previous block, then print any new notable events as permanent lines above the new block
  (( DASH_PREV_LINES > 0 )) && out+="$(printf '\033[%dA' "$DASH_PREV_LINES")"
  out+=$'\r\033[J'
  if (( total > EVENTS_SHOWN )); then
    while IFS= read -r ev; do
      event_style "$ev" && out+="${EV_COLOR}${ev}${C_RST}"$'\n'
    done < <(tail -n +$((EVENTS_SHOWN + 1)) "$EVENTS")
  fi
  EVENTS_SHOWN=$total

  local -a rows=()
  local pct=0 eta="-" per="-"
  (( TOTAL_JOBS > 0 )) && pct=$(( finished * 100 / TOTAL_JOBS ))
  if (( finished > 0 )); then
    eta="$(fmt_dur $(( elapsed * (TOTAL_JOBS - finished) / finished )))"
    per="$(fmt_dur $(( elapsed / finished )))"
  fi
  rows+=("${C_DIM}Matched:     ${C_RST} ${C_GRN}${matched_count}${C_RST} / ${TOTAL_JOBS} ($pct%), ${C_YEL}${deferred_count} deferred${C_RST}  $(mini_bar "$finished" "$TOTAL_JOBS" 20)")
  rows+=("${C_DIM}Elapsed:     ${C_RST} $(fmt_dur "$elapsed"), ETA $eta, ~$per/function")

  local t m i st="" r p w tr part pl cdrow="" cdk cdu
  for (( t=0; t<NUM_TIERS; t++ )); do
    p=0; tr=0; part=""
    for w in ${PENDING[$t]}; do ((p++)); done
    for m in ${TIER_MODELS[$t]}; do
      i=${MODEL_IDX[$m]}; r="${STAGE_RUNNING[$i]}"; ((tr += r))
      part+="${m/claude-/} $r/$(stage_cap "$i") "
    done
    (( tr + p == 0 )) && continue
    st+="T$t: ${part}"
    (( p > 0 )) && st+="(+$p waiting) "
    st+=" "
  done
  rows+=("${C_DIM}Agents:      ${C_RST} ${st:-idle}")
  for pl in claude agy-gemini agy-other; do
    if is_backend_cooling_down "$pl"; then
      cdk="$(_state_key "$pl")"; cdu="$(cat "$STATE_DIR/cd.$cdk" 2>/dev/null || echo 0)"
      cdrow+="$pl resets in $(fmt_dur $(( cdu - now )))  "
    fi
  done
  [[ -n "$cdrow" ]] && rows+=("${C_DIM}Limits:      ${C_RST} ${C_RED}${cdrow}${C_RST}")

  if (( ${#JOB_INFO[@]} > 0 )); then
    rows+=("${C_DIM}Working on:${C_RST}")
    local pid addr stage spec model backend started logf att tmo mc tc
    for pid in $(printf '%s\n' "${!JOB_INFO[@]}" | sort -n); do
      read -r addr stage <<< "${JOB_INFO[$pid]}"
      spec="${MODEL_CHAIN[$stage]}"; model="${spec#*/}"; backend="-"; started="$now"; logf=""
      [[ -f "$STATE_DIR/run.$addr" ]] && read -r model backend started logf < "$STATE_DIR/run.$addr"
      att=$(( now - started ))
      tmo=$(( ${FUNC_SIZES[$addr]:-0} / 2 )); (( tmo > AGENT_TIMEOUT * 2 )) && tmo=$(( AGENT_TIMEOUT * 2 )); tmo=$(( AGENT_TIMEOUT + tmo ))
      case "${MODEL_TIER[$spec]:-9}" in
        0) mc="$C_GRN" ;; 1) mc="$C_CYN" ;; 2) mc="$C_BLU" ;; 3) mc="$C_YEL" ;; 4) mc="$C_MAG" ;; *) mc="$C_RED" ;;
      esac
      tc=""
      (( att * 100 >= tmo * 60 )) && tc="$C_YEL"
      (( att * 100 >= tmo * 90 )) && tc="$C_RED"
      AGENT_TOK="-"; [[ "$backend" == claude ]] && agent_tokens "$addr" "${logf:-}"
      [[ "$AGENT_TOK" =~ ^[0-9]+$ ]] && AGENT_TOK="$(fmt_tok "$AGENT_TOK")"
      rows+=("$(printf " * %s %5sB  %s%-27s%s %s%-9s%s %7s tok  (total %s)" \
        "$addr" "${FUNC_SIZES[$addr]:-?}" "$mc" "$backend/${model#claude-}" "$C_RST" \
        "$tc" "${att}s/${tmo}s" "$C_RST" "$AGENT_TOK" \
        "$(fmt_dur $(( now - ${FN_START[$addr]:-$now} )))")")
    done
  fi

  local plain
  for line in "${rows[@]}"; do
    plain="${line//$'\033'\[[0-9;]*m/}"
    (( ${#plain} > cols - 1 )) && line="${plain:0:cols-1}"
    out+="$line"$'\n'
  done
  DASH_PREV_LINES=${#rows[@]}
  printf '%s' "$out"
}

# Remove stale unverified stubs before we start (nothing is in flight yet, so this is safe)
echo "Cleaning stale stubs and scanning the function queue (can take ~20s)..."
"$WORK_BIN" clean >/dev/null 2>&1 || true

if [[ "$RUN_AUTO_SOLVE" == 1 ]]; then
  echo "Running auto_solve pre-pass..."
  if build_tool_if_needed "auto_solve"; then
    "$REPO_ROOT/.local/bin/auto_solve" || true
  fi
fi

SESSION_START="$(date +%s)"
queue_exhausted=0
ESC_BACKLOG_MAX=$(( ESC_BACKLOG_FACTOR * WAVE_SIZE ))
while true; do
  # Keep tier 0 saturated: pull fresh functions whenever tier 0 has a free slot (unless escalations are backed up)
  while (( launched < TOTAL_JOBS && queue_exhausted == 0 )) \
        && (( $(tier_load 0) < WAVE_SIZE )) \
        && (( $(escalation_backlog) < ESC_BACKLOG_MAX )); do
    if ! pick_next_candidate; then
      # Nothing usable: either the queue is truly empty, or what is left conflicts with in-flight work
      if (( ${#JOB_INFO[@]} == 0 )) && [[ "$(total_pending)" == 0 ]]; then
        emit "[!] No unmatched ready functions remaining in queue; stopping cleanly"
        queue_exhausted=1
      fi
      break
    fi
    addr="$NEXT_ADDR"
    SEEN_ADDR["$addr"]=1; INFLIGHT_ADDR["$addr"]=1
    FUNC_CPP_OF["$addr"]="$NEXT_CPP"; FN_START["$addr"]="$(date +%s)"
    ((launched++))
    emit "[pull] #$launched/$TOTAL_JOBS $addr (${FUNC_SIZES[$addr]}B) -> $NEXT_CPP"
    advance_function "$addr" 0
  done

  dispatch_stages

  if (( ${#JOB_INFO[@]} == 0 )) && [[ "$(total_pending)" == 0 ]]; then
    break
  fi

  # Wait for ANY attempt to finish (redrawing once a second), then loop: its tier (and tier 0) refill immediately
  render
  while true; do
    sleep 1
    ev=0
    for pid in "${!JOB_INFO[@]}"; do kill -0 "$pid" 2>/dev/null || ev=1; done
    (( ${#JOB_INFO[@]} == 0 )) && ev=1   # nothing running: waiting on a pool reset, so re-check dispatch every tick
    render
    (( ev )) && break
  done
  reap_finished
done

# Everything is idle now, so a global clean is safe
"$WORK_BIN" commit-pending >/dev/null 2>&1 || true
"$WORK_BIN" clean >/dev/null 2>&1 || true
render
echo "=== Parallel grind session finished (pulled=$launched matched=$matched_count deferred=$deferred_count) ==="
if [[ "$STATUS_ON_MATCH" == 0 ]]; then
  "$STATUS_BIN" -readme >/dev/null 2>&1 || true
fi
"$STATUS_BIN" || true
