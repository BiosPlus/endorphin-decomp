// Lifted C++ translation unit: lifted/leaf/tiny_5A0000.cpp
#include "lift_compat.h"
extern "C" int mem_0095EEC8;
extern "C" void __fastcall ext_0065C660(void* self);
extern "C" int mem_0095EEF4;
#include <cstdint>

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

// [0x005AC840] sub_005AC840 (27 bytes)
namespace lift_005AC840 {
// @name sub_005AC840
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_005AC840(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x29) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_005AC840

// [0x005AC820]
namespace lift_005AC820 {
// @name Unknown::walkLinkUntilFlagSet_005AC820
// @class Unknown
// @summary Follow the +0x08 link chain from arg until a node with byte +0x29 set is reached; returns the node whose +0x08 link leads to it (or arg itself if the first link already matches).
// @field Unknown +0x08 void* field_0x08 (next link pointer)
// @field Unknown +0x29 uint8_t field_0x29 (flag byte)

void* fn_005AC820(void* a) {
    void* eax = a;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x29) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0x29) == 0);
    return eax;
}
} // namespace lift_005AC820
