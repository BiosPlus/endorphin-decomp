// Lifted C++ translation unit: lifted/leaf/tiny_620000.cpp
#include "lift_compat.h"

// [0x0062A580] sub_0062A580 (5 bytes)
// @name VirtualDispatchThunk_Slot17
// @class Object (unidentified; receiver is passed in ecx)
// @summary Virtual dispatch thunk: loads the vtable pointer from the receiver and returns the code address stored at vtable byte offset 0x44 (slot 17 on x86). The original tail-jumps to that address; this lift returns it so the caller can perform the call.
// @field Object +0x00 void** vptr
//
// Notes:
//   The original is `mov eax, [ecx]; jmp [eax+0x44]`. A tail jump transfers
//   control with the caller's return address and arguments still on the stack,
//   which portable C++ cannot express. The closest faithful equivalent is to
//   return the resolved target so the caller performs the indirect call.
//   Assumes a 32-bit x86 target, where vtable slots are 4 bytes and the
//   vptr sits at offset 0 of the receiver.
void* fn_0062A580(void* self) {
    const unsigned char* const* receiver = reinterpret_cast<const unsigned char* const*>(self);
    const unsigned char* vtable = receiver[0];
    return *reinterpret_cast<void* const*>(vtable + 0x44);
}
