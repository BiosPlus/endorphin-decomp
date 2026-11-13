# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11469 / 24049` (**47.69%**) — `8377` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `902439 / 4496005 bytes` (**20.07%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2204 / 2405 | 91.64% | 55845 / 61769 | 90.41% | 201 fn |
| **P20-30 (32-48B)** | 1228 / 2405 | 51.06% | 47907 / 97731 | 49.02% | 1177 fn |
| **P30-40 (48-71B)** | 1016 / 2405 | 42.25% | 60389 / 144549 | 41.78% | 1389 fn |
| **P40-50 (71-91B)** | 1108 / 2405 | 46.07% | 92417 / 194373 | 47.55% | 1297 fn |
| **P50-60 (91-122B)** | 1237 / 2405 | 51.43% | 133422 / 256906 | 51.93% | 1168 fn |
| **P60-70 (122-159B)** | 967 / 2405 | 40.21% | 130181 / 339038 | 38.40% | 1438 fn |
| **P70-80 (159-178B)** | 241 / 2405 | 10.02% | 40580 / 400567 | 10.13% | 2164 fn |
| **P80-90 (178-335B)** | 804 / 2405 | 33.43% | 192389 / 583211 | 32.99% | 1601 fn |
| **P90-100 (335-36100B)** | 285 / 2404 | 11.86% | 124640 / 2392860 | 5.21% | 2119 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 80.55% |
| `claude-haiku-5.5@low` | 524 | 121427 | 6.26% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.34% |
| `gemini-3.8-flash@low` | 291 | 69816 | 3.47% |
| `gemini-4-hydrogen@low` | 163 | 46899 | 1.95% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.95% |
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
