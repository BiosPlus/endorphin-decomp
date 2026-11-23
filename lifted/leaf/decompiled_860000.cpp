// Lifted C++ translation unit: lifted/leaf/decompiled_860000.cpp
#include "lift_compat.h"

// [0x0086086B] sub_0086086B (5 bytes)
// @name sub_0086086B
// @summary No-op: "add eax, 0" (eax unchanged; only flags are touched)
void fn_0086086B(void) {
    // add eax, 0x0 (05 00 00 00 00) leaves eax unchanged. Its only effect is
    // on the flags, which portable C++ cannot observe, so there is nothing to emit.
}

// [0x0086F15B] sub_0086F15B (5 bytes)
// @name sub_0086F15B
// @summary No-op: `add eax, 0` (opcode 05 with imm32 0), which leaves eax unchanged; only flags are touched.
void fn_0086F15B(void) {
    // Single instruction `add eax, 0x0` (05 00 00 00 00). Adding zero to eax
    // does not change any value, so there is no portable C++ statement with a
    // visible effect. Kept as an empty function to preserve the address slot.
}

// [0x00860E8B] sub_00860E8B (5 bytes)
// @name sub_00860E8B
// @summary No-op: "add eax, 0" (eax unchanged; only flags are touched)
void fn_00860E8B(void) {
    // add eax, 0x0 (05 00 00 00 00) leaves eax unchanged. Its only effect is
    // on the flags, which portable C++ cannot observe, so there is nothing to emit.
}

// [0x008607F4] sub_008607F4 (12 bytes)
// @name sub_008607F4
// @summary No-op stub (add eax, 0).
void fn_008607F4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x008609F4] sub_008609F4 (12 bytes)
// @name sub_008609F4
// @summary No-op stub (add eax, 0).
void fn_008609F4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x008683E4] sub_008683E4 (12 bytes)
// @name sub_008683E4
// @summary No-op stub (add eax, 0).
void fn_008683E4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0086C014] sub_0086C014 (12 bytes)
// @name sub_0086C014
// @summary No-op stub (add eax, 0).
void fn_0086C014(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0086CA64] sub_0086CA64 (12 bytes)
// @name sub_0086CA64
// @summary No-op stub (add eax, 0).
void fn_0086CA64(void) {
    // No-op stub (add eax, 0x0).
}

// [0x00862976]
namespace lift_00862976 {
// @name alignmentPadding_00862976
// @summary Multi-byte alignment NOP padding (lea ecx, [ecx]; lea esp, [esp])


void sub_00862976() {
}
} // namespace lift_00862976
