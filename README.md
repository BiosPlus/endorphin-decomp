# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10864 / 24049` (**45.17%**) — `7772` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `739931 / 4496005 bytes` (**16.46%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1201 / 2405 | 49.94% | 46815 / 97731 | 47.90% | 1204 fn |
| **P30-40 (48-71B)** | 970 / 2405 | 40.33% | 57709 / 144549 | 39.92% | 1435 fn |
| **P40-50 (71-91B)** | 1066 / 2405 | 44.32% | 89012 / 194373 | 45.79% | 1339 fn |
| **P50-60 (91-122B)** | 1193 / 2405 | 49.60% | 128833 / 256906 | 50.15% | 1212 fn |
| **P60-70 (122-159B)** | 922 / 2405 | 38.34% | 124004 / 339038 | 36.58% | 1483 fn |
| **P70-80 (159-178B)** | 214 / 2405 | 8.90% | 36061 / 400567 | 9.00% | 2191 fn |
| **P80-90 (178-335B)** | 690 / 2405 | 28.69% | 166449 / 583211 | 28.54% | 1715 fn |
| **P90-100 (335-36100B)** | 31 / 2404 | 1.29% | 10724 / 2392860 | 0.45% | 2373 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 86.80% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.75% |
| `claude-haiku-5.5@low` | 255 | 52845 | 3.28% |
| `gemini-3.8-flash@low` | 146 | 30574 | 1.88% |
| `claude-sonnet-5.5@low` | 138 | 26709 | 1.78% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.32% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
