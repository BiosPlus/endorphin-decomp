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
extern "C" void ext_0064DDE0(void* self, uint32_t value);
extern "C" void ext_00594080(void* self, float value);
extern "C" void* ext_0064F8E0(void* self, float value);

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

// [0x0064F790] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Evaluates an NM::Vector3 const& address from the source value via its type vtable slot +0x14 and calls SkeletalJoint::setDriveAngularVel (ext_0064DDE0) on the target joint.
// @field TargetWrapper +0x00 void* field_0x00
// @field ValueWrapper +0x04 void* field_0x04
void __thiscall fn_0064F790(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0064DDE0(target, value);
}

// [0x00594470] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<World, float, setGravity>::vfunc_41
// @class ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>
// @summary Reads the target World from a1, evaluates a float from a2's reader via its vtable slot 1, and forwards it to the setGravity setter ext_00594080.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void __stdcall fn_00594470(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00594080(target, value);
}

// [0x005F35D0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: EffectorGroup::vcall{92}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorGroup, float, vcall92>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{92, {flat}}>
// @summary Fetches a float from the second argument's sub-object via its vtable slot 1, then forwards it to the thunk ext_0064F8E0 on the object held by the first argument; returns that thunk's result (stdcall, 8 bytes of args).
// @field Unknown +0x00 void* field_0x00            (arg1: loaded to obtain the forwarding "this")
// @field Unknown +0x04 void* field_0x04            (arg2: sub-object pointer read at +0x4)
// @field Unknown +0x00 void** vtable               (sub-object's vtable pointer)
// @field Unknown +0x04 void* vtable_slot1          (vtable slot 1 = offset +0x4, called with the sub-object as this)
void* fn_005F35D0(void* arg1, void* arg2) {
    // esi = *(void**)arg1
    void* self = *reinterpret_cast<void**>(arg1);

    // ecx = ((void**)arg2)[1]
    void* sub = reinterpret_cast<void**>(arg2)[1];

    // edx = *(void**)sub; call [edx + 4] with ecx = sub and arg2 pushed as the stack argument
    void** vtable = *reinterpret_cast<void***>(sub);
    using SlotFn = float (*)(void* thisPtr, void* stackArg);
    SlotFn slot = reinterpret_cast<SlotFn>(vtable[1]);
    float value = slot(sub, arg2);

    // Forward: ecx = self, stack arg = value (float); result passed through.
    return ext_0064F8E0(self, value);
}
