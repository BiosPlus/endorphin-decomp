# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `13648 / 24049` (**56.75%**) — `10556` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1525697 / 4496005 bytes` (**33.93%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1484 / 2405 | 61.70% | 57936 / 97731 | 59.28% | 921 fn |
| **P30-40 (48-71B)** | 1342 / 2405 | 55.80% | 79632 / 144549 | 55.09% | 1063 fn |
| **P40-50 (71-91B)** | 1391 / 2405 | 57.84% | 115793 / 194373 | 59.57% | 1014 fn |
| **P50-60 (91-122B)** | 1508 / 2405 | 62.70% | 161107 / 256906 | 62.71% | 897 fn |
| **P60-70 (122-159B)** | 1092 / 2405 | 45.41% | 147856 / 339038 | 43.61% | 1313 fn |
| **P70-80 (159-178B)** | 302 / 2405 | 12.56% | 50875 / 400567 | 12.70% | 2103 fn |
| **P80-90 (178-335B)** | 1133 / 2405 | 47.11% | 272598 / 583211 | 46.74% | 1272 fn |
| **P90-100 (335-36100B)** | 766 / 2404 | 31.86% | 557914 / 2392860 | 23.32% | 1638 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6754 | 526112 | 63.98% |
| `claude-haiku-5.5@low` | 1436 | 337940 | 13.60% |
| `gemini-4-hydrogen@low` | 893 | 270363 | 8.46% |
| `gemini-3.8-flash@low` | 818 | 241576 | 7.75% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.23% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.54% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.24% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.09% |
| `gemini-3.8-flash@medium` | 5 | 1402 | 0.05% |
| `gemini-4-hydrogen@medium` | 3 | 1238 | 0.03% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
