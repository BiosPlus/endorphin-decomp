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

// [0x0055BE30] AcclaimIO::vfunc_19 (37 bytes)
// @name AcclaimIO::vfunc_19
// @class AcclaimIO
// @summary Calls the virtual at vtable byte offset 0xE4 (thiscall, no args) and returns true only if its result has bit 0x2 set and the byte at +0x428 is non-zero.
// @field AcclaimIO +0x00 void** vtable
// @field AcclaimIO +0x428 uint8_t field_0x428
bool fn_0055BE30(void* self) {
    using FlagsFn = uint8_t (*)(void*);

    void* vtable = lift_field<void*>(self, 0x00);
    FlagsFn flags_fn = reinterpret_cast<FlagsFn>(lift_field<void*>(vtable, 0xE4));
    const uint8_t flags = flags_fn(self);

    if ((flags & 0x02) == 0) {
        return false;
    }
    return lift_field<uint8_t>(self, 0x428) != 0;
}

// [0x0055BE60] AcclaimIO::vfunc_16 (49 bytes)
// @name AcclaimIO::forwardToSubobjects
// @class AcclaimIO
// @summary Forwards arg to virtual slot 16 (0x40) of two embedded vtable-bearing subobjects at +0x46C and +0x964.
// @field AcclaimIO +0x46C uint8_t subobjA
// @field AcclaimIO +0x964 uint8_t subobjB
void fn_0055BE60(void* self, void* arg) {
    void* subA = reinterpret_cast<uint8_t*>(self) + 0x46C;
    void** vtblA = *reinterpret_cast<void***>(subA);
    reinterpret_cast<void (*)(void*, void*)>(vtblA[0x40 / 4])(subA, arg);

    void* subB = reinterpret_cast<uint8_t*>(self) + 0x964;
    void** vtblB = *reinterpret_cast<void***>(subB);
    reinterpret_cast<void (*)(void*, void*)>(vtblB[0x40 / 4])(subB, arg);
}
