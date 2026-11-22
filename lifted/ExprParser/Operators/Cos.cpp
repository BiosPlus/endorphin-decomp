// Lifted C++ translation unit: lifted/ExprParser/Operators/Cos.cpp
#include "lift_compat.h"

// [0x006A19D0]
// @name ExprParser::Operators::Cos::vfunc_3
// @class ExprParser::Operators::Cos
// @summary Evaluates unary operand via vfunc_1, applies cos, and stores result via vfunc_7
#include "lift_compat.h"
#include <cmath>

void __thiscall fn_006A19D0(void* self, void* ctx) {
    (void)self;
    void* target = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 4);
    void** vt1 = *reinterpret_cast<void***>(target);
    using EvalFn = double(__thiscall*)(void*, void*);
    double val = reinterpret_cast<EvalFn>(vt1[1])(target, ctx);

    float res = static_cast<float>(std::cos(val));

    target = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 4);
    void** vt2 = *reinterpret_cast<void***>(target);
    using StoreFn = void(__thiscall*)(void*, void*, float);
    reinterpret_cast<StoreFn>(vt2[7])(target, ctx, res);
}
