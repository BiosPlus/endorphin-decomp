// Lifted C++ translation unit: lifted/ExprParser/Operators/NotEquals.cpp
#include "lift_compat.h"

// [0x006A09C0] ExprParser::Operators::NotEquals::vfunc_3 (53 bytes)
// @name ExprParser::Operators::NotEquals::vfunc_3
// @class ExprParser::Operators::NotEquals
// @summary Evaluates the left operand (vfunc 42) on (self, ctx), negates the result, and passes it to the left operand's vfunc 9.
// Note: self is the first stack argument (esi); ecx is overwritten before use and ignored.
// @field ExprParser::Operators::NotEquals +0x04 void* field_0x04
void fn_006A09C0(void* self, void* ctx) {
    void* left = lift_field<void*>(self, 0x04);
    void* const* vtbl = *static_cast<void* const* const*>(left);

    auto eval = reinterpret_cast<uint8_t (*)(void*, void*, void*)>(vtbl[0xA8 / sizeof(void*)]);
    const uint8_t result = eval(left, self, ctx);
    const uint32_t negated = (result == 0) ? 1u : 0u;

    // The original stores the byte into the stack slot of arg1 and reads it back as a
    // dword; only the low byte (the bool) is meaningful to the callee.
    auto apply = reinterpret_cast<void (*)(void*, void*, uint32_t)>(vtbl[0x24 / sizeof(void*)]);
    apply(left, self, negated);
}
