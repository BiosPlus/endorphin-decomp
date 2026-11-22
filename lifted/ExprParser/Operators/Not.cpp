// Lifted C++ translation unit: lifted/ExprParser/Operators/Not.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// [0x006A16B0] ExprParser::Operators::Not::vfunc_3 (45 bytes)
// @name ExprParser::Operators::Not::vfunc_3
// @class ExprParser::Operators::Not
// @summary Evaluates the operand child via its vfunc_3, then calls the child's vfunc_9 with the logical negation of that result.
// @field ExprParser::Operators::Not +0x04 void* field_0x04
void fn_006A16B0(void* self) {
    void* child = lift_field<void*>(self, 0x04);
    const bool v = lift_vcall<bool, 3>(child, self);
    lift_vcall<void, 9>(child, self, static_cast<int32_t>(!v));
}
