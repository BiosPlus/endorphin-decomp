// Lifted C++ translation unit: lifted/classes/AcclaimIO.cpp
#include "lift_compat.h"

// [0x00584660] AcclaimIO::vfunc_43 (34 bytes)
// @name AcclaimIO::IsFlaggedAndEnabled
// @class AcclaimIO
// @summary Returns true when virtual slot 57 (vtable +0xE4) reports bit 0x02 and the byte at +0x428 is nonzero.
// @field AcclaimIO +0x00 void** vtable
// @field AcclaimIO +0x428 uint8_t field_0x428
bool fn_00584660(void* self) {
    void** vtbl = lift_field<void**>(self, 0x00);
    using Slot57 = uint8_t (*)(void* self);
    Slot57 slot = reinterpret_cast<Slot57>(vtbl[57]);
    uint8_t flags = slot(self);
    if ((flags & 0x02) == 0) {
        return false;
    }
    return lift_field<uint8_t>(self, 0x428) != 0;
}
