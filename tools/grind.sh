#!/usr/bin/env bash
set -uo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"

MAX_BATCHES="${1:-50}"          # Number of batches to run before stopping
FUNCS_PER_BATCH="${2:-5}"       # Functions per fresh context window
PUSH_EVERY="${3:-5}"            # Run git push every N batches

# Track exhausted providers during this session (0 = available, 1 = rate-limited/exhausted)
EXHAUSTED_CLAUDE_HAIKU=0
EXHAUSTED_CLAUDE_SONNET=0
EXHAUSTED_CLAUDE_OPUS=0
EXHAUSTED_AGY=0

HAS_CLAUDE=0
HAS_AGY=0
command -v claude >/dev/null 2>&1 && HAS_CLAUDE=1
command -v agy    >/dev/null 2>&1 && HAS_AGY=1

echo "=== Endorphin Autonomous Grinder ==="
echo "Detected CLIs: claude=$HAS_CLAUDE | agy=$HAS_AGY"

if [[ $HAS_CLAUDE -eq 0 && $HAS_AGY -eq 0 ]]; then
  echo "Error: Neither 'claude' nor 'agy' found in PATH."
  exit 1
fi

# Pick the best available runner based on target function byte size
select_runner() {
  local byte_size="${1:-16}"

  # Tier 0: Tiny functions (< 32 bytes) -> Always prefer Haiku first, then Gemini Flash, then Sonnet
  if (( byte_size < 32 )); then
    if [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_HAIKU -eq 0 ]]; then
      echo "claude-haiku"
      return
    elif [[ $HAS_AGY -eq 1 && $EXHAUSTED_AGY -eq 0 ]]; then
      echo "gemini-3.8-flash"
      return
    elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_SONNET -eq 0 ]]; then
      echo "claude-sonnet"
      return
    fi
  fi

  # Tier 1: Small functions (32 - 256 bytes) -> Prefer Haiku (<= 160B), then Gemini Flash, then Sonnet
  if (( byte_size <= 256 )); then
    if (( byte_size <= 160 )) && [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_HAIKU -eq 0 ]]; then
      echo "claude-haiku"
      return
    elif [[ $HAS_AGY -eq 1 && $EXHAUSTED_AGY -eq 0 ]]; then
      echo "gemini-3.8-flash"
      return
    elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_SONNET -eq 0 ]]; then
      echo "claude-sonnet"
      return
    elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_HAIKU -eq 0 ]]; then
      echo "claude-haiku"
      return
    fi
  fi

  # Tier 2: Medium functions (161 - 512 bytes) -> Alternate Sonnet and Gemini Argon to spread load
  if (( byte_size <= 512 )); then
    if (( RANDOM % 2 == 0 )) && [[ $HAS_AGY -eq 1 && $EXHAUSTED_AGY -eq 0 ]]; then
      echo "gemini-4-argon"
      return
    elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_SONNET -eq 0 ]]; then
      echo "claude-sonnet"
      return
    elif [[ $HAS_AGY -eq 1 && $EXHAUSTED_AGY -eq 0 ]]; then
      echo "gemini-4-argon"
      return
    elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_HAIKU -eq 0 ]]; then
      echo "claude-haiku"
      return
    fi
  fi

  # Tier 3: Large functions (> 512 bytes) -> Prefer Gemini Argon or Opus/Sonnet
  if [[ $HAS_AGY -eq 1 && $EXHAUSTED_AGY -eq 0 ]]; then
    echo "gemini-4-argon"
    return
  elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_OPUS -eq 0 ]]; then
    echo "claude-opus"
    return
  elif [[ $HAS_CLAUDE -eq 1 && $EXHAUSTED_CLAUDE_SONNET -eq 0 ]]; then
    echo "claude-sonnet"
    return
  fi

  echo "none"
}

mark_exhausted() {
  local runner="$1"
  echo "[!] Rate limit or quota hit on $runner — marking exhausted and failing over..."
  case "$runner" in
    claude-haiku|claude:haiku)   EXHAUSTED_CLAUDE_HAIKU=1 ;;
    claude-sonnet|claude:sonnet) EXHAUSTED_CLAUDE_SONNET=1 ;;
    claude-opus|claude:opus)     EXHAUSTED_CLAUDE_OPUS=1 ;;
    gemini-*|agy-*|agy:*)        EXHAUSTED_AGY=1 ;;
  esac
}

