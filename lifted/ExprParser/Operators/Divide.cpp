// Lifted C++ translation unit: lifted/ExprParser/Operators/Divide.cpp
#include "lift_compat.h"

// [0x006A1540] ExprParser::Operators::Divide::vfunc_3 (103 bytes)
// @name ExprParser::Operators::Divide::vfunc_3
// @class ExprParser::Operators::Divide
// @summary Evaluates den (second arg) via its child's vfn1; if that is zero or NaN, returns child_of_num.vfn7(num, den_value); otherwise divides num's child vfn1 result by den_value before the same vfn7 call.
// @field Unknown +0x04 void* field_0x04
float __stdcall fn_006A1540(void* num, void* den) {
    using VFnEval = float (__thiscall*)(void*, void*);
    using VFnApply = float (__thiscall*)(void*, void*, float);

    // Denominator value: child(den)->vfn1(den).
    void* denChild = lift_field<void*>(den, 4);
    void** denVtbl = *reinterpret_cast<void***>(denChild);
    float value = reinterpret_cast<VFnEval>(denVtbl[1])(denChild, den);

    // Zero or NaN denominator: pass the denominator value through unchanged.
    // Otherwise compute numerator / denominator where numerator = child(num)->vfn1(num).
    if (value != 0.0f && !std::isnan(value)) {
        void* numChild = lift_field<void*>(num, 4);
        void** numVtbl = *reinterpret_cast<void***>(numChild);
        float numerator = reinterpret_cast<VFnEval>(numVtbl[1])(numChild, num);
        value = numerator / value;
    }

    // Tail call: child(num)->vfn7(num, value).
    void* applyChild = lift_field<void*>(num, 4);
    void** applyVtbl = *reinterpret_cast<void***>(applyChild);
    return reinterpret_cast<VFnApply>(applyVtbl[7])(applyChild, num, value);
}
