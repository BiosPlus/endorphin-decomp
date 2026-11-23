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
// Known callee 0x0053CB60: Primitives::Hinge::vfunc_28 (thiscall, one stack arg, ret 4).
extern void ext_0053CB60(void* self, uint32_t arg);
// Known callee 0x0063E02A: thunk_GLU32_gluCylinder (stdcall forwarder to GLU32!gluCylinder).
extern void ext_0063E02A(void* quad, double base, double top, double height,
                             int32_t slices, int32_t stacks);

// OpenGL entry points reached through IAT slots (stdcall on Win32).
extern void (*mem_0092546C)(GLbitfield mask);                          // glPushAttrib
extern void (*mem_00925520)(GLfloat width);                            // glLineWidth
extern void (*mem_00925414)(void);                                     // glPushMatrix
extern void (*mem_009254CC)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z); // glRotatef
extern void (*mem_009253D0)(GLfloat x, GLfloat y, GLfloat z);          // glTranslatef
extern void (*mem_00925404)(void);                                     // glPopMatrix
extern void (*mem_0092552C)(void);                                     // glPopAttrib

// Read-only constants in .rdata.
extern const double mem_0092A280; // 0.01 (fmul qword)
extern const double mem_00955C80; // 0.65 (fmul qword)
extern const double mem_0092C508; // 0.1  (fmul qword)
extern const float  mem_00955A30; // 90.0f

// @name Primitives::SkeletalJoint::vfunc_28
// @class Primitives::SkeletalJoint
// @summary Runs the Hinge base draw, then if flag 0x20000 is set draws a two-cylinder cone marker (rotated 90 deg about Y) inside a GL attrib/matrix push-pop.
// @field Primitives::SkeletalJoint +0x1C uint32_t flags
// @field Primitives::SkeletalJoint +0x3C float field_0x3c
// @field Primitives::SkeletalJoint +0xCC uint32_t field_0xcc
// @field Primitives::SkeletalJoint +0xD0 uint32_t field_0xd0
// @field Primitives::SkeletalJoint +0xD4 void* field_0xd4
void fn_0053D0D0(void* self, uint32_t arg) {
    ext_0053CB60(self, arg);

    if ((lift_field<uint32_t>(self, 0x1C) & 0x20000u) == 0) {
        return;
    }

    mem_0092546C(4);       // glPushAttrib(GL_LINE_BIT)
    mem_00925520(1.0f);    // glLineWidth(1.0)

    const float len = lift_field<float>(self, 0x3C);
    const float radius = static_cast<float>(len * mem_0092A280); // len * 0.01
    const float height = static_cast<float>(len * mem_00955C80); // len * 0.65

    const uint32_t slices = lift_field<uint32_t>(self, 0xCC);
    const uint32_t stacks = lift_field<uint32_t>(self, 0xD0);
    void* const quad = lift_field<void*>(self, 0xD4);

    mem_00925414();                                   // glPushMatrix
    mem_009254CC(mem_00955A30, 0.0f, 1.0f, 0.0f);     // glRotatef(90, 0, 1, 0)

    // Cylinder 1: base 0, top = radius, height = height.
    ext_0063E02A(quad, 0.0, static_cast<double>(radius),
                 static_cast<double>(height),
                 static_cast<int32_t>(slices), static_cast<int32_t>(stacks));

    mem_009253D0(0.0f, 0.0f, height);                 // glTranslatef(0, 0, height)

    // Cylinder 2: base = radius, top 0, height = height * 0.1.
    ext_0063E02A(quad, static_cast<double>(radius), 0.0,
                 static_cast<double>(height) * mem_0092C508,
                 static_cast<int32_t>(slices), static_cast<int32_t>(stacks));

    mem_00925404();                                   // glPopMatrix
    mem_0092552C();                                   // glPopAttrib
}
} // namespace lift_0053D0D0
