# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12414 / 24049` (**51.62%**) — `9322` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1326525 / 4496005 bytes` (**29.50%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1470 / 2405 | 61.12% | 57265 / 97731 | 58.59% | 935 fn |
| **P30-40 (48-71B)** | 1059 / 2405 | 44.03% | 62936 / 144549 | 43.54% | 1346 fn |
| **P40-50 (71-91B)** | 1149 / 2405 | 47.78% | 95744 / 194373 | 49.26% | 1256 fn |
| **P50-60 (91-122B)** | 1296 / 2405 | 53.89% | 139680 / 256906 | 54.37% | 1109 fn |
| **P60-70 (122-159B)** | 1001 / 2405 | 41.62% | 134882 / 339038 | 39.78% | 1404 fn |
| **P70-80 (159-178B)** | 261 / 2405 | 10.85% | 43986 / 400567 | 10.98% | 2144 fn |
| **P80-90 (178-335B)** | 910 / 2405 | 37.84% | 218393 / 583211 | 37.45% | 1495 fn |
| **P90-100 (335-36100B)** | 638 / 2404 | 26.54% | 491653 / 2392860 | 20.55% | 1766 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6753 | 526035 | 72.44% |
| `claude-haiku-5.5@low` | 892 | 254338 | 9.57% |
| `gemini-3.8-flash@low` | 523 | 192908 | 5.61% |
| `gemini-4-hydrogen@low` | 501 | 203675 | 5.37% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.80% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.75% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.27% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.11% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.04% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
