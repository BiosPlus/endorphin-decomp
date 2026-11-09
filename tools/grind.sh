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
  local src="$REPO_ROOT/tools/$name/main.go"
  local bin="$REPO_ROOT/.local/bin/$name"
  if [[ ! -x "$bin" || "$src" -nt "$bin" ]]; then
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
echo "Wave Config   : max_waves=$MAX_WAVES | parallel_agents_per_wave=$WAVE_SIZE | push_every=$PUSH_EVERY | timeout=${AGENT_TIMEOUT}s"
echo "Model Chain   : claude-haiku-5.5 -> gpt-oss-120b -> gemini-3.8-flash -> claude-sonnet-5.5 -> claude-opus-5.5 -> gemini-4-argon"
echo "Wave Policy   : Smallest-to-largest byte order; 1 single model choice across all parallel slots per pass (never mixed)"
echo "Security Mode : Scoped Allowlist + Sandbox + PreToolUse Guard [NO skip-dangerously]"

if [[ $HAS_CLAUDE -eq 0 && $HAS_AGY -eq 0 ]]; then
  echo "Error: Neither a working 'claude' nor 'agy' CLI was found in PATH."
  exit 1
fi

# Inline session-only least-privilege settings for `agy` (never saved to disk, no extra dotfiles required)
AGY_INLINE_SETTINGS='{"agentMode":"auto","enableTerminalSandbox":true,"toolPermission":"proceed-in-sandbox","permissions":{"allow":["read_file(*)","write_file(src/*)","write_file(include/*)","edit_file(src/*)","edit_file(include/*)","command(./.local/bin/work*)","command(go run ./tools/work*)","command(./.local/bin/status*)","command(go run ./tools/status*)","command(./.local/bin/build_and_match*)","command(./tools/cl_wine.sh*)","command(git status*)","command(git diff*)","command(git log*)","command(git show*)","command(git add*)","command(git commit*)","command(git checkout*)"],"deny":["write_file(build/units.json)","edit_file(build/units.json)","write_file(docs/*)","write_file(*.html)","command(sudo*)","command(rm -rf*)","command(git reset --hard*)","command(git push --force*)","command(python*)","command(curl*)","command(wget*)"]}}'

# Per-backend cooldown tracking (epoch seconds when backend:model becomes eligible again, and strike count)
declare -A COOLDOWN_UNTIL=()
declare -A STRIKE_COUNT=()

is_backend_cooling_down() {
  local key="$1"
  local now
  now="$(date +%s)"
  local until="${COOLDOWN_UNTIL[$key]:-0}"
  (( now < until ))
}

mark_rate_limited() {
  local key="$1"
  local strikes="${STRIKE_COUNT[$key]:-0}"
  ((strikes++))
  STRIKE_COUNT["$key"]=$strikes

  # Exponential backoff: 3m, 9m, 27m, then 2h
  local wait_secs=$(( COOLDOWN_BASE_SECS * (3 ** (strikes - 1)) ))
  if (( wait_secs > 7200 )); then
    wait_secs=7200
  fi
  local now
  now="$(date +%s)"
  COOLDOWN_UNTIL["$key"]=$(( now + wait_secs ))
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

run_agy_with_model() {
  local agy_model="$1"
  local agy_effort="$2"
  local prompt="$3"
  local log_file="$4"

  timeout --kill-after=20s "${AGENT_TIMEOUT}s" \
    agy --model "$agy_model" \
    --effort "$agy_effort" \
    --mode auto \
    --sandbox \
    --settings "$AGY_INLINE_SETTINGS" \
    --print-timeout "${AGENT_TIMEOUT}s" \
    -p "$prompt" >"$log_file" 2>&1
}

# Run a single dedicated agent on a single function address using the chosen model and backend
run_single_function_agent() {
  local model_choice="$1"
  local backend="$2"
  local addr="$3"
  local log_file="$4"

  export DECOMP_MODEL="$model_choice"

  local prompt="Read CLAUDE.md. You are assigned a single function: ${addr}. Run './.local/bin/work claim ${addr}' and match ${addr} using './.local/bin/work check ${addr} --model ${DECOMP_MODEL}'. Use HEADER_PREVIEW and SUGGESTED_EXTERNS from the claim output. Iterate up to 10 tries (switch to __declspec(naked) __asm after 3-4 failed C++03 tries). Stop immediately as soon as ${addr} matches or after 10 tries. Do NOT run work next, do NOT call work skip, and do NOT touch any other function, HTML files, or build/units.json."

  local exit_code=0
  if [[ "$backend" == "claude" ]]; then
    local claude_alias="haiku"
    case "$model_choice" in
      claude-haiku-5.5)  claude_alias="haiku" ;;
      claude-sonnet-5.5) claude_alias="sonnet" ;;
      claude-opus-5.5)   claude_alias="opus" ;;
    esac

    timeout --kill-after=20s "${AGENT_TIMEOUT}s" \
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

