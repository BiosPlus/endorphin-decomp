# Endorphin 2.7.1 Decompilation Project

A byte-matching C++ decompilation of **Endorphin 2.7.1 Learning Edition** (`endorphin.exe`), compiled with **MSVC 2005 RTM (14.00.50727.42)** for x86.

## Verified Byte-Match Scoreboard

- **In-Scope Functions Matched:** `23022 / 25788` (**89.27%**) — `19117` by AI models, `3905` by deterministic `auto_solve`
- **In-Scope Code Bytes Matched:** `3113619 / 4190214 bytes` (**74.31%** of 4.00 MB)
- **RTTI Classes Extracted:** `2352` total (`2281` in-scope application/engine classes, `71` MFC/ATL/std classes)
- **Out-of-Scope Boilerplate:** `23497` units (`1369` jump/adjustor thunks, `22128` CRT/MFC/SEH funclets)

### Progress by Function Size Tier

| Size Tier | Matched / Total Funcs | Func % | Matched / Total Bytes | Byte % | Remaining |
| :--- | ---: | ---: | ---: | ---: | ---: |
| **P0-10 (1-14B)** | 2367 / 2579 | 91.78% | 20645 / 22688 | 91.00% | 212 fn |
| **P10-20 (14-30B)** | 2422 / 2579 | 93.91% | 52952 / 56242 | 94.15% | 157 fn |
| **P20-30 (30-45B)** | 2203 / 2579 | 85.42% | 76992 / 90749 | 84.84% | 376 fn |
| **P30-40 (45-64B)** | 2365 / 2579 | 91.70% | 124562 / 136238 | 91.43% | 214 fn |
| **P40-50 (64-85B)** | 2422 / 2578 | 93.95% | 180436 / 192045 | 93.96% | 156 fn |
| **P50-60 (85-114B)** | 2474 / 2579 | 95.93% | 243460 / 253742 | 95.95% | 105 fn |
| **P60-70 (114-155B)** | 2464 / 2579 | 95.54% | 325373 / 340642 | 95.52% | 115 fn |
| **P70-80 (156-170B)** | 2529 / 2579 | 98.06% | 414266 / 422481 | 98.06% | 50 fn |
| **P80-90 (170-304B)** | 2005 / 2579 | 77.74% | 447775 / 580485 | 77.14% | 574 fn |
| **P90-100 (304-20352B)** | 1771 / 2578 | 68.70% | 1227158 / 2094902 | 58.58% | 807 fn |

### Squad Leaderboard (AI Model Matches)

| Model | Matched Functions | Matched Bytes | Share of AI Matches |
| :--- | ---: | ---: | ---: |
| `claude-haiku-5.5@low` | 7835 | 1241842 | 40.98% |
| `claude-haiku-5.5@medium` | 6897 | 557320 | 36.08% |
| `gemini-4-hydrogen@low` | 1936 | 635328 | 10.13% |
| `gemini-3.8-flash@low` | 1644 | 476892 | 8.60% |
| `gemini-3.8-flash@high` | 447 | 63301 | 2.34% |
| `claude-sonnet-5.5@low` | 283 | 50088 | 1.48% |
| `gemini-4-hydrogen@medium` | 26 | 7180 | 0.14% |
| `claude-sonnet-5.5@medium` | 26 | 1765 | 0.14% |
| `gemini-3.8-flash@medium` | 10 | 2687 | 0.05% |
| `claude-sonnet-5.5@high` | 10 | 2324 | 0.05% |
| `claude-opus-5.5@medium` | 1 | 49 | 0.01% |
| `claude-opus-5.5@low` | 1 | 47 | 0.01% |
| `gemini-4-argon@high` | 1 | 10 | 0.01% |

## Tooling & Workflow

- `go run ./tools/build_and_match -all`: Compiles all translation units in `src/` with MSVC 2005 (`cl.exe`), masks 32-bit COFF relocations, and verifies 100% byte-for-byte parity against `.local/bin/endorphin.exe`.
- `go run ./tools/work next`: Picks the next smallest unmatched in-scope leaf function (`size <= 256`) and prints its compact disassembly briefing.
- `go run ./tools/work check <addr> --model <name>`: Compiles and verifies a function against `.local/bin/endorphin.exe` and records the solving model.
- `go run ./tools/status -readme`: Updates the progress section in `README.md` with the latest verified byte-match metrics.
