// Lifted C++ translation unit: lifted/ExprParser/Operators/Sin.cpp
#include "lift_compat.h"
#include <cmath>

// [0x006A1B90] ExprParser::Operators::Sin::vfunc_3 (56 bytes)
// @name ExprParser::Operators::Sin::vfunc_3
// @class ExprParser::Operators::Sin
// @summary Evaluates the operand via its vfunc_1, applies sin (float-rounded), and passes the result to the operand's vfunc_7.
// @field ExprParser::Operators::Sin +0x04 void* operand
void fn_006A1B90(void* self) {
    void* operand = lift_field<void*>(self, 0x04);
    void** vtbl = *reinterpret_cast<void***>(operand);

    using EvalFn = float (*)(void* thisp, void* ctx);
    using ApplyFn = void (*)(void* thisp, void* ctx, float value);

    float v = reinterpret_cast<EvalFn>(vtbl[1])(operand, self);
    float r = static_cast<float>(std::sin(static_cast<double>(v)));
    reinterpret_cast<ApplyFn>(vtbl[7])(operand, self, r);
}
