// Lifted C++ translation unit: lifted/ExprParser/Operators/And.cpp
#include "lift_compat.h"

// [0x006A1440] ExprParser::Operators::And::vfunc_3 (69 bytes)
// @name ExprParser::Operators::And::vfunc_3
// @class ExprParser::Operators::And
// @summary Short-circuit AND: tests the left operand (vtable +0x0C) against this, tests the right operand against arg only if the left passed, then forwards the boolean result to this's operand vtable +0x24.
// @field ExprParser::Operators::And +0x04 void* field_04
// @field ExprParser::ExprToken +0x04 void* field_04
void __stdcall fn_006A1440(void* a1, void* a2) {
    using PredFn = uint8_t (*)(void* self, void* ctx);
    using ApplyFn = void (*)(void* self, void* ctx, uint32_t result);

    // Left operand test: operand->vtbl[+0x0C](operand, this)
    void* lhs = lift_field<void*>(a1, 0x04);
    void* lhsVtbl = lift_field<void*>(lhs, 0x00);
    uint8_t lhsOk = reinterpret_cast<PredFn>(lift_field<void*>(lhsVtbl, 0x0C))(lhs, a1);

    uint32_t result = 0;
    if (lhsOk != 0) {
        // Right operand test: arg->field_04->vtbl[+0x0C](operand, arg)
        void* rhs = lift_field<void*>(a2, 0x04);
        void* rhsVtbl = lift_field<void*>(rhs, 0x00);
        uint8_t rhsOk = reinterpret_cast<PredFn>(lift_field<void*>(rhsVtbl, 0x0C))(rhs, a2);
        result = (rhsOk != 0) ? 1u : 0u;
    }

    // Forward result: this->field_04->vtbl[+0x24](operand, this, result)
    void* self = lift_field<void*>(a1, 0x04);
    void* selfVtbl = lift_field<void*>(self, 0x00);
    reinterpret_cast<ApplyFn>(lift_field<void*>(selfVtbl, 0x24))(self, a1, result);
}
