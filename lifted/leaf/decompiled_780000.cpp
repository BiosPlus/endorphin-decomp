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
