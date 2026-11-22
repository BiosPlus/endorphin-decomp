// Lifted C++ translation unit: lifted/ExprParser/Operators/Max.cpp
#include "lift_compat.h"
namespace {
// Vtable slot signatures as used by the original call sites.
using OperandEvalFn = float (*)(void* self, void* operand);
using OperandApplyFn = float (*)(void* self, void* operand, float value);
inline void* vtable_slot(void* obj, size_t slot) {
    void** vtable = *reinterpret_cast<void***>(obj);
    return vtable[slot];
}
}  // namespace

// [0x006A13E0] ExprParser::Operators::Max::vfunc_3 (85 bytes)
// @name ExprParser::Operators::Max::vfunc_3
// @class ExprParser::Operators::Max
// @summary Evaluates both operands through their sub-object vtable slot 1, takes the larger value, and passes it to the lhs sub-object's vtable slot 7.
// @field ExprParser::ExprToken +0x04 void* field_0x04
float fn_006A13E0(void* self, void* lhs, void* rhs) {
    (void)self;

    void* const lhsSub = lift_field<void*>(lhs, 0x04);
    void* const rhsSub = lift_field<void*>(rhs, 0x04);

    // Evaluate rhs first, then lhs (matches original call order).
    const float rhsValue = reinterpret_cast<OperandEvalFn>(vtable_slot(rhsSub, 1))(rhsSub, rhs);
    const float lhsValue = reinterpret_cast<OperandEvalFn>(vtable_slot(lhsSub, 1))(lhsSub, lhs);

    // Keep rhs only when strictly greater; NaN or equal falls back to lhs value.
    const float maxValue = (rhsValue > lhsValue) ? rhsValue : lhsValue;

    return reinterpret_cast<OperandApplyFn>(vtable_slot(lhsSub, 7))(lhsSub, lhs, maxValue);
}
