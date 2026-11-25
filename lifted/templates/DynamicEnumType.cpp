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
#include <cstdlib>
#include <string>

#include <string>
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_13
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x005C3380 (ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_13).
void fn_004C0320(void* arg) {
    ext_00671100(1, arg);
}
#include <cstring>
#include <cmath>
#include <new>

#include <cmath>
#include <new>
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

// [0x00496DA0] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_41 (68 bytes)
namespace lift_00496DA0 {
// @name ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_41
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00496CC0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_00496DA0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00496CC0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_00496DA0

// [0x004ACC80] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_41 (68 bytes)
namespace lift_004ACC80 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004ACA60();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004ACC80(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004ACA60)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004ACC80

// [0x004B7410] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_41 (68 bytes)
namespace lift_004B7410 {
// @name ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004B7340();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004B7410(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004B7340)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004B7410

// [0x004DC660] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_41 (68 bytes)
namespace lift_004DC660 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004DBD10();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004DC660(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004DBD10)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004DC660

// [0x004DC6B0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_41 (68 bytes)
namespace lift_004DC6B0 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004DBD90();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004DC6B0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004DBD90)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004DC6B0

// [0x005C47A0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_41 (68 bytes)
namespace lift_005C47A0 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_41
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_005C3EA0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_005C47A0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_005C3EA0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_005C47A0

// [0x00515E30] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_0 (69 bytes)
namespace lift_00515E30 {
// Callee 0x006720C0: __thiscall with `this` in ecx and one 4-byte stack argument (ret 4).
extern void ext_006720C0(void* self, int32_t value);

// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>::vfunc_0
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Reads the int at +0x0C of the object bound through the holder's pointer, passes it to ext_006720C0 on result, and returns result; throws if no target is bound.
// @field ExprParser::ValuePtrType +0x00 void* ptr
// @field NMData::EvolverRuntimeOptions +0x0C int32_t field_0x0c
void* fn_00515E30(void* result, void* holder) {
    void* target = *static_cast<void**>(holder);
    if (target == nullptr) {
        // Original constructs an MSVC exception object (ext_0046C3C0) and throws it
        // (type info 0x009DEC1C); the message is not recoverable, so a portable
        // std::runtime_error stands in.
        throw std::runtime_error("ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>: null value pointer");
    }
    const int32_t value = lift_field<int32_t>(target, 0x0C);
    ext_006720C0(result, value);
    return result;
}
} // namespace lift_00515E30

// [0x00515F80] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_0 (69 bytes)
namespace lift_00515F80 {
extern void ext_006720C0(void* self, int value);

// @name ExprParser::DynamicEnumType::vfunc_0
// @class ExprParser::DynamicEnumType
// @summary Forwards the value at offset +0x08 of the object referenced by *src into the output slot and returns it; throws if the object pointer is null.
// @field ExprParser::ValuePtrType +0x08 int field_0x08
void* fn_00515F80(void* out, void** src) {
    void* obj = (src != nullptr) ? *src : nullptr;
    if (obj == nullptr) {
        throw std::runtime_error("ExprParser::DynamicEnumType::vfunc_0: null object");
    }
    int value = lift_field<int>(obj, 8);
    ext_006720C0(out, value);
    return out;
}
} // namespace lift_00515F80

// [0x00494D00]
namespace lift_00494D00 {
extern uint32_t __thiscall ext_006AD970(uint32_t self);
extern void __thiscall ext_006720C0(void* self, uint32_t arg);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

extern uint32_t mem_009DEC1C;

// @name DynamicEnumType::getValueString
// @class ExprParser::DynamicEnumType<RigManager, ...>
// @summary Reads the rig type index from the dereferenced pointer and converts it to a string, or throws an exception if null.
extern void* __thiscall fn_00494D00(void* self, void* out_str, uint32_t* ptr) {
    (void)self;
    uint32_t obj = *ptr;
    if (obj != 0) {
        uint32_t val = ext_006AD970(obj);
        ext_006720C0(out_str, val);
        return out_str;
    }
    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, &mem_009DEC1C);
    return out_str;
}
} // namespace lift_00494D00

// [0x004D4820]
namespace lift_004D4820 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_0
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Evaluates/converts RigEventData type index to string or throws if null.


extern uint32_t __fastcall ext_004D3CE0(uint32_t self, uint32_t edx_unused);
extern uint32_t __fastcall ext_006720C0(uint32_t self, uint32_t edx_unused, uint32_t arg0);
extern void __fastcall ext_0046C3C0(uint32_t self, uint32_t edx_unused);
extern void __stdcall ext_006A6DD2(uint32_t exc_obj, uint32_t throw_info);

uint32_t __fastcall fn_004D4820(uint32_t self, uint32_t edx_unused, uint32_t out_str, uint32_t arg1) {
    (void)self;
    (void)edx_unused;
    uint32_t obj = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg1));
    if (obj != 0) {
        uint32_t val = ext_004D3CE0(obj, 0);
        ext_006720C0(out_str, 0, val);
        return out_str;
    }

    uint8_t exc_buf[40];
    uint32_t exc_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(exc_buf));
    ext_0046C3C0(exc_ptr, 0);
    ext_006A6DD2(exc_ptr, 0x009DEC1Cu);
    return 0;
}
} // namespace lift_004D4820

