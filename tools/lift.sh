#!/usr/bin/env bash
# Thin wrapper: the parallel lift orchestrator lives in tools/lift (Go).
# Usage:
#   tools/lift.sh [MAX_WAVES=50] [WAVE_SIZE=5] [PUSH_EVERY=5]
# Knobs:
#   LIFT_SCOPE=core|all|<comma-list>  LIFT_DEPS_FIRST=1  LIFT_INCLUDE_CPP=0  LIFT_ISOLATED=1
#   RUN_AUTO_LIFT=1  AUTO_LIFT_EVERY=25
#   MAX_SIZE=65535  MODEL_TIERS  AGENT_EFFORTS  AGENT_TIMEOUT=360  PREFER_AGY_CLAUDE=1
#   COOLDOWN_BASE_SECS=180  PER_FILE_CAP=10  ESC_CAP=4  MODEL_CAPS  MODEL_MIN_SIZE
#   IGNORE_ATTEMPTS=0  LIFT_VERBOSE=0  LIFT_PLAIN=0  LIFT_ATTEMPTS_FILE  LIFT_RESULTS_LOG  LIFT_EVENTS_LOG
# See tools/lift/config.go for defaults.
set -euo pipefail
REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$REPO_ROOT"
BIN="$REPO_ROOT/.local/bin/lift"
if [[ ! -x "$BIN" || -n "$(find tools/lift internal -name '*.go' -newer "$BIN" -print -quit)" ]]; then
  echo "[*] Building fast binary: .local/bin/lift ..."
  mkdir -p "$REPO_ROOT/.local/bin"
  go build -o "$BIN" ./tools/lift
fi
exec "$BIN" "$@"
