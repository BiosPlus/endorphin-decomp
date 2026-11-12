# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `10201 / 24049` (**42.42%**) — `7109` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `605770 / 4496005 bytes` (**13.47%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2198 / 2405 | 91.39% | 55655 / 61769 | 90.10% | 207 fn |
| **P20-30 (32-48B)** | 1176 / 2405 | 48.90% | 45918 / 97731 | 46.98% | 1229 fn |
| **P30-40 (48-71B)** | 910 / 2405 | 37.84% | 54274 / 144549 | 37.55% | 1495 fn |
| **P40-50 (71-91B)** | 1045 / 2405 | 43.45% | 87292 / 194373 | 44.91% | 1360 fn |
| **P50-60 (91-122B)** | 1065 / 2405 | 44.28% | 116046 / 256906 | 45.17% | 1340 fn |
| **P60-70 (122-159B)** | 894 / 2405 | 37.17% | 120035 / 339038 | 35.40% | 1511 fn |
| **P70-80 (159-178B)** | 197 / 2405 | 8.19% | 33185 / 400567 | 8.28% | 2208 fn |
| **P80-90 (178-335B)** | 337 / 2405 | 14.01% | 68696 / 583211 | 11.78% | 2068 fn |
| **P90-100 (335-36100B)** | 0 / 2404 | 0.00% | 0 / 2392860 | 0.00% | 2404 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5` | 6667 | 500433 | 93.78% |
| `gemini-3.8-flash` | 416 | 57453 | 5.85% |
| `claude-sonnet-5.5` | 24 | 1340 | 0.34% |
| `claude-opus-5.5` | 1 | 49 | 0.01% |
| `gemini-4-argon` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
