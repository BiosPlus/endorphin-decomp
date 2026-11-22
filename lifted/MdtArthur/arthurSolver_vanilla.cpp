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
