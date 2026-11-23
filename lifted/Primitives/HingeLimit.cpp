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
