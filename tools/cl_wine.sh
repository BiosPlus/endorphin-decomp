#!/usr/bin/env bash
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
MSVC_ROOT="$REPO_ROOT/.local/msvc8"
export WINEPREFIX="$REPO_ROOT/.local/wine_msvc8"
export WINEDEBUG="-all"
unset DISPLAY WAYLAND_DISPLAY

WIN_MSVC="Z:${MSVC_ROOT//\//\\}"

export INCLUDE="${WIN_MSVC}\\include;${WIN_MSVC}\\atlmfc\\include;${WIN_MSVC}\\PlatformSDK\\Include;${WIN_MSVC}\\platformsdk\\include"
export LIB="${WIN_MSVC}\\lib;${WIN_MSVC}\\atlmfc\\lib;${WIN_MSVC}\\PlatformSDK\\Lib;${WIN_MSVC}\\platformsdk\\lib"
export WINEPATH="${WIN_MSVC}\\bin"

ARGS=()
for arg in "$@"; do
  if [[ "$arg" == /Fo/* ]]; then
    p="${arg#/Fo}"
    ARGS+=("/FoZ:${p//\//\\}")
  elif [[ "$arg" == /Fe/* ]]; then
    p="${arg#/Fe}"
    ARGS+=("/FeZ:${p//\//\\}")
  elif [[ "$arg" == /* && -e "$arg" ]]; then
    ARGS+=("Z:${arg//\//\\}")
  else
    ARGS+=("$arg")
  fi
done

exec wine "$MSVC_ROOT/bin/cl.exe" /nologo "${ARGS[@]}"
