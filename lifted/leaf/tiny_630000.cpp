// Lifted C++ translation unit: lifted/leaf/tiny_630000.cpp
#include "lift_compat.h"
extern "C" int mem_0097CC34;

// [0x0063E970] sub_0063E970 (7 bytes)
// @name sub_0063E970
// @summary Stores address of mem_0097CC34 into field at offset +0x0.
extern "C" void __fastcall fn_0063E970(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0097CC34;
}

// [0x0063E960]
namespace lift_0063E960 {
extern uint8_t mem_0097CC34[];

// @name sub_0063E960_ctor
// @summary Initializes object vtable pointer at +0x00 to 0x0097CC34 and returns this.
// @field Object +0x00 uint32_t vftable
uint32_t __thiscall sub_0063E960(uint32_t this_ptr) {
    *reinterpret_cast<uint32_t*>(this_ptr) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_0097CC34));
    return this_ptr;
}
} // namespace lift_0063E960

// [0x0063FFE0]
namespace lift_0063FFE0 {
extern uint32_t mem_0097CC34;

// @name sub_0063FFE0
// @summary Sets vtable pointer at +0x0 to 0x0097CC34 and returns this.
// @field Unknown +0x00 void* vtable
void* __thiscall sub_0063FFE0(void* self, uint32_t /*unused*/) {
    *reinterpret_cast<void**>(self) = &mem_0097CC34;
    return self;
}
} // namespace lift_0063FFE0

// [0x0063E0F0] sub_0063E0F0 (15 bytes)
namespace lift_0063E0F0 {
// @name sub_0063E0F0
// @summary Auto-lifted identical-shape clone of 0x00519CE0 (std::basic_string<char>::~basic_string (vtable-stamping thunk)).
namespace lift_00519CE0 {
extern void __thiscall ext_00628FF0(void* self);

// @name std::basic_string<char>::~basic_string (vtable-stamping thunk)
// @class <unknown> (this is in ecx; owning class not yet recovered)
// @summary Stamps the object's vtable pointer (0x0095219C) into its first dword, then tail-jumps to the MSVCP80 basic_string destructor on this+4.
// @field <unknown> +0x00 uint32_t field_0x00
void fn_0063E0F0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x97CB4Cu;   // mov dword ptr [ecx], 0x95219c
    ext_00628FF0(static_cast<uint8_t*>(self) + 4);    // add ecx, 4 ; jmp [0x924ff4] (MSVCP80 ~basic_string)
}
} // namespace lift_00519CE0
} // namespace lift_0063E0F0
