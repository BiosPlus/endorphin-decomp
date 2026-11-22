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
extern "C" void ext_00486C10(void* self, float value);
extern "C" void ext_0048ABD0(void* self, float value);
extern "C" void ext_004FDC80(void* self, float value);
extern "C" void ext_005C3030(void* self, uint32_t value);
extern "C" void ext_005C3090(void* self, uint32_t value);
extern "C" void ext_005F4480(void* self, float value);
extern "C" void ext_005F4570(void* self, float value);
extern "C" void ext_005F4660(void* self, float value);
extern "C" void ext_005F4750(void* self, float value);
extern "C" void ext_006032B0(void* self, float value);
extern "C" void ext_006036C0(void* self, float value);
extern "C" void ext_00629EB0(void* self, float value);
extern "C" void ext_00629F10(void* self, float value);
extern "C" void ext_0062B0A0(void* self, float value);
extern "C" void ext_00649010(void* self, float value);
extern "C" void ext_00649050(void* self, float value);
extern "C" void ext_00648E40(void* self, float value);
extern "C" void ext_00648E50(void* self, float value);
extern "C" void ext_00648E60(void* self, float value);
extern "C" void ext_00648E70(void* self, float value);
extern "C" void ext_00648E80(void* self, float value);
extern "C" void ext_00648E90(void* self, float value);
extern "C" void ext_00648E00(void* self, float value);
extern "C" void ext_00648E10(void* self, float value);
extern "C" void ext_00648E20(void* self, float value);
extern "C" void ext_0064C950(void* self, float value);
extern "C" void ext_0064CB00(void* self, float value);
extern "C" void ext_0064DEE0(void* self, uint32_t value);
extern "C" void ext_0064DE80(void* self, float value);
extern "C" void ext_0064DEA0(void* self, float value);
extern "C" void ext_0064DEC0(void* self, float value);
extern "C" void ext_0064DF20(void* self, uint32_t value);
extern "C" void ext_0064DC20(void* self, float value);
extern "C" void ext_0064DC40(void* self, float value);
extern "C" void ext_0064DC60(void* self, float value);
extern "C" void ext_0064DC80(void* self, float value);
extern "C" void ext_0064DCA0(void* self, float value);
extern "C" void ext_0064DCC0(void* self, float value);
extern "C" void ext_0064DCE0(void* self, float value);
extern "C" void ext_0064DD00(void* self, float value);
extern "C" void ext_0064DD20(void* self, float value);
extern "C" void ext_0064DD40(void* self, float value);
extern "C" void ext_0064DD60(void* self, float value);
extern "C" void ext_0064DD80(void* self, float value);
extern "C" void ext_0064DDA0(void* self, float value);
extern "C" void ext_0064DDC0(void* self, float value);
extern "C" void ext_0064F900(void* self, uint32_t value);
extern "C" void ext_0064F910(void* self, float value);
extern "C" void ext_0064F930(void* self, float value);
extern "C" void ext_0064F8F0(void* self, float value);
extern "C" void ext_0064F940(void* self, float value);
extern "C" void ext_005C3640(void* self, float value);
extern "C" void ext_0067C3D0(void* self, float value);
extern "C" void ext_0067C450(void* self, float value);
extern "C" void ext_0067C4D0(void* self, float value);
extern "C" void ext_0067BA60(void* self, uint32_t value);
extern "C" void ext_0067BB00(void* self, uint32_t value);
extern "C" void ext_0067C060(void* self, uint32_t value);
// Known callee 0x006036B0: VirtualSlot28Thunk (loads the object's vtable and tail-calls slot 28 (offset +0x70) with the same this pointer; the callee's result is passed through in eax).
// Called as thiscall: ecx = this, one float stack argument; result returned in eax.
extern "C" uint32_t ext_006036B0(void* self, float value);

// Called as thiscall: ecx = this, one float stack argument; result returned in eax.
extern "C" uint32_t ext_006036B0(void* self, float value);
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
extern "C" void __thiscall ext_00648E30(void* self, bool value);

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

// [0x00487420] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00487420(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00486C10(target, value);
}

// [0x0048AD50] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0048AD50(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0048ABD0(target, value);
}

// [0x004FE0C0] ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_004FE0C0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_004FDC80(target, value);
}

// [0x005C33E0] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_005C33E0(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_005C3030(target, value);
}

// [0x005C3520] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_005C3520(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_005C3090(target, value);
}

// [0x005F4930] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_005F4930(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_005F4480(target, value);
}

// [0x005F49E0] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_005F49E0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_005F4570(target, value);
}

// [0x005F4A90] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_005F4A90(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_005F4660(target, value);
}

// [0x005F4B40] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_005F4B40(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_005F4750(target, value);
}

// [0x00603500] ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>::vfunc_41
// @class ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00603500(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_006032B0(target, value);
}

// [0x00605390] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_41
// @class ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00605390(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_006036C0(target, value);
}

// [0x00629F40] ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_41
// @class ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00629F40(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00629EB0(target, value);
}

// [0x00629FF0] ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_41
// @class ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00629FF0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00629F10(target, value);
}

// [0x0062B140] ExprParser::WriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>::vfunc_41
// @class ExprParser::WriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0062B140(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0062B0A0(target, value);
}