// [0x004D5060]
namespace lift_004D5060 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_0
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Reads the tweak name index from RigEventData or throws an exception if null.


extern uint32_t mem_read32(uint32_t addr);
extern int32_t __thiscall ext_004D3CF0(uint32_t self);
extern void __thiscall ext_006720C0(uint32_t self, int32_t value);
extern void __thiscall ext_0046C3C0(uint32_t self);
extern void __cdecl ext_006A6DD2(uint32_t exceptionObject, uint32_t throwInfo);

uint32_t __thiscall fn_004D5060(uint32_t self, uint32_t out_ptr, uint32_t arg_ptr) {
    (void)self;
    uint32_t obj = mem_read32(arg_ptr);
    if (obj != 0) {
        int32_t val = ext_004D3CF0(obj);
        ext_006720C0(out_ptr, val);
        return out_ptr;
    }

    uint8_t exc[44]{};
    uint32_t exc_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(exc));
    ext_0046C3C0(exc_addr);
    ext_006A6DD2(exc_addr, 0x009DEC1Cu);
    return 0;
}
} // namespace lift_004D5060

// [0x004AB5C0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_0 (71 bytes)
namespace lift_004AB5C0 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_0
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046D5D0 (ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>::vfunc_0).
namespace lift_0046D5D0 {
// @name ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>::vfunc_0
// @class ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>
// @summary Reads ImageExporter::getEndFrame() via ValuePtrType::vfunc_0 or throws if the object pointer is null.


extern int __thiscall ext_004A9CE0(void* self);
extern void __thiscall ext_006720C0(void* self, int value);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

extern void* __thiscall fn_004AB5C0(void* self, void* out_val, void** obj_ptr) {
    (void)self;
    void* obj = *obj_ptr;
    if (obj != nullptr) {
        int val = ext_004A9CE0(obj);
        ext_006720C0(out_val, val);
        return out_val;
    }

    uint8_t exc_buf[40];
    ext_0046C3C0(exc_buf);
    ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009DEC1C));
    return nullptr;
}
} // namespace lift_0046D5D0
} // namespace lift_004AB5C0

// [0x004B9AC0] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_0 (71 bytes)
namespace lift_004B9AC0 {
// @name ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_0
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Auto-lifted identical-shape clone of 0x0046D5D0 (ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>::vfunc_0).
namespace lift_0046D5D0 {
// @name ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>::vfunc_0
// @class ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>
// @summary Reads ImageExporter::getEndFrame() via ValuePtrType::vfunc_0 or throws if the object pointer is null.


extern int __thiscall ext_004B72D0(void* self);
extern void __thiscall ext_006720C0(void* self, int value);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

extern void* __thiscall fn_004B9AC0(void* self, void* out_val, void** obj_ptr) {
    (void)self;
    void* obj = *obj_ptr;
    if (obj != nullptr) {
        int val = ext_004B72D0(obj);
        ext_006720C0(out_val, val);
        return out_val;
    }

    uint8_t exc_buf[40];
    ext_0046C3C0(exc_buf);
    ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009DEC1C));
    return nullptr;
}
} // namespace lift_0046D5D0
} // namespace lift_004B9AC0

// [0x005C8C10] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_0 (71 bytes)
namespace lift_005C8C10 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_0
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046D5D0 (ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>::vfunc_0).
namespace lift_0046D5D0 {
// @name ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>::vfunc_0
// @class ExprParser::ReadMethodType<ImageExporter, int, ImageExporter::getEndFrame, 0>
// @summary Reads ImageExporter::getEndFrame() via ValuePtrType::vfunc_0 or throws if the object pointer is null.


extern int __thiscall ext_005C3FB0(void* self);
extern void __thiscall ext_006720C0(void* self, int value);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

extern void* __thiscall fn_005C8C10(void* self, void* out_val, void** obj_ptr) {
    (void)self;
    void* obj = *obj_ptr;
    if (obj != nullptr) {
        int val = ext_005C3FB0(obj);
        ext_006720C0(out_val, val);
        return out_val;
    }

    uint8_t exc_buf[40];
    ext_0046C3C0(exc_buf);
    ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009DEC1C));
    return nullptr;
}
} // namespace lift_0046D5D0
} // namespace lift_005C8C10

// [0x0067AAA0]
namespace lift_0067AAA0 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData>::vfunc_18
// @class ExprParser::DynamicEnumType<NMData::BehaviourData>
// @summary Lazily initializes a static TypeInfo/descriptor at 0x00B59F2C and returns its address.


extern uint32_t __cdecl ext_00671100(uint32_t);
extern void __cdecl ext_006A6C87(uint32_t);

extern uint32_t mem_00B59F2C;
extern uint32_t mem_00B59F30;
extern uint32_t mem_00B59F34;

