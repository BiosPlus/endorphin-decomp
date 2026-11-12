# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10330 / 24049` (**42.95%**) — `7238` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `631002 / 4496005 bytes` (**14.03%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1181 / 2405 | 49.11% | 46101 / 97731 | 47.17% | 1224 fn |
| **P30-40 (48-71B)** | 915 / 2405 | 38.05% | 54572 / 144549 | 37.75% | 1490 fn |
| **P40-50 (71-91B)** | 1047 / 2405 | 43.53% | 87451 / 194373 | 44.99% | 1358 fn |
| **P50-60 (91-122B)** | 1085 / 2405 | 45.11% | 118119 / 256906 | 45.98% | 1320 fn |
| **P60-70 (122-159B)** | 901 / 2405 | 37.46% | 121050 / 339038 | 35.70% | 1504 fn |
| **P70-80 (159-178B)** | 202 / 2405 | 8.40% | 34029 / 400567 | 8.50% | 2203 fn |
| **P80-90 (178-335B)** | 422 / 2405 | 17.55% | 89356 / 583211 | 15.32% | 1983 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6742 | 514670 | 93.15% |
| `gemini-3.8-flash@high` | 447 | 63301 | 6.18% |
| `claude-sonnet-5.5@medium` | 24 | 1340 | 0.33% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.14% |
| `claude-sonnet-5.5@low` | 6 | 1331 | 0.08% |
| `claude-haiku-5.5@low` | 5 | 1203 | 0.07% |
| `gemini-3.8-flash@low` | 2 | 289 | 0.03% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
