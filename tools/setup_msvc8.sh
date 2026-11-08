#!/usr/bin/env bash
set -euo pipefail

# Resolve repo root
REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
MSVC_ROOT="$REPO_ROOT/.local/msvc8"
WINE_PREFIX="$REPO_ROOT/.local/wine_msvc8"

echo "=== Endorphin Decomp: MSVC 2005 (14.00.50727.42) Linux Setup ==="

for cmd in 7z cabextract wine winepath; do
  if ! command -v "$cmd" >/dev/null 2>&1; then
    echo "Error: Required command '$cmd' not found."
    echo "On Arch/CachyOS, install with: sudo pacman -S p7zip cabextract wine"
    exit 1
  fi
done

if [[ $# -lt 1 ]]; then
  cat << 'EOF'
Usage:
  ./tools/setup_msvc8.sh <path-to-vs2005-pro.iso-or-extracted-dir> [path-to-win-sdk.iso]

Where to get the exact compiler ISO (Archive.org):
  1. Visual Studio 2005 Professional Edition ( Disc 1 ISO )
     Provides: cl.exe (14.00.50727.42), CRT headers/libs, and ATLMFC (afxwin.h)
     Look for: en_vs_2005_pro_dvd.iso or vs2005_pro_disc1.iso
  2. (Optional if bundled) Windows Server 2003 R2 Platform SDK ISO
     Provides: windows.h, gl/gl.h, gdi32.lib, opengl32.lib
     (Note: VS2005 Pro DVD already bundles the Platform SDK inside VC/PlatformSDK!)

Once downloaded, run:
  ./tools/setup_msvc8.sh ~/Downloads/en_vs_2005_pro_dvd.iso
EOF
  exit 1
fi

SRC_INPUT="$1"
TMP_EXTRACT="$(mktemp -d /tmp/msvc8_extract.XXXXXX)"
trap 'rm -rf "$TMP_EXTRACT"' EXIT

echo "[1/5] Inspecting source media: $SRC_INPUT"
if [[ -f "$SRC_INPUT" ]]; then
  echo "      Extracting ISO contents to temporary staging..."
  7z x -y "$SRC_INPUT" -o"$TMP_EXTRACT/iso" >/dev/null
  MEDIA_DIR="$TMP_EXTRACT/iso"
elif [[ -d "$SRC_INPUT" ]]; then
  MEDIA_DIR="$SRC_INPUT"
else
  echo "Error: $SRC_INPUT is neither a file nor a directory."
  exit 1
fi

echo "[2/5] Extracting CAB archives (this takes 1-2 minutes)..."
mkdir -p "$TMP_EXTRACT/unpacked"
find "$MEDIA_DIR" -iname "*.cab" | while read -r cab; do
  cabextract -q -L -d "$TMP_EXTRACT/unpacked" "$cab" || true
done

mkdir -p "$MSVC_ROOT"/{bin,include,lib,atlmfc/include,atlmfc/lib,platformsdk/include,platformsdk/lib}

echo "[3/5] Locating cl.exe (14.00.50727) and MSPDB80 runtime DLLs..."
# In VS2005 cab layout, files may be extracted directly into Program Files/... or flat with _ suffixes
CL_CANDIDATE=$(find "$TMP_EXTRACT" -iname "cl.exe*" | head -n 1 || true)
if [[ -z "$CL_CANDIDATE" ]]; then
  echo "Warning: Could not auto-locate cl.exe via CABs. If you already unpacked VC/ on Windows/Wine, copy VC/ into $MSVC_ROOT"
else
  # Copy VC directory tree if structured, or harvest key folders
  VC_DIR=$(find "$TMP_EXTRACT" -type d -iname "vc" | head -n 1 || true)
  if [[ -n "$VC_DIR" ]]; then
    cp -rn "$VC_DIR"/* "$MSVC_ROOT/" || true
  fi
  # Ensure mspdb80.dll, mspdbcore.dll, mspdbsrv.exe sit right next to cl.exe so Wine finds them without PATH hacks
  find "$TMP_EXTRACT" \( -iname "mspdb*.dll" -o -iname "mspdbsrv.exe" -o -iname "msvcr80.dll" -o -iname "msvcp80.dll" \) \
    -exec cp -f {} "$MSVC_ROOT/bin/" \; || true
fi

echo "[4/5] Initializing headless Wine prefix at $WINE_PREFIX..."
export WINEPREFIX="$WINE_PREFIX"
export WINEDEBUG="-all"
export DISPLAY=""
wineboot -u >/dev/null 2>&1 || true

echo "[5/5] Creating headless compiler wrapper: tools/cl_wine.sh"
cat << 'EOF' > "$REPO_ROOT/tools/cl_wine.sh"
#!/usr/bin/env bash
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
MSVC_ROOT="$REPO_ROOT/.local/msvc8"
export WINEPREFIX="$REPO_ROOT/.local/wine_msvc8"
export WINEDEBUG="-all"
# Prevent Wine from trying to open X11/Wayland windows during headless builds
unset DISPLAY WAYLAND_DISPLAY

WIN_MSVC=$(winepath -w "$MSVC_ROOT")

# Standard INCLUDE and LIB paths for MSVC 2005 + ATLMFC + bundled PlatformSDK
export INCLUDE="${WIN_MSVC}\\include;${WIN_MSVC}\\atlmfc\\include;${WIN_MSVC}\\PlatformSDK\\Include;${WIN_MSVC}\\platformsdk\\include"
export LIB="${WIN_MSVC}\\lib;${WIN_MSVC}\\atlmfc\\lib;${WIN_MSVC}\\PlatformSDK\\Lib;${WIN_MSVC}\\platformsdk\\lib"
export PATH="${WIN_MSVC}\\bin"

exec wine "$MSVC_ROOT/bin/cl.exe" /nologo "$@"
EOF
chmod +x "$REPO_ROOT/tools/cl_wine.sh"

echo "Done! Test your compiler with:"
echo "  ./tools/cl_wine.sh"
