// Lifted C++ translation unit: lifted/Primitives/SkeletalJoint.cpp
#include "lift_compat.h"

// [0x0053DE20] Primitives::SkeletalJoint::vfunc_25 (117 bytes)
namespace lift_0053DE20 {
extern void ext_0053DC50(void* self, void* a1, void* a2, void* a3);

static inline uint32_t& u32_at(void* base, size_t off) {
    return *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(base) + off);
}

// @name Primitives::SkeletalJoint::vfunc_25
// @class Primitives::SkeletalJoint
// @summary Calls the Hinge base implementation, copies two dwords from the argument at +0x88/+0x8c into this+0xcc/+0xd0, then sets/clears flag bits in this+0x1c.
// @field Primitives::SkeletalJoint +0x1c uint32_t flags
// @field Primitives::SkeletalJoint +0xcc uint32_t field_0xcc
// @field Primitives::SkeletalJoint +0xd0 uint32_t field_0xd0
void fn_0053DE20(void* self, void* a1, void* a2, void* a3) {
    ext_0053DC50(self, a1, a2, a3);

    // Copy two dwords from the 2nd argument (a2 + 0x88 / + 0x8c).
    u32_at(self, 0xcc) = u32_at(a2, 0x88);
    u32_at(self, 0xd0) = u32_at(a2, 0x8c);

    // Flag normalisation on this->flags (+0x1c):
    //   set 0x4, set 0x20000, clear 0x40000, set 0x1.
    uint32_t flags = u32_at(self, 0x1c);
    flags |= 0x00000004u;
    flags |= 0x00020000u;
    flags &= ~0x00040000u;
    flags |= 0x00000001u;
    u32_at(self, 0x1c) = flags;
}
} // namespace lift_0053DE20
