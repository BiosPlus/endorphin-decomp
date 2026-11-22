// Lifted C++ translation unit: lifted/MdtArthur/arthurSolver_vanilla.cpp
#include "lift_compat.h"

// [0x007F2AC0] MdtArthur::arthurSolver_vanilla::vfunc_0 (1212 bytes)
// @name MdtArthur::arthurSolver_vanilla::vfunc_0
// @class MdtArthur::arthurSolver_vanilla
// @summary Accumulates weighted 6-group bone contributions into an output vec4 table, then rescales and in-place updates each record; trailing pass over n rows is not yet decoded.
// @field MdtArthur::arthurSolver_vanilla +0x00 <unknown> (vtable/base; not accessed by this function)
void fn_007F2AC0(float* out, int32_t q, float* recs, int32_t* idxs, int32_t* counts,
                 int32_t m, float* weights, float* edata, float a, float bf) {
    // Scalar 1/a used by the trailing pass (not yet lifted).
    const float inv = 1.0f / a;
    const int32_t n = q / 4;

    // Zero n vec4 entries of the output table.
    for (int32_t t = 0; t < n; ++t) {
        for (int32_t c = 0; c < 4; ++c) {
            out[4 * t + c] = 0.0f;
        }
    }

    int32_t g = 0;            // global record counter across all inner iterations
    float* wb = weights + 2;  // per-outer weight block (advances 8 floats per outer)
    float* ep = edata;        // per-outer 12-float block (advances 12 floats per outer)
    int32_t* ptr = idxs;      // index run for the current outer iteration

    for (int32_t j = 0; j < m; ++j) {
        const int32_t k = counts[j];
        for (int32_t i = 0; i < k; ++i) {
            float* rec = recs + 24 * g;
            float* dst = out + 4 * ptr[i];

            // p[c] = sum over 6 weight groups of w_g * rec[4g + c]
            const float w0 = wb[-2], w1 = wb[-1], w2 = wb[0];
            const float w3 = wb[2], w4 = wb[3], w5 = wb[4];
            for (int32_t c = 0; c < 4; ++c) {
                float p = 0.0f;
                p += w0 * rec[c];
                p += w1 * rec[4 + c];
                p += w2 * rec[8 + c];
                p += w3 * rec[12 + c];
                p += w4 * rec[16 + c];
                p += w5 * rec[20 + c];
                dst[c] += p;
            }

            // Scale rec[0..11] by ep[3].
            for (int32_t c = 0; c < 12; ++c) {
                rec[c] *= ep[3];
            }

            // Three rows: rec[12 + 4r + c] = sum_g ep[4g + r] * rec[12 + 4g + c]
            for (int32_t r = 0; r < 3; ++r) {
                float tmp[4];
                for (int32_t c = 0; c < 4; ++c) {
                    float s = 0.0f;
                    s += rec[12 + c] * ep[r];
                    s += rec[16 + c] * ep[4 + r];
                    s += rec[20 + c] * ep[8 + r];
                    tmp[c] = s;
                }
                for (int32_t c = 0; c < 4; ++c) {
                    rec[12 + 4 * r + c] = tmp[c];
                }
            }
            ++g;
        }
        ptr += k;
        wb += 8;
        ep += 12;
    }

    // Trailing pass over n rows (uses inv and bf) is not yet decoded.
    (void)inv;
    (void)bf;
    (void)recs;
}

// [0x007F3740]
// @name MdtArthur::arthurSolver_vanilla::vfunc_1
// @class MdtArthur::arthurSolver_vanilla
// @summary Per-element accumulation over count/4 blocks: zeroes four floats at out, accumulates weighted contributions from the two ext_007F36C0 sub-calls, then inverts each of the four accumulated floats.
// @field MdtArthur::arthurSolver_vanilla +0x0c int field_0x0c
// @field MdtArthur::arthurSolver_vanilla +0x2c int field_0x2c

// Callee: sub_007F36C0 (cdecl, 4 args: out, obj, table/offset, flag)
void ext_007F36C0(float* out, void* obj, const void* aux, int flag);

namespace {

struct ArthurElem {
    unsigned char raw[0x100];
    int& dimA() { return *reinterpret_cast<int*>(raw + 0x0c); }
    int& dimB() { return *reinterpret_cast<int*>(raw + 0x2c); }
};

} // namespace

// 304-byte stdcall-style routine (ret 0xac). Stack-argument layout is only
// partially recovered; see report for unresolved parameters.
void vfunc_1(float* out,
             int count_raw,
             const int* idxA,
             const int* idxB,
             const float* src,
             ArthurElem* elems,
             float scaleA,
             float bias)
{
    // n = count_raw / 4 (signed, truncating toward zero)
    const int n = count_raw / 4;
    if (n == 0) {
        return;
    }

    float* cursor = out;
    for (int i = 0; i < n; ++i) {
        ArthurElem& e = elems[i];
        const int ra = e.dimA();
        const int rb = e.dimB();

        const int ia = idxA[ra + i];
        const int ib = idxB[rb + i];

        for (int j = 0; j < 4; ++j) {
            cursor[j] = 0.0f;
        }

        if (ra != -1) {
            ext_007F36C0(cursor, &e, idxA + ia * 3, 0);
        }
        if (rb != -1) {
            ext_007F36C0(cursor, &e, idxB + ib * 3, 1);
        }

        for (int j = 0; j < 4; ++j) {
            cursor[j] += src[j] * scaleA + bias;
        }

        for (int j = 0; j < 4; ++j) {
            cursor[j] = 1.0f / cursor[j];
        }

        cursor += 4;
    }
}
