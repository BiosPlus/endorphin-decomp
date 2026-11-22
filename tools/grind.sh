#!/usr/bin/env bash
# Thin wrapper: the orchestrator now lives in tools/grind (Go). Same arguments and environment variables as before:
#   tools/grind.sh [MAX_WAVES=50] [WAVE_SIZE=5] [PUSH_EVERY=5]
# Knobs: AGENT_TIMEOUT AGENT_EFFORTS SKIP_MED_BELOW_PCT COOLDOWN_BASE_SECS PREFER_AGY_CLAUDE DEPS_FIRST RUN_AUTO_SOLVE
#   AUTO_SOLVE_EVERY (new: re-run auto_solve every N finished functions, default 25, 0 = start only) RETRY_DEFERRED RETRY_SKIPPED
#   MAX_SIZE IGNORE_ATTEMPTS STATUS_ON_MATCH WORK_ISOLATED PER_FILE_CAP ESC_CAP MODEL_CAPS ESC_BACKLOG_FACTOR
#   MODEL_MIN_SIZE ADAPTIVE_CHAIN ROUTE_MIN_TRIALS ROUTE_MIN_YIELD MODEL_TIERS LIMIT_PROBE_SECS LIMIT_PROBE_MAX_SECS
#   GRIND_VERBOSE GRIND_PLAIN DASH_EVENT_ROWS GRIND_ATTEMPTS_FILE GRIND_RESULTS_LOG GRIND_EVENTS_LOG
# See tools/grind/config.go for defaults.
set -euo pipefail
REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"
BIN="$REPO_ROOT/.local/bin/grind"
if [[ ! -x "$BIN" || -n "$(find tools/grind internal -name '*.go' -newer "$BIN" -print -quit)" ]]; then
  echo "[*] Building fast binary: .local/bin/grind ..."
  mkdir -p "$REPO_ROOT/.local/bin"
  go build -o "$BIN" ./tools/grind
fi
exec "$BIN" "$@"
