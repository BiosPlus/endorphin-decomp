// Lifted C++ translation unit: lifted/leaf/tiny_490000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00491A90(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" int mem_0093EB28;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_00491FC0
// @summary MSVC scalar deleting destructor: calls sub_00491A90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00491FC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00491A90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_0049EB50(void* self);

// [0x004947D0] sub_004947D0 (11 bytes)
// @name sub_004947D0
// @summary Destructor tail-call: restores vtable mem_0093EB28 and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_004947D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093EB28;
    ext_0065C660(self);
}

// [0x00496F00] sub_00496F00 (9 bytes)
// @name sub_00496F00
// @summary This-adjustor thunk: adjusts `this` by +0x4C and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00496F00(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x4C);
}

// [0x0049ED30] sub_0049ED30 (11 bytes)
// @name sub_0049ED30
// @summary This-adjustor thunk: adjusts `this` by +0xC4 and tail-calls sub_0049EB50.
extern "C" void __fastcall fn_0049ED30(void* self) {
    ext_0049EB50(static_cast<char*>(self) + 0xC4);
}

// [0x00492540]
namespace lift_00492540 {
// @name isFieldZero
// @summary Returns true if the 32-bit value at offset 0 of the object is zero.
// @field Object +0x00 uint32_t field_0x00
bool __thiscall fn_00492540(void* self) {
    return *reinterpret_cast<const uint32_t*>(self) == 0;
}
} // namespace lift_00492540

// [0x00494060]
namespace lift_00494060 {
// @name sub_00494060
// @summary XORs a 32-bit value at [ecx] with the first stack argument.
void __thiscall sub_00494060(void* self, uint32_t mask)
{
    *reinterpret_cast<uint32_t*>(self) ^= mask;
}
} // namespace lift_00494060