uint32_t __thiscall fn_0067AAA0(void* self, uint32_t arg0) {
    (void)self;
    (void)arg0;
    if ((mem_00B59F34 & 1u) == 0) {
        mem_00B59F34 |= 1u;
        uint32_t val = ext_00671100(7u);
        mem_00B59F2C = 0u;
        mem_00B59F30 = val;
        ext_006A6C87(0x00921A80u);
    }
    return 0x00B59F2Cu;
}
} // namespace lift_0067AAA0

// [0x005165C0]
namespace lift_005165C0 {
// @name ExprParser::DynamicEnumType::vfunc_4
// @class ExprParser::DynamicEnumType
// @summary If the wrapped read-method pointer is non-null, forwards to fn_0046C500 with its field at +0x08 and returns the sret buffer; otherwise builds a temporary and throws.
// @field ExprParser::DynamicEnumType +0x00 void* ptr_ref
// @field ExprParser::DynamicEnumType +0x08 uint8_t field_0x08

extern void* ext_0046C500(void* out_str, uint8_t flag);
extern void ext_0046C3C0(void* self);
extern void ext_006A6DD2(void* type_info, void* obj);

extern void* fn_005165C0(void* out_str, void** ptr_ref) {
    void* inner = *ptr_ref;
    if (inner != nullptr) {
        uint8_t flag = *reinterpret_cast<uint8_t*>(static_cast<uint8_t*>(inner) + 0x08);
        ext_0046C500(out_str, flag);
        return out_str;
    }

    alignas(8) uint8_t local_str[0x18];
    ext_0046C3C0(local_str);
    ext_006A6DD2(reinterpret_cast<void*>(0x009DEC1Cu), local_str);
    return out_str;
}
} // namespace lift_005165C0

// [0x005161E0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_4 (71 bytes)
namespace lift_005161E0 {
// Known callee 0x0046C3C0: sub_0046C3C0 (105B). Ctor-style call on a local buffer (ecx = this).
extern void ext_0046C3C0(void* self);
// Known callee 0x0046C500: sub_0046C500 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString)).
extern void* ext_0046C500(void* out_str, uint8_t flag);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException).
extern void ext_006A6DD2();

// @name ExprParser::DynamicEnumType::vfunc_4
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Returns the individual description string for the value held behind the pointer-to-pointer argument; throws if that pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* value_ptr
// @field ExprParser::ValuePtrType +0x0C int field_0x0C
void* fn_005161E0(void* out_str, void** value_ref) {
    void* obj = *value_ref;
    if (obj != nullptr) {
        uint8_t flag = lift_field<uint8_t>(obj, 0x0C);
        return ext_0046C500(out_str, flag);
    }

    // Null path: build a local string object and throw.
    alignas(8) uint8_t local[0x28] = {};
    ext_0046C3C0(local);
    ext_006A6DD2();
    std::abort();
}
} // namespace lift_005161E0

// [0x00494D90] ExprParser::DynamicEnumType<RigManager, ...>::vfunc_4 (73 bytes)
namespace lift_00494D90 {
// Known callee 0x006AD970: sub_006AD970 (4B). Returns a 32-bit value used as the flag argument.
extern uint32_t ext_006AD970();
// Known callee 0x0046C500: sub_0046C500 (auto-lifted clone of 0x00497860 forwardMakeBoolString).
extern void* ext_0046C500(void* out_str, uint8_t flag);
// Known callee 0x0046C3C0: sub_0046C3C0 (105B, thiscall on a local 0x28-byte object).
extern void ext_0046C3C0(void* thisptr);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (forwards to _CxxThrowException).
extern void ext_006A6DD2(void* obj, uint32_t throwInfo);

// @name ExprParser::DynamicEnumType<RigManager>::vfunc_4
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary If the holder's first word is non-zero, call ext_0046C500 with the holder and the flag from ext_006AD970 and return the holder; otherwise build a local object and throw.
// @field ExprParser::ValuePtrType +0x00 uint32_t field_0x00
void* fn_00494D90(void* arg1, void* arg2) {
    (void)arg1;
    const uint32_t first = *static_cast<uint32_t*>(arg2);
    if (first != 0) {
        const uint32_t flag = ext_006AD970();
        ext_0046C500(arg2, static_cast<uint8_t>(flag));
        return arg2;
    }

    // Error path: build a local object, then throw it with the type info at 0x009DEC1C.
    alignas(8) uint8_t local[0x28] = {};
    ext_0046C3C0(local);
    ext_006A6DD2(local, 0x009DEC1Cu);
    return nullptr; // not reached: the throw does not return
}
} // namespace lift_00494D90

