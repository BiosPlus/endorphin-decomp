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
extern "C" void __thiscall ext_00649080(void* self, bool value);
extern "C" uint32_t ext_005A45A0(void* self, void* arg);
extern "C" void __thiscall ext_0062A580(void* self, bool value);
extern "C" void ext_00603680(void* self, uint32_t value);
extern "C" void __thiscall ext_00648EA0(void* self, bool value);
// Expression node: +0x04 holds the evaluated sub-expression object (polymorphic).
struct ExprValue;
struct ExprValueVtbl;
typedef float (__thiscall *EvalFloatFn)(ExprValue* self, void* expr);
typedef void** (__thiscall *GetResultFn)(ExprValue* self, void** outTmp, void* expr);
struct ExprValue {
    void** vtbl;
};
struct ExprResult {
    void* value;
    ExprValue* source;
};

extern "C" void ext_00402040(void* self, DWORD arg);
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

// [0x00649620] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_48 (110 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>
// @summary Reads a flag from the source value's type (vtable +0x0C), applies it to the target object at dst->field_0x00 via ext_00649080, then resolves the source value through the type's vtable +0x70 into out if src->field_0x04 is non-null; otherwise writes a null out.
// @field ExprParser::Value +0x00 void* field_0x00
// @field ExprParser::Value +0x04 void* field_0x04
void __thiscall fn_00649620(void* self, void* out, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetFlagFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getFlag = reinterpret_cast<GetFlagFn>(vtable[0x0C / sizeof(void*)]);
    uint8_t flag = getFlag(srcType, src);

    ext_00649080(target, flag != 0);

    if (lift_field<void*>(src, 0x04) != nullptr) {
        // Local copy of dst; its address is passed to the resolver below.
        void* dstSlot = dst;

        using ResolveFn = void* (__thiscall*)(void* typeObj, void** dstSlotPtr, void* valueObj);
        auto resolve = reinterpret_cast<ResolveFn>(vtable[0x70 / sizeof(void*)]);
        void* resolved = resolve(srcType, &dstSlot, src);

        // Re-read src->field_0x04 after the call, as the original does.
        lift_field<void*>(out, 0x00) = lift_field<void*>(resolved, 0x00);
        lift_field<void*>(out, 0x04) = lift_field<void*>(src, 0x04);
    } else {
        lift_field<void*>(out, 0x00) = nullptr;
        lift_field<void*>(out, 0x04) = nullptr;
    }
}

// [0x005A46C0] ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_41 (19 bytes)
// @name ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066BC40 (ExprParser::VPtrProxyType::vfunc_39).
// @field ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}> +0x0 void* field_0x00
uint32_t fn_005A46C0(void* self, void* arg) {
    // ecx = [self + 0x00] (held pointer becomes the receiver)
    void* held = lift_field<void*>(self, 0x00);
    // push arg; call ext_0041CF50 (callee pops its own argument); ret 8
    return ext_005A45A0(held, arg);
}

// [0x00604960] ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_48 (110 bytes)
// @name ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00649620 (ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_48).
void __thiscall fn_00604960(void* self, void* out, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetFlagFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getFlag = reinterpret_cast<GetFlagFn>(vtable[0x0C / sizeof(void*)]);
    uint8_t flag = getFlag(srcType, src);

    ext_0062A580(target, flag != 0);

    if (lift_field<void*>(src, 0x04) != nullptr) {
        // Local copy of dst; its address is passed to the resolver below.
        void* dstSlot = dst;

        using ResolveFn = void* (__thiscall*)(void* typeObj, void** dstSlotPtr, void* valueObj);
        auto resolve = reinterpret_cast<ResolveFn>(vtable[0x70 / sizeof(void*)]);
        void* resolved = resolve(srcType, &dstSlot, src);

        // Re-read src->field_0x04 after the call, as the original does.
        lift_field<void*>(out, 0x00) = lift_field<void*>(resolved, 0x00);
        lift_field<void*>(out, 0x04) = lift_field<void*>(src, 0x04);
    } else {
        lift_field<void*>(out, 0x00) = nullptr;
        lift_field<void*>(out, 0x04) = nullptr;
    }
}

// [0x00604BA0] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x0064EA80 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_00604BA0(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x18 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_00603680(target, value);
}

// [0x006495F0] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x00649D50 (ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41).
void __thiscall fn_006495F0(void* self, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetBoolFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getBool = reinterpret_cast<GetBoolFn>(vtable[0x0C / 4]);
    bool value = getBool(srcType, src) != 0;

    ext_00649080(target, value);
}

