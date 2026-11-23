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

// [0x007558B0]
namespace lift_007558B0 {
// @name callVtableSlot0x20WithZero
// @summary Calls virtual method at vtable offset 0x20 on this with argument 0
// @field Object +0x00 void** vtable


extern uint32_t mem_read32(uint32_t addr);

void __thiscall sub_007558B0(uint32_t this_ptr) {
    uint32_t vtable = mem_read32(this_ptr);
    uint32_t fn_ptr = mem_read32(vtable + 0x20);
    using VMethod = void(__thiscall*)(uint32_t, uint32_t);
    reinterpret_cast<VMethod>(static_cast<uintptr_t>(fn_ptr))(this_ptr, 0);
}
} // namespace lift_007558B0
