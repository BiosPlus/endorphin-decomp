# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10090 / 24049` (**41.96%**) — `6998` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `588463 / 4496005 bytes` (**13.09%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2196 / 2405 | 91.31% | 55593 / 61769 | 90.00% | 209 fn |
| **P20-30 (32-48B)** | 1165 / 2405 | 48.44% | 45488 / 97731 | 46.54% | 1240 fn |
| **P30-40 (48-71B)** | 893 / 2405 | 37.13% | 53278 / 144549 | 36.86% | 1512 fn |
| **P40-50 (71-91B)** | 1043 / 2405 | 43.37% | 87142 / 194373 | 44.83% | 1362 fn |
| **P50-60 (91-122B)** | 1054 / 2405 | 43.83% | 114886 / 256906 | 44.72% | 1351 fn |
| **P60-70 (122-159B)** | 887 / 2405 | 36.88% | 119107 / 339038 | 35.13% | 1518 fn |
| **P70-80 (159-178B)** | 191 / 2405 | 7.94% | 32177 / 400567 | 8.03% | 2214 fn |
| **P80-90 (178-335B)** | 282 / 2405 | 11.73% | 56123 / 583211 | 9.62% | 2123 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6584 | 486829 | 94.08% |
| `gemini-3.8-flash` | 388 | 53750 | 5.54% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.34% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
