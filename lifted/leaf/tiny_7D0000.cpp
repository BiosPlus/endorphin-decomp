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
