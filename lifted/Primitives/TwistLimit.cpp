// Lifted C++ translation unit: lifted/Primitives/TwistLimit.cpp
#include "lift_compat.h"

// [0x0053BF90] Primitives::TwistLimit::vfunc_28 (201 bytes)
namespace lift_0053BF90 {
extern void* ext_005B11F0(void* self, float* out);   // OglRenderer::vfunc_118 (thiscall, float out-param)
extern void ext_0053B470(void* self);                 // sub_0053B470 (thiscall)
extern void ext_00537ED0(void* self, float a, float b, float c, float d, uint32_t e); // sub_00537ED0 (thiscall + 5 stack args)
extern void (*mem_00925414)(void);                    // OPENGL32!glPushMatrix (IAT slot)
extern void (*mem_009254CC)(float, float, float, float); // OPENGL32!glRotatef (IAT slot)
extern void (*mem_00925404)(void);                    // OPENGL32!glPopMatrix (IAT slot)
extern const float mem_00955A30;                      // 90.0f
extern const float mem_00955A40;                      // pi as float (3.1415918f)
extern const double mem_00955A48;                    // pi as double
extern const double mem_00955A38;                    // 0.04 (double)

// @name Primitives::TwistLimit::vfunc_28
// @class Primitives::TwistLimit
// @summary Clamps the half-angle to [0, pi], then within a GL push/pop draws a 90-degree Y rotation and calls the limit helper with +/-2*angle.
// @field Primitives::TwistLimit +0x20 void* field_0x20
// @field Primitives::TwistLimit +0x3C uint32_t field_0x3c
// @field Primitives::TwistLimit +0x40 float field_0x40
// @field Primitives::TwistLimit +0x44 (subobject, address only, passed as this) field_0x44
void fn_0053BF90(void* self) {
    // The asm stores a dead 0.5f to the frame and never reads it; omitted.
    // NOTE: the asm reads the angle from frame+0x8 while vfunc_118 writes its
    // out-param at frame+0xc. This lift uses the out-param (intended value).
    float half_angle = 0.0f;
    void* r = ext_005B11F0(lift_field<void*>(self, 0x20), &half_angle);
    ext_0053B470(r);

    // Clamp to [0, pi]. NaN passes through unchanged, as in the x87 compares.
    if (half_angle < 0.0f) {
        half_angle = 0.0f;
    } else if (static_cast<double>(half_angle) > mem_00955A48) {
        half_angle = mem_00955A40;
    }

    mem_00925414();                                  // glPushMatrix()
    mem_009254CC(mem_00955A30, 0.0f, 1.0f, 0.0f);    // glRotatef(90, 0, 1, 0)

    const float v = lift_field<float>(self, 0x40);
    const float two_a = half_angle + half_angle;
    const float scaled = static_cast<float>(static_cast<double>(v) * mem_00955A38);
    const uint32_t p2 = lift_field<uint32_t>(self, 0x3C);

    ext_00537ED0(static_cast<uint8_t*>(self) + 0x44, v, scaled, -two_a, two_a, p2);

    mem_00925404();                                  // glPopMatrix()
}
} // namespace lift_0053BF90
