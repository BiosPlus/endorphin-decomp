// Lifted C++ translation unit: lifted/templates/FunctionType.cpp
#include "lift_compat.h"
// Lifted from 0x005B8660: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A2FB78;
extern "C" int mem_00A2E2F8;
// Lifted from 0x0062E3C0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A98AC8;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A98AC8;
// @class ExprParser::FunctionType<NMData::MetaBodyData,getNearestGeomPoint>
// @summary RTTI-checked cast of self to the getNearestGeomPoint FunctionType descriptor; returns the cast pointer or NULL.
void* fn_005B8660(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A2FB78, 0);
}
// Lifted from 0x006922D0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A398D0;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A398D0;
// @class ExprParser::FunctionType<Sensors::CompoundSensorPlanes,checkDistance>
// @summary RTTI-checked cast of self to the CompoundSensorPlanes::checkDistance FunctionType descriptor; returns the cast pointer or NULL.
void* fn_0062E3C0(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A98AC8, 0);
}

// [0x006922D0] ExprParser::FunctionType<ValuePtrArrayObject, ValuePtr const &, ValuePtr const &, {public: class ValuePtr const & __thiscall ValuePtrArrayObject::push(class ValuePtr const &), 0}>::vfunc_16 (30 bytes)
// @name ExprParser::FunctionType<ValuePtrArrayObject,push>::vfunc_16
// @class ExprParser::FunctionType<ValuePtrArrayObject,push>
// @summary RTTI-checked cast of self to the ValuePtrArrayObject::push FunctionType descriptor; returns the cast pointer or NULL.
void* fn_006922D0(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A398D0, 0);
}
