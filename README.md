# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11186 / 24049` (**46.51%**) — `8094` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `828575 / 4496005 bytes` (**18.43%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1220 / 2405 | 50.73% | 47579 / 97731 | 48.68% | 1185 fn |
| **P30-40 (48-71B)** | 997 / 2405 | 41.46% | 59233 / 144549 | 40.98% | 1408 fn |
| **P40-50 (71-91B)** | 1080 / 2405 | 44.91% | 90149 / 194373 | 46.38% | 1325 fn |
| **P50-60 (91-122B)** | 1218 / 2405 | 50.64% | 131396 / 256906 | 51.15% | 1187 fn |
| **P60-70 (122-159B)** | 947 / 2405 | 39.38% | 127431 / 339038 | 37.59% | 1458 fn |
| **P70-80 (159-178B)** | 227 / 2405 | 9.44% | 38259 / 400567 | 9.55% | 2178 fn |
| **P80-90 (178-335B)** | 721 / 2405 | 29.98% | 174027 / 583211 | 29.84% | 1684 fn |
| **P90-100 (335-36100B)** | 197 / 2404 | 8.19% | 80115 / 2392860 | 3.35% | 2207 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 83.35% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.52% |
| `claude-haiku-5.5@low` | 404 | 92325 | 4.99% |
| `gemini-3.8-flash@low` | 227 | 53251 | 2.80% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.01% |
| `gemini-4-hydrogen@low` | 67 | 19905 | 0.83% |
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
