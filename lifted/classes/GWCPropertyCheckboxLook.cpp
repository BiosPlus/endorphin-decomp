// Lifted C++ translation unit: lifted/classes/GWCPropertyCheckboxLook.cpp
#include "lift_compat.h"

// [0x006B32D0]
namespace lift_006B32D0 {
// @name GWCPropertyCheckboxLook::vfunc_2
// @class GWCPropertyCheckboxLook
// @summary Copies a 16-byte rect from arg4 to sret (arg1), sets right = left, and returns sret.


void* __thiscall fn_006B32D0(void* /*this_ptr*/, void* sret, uint32_t /*arg2*/, uint32_t /*arg3*/, const void* src_rect)
{
    uint32_t* dst = static_cast<uint32_t*>(sret);
    const uint32_t* src = static_cast<const uint32_t*>(src_rect);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[2] = dst[0];
    return sret;
}
} // namespace lift_006B32D0
