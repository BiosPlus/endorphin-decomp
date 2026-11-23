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

void* __thiscall fn_005C4870(void* /*self*/, void* obj) {
    return ext_006A6E9E(obj, 0, mem_00A2E2F8, mem_00A8AFF4, 0);
}

// @name DynamicEnumType::vfunc_9
// @class ExprParser::DynamicEnumType
// @summary Dispatches vtable+0x78 on field_0x4 with arg0, then calls sub_006720A0 on arg0 with arg1.
// @field ExprParser::DynamicEnumType +0x04 void* field_0x04

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
#include <cstdint>

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

// [0x00515FD0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_1 (45 bytes)
namespace lift_00515FD0 {
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_1
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Auto-lifted identical-shape clone of 0x00515E80 (ExprParser::DynamicEnumType::vfunc_1 (EvolverRuntimeOptions)).
double fn_00515FD0(void* const* holder) {
    void* obj = holder ? *holder : nullptr;
    if (obj == nullptr) {
        throw std::runtime_error("ExprParser::DynamicEnumType: null value pointer");
    }
    const int value = lift_field<int>(obj, 0x8);
    return static_cast<double>(value);
}
} // namespace lift_00515FD0

// [0x00516170] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_2 (45 bytes)
namespace lift_00516170 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::DynamicEnumType<EvolverRuntimeOptions>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Returns the dword at +0x0C of the object referenced by the holder's first pointer; throws if that pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
// @field ExprParser::ValuePtrType +0x0C std::uint32_t field_0x0c
std::uint32_t fn_00516170(void* self) {
    // holder->ptr
    void* target = *reinterpret_cast<void**>(self);
    if (target == nullptr) {
        // Original: builds an exception object via sub_0046C3C0 and throws
        // through _CxxThrowException (type 0x009DEC1C).
        ext_0046C3C0();
        ext_006A6DD2();
        return 0;
    }
    return *reinterpret_cast<std::uint32_t*>(static_cast<std::uint8_t*>(target) + 0x0C);
}
} // namespace lift_00516170

// [0x00516550] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_2 (45 bytes)
namespace lift_00516550 {
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Returns the int at +0x08 of the object referenced by the holder's target pointer; throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field EvolverRuntimeOptions +0x08 int field_0x08

// Reads the first-level target pointer from the holder (arg at [esp+4]),
// then returns the 32-bit value stored at target+0x08. A null target throws.
int32_t fn_00516550(const void* const* holder) {
    const void* target = *holder;
    if (target == nullptr) {
        throw std::runtime_error("ExprParser::DynamicEnumType: null target");
    }
    int32_t value;
    std::memcpy(&value, static_cast<const std::byte*>(target) + 0x08, sizeof(value));
    return value;
}
} // namespace lift_00516550

// [0x00494A60] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_2 (47 bytes)
namespace lift_00494A60 {
extern void ext_006AD970(void* ptr);

// @name ExprParser::DynamicEnumType<RigManager>::vfunc_2
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary If the holder's first pointer is set, release it via ext_006AD970; otherwise throw.
// @field DynamicEnumType +0x00 void* field_0x00
void fn_00494A60(void* self) {
    void* ptr = lift_field<void*>(self, 0x00);
    if (ptr != nullptr) {
        ext_006AD970(ptr);
        return;
    }
    // Original constructs a local exception object via sub_0046C3C0 and throws it
    // through _CxxThrowException; the message text is not recoverable from the
    // disassembly, so a portable std::runtime_error stands in.
    throw std::runtime_error("DynamicEnumType: null value pointer");
}
} // namespace lift_00494A60

