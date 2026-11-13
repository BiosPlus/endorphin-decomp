# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11939 / 24049` (**49.64%**) — `8847` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1121978 / 4496005 bytes` (**24.95%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2209 / 2405 | 91.85% | 56004 / 61769 | 90.67% | 196 fn |
| **P20-30 (32-48B)** | 1256 / 2405 | 52.22% | 48953 / 97731 | 50.09% | 1149 fn |
| **P30-40 (48-71B)** | 1038 / 2405 | 43.16% | 61727 / 144549 | 42.70% | 1367 fn |
| **P40-50 (71-91B)** | 1139 / 2405 | 47.36% | 94904 / 194373 | 48.83% | 1266 fn |
| **P50-60 (91-122B)** | 1276 / 2405 | 53.06% | 137553 / 256906 | 53.54% | 1129 fn |
| **P60-70 (122-159B)** | 986 / 2405 | 41.00% | 132823 / 339038 | 39.18% | 1419 fn |
| **P70-80 (159-178B)** | 255 / 2405 | 10.60% | 42969 / 400567 | 10.73% | 2150 fn |
| **P80-90 (178-335B)** | 868 / 2405 | 36.09% | 208245 / 583211 | 35.71% | 1537 fn |
| **P90-100 (335-36100B)** | 533 / 2404 | 22.17% | 314131 / 2392860 | 13.13% | 1871 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6748 | 515897 | 76.27% |
| `claude-haiku-5.5@low` | 707 | 203052 | 7.99% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.05% |
| `gemini-3.8-flash@low` | 412 | 120121 | 4.66% |
| `gemini-4-hydrogen@low` | 327 | 133339 | 3.70% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.84% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.28% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.11% |
| `gemini-3.8-flash@medium` | 4 | 1334 | 0.05% |
| `gemini-4-hydrogen@medium` | 2 | 1169 | 0.02% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
