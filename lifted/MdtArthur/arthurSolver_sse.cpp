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
