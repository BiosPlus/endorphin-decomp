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
        build/units.json|build/units/*|build/classes.json|build/target.json)
          deny_tool "Direct editing of $REL_PATH is forbidden; use ./tools/work check or ./tools/work skip."
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
      if echo "$CMD_LINE" | grep -qE 'rm[[:space:]]+(-[a-zA-Z]*r[a-zA-Z]*f|--recursive)[[:space:]]+(/|\.|src|include|build|tools|\*)'; then
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
    fi
    allow_tool
    ;;
esac

allow_tool
