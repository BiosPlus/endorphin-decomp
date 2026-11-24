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

// [0x0063E240] sub_0063E240 (32 bytes)
namespace lift_0063E240 {
// @name sub_0063E240
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_0063E0C0(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0097CB8C[];

__thiscall void* fn_0063E240(void* self, DWORD arg1, DWORD arg2) {
    ext_0063E0C0(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0097CB8C));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_0063E240

// [0x0063F600] sub_0063F600 (32 bytes)
namespace lift_0063F600 {
// @name sub_0063F600
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_0063F350(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0097CC60[];

__thiscall void* fn_0063F600(void* self, DWORD arg1, DWORD arg2) {
    ext_0063F350(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0097CC60));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_0063F600
