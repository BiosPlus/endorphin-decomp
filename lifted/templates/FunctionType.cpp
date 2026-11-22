// Lifted C++ translation unit: lifted/templates/FunctionType.cpp
#include "lift_compat.h"
// Lifted from 0x005B8660: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A2FB78;
extern "C" int mem_00A2E2F8;

// [0x005B8660] ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_16 (30 bytes)
// @name ExprParser::FunctionType<NMData::MetaBodyData,getNearestGeomPoint>::vfunc_16
// @class ExprParser::FunctionType<NMData::MetaBodyData,getNearestGeomPoint>
// @summary RTTI-checked cast of self to the getNearestGeomPoint FunctionType descriptor; returns the cast pointer or NULL.
void* fn_005B8660(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A2FB78, 0);
}
