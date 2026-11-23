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
