# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11453 / 24049` (**47.62%**) — `8361` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `897403 / 4496005 bytes` (**19.96%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2204 / 2405 | 91.64% | 55845 / 61769 | 90.41% | 201 fn |
| **P20-30 (32-48B)** | 1228 / 2405 | 51.06% | 47907 / 97731 | 49.02% | 1177 fn |
| **P30-40 (48-71B)** | 1014 / 2405 | 42.16% | 60251 / 144549 | 41.68% | 1391 fn |
| **P40-50 (71-91B)** | 1108 / 2405 | 46.07% | 92417 / 194373 | 47.55% | 1297 fn |
| **P50-60 (91-122B)** | 1236 / 2405 | 51.39% | 133324 / 256906 | 51.90% | 1169 fn |
| **P60-70 (122-159B)** | 962 / 2405 | 40.00% | 129490 / 339038 | 38.19% | 1443 fn |
| **P70-80 (159-178B)** | 241 / 2405 | 10.02% | 40580 / 400567 | 10.13% | 2164 fn |
| **P80-90 (178-335B)** | 803 / 2405 | 33.39% | 192148 / 583211 | 32.95% | 1602 fn |
| **P90-100 (335-36100B)** | 278 / 2404 | 11.56% | 120772 / 2392860 | 5.05% | 2126 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 80.71% |
| `claude-haiku-5.5@low` | 518 | 119802 | 6.20% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.35% |
| `gemini-3.8-flash@low` | 287 | 68463 | 3.43% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.95% |
| `gemini-4-hydrogen@low` | 157 | 44841 | 1.88% |
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
