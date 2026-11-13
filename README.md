# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11042 / 24049` (**45.91%**) — `7950` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `789038 / 4496005 bytes` (**17.55%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1210 / 2405 | 50.31% | 47159 / 97731 | 48.25% | 1195 fn |
| **P30-40 (48-71B)** | 979 / 2405 | 40.71% | 58208 / 144549 | 40.27% | 1426 fn |
| **P40-50 (71-91B)** | 1075 / 2405 | 44.70% | 89721 / 194373 | 46.16% | 1330 fn |
| **P50-60 (91-122B)** | 1208 / 2405 | 50.23% | 130399 / 256906 | 50.76% | 1197 fn |
| **P60-70 (122-159B)** | 936 / 2405 | 38.92% | 125963 / 339038 | 37.15% | 1469 fn |
| **P70-80 (159-178B)** | 222 / 2405 | 9.23% | 37405 / 400567 | 9.34% | 2183 fn |
| **P80-90 (178-335B)** | 700 / 2405 | 29.11% | 168697 / 583211 | 28.93% | 1705 fn |
| **P90-100 (335-36100B)** | 133 / 2404 | 5.53% | 51100 / 2392860 | 2.14% | 2271 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 84.86% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.62% |
| `claude-haiku-5.5@low` | 337 | 76183 | 4.24% |
| `gemini-3.8-flash@low` | 196 | 43845 | 2.47% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.05% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.31% |
| `gemini-4-hydrogen@low` | 21 | 5916 | 0.26% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