// [0x004AB650] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_4 (73 bytes)
namespace lift_004AB650 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_4
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00471440 (ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4).
namespace lift_00471440 {
// getNumTicksToRun thunk-target: __thiscall RuntimeEngine::getNumTicksToRun, this = engine.
extern int ext_004A9CE0(void* engine);
// Known callee 0x0046C500: sub_0046C500 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0046C500(void* out, int flag);

// @name ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4
// @class ExprParser::ReadMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, 0>
// @summary Reads the engine pointer from the ValuePtr argument; throws if null, otherwise calls getNumTicksToRun on the engine, stores the result via ext_0046C500 into the argument, and returns the argument.
// @field ExprParser::ValuePtrType +0x00 uint32_t field_0x00
void* fn_004AB650(void* out, void* unused_arg) {
    (void)unused_arg;

    // The 32-bit guest engine pointer stored at offset 0 of the argument.
    const uint32_t engine = lift_field<uint32_t>(out, 0);
    if (engine == 0) {
        // Original throws an MSVC exception object built by sub_0046C3C0; its exact type is not recovered.
        throw std::runtime_error("ReadMethodType::vfunc_4: null engine pointer");
    }

    const int ticks = ext_004A9CE0(reinterpret_cast<void*>(static_cast<uintptr_t>(engine)));
    ext_0046C500(out, ticks);
    return out;
}
} // namespace lift_00471440
} // namespace lift_004AB650

// [0x004B9D70] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_4 (73 bytes)
namespace lift_004B9D70 {
// @name ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_4
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Auto-lifted identical-shape clone of 0x00471440 (ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4).
namespace lift_00471440 {
// getNumTicksToRun thunk-target: __thiscall RuntimeEngine::getNumTicksToRun, this = engine.
extern int ext_004B72D0(void* engine);
// Known callee 0x0046C500: sub_0046C500 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0046C500(void* out, int flag);

// @name ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4
// @class ExprParser::ReadMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, 0>
// @summary Reads the engine pointer from the ValuePtr argument; throws if null, otherwise calls getNumTicksToRun on the engine, stores the result via ext_0046C500 into the argument, and returns the argument.
// @field ExprParser::ValuePtrType +0x00 uint32_t field_0x00
void* fn_004B9D70(void* out, void* unused_arg) {
    (void)unused_arg;

    // The 32-bit guest engine pointer stored at offset 0 of the argument.
    const uint32_t engine = lift_field<uint32_t>(out, 0);
    if (engine == 0) {
        // Original throws an MSVC exception object built by sub_0046C3C0; its exact type is not recovered.
        throw std::runtime_error("ReadMethodType::vfunc_4: null engine pointer");
    }

    const int ticks = ext_004B72D0(reinterpret_cast<void*>(static_cast<uintptr_t>(engine)));
    ext_0046C500(out, ticks);
    return out;
}
} // namespace lift_00471440
} // namespace lift_004B9D70

// [0x004D4E00] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_4 (73 bytes)
namespace lift_004D4E00 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_4
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00471440 (ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4).
namespace lift_00471440 {
// getNumTicksToRun thunk-target: __thiscall RuntimeEngine::getNumTicksToRun, this = engine.
extern int ext_004D3CE0(void* engine);
// Known callee 0x0046C500: sub_0046C500 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0046C500(void* out, int flag);

// @name ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4
// @class ExprParser::ReadMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, 0>
// @summary Reads the engine pointer from the ValuePtr argument; throws if null, otherwise calls getNumTicksToRun on the engine, stores the result via ext_0046C500 into the argument, and returns the argument.
// @field ExprParser::ValuePtrType +0x00 uint32_t field_0x00
void* fn_004D4E00(void* out, void* unused_arg) {
    (void)unused_arg;

    // The 32-bit guest engine pointer stored at offset 0 of the argument.
    const uint32_t engine = lift_field<uint32_t>(out, 0);
    if (engine == 0) {
        // Original throws an MSVC exception object built by sub_0046C3C0; its exact type is not recovered.
        throw std::runtime_error("ReadMethodType::vfunc_4: null engine pointer");
    }

    const int ticks = ext_004D3CE0(reinterpret_cast<void*>(static_cast<uintptr_t>(engine)));
    ext_0046C500(out, ticks);
    return out;
}
} // namespace lift_00471440
} // namespace lift_004D4E00

// [0x004D5160] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_4 (73 bytes)
namespace lift_004D5160 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_4
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00471440 (ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4).
namespace lift_00471440 {
// getNumTicksToRun thunk-target: __thiscall RuntimeEngine::getNumTicksToRun, this = engine.
extern int ext_004D3CF0(void* engine);
// Known callee 0x0046C500: sub_0046C500 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0046C500(void* out, int flag);

// @name ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4
// @class ExprParser::ReadMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, 0>
// @summary Reads the engine pointer from the ValuePtr argument; throws if null, otherwise calls getNumTicksToRun on the engine, stores the result via ext_0046C500 into the argument, and returns the argument.
// @field ExprParser::ValuePtrType +0x00 uint32_t field_0x00
void* fn_004D5160(void* out, void* unused_arg) {
    (void)unused_arg;

    // The 32-bit guest engine pointer stored at offset 0 of the argument.
    const uint32_t engine = lift_field<uint32_t>(out, 0);
    if (engine == 0) {
        // Original throws an MSVC exception object built by sub_0046C3C0; its exact type is not recovered.
        throw std::runtime_error("ReadMethodType::vfunc_4: null engine pointer");
    }

    const int ticks = ext_004D3CF0(reinterpret_cast<void*>(static_cast<uintptr_t>(engine)));
    ext_0046C500(out, ticks);
    return out;
}
} // namespace lift_00471440
} // namespace lift_004D5160

