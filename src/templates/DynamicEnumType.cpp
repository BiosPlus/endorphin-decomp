// Decompiled translation unit: src/templates/DynamicEnumType.cpp

// [0x004C0320] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_13 (13 bytes)
extern "C" void ext_00671100();

extern "C" __declspec(naked) void __fastcall fn_004C0320(void* self, int edx_unused, int a1) {
    __asm {
        push 1
        call ext_00671100
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        ret 4
    }
}
