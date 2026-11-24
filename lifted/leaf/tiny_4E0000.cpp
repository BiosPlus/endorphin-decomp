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
