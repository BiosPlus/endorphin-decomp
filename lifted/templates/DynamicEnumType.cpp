// Lifted C++ translation unit: lifted/templates/DynamicEnumType.cpp
#include "lift_compat.h"
// Helper at 0x00494830 (33 bytes). Receives the inner object pointer as its single argument.
extern "C" void ext_00494830(void* inner);

// [0x00495020] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_26 (14 bytes)
// @name ExprParser::DynamicEnumType<RigManager>::vfunc_26
// @class ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>
// @summary Loads the pointer stored at offset 0 of self and forwards it to the helper at 0x00494830.
// @field ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const> +0x00 void* field_0x00
void fn_00495020(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_00494830(inner);
}
