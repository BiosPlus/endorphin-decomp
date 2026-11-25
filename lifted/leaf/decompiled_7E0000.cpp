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

// [0x007E5240] sub_007E5240 (60 bytes)
namespace lift_007E5240 {
// @name ScatterSignSwizzle4
// @summary Zeroes a[i], then writes a[d] = b[s] and a[s] = -b[d] where d = (1<<i)&3 and s = (1<<d)&3 (x86 shift counts masked to 5 bits).
void fn_007E5240(float* a, const float* b, int32_t i) {
    // x86 shifts mask the count to 5 bits; mirror that explicitly.
    a[i] = 0.0f;

    const uint32_t d = (1u << (static_cast<uint32_t>(i) & 31u)) & 3u;
    const uint32_t s = (1u << (d & 31u)) & 3u;

    const float v = b[s];
    a[d] = v;
    a[s] = -b[d];
}
} // namespace lift_007E5240

// [0x007E5280] sub_007E5280 (60 bytes)
namespace lift_007E5280 {
// @name CoefficientSwapNegate
// @summary Zeroes out[n], then writes negated in[esi] to out[edx] and in[edx] to out[esi], where edx = (1 << (n & 31)) & 3 and esi = (1 << edx) & 3.
// NOTE: the binary reads its second argument both as an index (into out) and as a base address for the reads from in[]; the reads are reproduced as-is.
void fn_007E5280(float* out, uint32_t n) {
    out[n] = 0.0f;

    // x86 masks shift counts to 5 bits: shl edx, cl with cl = n.
    const uint32_t edx = (1u << (n & 31u)) & 3u;
    const uint32_t esi = (1u << (edx & 31u)) & 3u;

    // Reads use the argument value as a base address ([ecx + 4*k]).
    const float* in = reinterpret_cast<const float*>(static_cast<uintptr_t>(n));

    out[edx] = -in[esi];
    out[esi] = in[edx];
}
} // namespace lift_007E5280

// [0x007E4870]
namespace lift_007E4870 {
// @name TransformVector3ByMatrixColumns
// @class Unknown
// @summary Multiplies a 3-float input vector by the 3x3 part of a 4-float-row matrix (row-vector convention) and writes a 3-float result; original is __thiscall with callee-cleanup of 8 bytes (two pointer args).
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28

void TransformVector3ByMatrixColumns(const void* self, const float* in, float* out) {
    const float in0 = in[0];
    const float in1 = in[1];
    const float in2 = in[2];

    // out[i] = self[0x00 + i] * in0 + self[0x10 + i] * in1 + self[0x20 + i] * in2
    // (evaluation order matches the original x87 sequence)
    const float m00 = lift_field<float>(self, 0x00);
    const float m04 = lift_field<float>(self, 0x04);
    const float m08 = lift_field<float>(self, 0x08);
    const float m10 = lift_field<float>(self, 0x10);
    const float m14 = lift_field<float>(self, 0x14);
    const float m18 = lift_field<float>(self, 0x18);
    const float m20 = lift_field<float>(self, 0x20);
    const float m24 = lift_field<float>(self, 0x24);
    const float m28 = lift_field<float>(self, 0x28);

    out[0] = ((m10 * in1) + (in0 * m00)) + (m20 * in2);
    out[1] = ((m14 * in1) + (m04 * in0)) + (m24 * in2);
    out[2] = ((m18 * in1) + (m08 * in0)) + (m28 * in2);
}
} // namespace lift_007E4870

// [0x007E80E0] sub_007E80E0 (103 bytes)
namespace lift_007E80E0 {
// @name CopyFloat16
// @summary Copies 16 consecutive 32-bit floats (64 bytes) from src to dst and returns dst.
void fn_007E80E0(float* dst, const float* src) {
    for (int i = 0; i < 16; ++i) {
        dst[i] = src[i];
    }
}
} // namespace lift_007E80E0
