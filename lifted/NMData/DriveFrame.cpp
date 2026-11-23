// Lifted C++ translation unit: lifted/NMData/DriveFrame.cpp
#include "lift_compat.h"
// Callee: sub_006125B0 (147 bytes). Its return value is used as an array base pointer (eax).
extern "C" float* ext_006125B0();
// @name NMData::DriveFrame::vfunc_67
// @class NMData::DriveFrame
// @summary Returns the float element at index `idx` of the array obtained from sub_006125B0.
// @field none: the function does not access DriveFrame fields directly; the array base comes from ext_006125B0.
float fn_005EC060(int32_t idx) {
    float* base = ext_006125B0();
    return base[idx];
}
// Matches the sibling declaration used by fn_005EC060 (identical redeclaration is legal).

// [0x005EC070] NMData::DriveFrame::vfunc_68 (30 bytes)
// @name NMData::DriveFrame::vfunc_68
// @class NMData::DriveFrame
// @summary Fetches a 3-float vector from ext_006125B0() and copies it into the caller-supplied output buffer, returning that buffer.
// (no direct DriveFrame field offsets are accessed; self is only used as the implicit this for ext_006125B0)
float* fn_005EC070(void* self, float* out) {
    (void)self;
    float* src = ext_006125B0();
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    return out;
}