// [0x005C8A80] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_4 (73 bytes)
namespace lift_005C8A80 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_4
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00471440 (ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4).
namespace lift_00471440 {
// getNumTicksToRun thunk-target: __thiscall RuntimeEngine::getNumTicksToRun, this = engine.
extern int ext_005C3FB0(void* engine);
// Known callee 0x0046C500: sub_0046C500 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0046C500(void* out, int flag);

// @name ExprParser::ReadMethodType<RuntimeEngine, int, getNumTicksToRun, 0>::vfunc_4
// @class ExprParser::ReadMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, 0>
// @summary Reads the engine pointer from the ValuePtr argument; throws if null, otherwise calls getNumTicksToRun on the engine, stores the result via ext_0046C500 into the argument, and returns the argument.
// @field ExprParser::ValuePtrType +0x00 uint32_t field_0x00
void* fn_005C8A80(void* out, void* unused_arg) {
    (void)unused_arg;

    // The 32-bit guest engine pointer stored at offset 0 of the argument.
    const uint32_t engine = lift_field<uint32_t>(out, 0);
    if (engine == 0) {
        // Original throws an MSVC exception object built by sub_0046C3C0; its exact type is not recovered.
        throw std::runtime_error("ReadMethodType::vfunc_4: null engine pointer");
    }

    const int ticks = ext_005C3FB0(reinterpret_cast<void*>(static_cast<uintptr_t>(engine)));
    ext_0046C500(out, ticks);
    return out;
}
} // namespace lift_00471440
} // namespace lift_005C8A80

// [0x004B9A40]
namespace lift_004B9A40 {
// @name ExprParser::DynamicEnumType<NMData::MaterialPair>::vfunc_27
// @class ExprParser::DynamicEnumType<NMData::MaterialPair>
// @summary Returns the listed material interaction name for a MaterialPair at the given index

extern uint32_t __thiscall ext_004B73A0(uint32_t self, uint32_t out_str, int32_t index);
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;

using std_string_copy_ctor_t = uint32_t(__thiscall*)(uint32_t self, uint32_t other);
using std_string_dtor_t = void(__thiscall*)(uint32_t self);

extern uint32_t __thiscall fn_004B9A40(
    uint32_t /*self*/,
    uint32_t out_str,
    uint32_t* obj_ptr,
    int32_t index) {
  uint8_t temp_str[28] = {};
  uint32_t temp_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(temp_str));
  uint32_t mat_pair = *obj_ptr;

  uint32_t res = ext_004B73A0(mat_pair, temp_ptr, index);

  auto copy_ctor = reinterpret_cast<std_string_copy_ctor_t>(static_cast<uintptr_t>(mem_00924FE0));
  copy_ctor(out_str, res);

  auto dtor = reinterpret_cast<std_string_dtor_t>(static_cast<uintptr_t>(mem_00924FF4));
  dtor(temp_ptr);

  return out_str;
}
} // namespace lift_004B9A40

// [0x004AB2C0]
namespace lift_004AB2C0 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription
// @class ExprParser::DynamicEnumType<NMData::BehaviourData>
// @summary Returns the compatible behaviour description string for the given index via BehaviourData.

extern void* __thiscall ext_004A9E00(void* self, void* sret, int32_t index);
extern void* mem_00924FE0;
extern void* mem_00924FF4;

struct MsvcString {
    uint32_t data[7];
};

using StringCopyCtor = void*(__thiscall*)(void* self, const void* other);
using StringDtor = void(__thiscall*)(void* self);

void* __fastcall fn_004AB2C0(void* /*self*/, void* /*edx*/, void* sret, void** objPtr, int32_t index) {
    MsvcString temp{};
    void* result = ext_004A9E00(*objPtr, &temp, index);
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(sret, result);
    reinterpret_cast<StringDtor>(mem_00924FF4)(&temp);
    return sret;
}
} // namespace lift_004AB2C0

// [0x004AA0C0] ExprParser::DynamicEnumType<NMData::BehaviourData, ...>::vfunc_40 (122 bytes)
namespace lift_004AA0C0 {
extern void ext_0067A670();
extern uint8_t mem_00ADF9E4;   // init guard byte (bit 0 = constructed)
extern uint32_t mem_00ADF9E0;  // static object storage (first dword = vtable)

// @name ExprParser::DynamicEnumType<NMData::BehaviourData>::vfunc_40
// @class ExprParser::ValuePtrType
// @summary Lazily constructs a function-local static object (guarded by a one-time init flag) and stores its address into the out-object's +0x04 slot.
// @field ValuePtrType +0x04 void* field_0x04
void fn_004AA0C0(void* out) {
    // One-time initialization guard (original: test byte [adf9e4], al / or dword [adf9e4], eax).
    if ((mem_00ADF9E4 & 1u) == 0) {
        mem_00ADF9E4 |= 1u;
        // Construct the static object; original passes its address in ecx and a zero arg.
        ext_0067A670();
        // Install the vtable pointer into the static object's first dword.
        mem_00ADF9E0 = 0x0094153Cu;
    }
    // Store the static object's address into out+0x04.
    *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(out) + 0x04) =
        static_cast<void*>(&mem_00ADF9E0);
}
} // namespace lift_004AA0C0

