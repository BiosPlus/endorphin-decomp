// Lifted C++ translation unit: lifted/leaf/tiny_430000.cpp
#include "lift_compat.h"

// [0x00430F9E] sub_00430F9E (2 bytes)
// @name sub_00430F9E
// @summary Discards the caller's pushed stack slot and clobbers the saved esi register, then returns; a 2-byte "pop esi / ret" tail.
// The machine code is `pop esi; ret`: it reads the top stack word into esi, removes it from the stack, and returns.
// Portable C++ has no equivalent of the esi register or the stack pop, so the observable effect is expressed as a no-op.
void fn_00430F9E() {
}
