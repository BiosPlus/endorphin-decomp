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

// [0x00495020] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_26 (14 bytes)
extern "C" void ext_00494830();

extern "C" __declspec(naked) void __fastcall fn_00495020(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_00494830
        ret 4
    }
}

// [0x00515D10] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_26 (14 bytes)
extern "C" void ext_00515830();

extern "C" __declspec(naked) void __fastcall fn_00515D10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_00515830
        ret 4
    }
}

// [0x00515DA0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_26 (14 bytes)
extern "C" void ext_00515840();

extern "C" __declspec(naked) void __fastcall fn_00515DA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_00515840
        ret 4
    }
}

// [0x004AB2B0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_26 (14 bytes)
extern "C" void ext_004A9D80();

extern "C" __declspec(naked) void __fastcall fn_004AB2B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_004A9D80
        ret 4
    }
}

// [0x004D8B10] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_26 (14 bytes)
extern "C" void ext_004D4160();

extern "C" __declspec(naked) void __fastcall fn_004D8B10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_004D4160
        ret 4
    }
}

// [0x004D8BA0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_26 (14 bytes)
extern "C" void ext_004D4190();

extern "C" __declspec(naked) void __fastcall fn_004D8BA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_004D4190
        ret 4
    }
}

// [0x005C85C0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_26 (14 bytes)
extern "C" void ext_005C3F10();

extern "C" __declspec(naked) void __fastcall fn_005C85C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        call ext_005C3F10
        ret 4
    }
}

// [0x00494810] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __stdcall fn_00494810(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0A346B0h
        push 0A2E2F8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x004A9CC0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __stdcall fn_004A9CC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0A32954h
        push 0A2E2F8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x004B7160] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __stdcall fn_004B7160(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0A328D4h
        push 0A2E2F8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x004D3E20] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_16 (30 bytes)
extern "C" int mem_00A3C268;
extern "C" int mem_00A2E2F8;
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __stdcall fn_004D3E20(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push offset mem_00A3C268
        push offset mem_00A2E2F8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x00515850] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00515850(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa4279c
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x005C4870] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_005C4870(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa8aff4
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x0067A770] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_9 (32 bytes)
extern "C" void ext_006720A0();

extern "C" __declspec(naked) void __fastcall fn_0067A770(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 78h]
        push esi
        call edx
        mov eax, dword ptr [esp + 0Ch]
        push eax
        mov ecx, esi
        call ext_006720A0
        pop esi
        ret 8
    }
}

// [0x004B9A10] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_26 (42 bytes)
extern "C" int mem_00AE1D18;
extern "C" int mem_00AE1D1C;

extern "C" int __fastcall fn_004B9A10(void* self, int edx_unused, int a1) {
    int begin = mem_00AE1D18;
    if (begin == 0) {
        return 0;
    }
    return (mem_00AE1D1C - begin) / 28;
}

// [0x00495030] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_27 (118 bytes)
extern "C" void ext_00494860();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00495030(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_00494860
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x004B9A40] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_27 (118 bytes)
extern "C" void ext_004B73A0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_004B9A40(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_004B73A0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x004D8B20] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_27 (118 bytes)
extern "C" void ext_004D41C0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_004D8B20(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_004D41C0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x004D8BB0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_27 (118 bytes)
extern "C" void ext_004D4230();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_004D8BB0(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_004D4230
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x005C85D0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_27 (118 bytes)
extern "C" void ext_005C3F40();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_005C85D0(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_005C3F40
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x004949A0] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADC4E0;
extern "C" int mem_00ADC4DC;

extern "C" __declspec(naked) void __fastcall fn_004949A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8864be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADC4E0], al
        jne L_guarded
        or dword ptr [mem_00ADC4E0], eax
        mov ecx, offset mem_00ADC4DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADC4DC], 0x0093EB54
        mov dword ptr [eax + 0x4], offset mem_00ADC4DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADC4DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004AA0C0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00ADF9E4;
