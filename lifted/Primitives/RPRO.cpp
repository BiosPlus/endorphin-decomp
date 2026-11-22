// Lifted C++ translation unit: lifted/Primitives/RPRO.cpp
#include "lift_compat.h"
extern "C" void ext_glPushAttrib(GLbitfield mask);
extern "C" void ext_glLineWidth(GLfloat width);
extern "C" void ext_glPushMatrix(void);
extern "C" void ext_glMultMatrixf(const GLfloat* m);
extern "C" void ext_glPopMatrix(void);
extern "C" void ext_glPopAttrib(void);

// [0x0053C1A0] Primitives::RPRO::vfunc_28 (74 bytes)
// @name Primitives::RPRO::vfunc_28
// @class Primitives::RPRO
// @summary Saves GL line/matrix state, applies this object's 4x4 matrix, invokes a virtual method on the sub-object at +0x108 with arg 1, then restores GL state.
// @field Primitives::RPRO +0x44 float[16] matrix (passed to glMultMatrixf)
// @field Primitives::RPRO +0x108 void* sub_object (this-pointer for vtable slot 0x58 call)
void fn_0053C1A0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    ext_glPushAttrib(0x4 /* GL_LINE_BIT */);
    ext_glLineWidth(1.0f);
    ext_glPushMatrix();

    ext_glMultMatrixf(reinterpret_cast<const GLfloat*>(base + 0x44));

    void* sub = lift_field<void*>(base, 0x108);
    void** vtbl = *reinterpret_cast<void***>(sub);
    using SubFn = void(__thiscall*)(void* self_sub, int arg);
    reinterpret_cast<SubFn>(vtbl[0x58 / sizeof(void*)])(sub, 1);

    ext_glPopMatrix();
    ext_glPopAttrib();
}

// [0x0053C150]
// @name Primitives::RPRO::vfunc_29
// @class Primitives::RPRO
// @summary Resets the base animation state, then reinitialises the RPRO float/int state block (1.0 at +0x3C and +0x44, zero elsewhere).
// @field Primitives::RPRO +0x3C float field_0x3c
// @field Primitives::RPRO +0x40 int32_t field_0x40
// @field Primitives::RPRO +0x44 float field_0x44
// @field Primitives::RPRO +0x48 float field_0x48
// @field Primitives::RPRO +0x4C float field_0x4c
// @field Primitives::RPRO +0x50 float field_0x50
// @field Primitives::RPRO +0x54 float field_0x54
// @field Primitives::RPRO +0x58 float field_0x58
// @field Primitives::RPRO +0x5C float field_0x5c
// @field Primitives::RPRO +0x60 float field_0x60
// @field Primitives::RPRO +0x64 float field_0x64
// @field Primitives::RPRO +0x68 float field_0x68
// @field Primitives::RPRO +0x6C float field_0x6c
// @field Primitives::RPRO +0x70 float field_0x70
// @field Primitives::RPRO +0x74 float field_0x74
// @field Primitives::RPRO +0x78 float field_0x78
// @field Primitives::RPRO +0x7C float field_0x7c
// @field Primitives::RPRO +0x80 float field_0x80

// Known callee 0x0053AD10: Primitives::Animation::vfunc_29 (base animation reset).
void ext_0053AD10(void* self);

void fn_0053C150(void* self) {
    ext_0053AD10(self);

    lift_field<float>(self, 0x3C)   = 1.0f;
    lift_field<float>(self, 0x44)   = 1.0f;
    lift_field<float>(self, 0x48)   = 0.0f;
    lift_field<float>(self, 0x4C)   = 0.0f;
    lift_field<float>(self, 0x50)   = 0.0f;
    lift_field<float>(self, 0x54)   = 0.0f;
    lift_field<float>(self, 0x58)   = 0.0f;
    lift_field<float>(self, 0x5C)   = 0.0f;
    lift_field<float>(self, 0x60)   = 0.0f;
    lift_field<float>(self, 0x64)   = 0.0f;
    lift_field<float>(self, 0x68)   = 0.0f;
    lift_field<float>(self, 0x6C)   = 0.0f;
    lift_field<float>(self, 0x70)   = 0.0f;
    lift_field<float>(self, 0x74)   = 0.0f;
    lift_field<float>(self, 0x78)   = 0.0f;
    lift_field<float>(self, 0x7C)   = 0.0f;
    lift_field<float>(self, 0x80)   = 0.0f;
    lift_field<int32_t>(self, 0x40) = 0;
}
