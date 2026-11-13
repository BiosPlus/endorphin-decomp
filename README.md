# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11404 / 24049` (**47.42%**) — `8312` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `890175 / 4496005 bytes` (**19.80%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2203 / 2405 | 91.60% | 55813 / 61769 | 90.36% | 202 fn |
| **P20-30 (32-48B)** | 1225 / 2405 | 50.94% | 47790 / 97731 | 48.90% | 1180 fn |
| **P30-40 (48-71B)** | 1009 / 2405 | 41.95% | 59940 / 144549 | 41.47% | 1396 fn |
| **P40-50 (71-91B)** | 1096 / 2405 | 45.57% | 91460 / 194373 | 47.05% | 1309 fn |
| **P50-60 (91-122B)** | 1230 / 2405 | 51.14% | 132688 / 256906 | 51.65% | 1175 fn |
| **P60-70 (122-159B)** | 955 / 2405 | 39.71% | 128538 / 339038 | 37.91% | 1450 fn |
| **P70-80 (159-178B)** | 236 / 2405 | 9.81% | 39726 / 400567 | 9.92% | 2169 fn |
| **P80-90 (178-335B)** | 797 / 2405 | 33.14% | 190857 / 583211 | 32.73% | 1608 fn |
| **P90-100 (335-36100B)** | 274 / 2404 | 11.40% | 118694 / 2392860 | 4.96% | 2130 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 81.18% |
| `claude-haiku-5.5@low` | 492 | 116405 | 5.92% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.38% |
| `gemini-3.8-flash@low` | 277 | 66322 | 3.33% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.96% |
| `gemini-4-hydrogen@low` | 144 | 43151 | 1.73% |
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
