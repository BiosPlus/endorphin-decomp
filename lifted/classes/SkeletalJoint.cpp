// Lifted C++ translation unit: lifted/classes/SkeletalJoint.cpp
#include "lift_compat.h"

// [0x0064E3F0] SkeletalJoint::vfunc_19 (60 bytes)
namespace lift_0064E3F0 {
// Known callee 0x007C5900: getField0x1A4 (Returns the 32-bit field at offset 0x1A4 of the given object.)
extern uint32_t ext_007C5900(uint32_t obj);
// Known callee 0x007C5910: get_field_0x1a8 (Returns the float field at offset 0x1a8 from the given object pointer.)
extern float ext_007C5910(uint32_t obj);
extern int mem_009802E0;

// @name SkeletalJoint::vfunc_19
// @class SkeletalJoint
// @summary Writes a float to *out: the value from ext_007C5910 of the object handle at +0x64 when its flags (ext_007C5900 result) have bits 0x700 set, otherwise the constant mem_009802E0 (0x7F7FFFFF, FLT_MAX).
// @field SkeletalJoint +0x64 uint32_t field_0x64
void fn_0064E3F0(void* self, float* out) {
    const uint32_t handle = lift_field<uint32_t>(self, 0x64);
    const uint32_t flags = ext_007C5900(handle);
    if (flags & 0x700) {
        *out = ext_007C5910(lift_field<uint32_t>(self, 0x64));
    } else {
        *out = std::bit_cast<float>(static_cast<uint32_t>(mem_009802E0));
    }
}
} // namespace lift_0064E3F0

// [0x0064E560] SkeletalJoint::vfunc_36 (67 bytes)
namespace lift_0064E560 {
// @name SkeletalJoint::vfunc_36
// @class SkeletalJoint
// @summary Scales a 3-float vector per-axis by fields +0x7C/+0x80/+0x84, adds offsets from +0x70/+0x74/+0x78, and writes the result to out (each step rounded to float).
// @field SkeletalJoint +0x70 float field_0x70
// @field SkeletalJoint +0x74 float field_0x74
// @field SkeletalJoint +0x78 float field_0x78
// @field SkeletalJoint +0x7C float field_0x7c
// @field SkeletalJoint +0x80 float field_0x80
// @field SkeletalJoint +0x84 float field_0x84
void fn_0064E560(void* self, const float* in, float* out) {
    const auto* s = static_cast<const unsigned char*>(self);

    // Each product is stored to a float before the add, matching the
    // original per-step float rounding.
    const float sx = *reinterpret_cast<const float*>(s + 0x7C) * in[0];
    const float sy = *reinterpret_cast<const float*>(s + 0x80) * in[1];
    const float sz = *reinterpret_cast<const float*>(s + 0x84) * in[2];

    out[0] = sx + *reinterpret_cast<const float*>(s + 0x70);
    out[1] = sy + *reinterpret_cast<const float*>(s + 0x74);
    out[2] = sz + *reinterpret_cast<const float*>(s + 0x78);
}
} // namespace lift_0064E560
