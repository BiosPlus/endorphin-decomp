// Lifted C++ translation unit: lifted/leaf/decompiled_4B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004B6C90] sub_004B6C90 (34 bytes)
namespace lift_004B6C90 {
extern const char mem_009433E0[];

// @name sub_004B6C90
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
void* fn_004B6C90(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_009433E0);
    return dst;
}
} // namespace lift_004B6C90

// [0x004B6CF0]
namespace lift_004B6CF0 {
// @name sub_004B6CF0
// @class Unknown
// @summary Initializes float fields at +0x1C..+0x30: 0.2, 100.0, then zeros for +0x24..+0x30.
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 float field_0x30

extern float mem_00940694; // .rdata float 0.2
extern float mem_00943350; // .rdata float 100

void sub_004B6CF0(uint8_t* ecx) {
    *reinterpret_cast<float*>(ecx + 0x1C) = mem_00940694;
    *reinterpret_cast<float*>(ecx + 0x20) = mem_00943350;
    *reinterpret_cast<float*>(ecx + 0x24) = 0.0f;
    *reinterpret_cast<float*>(ecx + 0x28) = 0.0f;
    *reinterpret_cast<float*>(ecx + 0x2C) = 0.0f;
    *reinterpret_cast<float*>(ecx + 0x30) = 0.0f;
}
} // namespace lift_004B6CF0

// [0x004B7030]
namespace lift_004B7030 {
// RDATA constants
extern float mem_00A3849C; // 0.1230123f
extern float mem_00A384A0; // 0.23480123f
extern float mem_00A384A4; // 0.1343947f

// @name sub_004B7030
// @summary Writes three RDATA float constants into the 3-float structure pointed to by the single stack argument.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
void sub_004B7030(float *out)
{
    out[0] = mem_00A3849C;
    out[1] = mem_00A384A0;
    out[2] = mem_00A384A4;
}
} // namespace lift_004B7030
