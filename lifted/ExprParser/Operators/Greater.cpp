// Lifted C++ translation unit: lifted/ExprParser/Operators/Greater.cpp
#include "lift_compat.h"

// [0x006A0800] ExprParser::Operators::Greater::vfunc_3 (90 bytes)
// @name ExprParser::Operators::Greater::vfunc_3
// @class ExprParser::Operators::Greater
// @summary Evaluates both operands via their vtable slot +0x04, compares them (left > right), and forwards the boolean result through the left operand's vtable slot +0x24.
// @field ExprParser::Operators::Greater +0x04 void* field_0x04

namespace {

// Virtual-slot signatures as observed in the disassembly.
using EvalFloatFn = float (__thiscall*)(void* self, void* arg);
using StoreBoolFn = void (__thiscall*)(void* self, void* owner, unsigned char value);

inline void** vtable_of(void* obj) {
    return *reinterpret_cast<void***>(obj);
}

inline void* child_at_4(void* obj) {
    return *reinterpret_cast<void**>(static_cast<unsigned char*>(obj) + 0x04);
}

} // namespace

// Stack args: (self = Greater node, ctx = evaluation context). Callee-cleans (ret 8).
void fn_006A0800(void* self, void* ctx) {
    // Left operand: child of self at +0x04; evaluate it with self as argument.
    void* left = child_at_4(self);
    float left_val = reinterpret_cast<EvalFloatFn>(vtable_of(left)[1])(left, self);

    // Right operand: child of ctx at +0x04; evaluate it with ctx as argument.
    void* right = child_at_4(ctx);
    float right_val = reinterpret_cast<EvalFloatFn>(vtable_of(right)[1])(right, ctx);

    // Original compares right against left (promoted to double); result is left > right.
    // NaN/unordered yields false, matching the x87 fcomp + parity check.
    unsigned char result = (static_cast<double>(left_val) > static_cast<double>(right_val)) ? 1 : 0;

    // Forward the result to the left operand's vtable slot +0x24.
    void* left_again = child_at_4(self);
    reinterpret_cast<StoreBoolFn>(vtable_of(left_again)[9])(left_again, self, result);
}
