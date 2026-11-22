// Lifted C++ translation unit: lifted/ExprParser/Operators/VectorConstructor.cpp
#include "lift_compat.h"
namespace {
// Operand evaluation: child->vfunc_1(operand) returns a float.
using OperandEvalFn = float (*)(void* self, void* operand);
// Vector sink: child->vfunc_11(operand, float* out) writes the built vector.
using VectorSinkFn = void (*)(void* self, void* operand, float* out);
inline void* vtable_slot(void* obj, size_t slot) {
    void** vtable = *reinterpret_cast<void***>(obj);
    return vtable[slot];
}
}  // namespace

// [0x006A0A50] ExprParser::Operators::VectorConstructor::vfunc_3 (100 bytes)
// @name ExprParser::Operators::VectorConstructor::vfunc_3
// @class ExprParser::Operators::VectorConstructor
// @summary Evaluates three operand tokens (arg3, arg2, arg1 in that order) through their sub-object vtable slot 1, packs them as floats {arg1, arg2, arg3}, and passes the array to arg1's sub-object vtable slot 11.
// @field ExprParser::ExprToken +0x04 void* field_0x04
void fn_006A0A50(void* arg1, void* arg2, void* arg3) {
    // Evaluate in original call order: arg3, then arg2, then arg1.
    void* const sub3 = lift_field<void*>(arg3, 0x04);
    const float v3 = reinterpret_cast<OperandEvalFn>(vtable_slot(sub3, 1))(sub3, arg3);

    void* const sub2 = lift_field<void*>(arg2, 0x04);
    const float v2 = reinterpret_cast<OperandEvalFn>(vtable_slot(sub2, 1))(sub2, arg2);

    void* const sub1 = lift_field<void*>(arg1, 0x04);
    const float v1 = reinterpret_cast<OperandEvalFn>(vtable_slot(sub1, 1))(sub1, arg1);

    // Packed vector layout: out[0] = arg1, out[1] = arg2, out[2] = arg3.
    float out[3] = {v1, v2, v3};

    reinterpret_cast<VectorSinkFn>(vtable_slot(sub1, 11))(sub1, arg1, out);
}
