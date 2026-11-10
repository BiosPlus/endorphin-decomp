#!/usr/bin/env bash
set -uo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"

MAX_WAVES="${1:-50}"                    # Number of parallel waves to run before stopping
WAVE_SIZE="${2:-5}"                     # Parallel functions per wave (1 dedicated agent per function try)
PUSH_EVERY="${3:-5}"                    # Run git push every N waves
AGENT_TIMEOUT="${AGENT_TIMEOUT:-360}"   # Per-function agent timeout in seconds
COOLDOWN_BASE_SECS="${COOLDOWN_BASE_SECS:-180}" # Initial rate-limit cooldown (3m -> 9m -> 27m)
PREFER_AGY_CLAUDE="${PREFER_AGY_CLAUDE:-0}"     # Set to 1 to prefer AGY for Sonnet/Opus before native claude CLI
DEPS_FIRST="${DEPS_FIRST:-1}"                  # 1 = prefer functions whose callees are already matched
RETRY_DEFERRED="${RETRY_DEFERRED:-0}"          # 1 = also queue previously deferred functions (skips models that already failed them)
IGNORE_ATTEMPTS="${IGNORE_ATTEMPTS:-0}"        # 1 = ignore .local/grind_attempts.tsv history
# Pipeline: Haiku (stage 0) runs on EVERY function with WAVE_SIZE concurrent runners. A function only moves to the next
# model when the previous one fails. Each escalation stage has its own concurrency cap (default ESC_CAP; override per model).
ESC_CAP="${ESC_CAP:-2}"
MODEL_CAPS="${MODEL_CAPS:-}"                    # e.g. claude-opus-5.5=1,gemini-4-argon=1
ESC_BACKLOG_FACTOR="${ESC_BACKLOG_FACTOR:-4}"   # pause pulling new Haiku work if > FACTOR*WAVE_SIZE functions are waiting on escalations
# Optional minimum function size (bytes) per model, e.g. "claude-opus-5.5=128,gemini-4-argon=128". Off by default:
# any function that fails the cheaper models escalates all the way up regardless of size.
MODEL_MIN_SIZE="${MODEL_MIN_SIZE:-}"
# Adaptive chain: skip an escalation stage whose measured yield (from .local/grind_results.log + grind_attempts.tsv, per
# function-size band) is below ROUTE_MIN_YIELD once it has >= ROUTE_MIN_TRIALS trials. Stage 0 is never skipped. Set 0 to disable.
ADAPTIVE_CHAIN="${ADAPTIVE_CHAIN:-1}"
ROUTE_MIN_TRIALS="${ROUTE_MIN_TRIALS:-20}"
ROUTE_MIN_YIELD="${ROUTE_MIN_YIELD:-0.05}"

# Strict single-model-at-a-time escalation order (cheapest & fastest tokens first -> heaviest last)
MODEL_CHAIN=(
  "claude-haiku-5.5"
  "gpt-oss-120b"
  "gemini-3.8-flash"
  "claude-sonnet-5.5"
  "claude-opus-5.5"
  "gemini-4-argon"
)

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
HAS_AGY=0
if command -v claude >/dev/null 2>&1 && claude --version >/dev/null 2>&1; then
  HAS_CLAUDE=1
fi
if command -v agy >/dev/null 2>&1 && agy --help >/dev/null 2>&1; then
  HAS_AGY=1
fi

echo "=== Endorphin Autonomous Parallel Grinder (1 Agent / Function Try) ==="
echo "Verified CLIs : claude=$HAS_CLAUDE | agy=$HAS_AGY"
echo "Pipeline      : haiku runners=$WAVE_SIZE (tries every function) | escalation cap=${ESC_CAP}/model | total_pulls=$((MAX_WAVES*WAVE_SIZE)) | push_every=$((PUSH_EVERY*WAVE_SIZE)) | timeout=${AGENT_TIMEOUT}s"
echo "Model Chain   : claude-haiku-5.5 -> gpt-oss-120b -> gemini-3.8-flash -> claude-sonnet-5.5 -> claude-opus-5.5 -> gemini-4-argon"
echo "Policy        : Haiku first on every function; a failure escalates only that function one stage up; per-model caps limit expensive concurrency"
echo "Security Mode : Scoped Allowlist + Sandbox + PreToolUse Guard [NO skip-dangerously]"

