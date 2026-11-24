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

// [0x008665CC] sub_008665CC (20 bytes)
namespace lift_008665CC {
// Non-executing data block, not a function. Disassembly decodes as add/lea
// pairs with no control flow: a byte table of values 0x00-0x04 followed by a
// 4-byte `lea esp,[esp]` alignment pad.
// @name DataBytes_008665CC
// @summary Non-executing 20-byte data block (byte-value table 0x00-0x04); no observable logic.
static const uint8_t kDataTable_008665CC[20] = {
    0x00, 0x01, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x8D, 0x64, 0x24, 0x00,
};

void fn_008665CC(void* self) {
    (void)self;
}
} // namespace lift_008665CC

// [0x00869310]
namespace lift_00869310 {
// @name CopyBytesForward
// @summary Forward byte-by-byte copy of `count` bytes from src to dst; no-op when count is zero.

void CopyBytesForward(uint8_t* dst, const uint8_t* src, uint32_t count) {
    while (count != 0) {
        *dst = *src;
        ++dst;
        ++src;
        --count;
    }
}
} // namespace lift_00869310
