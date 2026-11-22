// Lifted C++ translation unit: lifted/leaf/decompiled_870000.cpp
#include "lift_compat.h"

// [0x00870E86] sub_00870E86 (3 bytes)
// @name sub_00870E86
// @summary Epilogue fragment: pops saved edi, esi and ebx from the stack; no portable C++ equivalent for the register restore, so the body is empty.
void fn_00870E86(void* self) {
    // Intentionally empty. The three instructions are `pop edi; pop esi; pop ebx`,
    // which restore callee-saved registers from the caller's frame. They have no
    // observable effect expressible in portable C++; the frame they belong to is
    // not part of this 3-byte range.
    (void)self;
}
