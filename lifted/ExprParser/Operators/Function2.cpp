// Lifted C++ translation unit: lifted/ExprParser/Operators/Function2.cpp
#include "lift_compat.h"

// [0x006A1630]
namespace lift_006A1630 {
// @name ExprParser::Operators::Function2::vfunc_3
// @class ExprParser::Operators::Function2
// @summary Delegates evaluation to field_0x04->vfunc(0xC4), passes result to sub_0041CF50, and cleans up the temporary object.
// @field ExprParser::Operators::Function2 +0x04 void* field_0x04

extern uint32_t __thiscall ext_0041CF50(uintptr_t self, uintptr_t arg);

extern uint32_t __stdcall fn_006A1630(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3) {
    uintptr_t temp[2] = {0, 0};

    uintptr_t obj = *reinterpret_cast<const uintptr_t*>(arg1 + 0x4);
    uintptr_t vtable = *reinterpret_cast<const uintptr_t*>(obj);
    using VFuncC4 = uintptr_t(__thiscall*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
    auto fn_c4 = *reinterpret_cast<const VFuncC4*>(vtable + 0xC4);

    uintptr_t res = fn_c4(obj, reinterpret_cast<uintptr_t>(temp), arg1, arg2, arg3);
    ext_0041CF50(arg1, res);

    uintptr_t guard = temp[1];
    if (guard != 0) {
        uintptr_t guard_vtable = *reinterpret_cast<const uintptr_t*>(guard);
        using VFunc78 = void(__thiscall*)(uintptr_t, uintptr_t);
        auto fn_78 = *reinterpret_cast<const VFunc78*>(guard_vtable + 0x78);
        fn_78(guard, reinterpret_cast<uintptr_t>(temp));
    }

    return 0;
}
} // namespace lift_006A1630
