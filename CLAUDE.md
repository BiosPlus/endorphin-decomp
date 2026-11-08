# Endorphin 2.7.1 Decompilation Project

## Goal
Decompile `.local/endorphin.exe` into readable C++ source code in `src/` and `include/`, modeled after `momusdigital/fnv_decomp`.

## Rules
1. Never commit `.local/` or any `.exe` / `.dll` files to Git.
2. Use Go or Bash for any helper scripts in `tools/` (do not use Python).
3. Work step-by-step and keep me updated in plain English.

## Your To-Do List (Do these in order)
1. **Extract Function List:** Use `analyzeHeadless` (Ghidra) or `objdump` on `.local/endorphin.exe` to find all functions in the `.text` section and save the list of function addresses and sizes to `build/units.json`.
2. **Extract Class Names:** Scan `.local/endorphin.exe` for MSVC RTTI class names (`.?AV`) and generate header stubs in `include/`.
3. **Decompile Leaf Functions First:** Pick the smallest, simplest functions in `build/units.json`, extract their assembly and Ghidra pseudocode into `.local/cache/`, and write clean C++ reconstructions in `src/`.
4. **Set Up Verification Later:** Once we have the function list and initial C++ files extracted, help me set up the MSVC 2005 (`14.00.50727`) compiler under Wine so we can start checking byte-for-byte matches.