// [0x004AB340] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_2 (47 bytes)
namespace lift_004AB340 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004A2B90 (ExprParser::ReadMethodType<FSMEditView>::vfunc_3).
namespace lift_004A2B90 {
extern void ext_004A9CE0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadMethodType<FSMEditView>::vfunc_3
// @class ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0>
// @summary Reads the pointer at arg+0; if non-null releases it via ext_0049AA50, otherwise raises a C++ exception.
// @field ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0> +0x00 void* field_0x00
void fn_004AB340(void* arg) {
    // Callee pops its single 4-byte argument (ret 4).
    void* const* slot = static_cast<void* const*>(arg);
    if (slot[0] != nullptr) {
        ext_004A9CE0();
        return;
    }
    // Null path: build a local error object (ext_0046C3C0) and throw it.
    ext_0046C3C0();
    ext_006A6DD2();
}
} // namespace lift_004A2B90
} // namespace lift_004AB340

// [0x004B9B50] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_2 (47 bytes)
namespace lift_004B9B50 {
// @name ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Auto-lifted identical-shape clone of 0x004A2B90 (ExprParser::ReadMethodType<FSMEditView>::vfunc_3).
namespace lift_004A2B90 {
extern void ext_004B72D0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadMethodType<FSMEditView>::vfunc_3
// @class ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0>
// @summary Reads the pointer at arg+0; if non-null releases it via ext_0049AA50, otherwise raises a C++ exception.
// @field ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0> +0x00 void* field_0x00
void fn_004B9B50(void* arg) {
    // Callee pops its single 4-byte argument (ret 4).
    void* const* slot = static_cast<void* const*>(arg);
    if (slot[0] != nullptr) {
        ext_004B72D0();
        return;
    }
    // Null path: build a local error object (ext_0046C3C0) and throw it.
    ext_0046C3C0();
    ext_006A6DD2();
}
} // namespace lift_004A2B90
} // namespace lift_004B9B50

// [0x004D4D90] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_2 (47 bytes)
namespace lift_004D4D90 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004A2B90 (ExprParser::ReadMethodType<FSMEditView>::vfunc_3).
namespace lift_004A2B90 {
extern void ext_004D3CE0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadMethodType<FSMEditView>::vfunc_3
// @class ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0>
// @summary Reads the pointer at arg+0; if non-null releases it via ext_0049AA50, otherwise raises a C++ exception.
// @field ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0> +0x00 void* field_0x00
void fn_004D4D90(void* arg) {
    // Callee pops its single 4-byte argument (ret 4).
    void* const* slot = static_cast<void* const*>(arg);
    if (slot[0] != nullptr) {
        ext_004D3CE0();
        return;
    }
    // Null path: build a local error object (ext_0046C3C0) and throw it.
    ext_0046C3C0();
    ext_006A6DD2();
}
} // namespace lift_004A2B90
} // namespace lift_004D4D90

// [0x004D50F0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_2 (47 bytes)
namespace lift_004D50F0 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004A2B90 (ExprParser::ReadMethodType<FSMEditView>::vfunc_3).
namespace lift_004A2B90 {
extern void ext_004D3CF0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadMethodType<FSMEditView>::vfunc_3
// @class ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0>
// @summary Reads the pointer at arg+0; if non-null releases it via ext_0049AA50, otherwise raises a C++ exception.
// @field ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0> +0x00 void* field_0x00
void fn_004D50F0(void* arg) {
    // Callee pops its single 4-byte argument (ret 4).
    void* const* slot = static_cast<void* const*>(arg);
    if (slot[0] != nullptr) {
        ext_004D3CF0();
        return;
    }
    // Null path: build a local error object (ext_0046C3C0) and throw it.
    ext_0046C3C0();
    ext_006A6DD2();
}
} // namespace lift_004A2B90
} // namespace lift_004D50F0

