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
