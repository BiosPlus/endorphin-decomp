// Lifted C++ translation unit: lifted/MdtArthur/arthurSolver_vanilla.cpp
#include "lift_compat.h"
extern "C" void __cdecl ext_007F3440(int32_t* out_block_idx, int32_t* out_elem_idx, float* w_data, uint32_t w_f4, uint32_t w_f8, float* x_data, uint32_t x_f4, uint32_t x_f8, float* lo_data, uint32_t lo_f4, uint32_t lo_f8, float* hi_data, uint32_t hi_f4, uint32_t hi_f8, float eps);
extern "C" void __cdecl ext_007F2F80(float* w_data, uint32_t w_f4, uint32_t w_f8, const uint32_t* matrix_31dwords, uint32_t aux0, uint32_t aux1, uint32_t aux2, uint32_t aux3, float delta, int32_t idx);

extern "C" void __cdecl ext_007F2F80(float* w_data, uint32_t w_f4, uint32_t w_f8, const uint32_t* matrix_31dwords, uint32_t aux0, uint32_t aux1, uint32_t aux2, uint32_t aux3, float delta, int32_t idx);
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

// [0x007F3870] MdtArthur::arthurSolver_vanilla::vfunc_2 (802 bytes)
// @name MdtArthur::arthurSolver_vanilla::vfunc_2
// @class MdtArthur::arthurSolver_vanilla
// @summary Vanilla Arthur iterative LCP solver: initializes x=0 and w=-b, then iteratively selects and updates pivot rows via ext_007F3440 and ext_007F2F80 until convergence or 2*max_iter.
namespace {

struct ArthurVecDesc {
    float*   data;       // +0x00
    uint32_t field_0x04; // +0x04
    uint32_t field_0x08; // +0x08
};

struct ArthurOutState {
    float*   data;       // +0x00
    uint32_t field_0x04; // +0x04
    uint32_t field_0x08; // +0x08
    int32_t  status;     // +0x0c (0 = converged, 1 = hit 2 * max_iter cap)
};

struct ArthurMatrixDesc {
    uint32_t words[31];  // 0x7c bytes passed by value
};

struct ArthurAuxDesc {
    uint32_t words[4];   // 0x10 bytes passed by value
};

} // namespace

void __stdcall fn_007F3870(
    ArthurOutState* out_x,
    ArthurVecDesc* out_w,
    ArthurMatrixDesc matrix,
    ArthurAuxDesc aux,
    ArthurVecDesc lo,
    ArthurVecDesc hi,
    ArthurVecDesc diag_c,
    const float* rhs_b,
    int32_t num_rows,
    uint32_t rhs_b_field_0x08,
    const float* inv_diag,
    uint32_t inv_diag_field_0x04,
    uint32_t inv_diag_field_0x08,
    float c2,
    float c1,
    float eps,
    float tol,
    int32_t max_iter)
{
    (void)rhs_b_field_0x08;
    (void)inv_diag_field_0x04;
    (void)inv_diag_field_0x08;

    float* const x_data = out_x->data;
    const uint32_t x_f4 = out_x->field_0x04;
    const uint32_t x_f8 = out_x->field_0x08;

    float* const w_data = out_w->data;
    const uint32_t w_f4 = out_w->field_0x04;
    const uint32_t w_f8 = out_w->field_0x08;

    const int32_t num_blocks = num_rows / 4;
    if (num_blocks != 0) {
        for (int32_t i = 0; i < num_blocks * 4; ++i) {
            w_data[i] = -rhs_b[i];
            x_data[i] = 0.0f;
        }
    }

    int32_t block_idx = 0;
    int32_t elem_idx = 0;
    ext_007F3440(&block_idx, &elem_idx,
                 w_data, w_f4, w_f8,
                 x_data, x_f4, x_f8,
                 lo.data, lo.field_0x04, lo.field_0x08,
                 hi.data, hi.field_0x04, hi.field_0x08,
                 eps);

    int32_t iter = 0;
    out_x->status = 0;

    for (;;) {
        if (iter < max_iter) {
            if (block_idx == -1) {
                break;
            }
        } else {
            if (iter >= 2 * max_iter || block_idx == -1) {
                break;
            }
            const int32_t check_idx = elem_idx + 4 * block_idx;
            if (!(std::fabs(w_data[check_idx]) > tol)) {
                break;
            }
        }

        const int32_t idx = elem_idx + 4 * block_idx;
        float delta = -w_data[idx] * inv_diag[idx];
        const float x_new = delta + x_data[idx];

        if (w_data[idx] > 0.0f) {
            if (!(x_new > lo.data[idx])) {
                delta = lo.data[idx] - x_data[idx];
            }
        } else {
            if (!(x_new < hi.data[idx])) {
                delta = hi.data[idx] - x_data[idx];
            }
        }

        x_data[idx] += delta;
        ext_007F2F80(w_data, w_f4, w_f8,
                     matrix.words,
                     aux.words[0], aux.words[1], aux.words[2], aux.words[3],
                     delta, idx);

        w_data[idx] += (diag_c.data[idx] * c1 + c2) * delta;

        ext_007F3440(&block_idx, &elem_idx,
                     w_data, w_f4, w_f8,
                     x_data, x_f4, x_f8,
                     lo.data, lo.field_0x04, lo.field_0x08,
                     hi.data, hi.field_0x04, hi.field_0x08,
                     eps);
        ++iter;
    }

    if (iter >= 2 * max_iter) {
        out_x->status = 1;
    }
}

