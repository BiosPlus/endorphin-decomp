// Lifted C++ translation unit: lifted/Primitives/auto_tiny.cpp
#include "lift_compat.h"

// [0x0053B790] Primitives::Marker::vfunc_30 (9 bytes)
// @name Primitives::Marker::vfunc_30
// @class Primitives::Marker
// @summary Returns the buffered unsigned int at +0x24 offset by 8.
// @field Primitives::Marker +0x24 DWORD bufferedValue
DWORD fn_0053B790(const void* self) {
    const BYTE* base = static_cast<const BYTE*>(self);
    DWORD value = *reinterpret_cast<const DWORD*>(base + 0x24);
    return value + 8;
}

// [0x0053C970]
// @name Primitives::Sensor2::vfunc_13
// @class Primitives::Sensor2
// @summary Loads a float through the pointer argument and stores it at this+0x60 (thiscall, one stack arg, ret 4).
// @field Primitives::Sensor2 +0x60 float field_0x60
void fn_0053C970(void* self, const float* src) {
    // mov eax, [esp+4] ; fld dword ptr [eax] ; fstp dword ptr [ecx+0x60] ; ret 4
    lift_field<float>(self, 0x60) = *src;
}
