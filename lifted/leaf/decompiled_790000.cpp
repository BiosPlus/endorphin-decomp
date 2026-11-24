// Lifted C++ translation unit: lifted/leaf/decompiled_790000.cpp
#include "lift_compat.h"

// [0x0079EBE0]
namespace lift_0079EBE0 {
// @name GetGlobalIndirectInt32
// @summary Calls ext_0079EBD0 (sub_0079EBD0) and returns the int32 stored at the address it yields.
// @field none: no struct field offsets are accessed; the only load is a dereference of the callee's return value at +0.

extern int32_t __cdecl fn_0079EBD0(void);

extern int32_t __cdecl fn_0079EBE0(void) {
    const uint32_t addr = static_cast<uint32_t>(fn_0079EBD0());
    return *reinterpret_cast<const int32_t*>(static_cast<uintptr_t>(addr));
}
} // namespace lift_0079EBE0

// [0x0079DD30] sub_0079DD30 (32 bytes)
namespace lift_0079DD30 {
// @name InitValueWithUnitDouble
// @summary thiscall: stores one DWORD argument at +0x00, writes 0 to +0x08 and 0x3FF00000 to +0x0C (double 1.0 at +0x08), returns this.
// @field InitValueWithUnitDouble +0x00 uint32_t field_0x00
// @field InitValueWithUnitDouble +0x08 uint32_t field_0x08
// @field InitValueWithUnitDouble +0x0C uint32_t field_0x0C
void* fn_0079DD30(void* self, uint32_t value) {
    lift_field<uint32_t>(self, 0x08) = 0x00000000u;
    lift_field<uint32_t>(self, 0x00) = value;
    lift_field<uint32_t>(self, 0x0C) = 0x3FF00000u;
    return self;
}
} // namespace lift_0079DD30
