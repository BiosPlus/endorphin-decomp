// Lifted C++ translation unit: lifted/leaf/tiny_7D0000.cpp
#include "lift_compat.h"
extern "C" int mem_0099E074;

// [0x007DAD40] sub_007DAD40 (4 bytes)
// @name ReturnZeroWord
// @summary Returns zero in the low 16 bits of the result register (xor ax, ax; ret).
// @field none
uint16_t ReturnZeroWord() {
    return 0;
}

extern "C" uint16_t fn_007DAD40() {
    return ReturnZeroWord();
}

// [0x007D8700] sub_007D8700 (5 bytes)
// @name sub_007D8700
// @summary Returns its first stack argument unchanged (mov eax, [esp+4]; ret).
// @field none
extern "C" uint32_t fn_007D8700(uint32_t arg0) {
    return arg0;
}

// [0x007D7A20] sub_007D7A20 (6 bytes)
// @name sub_007D7A20
// @summary Returns address of global mem_0099E074.
extern "C" void* __cdecl fn_007D7A20(void) {
    return &mem_0099E074;
}

// [0x007D5AE0]
namespace lift_007D5AE0 {
// @name derefDword
// @summary Dereference a 32-bit pointer and return its uint32_t value.


uint32_t mem_read32(uint32_t addr);

uint32_t sub_007D5AE0(uint32_t ptr) {
    return mem_read32(ptr);
}
} // namespace lift_007D5AE0

// [0x007D48A0]
namespace lift_007D48A0 {
// @name getField_0x04
// @summary Returns the 32-bit value at offset +0x04 of the given object.
// @field Object +0x04 uint32_t field_0x04


extern uint32_t mem_read32(uint32_t addr);

uint32_t sub_007D48A0(uint32_t arg0) {
    return mem_read32(arg0 + 0x4);
}
} // namespace lift_007D48A0

// [0x007D5BC0]
namespace lift_007D5BC0 {
extern uint32_t mem_read32(uint32_t addr);

// @name getField0x20
// @summary Reads and returns the 32-bit value at offset 0x20 of the passed struct pointer.
// @field Struct +0x20 uint32_t field_0x20
extern uint32_t sub_007D5BC0(uint32_t arg0) {
    return mem_read32(arg0 + 0x20);
}
} // namespace lift_007D5BC0

// [0x007D8490]
namespace lift_007D8490 {
extern float mem_read_f32(uint32_t addr);

// @name getFloatAt0x58
// @summary Returns the float field at offset 0x58 of the given object.
// @field Object +0x58 float field_0x58
float sub_007D8490(uint32_t obj) {
    return mem_read_f32(obj + 0x58);
}
} // namespace lift_007D8490
