// Lifted C++ translation unit: lifted/Primitives/Arrow.cpp
#include "lift_compat.h"
// GL_RESCALE_NORMAL (0x803A) passed to glEnable / glDisable.
// glEnable (OPENGL32, cdecl; enables a GL capability).
extern "C" void (*mem_00925418)(unsigned int cap);
// glPushMatrix (OPENGL32, cdecl).
extern "C" void (*mem_00925414)(void);
// glRotatef (OPENGL32, cdecl; angle, x, y, z).
extern "C" void (*mem_009254CC)(float angle, float x, float y, float z);
// glPopMatrix (OPENGL32, cdecl).
extern "C" void (*mem_00925404)(void);
// glDisable (OPENGL32, cdecl; disables a GL capability).
extern "C" void (*mem_00925438)(unsigned int cap);
// Rotation angle constant: 90.0f.
extern "C" const float mem_00955A30;
// Rotation axis component constant: -1.0f.
extern "C" const float mem_0093F7B8;

// [0x0053C1F0] Primitives::Arrow::vfunc_28 (95 bytes)
// @name Primitives::Arrow::vfunc_28
// @class Primitives::Arrow
// @summary Enables GL_RESCALE_NORMAL, rotates 90 degrees about -Y, invokes the embedded sub-object's vtable slot 0x58 with -1.0f, then restores the matrix and disables GL_RESCALE_NORMAL.
// @field Primitives::Arrow +0x3c <subobject with vtable> field_0x3c
void fn_0053C1F0(void* self) {
    constexpr unsigned int kRescaleNormal = 0x803A;

    mem_00925418(kRescaleNormal);
    mem_00925414();
    mem_009254CC(mem_00955A30, 0.0f, mem_0093F7B8, 0.0f);

    void* sub = static_cast<unsigned char*>(self) + 0x3C;
    void* vtbl = lift_field<void*>(sub, 0x00);
    void* slot = lift_field<void*>(vtbl, 0x58);
    auto method = reinterpret_cast<void (*)(void*, float)>(slot);
    method(sub, mem_0093F7B8);

    mem_00925404();
    mem_00925438(kRescaleNormal);
}
