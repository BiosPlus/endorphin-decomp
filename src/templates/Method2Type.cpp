// Decompiled translation unit: src/templates/Method2Type.cpp

// [0x005B7E80] ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
extern "C" void ext_005B7260();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_005B7E80(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edx + 0x4]
        push eax
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [eax + 0x14]
        call edx
        push eax
        mov ecx, esi
        call ext_005B7260
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x10
    }
}

extern "C" void ext_005B72A0();

// [0x005B7F50] ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulseAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B7F50(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edx + 0x4]
        push eax
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [eax + 0x14]
        call edx
        push eax
        mov ecx, esi
        call ext_005B72A0
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x10
    }
}

// [0x005C4890] ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
extern "C" void ext_005C3070();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_005C4890(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edx + 0x4]
        push eax
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [eax + 0x14]
        call edx
        push eax
        mov ecx, esi
        call ext_005C3070
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x10
    }
}

// [0x005C48E0] ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulseAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
extern "C" void ext_005C30D0();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_005C48E0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [edx + 0x4]
        push eax
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [eax + 0x14]
        call edx
        push eax
        mov ecx, esi
        call ext_005C30D0
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x10
    }
}
