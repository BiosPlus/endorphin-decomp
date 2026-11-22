// Lifted C++ translation unit: lifted/ExprParser/Operators/Asin.cpp
#include "lift_compat.h"

// [0x006A1860]
// @name ExprParser::Operators::Asin::vfunc_3
// @class ExprParser::Operators::Asin
// @summary Evaluates the unary operand via vfunc_1, clamps it to [-1, 1], applies asin, and stores the result via vfunc_7.
// @field ExprParser::Operators::Asin +0x04 void* field_0x04

#include "lift_compat.h"
#include <cmath>

void __thiscall fn_006A1860(void* self, void* ctx) {
    (void)self;
    void* target = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 4);
    void** vt1 = *reinterpret_cast<void***>(target);
    using EvalFn = float(__thiscall*)(void*, void*);
    float val = reinterpret_cast<EvalFn>(vt1[1])(target, ctx);

    if (val > 1.0f) {
        val = 1.0f;
    } else if (val < -1.0f) {
        val = -1.0f;
    }
    float res = static_cast<float>(std::asin(val));

    target = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 4);
    void** vt2 = *reinterpret_cast<void***>(target);
    using StoreFn = void(__thiscall*)(void*, void*, float);
    reinterpret_cast<StoreFn>(vt2[7])(target, ctx, res);
}
