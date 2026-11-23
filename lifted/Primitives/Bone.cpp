// Lifted C++ translation unit: lifted/Primitives/Bone.cpp
#include "lift_compat.h"

// [0x0053E1C0] Primitives::Bone::vfunc_25 (123 bytes)
namespace lift_0053E1C0 {
// Known callee 0x0053A610: Primitives::Plane::vfunc_25
// (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30;
//  then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern void ext_0053A610(void* self, void* arg1, uint32_t arg2, uint32_t arg3);

// Callee 0x005B11E0 (sub_005B11E0, 11 bytes): thiscall, one stack arg, returns float in st0.
extern float ext_005B11E0(void* self, uint32_t index);

// @name Primitives::Bone::vfunc_25
// @class Primitives::Bone
// @summary Forwards three args to Plane::vfunc_25, updates status bits in +0x1c (sets 0x4 and 0x40000, clears 0x1), then loads four floats (indices 0..3 via ext_005B11E0) into +0x3c..+0x48.
// @field Primitives::Bone +0x1c uint32_t flags
// @field Primitives::Bone +0x3c float value0
// @field Primitives::Bone +0x40 float value1
// @field Primitives::Bone +0x44 float value2
// @field Primitives::Bone +0x48 float value3
void fn_0053E1C0(void* self, void* arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1c);
    flags |= 0x4u;
    flags |= 0x40000u;
    flags &= ~0x1u;

    lift_field<float>(self, 0x3c) = ext_005B11E0(arg1, 0);
    lift_field<float>(self, 0x40) = ext_005B11E0(arg1, 1);
    lift_field<float>(self, 0x44) = ext_005B11E0(arg1, 2);
    lift_field<float>(self, 0x48) = ext_005B11E0(arg1, 3);
}
} // namespace lift_0053E1C0
