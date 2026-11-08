# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `3095 / 24049` (**12.87%**)
- **In-Scope Code Bytes Matched:** `46528 / 4496005 bytes` (**1.03%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **Tiny (<32B)** | 3095 / 4590 | 67.43% | 46528 / 79730 | 58.36% | 1495 fn |
| **Small (32-256B)** | 0 / 16285 | 0.00% | 0 / 1796884 | 0.00% | 16285 fn |
| **Medium (256-512B)** | 0 / 1757 | 0.00% | 0 / 632676 | 0.00% | 1757 fn |
| **Large (>512B)** | 0 / 1417 | 0.00% | 0 / 1986715 | 0.00% | 1417 fn |

## Tooling & Workflow

- `go run ./tools/build_and_match`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/worker next -n 20`: Displays the next 20 smallest unmatched leaf functions (`num_callees == 0`) along with their disassembly and RTTI class header context.
- `go run ./tools/status -update`: Updates `README.md` and `docs/index.html` with the latest verified byte-match metrics.
