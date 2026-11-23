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

// [0x0053C0C0] Primitives::RPRO::vfunc_13 (133 bytes)
namespace lift_0053C0C0 {
// Callees (declared with the argument list they receive; thiscall receiver passed explicitly):
//   ext_00538550: sub_00538550 (24B), called on this+0xEC and this+0x108 with (float, int32, int32)
//   ext_00538D10: sub_00538D10 (41B), called on this+0xC4 with (float, float, float, int32)
extern void ext_00538550(void* self, float v, int32_t a, int32_t b);
extern void ext_00538D10(void* self, float v, float b, float a, int32_t c);

// Constants: mem_0092A280 = 0.01 (double multiplier), mem_0093F790 = 0.02 (double multiplier)
static constexpr double kScale01 = 0.009999999776482582;
static constexpr double kScale02 = 0.019999999552965164;

// @name Primitives::RPRO::vfunc_13
// @class Primitives::RPRO
// @summary Sets the enabled flag and stores a float value, then fans it out to two sub-objects and a scaled parameter set.
// @field Primitives::RPRO +0x04 uint8_t field_0x4
// @field Primitives::RPRO +0x3C float field_0x3c
void fn_0053C0C0(void* self, const float* arg) {
    lift_field<uint8_t>(self, 0x04) = 1;

    const float v = *arg;
    lift_field<float>(self, 0x3C) = v;

    // Sub-object at this+0xEC receives (v, 0, 0).
    ext_00538550((static_cast<uint8_t*>(self) + 0xEC), v, 0, 0);

    // Sub-object at this+0x108 receives (v, 0, 0).
    ext_00538550((static_cast<uint8_t*>(self) + 0x108), v, 0, 0);

    // Sub-object at this+0xC4 receives (v, v*0.02, v*0.01, 10).
    const float a = static_cast<float>(v * kScale01);
    const float b = static_cast<float>(v * kScale02);
    ext_00538D10((static_cast<uint8_t*>(self) + 0xC4), v, b, a, 10);
}
} // namespace lift_0053C0C0

// [0x0053DFD0]
namespace lift_0053DFD0 {
extern void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern float ext_005B11E0(void* self, uint32_t arg1);
extern void ext_00538550(void* self, float arg1, uint32_t arg2, uint32_t arg3);
extern void ext_00538D10(void* self, float arg1, float arg2, float arg3, uint32_t arg4);

extern float mem_00993838;
extern double mem_0092A280;
extern double mem_0093F790;

// @name Primitives::RPRO::vfunc_25
// @class Primitives::RPRO
// @summary Updates RPRO primitive radius/size from arg1 or arg2, configures sub-objects, and updates flags.
// @field Primitives::RPRO +0x1C uint32_t field_0x1c
// @field Primitives::RPRO +0x3C float field_0x3c
// @field Primitives::RPRO +0xC4 uint8_t field_0xc4
// @field Primitives::RPRO +0xEC uint8_t field_0xec
// @field Primitives::RPRO +0x108 void* sub_object
void fn_0053DFD0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint8_t* s = static_cast<uint8_t*>(self);
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if ((flags & 0x4) == 0) {
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags ^ 0x4;
    }

    float val = ext_005B11E0(reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)), 0);
    if (val > mem_00993838) {
        val = ext_005B11E0(reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)), 0);
    } else {
        val = *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(arg2)) + 0xb8);
    }

    *reinterpret_cast<float*>(s + 0x3c) = val;

    float size = *reinterpret_cast<float*>(s + 0x3c);
    ext_00538550(s + 0xec, size, 0, 0);

    size = *reinterpret_cast<float*>(s + 0x3c);
    ext_00538550(s + 0x108, size, 0, 0);

    size = *reinterpret_cast<float*>(s + 0x3c);
    float scaled_a = static_cast<float>(static_cast<double>(size) * mem_0092A280);
    float scaled_b = static_cast<float>(static_cast<double>(size) * mem_0093F790);
    ext_00538D10(s + 0xc4, size, scaled_b, scaled_a, 0xa);

    flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if ((flags & 0x40000) == 0) {
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags ^ 0x40000;
    }

    flags = *reinterpret_cast<uint32_t*>(s + 0x1c);
    if ((flags & 0x1) != 0) {
        *reinterpret_cast<uint32_t*>(s + 0x1c) = flags ^ 0x1;
    }
}
} // namespace lift_0053DFD0
