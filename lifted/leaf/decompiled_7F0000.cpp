// Lifted C++ translation unit: lifted/leaf/decompiled_7F0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

// [0x007F0B60] sub_007F0B60 (34 bytes)
namespace lift_007F0B60 {
// @name Unknown::appendZeroedEntry
// @class Unknown
// @summary Appends one zero-initialized 20-byte entry to a dynamic array header (base ptr, count) and increments count.
// @field Unknown +0x00 uint32_t entries_base (pointer to 20-byte entry array, stored as 32-bit address)
// @field Unknown +0x04 uint32_t entry_count
// Entry (20 bytes, stride 0x14) zeroed fields:
// @field Entry +0x00 uint32_t field_0x00
// @field Entry +0x04 uint32_t field_0x04
// @field Entry +0x08 uint32_t field_0x08
// @field Entry +0x0C uint32_t field_0x0c
// @field Entry +0x10 uint32_t field_0x10
void fn_007F0B60(void* self) {
    // 32-bit target: the header stores 32-bit addresses.
    auto* hdr = static_cast<uint32_t*>(self);
    uint32_t count = hdr[1];
    auto* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(hdr[0]));

    // Entry stride is 20 bytes (count * 5 dwords).
    uint8_t* entry = base + static_cast<size_t>(count) * 20u;
    std::memset(entry, 0, 20);

    hdr[1] = count + 1u;
}
} // namespace lift_007F0B60
