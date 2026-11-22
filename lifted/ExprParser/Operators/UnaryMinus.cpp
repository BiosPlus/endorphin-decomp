// Lifted C++ translation unit: lifted/ExprParser/Operators/UnaryMinus.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// [0x006A1700] ExprParser::Operators::UnaryMinus::vfunc_3 (45 bytes)
// @name ExprParser::Operators::UnaryMinus::vfunc_3
// @class ExprParser::Operators::UnaryMinus
// @summary Evaluates the operand child via its vfunc_1, then calls the child's vfunc_7 with the negated value.
// @field ExprParser::Operators::UnaryMinus +0x04 void* field_0x04
void fn_006A1700(void* self) {
    void* child = lift_field<void*>(self, 0x04);
    const float v = lift_vcall<float, 1>(child, self);
    lift_vcall<void, 7>(child, self, -v);
}
