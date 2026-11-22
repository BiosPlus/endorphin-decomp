// Lifted C++ translation unit: lifted/templates/WriteMethodType.cpp
#include "lift_compat.h"
// Known callee 0x006036A0: VirtualSlot20Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.)
extern "C" void ext_006036A0(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Fn = uint32_t (*)(void* self, void* arg);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}

// [0x00604C40] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>::vfunc_41 (34 bytes)
// @name WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>
// @summary Reads the target object from self, computes the value via arg's sub-object vtable slot 6, and forwards both to ext_006036A0.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_00604C40(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x18 / 4, arg);
    ext_006036A0(target, value);
}
