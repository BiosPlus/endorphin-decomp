// Lifted C++ translation unit: lifted/MdtArthur/arthurSolver_sse.cpp
#include "lift_compat.h"
extern "C" void ext_007F36C0(void* acc, const void* rec, const void* elem, int flag);

// [0x007F4330] MdtArthur::arthurSolver_sse::vfunc_1 (400 bytes)
// @name MdtArthur::arthurSolver_sse::vfunc_1
// @class MdtArthur::arthurSolver_sse
// @summary For each 4-float group j < count/4: accumulate up to two indexed contributions via ext_007F36C0, then store 1/(src*mul + add + acc) per lane.
// @field MdtArthur::arthurSolver_sse +0x00 float[4]* out (16-byte vec4 per group; written)
// @field MdtArthur::arthurSolver_sse +0x04 uint8_t* field_0x04 (96-byte element base; param block)
// @field MdtArthur::arthurSolver_sse +0x34 int32_t* field_0x34 (index table A, row stride W; param block)
// @field MdtArthur::arthurSolver_sse +0x40 int32_t* field_0x40 (index table B; param block)
// @field MdtArthur::arthurSolver_sse +0x78 int32_t field_0x78 (row stride W; param block)
// @field MdtArthur::arthurSolver_sse +0x0c int32_t field_0x0c (record: index A, -1 = none; per-group record, stride 0x100)
// @field MdtArthur::arthurSolver_sse +0x2c int32_t field_0x2c (record: index B, -1 = none; per-group record, stride 0x100)
//
// Argument mapping (stack, original): self=[ebp+8], count=[ebp+0xc], params=[ebp+0x14..0x8f] (by value),
// rec_base=[ebp+0x90], src=[ebp+0xa0], add=[ebp+0xac], mul=[ebp+0xb0]. Unused: [ebp+0x10], [ebp+0x94..0x9c], [ebp+0xa4..0xa8].
void fn_007F4330(void* self, int32_t count, const void* params, const void* rec_base,
                 const void* src, float add, float mul) {
    const int32_t n = count / 4;  // matches original (count + (count<0 ? 3 : 0)) >> 2
    if (n == 0) {
        return;
    }

    const int32_t  W      = lift_field<int32_t>(params, 0x78);
    const uint8_t* elems  = lift_field<const uint8_t*>(params, 0x04);
    const int32_t* tabA   = lift_field<const int32_t*>(params, 0x34);
    const int32_t* tabB   = lift_field<const int32_t*>(params, 0x40);

    auto out = static_cast<float(*)[4]>(self);
    auto in  = static_cast<const float(*)[4]>(src);

    for (int32_t j = 0; j < n; ++j) {
        const uint8_t* rec = static_cast<const uint8_t*>(rec_base) + 0x100 * j;
        const int32_t idxA = lift_field<int32_t>(rec, 0x0c);
        const int32_t idxB = lift_field<int32_t>(rec, 0x2c);

        // Accumulator; the callee writes into acc[1..3], acc[0] stays 0.
        float acc[4] = {0.0f, 0.0f, 0.0f, 0.0f};

        if (idxA != -1) {
            const int32_t t = tabA[W * idxA + j] + tabB[idxA];
            ext_007F36C0(&acc[1], rec, elems + 96 * t, 0);
        }
        if (idxB != -1) {
            const int32_t t = tabA[W * idxB + j] + tabB[idxB];
            ext_007F36C0(&acc[1], rec, elems + 96 * t, 1);
        }

        // Lane-wise: out = 1 / (in * mul + add + acc)  (original uses rcpps + one Newton step)
        for (int32_t k = 0; k < 4; ++k) {
            const float x = in[j][k] * mul + add + acc[k];
            out[j][k] = 1.0f / x;
        }
    }
}

// [0x007F3BA0] MdtArthur::arthurSolver_sse::vfunc_0 (854 bytes)
#include "lift_compat.h"

// @name MdtArthur::arthurSolver_sse::vfunc_0
// @class MdtArthur::arthurSolver_sse
// @summary Zeroes count/4 vec4 accumulators, scatters weighted 6-vec4 records into them via a CSR-style index table, then blends each accumulator against a reciprocal-scaled bias term.

struct alignas(16) Vec4 {
    float x, y, z, w;
};

// 6 vec4 per record (96 bytes). Rows 0..2 and 3..5 are transformed separately.
struct alignas(16) Rec96 {
    Vec4 m[6];
};

// 3 vec4 per block (48 bytes): symmetric 3x3 coefficient matrix packed as
// y[0] = (a, b, c, _), y[1] = (_, d, e, _), y[2] = (_, _, f, _), plus y[0].w as scalar.
struct alignas(16) Blk3 {
    Vec4 y[3];
};

// 2 vec4 per block (32 bytes): 6 scalar weights (x0.xyz, x1.xyz).
struct alignas(16) Blk2 {
    Vec4 x[2];
};

