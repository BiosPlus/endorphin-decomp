// Lifted C++ translation unit: lifted/ExprParser/Operators/Min.cpp
#include "lift_compat.h"

// [0x006A1380] ExprParser::Operators::Min::vfunc_3 (85 bytes)
// @name ExprParser::Operators::Min::vfunc_3
// @class ExprParser::Operators::Min
// @summary Evaluates the right operand (arg2 +0x04) then the left operand (self +0x04) via slot 1, keeps the smaller value (ties and NaN keep the left value), and forwards it to the left operand's slot 7 with self.
// @field ExprParser::Operators::Min +0x04 void* field_0x04

// Slot 1 (offset 0x04): evaluate operand, receiver and context passed as arguments.
typedef float (*EvalSlot1Fn)(void* self, void* ctx);
// Slot 7 (offset 0x1C): receiver, context, and the computed float value.
typedef uint32_t (*ApplySlot7Fn)(void* self, void* ctx, float value);

uint32_t fn_006A1380(void* self, void* arg2) {
    // right = arg2->field_0x04; rightValue = right->slot1(arg2)
    void* right = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg2) + 0x04);
    void** rightVtbl = *reinterpret_cast<void***>(right);
    float rightValue = reinterpret_cast<EvalSlot1Fn>(rightVtbl[1])(right, arg2);

    // left = self->field_0x04; leftValue = left->slot1(self)
    void* left = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    void** leftVtbl = *reinterpret_cast<void***>(left);
    float leftValue = reinterpret_cast<EvalSlot1Fn>(leftVtbl[1])(left, self);

    // Keep the smaller value; on ties or unordered (NaN) keep leftValue.
    float result = (leftValue > rightValue) ? rightValue : leftValue;

    // return left->slot7(self, result)  (callee's eax is passed through)
    return reinterpret_cast<ApplySlot7Fn>(leftVtbl[7])(left, self, result);
}
