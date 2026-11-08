#!/usr/bin/env bash
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
MSVC_ROOT="$REPO_ROOT/.local/msvc8"
WINE_PREFIX="$REPO_ROOT/.local/wine_msvc8"

echo "=== Endorphin Decomp: MSVC 2005 (14.00.50727.42) Local ISO Setup ==="

for cmd in 7z msiextract wine winepath zip; do
  if ! command -v "$cmd" >/dev/null 2>&1; then
    echo "Error: Required command '$cmd' not found."
    exit 1
  fi
done

ISO_PATH="${1:-}"
if [[ -z "$ISO_PATH" ]]; then
  for candidate in \
    "$REPO_ROOT/en_vs_2005_pro_dvd.iso" \
    "$REPO_ROOT/Microsoft Visual Studio 2005 Professional Edition - Disc 1.iso" \
    "$REPO_ROOT/.local/en_vs_2005_pro_dvd.iso"; do
    if [[ -f "$candidate" ]]; then
      ISO_PATH="$candidate"
      break
    fi
  done
fi

if [[ -z "$ISO_PATH" || ! -f "$ISO_PATH" ]]; then
  echo "Usage: ./tools/setup_msvc8.sh <path-to-vs2005-pro.iso>"
  exit 1
fi

TMP_STAGE="$(mktemp -d /tmp/msvc8_stage.XXXXXX)"
trap 'rm -rf "$TMP_STAGE"' EXIT

echo "[1/5] Extracting ISO ($ISO_PATH)..."
7z x -y "$ISO_PATH" -o"$TMP_STAGE/iso" >/dev/null

MSI_FILE="$(find "$TMP_STAGE/iso" -iname "vs_setup.msi" | head -n 1)"
echo "[2/5] Running msiextract on $MSI_FILE..."
mkdir -p "$TMP_STAGE/extracted"
msiextract -C "$TMP_STAGE/extracted" "$MSI_FILE" >/dev/null

echo "[3/5] Populating $MSVC_ROOT..."
rm -rf "$MSVC_ROOT"
mkdir -p "$MSVC_ROOT"
cp -a "$TMP_STAGE/extracted/Program Files/Microsoft Visual Studio 8/VC/"* "$MSVC_ROOT/"
cp -Lf "$TMP_STAGE/extracted/Program Files/Microsoft Visual Studio 8/Common7/IDE/"mspdb*.dll "$MSVC_ROOT/bin/"
cp -Lf "$TMP_STAGE/extracted/Program Files/Microsoft Visual Studio 8/Common7/IDE/mspdbsrv.exe" "$MSVC_ROOT/bin/"
cp -Lf "$TMP_STAGE/extracted/Program Files/Microsoft Visual Studio 8/VC/redist/x86/Microsoft.VC80.CRT/"*.dll "$MSVC_ROOT/bin/"
cp -Lf "$TMP_STAGE/extracted/Program Files/Microsoft Visual Studio 8/VC/redist/x86/Microsoft.VC80.CRT/"*.manifest "$MSVC_ROOT/bin/"

echo "[4/5] Creating tools/cl_wine.sh and testing cl.exe under Wine..."
cat << 'EOF' > "$REPO_ROOT/tools/cl_wine.sh"
#!/usr/bin/env bash
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
MSVC_ROOT="$REPO_ROOT/.local/msvc8"
export WINEPREFIX="$REPO_ROOT/.local/wine_msvc8"
export WINEDEBUG="-all"
unset DISPLAY WAYLAND_DISPLAY

WIN_MSVC=$(winepath -w "$MSVC_ROOT")
export INCLUDE="${WIN_MSVC}\\include;${WIN_MSVC}\\atlmfc\\include;${WIN_MSVC}\\PlatformSDK\\Include"
export LIB="${WIN_MSVC}\\lib;${WIN_MSVC}\\atlmfc\\lib;${WIN_MSVC}\\PlatformSDK\\Lib"
export WINEPATH="${WIN_MSVC}\\bin"

ARGS=()
for arg in "$@"; do
  case "$arg" in
    /Fo/*)
      ARGS+=("/Fo$(winepath -w "${arg#/Fo}")")
      ;;
    /Fe/*)
      ARGS+=("/Fe$(winepath -w "${arg#/Fe}")")
      ;;
    /Fd/*)
      ARGS+=("/Fd$(winepath -w "${arg#/Fd}")")
      ;;
    /*)
      if [[ -e "$arg" ]]; then
        ARGS+=("$(winepath -w "$arg")")
      else
        ARGS+=("$arg")
      fi
      ;;
    *)
      ARGS+=("$arg")
      ;;
  esac
done

exec wine "$MSVC_ROOT/bin/cl.exe" "${ARGS[@]}"
EOF
chmod +x "$REPO_ROOT/tools/cl_wine.sh"

echo "[5/5] Creating .local/msvc8.zip..."
(cd "$MSVC_ROOT" && zip -q -r "$REPO_ROOT/.local/msvc8.zip" .)
echo "Done!"