extern "C" int mem_00ADF9E0;

extern "C" __declspec(naked) void __fastcall fn_004AA0C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88893e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00ADF9E4], al
        jne L_guarded
        or dword ptr [mem_00ADF9E4], eax
        mov ecx, offset mem_00ADF9E0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00ADF9E0], 0x0094153C
        mov dword ptr [eax + 0x4], offset mem_00ADF9E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00ADF9E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004B7460] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1618;
extern "C" int mem_00AE1614;

extern "C" __declspec(naked) void __fastcall fn_004B7460(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a18e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1618], al
        jne L_guarded
        or dword ptr [mem_00AE1618], eax
        mov ecx, offset mem_00AE1614
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE1614], 0x009434cc
        mov dword ptr [eax + 0x4], offset mem_00AE1614
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE1614
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D47A0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5CF8;
extern "C" int mem_00AE5CF4;

extern "C" __declspec(naked) void __fastcall fn_004D47A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d03e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5CF8], al
        jne L_guarded
        or dword ptr [mem_00AE5CF8], eax
        mov ecx, offset mem_00AE5CF4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5CF4], 0x0094836c
        mov dword ptr [eax + 0x4], offset mem_00AE5CF4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5CF4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004D4A50] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE5D00;
extern "C" int mem_00AE5CFC;

extern "C" __declspec(naked) void __fastcall fn_004D4A50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88d05e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE5D00], al
        jne L_guarded
        or dword ptr [mem_00AE5D00], eax
        mov ecx, offset mem_00AE5CFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE5CFC], 0x00948444
        mov dword ptr [eax + 0x4], offset mem_00AE5CFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE5CFC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00515BD0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBE9C;
extern "C" int mem_00AEBE98;

extern "C" __declspec(naked) void __fastcall fn_00515BD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89280e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBE9C], al
        jne L_guarded
        or dword ptr [mem_00AEBE9C], eax
        mov ecx, offset mem_00AEBE98
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEBE98], 0x0095198c
        mov dword ptr [eax + 0x4], offset mem_00AEBE98
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEBE98
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00515C90] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEBEA4;
extern "C" int mem_00AEBEA0;

extern "C" __declspec(naked) void __fastcall fn_00515C90(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89282e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEBEA4], al
        jne L_guarded
        or dword ptr [mem_00AEBEA4], eax
        mov ecx, offset mem_00AEBEA0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEBEA0], 0x00951a64
        mov dword ptr [eax + 0x4], offset mem_00AEBEA0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEBEA0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C47F0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B44424;
extern "C" int mem_00B44420;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_005C47F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a45ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B44424], al
        jne L_guarded
        or dword ptr [mem_00B44424], eax
        mov ecx, offset mem_00B44420
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44420], 0x00964324
        mov dword ptr [eax + 0x4], offset mem_00B44420
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44420
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00515DB0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_27 (118 bytes)
extern "C" void ext_00515A80();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00515DB0(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_00515A80
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x00515D20] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_27 (118 bytes)
extern "C" void ext_00515890();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00515D20(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_00515890
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x004AB2C0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_27 (118 bytes)
extern "C" void ext_004A9E00();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_004AB2C0(void* self, int edx_unused, void* sret, void* holder, int idx) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x38]
        push esi
        mov dword ptr [esp + 4], 0
        mov ecx, dword ptr [eax]
        push edx
        lea eax, [esp + 0xc]
        push eax
        call ext_004A9E00
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 1
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x0067AAA0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_18 (104 bytes)
extern "C" void ext_00671100();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59F34;
extern "C" int mem_00B59F2C;
extern "C" int mem_00B59F30;

extern "C" __declspec(naked) void* __fastcall fn_0067AAA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b49ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59F34], al
        jne L_67AAF3
        or dword ptr [mem_00B59F34], eax
        push 7
        mov dword ptr [esp + 0xc], 0
        call ext_00671100
        push 0x921a80
        mov dword ptr [mem_00B59F2C], 0
        mov dword ptr [mem_00B59F30], eax
        call ext_006A6C87
        add esp, 8
    L_67AAF3:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59F2C
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 4
    }
}

