# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11096 / 24049` (**46.14%**) — `8004` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `805284 / 4496005 bytes` (**17.91%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1216 / 2405 | 50.56% | 47409 / 97731 | 48.51% | 1189 fn |
| **P30-40 (48-71B)** | 982 / 2405 | 40.83% | 58364 / 144549 | 40.38% | 1423 fn |
| **P40-50 (71-91B)** | 1077 / 2405 | 44.78% | 89892 / 194373 | 46.25% | 1328 fn |
| **P50-60 (91-122B)** | 1212 / 2405 | 50.40% | 130771 / 256906 | 50.90% | 1193 fn |
| **P60-70 (122-159B)** | 938 / 2405 | 39.00% | 126226 / 339038 | 37.23% | 1467 fn |
| **P70-80 (159-178B)** | 222 / 2405 | 9.23% | 37405 / 400567 | 9.34% | 2183 fn |
| **P80-90 (178-335B)** | 707 / 2405 | 29.40% | 170268 / 583211 | 29.19% | 1698 fn |
| **P90-100 (335-36100B)** | 163 / 2404 | 6.78% | 64563 / 2392860 | 2.70% | 2241 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 84.28% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.58% |
| `claude-haiku-5.5@low` | 365 | 83124 | 4.56% |
| `gemini-3.8-flash@low` | 208 | 48082 | 2.60% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.04% |
| `gemini-4-hydrogen@low` | 35 | 10984 | 0.44% |
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
