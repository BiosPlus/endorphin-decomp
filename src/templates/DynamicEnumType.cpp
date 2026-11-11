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
