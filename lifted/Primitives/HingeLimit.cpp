// Lifted C++ translation unit: lifted/Primitives/HingeLimit.cpp
#include "lift_compat.h"

// [0x0052FD30] Primitives::HingeLimit::vfunc_0 (96 bytes)
namespace lift_0052FD30 {
// Known callees (thiscall: `this` passed in ecx in the original binary).
extern void ext_00537EC0(void* self);   // member destructor for embedded object at this+0x44
extern void ext_0053A810(void* self);   // base-class destructor chain
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// cdecl, single pointer argument (deletes the object storage).
extern void ext_006A5C5C(void* p);

// @name Primitives::HingeLimit::vfunc_0
// @class Primitives::HingeLimit
// @summary Scalar deleting destructor: destroys embedded object at +0x44, runs base destructor chain, frees storage when flags bit 0 is set, returns this.
// @field HingeLimit +0x44 uint8_t field_0x44
void* fn_0052FD30(void* self, uint32_t flags) {
    uint8_t* base = static_cast<uint8_t*>(self);

    ext_00537EC0(base + 0x44);
    ext_0053A810(self);

    if (flags & 1u) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_0052FD30

// [0x0053BEF0] Primitives::HingeLimit::vfunc_28 (152 bytes)
namespace lift_0053BEF0 {
// OglRenderer::vfunc_118 (thiscall: ecx = renderer, returns pointer to float pair)
extern float* ext_005B11F0(void* ecx);
// sub_00537ED0 (thiscall: ecx = sub-object, 5 stack args)
extern void __thiscall ext_00537ED0(void* ecx, float a0, float a1, float a2, float a3, uint32_t a4);
// OPENGL32 IAT slots (function pointers)
extern void* mem_00925414; // glPushMatrix
extern void* mem_009254CC; // glRotatef
extern void* mem_00925404; // glPopMatrix
extern float mem_00955A30;  // 90.0f
extern double mem_00932470; // 0.05

// @name Primitives::HingeLimit::vfunc_28
// @class Primitives::HingeLimit
// @summary Pushes GL matrix, rotates 90 degrees about Y, calls helper with scaled field, pops matrix
// @field Primitives::HingeLimit +0x20 void* field_0x20
// @field Primitives::HingeLimit +0x3c uint32_t field_0x3c
// @field Primitives::HingeLimit +0x40 float field_0x40
// @field Primitives::HingeLimit +0x44 void* field_0x44
void fn_0053BEF0(void* self) {
    float* p = ext_005B11F0(lift_field<void*>(self, 0x20));
    float px = p[0];
    float py = p[1];
    (void)px;
    (void)py;

    reinterpret_cast<void (*)()>(mem_00925414)();                       // glPushMatrix
    reinterpret_cast<void (*)(float, float, float, float)>(mem_009254CC)(
        mem_00955A30, 0.0f, 1.0f, 0.0f);                                // glRotatef(90, 0, 1, 0)

    float f40 = lift_field<float>(self, 0x40);
    float scaled = static_cast<float>(static_cast<double>(f40) * mem_00932470);
    uint32_t n = lift_field<uint32_t>(self, 0x3c);
    ext_00537ED0(static_cast<uint8_t*>(self) + 0x44, f40, scaled, 1.0f, -1.0f, n);

    reinterpret_cast<void (*)()>(mem_00925404)();                       // glPopMatrix
}
} // namespace lift_0053BEF0
