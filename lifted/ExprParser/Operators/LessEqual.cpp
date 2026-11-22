// Lifted C++ translation unit: lifted/ExprParser/Operators/LessEqual.cpp
#include "lift_compat.h"
// Virtual-call helpers: vtable slot N lives at byte offset N * sizeof(void*).
// On 32-bit targets __thiscall passes `self` in ECX; the compat header maps it to nothing elsewhere.
namespace {
using FloatArgMethod = float (__thiscall*)(void* self, void* arg);
using BoolArgMethod = void (__thiscall*)(void* self, void* arg, uint32_t value);
inline void* vtable_slot(void* object, size_t slot) {
    void** vtable = *static_cast<void***>(object);
    return vtable[slot];
}
}  // namespace

// [0x006A0940] ExprParser::Operators::LessEqual::vfunc_3 (90 bytes)
// @name ExprParser::Operators::LessEqual::vfunc_3
// @class ExprParser::Operators::LessEqual
// @summary Stdcall (ret 8) less-or-equal evaluator: reads a float from each operand (vslot 1 on arg1->+0x04 and arg2->+0x04), computes a <= b with unordered operands yielding false, and passes the boolean result to arg1->+0x04's vslot 9 method.
// @field ExprParser::Operators::BinaryOperator +0x04 void* field_0x04
extern "C" void __stdcall fn_006A0940(void* arg1, void* arg2) {
    void* left = lift_field<void*>(arg1, 0x04);
    const float lhs = reinterpret_cast<FloatArgMethod>(vtable_slot(left, 1))(left, arg1);

    void* right = lift_field<void*>(arg2, 0x04);
    const float rhs = reinterpret_cast<FloatArgMethod>(vtable_slot(right, 1))(right, arg2);

    // Original x87 sequence: result is false when rhs < lhs or the comparison is unordered (NaN).
    const bool less_or_equal = !(std::isunordered(lhs, rhs) || rhs < lhs);

    void* target = lift_field<void*>(arg1, 0x04);
    reinterpret_cast<BoolArgMethod>(vtable_slot(target, 9))(target, arg1, less_or_equal ? 1u : 0u);
}
