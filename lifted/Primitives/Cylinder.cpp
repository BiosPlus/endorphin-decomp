// Lifted C++ translation unit: lifted/Primitives/Cylinder.cpp
#include "lift_compat.h"
#include <string>

// [0x0053DAA0]
// @name Primitives::Cylinder::vfunc_25
// @class Primitives::Cylinder
// @summary Forwards three args to Plane::vfunc_25, sets flag 0x40 at +0x1c, copies two fields from arg2 and the first char of its string at +0x9c into self.
// @field Primitives::Cylinder +0x1c uint32_t field_0x1c
// @field Primitives::Cylinder +0x3c uint32_t field_0x3c
// @field Primitives::Cylinder +0x40 uint32_t field_0x40
// @field Primitives::Cylinder +0x44 uint8_t field_0x44
// @field Primitives::Cylinder +0x45 uint8_t field_0x45
// @field Unknown +0x88 uint32_t field_0x88
// @field Unknown +0x8c uint32_t field_0x8c
// @field Unknown +0x9c std::string field_0x9c

void ext_0053A610(void* self, uint32_t a1, uint32_t a2, uint32_t a3);

void fn_0053DAA0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    ext_0053A610(self, a1, a2, a3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1c);
    if ((flags & 0x40) == 0) {
        flags ^= 0x40;
    }

    uint8_t* other = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(a2));
    lift_field<uint32_t>(self, 0x3c) = lift_field<uint32_t>(other, 0x88);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(other, 0x8c);
    lift_field<uint8_t>(self, 0x44) = 1;
    lift_field<uint8_t>(self, 0x45) = lift_field<std::string>(other, 0x9c)[0];
}
