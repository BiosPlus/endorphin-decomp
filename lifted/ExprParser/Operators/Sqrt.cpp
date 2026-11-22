// Lifted C++ translation unit: lifted/ExprParser/Operators/Sqrt.cpp
#include "lift_compat.h"
#include <cmath>

// [0x006A1C10] ExprParser::Operators::Sqrt::vfunc_3 (56 bytes)
// @name ExprParser::Operators::Sqrt::vfunc_3
// @class ExprParser::Operators::Sqrt
// @summary Stdcall (ret 4, ECX unused): evaluates the operand at self+0x04 via its vslot 1, takes the square root (computed in double, rounded back to float), and passes the result to the operand's vslot 7 along with self; returns that slot's eax.
// @field ExprParser::Operators::Sqrt +0x04 void* field_0x04

// Original: push esi; mov esi,[esp+8]; mov ecx,[esi+4]; mov eax,[ecx]; mov edx,[eax+4];
//           push esi; call edx; call _CIsqrt; fstp [esp+8]; fld [esp+8];
//           mov ecx,[esi+4]; mov eax,[ecx]; fstp [esp+8]; fld [esp+8];
//           mov edx,[eax+0x1c]; push ecx; fstp [esp]; push esi; call edx; pop esi; ret 4
uint32_t fn_006A1C10(void* self) {
    void* operand = lift_field<void*>(self, 0x04);                       // self +0x04
    void** vtable = *reinterpret_cast<void***>(operand);                 // operand +0x00 (vptr)

    // vslot 1 (+0x04): thiscall(operand), arg = self, returns float in st0.
    using EvalFn = float (*)(void* thisp, void* arg);
    auto eval = reinterpret_cast<EvalFn>(vtable[1]);
    float value = eval(operand, self);

    // CRT _CIsqrt on the x87 stack (double precision), result rounded to float.
    float root = static_cast<float>(std::sqrt(static_cast<double>(value)));

    // vslot 7 (+0x1C): thiscall(operand), args = (self, root); eax is returned.
    using ApplyFn = uint32_t (*)(void* thisp, void* arg, float v);
    auto apply = reinterpret_cast<ApplyFn>(vtable[0x1c / sizeof(void*)]);
    return apply(operand, self, root);
}
