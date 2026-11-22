// Lifted C++ translation unit: lifted/ExprParser/Operators/GreaterEqual.cpp
#include "lift_compat.h"
#include <bit>

// [0x006A0860]
// @name ExprParser::Operators::GreaterEqual::vfunc_3
// @class ExprParser::Operators::GreaterEqual
// @summary Evaluates lhs >= rhs by calling vfunc_1 on both operand objects, stores the boolean result into the call frame slot, then dispatches it through vfunc_9 of the left operand.
// @field ExprParser::Operators::GreaterEqual +0x4 void* left (operand object; dispatched through vtable for both the compare and the final store)
// @field ExprParser::ExprToken +0x4 void* right (operand object read from the second argument)
void fn_006A0860(void* self, void* other) {
    // Left operand: self->+0x4, evaluated via vtable slot 1 with `self` as argument.
    void* left_obj = lift_field<void*>(self, 0x4);
    void (**left_vt)() = *reinterpret_cast<void (***)()>(left_obj);
    float lhs = reinterpret_cast<float (*)(void*, void*)>(left_vt[1])(left_obj, self);

    // Right operand: other->+0x4, evaluated via vtable slot 1 with `other` as argument.
    void* right_obj = lift_field<void*>(other, 0x4);
    void (**right_vt)() = *reinterpret_cast<void (***)()>(right_obj);
    float rhs = reinterpret_cast<float (*)(void*, void*)>(right_vt[1])(right_obj, other);

    // Ordered comparison: result is true when rhs <= lhs (equivalently lhs >= rhs).
    // NaN operands yield false, matching the x87 unordered-flag test in the original.
    bool result = (rhs <= lhs);

    // The original writes the byte result over the low byte of the float slot
    // that held `lhs`, and passes that dword to the callee. Reproduce that layout.
    uint32_t slot = std::bit_cast<uint32_t>(lhs);
    slot = (slot & 0xFFFFFF00u) | (result ? 1u : 0u);

    // Final dispatch: self->+0x4 vtable slot 9 (offset 0x24), called with (self, slot).
    void* sink_obj = lift_field<void*>(self, 0x4);
    void (**sink_vt)() = *reinterpret_cast<void (***)()>(sink_obj);
    reinterpret_cast<void (*)(void*, void*, uint32_t)>(sink_vt[9])(sink_obj, self, slot);
}
