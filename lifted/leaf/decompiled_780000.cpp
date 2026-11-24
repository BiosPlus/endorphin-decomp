// Lifted C++ translation unit: lifted/leaf/decompiled_780000.cpp
#include "lift_compat.h"

// [0x00780250]
namespace lift_00780250 {
// @name UnknownClass::destroyField04
// @class UnknownClass
// @summary Passes field_0x04 to thunk_MFC80_ord_764.
// @field UnknownClass +0x04 uint32_t field_0x04


extern void ext_006A5C5C(uint32_t arg0);

void __thiscall fn_00780250(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x4);
    ext_006A5C5C(val);
}
} // namespace lift_00780250

// [0x00782B10]
namespace lift_00782B10 {
// @name GetBipedQuadrupedName
// @summary Returns "Biped" for selector 0, "Quadruped" for selector 1, otherwise nullptr.

extern const char mem_00AAF2A4[]; // "Biped"
extern const char mem_00AAF2AC[]; // "Quadruped"

const char* sub_00782B10(uint32_t selector) {
    if (selector == 0) {
        return mem_00AAF2A4;
    }
    if (selector == 1) {
        return mem_00AAF2AC;
    }
    return nullptr;
}
} // namespace lift_00782B10

// [0x00782B60]
namespace lift_00782B60 {
// @name GetAutoUserModeName
// @summary Returns "Auto" for selector 0, "User" for selector 1, otherwise nullptr.

extern const char mem_00AAF2BC[]; // "Auto"
extern const char mem_00AAF2C4[]; // "User"

const char* sub_00782B60(uint32_t selector) {
    if (selector == 0) {
        return mem_00AAF2BC;
    }
    if (selector == 1) {
        return mem_00AAF2C4;
    }
    return nullptr;
}
} // namespace lift_00782B60
