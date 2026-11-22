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
