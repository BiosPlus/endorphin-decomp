// Lifted C++ translation unit: lifted/ExprParser/Operators/Less.cpp
#include "lift_compat.h"
using FloatEvalFn = float (*)(void* thisp, void* arg);
using BoolApplyFn = DWORD (*)(void* thisp, void* arg, DWORD flag);
static inline void* lift_vslot(void* obj, size_t index) {
    void** vtable = *reinterpret_cast<void***>(obj);
    return vtable[index];
}

// [0x006A08E0]
// @name ExprParser::Operators::Less::vfunc_3
// @class ExprParser::Operators::Less
// @summary Evaluates both operands via vtable slot 1, computes lhs < rhs, and forwards the boolean through the lhs vtable slot 9.
// @field ExprParser::Operators::Less +0x04 void* field_0x04
DWORD fn_006A08E0(void* self, void* ctx) {
    void* lhs = lift_field<void*>(self, 0x04);
    float lhsValue = reinterpret_cast<FloatEvalFn>(lift_vslot(lhs, 1))(lhs, self);

    void* rhs = lift_field<void*>(ctx, 0x04);
    float rhsValue = reinterpret_cast<FloatEvalFn>(lift_vslot(rhs, 1))(rhs, ctx);

    // NaN compares false, matching the x87 fcomp/fnstsw test of C0|C3 in the original.
    BYTE isLess = (rhsValue > lhsValue) ? 1 : 0;

    return reinterpret_cast<BoolApplyFn>(lift_vslot(lhs, 9))(lhs, self, static_cast<DWORD>(isLess));
}
