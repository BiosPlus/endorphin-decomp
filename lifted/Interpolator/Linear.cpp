// Lifted C++ translation unit: lifted/Interpolator/Linear.cpp
#include "lift_compat.h"

// [0x00528640] Interpolator::Linear::vfunc_3 (232 bytes)
namespace lift_00528640 {
// CRT invalid-parameter handler (MSVCR80!_invalid_parameter_noinfo); never returns.
extern void (*mem_00925134)(void);
// 1e-06 .rdata constant, added to the key time before the early-out comparison.
extern const double mem_009533E0;

// @name Interpolator::Linear::vfunc_3
// @class Interpolator::Linear
// @summary Linear interpolation between the key at `key` (time, value) and the following key; returns the key's value when t <= key time + 1e-6 or the following key is the end sentinel.
// @field Interpolator::Linear +0x04 uint32_t keys_begin
// @field Interpolator::Linear +0x08 uint32_t keys_end
// Note: arguments are stack-passed (ret 0x10). `self` and `other` are both expected to
// point at the same Linear object (the asm asserts other == self). Key addresses are
// 32-bit guest addresses; key entries are {float time; float value} pairs, 8 bytes each.
__stdcall float fn_00528640(void* self, void* other, uint32_t key, float t) {
    auto key_ptr = [](uint32_t addr) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
    };

    if (other == nullptr) {
        mem_00925134();
    }
    const uint32_t other_end = lift_field<uint32_t>(other, 0x08);
    if (key >= other_end) {
        mem_00925134();
    }

    const float t0 = lift_field<float>(key_ptr(key), 0x00);
    const float v0 = lift_field<float>(key_ptr(key), 0x04);
    if (static_cast<double>(t) <= static_cast<double>(t0) + mem_009533E0) {
        return v0;
    }

    const uint32_t keys_begin = lift_field<uint32_t>(self, 0x04);
    const uint32_t keys_end = lift_field<uint32_t>(self, 0x08);
    if (keys_begin > keys_end) {
        mem_00925134();
    }
    if (other != self) {
        mem_00925134();
    }

    const uint32_t next = key + 8;
    if (next == keys_end) {
        return v0;
    }

    // Bounds checks on both key addresses against the container end.
    if (key >= other_end) {
        mem_00925134();
    }
    if (next >= lift_field<uint32_t>(other, 0x08)) {
        mem_00925134();
    }

    const float t1 = lift_field<float>(key_ptr(next), 0x00);
    const float v1 = lift_field<float>(key_ptr(next), 0x04);
    const float f = (t - t0) / (t1 - t0);
    return (1.0f - f) * v0 + f * v1;
}
} // namespace lift_00528640

// [0x00528730] Interpolator::Linear::vfunc_2 (234 bytes)
namespace lift_00528730 {
// Callee: 396-byte helper that blends the two key values into `self` (thiscall, callee-cleans 3 stack args).
extern void __thiscall ext_00693DB0(void* self, uint32_t value0, uint32_t value1, float factor);

// CRT invalid-parameter handler (MSVCR80!_invalid_parameter_noinfo); never returns.
extern void (*mem_00925134)(void);
// 1e-06 .rdata constant, added to the key time before the early-out comparison.
extern const double mem_009533E0;

// @name Interpolator::Linear::vfunc_2
// @class Interpolator::Linear
// @summary Blend between the key at `key` and the following key (stride 0x14, value at +4) into `self`; returns `self`, or the key's value address when t is at/before the key or the key is the last one.
// @field Interpolator::Linear +0x04 uint32_t keys_begin
// @field Interpolator::Linear +0x08 uint32_t keys_end
// Note: `a1` and `a2` must point at the same Linear (the asm asserts it). Keys are 32-bit guest
// addresses; each key is {float time; float value; 3 more floats} and the next key is at +0x14.
__thiscall void* fn_00528730(void* self, void* a1, void* a2, uint32_t key, float t) {
    auto key_ptr = [](uint32_t addr) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
    };

    const float k0 = lift_field<float>(key_ptr(key), 0x00);
    // Early out: t <= key time + 1e-6 (unordered compares fall through, as in the asm).
    const bool early = static_cast<double>(t) <= static_cast<double>(k0) + mem_009533E0;

    if (!early) {
        if (lift_field<uint32_t>(a1, 0x04) > lift_field<uint32_t>(a1, 0x08)) {
            mem_00925134();
        }
        if (a2 != a1) {
            mem_00925134();
        }

        const uint32_t keys_end = lift_field<uint32_t>(a1, 0x08);
        const uint32_t next = key + 0x14;
        if (next != keys_end) {
            // Bounds checks against the container end, in the same order as the asm.
            if (key >= lift_field<uint32_t>(a2, 0x08)) {
                mem_00925134();
            }
            if (next >= lift_field<uint32_t>(a2, 0x08)) {
                mem_00925134();
            }
            if (key >= lift_field<uint32_t>(a2, 0x08)) {
                mem_00925134();
            }

            const float k1 = lift_field<float>(key_ptr(next), 0x00);
            const float factor = static_cast<float>(
                (static_cast<double>(t) - static_cast<double>(k0)) /
                (static_cast<double>(k1) - static_cast<double>(k0)));

            if (key >= lift_field<uint32_t>(a2, 0x08)) {
                mem_00925134();
            }
            ext_00693DB0(self, key + 0x04, next + 0x04, factor);
            return self;
        }
    }

