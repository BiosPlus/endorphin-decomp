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

// [0x0053E0C0] Primitives::Arrow::vfunc_25 (162 bytes)
namespace lift_0053E0C0 {
// Known callee 0x0053A610: Primitives::Plane::vfunc_25 (thiscall; self in ecx, three stack args, ret 0xC).
extern void ext_0053A610(void* self, void* arg1, void* arg2, uint32_t arg3);
// Callee 0x005B11E0: thiscall accessor on arg1; takes an index and one 32-bit value, returns a float.
extern float ext_005B11E0(void* self, uint32_t index, uint32_t value);
// Callee 0x00538D10: thiscall on the subobject at self+0x3C; takes one float argument.
extern void ext_00538D10(void* self, float value);

// @name Primitives::Arrow::vfunc_25
// @class Primitives::Arrow
// @summary Calls Plane::vfunc_25 with (arg1, arg2, arg3), sets flag bit 0x4 and clears flag bit 0x200 in self+0x1C, then scales three accessor results from arg1 by arg2's float at +0xC0 and chained products, and forwards the final product to the subobject at self+0x3C.
// @field Primitives::Arrow +0x1C uint32_t field_0x1c
// @field Primitives::Arrow +0x3C void field_0x3c
void fn_0053E0C0(void* self, void* arg1, void* arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    // Flags: force bit 0x4 on, force bit 0x200 off.
    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x4) == 0) {
        flags ^= 0x4;
    }
    if (flags & 0x200) {
        flags ^= 0x200;
    }
    lift_field<uint32_t>(self, 0x1C) = flags;

    // arg2 supplies a scale factor (float at +0xC0) and an integer value (at +0x90).
    float scale = lift_field<float>(arg2, 0xC0);
    uint32_t raw = lift_field<uint32_t>(arg2, 0x90);

    // Chain: each step multiplies the accessor result by the previous product.
    float p1 = ext_005B11E0(arg1, 2, raw) * scale;
    float p2 = ext_005B11E0(arg1, 1, std::bit_cast<uint32_t>(p1)) * p1;
    float p3 = ext_005B11E0(arg1, 0, std::bit_cast<uint32_t>(p2)) * p2;

    // Forward the final product to the subobject at +0x3C.
    ext_00538D10(static_cast<uint8_t*>(self) + 0x3C, p3);
}
} // namespace lift_0053E0C0
