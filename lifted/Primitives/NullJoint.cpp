// Lifted C++ translation unit: lifted/Primitives/NullJoint.cpp
#include "lift_compat.h"

// [0x0053DD90]
namespace lift_0053DD90 {
extern void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern float ext_005B11E0(void* self, uint32_t arg1);
extern void ext_00538550(void* self, float value, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern uint32_t mem_00993838;

namespace {
inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}
}  // namespace

// @name Primitives::NullJoint::vfunc_25
// @class Primitives::NullJoint
// @summary Forwards to the base plane setter, forces flag bits 0x4 and 0x40000 on, clears bit 0x1, then pushes a float (from arg or a constant) into the subobject at +0x3c.
// @field Primitives::NullJoint +0x1c uint32_t field_0x1c
// @field Primitives::NullJoint +0x3c uint8_t field_0x3c
void fn_0053DD90(void* self, void* a, void* b, uint32_t c) {
    ext_0053A610(self, as_u32(a), as_u32(b), c);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1c);
    flags |= 0x4u;
    flags |= 0x40000u;
    flags &= ~uint32_t{1};

    // Assumes ECX is preserved as `a` across the ext_005B11E0 calls (the
    // original code reloads ECX from EDI before each call; its value is
    // passed as an argument to ext_00538550).
    const float zero = std::bit_cast<float>(mem_00993838);
    const float probe = ext_005B11E0(a, 0);

    float v;
    if (!(probe > zero)) {
        v = lift_field<float>(b, 0xb8);
    } else {
        v = ext_005B11E0(a, 0);
    }

    ext_00538550(static_cast<uint8_t*>(self) + 0x3c, v, as_u32(a), 0u, 0u);
}
} // namespace lift_0053DD90
