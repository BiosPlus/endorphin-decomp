# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `12661 / 24049` (**52.65%**) — `9569` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1352683 / 4496005 bytes` (**30.09%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1484 / 2405 | 61.70% | 57936 / 97731 | 59.28% | 921 fn |
| **P30-40 (48-71B)** | 1198 / 2405 | 49.81% | 70413 / 144549 | 48.71% | 1207 fn |
| **P40-50 (71-91B)** | 1166 / 2405 | 48.48% | 97182 / 194373 | 50.00% | 1239 fn |
| **P50-60 (91-122B)** | 1304 / 2405 | 54.22% | 140539 / 256906 | 54.70% | 1101 fn |
| **P60-70 (122-159B)** | 1016 / 2405 | 42.25% | 136953 / 339038 | 40.39% | 1389 fn |
| **P70-80 (159-178B)** | 266 / 2405 | 11.06% | 44821 / 400567 | 11.19% | 2139 fn |
| **P80-90 (178-335B)** | 953 / 2405 | 39.63% | 228772 / 583211 | 39.23% | 1452 fn |
| **P90-100 (335-36100B)** | 644 / 2404 | 26.79% | 494081 / 2392860 | 20.65% | 1760 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6753 | 526035 | 70.57% |
| `claude-haiku-5.5@low` | 1006 | 265707 | 10.51% |
| `gemini-3.8-flash@low` | 580 | 199914 | 6.06% |
| `gemini-4-hydrogen@low` | 577 | 211458 | 6.03% |
| `gemini-3.8-flash@high` | 447 | 63301 | 4.67% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.70% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.26% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.10% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.04% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
