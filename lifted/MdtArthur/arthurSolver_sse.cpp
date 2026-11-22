// Lifted C++ translation unit: lifted/MdtArthur/arthurSolver_sse.cpp
#include "lift_compat.h"
extern "C" void ext_007F36C0(void* acc, const void* rec, const void* elem, int flag);
extern "C" void ext_007F3F00(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10, uint32_t a11, uint32_t a12, uint32_t a13, uint32_t a14, uint32_t a15, uint32_t a16, uint32_t a17, uint32_t a18, uint32_t a19, float a20);
extern "C" void ext_007F2F80(uint32_t a0, uint32_t a1, uint32_t a2, const uint32_t* a3_31dwords, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, float a8, int32_t a9);
extern "C" void ext_007F4160(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10, uint32_t a11, uint32_t a12, uint32_t a13, uint32_t a14, uint32_t a15, uint32_t a16, uint32_t a17, uint32_t a18, uint32_t a19, float a20);

extern "C" void ext_007F2F80(uint32_t a0, uint32_t a1, uint32_t a2, const uint32_t* a3_31dwords, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, float a8, int32_t a9);
extern "C" void ext_007F4160(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10, uint32_t a11, uint32_t a12, uint32_t a13, uint32_t a14, uint32_t a15, uint32_t a16, uint32_t a17, uint32_t a18, uint32_t a19, float a20);
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

