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
#include <cstdint>

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

// [0x00650DB0] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_48 (110 bytes)
namespace lift_00650DB0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (virtual dispatch thunk; tail-calls slot 21 with the same this pointer).
extern void* ext_0064F900(void* self, int32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Dispatches via the holder's sub-object (vslot +0x08 and +0x70), then rewrites the pair at io as {*io-derived value, holder sub-object}.
// @field ExprParser::WriteMethodType +0x04 void* subObject (holder sub-object pointer; its vtable is used for slots +0x08 and +0x70)

struct Pair {
    uint32_t first;
    uint32_t second;
};

struct Holder {
    void* vtableUnused;   // +0x00: not accessed directly by this function
    void* subObject;      // +0x04: sub-object used for virtual dispatch
};

static inline void* vslot(void* obj, size_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return vt[byteOffset / sizeof(void*)];
}

// Parameters: [e+4] unused, [e+8] io pair pointer, [e+0xc] holder.
void fn_00650DB0(void* /*unused*/, Pair* io, Holder* holder) {
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(io->first));
    int32_t local = 0;

    // Call holder->subObject->vslot[+0x08] (no args) and forward its result to ext_0064F900.
    using Slot8Fn = int32_t (*)(void*);
    int32_t r = reinterpret_cast<Slot8Fn>(vslot(holder->subObject, 0x08))(holder->subObject);
    (void)local;
    ext_0064F900(self, r);

    if (holder->subObject != nullptr) {
        using Slot70Fn = void* (*)(void*, int32_t*);
        void* p = reinterpret_cast<Slot70Fn>(vslot(holder->subObject, 0x70))(holder, &local);
        io->first = *static_cast<uint32_t*>(p);
        io->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(holder->subObject));
    } else {
        io->first = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        io->second = 0;
    }
}
} // namespace lift_00650DB0