// [0x004B7460] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_40 (122 bytes)
namespace lift_004B7460 {
extern void ext_0067A670(void* self, int flag);
extern uint32_t mem_00AE1618;  // one-time initialization guard (bit 0)
extern uint32_t mem_00AE1614;  // static object; first dword holds its vtable (0x009434CC)

// @name ExprParser::DynamicEnumType<NMData::MaterialPair>::vfunc_40
// @class ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>
// @summary Lazily constructs the shared static object on first use, then stores its address into the out argument at +0x04.
// @field ExprParser::ValuePtrType +0x04 void** field_0x04
void fn_004B7460(void* out) {
    if ((mem_00AE1618 & 1u) == 0) {
        mem_00AE1618 |= 1u;
        ext_0067A670(&mem_00AE1614, 0);
        mem_00AE1614 = 0x009434CCu;
    }
    *reinterpret_cast<uint32_t*>(static_cast<char*>(out) + 0x04) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE1614));
}
} // namespace lift_004B7460

// [0x004949A0] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_40 (122 bytes)
namespace lift_004949A0 {
// Callee: constructs the function-local static at mem_00ADC4DC (thiscall, one flag arg).
extern void ext_0067A670(void* self, int flag);

// Once-init guard word (bit 0 = object constructed) and the static object itself.
extern uint32_t mem_00ADC4E0;
extern uint32_t mem_00ADC4DC;

// @name ExprParser::DynamicEnumType<RigManager>::vfunc_40 (lazy static accessor)
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Lazily constructs the function-local static object at 0x00ADC4DC (guarded by bit 0 of 0x00ADC4E0) and stores its address into out+0x04.
// @field ValueArg +0x04 void* field_0x4
//
// The original is MSVC-generated: fs:[0] SEH frame setup/teardown and the
// `ret 4` stdcall epilogue are dropped; the single stack argument is `out`.
// The 32-bit VA stores are expressed as native pointers to the globals.
void fn_004949A0(void* out) {
    if ((mem_00ADC4E0 & 1u) == 0) {
        mem_00ADC4E0 |= 1u;
        ext_0067A670(&mem_00ADC4DC, 0);
        // Vtable pointer of the constructed object (MSVC-specific RTTI slot, 0x0093EB54).
        mem_00ADC4DC = 0x0093EB54u;
    }
    lift_field<void*>(out, 0x04) = &mem_00ADC4DC;
}
} // namespace lift_004949A0

// [0x00495030]
namespace lift_00495030 {
extern void* __thiscall ext_00494860(void* self, void* sret, int32_t index);
extern uintptr_t mem_00924FE0;
extern uintptr_t mem_00924FF4;

// @name DynamicEnumType<RigManager>::vfunc_27
// @class ExprParser::DynamicEnumType<RigManager>
// @summary Gets the rig type name string for the given index via RigManager::getRigTypeNameFromIndex
extern void* __thiscall fn_00495030(void* self, void* sret, void** arg2, int32_t index) {
    (void)self;
    uint8_t temp_str[28];
    void* rig_mgr = *arg2;
    void* res = ext_00494860(rig_mgr, temp_str, index);

    using CopyCtor = void* (__thiscall*)(void*, void*);
    using Dtor = void(__thiscall*)(void*);
    reinterpret_cast<CopyCtor>(mem_00924FE0)(sret, res);
    reinterpret_cast<Dtor>(mem_00924FF4)(temp_str);

    return sret;
}
} // namespace lift_00495030

// [0x004D8BB0]
namespace lift_004D8BB0 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_27
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Forwards getAvailableTweakDescription(index) on the target RigEventData object and returns a copy of the resulting std::string.


void* __thiscall ext_004D4230(void* self, void* out_str, int index);
extern uintptr_t mem_00924FE0;
extern uintptr_t mem_00924FF4;

using StringCopyCtorFn = void* (__thiscall*)(void* self, const void* other);
using StringDtorFn = void(__thiscall*)(void* self);

void* __thiscall fn_004D8BB0(void* /*self*/, void* out_str, void** obj_ptr, int index) {
    alignas(4) uint8_t temp_str[28]{};
    void* target = *obj_ptr;
    void* res = ext_004D4230(target, temp_str, index);
    reinterpret_cast<StringCopyCtorFn>(mem_00924FE0)(out_str, res);
    reinterpret_cast<StringDtorFn>(mem_00924FF4)(temp_str);
    return out_str;
}
} // namespace lift_004D8BB0

// [0x004D8B20]
namespace lift_004D8B20 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_27
// @class ExprParser::DynamicEnumType<NMData::RigEventData>
// @summary Calls getAvailableRigTypeName on the RigEventData instance and copies the resulting std::string to sret.


extern uint32_t (__thiscall *ext_004D41C0)(uint32_t, uint32_t, uint32_t);
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;

