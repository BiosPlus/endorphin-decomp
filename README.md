# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11760 / 24049` (**48.90%**) — `8668` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1027622 / 4496005 bytes` (**22.86%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2206 / 2405 | 91.73% | 55908 / 61769 | 90.51% | 199 fn |
| **P20-30 (32-48B)** | 1240 / 2405 | 51.56% | 48341 / 97731 | 49.46% | 1165 fn |
| **P30-40 (48-71B)** | 1026 / 2405 | 42.66% | 61031 / 144549 | 42.22% | 1379 fn |
| **P40-50 (71-91B)** | 1123 / 2405 | 46.69% | 93644 / 194373 | 48.18% | 1282 fn |
| **P50-60 (91-122B)** | 1263 / 2405 | 52.52% | 136164 / 256906 | 53.00% | 1142 fn |
| **P60-70 (122-159B)** | 981 / 2405 | 40.79% | 132147 / 339038 | 38.98% | 1424 fn |
| **P70-80 (159-178B)** | 251 / 2405 | 10.44% | 42271 / 400567 | 10.55% | 2154 fn |
| **P80-90 (178-335B)** | 843 / 2405 | 35.05% | 202162 / 583211 | 34.66% | 1562 fn |
| **P90-100 (335-36100B)** | 448 / 2404 | 18.64% | 231285 / 2392860 | 9.67% | 1956 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 77.85% |
| `claude-haiku-5.5@low` | 645 | 170617 | 7.44% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.16% |
| `gemini-3.8-flash@low` | 360 | 98295 | 4.15% |
| `gemini-4-hydrogen@low` | 262 | 93244 | 3.02% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.88% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.29% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.12% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