// [0x005C8A10] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_2 (47 bytes)
namespace lift_005C8A10 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_2
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004A2B90 (ExprParser::ReadMethodType<FSMEditView>::vfunc_3).
namespace lift_004A2B90 {
extern void ext_005C3FB0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadMethodType<FSMEditView>::vfunc_3
// @class ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0>
// @summary Reads the pointer at arg+0; if non-null releases it via ext_0049AA50, otherwise raises a C++ exception.
// @field ExprParser::ReadMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, 0> +0x00 void* field_0x00
void fn_005C8A10(void* arg) {
    // Callee pops its single 4-byte argument (ret 4).
    void* const* slot = static_cast<void* const*>(arg);
    if (slot[0] != nullptr) {
        ext_005C3FB0();
        return;
    }
    // Null path: build a local error object (ext_0046C3C0) and throw it.
    ext_0046C3C0();
    ext_006A6DD2();
}
} // namespace lift_004A2B90
} // namespace lift_005C8A10

// [0x00516580] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_3 (52 bytes)
namespace lift_00516580 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::DynamicEnumType<EvolverRuntimeOptions>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Returns true if the bound pointer (arg->ptr) is non-null and its +0x08 word is nonzero; throws via CxxThrowException when the pointer is null.
// @field ExprParser::DynamicEnumType +0x00 void* ptr
// @field ExprParser::DynamicEnumType +0x08 uint32_t field_0x08
bool fn_00516580(void* arg) {
    void* p = *reinterpret_cast<void**>(arg);
    if (p == nullptr) {
        ext_0046C3C0();   // constructs local exception object (sub_0046C3C0)
        ext_006A6DD2();   // _CxxThrowException(&exc, ThrowInfo @ 0x009DEC1C)
        return false;     // unreachable
    }
    uint32_t v = lift_field<uint32_t>(p, 0x08);
    return v != 0;
}
} // namespace lift_00516580

// [0x005161A0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, ...>::vfunc_3 (52 bytes)
namespace lift_005161A0 {
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Returns true when the wrapped NMData::EvolverRuntimeOptions has a nonzero dword at +0x0C; throws if no target is bound.
// @field ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions> +0x00 void* field_0x00
// @field NMData::EvolverRuntimeOptions +0x0C int32_t field_0x0c
//
// Callee-pops (ret 4) single-argument member: `self` is the DynamicEnumType object.
// The original throws an MSVC exception object (sub_0046C3C0 + _CxxThrowException with
// type info 0x009DEC1C) on a null target; its layout and message are not recovered, so a
// portable std exception stands in for it.
extern bool fn_005161A0(void* self) {
    void* target = lift_field<void*>(self, 0x00);
    if (target != nullptr) {
        return lift_field<int32_t>(target, 0x0C) != 0;
    }
    throw std::runtime_error("NMData::EvolverRuntimeOptions: null value");
}
} // namespace lift_005161A0

// [0x00494D50] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_3 (53 bytes)
namespace lift_00494D50 {
// Callee 0x006AD970 (thiscall, `this` in ecx, no stack arguments, returns int in eax).
extern int32_t ext_006AD970(void* self);

// @name ExprParser::DynamicEnumType<RigManager>::vfunc_3
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Returns true if the bound pointer (self->ptr) is non-null and the helper 0x006AD970 on it returns nonzero; throws std::runtime_error when the pointer is null.
// @field ExprParser::DynamicEnumType +0x00 void* ptr
bool fn_00494D50(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    if (inner == nullptr) {
        // Original builds an MSVC exception object (sub_0046C3C0) and throws it
        // via _CxxThrowException (type 0x009DEC1C); the message is not recoverable,
        // so a portable std::runtime_error stands in.
        throw std::runtime_error("ExprParser::DynamicEnumType<RigManager>: null value pointer");
    }
    return ext_006AD970(inner) != 0;
}
} // namespace lift_00494D50

// [0x004AB370] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_3 (53 bytes)
namespace lift_004AB370 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EB50 (ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3).
namespace lift_0046EB50 {
extern int ext_004A9CE0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Not referenced: the throw path is expressed portably below (see note there).

// @name ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3
// @class ExprParser::ReadMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, 0>
// @summary Reads the pointer held at self; if non-null returns 1 when ext_006ACFB0() is nonzero, else 0; throws if the pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
int fn_004AB370(void* self) {
    void* value = *static_cast<void**>(self);
    if (value == nullptr) {
        // Original constructs an exception object via ext_0046C3C0 and throws it
        // (RTTI type 0x009DEC1C). Portable equivalent: throw a standard exception.
        throw std::runtime_error("ReadMethodType: null value pointer");
    }
    return ext_004A9CE0() != 0 ? 1 : 0;
}
} // namespace lift_0046EB50
} // namespace lift_004AB370

