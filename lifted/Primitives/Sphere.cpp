// Lifted C++ translation unit: lifted/Primitives/Sphere.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25 (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// [0x0053D2E0] Primitives::Sphere::vfunc_25 (62 bytes)
// @name Primitives::Sphere::vfunc_25
// @class Primitives::Sphere
// @summary Forwards three args to the Plane base vfunc_25, sets flag 0x40 in +0x1c, and copies two dwords from arg2 (+0x80/+0x84) into +0x3c/+0x40.
// @field Primitives::Sphere +0x1c uint32_t field_0x1c
// @field Primitives::Sphere +0x3c uint32_t field_0x3c
// @field Primitives::Sphere +0x40 uint32_t field_0x40
// Note: arg2 is dereferenced at +0x80/+0x84; its type is not recovered here.
// Note: original is thiscall with 3 stack args and `ret 0xc` (callee-cleaned); the portable form uses a plain signature.
void fn_0053D2E0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x40u) == 0) {
        flags ^= 0x40u;
    }

    const void* src = reinterpret_cast<const void*>(static_cast<uintptr_t>(arg2));
    lift_field<uint32_t>(self, 0x3C) = lift_field<uint32_t>(src, 0x80);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(src, 0x84);
}
