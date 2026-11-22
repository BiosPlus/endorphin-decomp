#!/usr/bin/env bash
# PreToolUse security guard for worker sessions (.claude/settings.json).
# Enforces repository security boundaries so --dangerously-skip-permissions is never required.
set -uo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PAYLOAD="$(cat)"

if [[ -z "$PAYLOAD" ]]; then
  echo '{"decision":"allow"}'
  exit 0
fi

HAS_JQ=0
command -v jq >/dev/null 2>&1 && HAS_JQ=1

IS_CLAUDE=0
TOOL_NAME=""
CMD_LINE=""
FILE_PATH=""

if [[ $HAS_JQ -eq 1 ]]; then
  if echo "$PAYLOAD" | jq -e '.tool_name != null' >/dev/null 2>&1; then
    IS_CLAUDE=1
    TOOL_NAME="$(echo "$PAYLOAD" | jq -r '.tool_name // ""')"
    CMD_LINE="$(echo "$PAYLOAD" | jq -r '.tool_input.command // ""')"
    FILE_PATH="$(echo "$PAYLOAD" | jq -r '.tool_input.file_path // .tool_input.path // ""')"
  else
    TOOL_NAME="$(echo "$PAYLOAD" | jq -r '.toolCall.name // ""')"
    CMD_LINE="$(echo "$PAYLOAD" | jq -r '.toolCall.args.CommandLine // .toolCall.args.command // ""')"
    FILE_PATH="$(echo "$PAYLOAD" | jq -r '.toolCall.args.Path // .toolCall.args.TargetFile // .toolCall.args.file_path // ""')"
  fi
fi

allow_tool() {
  if [[ $IS_CLAUDE -eq 1 ]]; then
    echo '{"decision":"approve","hookSpecificOutput":{"hookEventName":"PreToolUse","permissionDecision":"allow"}}'
  else
    echo '{"decision":"allow"}'
  fi
  exit 0
}

deny_tool() {
  local reason="$1"
  if [[ $IS_CLAUDE -eq 1 ]]; then
    jq -n --arg r "$reason" '{"decision":"block","reason":$r,"hookSpecificOutput":{"hookEventName":"PreToolUse","permissionDecision":"deny","permissionDecisionReason":$r}}'
    echo "Security Guard Blocked: $reason" >&2
    exit 2
  else
    if [[ $HAS_JQ -eq 1 ]]; then
      jq -n --arg r "$reason" '{"decision":"deny","reason":$r}'
    else
      echo "{\"decision\":\"deny\",\"reason\":\"$reason\"}"
    fi
    exit 0
  fi
}

# Parallel (WIP) mode, set by tools/grind.sh or tools/lift.sh: several agents share one shard .cpp, so each agent
# may write only its own src/wip/fn_<VA>.cpp (or lifted/wip/fn_<VA>.cpp in lift mode).
PARALLEL=0
[[ "${WORK_ISOLATED:-0}" == 1 || "${LIFT_ISOLATED:-0}" == 1 ]] && PARALLEL=1
OWN_WIP=""
if [[ -n "${WORK_ASSIGNED_ADDR:-}" ]]; then
  _va="${WORK_ASSIGNED_ADDR#0x}"; _va="${_va#0X}"
  OWN_WIP="src/wip/fn_${_va^^}.cpp"
fi
LIFT_MODE=0
OWN_LIFT_WIPS=()
if [[ -n "${LIFT_ASSIGNED_ADDR:-}" ]]; then
  LIFT_MODE=1
  IFS=',' read -ra _lvas <<< "$LIFT_ASSIGNED_ADDR"
  for _raw in "${_lvas[@]}"; do
    _lva="${_raw#0x}"; _lva="${_lva#0X}"
    [[ -n "$_lva" ]] && OWN_LIFT_WIPS+=("lifted/wip/fn_${_lva^^}.cpp")
  done
fi
OWN_LIFT_WIP="${OWN_LIFT_WIPS[0]:-}"

is_own_lift_wip() {
  local p="${1^^}" w
  for w in "${OWN_LIFT_WIPS[@]}"; do
    [[ "$p" == "${w^^}" ]] && return 0
  done
  return 1
}

