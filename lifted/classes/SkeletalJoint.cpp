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

// [0x0064E380]
namespace lift_0064E380 {
// @name SkeletalJoint::vfunc_18
// @class SkeletalJoint
// @summary Retrieves joint limits into an output 3-float array based on flags from field_0x64.
// @field SkeletalJoint +0x64 uint32_t field_0x64

extern uint32_t ext_007C5900(uint32_t obj);
extern float ext_007C5920(uint32_t obj);
extern float ext_007C5950(uint32_t obj);
extern float ext_007C5980(uint32_t obj);

extern uint32_t mem_009802E0;
extern float mem_00955A40;

void __thiscall fn_0064E380(void* self, float* out) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x64);
    uint32_t flags = ext_007C5900(obj);

    if (flags & 0x1) {
        out[0] = ext_007C5920(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x64));
    } else {
        out[0] = *reinterpret_cast<float*>(&mem_009802E0);
    }

    if (flags & 0x6) {
        out[1] = ext_007C5950(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x64));
        out[2] = ext_007C5980(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x64));
    } else {
        float val = mem_00955A40;
        out[1] = val;
        out[2] = val;
    }
}
} // namespace lift_0064E380