// [0x006490F0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_006490F0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00649010(target, value);
}

// [0x00649120] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649120(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00649050(target, value);
}

// [0x006491D0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_006491D0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E40(target, value);
}

// [0x00649280] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649280(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E50(target, value);
}

// [0x00649330] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649330(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E60(target, value);
}

// [0x006493E0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_006493E0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E70(target, value);
}

// [0x00649490] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649490(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E80(target, value);
}

// [0x00649540] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649540(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E90(target, value);
}

// [0x00649B40] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisX(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisX(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649B40(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E00(target, value);
}

// [0x00649BF0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisY(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisY(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649BF0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E10(target, value);
}

// [0x00649CA0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00649CA0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_00648E20(target, value);
}

// [0x0064CA50] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064CA50(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064C950(target, value);
}

// [0x0064CB60] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064CB60(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064CB00(target, value);
}

// [0x0064EA80] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0064EA80(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0064DEE0(target, value);
}

// [0x0064EB20] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EB20(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DE80(target, value);
}

// [0x0064EBD0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EBD0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DEA0(target, value);
}

// [0x0064EC80] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EC80(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DEC0(target, value);
}

// [0x0064ED30] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0064ED30(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0064DF20(target, value);
}

// [0x0064EDD0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EDD0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DC20(target, value);
}

// [0x0064EE80] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EE80(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DC40(target, value);
}

// [0x0064EF30] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EF30(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DC60(target, value);
}

// [0x0064EFE0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064EFE0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DC80(target, value);
}

// [0x0064F090] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadius(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadius(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadius(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F090(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DCA0(target, value);
}

// [0x0064F140] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F140(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DCC0(target, value);
}

// [0x0064F210] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F210(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DCE0(target, value);
}

// [0x0064F2C0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F2C0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DD00(target, value);
}

// [0x0064F370] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F370(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DD20(target, value);
}

// [0x0064F420] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F420(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DD40(target, value);
}

// [0x0064F4D0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F4D0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DD60(target, value);
}

// [0x0064F580] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F580(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DD80(target, value);
}

// [0x0064F630] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F630(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DDA0(target, value);
}

// [0x0064F6E0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0064F6E0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064DDC0(target, value);
}

// [0x00650D80] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_00650D80(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x8 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0064F900(target, value);
}

// [0x006510F0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_006510F0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064F910(target, value);
}

// [0x006511A0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_006511A0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064F930(target, value);
}

// [0x00651250] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00651250(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064F8F0(target, value);
}

// [0x00651280] ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00651280(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0064F940(target, value);
}

// [0x00651330] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_00651330(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_005C3640(target, value);
}

// [0x0066C350] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_41
// @class ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0066C350(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0067C3D0(target, value);
}

// [0x0066C400] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_41
// @class ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0066C400(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0067C450(target, value);
}

// [0x0066C4B0] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_41
// @class ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>
// @summary Auto-lifted identical-shape clone of 0x00594520 (ExprParser::WriteMethodType<World, float, setFriction>::vfunc_41).
void __stdcall fn_0066C4B0(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* reader = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    using GetFloatFn = float (*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(reader, a2);
    ext_0067C4D0(target, value);
}

// [0x0066C560] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>::vfunc_41
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0066C560(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0067BA60(target, value);
}

// [0x0066C600] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>::vfunc_41
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0066C600(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0067BB00(target, value);
}

// [0x0066CBC0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>::vfunc_41
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F790 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0066CBC0(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0067C060(target, value);
}

// [0x00605360] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>::vfunc_41 (37 bytes)
// @name ExprParser::WriteMethodType<Effector, float, vcall112>::vfunc_41
// @class ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>
// @summary Dereferences arg1 to get the target Effector, evaluates a float from arg2's sub-object via its vtable slot 1, and forwards it to the vcall112 thunk ext_006036B0 on the target; returns that thunk's result (stdcall, 8 bytes of args).
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
uint32_t __stdcall fn_00605360(void* arg1, void* arg2) {
    // esi = *(void**)arg1  -> target object
    void* target = lift_field<void*>(arg1, 0x00);

    // ecx = ((void**)arg2)[1]  -> sub-object (reader)
    void* reader = lift_field<void*>(arg2, 0x04);

    // edx = *(void**)reader; call [edx + 4] with ecx = reader and arg2 as stack argument
    void** vtable = lift_field<void**>(reader, 0x00);
    using GetFloatFn = float(__thiscall*)(void* self, void* arg);
    auto getFloat = reinterpret_cast<GetFloatFn>(vtable[0x04 / sizeof(void*)]);
    float value = getFloat(reader, arg2);

    // Forward: ecx = target, stack arg = value (float); eax passed through.
    return ext_006036B0(target, value);
}

// [0x00649D50] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>
// @summary Extracts a bool from the source expression value via its type's vtable slot +0x0C and calls RelationshipRPROMagnet::setRotationMode (ext_00648E30) on the target object.
// @field ExprParser::Value +0x00 void* field_0x00
// @field ExprParser::Value +0x04 void* field_0x04
void __thiscall fn_00649D50(void* self, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetBoolFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getBool = reinterpret_cast<GetBoolFn>(vtable[0x0C / 4]);
    bool value = getBool(srcType, src) != 0;

    ext_00648E30(target, value);
}