// [0x004B9B80] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_3 (53 bytes)
namespace lift_004B9B80 {
// @name ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Auto-lifted identical-shape clone of 0x0046EB50 (ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3).
namespace lift_0046EB50 {
extern int ext_004B72D0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Not referenced: the throw path is expressed portably below (see note there).

// @name ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3
// @class ExprParser::ReadMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, 0>
// @summary Reads the pointer held at self; if non-null returns 1 when ext_006ACFB0() is nonzero, else 0; throws if the pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
int fn_004B9B80(void* self) {
    void* value = *static_cast<void**>(self);
    if (value == nullptr) {
        // Original constructs an exception object via ext_0046C3C0 and throws it
        // (RTTI type 0x009DEC1C). Portable equivalent: throw a standard exception.
        throw std::runtime_error("ReadMethodType: null value pointer");
    }
    return ext_004B72D0() != 0 ? 1 : 0;
}
} // namespace lift_0046EB50
} // namespace lift_004B9B80

// [0x004D4DC0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_3 (53 bytes)
namespace lift_004D4DC0 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EB50 (ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3).
namespace lift_0046EB50 {
extern int ext_004D3CE0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Not referenced: the throw path is expressed portably below (see note there).

// @name ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3
// @class ExprParser::ReadMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, 0>
// @summary Reads the pointer held at self; if non-null returns 1 when ext_006ACFB0() is nonzero, else 0; throws if the pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
int fn_004D4DC0(void* self) {
    void* value = *static_cast<void**>(self);
    if (value == nullptr) {
        // Original constructs an exception object via ext_0046C3C0 and throws it
        // (RTTI type 0x009DEC1C). Portable equivalent: throw a standard exception.
        throw std::runtime_error("ReadMethodType: null value pointer");
    }
    return ext_004D3CE0() != 0 ? 1 : 0;
}
} // namespace lift_0046EB50
} // namespace lift_004D4DC0

// [0x004D5120] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_3 (53 bytes)
namespace lift_004D5120 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EB50 (ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3).
namespace lift_0046EB50 {
extern int ext_004D3CF0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Not referenced: the throw path is expressed portably below (see note there).

// @name ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3
// @class ExprParser::ReadMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, 0>
// @summary Reads the pointer held at self; if non-null returns 1 when ext_006ACFB0() is nonzero, else 0; throws if the pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
int fn_004D5120(void* self) {
    void* value = *static_cast<void**>(self);
    if (value == nullptr) {
        // Original constructs an exception object via ext_0046C3C0 and throws it
        // (RTTI type 0x009DEC1C). Portable equivalent: throw a standard exception.
        throw std::runtime_error("ReadMethodType: null value pointer");
    }
    return ext_004D3CF0() != 0 ? 1 : 0;
}
} // namespace lift_0046EB50
} // namespace lift_004D5120

// [0x005C8A40] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_3 (53 bytes)
namespace lift_005C8A40 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_3
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EB50 (ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3).
namespace lift_0046EB50 {
extern int ext_005C3FB0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Not referenced: the throw path is expressed portably below (see note there).

// @name ExprParser::ReadMethodType<ImageExporter,int,ImageExporter::getEndFrame,0>::vfunc_3
// @class ExprParser::ReadMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, 0>
// @summary Reads the pointer held at self; if non-null returns 1 when ext_006ACFB0() is nonzero, else 0; throws if the pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
int fn_005C8A40(void* self) {
    void* value = *static_cast<void**>(self);
    if (value == nullptr) {
        // Original constructs an exception object via ext_0046C3C0 and throws it
        // (RTTI type 0x009DEC1C). Portable equivalent: throw a standard exception.
        throw std::runtime_error("ReadMethodType: null value pointer");
    }
    return ext_005C3FB0() != 0 ? 1 : 0;
}
} // namespace lift_0046EB50
} // namespace lift_005C8A40

