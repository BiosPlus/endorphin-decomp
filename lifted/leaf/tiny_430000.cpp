// Lifted C++ translation unit: lifted/leaf/tiny_430000.cpp
#include "lift_compat.h"
extern "C" const unsigned int mem_0092FF5C;
extern "C" int mem_0093209C;

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

// [0x0043AAF0] sub_0043AAF0 (6 bytes)
// @name GetConstant_0043AAF0
// @summary Returns the address of the .rdata constant u32 0x006A65E6 stored at mem_0092FF5C.
extern "C" const unsigned int* __cdecl fn_0043AAF0() {
    return &mem_0092FF5C;
}

// [0x0043D360] sub_0043D360 (6 bytes)
// @name GetConstantString_0043D360
// @summary Returns the address of the read-only string constant at 0x0093209C (.rdata "`KE").
extern "C" const char* fn_0043D360() {
    return reinterpret_cast<const char*>(&mem_0093209C);
}
