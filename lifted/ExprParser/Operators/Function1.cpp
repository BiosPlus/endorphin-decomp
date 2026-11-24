// Lifted C++ translation unit: lifted/ExprParser/Operators/Function1.cpp
#include "lift_compat.h"

// [0x006A15B0]
namespace lift_006A15B0 {
// @name ExprParser::Operators::Function1::vfunc_3
// @class ExprParser::Operators::Function1
// @summary Evaluates Function1 by invoking vfunc +0xc0 on field_0x04 and passing the result to sub_0041CF50
// @field ExprParser::Operators::Function1 +0x04 uint32_t field_0x04


extern uint32_t __thiscall ext_0041CF50(void* self, void* arg);

struct LocalHandle {
    uint32_t value;
    uint32_t owner;
};

void __stdcall fn_006A15B0(void* arg1, uint32_t arg2) {
    LocalHandle local{};
    uint32_t obj_ptr = *reinterpret_cast<const uint32_t*>(reinterpret_cast<uintptr_t>(arg1) + 0x4);
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(obj_ptr));
    auto vfunc_c0 = reinterpret_cast<LocalHandle* (__thiscall*)(void*, LocalHandle*, void*, uint32_t)>(
        *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable) + 0xc0));

    LocalHandle* res = vfunc_c0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj_ptr)), &local, arg1, arg2);
    ext_0041CF50(arg1, res);

    if (local.owner != 0) {
        uint32_t owner_vt = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(local.owner));
        auto vfunc_78 = reinterpret_cast<void (__thiscall*)(void*, uint32_t*)>(
            *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(owner_vt) + 0x78));
        vfunc_78(reinterpret_cast<void*>(static_cast<uintptr_t>(local.owner)), &local.value);
    }
}
} // namespace lift_006A15B0
