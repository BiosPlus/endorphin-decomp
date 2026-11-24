// Lifted C++ translation unit: lifted/leaf/tiny_5A0000.cpp
#include "lift_compat.h"
extern "C" int mem_0095EEC8;
extern "C" void __fastcall ext_0065C660(void* self);
extern "C" int mem_0095EEF4;

// [0x005AA2A0] sub_005AA2A0 (11 bytes)
// @name sub_005AA2A0
// @summary Destructor tail-call: restores vtable mem_0095EEC8 and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_005AA2A0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095EEC8;
    ext_0065C660(self);
}

// [0x005AA350] sub_005AA350 (11 bytes)
// @name sub_005AA350
// @summary Destructor tail-call: restores vtable mem_0095EEF4 and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_005AA350(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095EEF4;
    ext_0065C660(self);
}

// [0x005AA9E0] sub_005AA9E0 (23 bytes)
namespace lift_005AA9E0 {
// @name sub_005AA9E0
// @summary Auto-lifted identical-shape clone of 0x004D0AF0 (Unknown::IndexedTableAddress).
namespace lift_004D0AF0 {
// @name Unknown::IndexedTableAddress
// @class Unknown
// @summary Returns 0xAE5C68 + 28 * self->field_0x190 (address of a 28-byte entry in a global table).
// @field Unknown +0x190 DWORD field_0x190
extern DWORD __fastcall fn_005AA9E0(void* self) {
    DWORD index = lift_field<DWORD>(self, 0x154);
    return 0xB42600u + 28u * index;
}
} // namespace lift_004D0AF0
} // namespace lift_005AA9E0
