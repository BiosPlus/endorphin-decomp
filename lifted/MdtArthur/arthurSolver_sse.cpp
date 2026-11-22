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
