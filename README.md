# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `9052 / 24049` (**37.64%**) — `5960` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `444839 / 4496005 bytes` (**9.89%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2163 / 2405 | 89.94% | 54591 / 61769 | 88.38% | 242 fn |
| **P20-30 (32-48B)** | 1082 / 2405 | 44.99% | 42101 / 97731 | 43.08% | 1323 fn |
| **P30-40 (48-71B)** | 824 / 2405 | 34.26% | 49306 / 144549 | 34.11% | 1581 fn |
| **P40-50 (71-91B)** | 987 / 2405 | 41.04% | 82561 / 194373 | 42.48% | 1418 fn |
| **P50-60 (91-122B)** | 966 / 2405 | 40.17% | 105585 / 256906 | 41.10% | 1439 fn |
| **P60-70 (122-159B)** | 651 / 2405 | 27.07% | 86026 / 339038 | 25.37% | 1754 fn |
| **P70-80 (159-178B)** | 0 / 2405 | 0.00% | 0 / 400567 | 0.00% | 2405 fn |
| **P80-90 (178-335B)** | 0 / 2405 | 0.00% | 0 / 583211 | 0.00% | 2405 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 5839 | 385022 | 97.97% |
| `gemini-3.8-flash` | 95 | 11933 | 1.59% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.40% |
| `claude-opus-5.5` | 1 | 49 | 0.02% |
| `gemini-4-argon` | 1 | 10 | 0.02% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