if [[ $HAS_CLAUDE -eq 0 && $HAS_AGY -eq 0 ]]; then
  echo "Error: Neither a working 'claude' nor 'agy' CLI was found in PATH."
  exit 1
fi

# Inline session-only least-privilege settings for `agy` (never saved to disk, no extra dotfiles required)
AGY_INLINE_SETTINGS='{"agentMode":"auto","enableTerminalSandbox":true,"toolPermission":"proceed-in-sandbox","permissions":{"allow":["read_file(*)","write_file(src/*)","write_file(include/*)","edit_file(src/*)","edit_file(include/*)","command(./.local/bin/work*)","command(go run ./tools/work*)","command(./.local/bin/status*)","command(go run ./tools/status*)","command(./.local/bin/build_and_match*)","command(./tools/cl_wine.sh*)","command(git status*)","command(git diff*)","command(git log*)","command(git show*)","command(git add*)","command(git commit*)","command(git checkout*)"],"deny":["write_file(build/units.json)","edit_file(build/units.json)","write_file(build/units/*)","edit_file(build/units/*)","write_file(docs/*)","write_file(*.html)","command(sudo*)","command(rm -rf*)","command(git reset --hard*)","command(git push --force*)","command(python*)","command(curl*)","command(wget*)"]}}'

# Per-backend cooldown tracking, kept in files so every concurrent worker subshell shares one view.
# $STATE_DIR/cd.<key>  = epoch seconds when backend:model becomes eligible again
# $STATE_DIR/st.<key>  = strike count
STATE_DIR="$(mktemp -d /tmp/endorphin_grind_state.XXXXXX)"
trap 'rm -rf "$STATE_DIR"' EXIT

_state_key() { echo "${1//[^A-Za-z0-9._-]/_}"; }

is_backend_cooling_down() {
  local k; k="$(_state_key "$1")"
  local now until=0
  now="$(date +%s)"
  [[ -f "$STATE_DIR/cd.$k" ]] && until="$(cat "$STATE_DIR/cd.$k" 2>/dev/null || echo 0)"
  (( now < until ))
}

mark_rate_limited() {
  local key="$1"
  local k; k="$(_state_key "$key")"
  # Several workers can hit the same limit at once: count only one strike per cooldown episode
  if is_backend_cooling_down "$key"; then
    return
  fi
  local strikes=0
  [[ -f "$STATE_DIR/st.$k" ]] && strikes="$(cat "$STATE_DIR/st.$k" 2>/dev/null || echo 0)"
  ((strikes++))
  echo "$strikes" > "$STATE_DIR/st.$k"

  # Exponential backoff: 3m, 9m, 27m, then 2h
  local wait_secs=$(( COOLDOWN_BASE_SECS * (3 ** (strikes - 1)) ))
  if (( wait_secs > 7200 )); then
    wait_secs=7200
  fi
  echo $(( $(date +%s) + wait_secs )) > "$STATE_DIR/cd.$k"
  echo "[!] Rate limit / quota hit on $key (strike $strikes) — cooling down for $((wait_secs / 60))m ($wait_secs s)..."
}

