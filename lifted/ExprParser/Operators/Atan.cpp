// Lifted C++ translation unit: lifted/ExprParser/Operators/Atan.cpp
#include "lift_compat.h"

// [0x006A18D0]
// @name ExprParser::Operators::Atan::vfunc_3
// @class ExprParser::Operators::Atan
// @summary Evaluates unary operand via vfunc_1, applies atan, and stores result via vfunc_7
#include "lift_compat.h"
#include <cmath>

void __thiscall fn_006A18D0(void* self, void* ctx) {
    (void)self;
    void* target = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 4);
    void** vt1 = *reinterpret_cast<void***>(target);
    using EvalFn = double(__thiscall*)(void*, void*);
    double val = reinterpret_cast<EvalFn>(vt1[1])(target, ctx);

    float res = static_cast<float>(std::atan(val));

    target = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 4);
    void** vt2 = *reinterpret_cast<void***>(target);
    using StoreFn = void(__thiscall*)(void*, void*, float);
    reinterpret_cast<StoreFn>(vt2[7])(target, ctx, res);
}
