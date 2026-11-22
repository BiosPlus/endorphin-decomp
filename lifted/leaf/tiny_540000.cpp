// Lifted C++ translation unit: lifted/leaf/tiny_540000.cpp
#include "lift_compat.h"

// [0x00548FBB] sub_00548FBB (5 bytes)
// @name sub_00548FBB
// @summary Epilogue fragment: pops saved esi and releases 0x30 bytes of stack locals; no portable C++ equivalent for the stack unwind, so the body is empty.
void fn_00548FBB(void* self) {
    // Intentionally empty. The three bytes are `pop esi; add esp, 0x30; ret`,
    // which restore a callee-saved register and discard a 0x30-byte frame from
    // the caller's stack. They have no observable effect expressible in portable
    // C++; the frame they belong to is not part of this 5-byte range.
    (void)self;
}
