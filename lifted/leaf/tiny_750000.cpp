// Lifted C++ translation unit: lifted/leaf/tiny_750000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00754FA0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_00755000(void* self);
extern "C" void __fastcall ext_007555B0(void* self);

// [0x00754F80] sub_00754F80 (30 bytes)
// @name sub_00754F80
// @summary MSVC scalar deleting destructor: calls sub_00754FA0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00754F80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00754FA0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00755000] sub_00755000 (16 bytes)
// @name sub_00755000
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_00755000(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x8);
}

// [0x00755010] sub_00755010 (16 bytes)
// @name sub_00755010
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_00755000.
extern "C" void __fastcall fn_00755010(void* self) {
    ext_00755000(static_cast<char*>(self) + 0x8);
}

// [0x00755590] sub_00755590 (30 bytes)
// @name sub_00755590
// @summary MSVC scalar deleting destructor: calls sub_007555B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00755590(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007555B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007558B0] sub_007558B0 (8 bytes)
namespace lift_007558B0 {
// @name VirtualDispatch::slot8_pushZero
// @class VirtualDispatch
// @summary Calls vtable slot 8 (byte offset 0x20) on self with a single zero argument and returns its result.
// @field VirtualDispatch +0x00 void* vtable
uint32_t fn_007558B0(void* self) {
    // mov eax, [ecx]        ; eax = vtable = *(void**)self
    void* vtable = lift_field<void*>(self, 0x00);
    // push 0x0              ; single stack argument = 0
    // call [eax+0x20]       ; thiscall vtable[8](self, 0); callee cleans stack
    void* target = lift_field<void*>(vtable, 0x20);
    return reinterpret_cast<uint32_t(__thiscall*)(void*, int)>(target)(self, 0);
    // ret                   ; return with eax = callee result
}
} // namespace lift_007558B0
