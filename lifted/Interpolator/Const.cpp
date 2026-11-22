// Lifted C++ translation unit: lifted/Interpolator/Const.cpp
#include "lift_compat.h"

// [0x00528540] Interpolator::Const::vfunc_3 (39 bytes)
// @name Interpolator::Const::vfunc_3
// @class Interpolator::Const
// @summary Checks that `at` lies before the table end (table+0x8) and returns the float at at+0x4.
float fn_00528540(void* self, const void* table, const void* at, uint32_t extra) {
    (void)self;
    (void)extra;
    // Original calls the MSVCR80 invalid-parameter handler on bad input; portable form aborts.
    if (table == nullptr) {
        std::abort();
    }
    const void* end = lift_field<const void*>(table, 0x8);
    if (!(at < end)) {
        std::abort();
    }
    return lift_field<float>(at, 0x4);
}

// [0x00528570] Interpolator::Const::vfunc_1 (39 bytes)
// @name Interpolator::Const::vfunc_1
// @class Interpolator::Const
// @summary Checks that `at` lies before the table end (table+0x8) and returns the address at at+0x4.
const float* fn_00528570(void* self, const void* table, const void* at, uint32_t extra) {
    (void)self;
    (void)extra;
    // Original calls the MSVCR80 invalid-parameter handler on bad input; portable form aborts.
    if (table == nullptr) {
        std::abort();
    }
    const void* end = lift_field<const void*>(table, 0x8);
    if (!(at < end)) {
        std::abort();
    }
    return reinterpret_cast<const float*>(static_cast<const uint8_t*>(at) + 0x4);
}