run_agent_batch() {
  local runner="$1"
  local max_size="$2"
  local log_file
  log_file="$(mktemp /tmp/endorphin_batch.XXXXXX.log)"

  export DECOMP_MODEL="$runner"
  local prompt="Read CLAUDE.md. Run 'go run ./tools/work next --max-size ${max_size}' and match the next ${FUNCS_PER_BATCH} functions one by one using 'go run ./tools/work check <addr> --model ${DECOMP_MODEL}'. If a function does not match within 10 tries, run 'go run ./tools/work skip <addr> \"reason\"' and move to the next. Do NOT generate or edit any HTML files. Stop after ${FUNCS_PER_BATCH} functions. Always commit every successful translation immediately."

  local exit_code=0
  case "$runner" in
    claude-*|claude:*)
      local model="${runner#claude-}"
      model="${model#claude:}"
      claude --model "$model" --dangerously-skip-permissions -p "$prompt" >"$log_file" 2>&1 || exit_code=$?
      ;;
    gemini-*|agy-*|agy:*)
      # Adjust flag if your local agy wrapper uses a different headless flag than -p / --prompt
      agy -p "$prompt" >"$log_file" 2>&1 || exit_code=$?
      ;;
  esac

  # Check output for quota / rate-limit strings
  if grep -qiE "rate limit|quota|usage limit|429|credit balance|overloaded|exceeded" "$log_file"; then
    cat "$log_file" | tail -n 10
    rm -f "$log_file"
    return 42
  fi

  cat "$log_file" | tail -n 15
  rm -f "$log_file"
  return $exit_code
}

for (( batch=1; batch<=MAX_BATCHES; batch++ )); do
  # Peek at the next function size from tools/work without creating a stub
  NEXT_INFO="$(go run ./tools/work next --peek 2>/dev/null || true)"
  NEXT_SIZE="$(echo "$NEXT_INFO" | grep -oE 'Size: [0-9]+' | awk '{print $2}' | head -n 1)"
  NEXT_SIZE="${NEXT_SIZE:-16}"

  if (( NEXT_SIZE < 32 )); then
    BATCH_MAX_SIZE="31"
    TIER_LABEL="Tiny (<32B)"
  elif (( NEXT_SIZE <= 256 )); then
    BATCH_MAX_SIZE="256"
    TIER_LABEL="Small (32-256B)"
  elif (( NEXT_SIZE <= 512 )); then
    BATCH_MAX_SIZE="512"
    TIER_LABEL="Medium (257-512B)"
  else
    BATCH_MAX_SIZE="65535"
    TIER_LABEL="Large (>512B)"
  fi

  RUNNER="$(select_runner "$NEXT_SIZE")"
  if [[ "$RUNNER" == "none" ]]; then
    echo "[!] All detected models/providers have hit their quota limit. Stopping cleanly."
    break
  fi

  echo ""
  echo "=================================================================="
  echo "[Batch $batch / $MAX_BATCHES] Next fn ~${NEXT_SIZE}B [${TIER_LABEL}] -> Routing to: $RUNNER (max-size ${BATCH_MAX_SIZE}B)"
  echo "=================================================================="

  run_agent_batch "$RUNNER" "$BATCH_MAX_SIZE"
  STATUS=$?

  if [[ $STATUS -eq 42 ]]; then
    mark_exhausted "$RUNNER"
    ((batch--)) # Retry this batch number immediately on the fallback provider
    continue
  fi

  # Refresh README scoreboard (no HTML!) and commit if units/src changed
  go run ./tools/status -readme >/dev/null 2>&1 || true

  if [[ -n "$(git status --porcelain src/ include/ build/units.json README.md 2>/dev/null)" ]]; then
    COAUTHOR=""
    case "$RUNNER" in
      gemini-*|agy-*|agy:*|antigravity*)
        COAUTHOR="Co-authored-by: Antigravity <noreply@google.com>"
        ;;
      claude-*|claude:*)
        COAUTHOR="Co-authored-by: Claude <noreply@anthropic.com>"
        ;;
    esac
    git add src/ include/ build/units.json README.md
    if [[ -n "$COAUTHOR" ]]; then
      git commit -m "Auto-grind batch $batch via $RUNNER" -m "$COAUTHOR" || true
    else
      git commit -m "Auto-grind batch $batch via $RUNNER" || true
    fi
  fi

  if (( batch % PUSH_EVERY == 0 )); then
    echo "[*] Pushing progress to GitHub (triggers Windows CI + HTML dashboard build)..."
    git push || true
  fi
done

echo "=== Grind session finished ==="
go run ./tools/status || true
