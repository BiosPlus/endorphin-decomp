// Lifted C++ translation unit: lifted/templates/DynamicEnumType.cpp
#include "lift_compat.h"

// Helper callees
extern "C" void ext_00494830(void* inner);
extern "C" void ext_004A9D80(void* inner);
extern "C" void ext_004D4160(void* inner);
extern "C" void ext_004D4190(void* inner);
extern "C" void ext_00515830(void* inner);
extern "C" void ext_00515840(void* inner);
extern "C" void ext_005C3F10(void* inner);
extern "C" void ext_006720A0(void* self, void* arg);
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType,
                              const void* targetType, int isReference);

// RTTI type descriptors
extern "C" const char mem_00A2E2F8[];
extern "C" const char mem_00A328D4[];
extern "C" const char mem_00A32954[];
extern "C" const char mem_00A346B0[];
extern "C" const char mem_00A3C268[];
extern "C" const char mem_00A4279C[];
extern "C" const char mem_00A8AFF4[];

struct ValueArg {
    void* field_0x0;
    void** field_0x4;
};

struct DynEnumVfunc9Arg {
    void* field_0x0;
    void** field_0x4;
};

void fn_00495020(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00494830(inner);
}

// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004AB2B0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004A9D80(inner);
}

// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004D8B10(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004D4160(inner);
}

// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004D8BA0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004D4190(inner);
}

// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_00515D10(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00515830(inner);
}

// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_00515DA0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00515840(inner);
}

// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_005C85C0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_005C3F10(inner);
}

// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Dynamic-cast self (RTTI src 0xA2E2F8 -> dst 0xA346B0, no vfptr offset) and return the resulting pointer.
void* fn_00494810(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A346B0, 0);
}

// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_16
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Dynamic-casts self to the EvolverRuntimeOptions enum type via __RTDynamicCast (pointer cast; returns null on failure).
void* fn_00515850(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A4279C, 0);
}

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

void* fn_004A9CC0(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A32954, 0);
}

// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Dynamic-casts self to the MaterialPair enum type via __RTDynamicCast (pointer cast; returns null on failure).
void* fn_004B7160(void* self) {
    return ext_006A6E9E(self, 0, mem_00A2E2F8, mem_00A328D4, 0);
}

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
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// RTTI type descriptors: source = 0x00A2E2F8, target = 0x00A4279C.

extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// RTTI type descriptors: source = 0x00A2E2F8, target = 0x00A4279C.
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Dynamically casts the input object pointer to NMData::RigEventData using __RTDynamicCast.

#include "lift_compat.h"

extern "C" const char mem_00A2E2F8[];
extern "C" const char mem_00A3C268[];
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);

void* __thiscall fn_004D3E20(void* /*self*/, void* obj) {
    return ext_006A6E9E(obj, 0, mem_00A2E2F8, mem_00A3C268, 0);
}
extern "C" void ext_00671100(int selector, void* arg);
#include <stdexcept>
extern "C" void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern "C" void ext_006A6DD2();

extern "C" void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern "C" void ext_006A6DD2();
// @summary Dynamically casts the input object pointer to NMData::CollisionModelDataBase using __RTDynamicCast.

#include "lift_compat.h"

extern "C" const char mem_00A2E2F8[];
extern "C" const char mem_00A8AFF4[];
extern "C" void* ext_006A6E9E(void* inPtr, ptrdiff_t vfDelta, const void* srcType,
                              const void* targetType, int isReference);

void* __thiscall fn_005C4870(void* /*self*/, void* obj) {
    return ext_006A6E9E(obj, 0, mem_00A2E2F8, mem_00A8AFF4, 0);
}
// Callee 0x0046C3C0: constructor-like routine, receives the exception buffer as its thiscall `this` (ecx).
extern "C" void __thiscall ext_0046C3C0(void* self);
// Callee 0x006A6DD2: IAT thunk forwarding to MSVCR80!_CxxThrowException(object, throwInfo) (cdecl).
extern "C" void ext_006A6DD2(void* exceptionObject, const void* throwInfo);
// Throw-info descriptor pushed as the second argument of the throw (address 0x009DEC1C).
static const void* const kThrowInfo_009DEC1C = reinterpret_cast<const void*>(0x009DEC1Cu);

extern "C" void __thiscall ext_0046C3C0(void* self);
// Callee 0x006A6DD2: IAT thunk forwarding to MSVCR80!_CxxThrowException(object, throwInfo) (cdecl).
extern "C" void ext_006A6DD2(void* exceptionObject, const void* throwInfo);
// Throw-info descriptor pushed as the second argument of the throw (address 0x009DEC1C).
static const void* const kThrowInfo_009DEC1C = reinterpret_cast<const void*>(0x009DEC1Cu);
    return ext_006A6E9E(ptr, 0, mem_00A2E2F8, mem_00A4279C, 0);
}
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Callee 0x0046C3C0: constructor-like routine (builds the exception object in the caller's frame).
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)

// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// @name DynamicEnumType::vfunc_9
// @class ExprParser::DynamicEnumType
// @summary Dispatches vtable+0x78 on field_0x4 with arg0, then calls sub_006720A0 on arg0 with arg1.
// @field ExprParser::DynamicEnumType +0x04 void* field_0x04

#include "lift_compat.h"

extern uint32_t mem_read32(uint32_t addr);
extern uint32_t __thiscall ext_006720A0(uint32_t self, uint32_t arg1);

uint32_t __stdcall fn_0067A770(uint32_t arg0, uint32_t arg1) {
    uint32_t obj = mem_read32(arg0 + 0x04);
    uint32_t vtable = mem_read32(obj);
    typedef void (__thiscall *VFunc)(uint32_t, uint32_t);
    VFunc fn = reinterpret_cast<VFunc>(static_cast<uintptr_t>(mem_read32(vtable + 0x78)));
    fn(obj, arg0);
    return ext_006720A0(arg0, arg1);
}

// [0x004C0320] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_13 (13 bytes)
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_13
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x005C3380 (ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_13).
void fn_004C0320(void* arg) {
    ext_00671100(1, arg);
}

// [0x00515E80] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_1 (45 bytes)
// @name ExprParser::DynamicEnumType::vfunc_1 (EvolverRuntimeOptions)
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Reads the int at +0x0C of the object referenced by the first pointer in the argument block and returns it as a double; throws if that pointer is null.
// @field <unknown> +0x0C int field_0x0C
double fn_00515E80(void* const* holder) {
    void* obj = holder ? *holder : nullptr;
    if (obj == nullptr) {
        throw std::runtime_error("ExprParser::DynamicEnumType: null value pointer");
    }
    const int value = lift_field<int>(obj, 0x0C);
    return static_cast<double>(value);
}

// [0x00516550] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_2 (45 bytes)
// @name ExprParser::DynamicEnumType::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Loads the int value through the holder's pointer at +0x00 (throws if null) and returns the int at +0x08 of the pointee.
// @field ExprParser::DynamicEnumType +0x00 void* ptr
// @field ExprParser::DynamicEnumType +0x08 int field_0x08

struct DynamicEnumHolder {
    void* ptr;
};

struct DynamicEnumTarget {
    unsigned char field_0x00_pad[8];
    int field_0x08;
};

// Argument is a pointer to a holder whose first member points at the target object.
// If the target pointer is null, the original code raises a C++ exception; that path is
// modeled here with a call through the known thunk symbol, which the lift toolchain resolves.
extern "C" int fn_00516550(void* arg) {
    auto* holder = static_cast<DynamicEnumHolder*>(arg);
    auto* target = static_cast<DynamicEnumTarget*>(holder->ptr);
    if (target == nullptr) {
        ext_0046C3C0();
        ext_006A6DD2();
        return 0;
    }
    return target->field_0x08;
}

// [0x00516170] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, ...>::vfunc_2 (45 bytes)
// @name ExprParser::DynamicEnumType::vfunc_2
// @class ExprParser::DynamicEnumType
// @summary Loads the wrapped pointer at (*self) and returns its +0x0C field as a 32-bit value; throws if the wrapped pointer is null.
// @field ExprParser::DynamicEnumType +0x00 void* field_0x00
// @field ExprParser::DynamicEnumType +0x0C uint32_t field_0x0C
//
// Original (stdcall, one stack argument, `ret 4`): eax = *(*arg); if eax == 0, the
// original builds a C++ exception object via sub_0046C3C0 and throws it. The throw
// is modeled here with a standard exception type; the exception-object construction
// has no portable equivalent and is dropped.
uint32_t fn_00516170(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* inner = lift_field<void*>(base, 0x00);
    if (inner == nullptr) {
        throw std::runtime_error("ExprParser::DynamicEnumType::vfunc_2: null wrapped pointer");
    }
    return lift_field<uint32_t>(inner, 0x0C);
}

// [0x00515FD0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_1 (45 bytes)
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>::vfunc_1 (value read through the held pointer)
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Reads the int at +0x08 of the object pointed to by self's first pointer and returns it as a float (x87 st0 via fild); throws if that pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
// @field unknown +0x08 int field_0x08
float fn_00515FD0(void* self) {
    void* ptr = *reinterpret_cast<void**>(self);
    if (ptr == nullptr) {
        // Null-pointer path: construct the exception object and throw (original: sub_0046C3C0 then _CxxThrowException).
        ext_0046C3C0();
        ext_006A6DD2();
        return 0.0f;
    }
    return static_cast<float>(*reinterpret_cast<int*>(static_cast<unsigned char*>(ptr) + 0x08));
}
