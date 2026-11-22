// Lifted C++ translation unit: lifted/Primitives/CameraFrustum.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25
// (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30;
//  then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// [0x0053E170] Primitives::CameraFrustum::vfunc_25 (78 bytes)
// @name CameraFrustum::vfunc_25
// @class Primitives::CameraFrustum
// @summary Forwards three arguments to Plane::vfunc_25, then normalizes flag bits at +0x1c
//          (sets 0x100 and 0x40000, clears 0x2).
// @field Primitives::CameraFrustum +0x1c uint32_t field_0x1c
void fn_0053E170(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t* flags = reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x1c);

    *flags |= 0x100;
    *flags |= 0x40000;
    *flags &= ~0x2u;
}
