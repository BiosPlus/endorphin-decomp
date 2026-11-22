// Lifted C++ translation unit: lifted/leaf/tiny_540000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00548AB0(void* self);
extern "C" int mem_009560E4;
extern "C" void __fastcall ext_00541AB0(void* self);
extern "C" void __fastcall ext_005DC420(void* self);
extern "C" int mem_00956F94;

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

// [0x005405B0] sub_005405B0 (7 bytes)
// @name sub_005405B0
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_00548AB0.
extern "C" void __fastcall fn_005405B0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_00548AB0(delegate_obj);
}

// [0x00543320] sub_00543320 (7 bytes)
// @name sub_00543320
// @summary Stores address of mem_009560E4 into field at offset +0x0.
extern "C" void __fastcall fn_00543320(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009560E4;
}

// [0x005438F0] sub_005438F0 (11 bytes)
// @name sub_005438F0
// @summary Member forwarding thunk: loads subobject pointer at +0x84 and tail-calls sub_00541AB0.
extern "C" void __fastcall fn_005438F0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x84);
    ext_00541AB0(delegate_obj);
}

// [0x00547D00] sub_00547D00 (11 bytes)
// @name sub_00547D00
// @summary Member forwarding thunk: loads subobject pointer at +0xA4 and tail-calls sub_005DC420.
extern "C" void __fastcall fn_00547D00(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xA4);
    ext_005DC420(delegate_obj);
}

// [0x0054E890] sub_0054E890 (7 bytes)
// @name sub_0054E890
// @summary Stores address of mem_00956F94 into field at offset +0x0.
extern "C" void __fastcall fn_0054E890(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00956F94;
}
