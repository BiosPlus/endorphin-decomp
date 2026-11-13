# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11142 / 24049` (**46.33%**) — `8050` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `814282 / 4496005 bytes` (**18.11%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1219 / 2405 | 50.69% | 47534 / 97731 | 48.64% | 1186 fn |
| **P30-40 (48-71B)** | 991 / 2405 | 41.21% | 58895 / 144549 | 40.74% | 1414 fn |
| **P40-50 (71-91B)** | 1080 / 2405 | 44.91% | 90149 / 194373 | 46.38% | 1325 fn |
| **P50-60 (91-122B)** | 1215 / 2405 | 50.52% | 131079 / 256906 | 51.02% | 1190 fn |
| **P60-70 (122-159B)** | 946 / 2405 | 39.33% | 127298 / 339038 | 37.55% | 1459 fn |
| **P70-80 (159-178B)** | 225 / 2405 | 9.36% | 37916 / 400567 | 9.47% | 2180 fn |
| **P80-90 (178-335B)** | 713 / 2405 | 29.65% | 171746 / 583211 | 29.45% | 1692 fn |
| **P90-100 (335-36100B)** | 174 / 2404 | 7.24% | 69279 / 2392860 | 2.90% | 2230 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 83.80% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.55% |
| `claude-haiku-5.5@low` | 385 | 86642 | 4.78% |
| `gemini-3.8-flash@low` | 217 | 49606 | 2.70% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.02% |
| `gemini-4-hydrogen@low` | 52 | 14940 | 0.65% |
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
