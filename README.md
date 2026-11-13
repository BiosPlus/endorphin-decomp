# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10985 / 24049` (**45.68%**) — `7893` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `776312 / 4496005 bytes` (**17.27%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2199 / 2405 | 91.43% | 55687 / 61769 | 90.15% | 206 fn |
| **P20-30 (32-48B)** | 1203 / 2405 | 50.02% | 46896 / 97731 | 47.98% | 1202 fn |
| **P30-40 (48-71B)** | 974 / 2405 | 40.50% | 57937 / 144549 | 40.08% | 1431 fn |
| **P40-50 (71-91B)** | 1072 / 2405 | 44.57% | 89480 / 194373 | 46.04% | 1333 fn |
| **P50-60 (91-122B)** | 1199 / 2405 | 49.85% | 129471 / 256906 | 50.40% | 1206 fn |
| **P60-70 (122-159B)** | 930 / 2405 | 38.67% | 125115 / 339038 | 36.90% | 1475 fn |
| **P70-80 (159-178B)** | 221 / 2405 | 9.19% | 37237 / 400567 | 9.30% | 2184 fn |
| **P80-90 (178-335B)** | 696 / 2405 | 28.94% | 167860 / 583211 | 28.78% | 1709 fn |
| **P90-100 (335-36100B)** | 112 / 2404 | 4.66% | 41960 / 2392860 | 1.75% | 2292 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 85.47% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.66% |
| `claude-haiku-5.5@low` | 312 | 71418 | 3.95% |
| `gemini-3.8-flash@low` | 181 | 40515 | 2.29% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.07% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.32% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-4-hydrogen@low` | 4 | 1285 | 0.05% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