// [0x00494A20]
namespace lift_00494A20 {
// @name ExprParser::ReadMethodType<RigManager, int, &RigManager::getRigTypeIndex, 1>::vfunc_1
// @class ExprParser::DynamicEnumType<RigManager>
// @summary Reads the rig type index from a RigManager pointer as a double, or throws an exception if the pointer is null.


extern int __thiscall ext_006AD970(uint32_t self);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* exceptionObject, uint32_t throwInfo);

double __thiscall fn_00494A20(uint32_t self, uint32_t ptrAddr) {
    (void)self;
    uint32_t obj = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ptrAddr));
    if (obj != 0) {
        int val = ext_006AD970(obj);
        return static_cast<double>(val);
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return 0.0;
}
} // namespace lift_00494A20

// [0x004D4D50]
namespace lift_004D4D50 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::getDoubleValue
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Reads the RigEventData type name index as a double, or throws an exception if the object pointer is null.

extern uint32_t mem_read32(uint32_t addr);
extern int32_t __thiscall ext_004D3CE0(uint32_t self);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

double __stdcall fn_004D4D50(uint32_t valuePtr) {
    uint32_t obj = mem_read32(valuePtr);
    if (obj != 0) {
        int32_t val = ext_004D3CE0(obj);
        return static_cast<double>(val);
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return 0.0;
}
} // namespace lift_004D4D50

// [0x004D50B0]
namespace lift_004D50B0 {
// @name DynamicEnumType::vfunc_1
// @class ExprParser::DynamicEnumType
// @summary Reads the tweak name index from RigEventData and returns it as a double, or throws if null.

extern int __thiscall ext_004D3CF0(void* self);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

double __stdcall fn_004D50B0(uint32_t* arg0) {
    uint32_t obj = *arg0;
    if (obj != 0) {
        int val = ext_004D3CF0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
        return static_cast<double>(val);
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return 0.0;
}
} // namespace lift_004D50B0

// [0x004AB610] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_1 (55 bytes)
namespace lift_004AB610 {
extern void ext_0046C3C0();
extern void ext_006A6DD2();

// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_1
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004D50B0 (DynamicEnumType::vfunc_1).
namespace lift_004D50B0 {
// @name DynamicEnumType::vfunc_1
// @class ExprParser::DynamicEnumType
// @summary Reads the tweak name index from RigEventData and returns it as a double, or throws if null.

extern int __thiscall ext_004A9CE0(void* self);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

double __stdcall fn_004AB610(uint32_t* arg0) {
    uint32_t obj = *arg0;
    if (obj != 0) {
        int val = ext_004A9CE0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
        return static_cast<double>(val);
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return 0.0;
}
} // namespace lift_004D50B0
} // namespace lift_004AB610

// [0x004B9B10] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_1 (55 bytes)
namespace lift_004B9B10 {
extern void ext_0046C3C0();
extern void ext_006A6DD2();

// @name ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_1
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Auto-lifted identical-shape clone of 0x004D50B0 (DynamicEnumType::vfunc_1).
namespace lift_004D50B0 {
// @name DynamicEnumType::vfunc_1
// @class ExprParser::DynamicEnumType
// @summary Reads the tweak name index from RigEventData and returns it as a double, or throws if null.

extern int __thiscall ext_004B72D0(void* self);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

double __stdcall fn_004B9B10(uint32_t* arg0) {
    uint32_t obj = *arg0;
    if (obj != 0) {
        int val = ext_004B72D0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
        return static_cast<double>(val);
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return 0.0;
}
} // namespace lift_004D50B0
} // namespace lift_004B9B10

// [0x005C89D0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_1 (55 bytes)
namespace lift_005C89D0 {
extern void ext_0046C3C0();
extern void ext_006A6DD2();

// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_1
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004D50B0 (DynamicEnumType::vfunc_1).
namespace lift_004D50B0 {
// @name DynamicEnumType::vfunc_1
// @class ExprParser::DynamicEnumType
// @summary Reads the tweak name index from RigEventData and returns it as a double, or throws if null.

extern int __thiscall ext_005C3FB0(void* self);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

double __stdcall fn_005C89D0(uint32_t* arg0) {
    uint32_t obj = *arg0;
    if (obj != 0) {
        int val = ext_005C3FB0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
        return static_cast<double>(val);
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return 0.0;
}
} // namespace lift_004D50B0
} // namespace lift_005C89D0

// [0x00515B90] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_41 (63 bytes)
namespace lift_00515B90 {
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Requires the holder's bound target (holder->target) to be non-null, then stores the int returned by the inner object's vtable slot +0x08 (called with arg2) into target+0x0C.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field <unknown> +0x04 void* field_0x04
// @field <unknown> +0x0C int32_t field_0x0C

// Callee-pops (ret 8) two-argument function:
//   arg1 (holder): pointer to a slot holding the target object pointer.
//   arg2: block whose +0x04 word is the inner object that receives the virtual call.
void fn_00515B90(void** holder, void* arg2) {
    void* target = *holder;
    if (target == nullptr) {
        // Original builds an MSVC exception object (sub_0046C3C0) and throws it
        // via _CxxThrowException (type 0x009DEC1C); message is not recoverable,
        // so a portable std::runtime_error stands in.
        throw std::runtime_error("ExprParser::DynamicEnumType: null target");
    }

    using VFn = int32_t (*)(void* self, void* arg);
    void* inner = lift_field<void*>(arg2, 0x04);
    void* vtable = lift_field<void*>(inner, 0x00);
    VFn vfn = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x08));
    int32_t result = vfn(inner, arg2);

