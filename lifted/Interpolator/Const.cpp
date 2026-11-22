// Lifted C++ translation unit: lifted/Interpolator/Const.cpp
#include "lift_compat.h"
// Original calls the MSVCR80 invalid-parameter handler (via IAT) on bad input.
// Portable equivalent: abort.
[[noreturn]] static void invalid_parameter() {
    std::abort();
}

// [0x00528540] Interpolator::Const::vfunc_3 (39 bytes)
// @name Interpolator::Const::vfunc_3
// @class Interpolator::Const
// @summary Checks that `at` lies before the table end (table+0x8) and returns the float at at+0x4.
float fn_00528540(void* self, const void* table, const void* at, uint32_t extra) {
    (void)self;
    (void)extra;
    if (table == nullptr) {
        invalid_parameter();
    }
    const void* end = lift_field<const void*>(table, 0x8);
    if (!(at < end)) {
        invalid_parameter();
    }
    return lift_field<float>(at, 0x4);
}
