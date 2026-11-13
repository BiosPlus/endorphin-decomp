# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10834 / 24049` (**45.05%**) — `7742` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `733749 / 4496005 bytes` (**16.32%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1201 / 2405 | 49.94% | 46815 / 97731 | 47.90% | 1204 fn |
| **P30-40 (48-71B)** | 969 / 2405 | 40.29% | 57643 / 144549 | 39.88% | 1436 fn |
| **P40-50 (71-91B)** | 1065 / 2405 | 44.28% | 88933 / 194373 | 45.75% | 1340 fn |
| **P50-60 (91-122B)** | 1182 / 2405 | 49.15% | 127724 / 256906 | 49.72% | 1223 fn |
| **P60-70 (122-159B)** | 919 / 2405 | 38.21% | 123604 / 339038 | 36.46% | 1486 fn |
| **P70-80 (159-178B)** | 213 / 2405 | 8.86% | 35884 / 400567 | 8.96% | 2192 fn |
| **P80-90 (178-335B)** | 687 / 2405 | 28.57% | 165625 / 583211 | 28.40% | 1718 fn |
| **P90-100 (335-36100B)** | 21 / 2404 | 0.87% | 7197 / 2392860 | 0.30% | 2383 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 87.14% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.77% |
| `claude-haiku-5.5@low` | 240 | 49114 | 3.10% |
| `gemini-3.8-flash@low` | 144 | 30318 | 1.86% |
| `claude-sonnet-5.5@low` | 126 | 24854 | 1.63% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.32% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 2 | 499 | 0.03% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
