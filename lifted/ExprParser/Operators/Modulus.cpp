// Lifted C++ translation unit: lifted/ExprParser/Operators/Modulus.cpp
#include "lift_compat.h"

// [0x006A1240]
// @name ExprParser::Operators::Modulus::vfunc_3
// @class ExprParser::Operators::Modulus
// @summary Evaluates den (second arg) via its child's vfn1; if that is zero, returns child_of_num.vfn7(num, 0); otherwise computes fmod(child_of_num.vfn1(num), den_value) and passes the remainder to the same vfn7 call.
// @field Unknown +0x04 void* field_0x04

#include "lift_compat.h"

#include <cmath>

float __stdcall fn_006A1240(void* num, void* den) {
    using VFnEval = float (__thiscall*)(void*, void*);
    using VFnApply = float (__thiscall*)(void*, void*, float);

    // Divisor value: child(den)->vfn1(den).
    void* denChild = lift_field<void*>(den, 4);
    void** denVtbl = *reinterpret_cast<void***>(denChild);
    float divisor = reinterpret_cast<VFnEval>(denVtbl[1])(denChild, den);

    // Zero divisor (NaN is not treated as zero): pass the divisor value through unchanged.
    if (divisor == 0.0f) {
        void* applyChild = lift_field<void*>(num, 4);
        void** applyVtbl = *reinterpret_cast<void***>(applyChild);
        return reinterpret_cast<VFnApply>(applyVtbl[7])(applyChild, num, divisor);
    }

    // Dividend value: child(num)->vfn1(num); remainder = fmod(dividend, divisor).
    void* numChild = lift_field<void*>(num, 4);
    void** numVtbl = *reinterpret_cast<void***>(numChild);
    float dividend = reinterpret_cast<VFnEval>(numVtbl[1])(numChild, num);
    float remainder = std::fmod(dividend, divisor);

    // Tail call: child(num)->vfn7(num, remainder).
    void* applyChild = lift_field<void*>(num, 4);
    void** applyVtbl = *reinterpret_cast<void***>(applyChild);
    return reinterpret_cast<VFnApply>(applyVtbl[7])(applyChild, num, remainder);
}
