# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `14393 / 24049` (**59.85%**) — `11301` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `1664612 / 4496005 bytes` (**37.02%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2251 / 2405 | 93.60% | 57317 / 61769 | 92.79% | 154 fn |
| **P20-30 (32-48B)** | 1484 / 2405 | 61.70% | 57936 / 97731 | 59.28% | 921 fn |
| **P30-40 (48-71B)** | 1342 / 2405 | 55.80% | 79632 / 144549 | 55.09% | 1063 fn |
| **P40-50 (71-91B)** | 1391 / 2405 | 57.84% | 115793 / 194373 | 59.57% | 1014 fn |
| **P50-60 (91-122B)** | 1880 / 2405 | 78.17% | 203564 / 256906 | 79.24% | 525 fn |
| **P60-70 (122-159B)** | 1273 / 2405 | 52.93% | 171925 / 339038 | 50.71% | 1132 fn |
| **P70-80 (159-178B)** | 317 / 2405 | 13.18% | 53425 / 400567 | 13.34% | 2088 fn |
| **P80-90 (178-335B)** | 1224 / 2405 | 50.89% | 294922 / 583211 | 50.57% | 1181 fn |
| **P90-100 (335-36100B)** | 852 / 2404 | 35.44% | 605429 / 2392860 | 25.30% | 1552 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6754 | 526112 | 59.76% |
| `claude-haiku-5.5@low` | 1769 | 398942 | 15.65% |
| `gemini-4-hydrogen@low` | 1126 | 311920 | 9.96% |
| `gemini-3.8-flash@low` | 995 | 277135 | 8.80% |
| `gemini-3.8-flash@high` | 447 | 63301 | 3.96% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 1.44% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.22% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.09% |
| `gemini-3.8-flash@medium` | 6 | 1530 | 0.05% |
| `gemini-4-hydrogen@medium` | 4 | 1907 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
