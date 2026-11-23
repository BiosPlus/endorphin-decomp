// Lifted C++ translation unit: lifted/Primitives/Sphere.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25 (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
#include <cstdint>
#include <cstring>
// sub_005B11D0 (thiscall, one stack arg, callee-cleaned): returns a pointer to a float.
extern "C" float* ext_005B11D0(void* self, uint32_t arg);
// Known callee 0x0063E036: thunk_GLU32_gluSphere (IAT jump thunk forwarding to GLU32!gluSphere.)
// Signature: void gluSphere(GLUquadric* qobj, GLdouble radius, GLint slices, GLint stacks)
extern "C" void ext_0063E036(void* qobj, double radius, int32_t slices, int32_t stacks);

#include <cstring>
// sub_005B11D0 (thiscall, one stack arg, callee-cleaned): returns a pointer to a float.
extern "C" float* ext_005B11D0(void* self, uint32_t arg);
// Known callee 0x0063E036: thunk_GLU32_gluSphere (IAT jump thunk forwarding to GLU32!gluSphere.)
// Signature: void gluSphere(GLUquadric* qobj, GLdouble radius, GLint slices, GLint stacks)
extern "C" void ext_0063E036(void* qobj, double radius, int32_t slices, int32_t stacks);
// @field Primitives::Sphere +0x40 uint32_t field_0x40
// Note: arg2 is dereferenced at +0x80/+0x84; its type is not recovered here.
// Note: original is thiscall with 3 stack args and `ret 0xc` (callee-cleaned); the portable form uses a plain signature.
void fn_0053D2E0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x40u) == 0) {
        flags ^= 0x40u;
    }

    const void* src = reinterpret_cast<const void*>(static_cast<uintptr_t>(arg2));
    lift_field<uint32_t>(self, 0x3C) = lift_field<uint32_t>(src, 0x80);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(src, 0x84);
}

// [0x0053B760] Primitives::Sphere::vfunc_28 (42 bytes)
// @name Primitives::Sphere::vfunc_28
// @class Primitives::Sphere
// @summary Reads the radius float through the sub-object at +0x20 and draws a GLU sphere using quadric +0x44, slices +0x3C and stacks +0x40.
// @field Primitives::Sphere +0x20 void* field_0x20
// @field Primitives::Sphere +0x3c uint32_t field_0x3c
// @field Primitives::Sphere +0x40 uint32_t field_0x40
// @field Primitives::Sphere +0x44 uint32_t field_0x44
void fn_0053B760(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);

    uint32_t sub_obj = 0;
    std::memcpy(&sub_obj, base + 0x20, sizeof sub_obj);
    float* radius_ptr = ext_005B11D0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub_obj)), 0);

    float radius_f = 0.0f;
    std::memcpy(&radius_f, radius_ptr, sizeof radius_f);

    int32_t slices = 0;
    std::memcpy(&slices, base + 0x3c, sizeof slices);

    int32_t stacks = 0;
    std::memcpy(&stacks, base + 0x40, sizeof stacks);

    uint32_t quadric = 0;
    std::memcpy(&quadric, base + 0x44, sizeof quadric);

    ext_0063E036(reinterpret_cast<void*>(static_cast<uintptr_t>(quadric)),
                 static_cast<double>(radius_f), slices, stacks);
}