// [0x00649690] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x00649D50 (ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41).
void __thiscall fn_00649690(void* self, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetBoolFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getBool = reinterpret_cast<GetBoolFn>(vtable[0x0C / 4]);
    bool value = getBool(srcType, src) != 0;

    ext_00648EA0(target, value);
}

// [0x006496C0] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_48 (110 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x00649620 (ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_48).
void __thiscall fn_006496C0(void* self, void* out, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetFlagFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getFlag = reinterpret_cast<GetFlagFn>(vtable[0x0C / sizeof(void*)]);
    uint8_t flag = getFlag(srcType, src);

    ext_00648EA0(target, flag != 0);

    if (lift_field<void*>(src, 0x04) != nullptr) {
        // Local copy of dst; its address is passed to the resolver below.
        void* dstSlot = dst;

        using ResolveFn = void* (__thiscall*)(void* typeObj, void** dstSlotPtr, void* valueObj);
        auto resolve = reinterpret_cast<ResolveFn>(vtable[0x70 / sizeof(void*)]);
        void* resolved = resolve(srcType, &dstSlot, src);

        // Re-read src->field_0x04 after the call, as the original does.
        lift_field<void*>(out, 0x00) = lift_field<void*>(resolved, 0x00);
        lift_field<void*>(out, 0x04) = lift_field<void*>(src, 0x04);
    } else {
        lift_field<void*>(out, 0x00) = nullptr;
        lift_field<void*>(out, 0x04) = nullptr;
    }
}

// [0x00649D80] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_48 (110 bytes)
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x00649620 (ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_48).
void __thiscall fn_00649D80(void* self, void* out, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetFlagFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getFlag = reinterpret_cast<GetFlagFn>(vtable[0x0C / sizeof(void*)]);
    uint8_t flag = getFlag(srcType, src);

    ext_00648E30(target, flag != 0);

    if (lift_field<void*>(src, 0x04) != nullptr) {
        // Local copy of dst; its address is passed to the resolver below.
        void* dstSlot = dst;

        using ResolveFn = void* (__thiscall*)(void* typeObj, void** dstSlotPtr, void* valueObj);
        auto resolve = reinterpret_cast<ResolveFn>(vtable[0x70 / sizeof(void*)]);
        void* resolved = resolve(srcType, &dstSlot, src);

        // Re-read src->field_0x04 after the call, as the original does.
        lift_field<void*>(out, 0x00) = lift_field<void*>(resolved, 0x00);
        lift_field<void*>(out, 0x04) = lift_field<void*>(src, 0x04);
    } else {
        lift_field<void*>(out, 0x00) = nullptr;
        lift_field<void*>(out, 0x04) = nullptr;
    }
}

// [0x00604C70]
// @name ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &>::vfunc_48
// @class ExprParser::WriteMethodType
// @summary Evaluates the argument expression, invokes EffectorBase virtual slot 20 on the target with it, and returns the (value, expr) pair.
// @field ExprParser::WriteMethodType +0x4 void* expr


extern "C" void ext_006036A0(void* self, uint32_t value);

struct ExprVT{ void* pad[6]; void* (__thiscall *eval)(void*, void*); void* pad2[9]; void** (__thiscall *get)(void*, void*, void*); };
struct ExprNode { ExprVT* vt; };
struct ParserSelf { void* f0; ExprNode* expr; };
struct Pair { void* value; void* expr; };

Pair* __stdcall fn_00604C70(Pair* out, void** target, ParserSelf* self)
{
    void* tmp = nullptr;
    void* obj = *target;
    void* v = self->expr->vt->eval(self->expr, self);
    ext_006036A0(obj, (uint32_t)(uintptr_t)v);
    void* result;
    if (self->expr) {
        void** p = self->expr->vt->get(self->expr, &tmp, self);
        result = *p;
    } else {
        tmp = nullptr;
        result = tmp;
    }
    out->value = result;
    out->expr = self->expr;
    return out;
}

// [0x005F3680]
// @name ExprParser::WriteMethodType<EffectorGroup,float,vcall84>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>
// @summary Evaluates the value expression as float and writes it to the target object via its vtable slot 21 setter.
// @field Value +0x04 void* evaluator

struct FloatEvaluator {
    virtual void vf0() = 0;
    virtual float evaluate(void* value) = 0;
};

extern "C" void ext_0064F900(void* self, uint32_t value);

void __fastcall fn_005F3680(void* self, void* edx, void** target, uint8_t* value) {
    (void)self; (void)edx;
    void* obj = *target;
    FloatEvaluator* ev = *(FloatEvaluator**)(value + 0x4);
    float f = ev->evaluate(value);
    uint32_t bits;
    memcpy(&bits, &f, 4);
    ext_0064F900(obj, bits);
}

