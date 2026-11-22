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
extern "C" void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A912F8;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
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

// [0x006274D0] ExprParser::ROWriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (Sensors::SensorAbsoluteOrientation::setReference)
// @class ExprParser::ROWriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93424), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_006274D0(void* self) {
    return self;
}

// [0x0062A0A0] ExprParser::ROWriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (Sensors::SensorMetaBodyRelativeTime::resetTime)
// @class ExprParser::ROWriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93644), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_0062A0A0(void* self) {
    return self;
}

// [0x0062A0F0] ExprParser::ROWriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (Sensors::SensorRelativeTime::resetTime)
// @class ExprParser::ROWriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A97CF8), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_0062A0F0(void* self) {
    return self;
}

// [0x0062A560] ExprParser::ROWriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (Sensors::SensorIntegral::insert)
// @class ExprParser::ROWriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A93678), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_0062A560(void* self) {
    return self;
}

// [0x00630CE0] ExprParser::ROWriteMethodType<EffectorSkeletal, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorSkeletal::`vcall'{60, {flat}}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType::vfunc_16 (EffectorSkeletal vcall 60)
// @class ExprParser::ROWriteMethodType<EffectorSkeletal, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorSkeletal::`vcall'{60, {flat}}>
// @summary Returns self after a dynamic_cast-style RTTI check to the ROWriteMethodType type; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src, dst, 0) with
// MSVC type descriptors (0x00A2E2F8, 0x00A947D0), which have no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_00630CE0(void* self) {
    return self;
}

// [0x005F35A0] ExprParser::ROWriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType<EffectorGroup,float>::vfunc_16
// @class ExprParser::ROWriteMethodType<EffectorGroup,float>
// @summary RTTI-checked cast of self to the EffectorGroup vcall-84 write-method descriptor; returns the cast pointer or NULL.
void* fn_005F35A0(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A912F8, 0);
}

// [0x00603420] ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType<EffectorBase,NM::Vector4 const &>::vfunc_16
// @class ExprParser::ROWriteMethodType<EffectorBase,NM::Vector4 const &>
// @summary RTTI-checked cast of self to the EffectorBase vcall-76 write-method descriptor; returns the cast pointer or NULL.
void* fn_00603420(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A93714, 0);
}
