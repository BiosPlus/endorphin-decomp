// Lifted C++ translation unit: lifted/leaf/tiny_430000.cpp
#include "lift_compat.h"

// [0x00430F9E] sub_00430F9E (2 bytes)
// @name sub_00430F9E
// @summary Discards the caller's pushed stack slot and clobbers the saved esi register, then returns; a 2-byte "pop esi / ret" tail.
// The machine code is `pop esi; ret`: it reads the top stack word into esi, removes it from the stack, and returns.
// Portable C++ has no equivalent of the esi register or the stack pop, so the observable effect is expressed as a no-op.
void fn_00430F9E() {
}

// [0x0043CB70] sub_0043CB70 (4 bytes)
// @name sub_0043CB70
// @summary Virtual dispatch thunk: reads the object's vtable pointer and calls slot 0 with the same object.
// @field UnknownObject +0x00 void** vtable
void fn_0043CB70(void* self) {
    // Original code is `mov eax, [ecx]; jmp [eax]`: a tail jump through vtable slot 0.
    // Portable C++ cannot tail-jump or forward the caller's stack arguments, so this
    // performs the same dispatch as a call and discards the result.
    void** vtable = *reinterpret_cast<void***>(self);
    typedef void (*Slot0Fn)(void*);
    Slot0Fn slot0 = reinterpret_cast<Slot0Fn>(vtable[0]);
    slot0(self);
}
