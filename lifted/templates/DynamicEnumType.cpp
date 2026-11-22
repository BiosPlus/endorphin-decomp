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

// [0x00495020] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<RigManager>::vfunc_26
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Loads the pointer stored at offset 0 of self and forwards it to the helper at 0x00494830.
// @field ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const> +0x00 void* field_0x00
void fn_00495020(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00494830(inner);
}

// [0x004AB2B0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004AB2B0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004A9D80(inner);
}

// [0x004D8B10] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004D8B10(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004D4160(inner);
}

// [0x004D8BA0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_004D8BA0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004D4190(inner);
}

// [0x00515D10] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_00515D10(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00515830(inner);
}

// [0x00515DA0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_00515DA0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00515840(inner);
}

// [0x005C85C0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_26
// @class ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>
// @summary Auto-lifted identical-shape clone of 0x00495020 (ExprParser::DynamicEnumType<RigManager>::vfunc_26).
void fn_005C85C0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_005C3F10(inner);
}
