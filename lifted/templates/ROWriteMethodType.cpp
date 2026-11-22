// Lifted C++ translation unit: lifted/templates/ROWriteMethodType.cpp
#include "lift_compat.h"
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A402C4;
extern "C" int mem_00A2E2F8;
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A2FB54;

// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A2FB54;
// @class ExprParser::ROWriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A402C4 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_004FDB20(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A402C4), 0);
}
// Lifted from 0x005F35A0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A912F8;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A912F8;
// @summary Runtime type check: dynamic-casts self to the type at mem_00A2FB54 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_0059EB40(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A2FB54), 0);
}
// Lifted from 0x00603420: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A93714;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A93714;
// @class ExprParser::ROWriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93750), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_006035B0(void* self) {
    return self;
}
// Lifted from 0x0063CA50: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Lifted from 0x0064B0A0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Lifted from 0x0064F1F0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Lifted from 0x0051A4D0: ROWriteMethodType vfunc_13 stub forwarding to shared dispatcher sub_00671100.
// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.
extern "C" void ext_00671100(int selector, void* arg);

// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.
extern "C" void ext_00671100(int selector, void* arg);
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93424), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_006274D0(void* self) {
    return self;
}
// Lifted from 0x0059E9B0: ROWriteMethodType vfunc_13 stub forwarding to shared dispatcher sub_00671100.
// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.

// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.
// @class ExprParser::ROWriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93644), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_0062A0A0(void* self) {
    return self;
}
// Lifted from 0x0064F830: ROWriteMethodType vfunc_13 stub forwarding to shared dispatcher sub_00671100.
// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.

// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.
// @class ExprParser::ROWriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A97CF8), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_0062A0F0(void* self) {
    return self;
}
// Lifted from 0x005F35A0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Lifted from 0x00603420: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Lifted from 0x005F35A0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Lifted from 0x00603420: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A947F0;

// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A947F0;
// @class ExprParser::ROWriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93678), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_0062A560(void* self) {
    return self;
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A9BD54;

// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A9BD54;
// @class ExprParser::ROWriteMethodType<EffectorSkeletal, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorSkeletal::`vcall'{60, {flat}}>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A947D0), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_00630CE0(void* self) {
    return self;
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A9BDC8;

// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" int mem_00A9BDC8;
// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.

// single stack argument sits directly after the selector, so it is passed through as the second parameter.
// @name ExprParser::ROWriteMethodType::vfunc_13 (NMData::CharacterData::setPoseFromFSM)
// @class ExprParser::ROWriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>
// @summary Forwards its argument to shared dispatcher sub_00671100 with selector 22 (dispatcher not yet lifted).
// No object fields are accessed directly.
void fn_0059E9B0(void* arg) {
    ext_00671100(22, arg);
}
// Shared dispatcher sub_00671100 (911 bytes, not yet lifted). Called as push <selector>; call; the wrapper's
// single stack argument sits directly after the selector, so it is passed through as the second parameter.

// single stack argument sits directly after the selector, so it is passed through as the second parameter.
// @name ExprParser::ROWriteMethodType::vfunc_13 (NM::Vector3::convertEtoTS)
// @class ExprParser::ROWriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTS(class NM::Vector3 const &)>
// @summary Forwards its argument to shared dispatcher sub_00671100 with selector 4 (dispatcher not yet lifted).
// No object fields are accessed directly.
void fn_0064F830(void* arg) {
    ext_00671100(4, arg);
}

// [0x005F35A0] ExprParser::ROWriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (EffectorGroup vcall 84)
// @class ExprParser::ROWriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A912F8), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_005F35A0(void* self) {
    return self;
}

// [0x00603420] ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (EffectorBase vcall 76)
// @class ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93714), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_00603420(void* self) {
    return self;
}

// [0x0063CA50] ExprParser::ROWriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (EffectorWithMemory::setIntegralGradient)
// @class ExprParser::ROWriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>
// @summary RTTI type guard: dynamic-casts self to the ROWriteMethodType target type (mem_00A947F0, source mem_00A2E2F8) and returns the result or NULL.
// No object fields are accessed directly.
void* fn_0063CA50(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A947F0), 0);
}

// [0x0064B0A0] ExprParser::ROWriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (RelationshipRPROMagnet::applyCachedSettings)
// @class ExprParser::ROWriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>
// @summary RTTI type guard: dynamic-casts self to the ROWriteMethodType target type (mem_00A9BD54, source mem_00A2E2F8) and returns the result or NULL.
// No object fields are accessed directly.
void* fn_0064B0A0(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A9BD54), 0);
}

// [0x0064F1F0] ExprParser::ROWriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (SkeletalJoint vcall 132)
// @class ExprParser::ROWriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>
// @summary RTTI type guard: dynamic-casts self to the ROWriteMethodType target type (mem_00A9BDC8, source mem_00A2E2F8) and returns the result or NULL.
// No object fields are accessed directly.
void* fn_0064F1F0(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A9BDC8), 0);
}

// [0x0051A4D0] ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_13 (13 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)
// @class ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>
// @summary Forwards its argument to shared dispatcher sub_00671100 with selector 8 (dispatcher not yet lifted).
// No object fields are accessed directly.
void fn_0051A4D0(void* arg) {
    ext_00671100(8, arg);
}
