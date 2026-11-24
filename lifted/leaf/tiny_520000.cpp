// Lifted C++ translation unit: lifted/leaf/tiny_520000.cpp
#include "lift_compat.h"
extern "C" uintptr_t mem_00924FDC;
extern "C" int mem_00953454;

// [0x00521350] sub_00521350 (9 bytes)
// @name sub_00521350
// @summary This-adjustor thunk: adjusts `this` by +0x8 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00521350(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x8);
}

// [0x00528AB0] sub_00528AB0 (7 bytes)
// @name sub_00528AB0
// @summary Stores address of mem_00953454 into field at offset +0x0.
extern "C" void __fastcall fn_00528AB0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00953454;
}

// [0x00528CC0]
namespace lift_00528CC0 {
// @name bswap16
// @summary Byte-swaps a 16-bit unsigned integer (endianness swap).
uint16_t bswap16(uint16_t val) {
    return static_cast<uint16_t>((val >> 8) | (val << 8));
}
} // namespace lift_00528CC0

// [0x00528C70] sub_00528C70 (12 bytes)
namespace lift_00528C70 {
// @name setFlagOnPointedObject
// @summary If the pointer at self+0x04 is non-null, sets the byte at (that pointer)+0x04 to 1.
// @field self +0x04 void* field_0x04 (pointer; the pointee's byte at +0x04 is set to 1 when non-null)
void fn_00528C70(void* self) {
    void* target = lift_field<void*>(self, 0x04);
    if (target != nullptr) {
        lift_field<uint8_t>(target, 0x04) = 1;
    }
}
} // namespace lift_00528C70