// [0x007F2AC0]
namespace lift_007F2AC0 {
// @name MdtArthur::arthurSolver_vanilla::vfunc_0
// @class MdtArthur::arthurSolver_vanilla
// @summary Computes constraint forces and updates right-hand side vector for the Arthur LCP solver.
void __stdcall fn_007F2AC0(
    float* out,           // +0x04 (0)
    int n,                // +0x08 (1)
    uint32_t a2,          // +0x0C (2)
    float* J,             // +0x10 (3)
    uint32_t a4,          // +0x14 (4)
    uint32_t a5,          // +0x18 (5)
    uint32_t a6,          // +0x1C (6)
    uint32_t a7,          // +0x20 (7)
    uint32_t a8,          // +0x24 (8)
    uint32_t a9,          // +0x28 (9)
    uint32_t a10,         // +0x2C (10)
    uint32_t a11,         // +0x30 (11)
    uint32_t a12,         // +0x34 (12)
    int* jb,              // +0x38 (13)
    uint32_t a14,         // +0x3C (14)
    uint32_t a15,         // +0x40 (15)
    uint32_t a16,         // +0x44 (16)
    uint32_t a17,         // +0x48 (17)
    uint32_t a18,         // +0x4C (18)
    uint32_t a19,         // +0x50 (19)
    uint32_t a20,         // +0x54 (20)
    uint32_t a21,         // +0x58 (21)
    int* counts,          // +0x5C (22)
    uint32_t a23,         // +0x60 (23)
    uint32_t a24,         // +0x64 (24)
    uint32_t a25,         // +0x68 (25)
    uint32_t a26,         // +0x6C (26)
    uint32_t a27,         // +0x70 (27)
    uint32_t a28,         // +0x74 (28)
    uint32_t a29,         // +0x78 (29)
    uint32_t a30,         // +0x7C (30)
    int num_bodies,       // +0x80 (31)
    uint32_t a32,         // +0x84 (32)
    uint32_t a33,         // +0x88 (33)
    float* rhs,           // +0x8C (34)
    uint32_t a35,         // +0x90 (35)
    uint32_t a36,         // +0x94 (36)
    float* c,             // +0x98 (37)
    uint32_t a38,         // +0x9C (38)
    uint32_t a39,         // +0xA0 (39)
    float* cfm,           // +0xA4 (40)
    uint32_t a41,         // +0xA8 (41)
    uint32_t a42,         // +0xAC (42)
    float* f,             // +0xB0 (43)
    uint32_t a44,         // +0xB4 (44)
    uint32_t a45,         // +0xB8 (45)
    float* lambda,        // +0xBC (46)
    uint32_t a47,         // +0xC0 (47)
    uint32_t a48,         // +0xC4 (48)
    float stepsize,       // +0xC8 (49)
    float param_50        // +0xCC (50)
) {
    (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10;
    (void)a11; (void)a12; (void)a14; (void)a15; (void)a16; (void)a17; (void)a18; (void)a19;
    (void)a20; (void)a21; (void)a23; (void)a24; (void)a25; (void)a26; (void)a27; (void)a28;
    (void)a29; (void)a30; (void)a32; (void)a33; (void)a35; (void)a36; (void)a38; (void)a39;
    (void)a41; (void)a42; (void)a44; (void)a45; (void)a47; (void)a48;

    float inv_h = 1.0f / stepsize;
    int n4 = n / 4;

    if (n4 != 0) {
        for (int i = 0; i < n4; ++i) {
            out[i * 4 + 0] = 0.0f;
            out[i * 4 + 1] = 0.0f;
            out[i * 4 + 2] = 0.0f;
            out[i * 4 + 3] = 0.0f;
        }
    }

    int constraint_idx = 0;
    if (num_bodies != 0) {
        int* cur_jb = jb;
        int* cur_counts = counts;
        float* cur_lambda = lambda;
        float* cur_f = f;

        for (int k = 0; k < num_bodies; ++k) {
            int count = *cur_counts;
            for (int j = 0; j < count; ++j) {
                float* Jp = J + constraint_idx * 24;
                float* body_out = out + cur_jb[j] * 4;

                float v0 = 0.0f, v1 = 0.0f, v2 = 0.0f, v3 = 0.0f;
                const int lam_idx[6] = {0, 1, 2, 4, 5, 6};
                for (int r = 0; r < 6; ++r) {
                    float l = cur_lambda[lam_idx[r]];
                    v0 += l * Jp[r * 4 + 0];
                    v1 += l * Jp[r * 4 + 1];
                    v2 += l * Jp[r * 4 + 2];
                    v3 += l * Jp[r * 4 + 3];
                }

                body_out[0] += v0;
                body_out[1] += v1;
                body_out[2] += v2;
                body_out[3] += v3;

                float f3 = cur_f[3];
                for (int i = 0; i < 12; ++i) {
                    Jp[i] *= f3;
                }

                for (int m = 0; m < 3; ++m) {
                    float t0 = 0.0f, t1 = 0.0f, t2 = 0.0f, t3 = 0.0f;
                    for (int r = 0; r < 3; ++r) {
                        float fm = cur_f[8 + r * 4 + m];
                        t0 += fm * Jp[12 + r * 4 + 0];
                        t1 += fm * Jp[12 + r * 4 + 1];
                        t2 += fm * Jp[12 + r * 4 + 2];
                        t3 += fm * Jp[12 + r * 4 + 3];
                    }
                    Jp[12 + m * 4 + 0] = t0;
                    Jp[12 + m * 4 + 1] = t1;
                    Jp[12 + m * 4 + 2] = t2;
                    Jp[12 + m * 4 + 3] = t3;
                }

                constraint_idx++;
            }
            cur_jb += count;
            cur_counts += 1;
            cur_lambda += 8;
            cur_f += 12;
        }
    }

    if (n4 != 0) {
        for (int i = 0; i < n4; ++i) {
            for (int m = 0; m < 4; ++m) {
                int idx = i * 4 + m;
                out[idx] = ((c[idx] + param_50) * cfm[idx] * inv_h - rhs[idx]) * inv_h - out[idx];
            }
        }
    }
}
} // namespace lift_007F2AC0
