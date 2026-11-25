// Lifted C++ translation unit: lifted/classes/HasRelativeTMPtr.cpp
#include "lift_compat.h"

// [0x00532240] HasRelativeTMPtr::vfunc_13 (73 bytes)
namespace lift_00532240 {
// glTranslatef import slot (IAT entry at 0x009253D0).
extern void (*mem_009253D0)(float x, float y, float z);

// @name HasRelativeTMPtr::vfunc_13
// @class HasRelativeTMPtr
// @summary Calls glTranslatef with the translation vector (+0x30..+0x38) of the objects referenced by fields +0x4 and +0x8.
// @field HasRelativeTMPtr +0x04 uint32_t field_0x04
// @field HasRelativeTMPtr +0x08 uint32_t field_0x08
static void translate_by_object_vector(uint32_t object_addr) {
    const uint8_t* obj = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(object_addr));
    float x = lift_field<float>(obj, 0x30);
    float y = lift_field<float>(obj, 0x34);
    float z = lift_field<float>(obj, 0x38);
    mem_009253D0(x, y, z);
}

void fn_00532240(void* self) {
    translate_by_object_vector(lift_field<uint32_t>(self, 0x04));
    translate_by_object_vector(lift_field<uint32_t>(self, 0x08));
}
} // namespace lift_00532240
