# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `11004 / 24049` (**45.76%**) — `7912` by AI models, `3092` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `778793 / 4496005 bytes` (**17.32%** of 4.29 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `22861` units (`1088` jump/adjustor thunks, `21773` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-16B)** | 2379 / 2405 | 98.92% | 24669 / 25001 | 98.67% | 26 fn |
| **P10-20 (16-32B)** | 2200 / 2405 | 91.48% | 55717 / 61769 | 90.20% | 205 fn |
| **P20-30 (32-48B)** | 1206 / 2405 | 50.15% | 47002 / 97731 | 48.09% | 1199 fn |
| **P30-40 (48-71B)** | 975 / 2405 | 40.54% | 57993 / 144549 | 40.12% | 1430 fn |
| **P40-50 (71-91B)** | 1074 / 2405 | 44.66% | 89634 / 194373 | 46.11% | 1331 fn |
| **P50-60 (91-122B)** | 1204 / 2405 | 50.06% | 129976 / 256906 | 50.59% | 1201 fn |
| **P60-70 (122-159B)** | 934 / 2405 | 38.84% | 125707 / 339038 | 37.08% | 1471 fn |
| **P70-80 (159-178B)** | 221 / 2405 | 9.19% | 37237 / 400567 | 9.30% | 2184 fn |
| **P80-90 (178-335B)** | 697 / 2405 | 28.98% | 168051 / 583211 | 28.81% | 1708 fn |
| **P90-100 (335-36100B)** | 114 / 2404 | 4.74% | 42807 / 2392860 | 1.79% | 2290 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@medium` | 6746 | 515189 | 85.26% |
| `gemini-3.8-flash@high` | 447 | 63301 | 5.65% |
| `claude-haiku-5.5@low` | 322 | 73091 | 4.07% |
| `gemini-3.8-flash@low` | 187 | 40964 | 2.36% |
| `claude-sonnet-5.5@low` | 163 | 33291 | 2.06% |
| `claude-sonnet-5.5@medium` | 25 | 1606 | 0.32% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.13% |
| `gemini-4-hydrogen@low` | 7 | 1644 | 0.09% |
| `gemini-3.8-flash@medium` | 3 | 839 | 0.04% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
