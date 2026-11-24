// Lifted C++ translation unit: lifted/leaf/tiny_420000.cpp
#include "lift_compat.h"
extern "C" int mem_0092E4B8;
extern "C" int mem_0092EA38;
extern "C" int mem_0092ECB8;
extern "C" uintptr_t mem_00924FF4;
extern "C" int mem_0092E8F4;
extern "C" void __fastcall ext_006A5DFA(void* self);

extern "C" void __fastcall ext_006A5DFA(void* self);
// @name sub_00421AB0
// @summary Returns the address of the global constant mem_0092E4B8 (initialised to 0x006A5FCE).
extern "C" int* fn_00421AB0() {
    return &mem_0092E4B8;
}
extern "C" void __fastcall ext_00584A10(void* self);

// [0x00422C60] sub_00422C60 (6 bytes)
// @name sub_00422C60
// @summary Returns the address of the global constant mem_0092EA38 (string "$aj").
extern "C" int* fn_00422C60() {
    return &mem_0092EA38;
}

// [0x00425D80] sub_00425D80 (6 bytes)
// @name sub_00425D80
// @summary Returns the address of the global constant mem_0092ECB8 (initialised to 0x006A5FCE).
extern "C" int* fn_00425D80() {
    return &mem_0092ECB8;
}

// [0x00421C00] sub_00421C00 (9 bytes)
// @name sub_00421C00
// @summary This-adjustor thunk: adjusts `this` by +0x4 and forwards through mem_00924FF4.
extern "C" void __fastcall fn_00421C00(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FF4);
    target(static_cast<char*>(self) + 0x4);
}

// [0x004225D0] sub_004225D0 (11 bytes)
// @name sub_004225D0
// @summary Destructor tail-call: restores vtable mem_0092E8F4 and tail-calls base destructor thunk_MFC80_ord_587.
extern "C" void __fastcall fn_004225D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092E8F4;
    ext_006A5DFA(self);
}

// [0x0042F750] sub_0042F750 (8 bytes)
// @name sub_0042F750
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_00584A10.
extern "C" void __fastcall fn_0042F750(void* self) {
    ext_00584A10(static_cast<char*>(self) + 0x4);
}

// [0x00422CE0]
namespace lift_00422CE0 {
// @name SetFieldAndOffsetField78
// @class Unknown
// @summary Stores the argument at this+0x74 and stores argument + 0x5C at this+0x78 (__thiscall, ret 4).
// @field Unknown +0x74 DWORD field_0x74
// @field Unknown +0x78 DWORD field_0x78
void fn_00422CE0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x74) = value;
    lift_field<DWORD>(self, 0x78) = value + 0x5C;
}
} // namespace lift_00422CE0
