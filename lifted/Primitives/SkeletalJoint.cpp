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

// [0x0053D0D0] Primitives::SkeletalJoint::vfunc_28 (271 bytes)
namespace lift_0053D0D0 {
// Known callee 0x0053CB60: Primitives::Hinge::vfunc_28 (Draws the hinge's line-segment marker and, when flag 0x20000 is set, its quad outline, then draws two attached sub-objects via vtable slot 0x58 inside a GL attribute/matrix push-pop.)
extern void ext_0053CB60(void* self);
// Known callee 0x0053DC50: Primitives::Hinge::vfunc_25 (Initializes Hinge primitive flags, scaled dimensions, and registers resource at +0xbc.) Listed as a callee; not invoked by this function's disassembly.
extern void ext_0053DC50(void* self, uint32_t arg1, void* arg2, uint32_t arg3);
// Known callee 0x0063E02A: thunk_GLU32_gluCylinder (IAT jump thunk forwarding to GLU32!gluCylinder.)
extern void ext_0063E02A(void* quadric, double base, double top, double height, uint32_t slices, uint32_t stacks);

// .rdata constants referenced by the original code
extern const double mem_0092A280; // 0.009999999776482582 (scale for width)
extern const double mem_00955C80; // 0.6499999761581421   (scale for radius)
extern const double mem_0092C508; // 0.10000000149011612  (scale for cap height)
extern const float  mem_00955A30; // 90.0f                (rotation angle)

// IAT slots holding OPENGL32 / GLU entry points (read as function pointers, as the original does)
extern void* const mem_0092546C; // OPENGL32!glPushAttrib
extern void* const mem_00925520; // OPENGL32!glLineWidth
extern void* const mem_00925414; // OPENGL32!glPushMatrix
extern void* const mem_009254CC; // OPENGL32!glRotatef
extern void* const mem_009253D0; // OPENGL32!glTranslatef
extern void* const mem_00925404; // OPENGL32!glPopMatrix
extern void* const mem_0092552C; // OPENGL32!glPopAttrib

// @name Primitives::SkeletalJoint::vfunc_28
// @class Primitives::SkeletalJoint
// @summary Draws the base hinge primitive, then, when flag 0x20000 is set, draws a rotated pair of cylinders (line-width scaled) using the joint's quadric and slice/stack fields.
// @field Primitives::SkeletalJoint +0x1C uint32_t flags
// @field Primitives::SkeletalJoint +0x3C float field_0x3c
// @field Primitives::SkeletalJoint +0xCC uint32_t field_0xcc
// @field Primitives::SkeletalJoint +0xD0 uint32_t field_0xd0
// @field Primitives::SkeletalJoint +0xD4 void* field_0xd4
void fn_0053D0D0(void* self, uint32_t arg1) {
    using PFN_v_u32 = void(__stdcall*)(uint32_t);
    using PFN_v_f = void(__stdcall*)(float);
    using PFN_v = void(__stdcall*)();
    using PFN_v_ffff = void(__stdcall*)(float, float, float, float);
    using PFN_v_fff = void(__stdcall*)(float, float, float);

    (void)arg1;
    // 0x0053DC50 is listed in the callee metadata but not invoked by these bytes; address only, no call.
    (void)&ext_0053DC50;
    ext_0053CB60(self);

    if ((lift_field<uint32_t>(self, 0x1C) & 0x20000u) == 0) {
        return;
    }

    reinterpret_cast<PFN_v_u32>(mem_0092546C)(4u);      // glPushAttrib(GL_ENABLE_BIT-style mask 4)
    reinterpret_cast<PFN_v_f>(mem_00925520)(1.0f);      // glLineWidth(1.0)

    const float f = lift_field<float>(self, 0x3C);
    const float width = static_cast<float>(static_cast<double>(f) * mem_0092A280);
    const float radius = static_cast<float>(static_cast<double>(f) * mem_00955C80);

    reinterpret_cast<PFN_v>(mem_00925414)();            // glPushMatrix()
    reinterpret_cast<PFN_v_ffff>(mem_009254CC)(mem_00955A30, 0.0f, 1.0f, 0.0f); // glRotatef(90, 0, 1, 0)

    void* quadric = lift_field<void*>(self, 0xD4);
    const uint32_t slices = lift_field<uint32_t>(self, 0xCC);
    const uint32_t stacks = lift_field<uint32_t>(self, 0xD0);

    ext_0063E02A(quadric, 0.0, static_cast<double>(width), static_cast<double>(radius),
                 slices, stacks);

    reinterpret_cast<PFN_v_fff>(mem_009253D0)(0.0f, 0.0f, radius); // glTranslatef(0, 0, radius)

    const double cap_height = static_cast<double>(radius) * mem_0092C508;
    ext_0063E02A(quadric, static_cast<double>(width), 0.0, cap_height, slices, stacks);

    reinterpret_cast<PFN_v>(mem_00925404)();            // glPopMatrix()
    reinterpret_cast<PFN_v>(mem_0092552C)();            // glPopAttrib()
}
} // namespace lift_0053D0D0
