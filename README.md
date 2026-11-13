# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12608 / 24049` (**52.43%**) — `9516` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1346736 / 4496005 bytes` (**29.95%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1484 / 2405 | 61.70% | 57936 / 97731 | 59.28% | 921 fn |
| **P30-40 (48-71B)** | 1170 / 2405 | 48.65% | 68785 / 144549 | 47.59% | 1235 fn |
| **P40-50 (71-91B)** | 1156 / 2405 | 48.07% | 96319 / 194373 | 49.55% | 1249 fn |
| **P50-60 (91-122B)** | 1303 / 2405 | 54.18% | 140432 / 256906 | 54.66% | 1102 fn |
| **P60-70 (122-159B)** | 1012 / 2405 | 42.08% | 136374 / 339038 | 40.22% | 1393 fn |
| **P70-80 (159-178B)** | 264 / 2405 | 10.98% | 44498 / 400567 | 11.11% | 2141 fn |
| **P80-90 (178-335B)** | 946 / 2405 | 39.33% | 226858 / 583211 | 38.90% | 1459 fn |
| **P90-100 (335-36100B)** | 643 / 2404 | 26.75% | 493548 / 2392860 | 20.63% | 1761 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6753 | 526035 | 70.96% |
| `claude-haiku-5.5@low` | 979 | 262791 | 10.29% |
| `gemini-3.8-flash@low` | 571 | 198884 | 6.00% |
| `gemini-4-hydrogen@low` | 560 | 209457 | 5.88% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.70% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.71% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.26% |
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