# Resolve which CLI backend ("claude" or "agy") to use for a given model choice.
# Note: claude-sonnet-5.5 and claude-opus-5.5 (and haiku fallback) are available on BOTH claude and agy!
resolve_backend_for_model() {
  local model_choice="$1"
  case "$model_choice" in
    claude-haiku-5.5)
      if [[ $HAS_CLAUDE -eq 1 ]] && ! is_backend_cooling_down "claude:$model_choice"; then
        echo "claude"
        return
      fi
      if [[ $HAS_AGY -eq 1 ]] && ! is_backend_cooling_down "agy:$model_choice"; then
        echo "agy"
        return
      fi
      ;;
    claude-sonnet-5.5|claude-opus-5.5)
      if [[ "$PREFER_AGY_CLAUDE" -eq 1 ]]; then
        if [[ $HAS_AGY -eq 1 ]] && ! is_backend_cooling_down "agy:$model_choice"; then
          echo "agy"
          return
        fi
        if [[ $HAS_CLAUDE -eq 1 ]] && ! is_backend_cooling_down "claude:$model_choice"; then
          echo "claude"
          return
        fi
      else
        if [[ $HAS_CLAUDE -eq 1 ]] && ! is_backend_cooling_down "claude:$model_choice"; then
          echo "claude"
          return
        fi
        if [[ $HAS_AGY -eq 1 ]] && ! is_backend_cooling_down "agy:$model_choice"; then
          echo "agy"
          return
        fi
      fi
      ;;
    gpt-oss-120b|gemini-3.8-flash|gemini-4-argon)
      if [[ $HAS_AGY -eq 1 ]] && ! is_backend_cooling_down "agy:$model_choice"; then
        echo "agy"
        return
      fi
      ;;
  esac
  echo "none"
}

is_rate_limit_log() {
  local log_file="$1"
  grep -qiE "rate_limit_error|rate limit exceeded|quota exceeded|usage limit|credit balance is too low|HTTP/[0-9.]+ 429|status( code)?[: ]+429|RESOURCE_EXHAUSTED|overloaded_error|hit your.*limit|too many requests" "$log_file"
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

# Run a single dedicated agent on a single function address using the chosen model and backend
run_single_function_agent() {
  local model_choice="$1"
  local backend="$2"
  local addr="$3"
  local log_file="$4"

  export DECOMP_MODEL="$model_choice"

  local prompt="Read CLAUDE.md. You are assigned a single function: ${addr}. Run './.local/bin/work claim ${addr}' and match ${addr} using './.local/bin/work check ${addr} --model ${DECOMP_MODEL}'. Use HEADER_PREVIEW and SUGGESTED_EXTERNS from the claim output; if SIMILAR_MATCHED is present, treat those solved neighbors as a hint for the C++ idiom (identical-shape ones usually differ only in constants, offsets and call targets). If PRIOR_ATTEMPTS is present, it lists facts about earlier failed checks on this function (where the output diverged, what the compiler emitted); use it to avoid dead ends, but do not assume the earlier approach was close, and never go looking for the earlier source. Iterate up to 10 tries (switch to __declspec(naked) __asm after 3-4 failed C++03 tries). Stop immediately as soon as ${addr} matches or after 10 tries. Do NOT run work next, do NOT call work skip, and do NOT touch any other function, HTML files, or build/units.json."

  local exit_code=0
  if [[ "$backend" == "claude" ]]; then
    local claude_alias="haiku"
    case "$model_choice" in
      claude-haiku-5.5)  claude_alias="haiku" ;;
      claude-sonnet-5.5) claude_alias="sonnet" ;;
      claude-opus-5.5)   claude_alias="opus" ;;
    esac

    launch_tracked timeout --kill-after=20s "${AGENT_TIMEOUT_EFF:-$AGENT_TIMEOUT}s" \
      claude --model "$claude_alias" \
      --permission-mode acceptEdits \
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
      gpt-oss-120b)
        # Try user-facing slug and Vertex MaaS / enum slugs in order if CLI rejects a slug format
        for slug in "${AGY_GPT_OSS_SLUG:-openai/gpt-oss-120b-maas}" "gpt-oss-120b" "MODEL_OPENAI_GPT_OSS_120B_MEDIUM"; do
          exit_code=0
          run_agy_with_model "$slug" "medium" "$prompt" "$log_file" || exit_code=$?
          if ! is_invalid_model_log "$log_file"; then
            break
          fi
        done
        ;;
      gemini-3.8-flash)
        run_agy_with_model "gemini-3.8-flash" "high" "$prompt" "$log_file" || exit_code=$?
        ;;
      claude-sonnet-5.5)
        for slug in "claude-sonnet-5-5@default" "claude-sonnet-5-5-high" "claude-sonnet-4-6@default"; do
          exit_code=0
          run_agy_with_model "$slug" "high" "$prompt" "$log_file" || exit_code=$?
          if ! is_invalid_model_log "$log_file"; then
            break
          fi
        done
        ;;
      claude-opus-5.5)
        for slug in "claude-opus-5-5@default" "claude-opus-5-5-high" "claude-opus-4-6@default"; do
          exit_code=0
          run_agy_with_model "$slug" "high" "$prompt" "$log_file" || exit_code=$?
          if ! is_invalid_model_log "$log_file"; then
            break
          fi
        done
        ;;
      gemini-4-argon)
        run_agy_with_model "gemini-4-argon" "high" "$prompt" "$log_file" || exit_code=$?
        ;;
      claude-haiku-5.5)
        run_agy_with_model "claude-haiku-4-5@20251001" "high" "$prompt" "$log_file" || exit_code=$?
        ;;
    esac
  fi

  if "$WORK_BIN" is-matched "$addr" >/dev/null 2>&1; then
    # Ensure individual commit is recorded immediately on the host (e.g. if agent ran inside read-only .git sandbox)
    "$WORK_BIN" commit-pending >/dev/null 2>&1 || true
  else
    if is_rate_limit_log "$log_file"; then
      return 42
    fi
  fi
  return $exit_code
}

