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
