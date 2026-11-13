# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11243 / 24049` (**46.75%**) — `8151` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `839190 / 4496005 bytes` (**18.67%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1221 / 2405 | 50.77% | 47616 / 97731 | 48.72% | 1184 fn |
| **P30-40 (48-71B)** | 999 / 2405 | 41.54% | 59355 / 144549 | 41.06% | 1406 fn |
| **P40-50 (71-91B)** | 1086 / 2405 | 45.16% | 90661 / 194373 | 46.64% | 1319 fn |
| **P50-60 (91-122B)** | 1222 / 2405 | 50.81% | 131843 / 256906 | 51.32% | 1183 fn |
| **P60-70 (122-159B)** | 950 / 2405 | 39.50% | 127824 / 339038 | 37.70% | 1455 fn |
| **P70-80 (159-178B)** | 234 / 2405 | 9.73% | 39406 / 400567 | 9.84% | 2171 fn |
| **P80-90 (178-335B)** | 753 / 2405 | 31.31% | 181017 / 583211 | 31.04% | 1652 fn |
| **P90-100 (335-36100B)** | 199 / 2404 | 8.28% | 81082 / 2392860 | 3.39% | 2205 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 82.76% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.48% |
| `claude-haiku-5.5@low` | 426 | 96704 | 5.23% |
| `gemini-3.8-flash@low` | 243 | 56170 | 2.98% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.00% |
| `gemini-4-hydrogen@low` | 86 | 23222 | 1.06% |
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