// [0x00515E80] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_1 (45 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00515E80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 28h
        test eax, eax
        je throw_path
        fild dword ptr [eax + 0Ch]
        add esp, 28h
        ret 4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 9DEC1Ch
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00515FD0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_1 (45 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00515FD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 28h
        test eax, eax
        je throw_path
        fild dword ptr [eax + 08h]
        add esp, 28h
        ret 4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 9DEC1Ch
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00516170] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_2 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_00516170(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 28h
        test eax, eax
        je throw_path
        mov eax, dword ptr [eax + 0Ch]
        add esp, 28h
        ret 4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 9DEC1Ch
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00516550] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_2 (45 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00516550(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 28h
        test eax, eax
        je throw_path
        mov eax, dword ptr [eax + 08h]
        add esp, 28h
        ret 4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 9DEC1Ch
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00515EB0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_5 (45 bytes)
extern "C" void ext_0046C4E0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00515EB0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 28h
        test eax, eax
        je throw_path
        mov ecx, dword ptr [eax + 0Ch]
        push ecx
        call ext_0046C4E0
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 9DEC1Ch
        lea edx, [esp + 4]
        push edx
        call ext_006A6DD2
    }
}

// [0x00516000] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_5 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_00516000(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 28h
        test eax, eax
        je throw_path
        mov ecx, dword ptr [eax + 08h]
        push ecx
        call ext_0046C4E0
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 9DEC1Ch
        lea edx, [esp + 4]
        push edx
        call ext_006A6DD2
    }
}

// [0x00494A60] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_2 (47 bytes)
extern "C" void ext_006AD970();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00494A60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_null
        call ext_006AD970
        add esp, 0x28
        ret 0x4
    L_null:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004AB340] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_2 (47 bytes)
extern "C" void ext_004A9CE0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004AB340(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_null
        call ext_004A9CE0
        add esp, 0x28
        ret 0x4
    L_null:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004B9B50] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_2 (47 bytes)
extern "C" void ext_004B72D0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004B9B50(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_null
        call ext_004B72D0
        add esp, 0x28
        ret 0x4
    L_null:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

extern "C" void ext_004D3CE0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

// [0x004D4D90] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_2 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D4D90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_null
        call ext_004D3CE0
        add esp, 0x28
        ret 0x4
    L_null:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D50F0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_2 (47 bytes)
extern "C" void ext_004D3CF0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004D50F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_null
        call ext_004D3CF0
        add esp, 0x28
        ret 0x4
    L_null:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C8A10] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_2 (47 bytes)
extern "C" void ext_005C3FB0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005C8A10(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_null
        call ext_005C3FB0
        add esp, 0x28
        ret 0x4
    L_null:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00494DE0] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_5 (47 bytes)
// [0x00494DE0]
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C4E0();
extern "C" void ext_006A6DD2();
extern "C" void ext_006AD970();
extern "C" __declspec(naked) void __fastcall fn_00494DE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je short L_empty
        call ext_006AD970
        push eax
        call ext_0046C4E0
    L_empty:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004AB3B0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_5 (47 bytes)
extern "C" void ext_004A9CE0();
extern "C" void ext_0046C4E0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __fastcall fn_004AB3B0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je short L_empty
        call ext_004A9CE0
        push eax
        call ext_0046C4E0
    L_empty:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004B9BC0] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_5 (47 bytes)
extern "C" void ext_004B72D0();
extern "C" void ext_0046C4E0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004B9BC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je short L_empty
        call ext_004B72D0
        push eax
        call ext_0046C4E0
    L_empty:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D4E50] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_5 (47 bytes)