// [0x0064F7C0]
// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>
// @summary Fetches the argument's holder, calls its vtable slot 5 and ext_0064DDE0, then returns {value, holder} via the sret buffer.
// @field ValuePtrType +0x00 uint32_t field_0x00
// @field ValuePtrType +0x04 void* field_0x04

extern "C" void ext_0064DDE0(void* self, uint32_t arg);

// Argument block: +0x00 = dereferenced value, +0x04 = holder object.
// Return block (sret): +0x00 = value, +0x04 = holder object.
struct ValuePtrResult {
    uint32_t value;
    void*    obj;
};

// Stack arg layout: ret (sret), a2slot (pointer-to-pointer, may be overwritten), a3 (holder block).
void __fastcall fn_0064F7C0(void* self, void* edx, ValuePtrResult* ret, void** a2slot, uint8_t* a3) {
    (void)self; (void)edx;

    uint32_t* a2 = reinterpret_cast<uint32_t*>(*a2slot);
    uint32_t value = *a2;

    void*  holder = *reinterpret_cast<void**>(a3 + 0x4);
    void** vt     = *reinterpret_cast<void***>(holder);

    // vtable slot 5 (offset 0x14) on holder, one stack arg a3
    using Slot5Fn = uint32_t (__fastcall*)(void* self, void* edx, uint8_t* arg);
    uint32_t v1 = reinterpret_cast<Slot5Fn>(vt[5])(holder, nullptr, a3);

    ext_0064DDE0(reinterpret_cast<void*>(static_cast<uintptr_t>(value)), v1);

    if (holder != nullptr) {
        // vtable slot 28 (offset 0x70) on holder: (outp, a3) -> pointer to value
        using Slot28Fn = uint32_t* (__fastcall*)(void* self, void* edx, void** outp, uint8_t* arg);
        uint32_t* p = reinterpret_cast<Slot28Fn>(vt[28])(holder, nullptr, a2slot, a3);
        ret->value = *p;
        ret->obj   = holder;
    } else {
        *a2slot    = nullptr;
        ret->value = 0;
        ret->obj   = nullptr;
    }
}

// [0x00650DB0]
// @name ExprParser::WriteMethodType<SkeletalJoint,int,vcall84>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Reads an int from the value expression's sub-object via vslot 2, forwards it to the target object's slot-21 thunk, then writes a (result, object) pair to the hidden return buffer.
// @field ExprParser::ValuePtrType +0x04 void* object

extern "C" void ext_0064F900(void* self, uint32_t value);

static inline void* vslot(void* obj, size_t index) {
    return reinterpret_cast<void**>(*reinterpret_cast<void***>(obj))[index];
}

// Stack args: out (hidden return buffer), target (void**), value (expression object).
void* __thiscall fn_00650DB0(void* self, void* out, void** target, uint8_t* value) {
    (void)self;

    void* obj = *target;
    void* inner = *reinterpret_cast<void**>(value + 0x4);

    using IntGetter = uint32_t(__thiscall*)(void*);
    uint32_t r = reinterpret_cast<IntGetter>(vslot(inner, 2))(inner);

    ext_0064F900(obj, r);

    uint32_t a = 0;
    void* b = nullptr;
    void* cur = *reinterpret_cast<void**>(value + 0x4);
    if (cur != nullptr) {
        uint32_t tmp = 0;
        using PairGetter = void*(__thiscall*)(void*, uint8_t*, uint32_t*);
        void* p = reinterpret_cast<PairGetter>(vslot(cur, 28))(cur, value, &tmp);
        a = *static_cast<uint32_t*>(p);
        b = *reinterpret_cast<void**>(value + 0x4);
    }

    lift_field<uint32_t>(out, 0) = a;
    lift_field<void*>(out, 4) = b;
    return out;
}

// [0x00650E50] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_48 (110 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>
// @summary Calls the context's child vslot 2 to get a value, forwards it with the target object to the slot-20 thunk, then writes a (value, child) pair to the out parameter, or zeros it when the child is null.
// @field ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}> +0x04 void* child

extern void* ext_006036A0(void* self, void* arg);

struct LiftPair {
    void* first;
    void* second;
};

// Virtual call through the vtable slot at byte offset `slotOff`, passing one argument.
static void* lift_vcall1(void* obj, ptrdiff_t slotOff, void* arg) {
    void* fnRaw = lift_field<void*>(*reinterpret_cast<void**>(obj), slotOff);
    using Fn = void* (*)(void* self, void* a);
    return reinterpret_cast<Fn>(fnRaw)(obj, arg);
}

