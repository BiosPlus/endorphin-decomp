// Lifted C++ translation unit: lifted/leaf/tiny_620000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_005DFEB0(void* self);
extern "C" void __fastcall ext_005E0130(void* self);
extern "C" int mem_00977734;
extern "C" void __fastcall ext_0060BA10(void* self);

extern "C" void __fastcall ext_0060BA10(void* self);
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

// [0x006244C0] sub_006244C0 (8 bytes)
// @name sub_006244C0
// @summary This-adjustor thunk: adjusts `this` by +0x28 and tail-calls sub_005DFEB0.
extern "C" void __fastcall fn_006244C0(void* self) {
    ext_005DFEB0(static_cast<char*>(self) + 0x28);
}

// [0x006244D0] sub_006244D0 (8 bytes)
// @name sub_006244D0
// @summary This-adjustor thunk: adjusts `this` by +0x38 and tail-calls sub_005E0130.
extern "C" void __fastcall fn_006244D0(void* self) {
    ext_005E0130(static_cast<char*>(self) + 0x38);
}

// [0x006268F0] sub_006268F0 (11 bytes)
// @name sub_006268F0
// @summary Destructor tail-call: restores vtable mem_00977734 and tail-calls base destructor sub_0060BA10.
extern "C" void __fastcall fn_006268F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00977734;
    ext_0060BA10(self);
}