# ---- Stage configuration ---------------------------------------------------------------------------
# The model chain is a pipeline of stages. Stage 0 (Haiku) gets WAVE_SIZE runners and tries EVERY function.
# Only a function Haiku fails moves on to stage 1; a failure there moves it to stage 2, and so on.
# Each later stage has its own small concurrency cap, so escalations never occupy Haiku runners.
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
  local idx="$1" model="${MODEL_CHAIN[$1]}" cap
  if (( idx == 0 )); then echo "$WAVE_SIZE"; return; fi
  cap="${MODEL_CAP[$model]:-$ESC_CAP}"
  (( cap < 1 )) && cap=1
  echo "$cap"
}

# ---- Attempt history: (addr, model) pairs that already failed, so later sessions skip them ----
ATTEMPTS_FILE="${GRIND_ATTEMPTS_FILE:-$REPO_ROOT/.local/grind_attempts.tsv}"
already_failed() {
  [[ "$IGNORE_ATTEMPTS" == 1 || ! -f "$ATTEMPTS_FILE" ]] && return 1
  grep -qxF "$1$(printf '\t')$2" "$ATTEMPTS_FILE" 2>/dev/null
}
record_failure() { printf '%s\t%s\n' "$1" "$2" >> "$ATTEMPTS_FILE" 2>/dev/null || true; }

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
  echo "Adaptive chain: ON (skip stage if measured yield < ${ROUTE_MIN_YIELD} over >= ${ROUTE_MIN_TRIALS} trials; ADAPTIVE_CHAIN=0 disables)"
  "$WORK_BIN" route --min-trials "$ROUTE_MIN_TRIALS" --min-yield "$ROUTE_MIN_YIELD" 2>/dev/null | sed 's/^/  /' || true
fi

low_yield_stage() {   # $1=model $2=size_bytes ; true if that stage should be skipped for this size
  local m lo hi dec rule
  for rule in "${ROUTE_RULES[@]}"; do
    read -r m lo hi dec <<< "$rule"
    [[ "$m" == "$1" && "$dec" == skip ]] && (( $2 >= lo && $2 < hi )) && return 0
  done
  return 1
}

