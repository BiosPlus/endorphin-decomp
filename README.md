# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11428 / 24049` (**47.52%**) — `8336` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `893821 / 4496005 bytes` (**19.88%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2204 / 2405 | 91.64% | 55845 / 61769 | 90.41% | 201 fn |
| **P20-30 (32-48B)** | 1227 / 2405 | 51.02% | 47865 / 97731 | 48.98% | 1178 fn |
| **P30-40 (48-71B)** | 1011 / 2405 | 42.04% | 60062 / 144549 | 41.55% | 1394 fn |
| **P40-50 (71-91B)** | 1101 / 2405 | 45.78% | 91871 / 194373 | 47.27% | 1304 fn |
| **P50-60 (91-122B)** | 1232 / 2405 | 51.23% | 132916 / 256906 | 51.74% | 1173 fn |
| **P60-70 (122-159B)** | 959 / 2405 | 39.88% | 129062 / 339038 | 38.07% | 1446 fn |
| **P70-80 (159-178B)** | 239 / 2405 | 9.94% | 40232 / 400567 | 10.04% | 2166 fn |
| **P80-90 (178-335B)** | 800 / 2405 | 33.26% | 191513 / 583211 | 32.84% | 1605 fn |
| **P90-100 (335-36100B)** | 276 / 2404 | 11.48% | 119786 / 2392860 | 5.01% | 2128 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 80.95% |
| `claude-haiku-5.5@low` | 505 | 118143 | 6.06% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.36% |
| `gemini-3.8-flash@low` | 282 | 67689 | 3.38% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.96% |
| `gemini-4-hydrogen@low` | 150 | 43692 | 1.80% |
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
