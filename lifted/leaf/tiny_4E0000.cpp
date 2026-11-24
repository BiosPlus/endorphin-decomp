// Lifted C++ translation unit: lifted/leaf/tiny_4E0000.cpp
#include "lift_compat.h"
extern "C" int mem_0093F994;

// [0x004EB9D0] sub_004EB9D0 (7 bytes)
// @name sub_004EB9D0
// @summary Stores address of mem_0093F994 into field at offset +0x0.
extern "C" void __fastcall fn_004EB9D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093F994;
}

// [0x004EB9B0] sub_004EB9B0 (17 bytes)
namespace lift_004EB9B0 {
extern int mem_0093F994;

// @name initVtableAndFlags
// @summary Stores the vtable address 0x0093F994 at +0x00 and sets two byte flags (+0x04 = 0, +0x05 = 1).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x05 uint8_t field_0x05
void fn_004EB9B0(void* self) {
    // The original stores an immediate VA (vtable address), not a host pointer.
    lift_field<uint32_t>(self, 0x00) = 0x0093F994u;
    lift_field<uint8_t>(self, 0x04) = 0x00;
    lift_field<uint8_t>(self, 0x05) = 0x01;
}
} // namespace lift_004EB9B0

// [0x004E9BB0] sub_004E9BB0 (23 bytes)
namespace lift_004E9BB0 {
// @name Unknown::InitFlagBytes
// @class Unknown
// @summary Sets byte flags at +0x04 and +0x05 to 1, and clears bytes +0x06 through +0x09.
// @field Unknown +0x04 BYTE field_0x04
// @field Unknown +0x05 BYTE field_0x05
// @field Unknown +0x06 BYTE field_0x06
// @field Unknown +0x07 BYTE field_0x07
// @field Unknown +0x08 BYTE field_0x08
// @field Unknown +0x09 BYTE field_0x09
void fn_004E9BB0(void* self) {
    lift_field<BYTE>(self, 0x04) = 1;
    lift_field<BYTE>(self, 0x05) = 1;
    lift_field<BYTE>(self, 0x06) = 0;
    lift_field<BYTE>(self, 0x08) = 0;
    lift_field<BYTE>(self, 0x09) = 0;
    lift_field<BYTE>(self, 0x07) = 0;
}
} // namespace lift_004E9BB0

// [0x004EF2B0] sub_004EF2B0 (27 bytes)
namespace lift_004EF2B0 {
// @name CopyPairOut
// @class <Unknown> (free function; self is passed in ECX)
// @summary Copies two DWORD fields (+0x04, +0x08) of self into the out-pointer argument at [out+0], [out+4].
// @field <Unknown> +0x04 DWORD field_0x04
// @field <Unknown> +0x08 DWORD field_0x08
void fn_004EF2B0(void* self, void* out) {
    DWORD a = lift_field<DWORD>(self, 0x04);
    DWORD b = lift_field<DWORD>(self, 0x08);
    lift_field<DWORD>(out, 0x00) = a;
    lift_field<DWORD>(out, 0x04) = b;
}
} // namespace lift_004EF2B0
