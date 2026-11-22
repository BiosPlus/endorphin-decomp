// Lifted C++ translation unit: lifted/templates/WriteMethodType.cpp
#include "lift_compat.h"
// Known callee 0x006036A0: VirtualSlot20Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.)
extern "C" void ext_006036A0(void* self, uint32_t value);
// Callee 0x005940A0: sub_005940A0 (22B), thiscall-style setter taking one float; forwards to World::setFriction on the inner object at +0xF8.
extern "C" void ext_005940A0(void* self, float value);

extern "C" void ext_005940A0(void* self, float value);
// @name WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>
// @summary Reads the target object from self, computes the value via arg's sub-object vtable slot 6, and forwards both to ext_006036A0.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_00604C40(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x18 / 4])(sub, arg);
    ext_006036A0(target, value);
}

// [0x00594520] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41
// @class ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>
// @summary Reads the target World from a1, evaluates a float from a2's reader via its vtable slot 1, and forwards it to the setFriction setter ext_005940A0.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void __stdcall fn_00594520(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_005940A0(target, value);
}
