// Lifted C++ translation unit: lifted/ExprParser/Operators/Exp.cpp
#include "lift_compat.h"
#include <cmath>

// [0x006A1A50] ExprParser::Operators::Exp::vfunc_3 (56 bytes)
// @name ExprParser::Operators::Exp::vfunc_3
// @class ExprParser::Operators::Exp
// @summary Evaluates the operand via its vfunc_1, applies exp (float-rounded), and passes the result to the operand's vfunc_7.
// @field ExprParser::Operators::Exp +0x04 void* operand
void fn_006A1A50(void* self) {
    void* operand = lift_field<void*>(self, 0x04);
    void** vtbl = *reinterpret_cast<void***>(operand);

    using EvalFn = float (*)(void* thisp, void* ctx);
    using ApplyFn = void (*)(void* thisp, void* ctx, float value);

    float v = reinterpret_cast<EvalFn>(vtbl[1])(operand, self);
    float r = static_cast<float>(std::exp(static_cast<double>(v)));
    reinterpret_cast<ApplyFn>(vtbl[7])(operand, self, r);
}
