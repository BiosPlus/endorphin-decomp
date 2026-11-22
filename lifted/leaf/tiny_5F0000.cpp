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
