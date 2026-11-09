# Endorphin 2.7.1 Decompilation — Worker Runbook

Target: `.local/bin/endorphin.exe` (MSVC 2005 RTM `14.00.50727.42`, x86, `/O2 /Ob2 /Oy /Gy /EHsc /GR /Gd`).

## Strict Worker Loop (One Agent Per Function Try)

1. **Claim your assigned function (or next ready function):**
   ```bash
   ./.local/bin/work claim 0xXXXXXXXX
   # (or if running manually without a target address: ./.local/bin/work next)
   ```
   - Read `CALLING_CONV`, `HEADER_PREVIEW`, and `SUGGESTED_EXTERNS` directly from the output (avoid extra file reads unless needed).
2. **Implement in C++03 (or `__declspec(naked)` `__asm` when register allocation / instruction selection resists C++03):**
   - Edit only the target `.cpp` file in `src/` (and struct header in `include/` if an offset is required).
   - Keep the `// [0xXXXXXXXX]` marker and `extern "C" ... fn_XXXXXXXX(...)` signature name.
   - Calling conventions:
     - `this` in `ecx` with `ret`: `extern "C" Ret __fastcall fn_XXXXXXXX(Class* self)`
     - `this` in `ecx` with `ret N`: `extern "C" Ret __fastcall fn_XXXXXXXX(Class* self, int edx_unused, Arg1 a1, ...)`
     - No `ecx` `this`: `extern "C" Ret __cdecl fn_XXXXXXXX(...)` (`ret`) or `__stdcall` (`ret N`).
   - Relocated globals/callees are masked automatically; copy the declarations from `SUGGESTED_EXTERNS` (`extern "C" void ext_XXXXXXXX();` or `extern "C" int mem_XXXXXXXX;`).
   - **Pro Tip for Fast Byte Parity:** If standard C++03 has a register/instruction mismatch after 3–4 tries, switch to `extern "C" __declspec(naked) void __fastcall fn_XXXXXXXX(void* self) { __asm { ... } }` using `ext_XXXXXXXX` for `call`/`jmp` targets, `[mem_XXXXXXXX]` or `offset mem_XXXXXXXX` for relocated globals, and `__asm _emit 0x..` for any instruction where MASM picks a different encoding.
3. **Compile & verify (iterate max 10 tries):**
   ```bash
   ./.local/bin/work check 0xXXXXXXXX --model <model>
   ```
   - Always pass your model identifier via `--model <name>` (e.g., `claude-haiku-5.5`, `gpt-oss-120b`, `gemini-3.8-flash`, `claude-sonnet-5.5`, `claude-opus-5.5`, `gemini-4-argon`) or `DECOMP_MODEL`.
   - `EXACT MATCH (100%)` acquires an atomic lock, marks `"status": "matched"`, `"matched_by"`, and `"matched_at"` in `build/units.json`, updates `README.md`, and commits `Match 0xXXXXXXXX (<symbol>) [model: <matched_by>]`.
4. **If stuck after 10 tries:**
   - In `tools/grind.sh` parallel wave mode, simply stop after 10 tries — the orchestrator will clean the attempt and escalate `0xXXXXXXXX` along the linear model chain (`claude-haiku-5.5 -> gpt-oss-120b -> gemini-3.8-flash -> claude-sonnet-5.5 -> claude-opus-5.5 -> gemini-4-argon`), and only call `work skip` if all 6 fail.
   - If running standalone/manually, skip cleanly (automatically strips the stub from `src/`):
     ```bash
     ./.local/bin/work skip 0xXXXXXXXX "brief reason"
     ```

## Hard Rules & Repository Security Guard
- **Scoped Permissions & Security Guard Active:** `.claude/settings.json`, `tools/security_guard.sh`, and `agy --sandbox --settings` enforce repository boundaries so `--dangerously-skip-permissions` is never required.
- **ALWAYS** let `work check` auto-commit each matched function immediately. Never commit unverified `// TODO: implement` stubs (blocked by `tools/pre-commit` and `work clean`).
- **NEVER** edit `build/units.json` or `build/classes.json` by hand.
- **NEVER** touch, generate, or commit HTML files (`docs/`).
- **NEVER** commit `.local/`, `.exe`, `.dll`, `.obj`, `.lib`, `.pdb`, or `.idb` files.
- **C++03 only** (no `auto`, `nullptr`, or variadic templates).
- **No Python** (Go/Bash tooling only).
- Include `Co-authored-by: Claude <noreply@anthropic.com>` (for Claude models) or `Co-authored-by: Antigravity <noreply@google.com>` (for Antigravity / `agy` / Gemini models) on commits.
