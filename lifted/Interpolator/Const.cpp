// Lifted C++ translation unit: lifted/Interpolator/Const.cpp
#include "lift_compat.h"

// [0x00528570] Interpolator::Const::vfunc_1 (39 bytes)
namespace lift_00528570 {
// CRT invalid-parameter handler pointer (_invalid_parameter_noinfo); never returns.
extern void (*mem_00925134)(void);

// @name Interpolator::Const::vfunc_1
// @class Interpolator::Const
// @summary Bounds-checked index into an object's table at +0x08 count; returns index + 4.
// @field Interpolator::Const +0x08 uint32_t field_0x08
// Note: the object pointer is the second stack argument (not `this`); its count
// at +0x08 is read via lift_field. The first and fourth stack arguments are never read.
uint32_t fn_00528570(void* unused0, void* obj, uint32_t index, uint32_t unused3) {
    (void)unused0;
    (void)unused3;
    if (obj == nullptr) {
        mem_00925134();
    }
    const uint32_t count = lift_field<uint32_t>(obj, 0x08);
    if (index >= count) {
        mem_00925134();
    }
    return index + 4;
}
} // namespace lift_00528570
