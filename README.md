# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11411 / 24049` (**47.45%**) — `8319` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `890862 / 4496005 bytes` (**19.81%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2203 / 2405 | 91.60% | 55813 / 61769 | 90.36% | 202 fn |
| **P20-30 (32-48B)** | 1225 / 2405 | 50.94% | 47790 / 97731 | 48.90% | 1180 fn |
| **P30-40 (48-71B)** | 1011 / 2405 | 42.04% | 60062 / 144549 | 41.55% | 1394 fn |
| **P40-50 (71-91B)** | 1097 / 2405 | 45.61% | 91540 / 194373 | 47.10% | 1308 fn |
| **P50-60 (91-122B)** | 1232 / 2405 | 51.23% | 132916 / 256906 | 51.74% | 1173 fn |
| **P60-70 (122-159B)** | 957 / 2405 | 39.79% | 128795 / 339038 | 37.99% | 1448 fn |
| **P70-80 (159-178B)** | 236 / 2405 | 9.81% | 39726 / 400567 | 9.92% | 2169 fn |
| **P80-90 (178-335B)** | 797 / 2405 | 33.14% | 190857 / 583211 | 32.73% | 1608 fn |
| **P90-100 (335-36100B)** | 274 / 2404 | 11.40% | 118694 / 2392860 | 4.96% | 2130 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 81.12% |
| `claude-haiku-5.5@low` | 497 | 116949 | 5.97% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.37% |
| `gemini-3.8-flash@low` | 279 | 66465 | 3.35% |
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