// [0x0064F7C0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, setDriveAngularVel>::vfunc_48 (110 bytes)
namespace lift_0064F7C0 {
extern void __fastcall ext_0064DDE0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0064F7C0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0064DDE0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0

// [0x005A2C40] ExprParser::WriteMethodType<NMData::CharacterData, int, {public: void __thiscall NMData::CharacterData::setPhysicsLevelFromFSM(int), 0}>::vfunc_48 (110 bytes)
namespace lift_005A2C40 {
extern void ext_005A1A30(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::CharacterData, int, {public: void __thiscall NMData::CharacterData::setPhysicsLevelFromFSM(int), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::CharacterData, int, {public: void __thiscall NMData::CharacterData::setPhysicsLevelFromFSM(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x00650DB0 (ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48).
namespace lift_00650DB0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (virtual dispatch thunk; tail-calls slot 21 with the same this pointer).
extern void* ext_005A1A30(void* self, int32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Dispatches via the holder's sub-object (vslot +0x08 and +0x70), then rewrites the pair at io as {*io-derived value, holder sub-object}.
// @field ExprParser::WriteMethodType +0x04 void* subObject (holder sub-object pointer; its vtable is used for slots +0x08 and +0x70)

struct Pair {
    uint32_t first;
    uint32_t second;
};

struct Holder {
    void* vtableUnused;   // +0x00: not accessed directly by this function
    void* subObject;      // +0x04: sub-object used for virtual dispatch
};

static inline void* vslot(void* obj, size_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return vt[byteOffset / sizeof(void*)];
}

// Parameters: [e+4] unused, [e+8] io pair pointer, [e+0xc] holder.
void fn_005A2C40(void* /*unused*/, Pair* io, Holder* holder) {
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(io->first));
    int32_t local = 0;

    // Call holder->subObject->vslot[+0x08] (no args) and forward its result to ext_0064F900.
    using Slot8Fn = int32_t (*)(void*);
    int32_t r = reinterpret_cast<Slot8Fn>(vslot(holder->subObject, 0x08))(holder->subObject);
    (void)local;
    ext_005A1A30(self, r);

    if (holder->subObject != nullptr) {
        using Slot70Fn = void* (*)(void*, int32_t*);
        void* p = reinterpret_cast<Slot70Fn>(vslot(holder->subObject, 0x70))(holder, &local);
        io->first = *static_cast<uint32_t*>(p);
        io->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(holder->subObject));
    } else {
        io->first = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        io->second = 0;
    }
}
} // namespace lift_00650DB0
} // namespace lift_005A2C40

// [0x005B7420] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::applyImpulseViaVelocity(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005B7420 {
extern void ext_005B6780(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::applyImpulseViaVelocity(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::applyImpulseViaVelocity(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005B6780(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005B7420(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005B6780(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005B7420

// [0x005B7B50] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForce(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005B7B50 {
extern void ext_005B7240(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForce(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForce(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005B7240(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005B7B50(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005B7240(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005B7B50

// [0x005B7C70] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addTorque(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005B7C70 {
extern void ext_005B72C0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addTorque(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addTorque(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005B72C0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005B7C70(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005B72C0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005B7C70

// [0x005B7D90] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulse(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005B7D90 {
extern void ext_005B7280(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulse(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulse(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005B7280(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005B7D90(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005B7280(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005B7D90

// [0x005C3410] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005C3410 {
extern void ext_005C3030(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005C3030(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005C3410(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005C3030(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005C3410

// [0x005C34B0] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addTorque(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005C34B0 {
extern void ext_005C30F0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addTorque(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addTorque(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005C30F0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005C34B0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005C30F0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005C34B0

// [0x005C3550] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_005C3550 {
extern void ext_005C3090(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_005C3090(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_005C3550(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_005C3090(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_005C3550

// [0x00627720] ExprParser::WriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_48 (110 bytes)
namespace lift_00627720 {
extern void ext_00627510(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_48
// @class ExprParser::WriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>
// @summary Auto-lifted identical-shape clone of 0x00650DB0 (ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48).
namespace lift_00650DB0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (virtual dispatch thunk; tail-calls slot 21 with the same this pointer).
extern void* ext_00627510(void* self, int32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Dispatches via the holder's sub-object (vslot +0x08 and +0x70), then rewrites the pair at io as {*io-derived value, holder sub-object}.
// @field ExprParser::WriteMethodType +0x04 void* subObject (holder sub-object pointer; its vtable is used for slots +0x08 and +0x70)

struct Pair {
    uint32_t first;
    uint32_t second;
};

struct Holder {
    void* vtableUnused;   // +0x00: not accessed directly by this function
    void* subObject;      // +0x04: sub-object used for virtual dispatch
};

static inline void* vslot(void* obj, size_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return vt[byteOffset / sizeof(void*)];
}

// Parameters: [e+4] unused, [e+8] io pair pointer, [e+0xc] holder.
void fn_00627720(void* /*unused*/, Pair* io, Holder* holder) {
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(io->first));
    int32_t local = 0;

    // Call holder->subObject->vslot[+0x08] (no args) and forward its result to ext_0064F900.
    using Slot8Fn = int32_t (*)(void*);
    int32_t r = reinterpret_cast<Slot8Fn>(vslot(holder->subObject, 0x08))(holder->subObject);
    (void)local;
    ext_00627510(self, r);

    if (holder->subObject != nullptr) {
        using Slot70Fn = void* (*)(void*, int32_t*);
        void* p = reinterpret_cast<Slot70Fn>(vslot(holder->subObject, 0x70))(holder, &local);
        io->first = *static_cast<uint32_t*>(p);
        io->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(holder->subObject));
    } else {
        io->first = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        io->second = 0;
    }
}
} // namespace lift_00650DB0
} // namespace lift_00627720

// [0x0062B380] ExprParser::WriteMethodType<Sensors::SensorIntegral, int, &public: void __thiscall Sensors::SensorIntegral::resize(int)>::vfunc_48 (110 bytes)
namespace lift_0062B380 {
extern void ext_0062B2E0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<Sensors::SensorIntegral, int, &public: void __thiscall Sensors::SensorIntegral::resize(int)>::vfunc_48
// @class ExprParser::WriteMethodType<Sensors::SensorIntegral, int, &public: void __thiscall Sensors::SensorIntegral::resize(int)>
// @summary Auto-lifted identical-shape clone of 0x00650DB0 (ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48).
namespace lift_00650DB0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (virtual dispatch thunk; tail-calls slot 21 with the same this pointer).
extern void* ext_0062B2E0(void* self, int32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Dispatches via the holder's sub-object (vslot +0x08 and +0x70), then rewrites the pair at io as {*io-derived value, holder sub-object}.
// @field ExprParser::WriteMethodType +0x04 void* subObject (holder sub-object pointer; its vtable is used for slots +0x08 and +0x70)

struct Pair {
    uint32_t first;
    uint32_t second;
};

struct Holder {
    void* vtableUnused;   // +0x00: not accessed directly by this function
    void* subObject;      // +0x04: sub-object used for virtual dispatch
};

static inline void* vslot(void* obj, size_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return vt[byteOffset / sizeof(void*)];
}

// Parameters: [e+4] unused, [e+8] io pair pointer, [e+0xc] holder.
void fn_0062B380(void* /*unused*/, Pair* io, Holder* holder) {
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(io->first));
    int32_t local = 0;

    // Call holder->subObject->vslot[+0x08] (no args) and forward its result to ext_0064F900.
    using Slot8Fn = int32_t (*)(void*);
    int32_t r = reinterpret_cast<Slot8Fn>(vslot(holder->subObject, 0x08))(holder->subObject);
    (void)local;
    ext_0062B2E0(self, r);

    if (holder->subObject != nullptr) {
        using Slot70Fn = void* (*)(void*, int32_t*);
        void* p = reinterpret_cast<Slot70Fn>(vslot(holder->subObject, 0x70))(holder, &local);
        io->first = *static_cast<uint32_t*>(p);
        io->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(holder->subObject));
    } else {
        io->first = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        io->second = 0;
    }
}
} // namespace lift_00650DB0
} // namespace lift_0062B380

// [0x0064EAB0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_0064EAB0 {
extern void ext_0064DEE0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0064DEE0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0064EAB0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0064DEE0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0064EAB0

// [0x0064ED60] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
namespace lift_0064ED60 {
extern void ext_0064DF20(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0064DF20(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0064ED60(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0064DF20(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0064ED60

// [0x00650E50] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_48 (110 bytes)
namespace lift_00650E50 {
extern void ext_006036A0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x00650DB0 (ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48).
namespace lift_00650DB0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (virtual dispatch thunk; tail-calls slot 21 with the same this pointer).
extern void* ext_006036A0(void* self, int32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Dispatches via the holder's sub-object (vslot +0x08 and +0x70), then rewrites the pair at io as {*io-derived value, holder sub-object}.
// @field ExprParser::WriteMethodType +0x04 void* subObject (holder sub-object pointer; its vtable is used for slots +0x08 and +0x70)

struct Pair {
    uint32_t first;
    uint32_t second;
};

struct Holder {
    void* vtableUnused;   // +0x00: not accessed directly by this function
    void* subObject;      // +0x04: sub-object used for virtual dispatch
};

static inline void* vslot(void* obj, size_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return vt[byteOffset / sizeof(void*)];
}

// Parameters: [e+4] unused, [e+8] io pair pointer, [e+0xc] holder.
void fn_00650E50(void* /*unused*/, Pair* io, Holder* holder) {
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(io->first));
    int32_t local = 0;

    // Call holder->subObject->vslot[+0x08] (no args) and forward its result to ext_0064F900.
    using Slot8Fn = int32_t (*)(void*);
    int32_t r = reinterpret_cast<Slot8Fn>(vslot(holder->subObject, 0x08))(holder->subObject);
    (void)local;
    ext_006036A0(self, r);

    if (holder->subObject != nullptr) {
        using Slot70Fn = void* (*)(void*, int32_t*);
        void* p = reinterpret_cast<Slot70Fn>(vslot(holder->subObject, 0x70))(holder, &local);
        io->first = *static_cast<uint32_t*>(p);
        io->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(holder->subObject));
    } else {
        io->first = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        io->second = 0;
    }
}
} // namespace lift_00650DB0
} // namespace lift_00650E50

// [0x00651410] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_48 (110 bytes)
namespace lift_00651410 {
extern void ext_0064F920(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0064F920(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_00651410(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0064F920(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_00651410

// [0x0066C590] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C590 {
extern void ext_0067BA60(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BA60(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C590(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BA60(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C590

// [0x0066C630] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C630 {
extern void ext_0067BB00(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BB00(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C630(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BB00(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C630

// [0x0066C6D0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationSE(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C6D0 {
extern void ext_0067BBA0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationSE(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationSE(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BBA0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C6D0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BBA0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C6D0

// [0x0066C770] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationE(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C770 {
extern void ext_0067BC40(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationE(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationE(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BC40(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C770(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BC40(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C770

// [0x0066C810] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoTSA(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C810 {
extern void ext_0067BCE0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoTSA(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoTSA(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BCE0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C810(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BCE0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C810

// [0x0066C8B0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoE(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C8B0 {
extern void ext_0067BD30(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoE(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoE(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BD30(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C8B0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BD30(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C8B0

// [0x0066C950] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoTS(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C950 {
extern void ext_0067BD80(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoTS(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoTS(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BD80(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C950(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BD80(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C950

// [0x0066C9F0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoE(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066C9F0 {
extern void ext_0067BDD0(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoE(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoE(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BDD0(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066C9F0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BDD0(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066C9F0

// [0x0066CA90] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTS(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066CA90 {
extern void ext_0067BE20(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTS(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTS(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BE20(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066CA90(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BE20(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066CA90

// [0x0066CB30] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTSA(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066CB30 {
extern void ext_0067BE70(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTSA(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTSA(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067BE70(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066CB30(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067BE70(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066CB30

// [0x0066CBF0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>::vfunc_48 (110 bytes)
namespace lift_0066CBF0 {
extern void ext_0067C060(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x0064F7C0 (ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48).
namespace lift_0064F7C0 {
extern void __fastcall ext_0067C060(void* self, int edx_unused, uint32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, SkeletalJoint::setDriveAngularVel>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a value through the source holder's object (vtable slot 5), passes it to SkeletalJoint::setDriveAngularVel on the joint pointed to by arg b, then writes a pair {first, holder object} through the out pointer; when the holder object is null, writes {0, 0}.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field <unknown: arg b> +0x00 void* joint   (first dword of arg b is the SkeletalJoint* used as `this` for setDriveAngularVel; SkeletalJoint offsets not accessed here)

// Stdcall, 3 stack args (ret 0xc). ecx is saved and restored, not used as `this`.
// out: 8-byte result pair; b: pointer whose first dword is the SkeletalJoint*; c: ValuePtrType holder.
extern void __stdcall fn_0066CBF0(uint32_t* out, void* b, void* c) {
    // Local copy of the b argument: the original zeroes this stack slot on the null path
    // and passes its address to the slot-28 call on the non-null path.
    void* b_arg = b;

    // joint = *b (read before the virtual call, as in the original).
    void* joint = *static_cast<void**>(b_arg);

    // value = holder->+0x04->vtable[slot 5](holder->+0x04, holder)
    void* src = lift_field<void*>(c, 0x04);
    void** src_vtbl = lift_field<void**>(src, 0x00);
    using Slot5Fn = uint32_t (*)(void* self, void* a0);
    const uint32_t value = reinterpret_cast<Slot5Fn>(lift_field<void*>(src_vtbl, 0x14))(src, c);

    // joint->setDriveAngularVel(value)
    ext_0067C060(joint, 0, value);

    // Re-read holder->+0x04 after the calls, as in the original.
    void* obj = lift_field<void*>(c, 0x04);

    uint32_t first = 0;
    void* second = nullptr;

    if (obj != nullptr) {
        // p = obj->vtable[slot 28](b_slot_addr, holder); result = first dword of *p.
        void** obj_vtbl = lift_field<void**>(obj, 0x00);
        using Slot28Fn = void* (*)(void* self, void* a0, void* a1);
        void* p = reinterpret_cast<Slot28Fn>(lift_field<void*>(obj_vtbl, 0x70))(obj, &b_arg, c);
        first = *static_cast<uint32_t*>(p);
        second = lift_field<void*>(c, 0x04);
    } else {
        // Null path: the original zeroes the b argument slot, then loads the first dword through it.
        b_arg = nullptr;
        first = 0;
        second = lift_field<void*>(c, 0x04);
    }

    out[0] = first;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(second));
}
} // namespace lift_0064F7C0
} // namespace lift_0066CBF0

// [0x0068BC90] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_48 (110 bytes)
namespace lift_0068BC90 {
extern void ext_006B0C30(void* self, uint32_t value);

// @name ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x00650DB0 (ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48).
namespace lift_00650DB0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (virtual dispatch thunk; tail-calls slot 21 with the same this pointer).
extern void* ext_006B0C30(void* self, int32_t arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, int, ...>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Dispatches via the holder's sub-object (vslot +0x08 and +0x70), then rewrites the pair at io as {*io-derived value, holder sub-object}.
// @field ExprParser::WriteMethodType +0x04 void* subObject (holder sub-object pointer; its vtable is used for slots +0x08 and +0x70)

struct Pair {
    uint32_t first;
    uint32_t second;
};

struct Holder {
    void* vtableUnused;   // +0x00: not accessed directly by this function
    void* subObject;      // +0x04: sub-object used for virtual dispatch
};

static inline void* vslot(void* obj, size_t byteOffset) {
    void** vt = *reinterpret_cast<void***>(obj);
    return vt[byteOffset / sizeof(void*)];
}

// Parameters: [e+4] unused, [e+8] io pair pointer, [e+0xc] holder.
void fn_0068BC90(void* /*unused*/, Pair* io, Holder* holder) {
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(io->first));
    int32_t local = 0;

    // Call holder->subObject->vslot[+0x08] (no args) and forward its result to ext_0064F900.
    using Slot8Fn = int32_t (*)(void*);
    int32_t r = reinterpret_cast<Slot8Fn>(vslot(holder->subObject, 0x08))(holder->subObject);
    (void)local;
    ext_006B0C30(self, r);

    if (holder->subObject != nullptr) {
        using Slot70Fn = void* (*)(void*, int32_t*);
        void* p = reinterpret_cast<Slot70Fn>(vslot(holder->subObject, 0x70))(holder, &local);
        io->first = *static_cast<uint32_t*>(p);
        io->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(holder->subObject));
    } else {
        io->first = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        io->second = 0;
    }
}
} // namespace lift_00650DB0
} // namespace lift_0068BC90

// [0x00594550] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00594550 {
// Setter on the World instance (sub_005940A0, 22 bytes; this = World*, arg = float).
extern void ext_005940A0(void* self, float value);
// Virtual calls through the inner object's vtable (slot +0x04 and slot +0x70).
extern float ext_vcall_slot04(void* obj, void* ctx);
extern uint32_t* ext_vcall_slot70(void* obj, void* ctx, uint32_t* tmp);

// @name ExprParser::WriteMethodType<World, float, setFriction>::vfunc_48
// @class ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>
// @summary Fetches a float from the source ValuePtr's inner object, applies it to World friction, and writes the (value, inner) pair to the output slot.
// @field ValuePtrType +0x04 void* inner
void fn_00594550(uint32_t* out, uint32_t* world_ref, void* src) {
    void* world = reinterpret_cast<void*>(static_cast<uintptr_t>(*world_ref));
    void* inner = lift_field<void*>(src, 4);

    float friction = ext_vcall_slot04(inner, src);
    ext_005940A0(world, friction);

    if (lift_field<void*>(src, 4) != nullptr) {
        uint32_t tmp = 0;
        uint32_t* res = ext_vcall_slot70(lift_field<void*>(src, 4), src, &tmp);
        out[0] = *res;
        out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(lift_field<void*>(src, 4)));
    } else {
        out[0] = 0;
        out[1] = 0;
    }
}
} // namespace lift_00594550

// [0x005F36B0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_48 (113 bytes)
namespace lift_005F36B0 {
// Known callee 0x0064F900: VirtualSlot21Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 21 (offset +0x54) with the same this pointer; the callee's result is passed through.)
extern void ext_0064F900(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>
// @summary Reads a float from inner object's vtable slot 1, stores it through *arg into ext_0064F900, then writes a (value, inner) pair to out (value is 0 when inner is null).
// @field ExprParser::WriteMethodType +0x04 void* inner
void fn_005F36B0(void* out, void** arg, void* self) {
    void* innerObj = lift_field<void*>(self, 0x04);

    // Slot 1 of the inner object's vtable, called with self; yields a float.
    void** innerVtbl = *reinterpret_cast<void***>(innerObj);
    float v = reinterpret_cast<float (*)(void*, void*)>(innerVtbl[1])(innerObj, self);

    void* target = *arg;
    ext_0064F900(target, v);

    uint32_t outValue = 0;
    void* outPtr = lift_field<void*>(self, 0x04);
    if (outPtr != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(outPtr);
        uint32_t* p = reinterpret_cast<uint32_t* (*)(void*, void*)>(vtbl[0x70 / 4])(outPtr, self);
        outValue = *p;
    }

    lift_field<uint32_t>(out, 0x00) = outValue;
    lift_field<void*>(out, 0x04) = outPtr;
}
} // namespace lift_005F36B0

// [0x005F3600] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_48 (113 bytes)
namespace lift_005F3600 {
// Known callee 0x0064F8F0: VirtualSlot24Thunk (loads the object's vtable pointer and dispatches
// through vtable slot 24 (offset +0x60), passing the caller's arguments through).
// Called as thiscall: ecx = target object, one float stack argument.
extern void ext_0064F8F0(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>
// @summary Evaluates the float source expression (reader vtbl slot 1), writes it into the target EffectorGroup via slot-24 thunk, then returns a {value, source} result pair through the hidden out pointer.
// @field ExprParser::ValuePtrType +0x00 void** vtbl
// @field ExprParser::ValuePtrType +0x04 void* reader
// @field ExprParser::WriteMethodType +0x00 void* target
void* fn_005F3600(void* out, void* targetPtr, void* expr) {
    // reader = expr->reader (+0x04)
    void* reader = lift_field<void*>(expr, 0x04);

    // Evaluate float: reader->vtbl[1](reader, expr)
    void** readerVtbl = lift_field<void**>(reader, 0x00);
    using GetFloatFn = float (__thiscall*)(void* self, void* expr);
    float value = reinterpret_cast<GetFloatFn>(readerVtbl[1])(reader, expr);

    // target = *targetPtr; target->vtbl[24] via thunk ext_0064F8F0(target, value)
    void* target = lift_field<void*>(targetPtr, 0x00);
    ext_0064F8F0(target, value);

    if (reader == nullptr) {
        // No source: result is {0, null}
        lift_field<uint32_t>(out, 0x00) = 0;
        lift_field<void*>(out, 0x04) = nullptr;
        return out;
    }

    // Result from reader->vtbl[28](tmp, expr) (vtable offset +0x70); returns pointer to value.
    using GetResultFn = void** (__thiscall*)(void* self, void* outTmp, void* expr);
    uint32_t tmp = 0;
    void** resultPtr = reinterpret_cast<GetResultFn>(readerVtbl[28])(reader, &tmp, expr);
    uint32_t resultValue = *reinterpret_cast<uint32_t*>(resultPtr);

    lift_field<uint32_t>(out, 0x00) = resultValue;
    lift_field<void*>(out, 0x04) = reader;
    return out;
}
} // namespace lift_005F3600

// [0x005944A0] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>::vfunc_48 (113 bytes)
namespace lift_005944A0 {
// Callee 0x00594080: sub_00594080 (22B), thiscall-style setter taking one float (World::setGravity).
extern void ext_00594080(void* self, float value);

// @name ExprParser::WriteMethodType<World, float, setGravity>::vfunc_48
// @class ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>
// @summary Evaluates the wrapped value from arg's inner object (vtable slot 1), forwards it to setGravity on the target held behind targetRef, then returns {inner result, inner object} via out.
// @field ExprParser::WriteMethodType +0x00 void* field_0x00
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
//
// Stack layout (stdcall, ret 0xC): out (hidden return slot, returned in eax), targetRef, arg.
// targetRef is dereferenced to obtain the World* passed to ext_00594080; its owning class is not confirmed.
// Result struct is two pointer-sized words: {first, second}. The second word is arg->field_0x04 (the inner object).
void* fn_005944A0(void* out, void* targetRef, void* arg) {
    void* target = *static_cast<void**>(targetRef);

    // Evaluate the inner object via vtable slot 1 (byte offset 0x04), passing arg.
    void* inner = lift_field<void*>(arg, 0x04);
    void** innerVt = *reinterpret_cast<void***>(inner);
    float value = reinterpret_cast<float (*)(void*, void*)>(innerVt[0x04 / 4])(inner, arg);

    ext_00594080(target, value);

    // Reload the inner object after the setter call, as the original does.
    void* obj = lift_field<void*>(arg, 0x04);
    if (obj == nullptr) {
        lift_field<void*>(out, 0x00) = nullptr;
        lift_field<void*>(out, 0x04) = nullptr;
        return out;
    }

    // Non-null path: call vtable slot 28 (byte offset 0x70) with a temp return buffer and arg.
    void* tmp[2] = {nullptr, nullptr};
    void** objVt = *reinterpret_cast<void***>(obj);
    void* resultPtr = reinterpret_cast<void* (*)(void*, void*, void*)>(objVt[0x70 / 4])(obj, tmp, arg);

    obj = lift_field<void*>(arg, 0x04);
    lift_field<void*>(out, 0x00) = *static_cast<void**>(resultPtr);
    lift_field<void*>(out, 0x04) = obj;
    return out;
}
} // namespace lift_005944A0

// [0x00629F70] ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_48 (113 bytes)
namespace lift_00629F70 {
// Callee: Sensors::SensorRelativeTime::resetTime(float) (thiscall, one float arg).
extern void ext_00629EB0(void* self, float value);

// 8-byte result returned through the hidden pointer (stack arg 1).
struct ValuePair {
    void* first;
    void* second;
};

// @name ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, resetTime>::vfunc_48
// @class ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>
// @summary Reads a float from the holder (vslot +0x04), forwards it to SensorRelativeTime::resetTime on the target, and returns {holder result, holder}.
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
void fn_00629F70(ValuePair* out, void** argRef, void* self) {
    auto* base = reinterpret_cast<unsigned char*>(self);

    // Holder sub-object at +0x04; its vtable provides the float getter at slot +0x04.
    void* holder = *reinterpret_cast<void**>(base + 0x04);
    void* target = *argRef;

    using FloatGetter = float (*)(void* self, void* ctx);
    void* const* holderVt = *reinterpret_cast<void* const* const*>(holder);
    float value = reinterpret_cast<FloatGetter>(holderVt[0x04 / sizeof(void*)])(holder, self);

    ext_00629EB0(target, value);

    // Second result: the holder, when present, fetched via vslot +0x70 with &argRef as out-slot.
    void* argSlot = *argRef;
    void* first = nullptr;
    if (*reinterpret_cast<void**>(base + 0x04) != nullptr) {
        using RetGetter = void* (*)(void* self, void* ctx, void** outSlot);
        void* const* vt = *reinterpret_cast<void* const* const*>(holder);
        void* r = reinterpret_cast<RetGetter>(vt[0x70 / sizeof(void*)])(holder, self, &argSlot);
        first = *static_cast<void**>(r);
    } else {
        argSlot = nullptr;
        first = argSlot;
    }

    out->first = first;
    out->second = *reinterpret_cast<void**>(base + 0x04);
}
} // namespace lift_00629F70

// [0x0062B170] ExprParser::WriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>::vfunc_48 (113 bytes)
namespace lift_0062B170 {
// Callee at 0x0062B0A0 (159 bytes): SensorIntegral::insert(float) body; takes the sensor and the sampled value.
extern void ext_0062B0A0(void* sensor, float value);

// @name ExprParser::WriteMethodType<SensorIntegral, float, insert>::vfunc_48
// @class ExprParser::WriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>
// @summary Samples the bound float value source, feeds it into SensorIntegral::insert, then writes back a (value, source) pair.
// @field ExprParser::WriteMethodType +0x04 void* field_0x04 (value-source object; vtable slot 1 = sample, slot 28 = get-value-ref)
struct ValuePair {
    DWORD value;
    void* owner;
};

void fn_0062B170(ValuePair* out, void** sensorRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);
    void* sensor = *sensorRef;

    // Sample the source (unconditional, as in the original).
    using SampleFn = float (*)(void* source, void* self, void* sensor, void* self2, DWORD zero);
    void** sourceVt = *reinterpret_cast<void***>(source);
    float value = reinterpret_cast<SampleFn>(sourceVt[1])(source, self, sensor, self, 0);
    ext_0062B0A0(sensor, value);

    DWORD tmp = 0;
    if (source != nullptr) {
        using GetRefFn = const DWORD* (*)(void* source, DWORD* tmpOut, void* self);
        void** vt = *reinterpret_cast<void***>(source);
        const DWORD* ref = reinterpret_cast<GetRefFn>(vt[28])(source, &tmp, self);
        out->value = *ref;
        out->owner = source;
    } else {
        out->value = tmp;  // 0
        out->owner = nullptr;
    }
}
} // namespace lift_0062B170

// [0x00649150] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649150 {
// Stdcall-style helper: sets the float value on the target object (RelationshipRPROMagnet::setOrientationStrength).
extern void ext_00649050(void* self, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>
// @summary Evaluates the child float expression, applies it to the target's setOrientationStrength, and writes the resulting value/object pair to out.
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}> +0x04 void* field_0x04
void fn_00649150(void* out, void* targetHolder, void* self) {
    // child expression node pointer stored at self+0x04
    void* child = lift_field<void*>(self, 0x04);

    // vtable slot 1 on child: evaluate to float, passing a null out-temp
    using FloatEval = float (*)(void* self, void* tmp);
    void* floatFn = lift_field<void*>(*reinterpret_cast<void**>(child), 0x04);
    float value = reinterpret_cast<FloatEval>(floatFn)(child, nullptr);

    // apply the float to the target object (*targetHolder)
    void* target = *reinterpret_cast<void**>(targetHolder);
    ext_00649050(target, value);

    // Build the result pair { value, object } into out.
    struct ValuePtr {
        void* value;
        void* object;
    };
    ValuePtr* result = reinterpret_cast<ValuePtr*>(out);

    if (child != nullptr) {
        // vtable slot 0x70 on child: produce a ValuePtr into a temp
        using PtrEval = ValuePtr* (*)(void* self, void* node, ValuePtr* tmp);
        void* ptrFn = lift_field<void*>(*reinterpret_cast<void**>(child), 0x70);
        ValuePtr tmp{nullptr, nullptr};
        ValuePtr* got = reinterpret_cast<PtrEval>(ptrFn)(child, self, &tmp);
        result->value = got->value;
        result->object = child;
    } else {
        result->value = nullptr;
        result->object = nullptr;
    }
}
} // namespace lift_00649150

// [0x00649200] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649200 {
// Stdcall-style helper: stores the float argument into the target object's field at +0x78
// (RelationshipRPROMagnet::setCachedDesiredPositionX).
extern void ext_00648E40(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>
// @summary Evaluates the child float expression, applies it to the target's setCachedDesiredPositionX, and writes the resulting value/object pair to out.
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}> +0x04 void* field_0x04
void fn_00649200(void* out, void* targetHolder, void* self) {
    // child expression node pointer stored at self+0x04
    void* child = lift_field<void*>(self, 0x04);

    // vtable slot 1 on child: evaluate to float
    void** childVtbl = *reinterpret_cast<void***>(child);
    using FloatEval = float (*)(void* self, void* tmp);
    float value = reinterpret_cast<FloatEval>(childVtbl[1])(child, nullptr);

    // apply the float to the target object (*targetHolder) via setCachedDesiredPositionX helper
    void* target = *reinterpret_cast<void**>(targetHolder);
    ext_00648E40(target, 0, value);

    struct ValuePtr {
        void* value;
        void* object;
    };
    ValuePtr* result = reinterpret_cast<ValuePtr*>(out);

    if (child != nullptr) {
        // vtable slot 0x70 on child: produce a ValuePtr into a temp
        void** vtbl = *reinterpret_cast<void***>(child);
        using PtrEval = ValuePtr* (*)(void* self, void* node, ValuePtr* tmp);
        ValuePtr tmp{nullptr, nullptr};
        ValuePtr* got = reinterpret_cast<PtrEval>(vtbl[0x70 / sizeof(void*)])(child, self, &tmp);
        result->value = got->value;
        result->object = child;
    } else {
        result->value = nullptr;
        result->object = nullptr;
    }
}
} // namespace lift_00649200

// [0x006492B0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>::vfunc_48 (113 bytes)
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_00648E50(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_006492B0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_00648E50(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0

// [0x00649410] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649410 {
// Known callee 0x00648E70: sub_00648E70 (Setter storing float argument into field at offset +0x84.)
extern void __fastcall ext_00648E70(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredOrientationAlpha>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>
// @summary Evaluates the wrapped value expression (vslot 1, float), forwards it to setCachedDesiredOrientationAlpha via ext_00648E70, then returns {first dword of sub-result or 0, sub-object} as an 8-byte value.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_00649410(void* sret, void** arg2, void* arg3) {
    // arg2: pointer to the target object pointer (RelationshipRPROMagnet*).
    void* self = *arg2;

    // arg3 -> sub-object at +0x04 (ValuePtrType::field_0x04).
    void* sub = lift_field<void*>(arg3, 4);

    // Virtual slot 1 (offset +0x04) on sub: float getter.
    void** vt = *reinterpret_cast<void***>(sub);
    using GetFloatFn = float (*)(void* self_, void* arg3_, int zero_);
    float value = reinterpret_cast<GetFloatFn>(vt[1])(sub, arg3, 0);

    ext_00648E70(self, 0, value);

    uint32_t first = 0;
    if (sub != nullptr) {
        // Virtual slot 28 (offset +0x70) on sub: returns pointer to a 4-byte result.
        void** vt2 = *reinterpret_cast<void***>(sub);
        using GetPtrFn = void* (*)(void* self_, void* arg3_, uint32_t* out_);
        uint32_t tmp = 0;
        void* retp = reinterpret_cast<GetPtrFn>(vt2[28])(sub, arg3, &tmp);
        first = *static_cast<uint32_t*>(retp);
    }

    // Write the 8-byte result {first, sub} to the sret slot.
    lift_field<uint32_t>(sret, 0) = first;
    lift_field<void*>(sret, 4) = sub;
}
} // namespace lift_00649410

// [0x006494C0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>::vfunc_48 (113 bytes)
namespace lift_006494C0 {
// Known callee 0x00648E80: sub_00648E80 (Setter storing float argument into field at offset +0x88.)
extern void ext_00648E80(void* self, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>
// @summary Evaluates the child float expression, applies it to the target's setCachedDesiredOrientationBeta, and writes the resulting value/object pair to out.
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}> +0x04 void* field_0x04
void fn_006494C0(void* out, void* targetHolder, void* self) {
    // child expression node pointer stored at self+0x04
    void* child = lift_field<void*>(self, 0x04);

    // vtable slot 1 on child: evaluate to float, passing a null out-temp
    using FloatEval = float (*)(void* self, void* tmp);
    void* floatFn = lift_field<void*>(*reinterpret_cast<void**>(child), 0x04);
    float value = reinterpret_cast<FloatEval>(floatFn)(child, nullptr);

    // apply the float to the target object (*targetHolder)
    void* target = *reinterpret_cast<void**>(targetHolder);
    ext_00648E80(target, value);

    // Build the result pair { value, object } into out.
    struct ValuePtr {
        void* value;
        void* object;
    };
    ValuePtr* result = reinterpret_cast<ValuePtr*>(out);

    if (child != nullptr) {
        // vtable slot 0x70 on child: produce a ValuePtr into a temp
        using PtrEval = ValuePtr* (*)(void* self, void* node, ValuePtr* tmp);
        void* ptrFn = lift_field<void*>(*reinterpret_cast<void**>(child), 0x70);
        ValuePtr tmp{nullptr, nullptr};
        ValuePtr* got = reinterpret_cast<PtrEval>(ptrFn)(child, self, &tmp);
        result->value = got->value;
        result->object = child;
    } else {
        result->value = nullptr;
        result->object = nullptr;
    }
}
} // namespace lift_006494C0

// [0x00649570] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649570 {
// Known callee 0x00648E90: sub_00648E90 (Setter storing float argument into field at offset +0x8C.)
extern void ext_00648E90(void* self, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>
// @summary Fetches a float from the inner object via vtable slot 1, forwards it to RelationshipRPROMagnet's gamma setter on the target, and returns a {value, owner} pair (zeroed when the owner is null).
// @field ExprParser::ValuePtrType +0x04 void* owner
void fn_00649570(void* out, void** target_ref, void* arg) {
    // Target object for the setter (*target_ref).
    void* target = *target_ref;

    // Inner object (owner) and its vtable.
    void* inner = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);

    // Slot 1 returns the float to store.
    using GetFloatFn = float (*)(void* self, void* arg);
    float value = reinterpret_cast<GetFloatFn>(vtbl[1])(inner, arg);
    ext_00648E90(target, value);

    if (inner != nullptr) {
        // Slot 28 (+0x70): returns a pointer to a {uint32, void*} pair.
        using GetPairFn = void* (*)(void* self, void* ret_buf, void* arg);
        uint32_t local_ret[2] = {0, 0};
        void* ret = reinterpret_cast<GetPairFn>(vtbl[28])(inner, local_ret, arg);
        lift_field<uint32_t>(out, 0) = *reinterpret_cast<uint32_t*>(ret);
        lift_field<void*>(out, 4) = inner;
    } else {
        lift_field<uint32_t>(out, 0) = 0;
        lift_field<void*>(out, 4) = nullptr;
    }
}
} // namespace lift_00649570

// [0x00649B70]
namespace lift_00649B70 {
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setRotationAxisX>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setRotationAxisX>
// @summary Reads the float value from the bound accessor (vtable slot 1), stores it into the magnet via ext_00648E00, then writes the result ValuePtr {value, owner} to the out-parameter.
// @field ExprParser::ValuePtrType +0x4 void* owner (object whose vtable is used for get/set)

extern void ext_00648E00(void* self, int edx_unused, float value);

struct ValuePtrOut {
    void* value;
    void* owner;
};

struct ValuePtrType {
    void* vtable;
    void* owner;  // +0x4
};

// Vtable slot indices (byte offsets / 4): slot 1 = get float, slot 28 (+0x70) = get value pointer.
using GetFloatFn = float(__thiscall*)(void* self, void* unused);
using GetValuePtrFn = void*(__thiscall*)(void* self, void** out);

// Arguments: out (ValuePtrOut*), target holder (void**), self (ValuePtrType*)
// Original is __stdcall-like with `ret 0xc`.
extern void __stdcall fn_00649B70(ValuePtrOut* out, void** target_holder, ValuePtrType* self) {
    void* owner = self->owner;
    void** owner_vtbl = *reinterpret_cast<void***>(owner);

    // Fetch float from owner vtable slot 1.
    float value = reinterpret_cast<GetFloatFn>(owner_vtbl[1])(owner, nullptr);

    void* target = *target_holder;
    ext_00648E00(target, 0, value);

    if (self->owner != nullptr) {
        void** o = *reinterpret_cast<void***>(self->owner);
        void* tmp = nullptr;
        void* result = reinterpret_cast<GetValuePtrFn>(o[28])(self->owner, &tmp);
        out->value = *reinterpret_cast<void**>(result);
        out->owner = self->owner;
    } else {
        out->value = nullptr;
        out->owner = self->owner;
    }
}
} // namespace lift_00649B70

// [0x00649360] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649360 {
// Callee 0x00648E60: setter storing the float argument into the object's field at +0x80 (this = object).
extern void ext_00648E60(void* self, float value);

// Virtual-call shapes recovered from the disassembly (thiscall, 32-bit vtable slots).
using VGetFloat = float (__thiscall*)(void* self, void* a, void* b, void* c, int zero); // slot 1 (+0x04)
using VGetPtr = void* (__thiscall*)(void* self, uint32_t* tmp, void* src);             // slot 28 (+0x70)

// @name ExprParser::WriteMethodType::setCachedDesiredPositionZ_vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>
// @summary Reads a float via the inner object's vtable slot 1 and stores it with setCachedDesiredPositionZ's setter on *objSlot, then writes {value, src->inner} to out (value from vtable slot 28 when inner is non-null, else 0).
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void __stdcall fn_00649360(uint32_t* out, void* const* objSlot, void* src) {
    // inner = src->+0x04; obj = *objSlot (the RelationshipRPROMagnet target).
    void* inner = lift_field<void*>(src, 0x04);
    void* obj = *objSlot;

    // Slot 1 on inner, args (src, obj, src, 0), returns float in st0.
    void** vt = *static_cast<void***>(inner);
    const float v = reinterpret_cast<VGetFloat>(vt[1])(inner, src, obj, src, 0);

    // Setter on obj with the float value.
    ext_00648E60(obj, v);

    // Default result slot is 0; when inner is non-null, slot 28 on inner fills it.
    uint32_t tmp = 0;
    uint32_t* result = &tmp;
    void* p = lift_field<void*>(src, 0x04);
    if (p != nullptr) {
        void** pvt = *static_cast<void***>(p);
        result = static_cast<uint32_t*>(reinterpret_cast<VGetPtr>(pvt[28])(p, &tmp, src));
    }

    // Output pair: {value, src->inner (reloaded)}.
    const uint32_t value = *result;
    void* after = lift_field<void*>(src, 0x04);
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(after));
}
} // namespace lift_00649360

// [0x00649C20]
namespace lift_00649C20 {
// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setRotationAxisY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setRotationAxisY>
// @summary Reads the float value from the bound accessor (vtable slot 1), stores it into the magnet via ext_00648E10, then writes the result ValuePtr {value, owner} to the out-parameter.
// @field ExprParser::ValuePtrType +0x4 void* owner (object whose vtable is used for get/set)

extern void ext_00648E10(void* self, int edx_unused, float value);

struct ValuePtrOut {
    void* value;
    void* owner;
};

struct ValuePtrType {
    void* vtable;
    void* owner;  // +0x4
};

// Vtable slot indices (byte offsets / 4): slot 1 = get float, slot 28 (+0x70) = get value pointer.
using GetFloatFn = float(__thiscall*)(void* self, void* unused);
using GetValuePtrFn = void*(__thiscall*)(void* self, void** out);

// Arguments: out (ValuePtrOut*), target holder (void**), self (ValuePtrType*)
// Original is __stdcall-like with `ret 0xc`.
extern void __stdcall fn_00649C20(ValuePtrOut* out, void** target_holder, ValuePtrType* self) {
    void* owner = self->owner;
    void** owner_vtbl = *reinterpret_cast<void***>(owner);

    // Fetch float from owner vtable slot 1.
    float value = reinterpret_cast<GetFloatFn>(owner_vtbl[1])(owner, nullptr);

    void* target = *target_holder;
    ext_00648E10(target, 0, value);

    if (self->owner != nullptr) {
        void** o = *reinterpret_cast<void***>(self->owner);
        void* tmp = nullptr;
        void* result = reinterpret_cast<GetValuePtrFn>(o[28])(self->owner, &tmp);
        out->value = *reinterpret_cast<void**>(result);
        out->owner = self->owner;
    } else {
        out->value = nullptr;
        out->owner = self->owner;
    }
}
} // namespace lift_00649C20

// [0x00649CD0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649CD0 {
// Known callee 0x00648E20: sub_00648E20 (Setter storing float argument into field at offset +0x74.)
extern void ext_00648E20();

namespace {

using SetFloatFn = void (*)(void* self, int edx_unused, float value);
using GetFloatFn = float (*)(void* self, void* ctx);
using GetPtrFn = void* (*)(void* self, void** slot);

struct PairOut {
    uintptr_t first;
    uintptr_t second;
};

}  // namespace

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>
// @summary Reads a float from the owner's vtable getter, applies it to the target via setRotationAxisZ, then writes back the resolved pointer pair.
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}> +0x04 void* owner
void fn_00649CD0(PairOut* out, void** slot, uint8_t* ctx) {
    // Target object held in *slot (RelationshipRPROMagnet instance).
    void* self = *slot;

    // ctx+0x04 holds the owner whose vtable supplies the value and pointer getters.
    void* owner = *reinterpret_cast<void**>(ctx + 0x04);
    void** owner_vt = *reinterpret_cast<void***>(owner);

    // Slot 1: float getter on the owner.
    float value = reinterpret_cast<GetFloatFn>(owner_vt[1])(owner, ctx);

    // Setter 0x00648E20 stores the float into the target's field at +0x74.
    reinterpret_cast<SetFloatFn>(&ext_00648E20)(self, 0, value);

    if (*reinterpret_cast<void**>(ctx + 0x04) != nullptr) {
        // Slot 0x70: pointer resolver on the owner, returns pointer to a value pair.
        void** vt = *reinterpret_cast<void***>(*reinterpret_cast<void**>(ctx + 0x04));
        void** resolved_ptr = static_cast<void**>(
            reinterpret_cast<GetPtrFn>(vt[0x70 / sizeof(void*)])(owner, slot));
        out->first = reinterpret_cast<uintptr_t>(*resolved_ptr);
        out->second = reinterpret_cast<uintptr_t>(*reinterpret_cast<void**>(ctx + 0x04));
    } else {
        *slot = nullptr;
        out->first = 0;
        out->second = 0;
    }
}
} // namespace lift_00649CD0

// [0x0064ECB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064ECB0 {
extern void ext_0064DEC0(void* joint, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setDesiredSwing2>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>
// @summary Evaluates the float value expression, applies it to the target SkeletalJoint via setDesiredSwing2, then returns a {value, source} pair.
// @field ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}> +0x04 void* field_0x04

struct ValuePair {
    uint32_t value;
    void*    source;
};

namespace {

// Virtual slot helpers: slot index n lives at byte offset n * 4 of the vtable.
using FloatGetter = float (*)(void* self);
using PtrGetter   = uint32_t* (*)(void* self, void* owner, uint32_t* out);

inline void** vtable_of(void* obj) {
    return *reinterpret_cast<void***>(obj);
}

} // namespace

void fn_0064ECB0(ValuePair* out, void** joint_slot, void* self) {
    void* inner = lift_field<void*>(self, 0x04);

    // Evaluate the float expression (vtable slot 1).
    float value = reinterpret_cast<FloatGetter>(vtable_of(inner)[1])(inner);

    // Apply to the joint (joint is the pointer stored at joint_slot).
    ext_0064DEC0(*joint_slot, value);

    if (inner != nullptr) {
        // Fetch the resolved value through vtable slot 28 (offset 0x70).
        uint32_t local = 0;
        uint32_t* resolved = reinterpret_cast<PtrGetter>(vtable_of(inner)[28])(inner, self, &local);
        out->value  = *resolved;
        out->source = inner;
    } else {
        out->value  = 0;
        out->source = nullptr;
    }
}
} // namespace lift_0064ECB0

// [0x0064EC00] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064EC00 {
extern void ext_0064DEA0(void* self, float value);

namespace {
// Fetch vtable slot `index` from an object's vtable (slot n lives at offset n*4).
inline void* vslot(void* obj, size_t index) {
    return (*static_cast<void***>(obj))[index];
}
}  // namespace

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setDesiredSwing1>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>
// @summary Stdcall (ret 0xc) helper: if src's target object is set, reads a float from it, applies it to the joint in *arg2 via setDesiredSwing1, then writes {result->first, target} to out; otherwise writes a zeroed pair.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
// @field ValuePair +0x00 void* first
// @field ValuePair +0x04 void* second
void fn_0064EC00(void* out, void* arg2, void* src) {
    void* obj = lift_field<void*>(src, 0x04);

    if (obj == nullptr) {
        // Null target: arg2 scratch slot is zeroed and out receives {0, 0}.
        arg2 = nullptr;
        lift_field<void*>(out, 0x00) = arg2;
        lift_field<void*>(out, 0x04) = obj;
        return;
    }

    void* joint = *static_cast<void**>(arg2);

    // obj->vtable[1](src) -> float
    float value = reinterpret_cast<float (*)(void*, void*)>(vslot(obj, 1))(obj, src);
    ext_0064DEA0(joint, value);

    // obj->vtable[28](&arg2, src) -> pointer to a {first, ...} result
    void* result = reinterpret_cast<void* (*)(void*, void**, void*)>(vslot(obj, 28))(
        obj, &arg2, src);

    lift_field<void*>(out, 0x00) = lift_field<void*>(result, 0x00);
    lift_field<void*>(out, 0x04) = lift_field<void*>(src, 0x04);
}
} // namespace lift_0064EC00

// [0x0064EB50] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064EB50 {
// Callee 0x0064DE80: SkeletalJoint::setDesiredTwist(float), thiscall (joint in ecx, one stack float).
extern void __thiscall ext_0064DE80(void* joint, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setDesiredTwist>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>
// @summary Reads a float from the wrapped source object (vslot 1), forwards it to SkeletalJoint::setDesiredTwist on the joint referenced by *value, then writes the result pair {first, obj} to the hidden return slot (or {0,0} when the wrapper has no object).
// @field ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}> +0x04 void* field_0x04
// Stdcall-style: out (hidden result pointer), value (pointer to joint reference), self (wrapper). ret 0xc.
void __stdcall fn_0064EB50(uint32_t* out, void* const* value, void* self) {
    void* const obj = lift_field<void*>(self, 0x04);

    // Slot 1 on obj: float f(obj, self) -> twist value (returned on x87 stack).
    void* const vt1 = lift_field<void*>(obj, 0x00);
    using Slot1Fn = float (__thiscall*)(void* obj_this, void* arg);
    const float twist = reinterpret_cast<Slot1Fn>(lift_field<void*>(vt1, 0x04))(obj, self);

    // joint = *value (first dword of the reference), then setDesiredTwist(twist).
    void* const joint = *value;
    ext_0064DE80(joint, twist);

    uint32_t local = 0;
    if (obj != nullptr) {
        // Slot 28 (0x70) on obj: void* g(&local, self) -> pointer whose dword is the result.
        void* const vt2 = lift_field<void*>(obj, 0x00);
        using Slot28Fn = void* (__thiscall*)(void* obj_this, uint32_t* local_out, void* arg);
        void* const p = reinterpret_cast<Slot28Fn>(lift_field<void*>(vt2, 0x70))(obj, &local, self);
        out[0] = *static_cast<const uint32_t*>(p);
        out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
    } else {
        out[0] = local;
        out[1] = 0;
    }
}
} // namespace lift_0064EB50

// [0x0064EE00]
namespace lift_0064EE00 {
// @name ExprParser::WriteMethodType<SkeletalJoint, float, setHardLimitRadius>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>
// @summary Reads a float via the value-pointer's vfunc slot 1, applies it to the target SkeletalJoint via setHardLimitRadius, then returns {value-of-vfunc28 result, owner} through the out buffer.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04

// Callee: SkeletalJoint::setHardLimitRadius(float), thiscall (this in ecx, float on stack).
void ext_0064DC20(void* self, float value);

using VFnGetFloat = float(__thiscall*)(void* self, void* arg);
using VFnGetPtr   = void*(__thiscall*)(void* self, void* slot, void* arg);

// out: arg1 (8-byte result buffer), arg2: pointer to target joint pointer, arg3: value-ptr holder.
void* lift_0064EE00(void* out, void* arg2, void* arg3) {
    auto* holder = static_cast<uint8_t*>(arg3);
    void* owner = lift_field<void*>(holder, 0x04);

    // edi = *arg2: the SkeletalJoint whose radius is being set.
    void* target = *static_cast<void**>(arg2);

    // Fetch float from owner's vtable slot 1.
    void** vtbl = *static_cast<void***>(owner);
    float value = reinterpret_cast<VFnGetFloat>(vtbl[1])(owner, arg3);

    ext_0064DC20(target, value);

    if (owner != nullptr) {
        // Slot 0x70 (index 28): returns a pointer to an 8-byte result; arg2 slot is passed by address.
        void* slot = arg2;
        void** vtbl2 = *static_cast<void***>(owner);
        void* res = reinterpret_cast<VFnGetPtr>(vtbl2[0x70 / sizeof(void*)])(owner, &slot, arg3);
        DWORD first = lift_field<DWORD>(res, 0);
        void* ownerNow = lift_field<void*>(holder, 0x04);
        lift_field<DWORD>(out, 0) = first;
        lift_field<void*>(out, 0x04) = ownerNow;
    } else {
        lift_field<DWORD>(out, 0) = 0;
        lift_field<void*>(out, 0x04) = owner;
    }

    return out;
}
} // namespace lift_0064EE00

// [0x0064EEB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064EEB0 {
extern void ext_0064DC40(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>
// @summary Reads a float from the attached reader, forwards it to SkeletalJoint::setHardLimitTwistAngle on the target, and returns {target, reader-value} pair (8 bytes) via hidden out pointer.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void __stdcall fn_0064EEB0(void* a1, void* a2, void* a3) {
    // a1: out pointer for 8-byte result (hidden return slot)
    // a2: pointer to the target object pointer (dereferenced once)
    // a3: this of the ValuePtrType; +0x04 holds the reader object
    void* reader = lift_field<void*>(a3, 0x04);
    void* target = lift_field<void*>(a2, 0x00);

    // Evaluate the float value through the reader's vtable slot 1.
    using GetFloatFn = float (*)(void* self, void* ctx, void* target);
    void* readerVtbl = lift_field<void*>(reader, 0x00);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(readerVtbl, 0x04));
    float value = getFloat(reader, a3, target);

    ext_0064DC40(target, value);

    if (lift_field<void*>(a3, 0x04) != nullptr) {
        // Reader present: query its vtable slot 0x70 for a pointer to a pair,
        // and combine the pair's first word with the reader object.
        using GetPairFn = void* (*)(void* self, void* ctx, void** tmp);
        void* pairTmp = nullptr;
        void* readerVtbl2 = lift_field<void*>(reader, 0x00);
        auto getPair = reinterpret_cast<GetPairFn>(lift_field<void*>(readerVtbl2, 0x70));
        void* pairPtr = getPair(reader, a3, &pairTmp);
        void* first = lift_field<void*>(pairPtr, 0x00);
        void* second = lift_field<void*>(a3, 0x04);
        lift_field<void*>(a1, 0x00) = first;
        lift_field<void*>(a1, 0x04) = second;
    } else {
        // No reader: result is {target, null}.
        lift_field<void*>(a1, 0x00) = target;
        lift_field<void*>(a1, 0x04) = nullptr;
    }
}
} // namespace lift_0064EEB0

// [0x0064F0C0]
namespace lift_0064F0C0 {
// @name ExprParser::WriteMethodType<SkeletalJoint, float, setSoftLimitRadius>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, setSoftLimitRadius>
// @summary Evaluates the float operand from the owner's vtable, passes it to SkeletalJoint::setSoftLimitRadius on the target, then writes {resolved value, owner} to the out pair.
// @field ExprParser::ValuePtrType +0x04 void* owner
// @field ExprParser::ValuePtrType +0x00 void* vtable

// sub_0064DCA0: SkeletalJoint::setSoftLimitRadius(float), thiscall
void ext_0064DCA0(void* self, float radius);

struct PtrPair {
    void* value;
    void* owner;
};

// Stack args (ret 0xc): out (PtrPair*), target (void** handle), valuePtr (ValuePtrType*).
void vfunc_48(PtrPair* out, void** targetHandle, void* valuePtr)
{
    void** vp = static_cast<void**>(valuePtr);
    void*  owner = vp[1];                      // +0x04

    // Step 1: float f = owner->vtbl[+4](valuePtr, 0.0f)  (result in st0)
    float f = 0.0f;
    if (owner != nullptr) {
        void** vt = *static_cast<void***>(owner);
        using EvalFn = float (__thiscall*)(void*, void*, float);
        f = reinterpret_cast<EvalFn>(vt[1])(owner, valuePtr, 0.0f);
    }

    // Step 2: target = *targetHandle; target->setSoftLimitRadius(f)
    void* target = *targetHandle;
    ext_0064DCA0(target, f);

    // Step 3: resolve or write null, then store {value, owner} into out
    if (owner != nullptr) {
        void** vt = *static_cast<void***>(owner);
        using ResolveFn = void** (__thiscall*)(void*, void*, void*);
        void** resolved = reinterpret_cast<ResolveFn>(vt[0x70 / 4])(owner, valuePtr, nullptr);
        out->value = *resolved;
        out->owner = owner;
    } else {
        out->value = nullptr;
        out->owner = nullptr;
    }
}
} // namespace lift_0064F0C0

// [0x0064EF60] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064EF60 {
extern void ext_0064DC60();  // SkeletalJoint::setHardLimitSwingAngle1(float), __thiscall

// @name ExprParser::WriteMethodType<SkeletalJoint,float>::setHardLimitSwingAngle1_vfunc48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>
// @summary Evaluates the source value provider and forwards the float result to SkeletalJoint::setHardLimitSwingAngle1; returns the (value, object) pair of the source.
// @field ExprParser::ValuePtrType +0x04 void* m_object

namespace {

struct ValuePair {
    uint32_t value;   // +0x0
    void*    object;  // +0x4
};

// Source value provider: the object at +0x4 of the source pair is the expression.
struct ValuePtrSource {
    void*  pad_0x00;  // +0x0 (unused here)
    void** m_object;  // +0x4 (vtable-carrying expression object)
};

using SlotValueFn = float (*)(void* self, ValuePtrSource* src, void* joint, ValuePtrSource* src2, int zero);
using SlotPairFn  = ValuePair* (*)(void* self, ValuePair* scratch, ValuePtrSource* src);
using SetterFn    = void (*)(void* joint, float value);

inline void* vslot(void* obj, int index) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return vtbl[index];
}

} // namespace

// __stdcall (ret 0xc): (out pair, joint-pointer-pointer, source pair)
void fn_0064EF60(ValuePair* out, void** joint_ref, ValuePtrSource* src) {
    void* joint = *joint_ref;

    // Read the value provider and push it into the joint's setter.
    void* obj = src->m_object;
    float value = reinterpret_cast<SlotValueFn>(vslot(obj, 1))(obj, src, joint, src, 0);
    reinterpret_cast<SetterFn>(ext_0064DC60)(joint, value);

    ValuePair scratch{0, nullptr};
    if (src->m_object != nullptr) {
        void* o = src->m_object;
        ValuePair* r = reinterpret_cast<SlotPairFn>(vslot(o, 28))(o, &scratch, src);
        out->value = r->value;
        out->object = src->m_object;
    } else {
        out->value = 0;
        out->object = nullptr;
    }
}
} // namespace lift_0064EF60

// [0x0064F170] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F170 {
extern void ext_0064DCC0(void* self, float value);

// Layout of the 8-byte value returned through the hidden sret pointer.
struct ValueResult {
    uint32_t value;  // first dword read from the vfunc_0x70 result
    uint32_t owner;  // copy of the ctx's +0x04 object pointer
};

// Vtable-slot helpers: byte offsets in the vtable, as in the original code.
static inline void* vtbl_entry(void* obj, std::size_t byteOffset) {
    void* vt = *reinterpret_cast<void**>(obj);
    return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vt) + byteOffset);
}

using GetFloatFn = float (*)(void* self, void* ctx);
using GetRefFn   = void* (*)(void* self, void* ctx, void** ref);

// @name ExprParser::WriteMethodType<SkeletalJoint,float,SkeletalJoint::setSoftLimitTwistAngle>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>
// @summary Evaluates the float source via ctx->+0x04 vfunc[1], writes it to the joint's soft twist limit, then returns {value, owner} from vfunc[0x70].
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
ValueResult fn_0064F170(void* arg2, void* ctx) {
    // Original code: joint = *arg2 is read before the getter call.
    void* joint = *reinterpret_cast<void**>(arg2);

    // Getter: float value = ctx->owner->vfunc[1](ctx).
    void* owner = lift_field<void*>(ctx, 0x04);
    float value = reinterpret_cast<GetFloatFn>(vtbl_entry(owner, 0x04))(owner, ctx);

    // Setter: joint->setSoftLimitTwistAngle(value).
    ext_0064DCC0(joint, value);

    // Chained write: if ctx->owner is non-null, call vfunc[0x70] with &arg2.
    void* ownerNow = lift_field<void*>(ctx, 0x04);
    if (ownerNow != nullptr) {
        void* ref = arg2;
        void* ret = reinterpret_cast<GetRefFn>(vtbl_entry(ownerNow, 0x70))(ownerNow, ctx, &ref);
        ValueResult out{};
        out.value = *reinterpret_cast<uint32_t*>(ret);
        out.owner = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(lift_field<void*>(ctx, 0x04)));
        return out;
    }

    // Null owner: the original zeroes the argument slot and returns {0, 0}.
    arg2 = nullptr;
    ValueResult out{};
    out.value = 0;
    out.owner = 0;
    return out;
}
} // namespace lift_0064F170

// [0x0064F2F0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F2F0 {
// sub_0064DD00: thiscall, self in ecx, one float argument.
extern void ext_0064DD00(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setSoftLimitSwingAngle2>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>
// @summary Reads a float from the joint pointer argument via the inner object's vtable, forwards it to SkeletalJoint::setSoftLimitSwingAngle2 (sub_0064DD00), then writes a two-dword result pair (value pointer and target) to the hidden output.
// @field ValuePtrType +0x04 void* target
//
// Calling convention (from disassembly): stdcall-style, 3 stack args, `ret 0xC`:
//   out    = [esp+4]  hidden result pointer (2 dwords)
//   srcPtr = [esp+8]  pointer to a joint pointer; *srcPtr is the SkeletalJoint* (edi)
//   self   = [esp+12] ValuePtrType instance (esi)

namespace {

struct ResultPair {
    uint32_t first;
    uint32_t second;
};

// Vtable slot 1 (+0x04): returns float. Args as pushed: self, esi, joint, esi, 0.0f.
using SlotOneFn = float (*)(void* self, void* a, void* joint, void* b, float c);
// Vtable slot 28 (+0x70): returns pointer to a dword pair.
using SlotTwentyEightFn = void* (*)(void* self, void* a, void** outPtr);

} // namespace

void fn_0064F2F0(ResultPair* out, void** srcPtr, uint8_t* self) {
    void* joint = *srcPtr;
    void* target = *reinterpret_cast<void**>(self + 0x04);

    // Read a float through the target's vtable slot 1, then apply it to the joint.
    float value = 0.0f;
    if (target != nullptr) {
        void** vt = *reinterpret_cast<void***>(target);
        value = reinterpret_cast<SlotOneFn>(vt[1])(target, self, joint, self, 0.0f);
    }
    ext_0064DD00(joint, value);

    void* local = nullptr;
    if (target != nullptr) {
        void** vt = *reinterpret_cast<void***>(target);
        void* p = reinterpret_cast<SlotTwentyEightFn>(vt[0x70 / sizeof(void*)])(target, self, &local);
        out->first = p ? *reinterpret_cast<uint32_t*>(p) : 0u;
    } else {
        out->first = 0u;
    }
    out->second = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(target));
}
} // namespace lift_0064F2F0

// [0x0064F240]
namespace lift_0064F240 {
// Callee 0x0064DCE0: sub_0064DCE0 (23B), thiscall-style setter taking one float (setSoftLimitSwingAngle1).
extern void ext_0064DCE0(void* self, float value);

// Result pair written through the output pointer: {value, source}.
struct ExprResult {
    void* value;
    void* source;
};

// Virtual slot 1 (+0x04) of the source expression: returns a float, takes four stack args.
using EvalFloatFn = float (*)(void* self, void* a0, void* a1, void* a2, uint32_t a3);
// Virtual slot 28 (+0x70) of the source expression: writes into tmp and returns a pointer to the result.
using EvalResultFn = ExprResult* (*)(void* self, ExprResult* tmp, void* arg);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setSoftLimitSwingAngle1>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>
// @summary Evaluates the float argument from the source expression, applies it to the target SkeletalJoint via setSoftLimitSwingAngle1, then writes {target, source} back to the output result.
// @field ExprResult +0x00 void* value
// @field ExprResult +0x04 void* source
// @field ExprParser::ValuePtrType +0x04 void* source
void __stdcall fn_0064F240(void* a1, void* a2, void* a3) {
    (void)a1;
    ExprResult* out = reinterpret_cast<ExprResult*>(a2);
    void* node = a3;

    void* target = lift_field<void*>(out, 0x00);
    void* source = lift_field<void*>(node, 0x04);

    void* vtbl = lift_field<void*>(source, 0x00);
    auto evalFloat = reinterpret_cast<EvalFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = evalFloat(source, node, target, node, 0);
    ext_0064DCE0(target, value);

    void* source2 = lift_field<void*>(node, 0x04);
    if (source2 != nullptr) {
        void* vtbl2 = lift_field<void*>(source2, 0x00);
        auto evalResult = reinterpret_cast<EvalResultFn>(lift_field<void*>(vtbl2, 0x70));
        ExprResult tmp{nullptr, nullptr};
        ExprResult* res = evalResult(source2, &tmp, node);
        out->value = res->value;
        out->source = source2;
    } else {
        out->value = nullptr;
        out->source = nullptr;
    }
}
} // namespace lift_0064F240

// [0x00487450] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00487450 {
extern void ext_00486C10(void* self, float value);

// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_00486C10(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00487450(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_00486C10(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00487450

// [0x0048AD80] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0048AD80 {
extern void ext_0048ABD0(void* self, float value);

// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0048ABD0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0048AD80(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0048ABD0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0048AD80

// [0x004FE0F0] ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_48 (113 bytes)
namespace lift_004FE0F0 {
extern void ext_004FDC80(void* self, float value);

// @name ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_004FDC80(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_004FE0F0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_004FDC80(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_004FE0F0

// [0x005F4960] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>::vfunc_48 (113 bytes)
namespace lift_005F4960 {
extern void ext_005F4480(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_005F4480(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_005F4960(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_005F4480(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_005F4960

// [0x005F4A10] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>::vfunc_48 (113 bytes)
namespace lift_005F4A10 {
extern void ext_005F4570(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_005F4570(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_005F4A10(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_005F4570(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_005F4A10

// [0x005F4AC0] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>::vfunc_48 (113 bytes)
namespace lift_005F4AC0 {
extern void ext_005F4660(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_005F4660(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_005F4AC0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_005F4660(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_005F4AC0

// [0x005F4B70] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>::vfunc_48 (113 bytes)
namespace lift_005F4B70 {
extern void ext_005F4750(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_005F4750(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_005F4B70(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_005F4750(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_005F4B70

// [0x00603530] ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>::vfunc_48 (113 bytes)
namespace lift_00603530 {
extern void ext_006032B0(void* self, float value);

// @name ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>::vfunc_48
// @class ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_006032B0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00603530(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_006032B0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00603530

// [0x0062A020] ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_48 (113 bytes)
namespace lift_0062A020 {
extern void ext_00629F10(void* self, float value);

// @name ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_48
// @class ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_00629F10(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0062A020(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_00629F10(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0062A020

// [0x00649DF0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_48 (113 bytes)
namespace lift_00649DF0 {
extern void ext_00649010(void* self, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_00649010(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00649DF0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_00649010(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00649DF0

// [0x0064CA80] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064CA80 {
extern void ext_0064C950(void* self, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064C950(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0064CA80(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064C950(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0064CA80

// [0x0064CB90] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064CB90 {
extern void ext_0064CB00(void* self, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064CB00(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0064CB90(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064CB00(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0064CB90

// [0x0064F010] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F010 {
extern void ext_0064DC80(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064DC80(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0064F010(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064DC80(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0064F010

// [0x0064F710] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F710 {
extern void ext_0064DDC0(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064DDC0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0064F710(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064DDC0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0064F710

// [0x00650EF0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{88, {flat}}>::vfunc_48 (113 bytes)
namespace lift_00650EF0 {
extern void ext_005F35C0(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{88, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{88, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_005F35C0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00650EF0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_005F35C0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00650EF0

// [0x00650FF0] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_48 (113 bytes)
namespace lift_00650FF0 {
extern void ext_006036C0(void* self, float value);

// @name ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_006036C0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00650FF0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_006036C0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00650FF0

// [0x00651120] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_48 (113 bytes)
namespace lift_00651120 {
extern void ext_0064F910(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064F910(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00651120(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064F910(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00651120

// [0x006511D0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_48 (113 bytes)
namespace lift_006511D0 {
extern void ext_0064F930(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064F930(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_006511D0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064F930(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_006511D0

// [0x006512B0] ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_48 (113 bytes)
namespace lift_006512B0 {
extern void ext_0064F940(void* self, float value);

// @name ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0064F940(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_006512B0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0064F940(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_006512B0

// [0x00651360] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_48 (113 bytes)
namespace lift_00651360 {
extern void ext_005C3640(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_005C3640(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_00651360(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_005C3640(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_00651360

// [0x0066C380] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_48 (113 bytes)
namespace lift_0066C380 {
extern void ext_0067C3D0(void* self, float value);

// @name ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0067C3D0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0066C380(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0067C3D0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0066C380

// [0x0066C430] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_48 (113 bytes)
namespace lift_0066C430 {
extern void ext_0067C450(void* self, float value);

// @name ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0067C450(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0066C430(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0067C450(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0066C430

// [0x0066C4E0] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_48 (113 bytes)
namespace lift_0066C4E0 {
extern void ext_0067C4D0(void* self, float value);

// @name ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_48
// @class ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>
// @summary Auto-lifted identical-shape clone of 0x006492B0 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_006492B0 {
// Known callee 0x00648E50: sub_00648E50 (Setter storing float argument into field at offset +0x7C.)
extern void __fastcall ext_0067C4D0(void* self, int edx_unused, float value);

// @name ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY>::vfunc_48
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>
// @summary Reads a float from the wrapped value source, forwards it to the Y setter on the target object, then writes a (value, source) pair to the out-parameter (zeroed when the source is null).
// @field ExprParser::WriteMethodType<RelationshipRPROMagnet, float, setCachedDesiredPositionY> +0x04 void* field_0x04
extern void __stdcall fn_0066C4E0(void* out, void* const* targetRef, void* self) {
    void* source = lift_field<void*>(self, 0x04);

    // Getter: vtable slot +0x04 on the source; produces the float to forward.
    using GetFloatFn = float (*)(void* thisp, void* scratch);
    void** srcVtable = *reinterpret_cast<void***>(source);
    auto getFloat = reinterpret_cast<GetFloatFn>(srcVtable[0x04 / sizeof(void*)]);
    float value = getFloat(source, nullptr);

    // Setter on the object referenced by *targetRef (stores into field +0x7C).
    void* target = *targetRef;
    ext_0067C4D0(target, 0, value);

    if (source != nullptr) {
        // Vtable slot +0x70 on the source returns a pointer to a two-dword result.
        using GetPairFn = void* (*)(void* thisp, void* scratch);
        void** vt = *reinterpret_cast<void***>(source);
        auto getPair = reinterpret_cast<GetPairFn>(vt[0x70 / sizeof(void*)]);
        void* scratch = nullptr;
        void* pair = getPair(source, &scratch);
        uint32_t first = *static_cast<uint32_t*>(pair);
        lift_field<uint32_t>(out, 0x0) = first;
        lift_field<void*>(out, 0x4) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<uint32_t>(out, 0x0) = 0;
        lift_field<void*>(out, 0x4) = source;
    }
}
} // namespace lift_006492B0
} // namespace lift_0066C4E0

// [0x0064F450] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F450 {
// @name ExprParser::WriteMethodType<SkeletalJoint,float,SkeletalJoint::setSoftLimitTwistStiffness>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>
// @summary Evaluates the float source via ctx->+0x04 vfunc[1], writes it to the joint's soft twist stiffness, then returns {value, owner} from vfunc[0x70].
// @field ExprParser::ValuePtrType +0x04 void* field_0x04

// Callee 0x0064DD40 (sub_0064DD40, 23B): thiscall, self in ecx, one float argument.
extern void ext_0064DD40(void* self, float value);

// Layout of the 8-byte value returned through the hidden sret pointer.
struct ValueResult {
    uint32_t value;  // first dword read from the vfunc_0x70 result
    uint32_t owner;  // copy of the ctx's +0x04 object pointer
};

// Vtable-slot helpers: byte offsets in the vtable, as in the original code.
static inline void* vtbl_entry(void* obj, std::size_t byteOffset) {
    void* vt = *reinterpret_cast<void**>(obj);
    return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vt) + byteOffset);
}

using GetFloatFn = float (*)(void* self, void* ctx);
using GetRefFn   = void* (*)(void* self, void* ctx, void** ref);

ValueResult fn_0064F450(void* arg2, void* ctx) {
    // Original code: joint = *arg2 is read before the getter call.
    void* joint = *reinterpret_cast<void**>(arg2);

    // Getter: float value = ctx->owner->vfunc[1](ctx).
    void* owner = lift_field<void*>(ctx, 0x04);
    float value = reinterpret_cast<GetFloatFn>(vtbl_entry(owner, 0x04))(owner, ctx);

    // Setter: joint->setSoftLimitTwistStiffness(value).
    ext_0064DD40(joint, value);

    // Chained write: if ctx->owner is non-null, call vfunc[0x70] with &arg2.
    void* ownerNow = lift_field<void*>(ctx, 0x04);
    if (ownerNow != nullptr) {
        void* ref = arg2;
        void* ret = reinterpret_cast<GetRefFn>(vtbl_entry(ownerNow, 0x70))(ownerNow, ctx, &ref);
        ValueResult out{};
        out.value = *reinterpret_cast<uint32_t*>(ret);
        out.owner = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(lift_field<void*>(ctx, 0x04)));
        return out;
    }

    // Null owner: the original zeroes the argument slot and returns {0, 0}.
    ValueResult out{};
    out.value = 0;
    out.owner = 0;
    return out;
}
} // namespace lift_0064F450

// [0x0064F3A0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F3A0 {
// Callee 0x0064DD20: sub_0064DD20 (23B), thiscall setter taking one float (setSoftLimitRadialStiffness).
extern void ext_0064DD20(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>
// @summary Samples a float from the value source (vtable slot 1), applies it to the target via setSoftLimitRadialStiffness, then returns {value-ref, source} via slot 28 (or {0, 0} when there is no source).
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::WriteMethodType +0x04 void* subObject

// Result pair written through the hidden return buffer (ExprResult-style, two pointer-sized fields).
struct ExprResult {
    void* value;   // +0x00
    void* source;  // +0x04
};

// Slot 1 of the value source: float sample(void* self, void* expr).
using SampleFloatFn = float (*)(void* self, void* expr);
// Slot 28 of the value source: void** getValueRef(void* self, void** outTmp, void* expr).
using GetValueRefFn = void* (*)(void* self, void** outTmp, void* expr);

void* __stdcall fn_0064F3A0(void* retBuf, void* targetRef, void* self) {
    // Target object pointer is stored at +0 of the holder passed as targetRef.
    void* target = lift_field<void*>(targetRef, 0x00);

    // Value source sub-object at +4 of self; its vtable drives sample (slot 1) and get-ref (slot 28).
    void* sub = lift_field<void*>(self, 0x04);
    void* subVtbl = lift_field<void*>(sub, 0x00);
    auto sample = reinterpret_cast<SampleFloatFn>(lift_field<void*>(subVtbl, 0x04));
    float value = sample(sub, self);

    ext_0064DD20(target, value);

    // Re-read the source after the setter (the original code reloads +4 here).
    void* sub2 = lift_field<void*>(self, 0x04);
    if (sub2 != nullptr) {
        void* sub2Vtbl = lift_field<void*>(sub2, 0x00);
        auto getRef = reinterpret_cast<GetValueRefFn>(lift_field<void*>(sub2Vtbl, 0x70));
        // The original reuses the targetRef argument slot as scratch for the out-temp.
        void* outTmp = targetRef;
        void* ref = getRef(sub2, &outTmp, self);

        lift_field<void*>(retBuf, 0x00) = lift_field<void*>(ref, 0x00);
        lift_field<void*>(retBuf, 0x04) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<void*>(retBuf, 0x00) = nullptr;
        lift_field<void*>(retBuf, 0x04) = nullptr;
    }

    return retBuf;
}
} // namespace lift_0064F3A0

// [0x0064F500] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F500 {
// SkeletalJoint::setSoftLimitSwingStiffness(float) at 0x0064DD60 (thiscall, callee-cleans 4 bytes).
extern void ext_0064DD60(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setSoftLimitSwingStiffness>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>
// @summary Evaluates the value source (object at +0x04) and applies it to the target SkeletalJoint via setSoftLimitSwingStiffness; returns {value-or-0, owner} by hidden pointer.
// @field ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}> +0x04 pointer field_0x04 (value-source object)
void fn_0064F500(uint32_t* out, uintptr_t arg2, void* self) {
    // edi = *(SkeletalJoint**)arg2 : target joint is read before evaluation.
    const uint32_t joint = *reinterpret_cast<const uint32_t*>(arg2);

    // value = owner->vtable[1](self)   (owner = self->field_0x04)
    // The original calls the owner's vfunc unconditionally here (no null check).
    const uint32_t owner_raw = lift_field<uint32_t>(self, 0x04);
    void* owner = reinterpret_cast<void*>(static_cast<uintptr_t>(owner_raw));
    void** owner_vt = *reinterpret_cast<void***>(owner);
    using EvalFn = float (*)(void*, void*);
    auto eval = reinterpret_cast<EvalFn>(owner_vt[1]);
    const float value = eval(owner, self);

    // joint->setSoftLimitSwingStiffness(value)
    ext_0064DD60(reinterpret_cast<void*>(static_cast<uintptr_t>(joint)), value);

    // Re-check owner (the original re-reads field_0x04 after the setter call).
    const uint32_t owner_raw2 = lift_field<uint32_t>(self, 0x04);
    if (owner_raw2 != 0) {
        void* owner2 = reinterpret_cast<void*>(static_cast<uintptr_t>(owner_raw2));
        void** vt2 = *reinterpret_cast<void***>(owner2);
        // vfunc at byte offset 0x70 of the vtable (slot 28 on a 32-bit build).
        using RefFn = const uint32_t* (*)(void*, uintptr_t, void*);
        auto get_ref = reinterpret_cast<RefFn>(vt2[0x70 / sizeof(void*)]);
        const uint32_t* r = get_ref(owner2, arg2, self);
        out[0] = *r;
        out[1] = owner_raw2;
    } else {
        out[0] = 0;
        out[1] = owner_raw2;
    }
}
} // namespace lift_0064F500

// [0x0064F660] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F660 {
// Setter for SkeletalJoint::setSoftLimitTwistDamping(float) (23 bytes).
extern void ext_0064DDA0(void* self, float value);

// Return-by-value pair { value, source } (matches lifted/include/ExprResult.h layout).
struct ExprResult {
    void* value;   // +0x0
    void* source;  // +0x4
};

// ExprValue vtable slot 1 (+0x04): float getter, this = source, one stack arg.
using GetFloatFn = float (*)(void* self, void* expr);
// ExprValue vtable slot 28 (+0x70): returns pointer to result slot; this = source.
using GetResultFn = void** (*)(void* self, void** outTmp, void* expr);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, setSoftLimitTwistDamping>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>
// @summary Evaluates the float from the ValuePtr's source via vtable slot 1, forwards it to the twist-damping setter on the target, then returns the source's slot-28 result as {value, source} (or {0, 0} when there is no source).
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* source
ExprResult fn_0064F660(void* a1, void* a2) {
    void* target = lift_field<void*>(a1, 0x00);
    void* sub = lift_field<void*>(a2, 0x04);
    void* vtbl = lift_field<void*>(sub, 0x00);
    auto getFloat = reinterpret_cast<GetFloatFn>(lift_field<void*>(vtbl, 0x04));
    float value = getFloat(sub, a2);
    ext_0064DDA0(target, value);

    sub = lift_field<void*>(a2, 0x04);
    if (sub == nullptr) {
        return ExprResult{nullptr, nullptr};
    }
    void* subVtbl = lift_field<void*>(sub, 0x00);
    auto getResult = reinterpret_cast<GetResultFn>(lift_field<void*>(subVtbl, 0x70));
    void* outTmp = nullptr;
    void** res = getResult(sub, &outTmp, a2);
    return ExprResult{*res, lift_field<void*>(a2, 0x04)};
}
} // namespace lift_0064F660

// [0x0064F5B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_48 (113 bytes)
namespace lift_0064F5B0 {
namespace lift_0064F5B0 {
// Callee 0x0064DD80: sub_0064DD80 (23B), thiscall setter taking one float (setSoftLimitRadialDamping).
extern void ext_0064DD80(void* self, float value);

// @name ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>
// @summary Samples a float from the value source (vtable slot 1), applies it to the target via setSoftLimitRadialDamping, then returns {value-ref, source} via slot 28 (or {0, 0} when there is no source).
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::WriteMethodType +0x04 void* subObject

// Result pair written through the hidden return buffer (ExprResult-style, two pointer-sized fields).
struct ExprResult {
    void* value;   // +0x00
    void* source;  // +0x04
};

// Slot 1 of the value source: float sample(void* self, void* expr).
using SampleFloatFn = float (*)(void* self, void* expr);
// Slot 28 of the value source: void** getValueRef(void* self, void** outTmp, void* expr).
using GetValueRefFn = void* (*)(void* self, void** outTmp, void* expr);

void* __stdcall fn_0064F5B0(void* retBuf, void* targetRef, void* self) {
    // Target object pointer is stored at +0 of the holder passed as targetRef.
    void* target = lift_field<void*>(targetRef, 0x00);

    // Value source sub-object at +4 of self; its vtable drives sample (slot 1) and get-ref (slot 28).
    void* sub = lift_field<void*>(self, 0x04);
    void* subVtbl = lift_field<void*>(sub, 0x00);
    auto sample = reinterpret_cast<SampleFloatFn>(lift_field<void*>(subVtbl, 0x04));
    float value = sample(sub, self);

    ext_0064DD80(target, value);

    // Re-read the source after the setter (the original code reloads +4 here).
    void* sub2 = lift_field<void*>(self, 0x04);
    if (sub2 != nullptr) {
        void* sub2Vtbl = lift_field<void*>(sub2, 0x00);
        auto getRef = reinterpret_cast<GetValueRefFn>(lift_field<void*>(sub2Vtbl, 0x70));
        // The original reuses the targetRef argument slot as scratch for the out-temp.
        void* outTmp = targetRef;
        void* ref = getRef(sub2, &outTmp, self);

        lift_field<void*>(retBuf, 0x00) = lift_field<void*>(ref, 0x00);
        lift_field<void*>(retBuf, 0x04) = lift_field<void*>(self, 0x04);
    } else {
        lift_field<void*>(retBuf, 0x00) = nullptr;
        lift_field<void*>(retBuf, 0x04) = nullptr;
    }

    return retBuf;
}
} // namespace lift_0064F5B0
} // namespace lift_0064F5B0

// [0x00650F70] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>::vfunc_48 (113 bytes)
namespace lift_00650F70 {
// Virtual dispatch thunk at 0x006036B0: loads this->vtable and tail-calls slot 28 (+0x70)
// with the same this pointer; the float stack argument is forwarded unchanged.
extern void* ext_006036B0(void* self, float value);

// Stack-argument convention: callee-cleans 12 bytes (ret 0xc); ecx is not used as input.
// @name ExprParser::WriteMethodType<Effector, float, EffectorBase vcall112>::vfunc_48
// @class ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>
// @summary Reads a float from the value-source object at self+0x04 (vtable slot 1), pushes it into the target effector (*arg2, vtable slot 28 via thunk), then, if self+0x04 is non-null, queries it via vtable slot 28 and writes {value, owner} to out.
// @field ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}> +0x04 pointer field_0x04 (value-source / owner object)
void fn_00650F70(uint32_t* out, uintptr_t arg2, void* self) {
    // target = *(Effector**)arg2
    const uint32_t target = *reinterpret_cast<const uint32_t*>(arg2);

    // owner = self->field_0x04; value = owner->vtable[1](owner, <stack args>)
    // The original pushes self, target, self, and 0 as stack arguments; callee shape is inferred.
    const uint32_t owner_raw = lift_field<uint32_t>(self, 0x04);
    void* owner = reinterpret_cast<void*>(static_cast<uintptr_t>(owner_raw));
    void** owner_vt = *reinterpret_cast<void***>(owner);
    using EvalFn = float (*)(void*, uintptr_t, uintptr_t, uintptr_t, uint32_t);
    auto eval = reinterpret_cast<EvalFn>(owner_vt[1]);
    const float value = eval(owner,
                             reinterpret_cast<uintptr_t>(self),
                             static_cast<uintptr_t>(target),
                             reinterpret_cast<uintptr_t>(self),
                             0u);

    // Forward value to the target via the slot-28 thunk (its eax result is unused).
    (void)ext_006036B0(reinterpret_cast<void*>(static_cast<uintptr_t>(target)), value);

    // if (self->field_0x04 == 0) return {0, 0};
    const uint32_t owner_raw2 = lift_field<uint32_t>(self, 0x04);
    if (owner_raw2 == 0) {
        out[0] = 0;
        out[1] = 0;
        return;
    }

    // Otherwise: r = owner->vtable[28](owner, &tmp, self); out = {*r, owner}
    void* owner2 = reinterpret_cast<void*>(static_cast<uintptr_t>(owner_raw2));
    void** vt2 = *reinterpret_cast<void***>(owner2);
    uint32_t tmp[2] = {0, 0};
    using RefFn = void* (*)(void*, uint32_t*, void*);
    auto get_ref = reinterpret_cast<RefFn>(vt2[0x70 / sizeof(void*)]);
    const auto* r = static_cast<const uint32_t*>(get_ref(owner2, tmp, self));
    out[0] = *r;
    out[1] = lift_field<uint32_t>(self, 0x04);
}
} // namespace lift_00650F70

// [0x00651070] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{92, {flat}}>::vfunc_48 (113 bytes)
namespace lift_00651070 {
// Known callee 0x0064F8E0: VirtualSlot23Thunk (loads the object's vtable and tail-calls slot 23 with the same this pointer).
// Takes the receiver in ecx and one float on the stack; the result is discarded by the caller.
extern void* ext_0064F8E0(void* self, float value);

// Pair returned through the hidden out-pointer: {value pointer, owner pointer}.
struct LiftPair {
    void* first;
    void* second;
};

// @name ExprParser::WriteMethodType<EffectorGroup, float>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{92, {flat}}>
// @summary Calls the owner's vtable slot 1 to get a float, forwards it with *src to ext_0064F8E0, then writes {*(owner slot 28 result), owner} to out (or {0,0} if owner is null).
// @field ExprParser::ValuePtrType +0x04 void* owner
void fn_00651070(LiftPair* out, void** srcRef, void* vp) {
    using Slot1Fn = float (*)(void* self, void* a, void* b, void* c, uint32_t d);
    using Slot28Fn = void* (*)(void* self, void** slot, void* vp);

    void* owner = lift_field<void*>(vp, 0x04);
    void** ownerVtbl = *reinterpret_cast<void***>(owner);
    float value = reinterpret_cast<Slot1Fn>(ownerVtbl[0x04 / sizeof(void*)])(
        owner, vp, *srcRef, vp, 0u);

    ext_0064F8E0(*srcRef, value);

    owner = lift_field<void*>(vp, 0x04);
    if (owner == nullptr) {
        out->first = nullptr;
        out->second = nullptr;
        return;
    }

    void** vtbl = *reinterpret_cast<void***>(owner);
    void* slot = nullptr;
    void* r = reinterpret_cast<Slot28Fn>(vtbl[0x70 / sizeof(void*)])(owner, &slot, vp);
    out->first = *static_cast<void**>(r);
    out->second = lift_field<void*>(vp, 0x04);
}
} // namespace lift_00651070

// [0x005A46E0]
namespace lift_005A46E0 {
// @name ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>
// @summary Calls a helper on the target object, then writes a ValuePtr to out: the value from the input's object via vtable slot +0x70 if the object is non-null, otherwise a null ValuePtr.
// @field ValuePtr +0x00 void* ptr
// @field ValuePtr +0x04 void* obj


extern void __thiscall ext_005A45A0(void* self, void* arg3, uint32_t saved_esi_slot, uint32_t zero);

void __thiscall fn_005A46E0(void* self, void* out, void** arg2, void** arg3) {
    (void)self;
    void* target = *arg2;
    // Caller's saved ESI is passed in the second stack slot; its value is not recoverable here, so 0 is used.
    ext_005A45A0(target, arg3, 0u, 0u);

    void* temp = nullptr;
    void* obj = lift_field<void*>(arg3, 0x04);
    void* first;
    void* second;
    if (obj != nullptr) {
        void* vtbl = lift_field<void*>(obj, 0x00);
        void* slot = lift_field<void*>(vtbl, 0x70);
        using GetFn = void* (*)(void* self_obj, void* out_tmp, void* in_val);
        GetFn get = reinterpret_cast<GetFn>(slot);
        void* result = get(obj, &temp, arg3);
        first = lift_field<void*>(result, 0x00);
        second = lift_field<void*>(arg3, 0x04);
    } else {
        first = temp;
        second = obj;
    }
    lift_field<void*>(out, 0x00) = first;
    lift_field<void*>(out, 0x04) = second;
}
} // namespace lift_005A46E0

// [0x00487300]
namespace lift_00487300 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setRootFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression to a string and invokes DesiredPoseEventData::setRootFromFSM on the target object.
// @field arg1 +0x04 uint32_t field_0x04

extern uint32_t __thiscall ext_0046E780(uint32_t ecx, uint32_t out_str, uint32_t arg1, uint32_t arg0);
extern void __thiscall ext_00402040(uint32_t ecx, uint32_t str_ptr);
extern uint32_t mem_00924FF4;

void __thiscall fn_00487300(uint32_t this_ptr, uint32_t arg0, uint32_t arg1) {
    (void)this_ptr;
    uint32_t target = *(uint32_t*)arg0;
    uint32_t ctx = *(uint32_t*)(arg1 + 4);
    uint8_t local_str[0x1c];
    uint32_t str_ptr = ext_0046E780(ctx, (uint32_t)(uintptr_t)local_str, arg1, arg0);
    ext_00402040(target, str_ptr);
    using dtor_fn = void (__thiscall *)(uint32_t);
    ((dtor_fn)(uintptr_t)mem_00924FF4)((uint32_t)(uintptr_t)local_str);
}
} // namespace lift_00487300

// [0x004871E0]
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_004C6F50(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_004871E0(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_004C6F50(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0

// [0x00486F90] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
namespace lift_00486F90 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x004871E0 (ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41).
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_00486AF0(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_00486F90(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_00486AF0(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0
} // namespace lift_00486F90

// [0x004870B0] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
namespace lift_004870B0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x004871E0 (ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41).
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_00486B10(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_004870B0(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_00486B10(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0
} // namespace lift_004870B0

// [0x0048B770] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
namespace lift_0048B770 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x004871E0 (ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41).
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_0048B2A0(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_0048B770(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_0048B2A0(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0
} // namespace lift_0048B770

// [0x0048BD50] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
namespace lift_0048BD50 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x004871E0 (ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41).
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_0048B9E0(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_0048BD50(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_0048B9E0(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0
} // namespace lift_0048BD50

// [0x004CA440] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
namespace lift_004CA440 {
// @name ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x004871E0 (ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41).
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_004CA300(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_004CA440(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_004CA300(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0
} // namespace lift_004CA440

// [0x004CA8D0] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
namespace lift_004CA8D0 {
// @name ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41
// @class ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x004871E0 (ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41).
namespace lift_004871E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::string const &, setStrengthFromFSM>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates an expression into a temporary std::string and passes it to NMData::DesiredPoseEventData::setStrengthFromFSM.


extern void* __fastcall ext_0046E780(void* self, void* edx, void* out_str, void* arg2, void* arg1);
extern void __fastcall ext_004CA590(void* self, void* edx, void* str_ptr);
extern void (__thiscall* mem_00924FF4)(void* self);

extern void __fastcall fn_004CA8D0(void* self, void* edx, void* arg1, void* arg2) {
    (void)self;
    (void)edx;

    uint8_t local_str[0x1c];
    void* target = *reinterpret_cast<void**>(arg1);
    void* expr_ctx = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(arg2) + 4);

    void* str_ptr = ext_0046E780(expr_ctx, nullptr, local_str, arg2, arg1);
    ext_004CA590(target, nullptr, str_ptr);
    mem_00924FF4(local_str);
}
} // namespace lift_004871E0
} // namespace lift_004CA8D0

// [0x006049D0]
namespace lift_006049D0 {
// @name ExprParser::WriteMethodType<EffectorBase, const std::string&, EffectorBase::vcall{64}>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Converts an expression value to std::string via ext_0046E780, passes it to EffectorBase virtual slot 16, and destroys the temporary string.
// @field arg2 +0x04 uint32_t field_0x04


extern uint32_t ext_0046E780(void* ecx, void* out_str, void* arg2, void* arg1);
extern void ext_00603690(void* self, void* str_arg);
extern uintptr_t mem_00924FF4;

void fn_006049D0(void* self, void* arg1, void* arg2) {
    (void)self;
    uint8_t local_str[0x1C];
    void* target_obj = *reinterpret_cast<void**>(arg1);
    void* ctx = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(arg2) + 4);
    uint32_t str_ptr = ext_0046E780(ctx, local_str, arg2, arg1);
    ext_00603690(target_obj, reinterpret_cast<void*>(static_cast<uintptr_t>(str_ptr)));
    reinterpret_cast<void(*)(void*)>(mem_00924FF4)(local_str);
}
} // namespace lift_006049D0

// [0x006329B0]
namespace lift_006329B0 {
void* __fastcall ext_0046E780(void* self, void* edx_unused, void* out_str, void* arg2, void* arg1);
    void* __fastcall ext_00603670(void* self, void* edx_unused, void* str_arg);
    extern uint32_t mem_00924FF4;

// @name ExprParser::WriteMethodType<EffectorBase, std::string const&, vcall60>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Evaluates argument via ext_0046E780 into a temporary std::string, invokes virtual slot 15 on *arg1, and destroys the temporary string.
void __thiscall fn_006329B0(void* self, void* arg1, void* arg2) {
    (void)self;
    void* target_obj = *reinterpret_cast<void**>(arg1);
    void* helper_this = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(arg2) + 4);

    uint8_t temp_str[28];
    void* str_ptr = ext_0046E780(helper_this, nullptr, temp_str, arg2, arg1);
    ext_00603670(target_obj, nullptr, str_ptr);

    using DtorFn = void(__thiscall*)(void*);
    reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(temp_str);
}
} // namespace lift_006329B0

// [0x00487000] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_00486AF0(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_00487000(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_00486AF0(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000

// [0x00487120] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_00487120 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_00486B10(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_00487120(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_00486B10(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_00487120

// [0x00487250] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrengthFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_00487250 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrengthFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrengthFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_004C6F50(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_00487250(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_004C6F50(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_00487250

// [0x00487370] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setRootFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_00487370 {
extern void ext_00402040(void* self, DWORD arg);

// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setRootFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setRootFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_00402040(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_00487370(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_00402040(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_00487370

// [0x0048B7E0] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_0048B7E0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_0048B2A0(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_0048B7E0(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_0048B2A0(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_0048B7E0

// [0x0048BDC0] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_0048BDC0 {
// @name ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_0048B9E0(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_0048BDC0(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_0048B9E0(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_0048BDC0

// [0x004CA4B0] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_004CA4B0 {
// @name ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_004CA300(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_004CA4B0(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_004CA300(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_004CA4B0

// [0x004CA940] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48 (162 bytes)
namespace lift_004CA940 {
// @name ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_48
// @class ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_004CA590(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_004CA940(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_004CA590(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_004CA940

// [0x00604A40] ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{64, {flat}}>::vfunc_48 (162 bytes)
namespace lift_00604A40 {
// @name ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{64, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{64, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_00603690(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_00604A40(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_00603690(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_00604A40

// [0x00604AF0] ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{60, {flat}}>::vfunc_48 (162 bytes)
namespace lift_00604AF0 {
// @name ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{60, {flat}}>::vfunc_48
// @class ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{60, {flat}}>
// @summary Auto-lifted identical-shape clone of 0x00487000 (WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41).
namespace lift_00487000 {
// Known callee 0x0046E780: Unknown::forwardVtableSlot4 (Calls virtual slot 4 on self with two forwarded args and a zero arg; returns the first arg.)
extern uint32_t ext_0046E780(uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x00486AF0: sub_00486AF0 (Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).)
extern uint32_t ext_00603670(uint32_t self);

namespace {

struct PoseResult {
    uint32_t first;
    uint32_t second;
};

inline uint32_t as_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name ExprParser::WriteMethodType::vfunc_48
// @class ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Forwards the pose-file path through a helper, then returns the object pointer at +0x04 together with the value its vtable slot 0x70 yields (or zero if none).
// @field ExprParser::WriteMethodType +0x04 void* field_0x04
PoseResult* fn_00604AF0(PoseResult* out, void* arg2, void* arg3) {
    // Object pointed to by arg2 (its first dword is the "this" for the helper call).
    const uint32_t self = lift_field<uint32_t>(arg2, 0);

    // Helper call: forward arg3 and arg2 with a zeroed slot; its result is discarded.
    uint32_t slot = 0;
    (void)ext_0046E780(as_u32(&slot), as_u32(arg3), as_u32(arg2), 0);
    (void)ext_00603670(self);

    // Pointer to the result value: either returned by the virtual call, or the zeroed slot.
    uint32_t* result = &slot;
    const uint32_t obj_word = lift_field<uint32_t>(arg3, 4);
    if (obj_word != 0) {
        void* obj = as_ptr(obj_word);
        void** vtable = *reinterpret_cast<void***>(obj);
        using VSlot70 = uint32_t* (*)(void* self_obj, void* arg, uint32_t* out_slot);
        VSlot70 fn = reinterpret_cast<VSlot70>(lift_field<void*>(vtable, 0x70));
        result = fn(obj, arg3, &slot);
    }

    out->first = *result;
    out->second = lift_field<uint32_t>(arg3, 4);
    return out;
}
} // namespace lift_00487000
} // namespace lift_00604AF0
