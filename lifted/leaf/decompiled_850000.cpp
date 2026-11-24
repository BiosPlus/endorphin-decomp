// Lifted C++ translation unit: lifted/leaf/decompiled_850000.cpp
#include "lift_compat.h"

// [0x0085E04B] sub_0085E04B (5 bytes)
// @name sub_0085E04B
// @summary Five-byte no-op: `add eax, 0` (opcode 05 with imm32 0), which leaves the register value unchanged; no observable effect beyond flags.
void fn_0085E04B(void) {
    // Single instruction `add eax, 0x0` (05 00 00 00 00). Adding zero to eax
    // does not change any value, so there is no portable C++ statement with a
    // visible effect. Kept as an empty function to preserve the address slot.
}

// [0x0085D85B] sub_0085D85B (5 bytes)
// @name sub_0085D85B
// @summary No-op: "add eax, 0" (eax unchanged; only flags are touched)
void fn_0085D85B(void) {
    // add eax, 0 leaves eax unchanged. Its only effect is on the flags,
    // which C++ cannot observe portably, so there is nothing to emit.
}

// [0x0085FC0B] sub_0085FC0B (5 bytes)
// @name sub_0085FC0B
// @summary No-op: `add eax, 0` (opcode 05 with imm32 0), which leaves eax unchanged; only flags are touched.
void fn_0085FC0B(void) {
    // Single instruction `add eax, 0x0` (05 00 00 00 00). Adding zero to eax
    // does not change any value, so there is no portable C++ statement with a
    // visible effect. Kept as an empty function to preserve the address slot.
}

// [0x0085D504] sub_0085D504 (12 bytes)
// @name sub_0085D504
// @summary No-op stub (add eax, 0).
void fn_0085D504(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085D554] sub_0085D554 (12 bytes)
// @name sub_0085D554
// @summary No-op stub (add eax, 0).
void fn_0085D554(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085E024] sub_0085E024 (12 bytes)
// @name sub_0085E024
// @summary No-op stub (add eax, 0).
void fn_0085E024(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085FA64] sub_0085FA64 (12 bytes)
// @name sub_0085FA64
// @summary No-op stub (add eax, 0).
void fn_0085FA64(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085FCD4] sub_0085FCD4 (12 bytes)
// @name sub_0085FCD4
// @summary No-op stub (add eax, 0).
void fn_0085FCD4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085BFE0]
namespace lift_0085BFE0 {
// @name GlobalFreeForwarder_0085BFE0
// @summary Forwards its single stack argument (an HGLOBAL) to ext_00859730 (GlobalFree wrapper) and returns the result.

extern HGLOBAL ext_00859730(HGLOBAL hMem);

uint32_t __cdecl fn_0085BFE0(uint32_t hMem) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(
        ext_00859730(reinterpret_cast<HGLOBAL>(static_cast<uintptr_t>(hMem)))));
}
} // namespace lift_0085BFE0

// [0x0085D560] sub_0085D560 (16 bytes)
namespace lift_0085D560 {
extern void* ext_LocalAlloc(UINT uFlags, SIZE_T uBytes);

// @name LocalAllocZeroFlags
// @summary Allocates uBytes via LocalAlloc with uFlags = 0 and returns the handle.
void* fn_0085D560(SIZE_T uBytes) {
    return ext_LocalAlloc(0, uBytes);
}
} // namespace lift_0085D560

// [0x00859E50] sub_00859E50 (32 bytes)
namespace lift_00859E50 {
// @name ResolveDwordThroughFlaggedIndirection
// @summary Returns the dword at p+0x00; if bit 0x04 of the byte at p+0x14 is set, returns the dword that value points to instead.
// @field Unknown +0x00 DWORD ptrAt00
// @field Unknown +0x14 BYTE flags14
uint32_t ResolveDwordThroughFlaggedIndirection(void* self) {
    uint32_t value = lift_field<uint32_t>(self, 0x00);
    uint8_t flags = lift_field<uint8_t>(self, 0x14);
    if (flags & 0x04) {
        value = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(value));
    }
    return value;
}
} // namespace lift_00859E50
