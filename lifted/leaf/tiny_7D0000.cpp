// Lifted C++ translation unit: lifted/leaf/tiny_7D0000.cpp
#include "lift_compat.h"

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
