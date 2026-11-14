# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `15333 / 24049` (**63.76%**) — `12239` by AI models, `3094` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1871512 / 4496005 bytes` (**41.63%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2253 / 2405 | 93.68% | 57354 / 61769 | 92.85% | 152 fn |
| **P20-30 (32-48B)** | 1500 / 2405 | 62.37% | 58704 / 97731 | 60.07% | 905 fn |
| **P30-40 (48-71B)** | 1354 / 2405 | 56.30% | 80220 / 144549 | 55.50% | 1051 fn |
| **P40-50 (71-91B)** | 1391 / 2405 | 57.84% | 115793 / 194373 | 59.57% | 1014 fn |
| **P50-60 (91-122B)** | 1880 / 2405 | 78.17% | 203564 / 256906 | 79.24% | 525 fn |
| **P60-70 (122-159B)** | 1570 / 2405 | 65.28% | 214847 / 339038 | 63.37% | 835 fn |
| **P70-80 (159-178B)** | 688 / 2405 | 28.61% | 115108 / 400567 | 28.74% | 1717 fn |
| **P80-90 (178-335B)** | 1371 / 2405 | 57.01% | 327812 / 583211 | 56.21% | 1034 fn |
| **P90-100 (335-36100B)** | 947 / 2404 | 39.39% | 673441 / 2392860 | 28.14% | 1457 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6767 | 528125 | 55.29% |
| `claude-haiku-5.5@low` | 2183 | 482779 | 17.84% |
| `gemini-4-hydrogen@low` | 1383 | 380449 | 11.30% |
| `gemini-3.8-flash@low` | 1229 | 326297 | 10.04% |
| `gemini-3.8-flash@high` | 447 | 63301 | 3.65% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.33% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.20% |
| `gemini-4-hydrogen@medium` | 22 | 4849 | 0.18% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.08% |
| `gemini-3.8-flash@medium` | 8 | 1851 | 0.07% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
