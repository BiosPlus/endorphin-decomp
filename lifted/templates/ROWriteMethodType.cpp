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

// [0x0059EB40] ExprParser::ROWriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_16 (30 bytes)
// @name ExprParser::ROWriteMethodType<NMData::CharacterData>::vfunc_16
// @class ExprParser::ROWriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A2FB54 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_0059EB40(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A2FB54), 0);
}
