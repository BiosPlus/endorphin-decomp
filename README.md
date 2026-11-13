# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11288 / 24049` (**46.94%**) — `8196` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `850909 / 4496005 bytes` (**18.93%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1221 / 2405 | 50.77% | 47616 / 97731 | 48.72% | 1184 fn |
| **P30-40 (48-71B)** | 1001 / 2405 | 41.62% | 59486 / 144549 | 41.15% | 1404 fn |
| **P40-50 (71-91B)** | 1088 / 2405 | 45.24% | 90839 / 194373 | 46.73% | 1317 fn |
| **P50-60 (91-122B)** | 1224 / 2405 | 50.89% | 132065 / 256906 | 51.41% | 1181 fn |
| **P60-70 (122-159B)** | 952 / 2405 | 39.58% | 128127 / 339038 | 37.79% | 1453 fn |
| **P70-80 (159-178B)** | 235 / 2405 | 9.77% | 39567 / 400567 | 9.88% | 2170 fn |
| **P80-90 (178-335B)** | 777 / 2405 | 32.31% | 186521 / 583211 | 31.98% | 1628 fn |
| **P90-100 (335-36100B)** | 211 / 2404 | 8.78% | 86302 / 2392860 | 3.61% | 2193 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6747 | 515429 | 82.32% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.45% |
| `claude-haiku-5.5@low` | 446 | 101732 | 5.44% |
| `gemini-3.8-flash@low` | 253 | 58337 | 3.09% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.99% |
| `gemini-4-hydrogen@low` | 100 | 27506 | 1.22% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.31% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.12% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
