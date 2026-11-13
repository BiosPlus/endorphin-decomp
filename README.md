# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11386 / 24049` (**47.35%**) — `8294` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `885215 / 4496005 bytes` (**19.69%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2202 / 2405 | 91.56% | 55781 / 61769 | 90.31% | 203 fn |
| **P20-30 (32-48B)** | 1225 / 2405 | 50.94% | 47790 / 97731 | 48.90% | 1180 fn |
| **P30-40 (48-71B)** | 1006 / 2405 | 41.83% | 59770 / 144549 | 41.35% | 1399 fn |
| **P40-50 (71-91B)** | 1094 / 2405 | 45.49% | 91304 / 194373 | 46.97% | 1311 fn |
| **P50-60 (91-122B)** | 1229 / 2405 | 51.10% | 132590 / 256906 | 51.61% | 1176 fn |
| **P60-70 (122-159B)** | 954 / 2405 | 39.67% | 128410 / 339038 | 37.87% | 1451 fn |
| **P70-80 (159-178B)** | 235 / 2405 | 9.77% | 39567 / 400567 | 9.88% | 2170 fn |
| **P80-90 (178-335B)** | 795 / 2405 | 33.06% | 190420 / 583211 | 32.65% | 1610 fn |
| **P90-100 (335-36100B)** | 267 / 2404 | 11.11% | 114914 / 2392860 | 4.80% | 2137 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 81.36% |
| `claude-haiku-5.5@low` | 484 | 114304 | 5.84% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.39% |
| `gemini-3.8-flash@low` | 274 | 65489 | 3.30% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.97% |
| `gemini-4-hydrogen@low` | 137 | 41125 | 1.65% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.30% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.12% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