for (( wave=1; wave<=MAX_WAVES; wave++ )); do
  # Clean any unverified stubs from previous wave before selecting next distinct-file wave
  "$WORK_BIN" clean >/dev/null 2>&1 || true

  # Always pull the next WAVE_SIZE smallest unmatched functions across distinct .cpp files
  mapfile -t WAVE_ITEMS < <("$WORK_BIN" next -n "$WAVE_SIZE" --peek --distinct-files --addrs-only --max-size 65535 2>/dev/null || true)

  if (( ${#WAVE_ITEMS[@]} == 0 )); then
    echo "[!] No unmatched ready functions remaining in queue! Stopping cleanly."
    break
  fi

  WAVE_ADDRS=()
  declare -A FUNC_SIZES=()
  declare -A FUNC_CPPS=()

  for item in "${WAVE_ITEMS[@]}"; do
    [[ -z "$item" ]] && continue
    IFS='|' read -r addr size cpp <<< "$item"
    WAVE_ADDRS+=("$addr")
    FUNC_SIZES["$addr"]="$size"
    FUNC_CPPS["$addr"]="$cpp"
  done

  echo ""
  echo "================================================================================"
  echo "[Wave $wave / $MAX_WAVES] Claimed ${#WAVE_ADDRS[@]} smallest ready function(s) across distinct files:"
  for addr in "${WAVE_ADDRS[@]}"; do
    echo "  - $addr (${FUNC_SIZES[$addr]}B) -> ${FUNC_CPPS[$addr]}"
  done
  echo "================================================================================"

  UNSOLVED=("${WAVE_ADDRS[@]}")

  # Escalate unsolved functions strictly through the 6-model linear chain (one model choice at a time)
  for model_idx in "${!MODEL_CHAIN[@]}"; do
    if (( ${#UNSOLVED[@]} == 0 )); then
      break
    fi

    model_choice="${MODEL_CHAIN[$model_idx]}"
    step_num=$((model_idx + 1))
    total_steps="${#MODEL_CHAIN[@]}"

    # We may retry the same model_choice on an alternate backend (e.g. claude -> agy for Sonnet/Opus) if rate-limited
    while (( ${#UNSOLVED[@]} > 0 )); do
      backend="$(resolve_backend_for_model "$model_choice")"
      if [[ "$backend" == "none" ]]; then
        echo "  [!] $model_choice is currently unavailable / cooling down on all backends; escalating to next model."
        break
      fi

      echo ""
      echo "--- [Wave $wave | Step $step_num/$total_steps: $model_choice (via $backend)] Launching ${#UNSOLVED[@]} parallel agent(s) ---"

      PIDS=()
      PID_ADDR=()
      PID_LOG=()

      slot=0
      for addr in "${UNSOLVED[@]}"; do
        log_file="$(mktemp "/tmp/endorphin_w${wave}_s${step_num}_${model_choice}_${addr}.XXXXXX.log")"
        echo "  [Slot $((slot+1))/${#UNSOLVED[@]}] $addr (${FUNC_SIZES[$addr]}B) -> $model_choice ($backend)"

        run_single_function_agent "$model_choice" "$backend" "$addr" "$log_file" &
        pid=$!
        PIDS+=("$pid")
        PID_ADDR["$pid"]="$addr"
        PID_LOG["$pid"]="$log_file"
        ((slot++))
      done

      rate_limited_in_pass=0
      for pid in "${PIDS[@]}"; do
        wait "$pid"
        rc=$?
        addr="${PID_ADDR[$pid]}"
        log_file="${PID_LOG[$pid]}"

        if "$WORK_BIN" is-matched "$addr" >/dev/null 2>&1; then
          echo "  [+] MATCHED: $addr via $model_choice ($backend)!"
        elif [[ $rc -eq 42 ]]; then
          rate_limited_in_pass=1
        else
          echo "  [-] Unmatched on $model_choice ($backend): $addr"
        fi
        rm -f "$log_file"
      done

      # Clean any unverified stubs/edits from failed tries before next step
      "$WORK_BIN" clean >/dev/null 2>&1 || true

      # Recompute remaining unsolved functions in this wave
      STILL_UNSOLVED=()
      for addr in "${UNSOLVED[@]}"; do
        if ! "$WORK_BIN" is-matched "$addr" >/dev/null 2>&1; then
          STILL_UNSOLVED+=("$addr")
        fi
      done
      UNSOLVED=("${STILL_UNSOLVED[@]}")

      if (( rate_limited_in_pass == 1 )); then
        mark_rate_limited "${backend}:${model_choice}"
        # If this model is also available on the other backend (e.g. Sonnet/Opus via agy), loop once more to run on it!
        next_backend="$(resolve_backend_for_model "$model_choice")"
        if [[ "$next_backend" != "none" && "$next_backend" != "$backend" && ${#UNSOLVED[@]} -gt 0 ]]; then
          echo "  [*] Switching $model_choice to alternate backend ($next_backend) for ${#UNSOLVED[@]} remaining function(s)..."
          continue
        fi
      fi
      break
    done
  done

  # Any function still unsolved after all 6 models in MODEL_CHAIN is deferred via work skip
  if (( ${#UNSOLVED[@]} > 0 )); then
    echo "--- [Wave $wave] Deferring ${#UNSOLVED[@]} function(s) unmatched after full 6-model escalation ---"
    for addr in "${UNSOLVED[@]}"; do
      "$WORK_BIN" skip "$addr" "Unmatched after full escalation (claude-haiku-5.5 -> gpt-oss-120b -> gemini-3.8-flash -> claude-sonnet-5.5 -> claude-opus-5.5 -> gemini-4-argon)" || true
    done
  fi

  # Ensure any solved functions are committed individually (1 commit per solved function) and clean unverified edits
  "$WORK_BIN" commit-pending >/dev/null 2>&1 || true
  "$WORK_BIN" clean >/dev/null 2>&1 || true

  if (( wave % PUSH_EVERY == 0 )); then
    echo "[*] Pushing progress to GitHub (triggers Windows CI + HTML dashboard build)..."
    git push || true
  fi
done

echo "=== Parallel grind session finished ==="
"$STATUS_BIN" || true