uint32_t __thiscall fn_004D8B20(uint32_t self, uint32_t sret, uint32_t arg1, uint32_t arg2) {
    (void)self;
    uint8_t temp_str[0x1c];
    uint32_t temp_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(temp_str));

    uint32_t obj = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg1));
    uint32_t ret_temp = ext_004D41C0(obj, temp_addr, arg2);

    using StrCopyCtorFn = uint32_t (__thiscall *)(uint32_t, uint32_t);
    auto str_copy_ctor = reinterpret_cast<StrCopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0));
    str_copy_ctor(sret, ret_temp);

    using StrDtorFn = void (__thiscall *)(uint32_t);
    auto str_dtor = reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    str_dtor(temp_addr);

    return sret;
}
} // namespace lift_004D8B20

// [0x00515D20] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_27 (118 bytes)
namespace lift_00515D20 {
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_27
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Auto-lifted identical-shape clone of 0x004AB2C0 (ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription).
namespace lift_004AB2C0 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription
// @class ExprParser::DynamicEnumType<NMData::BehaviourData>
// @summary Returns the compatible behaviour description string for the given index via BehaviourData.

extern void* __thiscall ext_00515890(void* self, void* sret, int32_t index);
extern void* mem_00924FE0;
extern void* mem_00924FF4;

struct MsvcString {
    uint32_t data[7];
};

using StringCopyCtor = void*(__thiscall*)(void* self, const void* other);
using StringDtor = void(__thiscall*)(void* self);

void* __fastcall fn_00515D20(void* /*self*/, void* /*edx*/, void* sret, void** objPtr, int32_t index) {
    MsvcString temp{};
    void* result = ext_00515890(*objPtr, &temp, index);
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(sret, result);
    reinterpret_cast<StringDtor>(mem_00924FF4)(&temp);
    return sret;
}
} // namespace lift_004AB2C0
} // namespace lift_00515D20

// [0x00515DB0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_27 (118 bytes)
namespace lift_00515DB0 {
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_27
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Auto-lifted identical-shape clone of 0x004AB2C0 (ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription).
namespace lift_004AB2C0 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription
// @class ExprParser::DynamicEnumType<NMData::BehaviourData>
// @summary Returns the compatible behaviour description string for the given index via BehaviourData.

extern void* __thiscall ext_00515A80(void* self, void* sret, int32_t index);
extern void* mem_00924FE0;
extern void* mem_00924FF4;

struct MsvcString {
    uint32_t data[7];
};

using StringCopyCtor = void*(__thiscall*)(void* self, const void* other);
using StringDtor = void(__thiscall*)(void* self);

void* __fastcall fn_00515DB0(void* /*self*/, void* /*edx*/, void* sret, void** objPtr, int32_t index) {
    MsvcString temp{};
    void* result = ext_00515A80(*objPtr, &temp, index);
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(sret, result);
    reinterpret_cast<StringDtor>(mem_00924FF4)(&temp);
    return sret;
}
} // namespace lift_004AB2C0
} // namespace lift_00515DB0

// [0x005C85D0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_27 (118 bytes)
namespace lift_005C85D0 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_27
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x004AB2C0 (ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription).
namespace lift_004AB2C0 {
// @name ExprParser::DynamicEnumType<NMData::BehaviourData>::getCompatibleBehaviourDescription
// @class ExprParser::DynamicEnumType<NMData::BehaviourData>
// @summary Returns the compatible behaviour description string for the given index via BehaviourData.

extern void* __thiscall ext_005C3F40(void* self, void* sret, int32_t index);
extern void* mem_00924FE0;
extern void* mem_00924FF4;

struct MsvcString {
    uint32_t data[7];
};

using StringCopyCtor = void*(__thiscall*)(void* self, const void* other);
using StringDtor = void(__thiscall*)(void* self);

void* __fastcall fn_005C85D0(void* /*self*/, void* /*edx*/, void* sret, void** objPtr, int32_t index) {
    MsvcString temp{};
    void* result = ext_005C3F40(*objPtr, &temp, index);
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(sret, result);
    reinterpret_cast<StringDtor>(mem_00924FF4)(&temp);
    return sret;
}
} // namespace lift_004AB2C0
} // namespace lift_005C85D0

// [0x00515BD0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, ...>::vfunc_40 (122 bytes)
namespace lift_00515BD0 {
extern void ext_0067A670();
extern int mem_00AEBE9C;
extern uint32_t mem_00AEBE98;

// @name DynamicEnumType<EvolverRuntimeOptions>::vfunc_40
// @class ExprParser::ValuePtrType
// @summary One-time guarded static init of the EvolverRuntimeOptions enum-type object; stores its address at out+0x04.
// @field ValuePtrType +0x04 uint32_t field_0x04
void fn_00515BD0(uint32_t* out) {
    unsigned char* base = reinterpret_cast<unsigned char*>(out);
    if ((mem_00AEBE9C & 1) == 0) {
        mem_00AEBE9C |= 1;
        ext_0067A670();
        mem_00AEBE98 = 0x0095198Cu;
    }
    *reinterpret_cast<uint32_t*>(base + 0x04) = 0x00AEBE98u;
}
} // namespace lift_00515BD0

