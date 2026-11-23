// Lifted C++ translation unit: lifted/Primitives/Frustum.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25 (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// [0x0053DB00] Primitives::Frustum::vfunc_25 (62 bytes)
// @name Primitives::Frustum::vfunc_25
// @class Primitives::Frustum
// @summary Forwards three args to Plane::vfunc_25, sets flag bit 0x40 in +0x1c if clear, and copies arg2+0x88/+0x8c into +0x3c/+0x40.
// @field Primitives::Frustum +0x1c uint32_t field_0x1c
// @field Primitives::Frustum +0x3c uint32_t field_0x3c
// @field Primitives::Frustum +0x40 uint32_t field_0x40
// Note: arg2 is a pointer to an object of unknown class; it is read at +0x88 and +0x8c
// (field_0x88 / field_0x8c, uint32_t).
void fn_0053DB00(void* self, uint32_t arg1, void* arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(arg2)), arg3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x40u) == 0) {
        flags ^= 0x40u;
    }

    lift_field<uint32_t>(self, 0x3C) = lift_field<uint32_t>(arg2, 0x88);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(arg2, 0x8C);
}

// [0x0053BC40] Primitives::Frustum::vfunc_28 (82 bytes)
namespace lift_0053BC40 {
extern float* __thiscall ext_005B11D0(void* self, uint32_t index);
// Known callee 0x0063E02A: thunk_GLU32_gluCylinder (IAT jump thunk forwarding to GLU32!gluCylinder.)
extern void __stdcall ext_0063E02A(void* quadric, double baseRadius, double topRadius,
                                       double height, uint32_t slices, uint32_t stacks);

// @name Primitives::Frustum::vfunc_28
// @class Primitives::Frustum
// @summary Samples three floats from the object at +0x20 (indices 2, 1, 0) and draws a cylinder via gluCylinder using them, the slices/stacks at +0x3c/+0x40 and the quadric at +0x44.
// @field Primitives::Frustum +0x20 void* field_0x20
// @field Primitives::Frustum +0x3c uint32_t field_0x3c
// @field Primitives::Frustum +0x40 uint32_t field_0x40
// @field Primitives::Frustum +0x44 void* field_0x44
void fn_0053BC40(void* self) {
    float* height = ext_005B11D0(lift_field<void*>(self, 0x20), 2);
    float* topRadius = ext_005B11D0(lift_field<void*>(self, 0x20), 1);
    float* baseRadius = ext_005B11D0(lift_field<void*>(self, 0x20), 0);

    uint32_t slices = lift_field<uint32_t>(self, 0x3c);
    uint32_t stacks = lift_field<uint32_t>(self, 0x40);
    void* quadric = lift_field<void*>(self, 0x44);

    ext_0063E02A(quadric,
                 static_cast<double>(*baseRadius),
                 static_cast<double>(*topRadius),
                 static_cast<double>(*height),
                 slices,
                 stacks);
}
} // namespace lift_0053BC40
