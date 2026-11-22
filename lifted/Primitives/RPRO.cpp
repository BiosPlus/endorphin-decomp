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
