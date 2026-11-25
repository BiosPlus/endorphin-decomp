// Lifted C++ translation unit: lifted/leaf/decompiled_7E0000.cpp
#include "lift_compat.h"
#include <bit>

// [0x007EC6E0] sub_007EC6E0 (55 bytes)
namespace lift_007EC6E0 {
extern uint32_t mem_0099EC8C;

// @name reciprocalOrZero_007EC6E0
// @summary Returns 1/x for x with |x| > FLT_MIN (0x00800000), otherwise 0.0f (also for NaN).
// @summary Sign of x is preserved in the reciprocal.
float fn_007EC6E0(float x) {
    const float threshold = std::bit_cast<float>(mem_0099EC8C);
    const float absX = std::fabs(x);
    // Negated comparison so NaN (unordered) yields 0.0f, matching the x87 C0/C3 test.
    if (!(absX > threshold)) {
        return 0.0f;
    }
    return 1.0f / x;
}
} // namespace lift_007EC6E0

// [0x007E51F0] sub_007E51F0 (57 bytes)
namespace lift_007E51F0 {
// Calling convention: a in ecx, out at [esp+4], b at [esp+8], callee pops 8.
// @name Vec3Cross
// @class Vec3
// @summary Computes out = a x b (3-component float cross product), stores three floats to out.
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z
void fn_007E51F0(const float* a, float* out, const float* b) {
    const float ax = a[0], ay = a[1], az = a[2];
    const float bx = b[0], by = b[1], bz = b[2];
    out[0] = ay * bz - az * by;
    out[1] = az * bx - ax * bz;
    out[2] = ax * by - ay * bx;
}
} // namespace lift_007E51F0
