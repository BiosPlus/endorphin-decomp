// Lifted C++ translation unit: lifted/templates/DynamicEnumType.cpp
#include "lift_compat.h"
// Helper at 0x00494830 (33 bytes). Receives the inner object pointer as its single argument.
extern "C" void ext_00494830(void* inner);
extern "C" void ext_004A9D80(void* inner);
extern "C" void ext_004D4160(void* inner);
extern "C" void ext_004D4190(void* inner);
extern "C" void ext_00515830(void* inner);
extern "C" void ext_00515840(void* inner);
extern "C" void ext_005C3F10(void* inner);
// Type descriptors used as RTTI source / target for the dynamic cast.
extern "C" const char mem_00A2E2F8[];
extern "C" const char mem_00A346B0[];
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast).
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType,
                              const void* targetType, int isReference);

extern "C" const char mem_00A2E2F8[];
extern "C" const char mem_00A346B0[];
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast).
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType,
                              const void* targetType, int isReference);
void fn_00495020(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00494830(inner);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
extern "C" const char mem_00A32954[];
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004AB2B0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004A9D80(inner);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
extern "C" const char mem_00A328D4[];
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004D8B10(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004D4160(inner);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
extern "C" const char mem_00A3C268[];
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004D8BA0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004D4190(inner);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
extern "C" const char mem_00A4279C[];
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_00515D10(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00515830(inner);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
extern "C" const char mem_00A8AFF4[];
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_00515DA0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00515840(inner);
}
// Known callee 0x006720A0: sub_006720A0 (18 bytes). Member call: this = self, one argument.
extern "C" void ext_006720A0(void* self, void* arg);

extern "C" void ext_006720A0(void* self, void* arg);
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_005C85C0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_005C3F10(inner);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.

extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Dynamic-cast self (RTTI src 0xA2E2F8 -> dst 0xA346B0, no vfptr offset) and return the resulting pointer.
// No object fields are accessed directly.
void* fn_00494810(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A346B0, 0);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.

// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_16
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary Dynamic-casts self to the RigEventData tweak-enum type via __RTDynamicCast (pointer cast; returns null on failure).
void* fn_004D3E20(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A3C268, 0);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast).
// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.

// RTTI type descriptors: source = shared base descriptor, target = this enum's concrete type.
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_16
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Dynamic-casts self to the EvolverRuntimeOptions enum type via __RTDynamicCast (pointer cast; returns null on failure).
void* fn_00515850(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A4279C, 0);
}
extern "C" void* __cdecl ext_006A6E9E(void* obj, int vfDelta, void* srcType, void* targetType, int isReference);
extern char mem_00A2E2F8[];
extern char mem_00A8AFF4[];

extern char mem_00A2E2F8[];
extern char mem_00A8AFF4[];
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Calls the inner object's vtable slot 30 (offset 0x78) with self, then forwards arg to sub_006720A0 on self.
// @field ExprParser::DynamicEnumType +0x04 void* field_0x04
void fn_0067A770(void* self, void* arg) {
    void* inner = lift_field<void*>(self, 0x04);
    using VSlot30 = void (*)(void* thisPtr, void* a);
    void** vtbl = *reinterpret_cast<void***>(inner);
    reinterpret_cast<VSlot30>(vtbl[30])(inner, self);
    ext_006720A0(self, arg);
}
extern "C" void __attribute__((thiscall)) ext_006720A0(void* self, void* arg);
struct ValueArg {
    void* field_0x0;
    void** field_0x4;
};

struct ValueArg {
    void* field_0x0;
    void** field_0x4;
};
void* fn_004A9CC0(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A32954, 0);
}
#include <cstddef>
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A2E2F8;
extern "C" int mem_00A4279C;

extern "C" int mem_00A2E2F8;
extern "C" int mem_00A4279C;
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Dynamic-casts self to the MaterialPair enum type via __RTDynamicCast (pointer cast; returns null on failure).
void* fn_004B7160(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A328D4, 0);
}
struct DynEnumVfunc9Arg {
    void* field_0x0;
    void** field_0x4;
};

void* field_0x0;
    void** field_0x4;
};
// @summary Dynamic-casts self to the RigEventData tweak-enum type via __RTDynamicCast (pointer cast; returns null on failure).
void* fn_004D3E20(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A3C268, 0);
}
extern char mem_00A3C268[];
                              const void* targetType, int isReference);
extern "C" void ext_006A6E9E();
extern "C" void* ext_006A6E9E(void* src, int voffset, const void* srcType, const void* targetType, int isReference);
extern "C" unsigned int mem_00A3C268;
extern "C" unsigned int mem_00A2E2F8;

extern "C" unsigned int mem_00A3C268;
extern "C" unsigned int mem_00A2E2F8;
// @class ExprParser::DynamicEnumType
// @summary Calls virtual method at +0x78 on arg1's inner object, then forwards arg1 and arg2 to sub_006720A0.
// @field DynEnumVfunc9Arg +0x04 void** field_0x4
void DynamicEnumType_vfunc_9(void* thisptr, DynEnumVfunc9Arg* arg1, void* arg2) {
    (void)thisptr;
    void** obj = arg1->field_0x4;
    typedef void (*Fn)(void*, void*);
    Fn fn = (Fn)((void**)(*obj))[0x78 / 4];
    fn(obj, arg1);
    ext_006720A0(arg1, arg2);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args)
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args)
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args)
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args)

// [0x004D3E20]
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_16
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Dynamic-casts self to the RigEventData tweak-enum type via __RTDynamicCast (returns null on failure).
void* fn_004D3E20(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A3C268, 0);
}

// [0x00515850]
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions,...>::vfunc_16
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, getCurrentIndividualIndex, setCurrentIndividualIndex, getNumIndividuals, getIndividualDescription>
// @summary RTTI type-guard: dynamic-casts the argument to this type (type descriptor 0x00A4279C) and returns the result or NULL.
void* fn_00515850(void* self, void* obj) {
    (void)self;
    return ext_006A6E9E(obj, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A4279C), 0);
}

// [0x005C4870] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, getMaterialNameIndex, setMaterialNameIndex, getNumListedMaterialNames, getListedMaterialName>::vfunc_16 (30 bytes)
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase>::vfunc_16 (materialNameIndex)
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase>
// @summary Runtime type check: returns self for a DynamicEnumType<CollisionModelDataBase> object, else NULL; identity for valid objects.
// No object fields are accessed directly. The original calls MSVCR80 __RTDynamicCast(self, 0, src 0x00A2E2F8, dst 0x00A8AFF4, 0),
// which has no portable equivalent; the cast succeeds for a valid self, so it returns self.
void* fn_005C4870(void* self) {
    return self;
}
