// Lifted C++ translation unit: lifted/Primitives/HingeLimit.cpp
#include "lift_compat.h"

// [0x0053BEF0] Primitives::HingeLimit::vfunc_28 (152 bytes)
namespace lift_0053BEF0 {
extern const float* ext_005B11F0(void* self);  // OglRenderer::vfunc_118, returns float[2]
extern void ext_00537ED0(void* self, float a1, float a2, float a3, float a4, uint32_t a5);
extern void glPushMatrix(void);
extern void glPopMatrix(void);
extern void glRotatef(float angle, float x, float y, float z);
extern const float mem_00955A30;   // 90.0f
extern const double mem_00932470;  // 0.05

// @name Primitives::HingeLimit::vfunc_28
// @class Primitives::HingeLimit
// @summary Pushes GL matrix, rotates 90 deg about Y, draws the hinge limit via sub_00537ED0 at this+0x44, then pops the matrix.
// @field HingeLimit +0x20 void* renderer
// @field HingeLimit +0x3c uint32_t field_0x3c
// @field HingeLimit +0x40 float field_0x40
void fn_0053BEF0(void* self) {
    const float* v = ext_005B11F0(lift_field<void*>(self, 0x20));
    const float x = v[0];
    const float y = v[1];

    glPushMatrix();
    glRotatef(mem_00955A30, 0.0f, 1.0f, 0.0f);

    const float p = lift_field<float>(self, 0x40);
    const float scaled = static_cast<float>(p * mem_00932470);
    ext_00537ED0(static_cast<uint8_t*>(self) + 0x44,
                 p, scaled, x, y - x,
                 lift_field<uint32_t>(self, 0x3c));

    glPopMatrix();
}
} // namespace lift_0053BEF0

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