# One agent attempt: ONE function on ONE model (stage). Runs in a background subshell.
# Writes "matched" | "failed" | "unavailable" to $STATE_DIR/res.<addr>.
attempt_worker() {
  local addr="$1" model_idx="$2"
  local model_choice="${MODEL_CHAIN[$model_idx]}" total_steps="${#MODEL_CHAIN[@]}"
  local backend log_file rc next_backend

  # Larger functions get more time: +1s per 2 bytes, capped at 3x the base timeout
  local extra=$(( ${FUNC_SIZES[$addr]:-0} / 2 )) cap=$(( AGENT_TIMEOUT * 2 ))
  (( extra > cap )) && extra=$cap
  AGENT_TIMEOUT_EFF=$(( AGENT_TIMEOUT + extra ))

  # Retry the same model on an alternate backend (e.g. claude -> agy) if the first one is rate-limited
  while true; do
    backend="$(resolve_backend_for_model "$model_choice")"
    if [[ "$backend" == "none" ]]; then
      echo "  [!] $addr: $model_choice unavailable / cooling down on all backends."
      echo unavailable > "$STATE_DIR/res.$addr"
      return 0
    fi

    echo "  [>] $addr (${FUNC_SIZES[$addr]}B): step $((model_idx + 1))/$total_steps $model_choice (via $backend)"
    log_file="$(mktemp "/tmp/endorphin_${model_choice}_${addr}.XXXXXX.log")"
    rc=0
    run_single_function_agent "$model_choice" "$backend" "$addr" "$log_file" || rc=$?
    rm -f "$log_file"

    if "$WORK_BIN" is-matched "$addr" >/dev/null 2>&1; then
      echo "  [+] MATCHED: $addr via $model_choice ($backend)!"
      echo matched > "$STATE_DIR/res.$addr"
      return 0
    fi

    echo "  [-] Unmatched on $model_choice ($backend): $addr"
    # Give the next model a fresh stub rather than this model's half-finished attempt
    "$WORK_BIN" clean "$addr" >/dev/null 2>&1 || true
    if [[ $rc -eq 42 ]]; then
      mark_rate_limited "${backend}:${model_choice}"
      next_backend="$(resolve_backend_for_model "$model_choice")"
      if [[ "$next_backend" != "none" && "$next_backend" != "$backend" ]]; then
        echo "  [*] $addr: switching $model_choice to alternate backend ($next_backend)..."
        continue
      fi
    else
      record_failure "$addr" "$model_choice"
    fi
    break
  done
  echo failed > "$STATE_DIR/res.$addr"
}

# ---- Staged pipeline scheduler ---------------------------------------------------------------------
TOTAL_JOBS=$(( MAX_WAVES * WAVE_SIZE ))          # functions pulled from the queue (each starts at Haiku)
PUSH_EVERY_JOBS=$(( PUSH_EVERY * WAVE_SIZE ))
NUM_STAGES="${#MODEL_CHAIN[@]}"

declare -A FUNC_SIZES=()
declare -A FUNC_CPP_OF=()
declare -A FN_START=()
declare -A JOB_INFO=()        # pid -> "addr stage"
declare -A INFLIGHT_ADDR=()   # addr -> 1 while the function is anywhere in the pipeline
declare -A INFLIGHT_CPP=()    # cpp  -> 1 (never two functions on the same .cpp at once)
declare -A SEEN_ADDR=()       # addrs pulled this session (never re-pulled)
declare -A PENDING=()         # stage -> space-separated FIFO of addrs waiting for that stage
declare -A STAGE_RUNNING=()   # stage -> running attempts
for (( s=0; s<NUM_STAGES; s++ )); do PENDING[$s]=""; STAGE_RUNNING[$s]=0; done

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
trap 'echo "[!] Interrupted — stopping workers."; cleanup_children; exit 130' INT TERM

