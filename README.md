# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `8935 / 24049` (**37.15%**) — `5843` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `430218 / 4496005 bytes` (**9.57%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2161 / 2405 | 89.85% | 54530 / 61769 | 88.28% | 244 fn |
| **P20-30 (32-48B)** | 1077 / 2405 | 44.78% | 41930 / 97731 | 42.90% | 1328 fn |
| **P30-40 (48-71B)** | 818 / 2405 | 34.01% | 48912 / 144549 | 33.84% | 1587 fn |
| **P40-50 (71-91B)** | 982 / 2405 | 40.83% | 82158 / 194373 | 42.27% | 1423 fn |
| **P50-60 (91-122B)** | 950 / 2405 | 39.50% | 103899 / 256906 | 40.44% | 1455 fn |
| **P60-70 (122-159B)** | 568 / 2405 | 23.62% | 74120 / 339038 | 21.86% | 1837 fn |
| **P70-80 (159-178B)** | 0 / 2405 | 0.00% | 0 / 400567 | 0.00% | 2405 fn |
| **P80-90 (178-335B)** | 0 / 2405 | 0.00% | 0 / 583211 | 0.00% | 2405 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 5778 | 377392 | 98.89% |
| `gemini-3.8-flash` | 39 | 4942 | 0.67% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.41% |
| `claude-opus-5.5` | 1 | 49 | 0.02% |
| `gemini-4-argon` | 1 | 10 | 0.02% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
