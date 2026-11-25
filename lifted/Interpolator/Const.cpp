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

// [0x00528540] Interpolator::Const::vfunc_3 (39 bytes)
namespace lift_00528540 {
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (asm: ebx = [0x925134]; call ebx).
extern void (*mem_00925134)();

// @name Interpolator::Const::vfunc_3
// @class Interpolator::Const
// @summary Bounds-checked float read: validates the table pointer and index, then returns the float at index+4.
// @field Interpolator::Const +0x08 uint32_t field_0x08
__stdcall float fn_00528540(uint32_t /*unused_arg0*/, void* table, uint32_t index, uint32_t /*unused_arg3*/) {
    if (table == nullptr) {
        mem_00925134();
    }
    if (index >= lift_field<uint32_t>(table, 0x08)) {
        mem_00925134();
    }
    return lift_field<float>(reinterpret_cast<void*>(static_cast<uintptr_t>(index)), 0x04);
}
} // namespace lift_00528540