# Cached queue of candidates (refetched when stale, empty, or fully conflicting)
CANDIDATES=()
CANDIDATE_REFRESH_AT=0
refresh_candidates() {
  mapfile -t CANDIDATES < <("$WORK_BIN" next -n 500 --peek --addrs-only --max-size 65535 $([[ "$DEPS_FIRST" == 1 ]] && echo --deps-first) $([[ "$RETRY_DEFERRED" == 1 ]] && echo --retry-deferred) 2>/dev/null || true)
  CANDIDATE_REFRESH_AT=$(( finished + WAVE_SIZE ))
}

# First cached candidate not already pulled / in flight (by address or by target .cpp). Sets NEXT_ADDR/NEXT_CPP.
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
      [[ -n "${INFLIGHT_CPP[$cpp]:-}" ]] && continue
      NEXT_ADDR="$addr"; NEXT_CPP="$cpp"; FUNC_SIZES["$addr"]="$size"
      return 0
    done
    (( pass == 1 )) && refresh_candidates
  done
  return 1
}

# Lowest stage >= $2 that may attempt function $1 (size gate, attempt history, backend availability). Prints index or -1.
next_eligible_stage() {
  local addr="$1" idx model size="${FUNC_SIZES[$1]:-0}"
  for (( idx=$2; idx<NUM_STAGES; idx++ )); do
    model="${MODEL_CHAIN[$idx]}"
    if (( size < ${MODEL_MIN[$model]:-0} )); then
      echo "  [~] $addr (${size}B): below $model minimum size (${MODEL_MIN[$model]}B); skipping." >&2; continue
    fi
    if (( idx > 0 )) && low_yield_stage "$model" "$size"; then
      echo "  [~] $addr (${size}B): $model has low measured yield at this size; skipping." >&2; continue
    fi
    if already_failed "$addr" "$model"; then
      echo "  [~] $addr: $model already failed it in an earlier session; skipping." >&2; continue
    fi
    if [[ "$(resolve_backend_for_model "$model")" == "none" ]]; then
      echo "  [!] $addr: $model unavailable / cooling down on all backends; skipping." >&2; continue
    fi
    echo "$idx"; return
  done
  echo -1
}

total_pending() { local s n=0 w; for s in "${!PENDING[@]}"; do for w in ${PENDING[$s]}; do ((n++)); done; done; echo "$n"; }
escalation_backlog() {   # functions that are past stage 0 (pending or running)
  local s n=0 w
  for (( s=1; s<NUM_STAGES; s++ )); do
    for w in ${PENDING[$s]}; do ((n++)); done
    (( n += STAGE_RUNNING[$s] ))
  done
  echo "$n"
}

finish_function() {   # $1=addr $2=outcome(matched|deferred) $3=model
  local addr="$1" outcome="$2" model="$3"
  unset "INFLIGHT_ADDR[$addr]"
  unset "INFLIGHT_CPP[${FUNC_CPP_OF[$addr]}]"
  ((finished++))
  if [[ "$outcome" == matched ]]; then ((matched_count++)); else ((deferred_count++)); fi
  log_result "$addr" "${FUNC_SIZES[$addr]:-?}" "$outcome" "$model" "${FN_START[$addr]:-$(date +%s)}"
  "$WORK_BIN" commit-pending >/dev/null 2>&1 || true
  echo "[pool] done $addr ($outcome via $model) | finished=$finished/$TOTAL_JOBS matched=$matched_count deferred=$deferred_count haiku=${STAGE_RUNNING[0]} escalating=$(escalation_backlog)"
  if (( PUSH_EVERY_JOBS > 0 && finished % PUSH_EVERY_JOBS == 0 )); then
    echo "[*] Pushing progress to GitHub (triggers Windows CI + HTML dashboard build)..."
    git push || true
  fi
}

defer_function() {
  local addr="$1"
  echo "  [x] Deferring $addr: unmatched after all eligible models"
  "$WORK_BIN" skip "$addr" "Unmatched after escalation through all eligible models in the chain" || true
  finish_function "$addr" deferred "all-eligible-models"
}