extern "C" void ext_004D3CE0();
extern "C" void ext_0046C4E0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004D4E50(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je short L_empty
        call ext_004D3CE0
        push eax
        call ext_0046C4E0
    L_empty:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D51B0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_5 (47 bytes)
extern "C" void ext_004D3CF0();
extern "C" void ext_0046C4E0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

// [0x004D51B0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_5 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_004D51B0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je short L_empty
        call ext_004D3CF0
        push eax
        call ext_0046C4E0
    L_empty:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C8C60] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_5 (47 bytes)
// [0x005C8C60] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, ...>::vfunc_5 (47 bytes)
extern "C" void ext_005C3FB0();
extern "C" void ext_0046C4E0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005C8C60(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je short L_empty
        call ext_005C3FB0
        push eax
        call ext_0046C4E0
    L_empty:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005161A0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_3 (52 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005161A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 0x28
        test eax, eax
        je short L_throw
        xor ecx, ecx
        cmp dword ptr [eax + 0xc], ecx
        setne cl
        mov al, cl
        add esp, 0x28
        ret 4
L_throw:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea edx, [esp + 4]
        push edx
        call ext_006A6DD2
    }
}

// [0x00516580] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_3 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_00516580(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        sub esp, 0x28
        test eax, eax
        je short L_throw
        xor ecx, ecx
        cmp dword ptr [eax + 0x8], ecx
        setne cl
        mov al, cl
        add esp, 0x28
        ret 4
    L_throw:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea edx, [esp + 4]
        push edx
        call ext_006A6DD2
    }
}

// [0x00494D50] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_3 (53 bytes)
extern "C" void ext_006AD970();
extern "C" __declspec(naked) int __fastcall fn_00494D50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je throw_path
        call ext_006AD970
        neg eax
        sbb eax, eax
        neg eax
        add esp, 0x28
        ret 0x4
throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004AB370] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_3 (53 bytes)
extern "C" void ext_004A9CE0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) int __fastcall fn_004AB370(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je throw_path
        call ext_004A9CE0
        neg eax
        sbb eax, eax
        neg eax
        add esp, 0x28
        ret 0x4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004B9B80] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_3 (53 bytes)
extern "C" void ext_004B72D0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) int __fastcall fn_004B9B80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je throw_path
        call ext_004B72D0
        neg eax
        sbb eax, eax
        neg eax
        add esp, 0x28
        ret 0x4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D4DC0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_3 (53 bytes)
extern "C" void ext_004D3CE0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) int __fastcall fn_004D4DC0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je throw_path
        call ext_004D3CE0
        neg eax
        sbb eax, eax
        neg eax
        add esp, 0x28
        ret 0x4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D5120] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_3 (53 bytes)
extern "C" void ext_004D3CF0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) int __fastcall fn_004D5120(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je throw_path
        call ext_004D3CF0
        neg eax
        sbb eax, eax
        neg eax
        add esp, 0x28
        ret 0x4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C8A40] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_3 (53 bytes)
// [0x005C8A40] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, ...>::vfunc_3 (53 bytes)
extern "C" void ext_005C3FB0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) int __fastcall fn_005C8A40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je throw_path
        call ext_005C3FB0
        neg eax
        sbb eax, eax
        neg eax
        add esp, 0x28
        ret 0x4
    throw_path:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00494A20] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_1 (55 bytes)
