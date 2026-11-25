// Lifted C++ translation unit: lifted/clones/auto_clones_6C0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <new>
#include <string>

#include <string>
namespace lift_006C1240 {
// @name sub_006C1240
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C1240(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x1AC8, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x1ACC, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x1AD0, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x1AD4, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x1AD8, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x1ADC, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C1240

// [0x006C8EF0] sub_006C8EF0 (74 bytes)
namespace lift_006C8EF0 {
// @name sub_006C8EF0
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5D620;
extern uint32_t mem_00B5D624;
extern uint32_t mem_00B5D628;
extern uint32_t mem_00B5D62C;
extern uint32_t mem_00B5D630;
extern uint32_t mem_00B5D634;
extern uint32_t mem_00B5D638;
extern uint32_t mem_00B5D63C;
extern uint32_t mem_00925284;

// @name fn_006C8EF0 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5D620 = lo;
    mem_00B5D624 = hi;
    mem_00B5D628 = lo;
    mem_00B5D62C = hi;
    mem_00B5D630 = lo;
    mem_00B5D634 = hi;
    mem_00B5D638 = lo;
    mem_00B5D63C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006C8EF0

// [0x006C2020]
namespace lift_006C2020 {
// @name Unknown::DestroySubobjects_006C2020
// @class Unknown
// @summary Runs the cleanup routine for the subobjects at +0x28 and +0x08 of this (SEH-guarded in the original, no return value).
// @field Unknown +0x08 void field_0x08 (subobject passed to cleanup routine)
// @field Unknown +0x28 void field_0x28 (subobject passed to cleanup routine)

extern void ext_006D80A0(void* self);

extern void fn_006C2020(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    ext_006D80A0(base + 0x28);
    ext_006D80A0(base + 0x08);
}
} // namespace lift_006C2020