advance_function() {   # route a function to its next eligible stage >= $2, or defer it
  local addr="$1" nxt
  nxt="$(next_eligible_stage "$addr" "$2")"
  if (( nxt < 0 )); then defer_function "$addr"; else PENDING[$nxt]+="$addr "; fi
}

dispatch_stages() {
  local s addr
  for (( s=0; s<NUM_STAGES; s++ )); do
    while (( STAGE_RUNNING[$s] < $(stage_cap "$s") )) && [[ -n "${PENDING[$s]// /}" ]]; do
      addr="${PENDING[$s]%% *}"
      PENDING[$s]="${PENDING[$s]#"$addr"}"; PENDING[$s]="${PENDING[$s]# }"
      rm -f "$STATE_DIR/res.$addr"
      attempt_worker "$addr" "$s" &
      JOB_INFO["$!"]="$addr $s"
      ((STAGE_RUNNING[$s]++))
    done
  done
}

reap_finished() {
  local pid addr s res
  for pid in "${!JOB_INFO[@]}"; do
    if ! kill -0 "$pid" 2>/dev/null; then
      read -r addr s <<< "${JOB_INFO[$pid]}"
      unset 'JOB_INFO[$pid]'
      ((STAGE_RUNNING[$s]--))
      res=failed
      [[ -f "$STATE_DIR/res.$addr" ]] && res="$(cat "$STATE_DIR/res.$addr")"
      if [[ "$res" == matched ]]; then
        finish_function "$addr" matched "${MODEL_CHAIN[$s]}"
      else
        advance_function "$addr" $(( s + 1 ))
      fi
    fi
  done
}

# Remove stale unverified stubs before we start (nothing is in flight yet, so this is safe)
"$WORK_BIN" clean >/dev/null 2>&1 || true

queue_exhausted=0
ESC_BACKLOG_MAX=$(( ESC_BACKLOG_FACTOR * WAVE_SIZE ))
while true; do
  # Keep Haiku saturated: pull fresh functions whenever Haiku has a free runner (unless escalations are backed up)
  while (( launched < TOTAL_JOBS && queue_exhausted == 0 )) \
        && (( STAGE_RUNNING[0] + $(set -- ${PENDING[0]}; echo $#) < WAVE_SIZE )) \
        && (( $(escalation_backlog) < ESC_BACKLOG_MAX )); do
    if ! pick_next_candidate; then
      # Nothing usable: either the queue is truly empty, or what is left conflicts with in-flight work
      if (( ${#JOB_INFO[@]} == 0 )) && [[ "$(total_pending)" == 0 ]]; then
        echo "[!] No unmatched ready functions remaining in queue! Stopping cleanly."
        queue_exhausted=1
      fi
      break
    fi
    addr="$NEXT_ADDR"
    SEEN_ADDR["$addr"]=1; INFLIGHT_ADDR["$addr"]=1; INFLIGHT_CPP["$NEXT_CPP"]=1
    FUNC_CPP_OF["$addr"]="$NEXT_CPP"; FN_START["$addr"]="$(date +%s)"
    ((launched++))
    echo "[pool] pull #$launched/$TOTAL_JOBS: $addr (${FUNC_SIZES[$addr]}B) -> $NEXT_CPP"
    advance_function "$addr" 0
  done

  dispatch_stages

  if (( ${#JOB_INFO[@]} == 0 )) && [[ "$(total_pending)" == 0 ]]; then
    break
  fi

  # Wait for ANY attempt to finish, then loop: its stage (and Haiku) refill immediately
  while true; do
    sleep 1
    ev=0
    for pid in "${!JOB_INFO[@]}"; do kill -0 "$pid" 2>/dev/null || ev=1; done
    (( ev )) && break
  done
  reap_finished
done

# Everything is idle now, so a global clean is safe
"$WORK_BIN" commit-pending >/dev/null 2>&1 || true
"$WORK_BIN" clean >/dev/null 2>&1 || true
echo "=== Parallel grind session finished (pulled=$launched matched=$matched_count deferred=$deferred_count) ==="
"$STATUS_BIN" || true