extern "C" void ext_006AD970();
extern "C" __declspec(naked) void __stdcall fn_00494A20(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_00494A40
        call ext_006AD970
        mov dword ptr [esp + 0x2c], eax
        fild dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0x4
L_00494A40:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004AB610] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_1 (55 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_004A9CE0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __stdcall fn_004AB610(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_004AB630
        call ext_004A9CE0
        mov dword ptr [esp + 0x2c], eax
        fild dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0x4
L_004AB630:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004B9B10] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_1 (55 bytes)
extern "C" void ext_004B72D0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __stdcall fn_004B9B10(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_004B9B30
        call ext_004B72D0
        mov dword ptr [esp + 0x2c], eax
        fild dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0x4
L_004B9B30:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D4D50] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_1 (55 bytes)
extern "C" void ext_004D3CE0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __stdcall fn_004D4D50(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_004D4D70
        call ext_004D3CE0
        mov dword ptr [esp + 0x2c], eax
        fild dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0x4
L_004D4D70:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D50B0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_1 (55 bytes)
extern "C" void ext_004D3CF0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __stdcall fn_004D50B0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_004D50D0
        call ext_004D3CF0
        mov dword ptr [esp + 0x2c], eax
        fild dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0x4
    L_004D50D0:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C89D0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_1 (55 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_005C3FB0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __stdcall fn_005C89D0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        sub esp, 0x28
        test ecx, ecx
        je L_005C89F0
        call ext_005C3FB0
        mov dword ptr [esp + 0x2c], eax
        fild dword ptr [esp + 0x2c]
        add esp, 0x28
        ret 0x4
    L_005C89F0:
        lea ecx, [esp]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x4]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00515C50] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_41 (63 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00515C50(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        mov dword ptr [esi + 0x8], eax
        pop esi
        add esp, 0x28
        ret 0x8
null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00515B90] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_41 (63 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00515B90(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je short L_null_throw
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        mov dword ptr [esi + 0xc], eax
        pop esi
        add esp, 0x28
        ret 0x8
    L_null_throw:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00496DA0] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_41 (68 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_00496CC0();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __fastcall fn_00496DA0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je L_null_throw
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 8]
        call eax
        push eax
        mov ecx, esi
        call ext_00496CC0
        pop esi
        add esp, 0x28
        ret 8
    L_null_throw:
        lea ecx, [esp + 4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004ACC80] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_41 (68 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_004ACA60();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004ACC80(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 8]
        call eax
        push eax
        mov ecx, esi
        call ext_004ACA60
        pop esi
        add esp, 0x28
        ret 8
null_path:
        lea ecx, [esp + 4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004B7410] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_41 (68 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_004B7340();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __stdcall fn_004B7410(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [eax+4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx+8]
        call eax
        push eax
        mov ecx, esi
        call ext_004B7340
        pop esi
        add esp, 0x28
        ret 8
    null_path:
        lea ecx, [esp+4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp+8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004DC660] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_41 (68 bytes)
extern "C" void ext_004DBD10();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __stdcall fn_004DC660(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [eax+4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx+8]
        call eax
        push eax
        mov ecx, esi
        call ext_004DBD10
        pop esi
        add esp, 0x28
        ret 8
null_path:
        lea ecx, [esp+4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp+8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004DC6B0] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_41 (68 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_004DBD90();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __stdcall fn_004DC6B0(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [eax+4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx+8]
        call eax
        push eax
        mov ecx, esi
        call ext_004DBD90
        pop esi
        add esp, 0x28
        ret 8
null_path:
        lea ecx, [esp+4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp+8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C47A0] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_41 (68 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_005C3EA0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005C47A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        sub esp, 0x28
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        je null_path
        mov eax, dword ptr [esp+0x34]
        mov ecx, dword ptr [eax+4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx+8]
        call eax
        push eax
        mov ecx, esi
        call ext_005C3EA0
        pop esi
        add esp, 0x28
        ret 8
null_path:
        lea ecx, [esp+4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp+8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00515E30] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_0 (69 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __fastcall fn_00515E30(void* self, int edx_unused, void* a1, void** a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp], 0
        je L_throw_00515E30
        mov ecx, dword ptr [eax + 0x0c]
        push esi
        mov esi, dword ptr [esp + 0x34]
        push ecx
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 8
    L_throw_00515E30:
        lea ecx, [esp + 4]
        call ext_0046C3C0
        push 0x9dec1c
        lea edx, [esp + 8]
        push edx
        call ext_006A6DD2
    }
}

// [0x00515F80] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_0 (69 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void* __fastcall fn_00515F80(void* self, int edx_unused, void* a1, void** a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp], 0
        je L_throw_00515F80
        mov ecx, dword ptr [eax + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x34]
        push ecx
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 8
    L_throw_00515F80:
        lea ecx, [esp + 4]
        call ext_0046C3C0
        push 0x9dec1c
        lea edx, [esp + 8]
        push edx
        call ext_006A6DD2
    }
}

// [0x005161E0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_4 (71 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_006A6DD2();

extern "C" void __declspec(naked) __fastcall fn_005161E0(void* self) {
    __asm {
        sub esp, 2Ch
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp], 0
        je null_path
        mov ecx, dword ptr [eax + 0Ch]
        push esi
        mov esi, dword ptr [esp + 34h]
        push ecx
        push esi
        call ext_0046C500
        add esp, 8
        mov eax, esi
        pop esi
        add esp, 2Ch
        ret 8
null_path:
        lea ecx, [esp + 4]
        call ext_0046C3C0
        push 9DEC1Ch
        lea edx, [esp + 8]
        push edx
        call ext_006A6DD2
    }
}

// [0x005165C0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_4 (71 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_006A6DD2();
extern "C" void __declspec(naked) __fastcall fn_005165C0(void* self) {
    __asm {
        sub esp, 2Ch
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp], 0
        je null_path
        mov ecx, dword ptr [eax + 08h]
        push esi
        mov esi, dword ptr [esp + 34h]
        push ecx
        push esi
        call ext_0046C500
        add esp, 8
        mov eax, esi
        pop esi
        add esp, 2Ch
        ret 8
null_path:
        lea ecx, [esp + 4]
        call ext_0046C3C0
        push 9DEC1Ch
        lea edx, [esp + 8]
        push edx
        call ext_006A6DD2
    }
}

// [0x00494D00] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_0 (71 bytes)
extern "C" void ext_006AD970();
extern "C" void ext_006720C0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_009DEC1C;

extern "C" __declspec(naked) void __fastcall fn_00494D00(void* self) {
    __asm {
        sub     esp, 0x2c
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     dword ptr [esp], 0x0
        je      short L_null
        push    esi
        call    ext_006AD970
        mov     esi, dword ptr [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    ext_006720C0
        mov     eax, esi
        pop     esi
        add     esp, 0x2c
        ret     0x8
    L_null:
        lea     ecx, [esp + 0x4]
        call    ext_0046C3C0
        push    offset mem_009DEC1C
        lea     ecx, [esp + 0x8]
        push    ecx
        call    ext_006A6DD2
    }
}

// [0x004B9AC0] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_0 (71 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_004B72D0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004B9AC0(void* self) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je THROW_PATH
        push esi
        call ext_004B72D0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    THROW_PATH:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004AB5C0] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_0 (71 bytes)
extern "C" void ext_004A9CE0();
extern "C" void ext_006720C0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004AB5C0(void* self) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je THROW_PATH
        push esi
        call ext_004A9CE0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    THROW_PATH:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D5060] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_0 (71 bytes)
extern "C" void ext_004D3CF0();
extern "C" void ext_006720C0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004D5060(void* self) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je THROW_PATH
        push esi
        call ext_004D3CF0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    THROW_PATH:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D4820] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_0 (71 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_004D3CE0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004D4820(void* self) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je THROW_PATH
        push esi
        call ext_004D3CE0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    THROW_PATH:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C8C10] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_0 (71 bytes)
extern "C" void ext_005C3FB0();
extern "C" void ext_006720C0();
extern "C" void ext_0046C3C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005C8C10(void* self) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je THROW_PATH
        push esi
        call ext_005C3FB0
        mov esi, dword ptr [esp + 0x34]
        push eax
        mov ecx, esi
        call ext_006720C0
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    THROW_PATH:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004AB650] ExprParser::DynamicEnumType<NMData::BehaviourData, {public: int __thiscall NMData::BehaviourData::getBehaviourNameIndex(void) const, 0}, {public: void __thiscall NMData::BehaviourData::setBehaviourNameIndex(int), 0}, {public: int __thiscall NMData::BehaviourData::getNumCompatibleBehaviours(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::BehaviourData::getCompatibleBehaviourDescription(int) const, 0}>::vfunc_4 (73 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_004A9CE0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004AB650(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je null_path
        push esi
        call ext_004A9CE0
        mov esi, dword ptr [esp + 0x34]
        push eax
        push esi
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00494D90] ExprParser::DynamicEnumType<RigManager, &public: int __thiscall RigManager::getRigTypeIndex(void) const, &public: void __thiscall RigManager::setRigTypeIndex(int), &public: int __thiscall RigManager::getNumAvailableRigTypes(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall RigManager::getRigTypeNameFromIndex(int) const>::vfunc_4 (73 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_006A6DD2();
extern "C" void ext_006AD970();

extern "C" __declspec(naked) void __fastcall fn_00494D90(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je null_path
        push esi
        call ext_006AD970
        mov esi, dword ptr [esp + 0x34]
        push eax
        push esi
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004B9D70] ExprParser::DynamicEnumType<NMData::MaterialPair, &public: int __thiscall NMData::MaterialPair::getMaterialInteractionIndex(void) const, &public: void __thiscall NMData::MaterialPair::setMaterialInteractionIndex(int), &public: int __thiscall NMData::MaterialPair::getNumListedMaterialInteractions(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::MaterialPair::getListedMaterialInteraction(int) const>::vfunc_4 (73 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_004B72D0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004B9D70(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je null_path
        push esi
        call ext_004B72D0
        mov esi, dword ptr [esp + 0x34]
        push eax
        push esi
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005C8A80] ExprParser::DynamicEnumType<NMData::CollisionModelDataBase, {public: int __thiscall NMData::CollisionModelDataBase::getMaterialNameIndex(void) const, 0}, {public: void __thiscall NMData::CollisionModelDataBase::setMaterialNameIndex(int), 0}, {public: int __thiscall NMData::CollisionModelDataBase::getNumListedMaterialNames(void) const, 0}, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::CollisionModelDataBase::getListedMaterialName(int) const, 0}>::vfunc_4 (73 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_005C3FB0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005C8A80(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je null_path
        push esi
        call ext_005C3FB0
        mov esi, dword ptr [esp + 0x34]
        push eax
        push esi
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D4E00] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTypeNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTypeNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTypes(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableRigTypeName(int) const, 0}>::vfunc_4 (73 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_004D3CE0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004D4E00(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je null_path
        push esi
        call ext_004D3CE0
        mov esi, dword ptr [esp + 0x34]
        push eax
        push esi
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x004D5160] ExprParser::DynamicEnumType<NMData::RigEventData, {public: int __thiscall NMData::RigEventData::getTweakNameIndex(void) const, 0}, {public: void __thiscall NMData::RigEventData::setTweakNameIndex(int), 0}, {private: int __thiscall NMData::RigEventData::getNumAvailableTweaks(void) const, 0}, {private: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::RigEventData::getAvailableTweakDescription(int) const, 0}>::vfunc_4 (73 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_0046C500();
extern "C" void ext_004D3CF0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_004D5160(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        sub esp, 0x2c
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp], 0x0
        je null_path
        push esi
        call ext_004D3CF0
        mov esi, dword ptr [esp + 0x34]
        push eax
        push esi
        call ext_0046C500
        add esp, 0x8
        mov eax, esi
        pop esi
        add esp, 0x2c
        ret 0x8
    null_path:
        lea ecx, [esp + 0x4]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0x8]
        push ecx
        call ext_006A6DD2
    }
}

// [0x005164B0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_47 (152 bytes)

extern "C" void ext_0041CF50();
extern "C" void ext_0046C3C0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __stdcall fn_005164B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a5428
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push esi
        mov esi, dword ptr [esp + 0x44]
        mov eax, dword ptr [esi]
        test eax, eax
        je null_path
        mov eax, dword ptr [eax + 0xc]
        push eax
        lea ecx, [esp + 0x8]
        call ext_006720C0
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], 0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x3c], 0xffffffff
        je skip_release
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x4]
        push eax
        call edx
skip_release:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xbc]
        push esi
        call edx
        mov ecx, dword ptr [esp + 0x34]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 0x4
null_path:
        lea ecx, [esp + 0xc]
        call ext_0046C3C0
        push 0x9dec1c
        lea eax, [esp + 0x10]
        push eax
        call ext_006A6DD2
    }
}

// [0x005167F0] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_47 (152 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_0046C3C0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_005167F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a5428
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x30
        push esi
        mov esi, dword ptr [esp + 0x44]
        mov eax, dword ptr [esi]
        test eax, eax
        je t167_throw
        mov eax, dword ptr [eax + 0x8]
        push eax
        lea ecx, [esp + 0x8]
        call ext_006720C0
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x3c], 0xffffffff
        je t167_skip
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x4]
        push eax
        call edx
    t167_skip:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xbc]
        push esi
        call edx
        mov ecx, dword ptr [esp + 0x34]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x3c
        ret 0x4
    t167_throw:
        lea ecx, [esp + 0xc]
        call ext_0046C3C0
        push 0x9dec1c
        lea eax, [esp + 0x10]
        push eax
        call ext_006A6DD2
    }
}

