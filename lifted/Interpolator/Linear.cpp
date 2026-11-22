// Lifted C++ translation unit: lifted/Interpolator/Linear.cpp
#include "lift_compat.h"

// [0x00528640] Interpolator::Linear::vfunc_3 (232 bytes)
// @name Interpolator::Linear::vfunc_3
// @class Interpolator::Linear
// @summary Linear interpolation between the keyframe at `cur` and the next keyframe, clamping to the current key's value before it and to the last key's value at the end of the range.
// @field Interpolator::Linear +0x04 uint8_t* keys_begin
// @field Interpolator::Linear +0x08 uint8_t* keys_end
//
// Keyframe layout (8 bytes each, as walked by cur + 8):
//   +0x00 float time
//   +0x04 float value
//
// The two invalid-parameter guards in the original (calls through the
// MSVCR80 _invalid_parameter_noinfo pointer) are assertion-only: the
// handler returns and execution continues, so they are omitted here.
// The 1e-6 epsilon is the double constant at mem_009533E0.
float fn_00528640(void* self, void* keys, void* cur, float t) {
    (void)keys; // identical to `self` in the original (checked by a guard only)

    const uint8_t* cur_key = static_cast<const uint8_t*>(cur);
    const uint8_t* keys_end = lift_field<const uint8_t*>(self, 0x08);

    const float cur_time = lift_field<float>(cur_key, 0x00);
    const float cur_value = lift_field<float>(cur_key, 0x04);

    // t <= cur.time + 1e-6  -> clamp to cur.value
    if (static_cast<double>(t) <= static_cast<double>(cur_time) + 1e-6) {
        return cur_value;
    }

    const uint8_t* next_key = cur_key + 8;

    // Current key is the last one -> no segment to interpolate into.
    if (reinterpret_cast<uintptr_t>(next_key) == reinterpret_cast<uintptr_t>(keys_end)) {
        return cur_value;
    }

    const float next_time = lift_field<float>(next_key, 0x00);
    const float next_value = lift_field<float>(next_key, 0x04);

    const float alpha = (t - cur_time) / (next_time - cur_time);
    const float one_minus_alpha = 1.0f - alpha;

    return one_minus_alpha * cur_value + alpha * next_value;
}
