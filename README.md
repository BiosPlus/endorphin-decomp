# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11327 / 24049` (**47.10%**) — `8235` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `862861 / 4496005 bytes` (**19.19%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2201 / 2405 | 91.52% | 55749 / 61769 | 90.25% | 204 fn |
| **P20-30 (32-48B)** | 1224 / 2405 | 50.89% | 47749 / 97731 | 48.86% | 1181 fn |
| **P30-40 (48-71B)** | 1002 / 2405 | 41.66% | 59551 / 144549 | 41.20% | 1403 fn |
| **P40-50 (71-91B)** | 1093 / 2405 | 45.45% | 91225 / 194373 | 46.93% | 1312 fn |
| **P50-60 (91-122B)** | 1224 / 2405 | 50.89% | 132065 / 256906 | 51.41% | 1181 fn |
| **P60-70 (122-159B)** | 953 / 2405 | 39.63% | 128260 / 339038 | 37.83% | 1452 fn |
| **P70-80 (159-178B)** | 235 / 2405 | 9.77% | 39567 / 400567 | 9.88% | 2170 fn |
| **P80-90 (178-335B)** | 786 / 2405 | 32.68% | 188426 / 583211 | 32.31% | 1619 fn |
| **P90-100 (335-36100B)** | 230 / 2404 | 9.57% | 95600 / 2392860 | 4.00% | 2174 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 81.94% |
| `claude-haiku-5.5@low` | 462 | 106593 | 5.61% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.43% |
| `gemini-3.8-flash@low` | 261 | 59885 | 3.17% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.98% |
| `gemini-4-hydrogen@low` | 113 | 32086 | 1.37% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.30% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.12% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
