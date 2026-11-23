// Lifted C++ translation unit: lifted/leaf/tiny_560000.cpp
#include "lift_compat.h"

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