// Virtual call through the vtable slot at byte offset `slotOff`, passing two arguments.
static void* lift_vcall2(void* obj, ptrdiff_t slotOff, void* a, void* b) {
    void* fnRaw = lift_field<void*>(*reinterpret_cast<void**>(obj), slotOff);
    using Fn = void* (*)(void* self, void* a, void* b);
    return reinterpret_cast<Fn>(fnRaw)(obj, a, b);
}

void fn_00650E50(LiftPair* out, void* arg2, void* ctx) {
    void* ref = arg2;                                        // arg2 slot, passed by address below
    void* target = *reinterpret_cast<void**>(ref);           // edi = [arg2]

    void* child = lift_field<void*>(ctx, 0x04);              // esi+4
    void* value = lift_vcall1(child, 0x08, ctx);             // child vslot 2 (+8) with ctx
    ext_006036A0(target, value);                             // slot-20 thunk on target; result unused

    child = lift_field<void*>(ctx, 0x04);
    if (child != nullptr) {
        void* res = lift_vcall2(child, 0x70, ctx, &ref);     // child vslot 28 (+0x70)
        out->first = *reinterpret_cast<void**>(res);
        out->second = lift_field<void*>(ctx, 0x04);
    } else {
        ref = nullptr;
        out->first = ref;
        out->second = child;
    }
}

// [0x00604930] ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_41 (34 bytes)
namespace lift_00604930 {
extern void __thiscall ext_0062A580(void* self, bool value);

// @name ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x006495F0 (ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_41).
void __thiscall fn_00604930(void* self, void* dst, void* src) {
    (void)self;
    void* target = lift_field<void*>(dst, 0x00);
    void* srcType = lift_field<void*>(src, 0x04);
    void** vtable = lift_field<void**>(srcType, 0x00);

    using GetBoolFn = uint8_t (__thiscall*)(void* typeObj, void* valueObj);
    auto getBool = reinterpret_cast<GetBoolFn>(vtable[0x0C / 4]);
    bool value = getBool(srcType, src) != 0;

    ext_0062A580(target, value);
}
} // namespace lift_00604930

