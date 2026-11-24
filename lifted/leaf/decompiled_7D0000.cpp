// Lifted C++ translation unit: lifted/leaf/decompiled_7D0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x007D8850]
namespace lift_007D8850 {
// @name sub_007D8850
// @summary Single-argument forwarding wrapper; passes its one stack argument to sub_007D8420 and returns that result unchanged.

extern uint32_t ext_007D8420(uint32_t arg0);

extern uint32_t sub_007D8850(uint32_t arg0) {
    return ext_007D8420(arg0);
}
} // namespace lift_007D8850

// [0x007D4800] sub_007D4800 (32 bytes)
namespace lift_007D4800 {
extern void ext_007D5950(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

// @name ConditionalForwardCall
// @class
// @summary If the object's +0x04 field is non-zero, forwards it with the +0x1c field and a constant to ext_007D5950.
// @field Object +0x04 uint32_t field_0x04
// @field Object +0x1c uint32_t field_0x1c
void fn_007D4800(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);
    const std::uint32_t f04 = *reinterpret_cast<std::uint32_t*>(base + 0x04);
    if (f04 == 0) {
        return;
    }
    const std::uint32_t f1c = *reinterpret_cast<std::uint32_t*>(base + 0x1c);
    ext_007D5950(f04, 0x0099DE84u, f1c, 0u);
}
} // namespace lift_007D4800
