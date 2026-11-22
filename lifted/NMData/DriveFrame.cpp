// Lifted C++ translation unit: lifted/NMData/DriveFrame.cpp
#include "lift_compat.h"
// Callee: sub_006125B0 (147 bytes). Its return value is used as an array base pointer (eax).
extern "C" float* ext_006125B0();

// [0x005EC060] NMData::DriveFrame::vfunc_67 (15 bytes)
// @name NMData::DriveFrame::vfunc_67
// @class NMData::DriveFrame
// @summary Returns the float element at index `idx` of the array obtained from sub_006125B0.
// @field none: the function does not access DriveFrame fields directly; the array base comes from ext_006125B0.
float fn_005EC060(int32_t idx) {
    float* base = ext_006125B0();
    return base[idx];
}