// [0x00516230] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentIndividualIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentIndividualIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumIndividuals(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getIndividualDescription(int) const>::vfunc_42 (154 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) bool __fastcall fn_00516230(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a5428
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [eax]
        sub esp, 0x30
        test eax, eax
        je null_path
        mov eax, dword ptr [eax + 0xc]
        push ebx
        push eax
        lea ecx, [esp + 8]
        call ext_006720C0
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xa8]
        push eax
        lea eax, [esp + 8]
        push eax
        mov dword ptr [esp + 0x44], 0
        call edx
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        mov bl, al
        mov dword ptr [esp + 0x3c], 0xffffffff
        je skip_release
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 4]
        push edx
        call eax
skip_release:
        mov ecx, dword ptr [esp + 0x34]
        mov al, bl
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 8
null_path:
        lea ecx, [esp + 8]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0xc]
        push ecx
        call ext_006A6DD2
    }
}

// [0x00516610] ExprParser::DynamicEnumType<NMData::EvolverRuntimeOptions, &public: int __thiscall NMData::EvolverRuntimeOptions::getCurrentTaskIndex(void) const, &public: void __thiscall NMData::EvolverRuntimeOptions::setCurrentTaskIndex(int), &public: int __thiscall NMData::EvolverRuntimeOptions::getNumTasks(void) const, &public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> __thiscall NMData::EvolverRuntimeOptions::getTaskDescription(int) const>::vfunc_42 (154 bytes)
extern "C" void ext_0046C3C0();
extern "C" void ext_006720C0();
extern "C" void ext_006A6DD2();

extern "C" __declspec(naked) void __fastcall fn_00516610(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a5428
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [eax]
        sub esp, 0x30
        test eax, eax
        je L_null_0516610
        mov eax, dword ptr [eax + 0x8]
        push ebx
        push eax
        lea ecx, [esp + 0x8]
        call ext_006720C0
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xa8]
        push eax
        lea eax, [esp + 0x8]
        push eax
        mov dword ptr [esp + 0x44], 0x0
        call edx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov bl, al
        mov dword ptr [esp + 0x3c], 0xffffffff
        je L_skip_0516610
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x4]
        push edx
        call eax
    L_skip_0516610:
        mov ecx, dword ptr [esp + 0x34]
        mov al, bl
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x3c
        ret 0x8
    L_null_0516610:
        lea ecx, [esp + 0x8]
        call ext_0046C3C0
        push 0x9dec1c
        lea ecx, [esp + 0xc]
        push ecx
        call ext_006A6DD2
    }
}
