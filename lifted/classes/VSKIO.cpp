// Lifted C++ translation unit: lifted/classes/VSKIO.cpp
#include "lift_compat.h"

// [0x005749C0] VSKIO::vfunc_3 (37 bytes)
namespace lift_005749C0 {
extern void* ext_00640390(void* object, const char* key, uint32_t flags);
extern void ext_00553720(void* self, void* arg);
extern const char mem_0092FE14[];

// @name VSKIO::vfunc_3
// @class VSKIO
// @summary Auto-lifted identical-shape clone of 0x005731A0 (OBJIO::vfunc_3).
void* fn_005749C0(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092FE14, 0);
    ext_00553720(self, resolved);
    return arg;
}
} // namespace lift_005749C0

// [0x005762C0] VSKIO::vfunc_14 (117 bytes)
namespace lift_005762C0 {
// Known callee 0x005760E0: sub_005760E0 (Auto-lifted identical-shape clone of 0x0041C750 (sub_0041C750).)
extern void __fastcall ext_005760E0(void* self, int edx_unused, uint32_t arg);
// Known callee 0x00574CF0: sub_00574CF0 (Destructor tail-call: restores vtable mem_0095993C and tail-calls base destructor sub_0065C660.)
extern void __fastcall ext_00574CF0(void* self);
extern int mem_00924FF0;

// @name VSKIO::vfunc_14
// @class VSKIO
// @summary Builds a temporary Unknown {vptr, this}, clears this+0x488, invokes the function stored at this+0x20 with the c_str() of the string argument, then destroys the temporary.
// @field VSKIO +0x20 void* field_0x20
// @field VSKIO +0x488 uint32_t field_0x488
void fn_005762C0(void* self, int edx_unused, void* a1) {
    (void)edx_unused;

    // Temporary helper object: {vptr, owner=this}.
    uint32_t tmp[2] = {0, 0};
    ext_005760E0(tmp, 0, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)));

    lift_field<uint32_t>(self, 0x488) = 0;

    // Indirect thiscall to std::string::c_str() on the argument (ecx = a1).
    using CStrFn = const char* (__thiscall*)(void*);
    auto c_str = *reinterpret_cast<CStrFn*>(&mem_00924FF0);
    const char* text = c_str(a1);

    // Call the function pointer stored at this+0x20 with ecx = temporary.
    using MethodFn = void (__thiscall*)(void*, const char*);
    auto method = reinterpret_cast<MethodFn>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x20)));
    method(tmp, text);

    ext_00574CF0(tmp);
}
} // namespace lift_005762C0
