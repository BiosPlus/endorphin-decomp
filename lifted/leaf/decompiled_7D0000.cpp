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

// [0x007DADA0] sub_007DADA0 (33 bytes)
namespace lift_007DADA0 {
extern void ext_007D5950(std::uint32_t a, std::uint32_t b, std::uint32_t c);

// @name Unknown::forwardToInnerWithConstant
// @class Unknown
// @summary Reads the inner object pointer at +0x0C, loads its dword at +0xB0, forwards it with constant 0x0099E218 to ext_007D5950, and returns 0 (AX cleared).
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0xB0 uint32_t field_0xB0

// Load/store helpers keep the 32-bit guest address arithmetic explicit.
static inline std::uint32_t lift_load32(std::uint32_t addr) {
    return *reinterpret_cast<const std::uint32_t*>(static_cast<std::uintptr_t>(addr));
}

std::uint16_t fn_007DADA0(std::uint8_t* self) {
    const std::uint32_t inner = *reinterpret_cast<const std::uint32_t*>(self + 0x0C);
    const std::uint32_t value = lift_load32(inner + 0xB0);
    ext_007D5950(0u, value, 0x0099E218u);
    return 0;
}
} // namespace lift_007DADA0

// [0x007D5C80] sub_007D5C80 (34 bytes)
namespace lift_007D5C80 {
// Known callee 0x007D5A00: sub_007D5A00 (54 bytes)
extern void ext_007D5A00(uint32_t a, uint32_t b);
// Function pointer stored in .data at 0x00AB28C8 (holds 0x007D4780)
extern uint32_t mem_00AB28C8;

// @name Unknown::invokeCallbackAtOffset6C
// @class Unknown (no member access; pointer arithmetic only)
// @summary Calls ext_007D5A00(arg0, arg1), then calls the function pointer at mem_00AB28C8 with (arg0 + 0x6C, arg1).
void fn_007D5C80(uint32_t arg0, uint32_t arg1) {
    ext_007D5A00(arg0, arg1);
    using Fn = void (*)(uint32_t, uint32_t);
    Fn target = reinterpret_cast<Fn>(static_cast<uintptr_t>(mem_00AB28C8));
    target(arg0 + 0x6C, arg1);
}
} // namespace lift_007D5C80

// [0x007DC8C0] sub_007DC8C0 (37 bytes)
namespace lift_007DC8C0 {
// @name SearchKeyedTable16
// @class <none>
// @summary Scans a 12-byte-stride table of 16-bit keys (terminated by 0x24) from `p`
//          and returns the first entry whose key matches `key`, or the terminator entry.
// @field <none>
uint8_t* fn_007DC8C0(uint8_t* p, int32_t key) {
    uint16_t k = *reinterpret_cast<uint16_t*>(p);
    if (k == 0x24) {
        return p;
    }
    for (;;) {
        if (static_cast<int32_t>(static_cast<int16_t>(k)) == key) {
            return p;
        }
        p += 12;
        k = *reinterpret_cast<uint16_t*>(p);
        if (k == 0x24) {
            return p;
        }
    }
}
} // namespace lift_007DC8C0