// [0x007F44C0]
// @name MdtArthur::arthurSolver_sse::vfunc_2
// @class MdtArthur::arthurSolver_sse
// @summary Projected Gauss-Seidel / LCP iterative solver step for MdtArthur::arthurSolver_sse
// @field MdtArthur::arthurSolver_sse +0x00 float* out
// @field MdtArthur::arthurSolver_sse +0x04 uint8_t* field_0x04
// @field MdtArthur::arthurSolver_sse +0x08 uint32_t field_0x08
// @field MdtArthur::arthurSolver_sse +0x0C int32_t field_0x0c
void __stdcall fn_007F44C0(void* self_ptr, void* arg1_ptr, const uint32_t* arg2_dwords) {
    float* out_buf = lift_field<float*>(self_ptr, 0x00);
    uint32_t self_04 = lift_field<uint32_t>(self_ptr, 0x04);
    uint32_t self_08 = lift_field<uint32_t>(self_ptr, 0x08);

    float* arg1_00 = lift_field<float*>(arg1_ptr, 0x00);
    uint32_t arg1_04 = lift_field<uint32_t>(arg1_ptr, 0x04);
    uint32_t arg1_08 = lift_field<uint32_t>(arg1_ptr, 0x08);
    void* arg1_0c = lift_field<void*>(arg1_ptr, 0x0C);
    uint32_t arg1_10 = lift_field<uint32_t>(arg1_ptr, 0x10);
    uint32_t arg1_14 = lift_field<uint32_t>(arg1_ptr, 0x14);
    void* arg1_18 = lift_field<void*>(arg1_ptr, 0x18);
    uint32_t arg1_1c = lift_field<uint32_t>(arg1_ptr, 0x1C);
    uint32_t arg1_20 = lift_field<uint32_t>(arg1_ptr, 0x20);

    uint32_t arg2[0x37];
    for (int i = 0; i < 0x37; ++i) {
        arg2[i] = arg2_dwords[i];
    }

    const int32_t count = static_cast<int32_t>(arg2[0xB4 / 4]);
    const int32_t vec_count = count / 4;
    if (vec_count != 0) {
        const float* src = *reinterpret_cast<const float* const*>(&arg2[0xB0 / 4]);
        for (int32_t i = 0; i < vec_count * 4; ++i) {
            arg1_00[i] = -src[i];
            out_buf[i] = 0.0f;
        }
    }

    uint32_t state_b[5] = {};
    int32_t state_a = -1;

    const float scale = *reinterpret_cast<const float*>(&arg2[0xD0 / 4]);
    auto to_u32 = [](const void* p) -> uint32_t {
        return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
    };

    ext_007F3F00(
        to_u32(&state_a), to_u32(state_b),
        to_u32(arg1_00), arg1_04, arg1_08,
        to_u32(out_buf), self_04, self_08,
        arg2[0x8C / 4], arg2[0x90 / 4], arg2[0x94 / 4],
        arg2[0x98 / 4], arg2[0x9C / 4], arg2[0xA0 / 4],
        to_u32(arg1_0c), arg1_10, arg1_14,
        to_u32(arg1_18), arg1_1c, arg1_20,
        scale);

    int32_t iter = 0;
    lift_field<int32_t>(self_ptr, 0x0C) = 0;

    const int32_t max_iter = static_cast<int32_t>(arg2[0xD8 / 4]);
    const float tol = *reinterpret_cast<const float*>(&arg2[0xD4 / 4]);
    const int32_t group_base = static_cast<int32_t>(state_b[0]);

    while (true) {
        if (iter < max_iter) {
            if (state_a == -1) {
                break;
            }
        } else {
            if (iter >= 2 * max_iter || state_a == -1) {
                break;
            }
            const int32_t check_idx = group_base + 4 * state_a;
            if (std::fabs(arg1_00[check_idx]) <= tol) {
                break;
            }
        }

        const int32_t idx = group_base + 4 * state_a;
        const float* arr_bc = *reinterpret_cast<const float* const*>(&arg2[0xBC / 4]);
        const float* arr_8c = *reinterpret_cast<const float* const*>(&arg2[0x8C / 4]);
        const float* arr_98 = *reinterpret_cast<const float* const*>(&arg2[0x98 / 4]);

        const float residual = arg1_00[idx];
        float delta = arr_bc[idx] * (-residual);
        const float cand = out_buf[idx] + delta;

        if (0.0f < residual) {
            if (!(arr_8c[idx] < cand)) {
                delta = arr_8c[idx] - out_buf[idx];
            }
        } else {
            if (!(arr_98[idx] > cand)) {
                delta = arr_98[idx] - out_buf[idx];
            }
        }

        const float new_val = out_buf[idx] + delta;
        out_buf[idx] = new_val;

        if (arr_8c[idx] < new_val) {
            reinterpret_cast<uint32_t*>(arg1_0c)[idx] = 0xFFFFFFFFu;
        } else {
            reinterpret_cast<float*>(arg1_0c)[idx] = new_val;
        }

        if (arr_98[idx] > new_val) {
            reinterpret_cast<uint32_t*>(arg1_18)[idx] = 0xFFFFFFFFu;
        } else {
            reinterpret_cast<float*>(arg1_18)[idx] = new_val;
        }

        ext_007F2F80(
            to_u32(arg1_00), arg1_04, arg1_08,
            &arg2[0x00],
            arg2[0x7C / 4], arg2[0x80 / 4], arg2[0x84 / 4], arg2[0x88 / 4],
            delta,
            idx);

        const float* arr_a4 = *reinterpret_cast<const float* const*>(&arg2[0xA4 / 4]);
        const float f_c8 = *reinterpret_cast<const float*>(&arg2[0xC8 / 4]);
        const float f_cc = *reinterpret_cast<const float*>(&arg2[0xCC / 4]);
        arg1_00[idx] += (arr_a4[idx] * f_cc + f_c8) * delta;

        ext_007F4160(
            to_u32(&state_a), to_u32(state_b),
            to_u32(arg1_00), arg1_04, arg1_08,
            to_u32(out_buf), self_04, self_08,
            arg2[0x8C / 4], arg2[0x90 / 4], arg2[0x94 / 4],
            arg2[0x98 / 4], arg2[0x9C / 4], arg2[0xA0 / 4],
            to_u32(arg1_0c), arg1_10, arg1_14,
            to_u32(arg1_18), arg1_1c, arg1_20,
            scale);

        ++iter;
    }
}
