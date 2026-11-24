// Lifted C++ translation unit: lifted/leaf/decompiled_660000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0066A760] sub_0066A760 (10 bytes)
namespace lift_0066A760 {
// @name sub_0066A760
// @summary Auto-lifted identical-shape clone of 0x0046FAC0 (sub_0046FAC0).
namespace lift_0046FAC0 {
// @name sub_0046FAC0
// @summary Loads the 32-bit value at [ecx+0x00] and passes it to thunk_MFC80_ord_764.
// @field unknown +0x00 uint32_t field_0x00


extern void ext_006A6118(uint32_t arg);

void __thiscall fn_0066A760(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(self);
    ext_006A6118(val);
}
} // namespace lift_0046FAC0
} // namespace lift_0066A760

// [0x00661840] sub_00661840 (32 bytes)
namespace lift_00661840 {
// @name Unknown::CallSubobjectVirtualSlot2
// @class Unknown
// @summary Forwards (arg1, this+4, arg2) to virtual slot 2 of the object pointed to by this+0, then returns arg1.
// @field Unknown +0x00 void* field_0x00

// Stdcall target taking three pointer-sized arguments (callee pops them).
typedef void* (__stdcall* VirtualSlot2Fn)(void* a, void* b, void* c);

void* __thiscall fn_00661840(void* self, void* arg1, void* arg2) {
    // mov ecx, [this]         -> subobject pointer
    void* subobject = *static_cast<void**>(self);
    // mov edx, [subobject]    -> vtable of subobject
    void* vtable = *static_cast<void**>(subobject);
    // mov eax, [vtable + 8]   -> slot 2
    void* slot2 = *reinterpret_cast<void**>(static_cast<char*>(vtable) + 8);
    // push arg2; push (this + 4); push arg1; call slot2
    reinterpret_cast<VirtualSlot2Fn>(slot2)(arg1, static_cast<char*>(self) + 4, arg2);
    // mov eax, arg1; ret 8
    return arg1;
}
} // namespace lift_00661840
