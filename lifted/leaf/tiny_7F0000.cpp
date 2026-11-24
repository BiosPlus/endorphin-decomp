// Lifted C++ translation unit: lifted/leaf/tiny_7F0000.cpp
#include "lift_compat.h"

// [0x007FC290]
namespace lift_007FC290 {
// @name copyVec3Float
// @summary Copies three consecutive 32-bit floats (offsets 0x00, 0x04, 0x08) from src to dst.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
void copyVec3Float(const float* src, float* dst) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}
} // namespace lift_007FC290