// Stack-passed by-value argument block (31 dwords, arg offsets 0x14..0x8f).
// Only +0x00 (recs), +0x28 (idx), +0x4c (cnt), +0x70 (numBlocks) are read.
// Pointer fields assume the 32-bit target ABI.
struct Arg31 {
    Rec96*       recs;         // +0x00 (arg +0x14)
    uint32_t     _u04[9];      // +0x04..+0x27
    const int32_t* idx;        // +0x28 (arg +0x3c)
    uint32_t     _u2c[8];      // +0x2c..+0x4b
    const int32_t* cnt;        // +0x4c (arg +0x60)
    uint32_t     _u50[8];      // +0x50..+0x6f
    int32_t      numBlocks;    // +0x70 (arg +0x84)
    uint32_t     _u74[2];      // +0x74..+0x7b
};

static inline Vec4 operator+(const Vec4& a, const Vec4& b) { return {a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w}; }
static inline Vec4 operator-(const Vec4& a, const Vec4& b) { return {a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w}; }
static inline Vec4 operator*(const Vec4& a, const Vec4& b) { return {a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w}; }
static inline Vec4 operator*(const Vec4& a, float s) { return {a.x * s, a.y * s, a.z * s, a.w * s}; }
static inline Vec4 operator*(float s, const Vec4& a) { return a * s; }
static inline Vec4 operator+(const Vec4& a, float s) { return {a.x + s, a.y + s, a.z + s, a.w + s}; }

void __stdcall fn_007F3BA0(
    Vec4*            out,              // arg +0x08: accumulator, count/4 vec4s
    int32_t          count,            // arg +0x0c
    [[maybe_unused]] uint32_t arg10,   // arg +0x10 (unused)
    Arg31            cfg,              // arg +0x14..+0x8f (by value)
    const Vec4*      A,                // arg +0x90
    [[maybe_unused]] uint32_t arg94,   // arg +0x94 (unused)
    [[maybe_unused]] uint32_t arg98,   // arg +0x98 (unused)
    const Vec4*      B,                // arg +0x9c
    [[maybe_unused]] uint32_t arga0,   // arg +0xa0 (unused)
    [[maybe_unused]] uint32_t arga4,   // arg +0xa4 (unused)
    const Vec4*      C,                // arg +0xa8
    [[maybe_unused]] uint32_t arga8,   // arg +0xac (unused)
    [[maybe_unused]] uint32_t argb0,   // arg +0xb0 (unused)
    const Blk3*      Y,                // arg +0xb4
    [[maybe_unused]] uint32_t argb8,   // arg +0xb8 (unused)
    [[maybe_unused]] uint32_t argbc,   // arg +0xbc (unused)
    const Blk2*      X,                // arg +0xc0
    [[maybe_unused]] uint32_t argc4,   // arg +0xc4 (unused)
    [[maybe_unused]] uint32_t argc8,   // arg +0xc8 (unused)
    float            w,                // arg +0xcc: divisor
    float            bias)             // arg +0xd0: additive bias
{
    // count/4 with signed truncation (matches the asm's cdq/sar sequence).
    const int32_t n = count / 4;

    // Phase 0: clear the n accumulators.
    for (int32_t i = 0; i < n; ++i) {
        out[i] = Vec4{0.0f, 0.0f, 0.0f, 0.0f};
    }

    // Phase 1: for each block k, scatter into out[idx[...]] using the flat record cursor g.
    const int32_t  blocks = cfg.numBlocks;
    const int32_t* idxp   = cfg.idx;
    int32_t        g      = 0;

    for (int32_t k = 0; k < blocks; ++k) {
        const int32_t c = cfg.cnt[k];
        const Blk2& xk = X[k];
        const Blk3& yk = Y[k];

        const Vec4& x0 = xk.x[0];
        const Vec4& x1 = xk.x[1];

        const float a  = yk.y[0].x;
        const float bb = yk.y[0].y;
        const float cc = yk.y[0].z;
        const float d  = yk.y[1].y;
        const float e  = yk.y[1].z;
        const float f  = yk.y[2].z;
        const float yw = yk.y[0].w;

        for (int32_t i = 0; i < c; ++i, ++g) {
            Rec96& r = cfg.recs[g];
            Vec4&  dst = out[idxp[i]];

            // Accumulate using the original (pre-update) record rows.
            dst = dst + (x0.x * r.m[0] + x0.y * r.m[1] + x0.z * r.m[2]
                       + x1.x * r.m[3] + x1.y * r.m[4] + x1.z * r.m[5]);

            // Scale rows 0..2 by yw.
            r.m[0] = r.m[0] * yw;
            r.m[1] = r.m[1] * yw;
            r.m[2] = r.m[2] * yw;

            // Mix rows 3..5 by the symmetric matrix [[a,bb,cc],[bb,d,e],[cc,e,f]].
            const Vec4 m3 = r.m[3];
            const Vec4 m4 = r.m[4];
            const Vec4 m5 = r.m[5];
            r.m[3] = a  * m3 + bb * m4 + cc * m5;
            r.m[4] = bb * m3 + d  * m4 + e  * m5;
            r.m[5] = cc * m3 + e  * m4 + f  * m5;
        }
        idxp += c;
    }

    // Phase 2: per-element blend, using reciprocal of w (refined once in asm).
    const float rw = 1.0f / w;
    for (int32_t i = 0; i < n; ++i) {
        const Vec4 t = (A[i] + bias) * C[i] * rw;
        out[i] = (B[i] - t) * rw - out[i];
    }
}
