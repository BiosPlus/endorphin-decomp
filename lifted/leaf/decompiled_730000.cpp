// Lifted C++ translation unit: lifted/leaf/decompiled_730000.cpp
#include "lift_compat.h"

// [0x00736FE0] sub_00736FE0 (32 bytes)
namespace lift_00736FE0 {
// @name sub_00736FE0
// @summary Unidentified; bytes are data/padding (00 05 05... then 0x90 NOPs), not real code. No-op.
void fn_00736FE0() {
}
} // namespace lift_00736FE0

// [0x00736C90] sub_00736C90 (32 bytes)
namespace lift_00736C90 {
// Known callee 0x00782E70: sub_00782E70 (Auto-lifted identical-shape clone of 0x007846D0 (SortedArray::findValue).)
extern uint32_t ext_00782E70(void* self, uint32_t key, int32_t* outIndex);

// @name Unknown::FindInEmbeddedSortedArray
// @class Unknown
// @summary Forwards a key lookup to the SortedArray embedded at this+0xB8 and returns its result (no out-index).
// @field Unknown +0xB8 SortedArray field_0xB8
uint32_t fn_00736C90(void* self, uint32_t key) {
    // Equivalent of: push 0; push key; this += 0xB8; call findValue; ret 4
    return ext_00782E70(static_cast<uint8_t*>(self) + 0xB8, key, nullptr);
}
} // namespace lift_00736C90
