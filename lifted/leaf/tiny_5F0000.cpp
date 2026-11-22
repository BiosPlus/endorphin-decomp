// Lifted C++ translation unit: lifted/leaf/tiny_5F0000.cpp
#include "lift_compat.h"

// [0x005F35C0] sub_005F35C0 (5 bytes)
// @name VirtualSlot22Dispatch
// @summary Loads the vtable pointer from self and tail-dispatches to the virtual slot at byte offset 0x58 (index 22), passing self through.
// @field Object +0x00 void* vtable
void fn_005F35C0(void* self) {
    // Byte-offset access keeps the 0x58 slot displacement exact for the 32-bit target.
    const char* vtable = *reinterpret_cast<const char* const*>(self);
    void (*slot)(void*) = *reinterpret_cast<void (* const*)(void*)>(vtable + 0x58);
    slot(self);
}

// [0x005FCB30] sub_005FCB30 (5 bytes)
// @name VirtualSlot18Lookup
// @class UnknownObject (optional)
// @summary Reads the object's vtable pointer and returns the function pointer stored at vtable byte offset 0x48 (the original is a tail-jump to that slot; here the target is returned, since a portable tail-call needs the target's signature).
// @field UnknownObject +0x00 void* field_0x00
void* fn_005FCB30(void* self) {
    // mov eax, [ecx]          -> vtable = *(void**)self
    // jmp [eax + 0x48]        -> return *(void**)((char*)vtable + 0x48)
    char* vtable = *reinterpret_cast<char**>(self);
    return *reinterpret_cast<void**>(vtable + 0x48);
}
