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
