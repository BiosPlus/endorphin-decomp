// Lifted C++ translation unit: lifted/leaf/decompiled_630000.cpp
#include "lift_compat.h"

// [0x00630E60]
namespace lift_00630E60 {
// @name Unknown::NotifyAndReturnSubobjectF8
// @class Unknown
// @summary Calls ext_00630580 on self, passes its result to ext_00693F40 on the subobject at self+0xF8, and returns that subobject's address.
// @field Unknown +0xF8 uint8_t field_0xF8 (subobject; address taken only, not loaded)

// Callee: returns a pointer derived from self (self+0x114 per summary).
void* ext_00630580(void* self);

// Callee: thiscall-style, `this` = subobject at self+0xF8, one stack argument.
void ext_00693F40(void* subobject, void* arg);

void* fn_00630E60(void* self) {
    uint8_t* subobject = static_cast<uint8_t*>(self) + 0xF8;
    void* arg = ext_00630580(self);
    ext_00693F40(subobject, arg);
    return subobject;
}
} // namespace lift_00630E60