// [0x00604BD0] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_48 (110 bytes)
namespace lift_00604BD0 {
extern void ext_00603680(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00604C70 (ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &>::vfunc_48).
// @field ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}> +0x4 void* expr
extern void ext_006036A0(void* self, uint32_t value);

struct ExprVT{ void* pad[6]; void* (__thiscall *eval)(void*, void*); void* pad2[9]; void** (__thiscall *get)(void*, void*, void*); };
struct ExprNode { ExprVT* vt; };
struct ParserSelf { void* f0; ExprNode* expr; };
struct Pair { void* value; void* expr; };

Pair* __stdcall fn_00604BD0(Pair* out, void** target, ParserSelf* self)
{
    void* tmp = nullptr;
    void* obj = *target;
    void* v = self->expr->vt->eval(self->expr, self);
    ext_00603680(obj, (uint32_t)(uintptr_t)v);
    void* result;
    if (self->expr) {
        void** p = self->expr->vt->get(self->expr, &tmp, self);
        result = *p;
    } else {
        tmp = nullptr;
        result = tmp;
    }
    out->value = result;
    out->expr = self->expr;
    return out;
}
} // namespace lift_00604BD0

// [0x0064F840] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_41 (34 bytes)
namespace lift_0064F840 {
extern void ext_00402040(void* self, uint32_t value);
extern void ext_00402040(void* self, DWORD arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064EA80 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0064F840(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x18 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_00402040(target, value);
}
} // namespace lift_0064F840

// [0x0064F870] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_0064F870 {
extern void ext_00402040(void* self, uint32_t value);
extern void ext_00402040(void* self, DWORD arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00604C70 (ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &>::vfunc_48).
// @field ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}> +0x4 void* expr
extern void ext_006036A0(void* self, uint32_t value);

struct ExprVT{ void* pad[6]; void* (__thiscall *eval)(void*, void*); void* pad2[9]; void** (__thiscall *get)(void*, void*, void*); };
struct ExprNode { ExprVT* vt; };
struct ParserSelf { void* f0; ExprNode* expr; };
struct Pair { void* value; void* expr; };

Pair* __stdcall fn_0064F870(Pair* out, void** target, ParserSelf* self)
{
    void* tmp = nullptr;
    void* obj = *target;
    void* v = self->expr->vt->eval(self->expr, self);
    ext_00402040(obj, (uint32_t)(uintptr_t)v);
    void* result;
    if (self->expr) {
        void** p = self->expr->vt->get(self->expr, &tmp, self);
        result = *p;
    } else {
        tmp = nullptr;
        result = tmp;
    }
    out->value = result;
    out->expr = self->expr;
    return out;
}
} // namespace lift_0064F870

// [0x006513E0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_41 (34 bytes)
namespace lift_006513E0 {
extern void ext_0064F920(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x0064EA80 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_006513E0(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x14 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_0064F920(target, value);
}
} // namespace lift_006513E0

// [0x0068BC60] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41 (34 bytes)
namespace lift_0068BC60 {
extern void ext_006B0C30(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064EA80 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41).
void __thiscall fn_0068BC60(void* self, void* targetPtr, void* valuePtr) {
    (void)self;
    void* target = lift_field<void*>(targetPtr, 0x00);
    void* typeObj = lift_field<void*>(valuePtr, 0x04);
    void** vtable = lift_field<void**>(typeObj, 0x00);
    using GetVec3Fn = uint32_t(__thiscall*)(void* typeSelf, void* expr);
    auto getVec3 = reinterpret_cast<GetVec3Fn>(vtable[0x8 / sizeof(void*)]);
    uint32_t value = getVec3(typeObj, valuePtr);
    ext_006B0C30(target, value);
}
} // namespace lift_0068BC60

// [0x00603440] ExprParser::WriteMethodType<EffectorBase, bool, &public: void __thiscall EffectorBase::setEnabled(bool)>::vfunc_41 (49 bytes)
namespace lift_00603440 {
// @name ExprParser::WriteMethodType<EffectorBase, bool, &public: void __thiscall EffectorBase::setEnabled(bool)>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, bool, &public: void __thiscall EffectorBase::setEnabled(bool)>
// @summary Evaluates a bool from a2's sub-object via vtable slot 3, then dispatches to vtable slot 6 (true) or slot 7 (false) on the target's sub-object at +0x04.
// @field ExprParser::WriteMethodType +0x00 void* field_0x00
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void __stdcall fn_00603440(void* a1, void* a2) {
    // esi = *(void**)a1 : target-side sub-object holder
    void* holder = lift_field<void*>(a1, 0x00);

    // ecx = ((void**)a2)[1] : value sub-object; edx = its vtable
    void* valueObj = lift_field<void*>(a2, 0x04);
    void** valueVtbl = lift_field<void**>(valueObj, 0x00);

    // call vtable slot 3 (offset +0x0C) with a2 as the stack argument -> bool result
    using EvalBoolFn = uint8_t (*)(void* self, void* expr);
    uint8_t flag = reinterpret_cast<EvalBoolFn>(valueVtbl[0x0C / sizeof(void*)])(valueObj, a2);

    // ecx = ((void**)holder)[1] : target object; edx = its vtable
    void* target = lift_field<void*>(holder, 0x04);
    void** targetVtbl = lift_field<void**>(target, 0x00);

    using VoidFn = void (*)(void* self);
    if (flag != 0) {
        reinterpret_cast<VoidFn>(targetVtbl[0x18 / sizeof(void*)])(target);
    } else {
        reinterpret_cast<VoidFn>(targetVtbl[0x1C / sizeof(void*)])(target);
    }
}
} // namespace lift_00603440

// [0x0063CB90] ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_48 (105 bytes)
namespace lift_0063CB90 {
// External virtual dispatch helpers (vtable slots 1 and 28 of the child object).
extern float ext_child_vfunc1(void* child, void* ctx, void* obj, void* ctx2, uint32_t zero);
extern void* ext_child_vfunc28(void* child, void* ctx, void* outSlot);

// @name ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>
// @summary Stores a float produced by the child's vfunc_1 into the target's +0x60 slot and returns a (value, child) pair via out-param.
// @field ExprParser::ValuePtrType +0x04 void* field_04
// @field EffectorWithMemory +0x60 float integralGradient
void fn_0063CB90(void* out, void* const* selfRef, void* ctx) {
    void* obj = *selfRef;
    void* child = lift_field<void*>(ctx, 0x04);

    lift_field<float>(obj, 0x60) = ext_child_vfunc1(child, ctx, obj, ctx, 0);

    if (child != nullptr) {
        void* res = ext_child_vfunc28(child, ctx, out);
        uint32_t value = *static_cast<uint32_t*>(res);
        lift_field<uint32_t>(out, 0x00) = value;
        lift_field<uint32_t>(out, 0x04) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(child));
    } else {
        lift_field<uint32_t>(out, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
        lift_field<uint32_t>(out, 0x04) = 0;
    }
}
} // namespace lift_0063CB90
