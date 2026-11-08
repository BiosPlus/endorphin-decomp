# Endorphin 2.7.1 Decompilation Project

## Goal
Decompile `.local/bin/endorphin.exe` into byte-matching C++ source code in `src/` and `include/`, modeled after `momusdigital/fnv_decomp`.

## Local Machine Tooling (Verified Paths)
- **Go:** `/usr/bin/go` (Use Go or Bash for all project tooling in `tools/`. NEVER use Python.)
- **Ghidra Headless:** `/usr/bin/ghidra-analyzeHeadless` (and `/opt/ghidra/support/analyzeHeadless`). Note: Write any Ghidra post-scripts in `.java` (Ghidra's native script format), never Python.
- **Disassembler:** `/usr/bin/llvm-objdump` and `/usr/bin/objdump`
- **Wine / Compiler Runner:** `/usr/bin/wine` and `/usr/bin/umu-run`
- **Build System:** `ninja` (`-j16`)

## Hard Rules
1. **Repo Safety:** NEVER commit `.local/`, `.exe`, `.dll`, `.obj`, or raw binary byte dumps to Git. `build/units.json` may only contain function virtual addresses, sizes, SHA-256 hashes, relocation addresses, and symbol names.
2. **Keep It Simple:** Build small, self-contained Go CLI tools in `tools/`. Explain progress in plain English.
3. **Commit Attribution:** Every Git commit MUST include a `Co-authored-by:` trailer for the AI assistant (e.g., `Co-authored-by: Antigravity <antigravity@google.com>` or `Co-authored-by: Claude <noreply@anthropic.com>`).

## Phase 1 To-Do List
1. **Initialize Go Workspace:** Create `go.mod` in the root directory.
2. **Build & Run `tools/extract_rtti`:**
   - Parse `.local/bin/endorphin.exe` (verify SHA-256 against `build/target.json`).
   - Extract all 2,352 MSVC RTTI classes, their `CompleteObjectLocator` structures, inheritance hierarchies, and vtable virtual addresses.
   - Save the structured map to `build/classes.json` and generate C++ header stubs in `include/` (skipping standard Microsoft MFC/ATL `C*` classes).
3. **Build & Run `tools/extract_units`:**
   - Use `/usr/bin/llvm-objdump` (or `/usr/bin/ghidra-analyzeHeadless` with a `.java` script storing the Ghidra project in `.local/ghidra_proj`) to identify all functions in `.text` (`0x00401000` to `0x009221aa`).
   - Dump each function's disassembly (and Ghidra decompiled C pseudocode) into `.local/cache/funcs/<address>.txt`.
   - Generate `build/units.json` with function addresses, byte lengths, SHA-256 hashes, and call-graph dependencies (number of callees so we can sort by leaf functions).
