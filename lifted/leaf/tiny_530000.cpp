// Lifted C++ translation unit: lifted/leaf/tiny_530000.cpp
#include "lift_compat.h"

// [0x0053F894] sub_0053F894 (5 bytes)
// @name sub_0053F894
// @summary Epilogue tail: discards two saved stack slots and returns, removing a 4-byte argument from the caller's stack (stdcall-style cleanup).
// @field Unknown +0x00 uint32_t field_0x00
//
// Machine code: pop esi; pop ecx; ret 4. The two pops restore nothing
// observable from C++; they only unwind the stack frame of the caller's
// epilogue. The portable equivalent is a stdcall function taking one
// 4-byte argument that is never read.
void __stdcall fn_0053F894(uint32_t arg_unused) {
    (void)arg_unused;
}