// [0x004D47A0]
namespace lift_004D47A0 {
// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_40
// @class ExprParser::DynamicEnumType
// @summary Lazily constructs the shared static object at mem_00AE5CF4 (once-guard bit 0 in mem_00AE5CF8), then stores its address into the argument's +0x04 slot.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04

extern uint32_t mem_00AE5CF8;
extern uint32_t mem_00AE5CF4;
extern void ext_0067A670(uint32_t* self);

void ExprParser_DynamicEnumType_RigEventData_vfunc_40(uint32_t* out) {
    if ((mem_00AE5CF8 & 1u) == 0u) {
        mem_00AE5CF8 |= 1u;
        ext_0067A670(&mem_00AE5CF4);
        mem_00AE5CF4 = 0x0094836Cu;
    }
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE5CF4));
}
} // namespace lift_004D47A0

// [0x004D4A50] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_40 (122 bytes)
namespace lift_004D4A50 {
extern void ext_0067A670();
extern int mem_00AE5D00;
extern int mem_00AE5CFC;

// @name ExprParser::DynamicEnumType<NMData::RigEventData>::vfunc_40
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary One-time (guarded) initialization of a global object at mem_00AE5CFC; stores its address into the +0x04 slot of the argument.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_004D4A50(void* out) {
    // Thread-safe-style one-shot init guard: bit 0 of mem_00AE5D00 marks construction done.
    if ((mem_00AE5D00 & 1) == 0) {
        mem_00AE5D00 |= 1;
        // Construct global object at mem_00AE5CFC (thiscall; receiver = &mem_00AE5CFC, one zeroed stack arg).
        ext_0067A670();
        // Install the object's vtable pointer.
        mem_00AE5CFC = 0x00948444;
    }
    // Publish the global object's address into out->+0x04.
    auto* base = static_cast<unsigned char*>(out);
    *reinterpret_cast<uintptr_t*>(base + 0x04) = reinterpret_cast<uintptr_t>(&mem_00AE5CFC);
}
} // namespace lift_004D4A50

// [0x00515C90] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, ...>::vfunc_40 (122 bytes)
namespace lift_00515C90 {
extern void ext_0067A670(void* self, uint32_t flag);
extern uint32_t mem_00AEBEA0; // static object storage; first dword becomes its vtable VA
extern uint32_t mem_00AEBEA4; // one-time initialization guard word (bit 0)

// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>::vfunc_40
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions>
// @summary Lazily initializes the static EvolverRuntimeOptions-backed ValuePtr object (once, guarded by bit 0 of mem_00AEBEA4) and writes its address into the out-object's +0x04 slot.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04

// Guest-side behavior (32-bit VA semantics):
//   if ((mem_00AEBEA4 & 1) == 0) {
//       mem_00AEBEA4 |= 1;
//       ext_0067A670(&mem_00AEBEA0, 0);      // construct/init the static object
//       mem_00AEBEA0 = 0x00951A64;           // vtable VA
//   }
//   out->field_0x04 = 0x00AEBEA0;
// The original MSVC SEH frame (fs:[0] push/pop around the body) is a
// compiler-generated exception-handling scaffold and is not reproduced here.
void fn_00515C90(void* out) {
    if ((mem_00AEBEA4 & 1u) == 0u) {
        mem_00AEBEA4 |= 1u;
        ext_0067A670(static_cast<void*>(&mem_00AEBEA0), 0u);
        mem_00AEBEA0 = 0x00951A64u;
    }
    lift_field<uint32_t>(out, 4) = 0x00AEBEA0u;
}
} // namespace lift_00515C90

// [0x005C47F0]
namespace lift_005C47F0 {
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase>::vfunc_40
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase>
// @summary Lazily initializes a static helper object and stores its pointer at arg0 + 0x4.

extern uint32_t mem_00B44424;
extern uint32_t mem_00B44420;
void __thiscall ext_0067A670(void* self);

void __thiscall fn_005C47F0(void* self, uint32_t arg0) {
    (void)self;
    if ((mem_00B44424 & 1u) == 0u) {
        mem_00B44424 |= 1u;
        ext_0067A670(&mem_00B44420);
        mem_00B44420 = 0x00964324u;
    }
    *(uint32_t*)((uintptr_t)arg0 + 4) = (uint32_t)(uintptr_t)&mem_00B44420;
}
} // namespace lift_005C47F0

// [0x004D51B0]
namespace lift_004D51B0 {
// @name ExprParser::DynamicEnumType::vfunc_5
// @class ExprParser::DynamicEnumType
// @summary Validates the pointer argument: if its first dword is nonzero, raises via sub_0046C4E0; otherwise throws a fixed-message DerivedException.
// @field ExprParser::DynamicEnumType +0x00 int field_0x00

extern int ext_004D3CF0(void);
extern void ext_0046C4E0(void);
extern void* ext_0046C3C0(void* self);
extern void ext_006A6DD2(void* exc, const void* throwInfo);

extern const void* mem_009DEC1C;

extern void fn_004D51B0(int* arg) {
    if (arg[0] != 0) {
        (void)ext_004D3CF0();
        ext_0046C4E0();
    }
    alignas(16) unsigned char exc[16] = {};
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, mem_009DEC1C);
}
} // namespace lift_004D51B0
