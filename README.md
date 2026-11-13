# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12602 / 24049` (**52.40%**) — `9510` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1346364 / 4496005 bytes` (**29.95%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1484 / 2405 | 61.70% | 57936 / 97731 | 59.28% | 921 fn |
| **P30-40 (48-71B)** | 1165 / 2405 | 48.44% | 68503 / 144549 | 47.39% | 1240 fn |
| **P40-50 (71-91B)** | 1155 / 2405 | 48.02% | 96229 / 194373 | 49.51% | 1250 fn |
| **P50-60 (91-122B)** | 1303 / 2405 | 54.18% | 140432 / 256906 | 54.66% | 1102 fn |
| **P60-70 (122-159B)** | 1012 / 2405 | 42.08% | 136374 / 339038 | 40.22% | 1393 fn |
| **P70-80 (159-178B)** | 264 / 2405 | 10.98% | 44498 / 400567 | 11.11% | 2141 fn |
| **P80-90 (178-335B)** | 946 / 2405 | 39.33% | 226858 / 583211 | 38.90% | 1459 fn |
| **P90-100 (335-36100B)** | 643 / 2404 | 26.75% | 493548 / 2392860 | 20.63% | 1761 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6753 | 526035 | 71.01% |
| `claude-haiku-5.5@low` | 975 | 262566 | 10.25% |
| `gemini-3.8-flash@low` | 569 | 198737 | 5.98% |
| `gemini-4-hydrogen@low` | 560 | 209457 | 5.89% |
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