# Returns 0 if repo-relative path $1 is off-limits to this agent in parallel/lift mode (sets PARALLEL_DENY_REASON).
parallel_path_denied() {
  local p="$1"
  PARALLEL_DENY_REASON=""
  if [[ $LIFT_MODE -eq 1 ]]; then
    case "$p" in
      src/*|include/*)
        PARALLEL_DENY_REASON="Lift mode: src/ and include/ are read-only ($p). Edit ${OWN_LIFT_WIP:-your lifted/wip/fn_<VA>.cpp}."
        return 0 ;;
      lifted/wip/*)
        if [[ ${#OWN_LIFT_WIPS[@]} -gt 0 ]] && ! is_own_lift_wip "$p"; then
          PARALLEL_DENY_REASON="Lift mode: you may only edit your assigned lifted/wip/ file(s) ($p belongs to another agent)."
          return 0
        fi
        return 1 ;;
      lifted/*)
        if [[ "${LIFT_ISOLATED:-0}" == 1 ]]; then
          PARALLEL_DENY_REASON="Lift parallel mode: never edit lifted/ files directly ($p). Edit ${OWN_LIFT_WIP:-your lifted/wip/fn_<VA>.cpp}; liftwork check merges it."
          return 0
        fi
        return 1 ;;
    esac
    return 1
  fi
  case "$p" in
    include/*)
      PARALLEL_DENY_REASON="Parallel mode: include/ is read-only ($p); a header edit can break other shards. Use raw offsets in your WIP file."
      return 0 ;;
    src/wip/*)
      if [[ -n "$OWN_WIP" && "${p^^}" != "${OWN_WIP^^}" ]]; then
        PARALLEL_DENY_REASON="Parallel mode: you may only edit $OWN_WIP ($p belongs to another agent)."
        return 0
      fi
      return 1 ;;
    src/*)
      PARALLEL_DENY_REASON="Parallel mode: never edit shard files directly ($p). Edit ${OWN_WIP:-your src/wip/fn_<VA>.cpp}; work check merges it."
      return 0 ;;
  esac
  return 1
}

# 1. Gate file write / edit tools
case "$TOOL_NAME" in
  write_file|edit_file|replace_file_content|multi_replace_file_content|Write|Edit|MultiEdit|NotebookEdit)
    if [[ -n "$FILE_PATH" ]]; then
      # Resolve path relative to REPO_ROOT if relative
      if [[ "$FILE_PATH" != /* ]]; then
        ABS_PATH="$REPO_ROOT/$FILE_PATH"
      else
        ABS_PATH="$FILE_PATH"
      fi
      NORM_PATH="$(realpath -m "$ABS_PATH" 2>/dev/null || echo "$ABS_PATH")"

      # Allow scratch / temp files in /tmp or ~/.gemini/antigravity-cli/brain
      if [[ "$NORM_PATH" == /tmp/* || "$NORM_PATH" == */.gemini/antigravity-cli/brain/* ]]; then
        allow_tool
      fi

      # Block any write outside the repository root
      if [[ "$NORM_PATH" != "$REPO_ROOT"/* ]]; then
        deny_tool "Write access outside repository root ($NORM_PATH) is forbidden."
      fi

      REL_PATH="${NORM_PATH#"$REPO_ROOT"/}"

      # Block direct edits to protected ledger, CI, security hooks, HTML, or binary caches
      case "$REL_PATH" in
        build/units.json|build/units/*|build/lifted/*|build/classes.json|build/target.json)
          deny_tool "Direct editing of $REL_PATH is forbidden; use ./.local/bin/work or ./.local/bin/liftwork."
          ;;
        docs/*|*.html|*.htm)
          deny_tool "Generating or editing HTML files ($REL_PATH) locally is forbidden (handled by CI)."
          ;;
        .local/*|*.exe|*.dll|*.obj|*.lib|*.pdb|*.idb)
          deny_tool "Direct modification of binary/cache artifact ($REL_PATH) is forbidden."
          ;;
        .git/*|.github/*|.claude/*|tools/security_guard.sh|tools/pre-commit)
          deny_tool "Modifying repository security or CI configuration ($REL_PATH) is forbidden."
          ;;
      esac

      if [[ $PARALLEL -eq 1 ]] && parallel_path_denied "$REL_PATH"; then
        deny_tool "$PARALLEL_DENY_REASON"
      fi
    fi
    allow_tool
    ;;
esac

# 2. Gate shell / terminal command execution
case "$TOOL_NAME" in
  run_command|Bash| execute_command)
    if [[ -n "$CMD_LINE" ]]; then
      # Block privilege escalation and destructive filesystem/git commands
      if echo "$CMD_LINE" | grep -qE '(^|[;&|[:space:]])(sudo|su|doas|mkfs|dd[[:space:]]+if=|chmod[[:space:]]+777|chown[[:space:]])([[:space:]]|$)'; then
        deny_tool "Privilege escalation or raw device command is forbidden."
      fi
      if echo "$CMD_LINE" | grep -qE 'rm[[:space:]]+(-[a-zA-Z]*r[a-zA-Z]*f|--recursive)[[:space:]]+(/|\.|src|include|lifted|build|tools|\*)'; then
        deny_tool "Destructive recursive rm on repository directories is forbidden."
      fi
      if echo "$CMD_LINE" | grep -qE 'git[[:space:]]+(reset[[:space:]]+--hard|clean[[:space:]]+-[a-zA-Z]*f|push[[:space:]]+(-f|--force)|branch[[:space:]]+-D)'; then
        deny_tool "Destructive git command (reset --hard, clean -f, push --force, branch -D) is forbidden."
      fi

      # Block network exfiltration or arbitrary downloads during worker runs
      if echo "$CMD_LINE" | grep -qE '(^|[;&|[:space:]])(curl|wget|nc|netcat|ncat|scp|sftp|ftp|telnet)([[:space:]]|$)'; then
        deny_tool "External network transfer tool in worker shell is forbidden."
      fi

      # Block Python per project Hard Rules (Go/Bash tooling only)
      if echo "$CMD_LINE" | grep -qE '(^|[;&|[:space:]])(python|python3|pip|pip3)([[:space:]]|$)'; then
        deny_tool "Python is forbidden by repository rules (use Go/Bash tooling only)."
      fi

      # Block shell redirection or in-place edits targeting build/units.json, HTML files, or security hooks
      if echo "$CMD_LINE" | grep -qE '(>|>>|tee[[:space:]]+|sed[[:space:]]+-i|awk[[:space:]]+-i|mv[[:space:]]+.*|cp[[:space:]]+.*)(build/units(\.json|/)|docs/|\.html|\.claude/|tools/security_guard\.sh|\.git/hooks)'; then
        deny_tool "Direct shell modification of protected files (build/units.json, HTML, or security hooks) is forbidden."
      fi

      if [[ $PARALLEL -eq 1 ]]; then
        # Git index/worktree writes race with `work check`'s locked commits, and a checkout/restore of a shard would
        # wipe another agent's merged-but-uncommitted match. `work check` commits for you.
        if echo "$CMD_LINE" | grep -qE '(^|[;&|[:space:]])git[[:space:]]+(add|commit|checkout|restore|reset|stash|rm|mv|apply|am|cherry-pick|merge|rebase|revert|switch|update-index)([[:space:]]|$)'; then
          deny_tool "Parallel mode: git write commands are forbidden; ./.local/bin/work check or ./.local/bin/liftwork check commits for you."
        fi
        # Shell writes into src/ or include/ outside this agent's own WIP file: redirection targets, plus every path
        # argument of an in-place / file-moving command (over-blocks `cp src/x ...` as a read; use the Read tool).
        _targets="$( {
          echo "$CMD_LINE" | grep -oE '>>?[[:space:]]*[^[:space:];&|]+' | sed -E 's/^>>?[[:space:]]*//'
          echo "$CMD_LINE" | grep -oE '(tee|sed[[:space:]]+-i[^[:space:]]*|perl[[:space:]]+-[a-zA-Z]*i[a-zA-Z]*|(^|[[:space:];&|(])(cp|mv|rm|truncate|install|ln|touch|dd))[[:space:]][^;&|]*' | tr ' \t' '\n\n'
        } )"
        while IFS= read -r _t; do
          [[ -z "$_t" ]] && continue
          _t="${_t#\"}"; _t="${_t%\"}"; _t="${_t#\'}"; _t="${_t%\'}"
          _t="${_t#"$REPO_ROOT"/}"; _t="${_t#./}"
          if parallel_path_denied "$_t"; then
            deny_tool "$PARALLEL_DENY_REASON"
          fi
        done <<< "$_targets"
      fi
    fi
    allow_tool
    ;;
esac

allow_tool