    lift_field<int32_t>(target, 0x0C) = result;
}
} // namespace lift_00515B90

// [0x00515C50] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_41 (63 bytes)
namespace lift_00515C50 {
// Known callee 0x0046C3C0: sub_0046C3C0 (builds the error/exception payload in-place)
extern void ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exceptionObject, const void* throwInfo);
// Throw-info descriptor referenced by the throw path (VA 0x009DEC1C).
extern const unsigned char mem_009DEC1C[];

// @name ExprParser::DynamicEnumType<EvolverRuntimeOptions>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary If the holder's stored target pointer is non-null, invoke source->inner->vfunc[2](source) and store the uint32 result into target+0x08; otherwise build an exception payload and throw.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
// @field ExprParser::DynamicEnumType +0x04 void* field_0x04
// @field ExprParser::DynamicEnumType +0x00 void* field_0x00
// @field ExprParser::ValuePtrType +0x08 uint32_t field_0x08
void fn_00515C50(void* holder, void* source) {
    // esi = *holder
    void* target = lift_field<void*>(holder, 0x00);
    if (target == nullptr) {
        // lea ecx,[holder]; call sub_0046C3C0; throw(holder, 0x009DEC1C)
        ext_0046C3C0(holder);
        ext_006A6DD2(holder, mem_009DEC1C);
        return;
    }

    // ecx = source->inner (source+0x04); edx = inner->vtable; eax = vtable[2]
    void* inner = lift_field<void*>(source, 0x04);
    void** vtable = *reinterpret_cast<void***>(inner);
    using VFunc = uint32_t (*)(void* self, void* arg);
    VFunc vfunc2 = reinterpret_cast<VFunc>(vtable[2]);
    uint32_t result = vfunc2(inner, source);

    // mov [target+8], eax
    lift_field<uint32_t>(target, 0x08) = result;
}
} // namespace lift_00515C50