    // Early-out / last-key path: bounds check, then return the key's value address.
    if (key >= lift_field<uint32_t>(a2, 0x08)) {
        mem_00925134();
    }
    return key_ptr(key + 0x04);
}
} // namespace lift_00528730

// [0x00528820]
namespace lift_00528820 {
// @name Interpolator::Linear::vfunc_1
// @class Interpolator::Linear
// @summary Linearly interpolates between two keyframe transforms or returns the single keyframe if at the end.
// @field Interpolator::Linear +0x14 uint8_t[16] field_0x14

extern void __thiscall ext_0051CE40(void* self, uint32_t a1, void* a2, uint32_t a3);
extern void __thiscall ext_00694330(void* self, void* a1);
extern void __thiscall ext_00694A70(void* self, uint32_t a1, uint32_t a2);
extern void __thiscall ext_00694B60(void* self, uint32_t a1, void* a2);
extern void __thiscall ext_00695070(void* self, void* a1);
extern void ext_006A5C5C(void* ptr);
extern uint32_t mem_00925134;

extern uint32_t __thiscall fn_00528820(
    void* self,
    uint32_t arg0,
    uint32_t arg1,
    uint32_t arg2,
    float arg3)
{
    uint32_t esi = arg2;
    uint32_t edi = arg1;
    typedef void (*invalid_param_fn)(void);
    invalid_param_fn invalid_param = (invalid_param_fn)(uintptr_t)mem_00925134;

    if (edi == 0) {
        invalid_param();
    }
    if (esi >= lift_field<uint32_t>((void*)(uintptr_t)edi, 0x8)) {
        invalid_param();
    }

    uint32_t range = arg0;
    uint32_t keys_end = lift_field<uint32_t>((void*)(uintptr_t)range, 0x8);
    uint32_t ebp = esi + 0x10;
    if (lift_field<uint32_t>((void*)(uintptr_t)range, 0x4) > keys_end) {
        invalid_param();
    }
    if (arg1 != range) {
        invalid_param();
    }

    if (ebp == keys_end) {
        if (esi >= lift_field<uint32_t>((void*)(uintptr_t)arg1, 0x8)) {
            invalid_param();
        }
        return esi + 0x4;
    }

    float mat1[12] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f
    };
    if (esi >= lift_field<uint32_t>((void*)(uintptr_t)arg1, 0x8)) {
        invalid_param();
    }
    ext_00694A70(mat1, 0, esi + 0x4);

    float q1[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    ext_00694330(q1, mat1);

    float mat2[12] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f
    };
    if (ebp >= lift_field<uint32_t>((void*)(uintptr_t)arg1, 0x8)) {
        invalid_param();
    }
    ext_00694A70(mat2, 0, ebp + 0x4);

    float q2[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    ext_00694330(q2, mat2);

    uint32_t vec[3] = {0, 0, 0};
    if (esi >= lift_field<uint32_t>((void*)(uintptr_t)arg1, 0x8)) {
        invalid_param();
    }
    ext_0051CE40(vec, esi, q1, 0);

    if (ebp >= lift_field<uint32_t>((void*)(uintptr_t)arg1, 0x8)) {
        invalid_param();
    }
    ext_0051CE40(vec, ebp, q2, 0);

    if (vec[0] > vec[1]) {
        invalid_param();
    }

    typedef float* (__thiscall *vfunc2_fn)(void*, float*, uint32_t, uint32_t, float);
    uint32_t vtable = lift_field<uint32_t>(self, 0x0);
    vfunc2_fn vfunc2 = (vfunc2_fn)(uintptr_t)lift_field<uint32_t>((void*)(uintptr_t)vtable, 0x8);
    float tmp_q[4];
    float* res_q = vfunc2(self, tmp_q, vec[0], vec[1], arg3);

    float q_out[4] = {res_q[0], res_q[1], res_q[2], res_q[3]};
    float mat_out[12] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f
    };
    ext_00695070(mat_out, q_out);

    uint32_t out_ptr = (uint32_t)(uintptr_t)self + 0x14;
    ext_00694B60(mat_out, 0, (void*)(uintptr_t)out_ptr);

    if (vec[0] != 0) {
        ext_006A5C5C((void*)(uintptr_t)vec[0]);
    }

    return out_ptr;
}
} // namespace lift_00528820
