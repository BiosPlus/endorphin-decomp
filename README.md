# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11268 / 24049` (**46.85%**) — `8176` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `845119 / 4496005 bytes` (**18.80%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1221 / 2405 | 50.77% | 47616 / 97731 | 48.72% | 1184 fn |
| **P30-40 (48-71B)** | 1000 / 2405 | 41.58% | 59420 / 144549 | 41.11% | 1405 fn |
| **P40-50 (71-91B)** | 1088 / 2405 | 45.24% | 90839 / 194373 | 46.73% | 1317 fn |
| **P50-60 (91-122B)** | 1223 / 2405 | 50.85% | 131958 / 256906 | 51.36% | 1182 fn |
| **P60-70 (122-159B)** | 950 / 2405 | 39.50% | 127824 / 339038 | 37.70% | 1455 fn |
| **P70-80 (159-178B)** | 234 / 2405 | 9.73% | 39406 / 400567 | 9.84% | 2171 fn |
| **P80-90 (178-335B)** | 770 / 2405 | 32.02% | 185014 / 583211 | 31.72% | 1635 fn |
| **P90-100 (335-36100B)** | 203 / 2404 | 8.44% | 82656 / 2392860 | 3.45% | 2201 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6747 | 515429 | 82.52% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.47% |
| `claude-haiku-5.5@low` | 438 | 99676 | 5.36% |
| `gemini-3.8-flash@low` | 247 | 57129 | 3.02% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.99% |
| `gemini-4-hydrogen@low` | 94 | 24980 | 1.15% |
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
