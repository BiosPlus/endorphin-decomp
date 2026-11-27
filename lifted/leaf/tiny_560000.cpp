// Lifted C++ translation unit: lifted/leaf/tiny_560000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00566FE0]
namespace lift_00566FE0 {
// @name setField00AndReturnThis
// @summary Sets the 32-bit field at offset 0x00 of the object and returns this.
// @field Object +0x00 uint32_t field_0x00
uint32_t __thiscall sub_00566FE0(void* this_ptr, uint32_t value) {
    *reinterpret_cast<uint32_t*>(this_ptr) = value;
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(this_ptr));
}
} // namespace lift_00566FE0

// [0x0056D840] sub_0056D840 (18 bytes)
namespace lift_0056D840 {
// @name sub_0056D840
// @summary Auto-lifted identical-shape clone of 0x006B6090 (Unknown::resetVtablesAndTailDestruct).
namespace lift_006B6090 {
// Known callee 0x006B5090: sub_006B5090_dtor (Destructor that resets vtables, deletes member at +0xd4, destroys member at +0x68, destroys member at +0x5c via MFC80_ord_1934, and calls base destructor MFC80_ord_760.)
extern void ext_00558920(void* self);
extern int mem_009578D4;
extern int mem_009578C8;

// @name Unknown::resetVtablesAndTailDestruct
// @class Unknown
// @summary Sets the primary vtable at +0x00 and the secondary vtable at +0x54, then tail-calls the base destructor sub_006B5090.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x54 void* vtable2
void fn_0056D840(void* self) {
    lift_field<void*>(self, 0x00) = &mem_009578D4;
    lift_field<void*>(self, 0x4) = &mem_009578C8;
    ext_00558920(self);
}
} // namespace lift_006B6090
} // namespace lift_0056D840
