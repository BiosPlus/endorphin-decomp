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
// Callee: thiscall on (self + 0x3C) with three float stack arguments (x, y, z).
extern "C" void ext_00538CF0(void* self, float x, float y, float z);

extern "C" void ext_00538CF0(void* self, float x, float y, float z);
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

// [0x0052F420] Primitives::Arrow::vfunc_13 (37 bytes)
// @name Primitives::Arrow::vfunc_13
// @class Primitives::Arrow
// @summary Forwards the vector pointed to by the stack argument (x, y, z) to the subobject at +0x3C.
// @field Primitives::Arrow +0x3C <subobject with vtable> field_0x3c
void fn_0052F420(void* self, const float* v) {
    const float x = v[0];
    const float y = v[1];
    const float z = v[2];
    ext_00538CF0(static_cast<uint8_t*>(self) + 0x3C, x, y, z);
}

// [0x0052FE50] Primitives::Arrow::vfunc_0 (96 bytes)
namespace lift_0052FE50 {
extern void ext_00538CD0(void* self);
extern void ext_0053A810(void* self);
extern void ext_006A5C5C(void* p);

// @name Primitives::Arrow::scalar_deleting_dtor
// @class Primitives::Arrow
// @summary Scalar deleting destructor: destroys the +0x3C subobject, runs the base destructor, and frees this if flags bit 0 is set.
// @field Primitives::Arrow +0x3C <subobject with vtable> field_0x3c
void* fn_0052FE50(void* self, uint32_t flags) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);

    // Destroy embedded subobject at +0x3C.
    ext_00538CD0(base + 0x3C);

    // Base-class destructor body on the whole object.
    ext_0053A810(self);

    // Scalar deleting behaviour: free storage when bit 0 of the flag argument is set.
    if (flags & 0x1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_0052FE50
