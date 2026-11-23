// Lifted C++ translation unit: lifted/leaf/tiny_6A0000.cpp
#include "lift_compat.h"
extern "C" int mem_0098FB84;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name fn_006AD950
// @class UnknownObject
// @summary Increments the 32-bit counter at offset +0x38 of the object passed in ecx.
// @field UnknownObject +0x38 int32_t field_0x38
void fn_006AD950(void* self) {
    int32_t* counter = reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x38);
    ++(*counter);
}
extern "C" int mem_00990D38;
extern "C" uintptr_t mem_009244D4;
extern "C" uintptr_t mem_009242F8;

// [0x006A2C20] sub_006A2C20 (11 bytes)
// @name sub_006A2C20
// @summary Destructor tail-call: restores vtable mem_0098FB84 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_006A2C20(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098FB84;
    ext_00401BB0(self);
}

// [0x006ACDB0] sub_006ACDB0 (6 bytes)
// @name sub_006ACDB0
// @summary Returns address of global mem_00990D38.
extern "C" void* __cdecl fn_006ACDB0(void) {
    return &mem_00990D38;
}

// [0x006AD000] sub_006AD000 (9 bytes)
// @name sub_006AD000
// @summary This-adjustor thunk: adjusts `this` by +0x8 and forwards through mem_009244D4.
extern "C" void __fastcall fn_006AD000(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_009244D4);
    target(static_cast<char*>(self) + 0x8);
}

// [0x006AD040] sub_006AD040 (9 bytes)
// @name sub_006AD040
// @summary This-adjustor thunk: adjusts `this` by +0xC and forwards through mem_009242F8.
extern "C" void __fastcall fn_006AD040(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_009242F8);
    target(static_cast<char*>(self) + 0xC);
}

// [0x006ACFC0]
namespace lift_006ACFC0 {
// @name sub_006ACFC0
// @summary Reads a byte at offset +0x4 from the pointer stored at this + 0x4
// @field unknown +0x04 uint32_t field_0x04


uint32_t mem_read32(uintptr_t addr);
uint8_t mem_read8(uintptr_t addr);

uint8_t __fastcall sub_006ACFC0(uintptr_t ecx) {
    uint32_t ptr = mem_read32(ecx + 0x4);
    return mem_read8(ptr + 0x4);
}
} // namespace lift_006ACFC0

// [0x006AD090]
namespace lift_006AD090 {
extern uint32_t mem_read32(uint32_t addr);
extern uint8_t mem_read8(uint32_t addr);

// @name sub_006AD090
// @summary Reads a byte at offset +0x5 from the pointer stored at this+0x4
// @field unknown +0x04 uint32_t field_0x04
uint8_t __thiscall sub_006AD090(uint32_t self) {
    uint32_t ptr = mem_read32(self + 0x4);
    return mem_read8(ptr + 0x5);
}
} // namespace lift_006AD090

// [0x006AD180]
namespace lift_006AD180 {
// @name getDerefField0x4
// @summary Reads a pointer at offset 0x4 and returns the dereferenced 32-bit value.
// @field unknown +0x04 uint32_t* field_0x04
uint32_t __thiscall sub_006AD180(void* self) {
    uint32_t ptr = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x4);
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ptr));
}
} // namespace lift_006AD180
