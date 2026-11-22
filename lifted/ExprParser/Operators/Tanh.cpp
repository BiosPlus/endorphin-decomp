// Lifted C++ translation unit: lifted/ExprParser/Operators/Tanh.cpp
#include "lift_compat.h"
#include <cmath>
// Known callee 0x006A73DE: thunk_MSVCR80__CItanh (IAT jump thunk forwarding to MSVCR80!_CItanh.)
// The lift uses std::tanh directly, so this extern is kept only for reference.
extern "C" void ext_006A73DE();

// [0x006A1C90] ExprParser::Operators::Tanh::vfunc_3 (56 bytes)
// @name ExprParser::Operators::Tanh::vfunc_3
// @class ExprParser::Operators::Tanh
// @summary Evaluates the operand via its vfunc_1, applies tanh (float-rounded), and passes the result to the operand's vfunc_7.
// @field ExprParser::Operators::Tanh +0x04 void* operand
void fn_006A1C90(void* self) {
    void* operand = lift_field<void*>(self, 0x04);
    void** vtbl = *reinterpret_cast<void***>(operand);

    using EvalFn = float (*)(void* thisp, void* ctx);
    using ApplyFn = void (*)(void* thisp, void* ctx, float value);

    float v = reinterpret_cast<EvalFn>(vtbl[1])(operand, self);
    float r = static_cast<float>(std::tanh(static_cast<double>(v)));
    reinterpret_cast<ApplyFn>(vtbl[7])(operand, self, r);
}
