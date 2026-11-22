// Lifted C++ translation unit: lifted/ExprParser/Operators/Or.cpp
#include "lift_compat.h"

// [0x006A0A00] ExprParser::Operators::Or::vfunc_3 (69 bytes)
// @name ExprParser::Operators::Or::vfunc_3
// @class ExprParser::Operators::Or
// @summary Evaluates the left operand's slot 3 against self; if false, evaluates slot 3 of arg2's +0x04 object against arg2, then forwards the resulting bool to the left operand's slot 9.
// @field ExprParser::Operators::Or +0x04 void* field_0x04

// Virtual slot 3 (offset 0x0C): receiver passed as first argument (portable model
// of the __thiscall ecx = receiver convention used across lifted/ExprParser).
typedef uint8_t (*BoolSlot3Fn)(void* self, void* arg);
// Virtual slot 9 (offset 0x24): receiver, arg, and the computed bool.
typedef uint32_t (*Slot9Fn)(void* self, void* arg, uint8_t flag);

uint32_t fn_006A0A00(void* self, void* arg2) {
    // left = [self + 0x04]
    void* left = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    void** leftVtbl = *reinterpret_cast<void***>(left);

    // if (left->slot3(self)) result = true
    uint8_t result;
    if (reinterpret_cast<BoolSlot3Fn>(leftVtbl[3])(left, self) != 0) {
        result = 1;
    } else {
        // inner = [arg2 + 0x04]; result = (inner->slot3(arg2) != 0)
        void* inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg2) + 0x04);
        void** innerVtbl = *reinterpret_cast<void***>(inner);
        result = (reinterpret_cast<BoolSlot3Fn>(innerVtbl[3])(inner, arg2) != 0) ? 1 : 0;
    }

    // return left->slot9(self, result)  (eax of the callee is returned as-is)
    return reinterpret_cast<Slot9Fn>(leftVtbl[9])(left, self, result);
}
