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

// [0x005B7ED0] ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43C88;
extern "C" int mem_00B43C84;

extern "C" __declspec(naked) void __fastcall fn_005B7ED0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3ade
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43C88], al
        jne L_guarded
        or dword ptr [mem_00B43C88], eax
        mov ecx, offset mem_00B43C84
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43C84], 0x00961b0c
        mov dword ptr [eax + 0x4], offset mem_00B43C84
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43C84
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B7FA0] ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulseAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43C90;
extern "C" int mem_00B43C8C;

extern "C" __declspec(naked) void __fastcall fn_005B7FA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3afe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43C90], al
        jne L_guarded
        or dword ptr [mem_00B43C90], eax
        mov ecx, offset mem_00B43C8C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43C8C], 0x00961cbc
        mov dword ptr [eax + 0x4], offset mem_00B43C8C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43C8C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C60B0] ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44444;
extern "C" int mem_00B44440;

extern "C" __declspec(naked) void __fastcall fn_005C60B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a466e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B44444], al
        jne L_guarded
        or dword ptr [mem_00B44444], eax
        mov ecx, offset mem_00B44440
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44440], 0x00964834
        mov dword ptr [eax + 0x4], offset mem_00B44440
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44440
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C6130] ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulseAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B4444C;
extern "C" int mem_00B44448;

extern "C" __declspec(naked) void __fastcall fn_005C6130(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a468e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B4444C], al
        jne L_guarded
        or dword ptr [mem_00B4444C], eax
        mov ecx, offset mem_00B44448
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44448], 0x009649e4
        mov dword ptr [eax + 0x4], offset mem_00B44448
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44448
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D230] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B5968C;
extern "C" int mem_00B59688;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_0066D230(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b347e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5968C], al
        jne L_guarded
        or dword ptr [mem_00B5968C], eax
        mov ecx, offset mem_00B59688
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59688], 0x0098831c
        mov dword ptr [eax + 0x4], offset mem_00B59688
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59688
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D2B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B59694;
extern "C" int mem_00B59690;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_0066D2B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b349e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59694], al
        jne L_guarded
        or dword ptr [mem_00B59694], eax
        mov ecx, offset mem_00B59690
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59690], 0x009884cc
        mov dword ptr [eax + 0x4], offset mem_00B59690
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59690
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D330] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_SE(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B5969C;
extern "C" int mem_00B59698;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_0066D330(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b34be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5969C], al
        jne L_guarded
        or dword ptr [mem_00B5969C], eax
        mov ecx, offset mem_00B59698
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59698], 0x0098867c
        mov dword ptr [eax + 0x4], offset mem_00B59698
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59698
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D3B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B596A4;
extern "C" int mem_00B596A0;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_0066D3B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b34de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596A4], al
        jne L_guarded
        or dword ptr [mem_00B596A4], eax
        mov ecx, offset mem_00B596A0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596A0], 0x0098882c
        mov dword ptr [eax + 0x4], offset mem_00B596A0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596A0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D430] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B596AC;
extern "C" int mem_00B596A8;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_0066D430(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b34fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596AC], al
        jne L_guarded
        or dword ptr [mem_00B596AC], eax
        mov ecx, offset mem_00B596A8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596A8], 0x009889dc
        mov dword ptr [eax + 0x4], offset mem_00B596A8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596A8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D4B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAnglesAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" int mem_00B596B4;
extern "C" int mem_00B596B0;
extern "C" void ext_0067A670();

extern "C" __declspec(naked) void __fastcall fn_0066D4B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b351e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596B4], al
        jne L_guarded
        or dword ptr [mem_00B596B4], eax
        mov ecx, offset mem_00B596B0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596B0], 0x00988b8c
        mov dword ptr [eax + 0x4], offset mem_00B596B0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596B0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D530] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596BC;
extern "C" int mem_00B596B8;

extern "C" __declspec(naked) void __fastcall fn_0066D530(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b353e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596BC], al
        jne L_guarded
        or dword ptr [mem_00B596BC], eax
        mov ecx, offset mem_00B596B8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596B8], 0x00988d3c
        mov dword ptr [eax + 0x4], offset mem_00B596B8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596B8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D5B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596C4;
extern "C" int mem_00B596C0;

extern "C" __declspec(naked) void __fastcall fn_0066D5B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b355e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596C4], al
        jne L_guarded
        or dword ptr [mem_00B596C4], eax
        mov ecx, offset mem_00B596C0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596C0], 0x00988eec
        mov dword ptr [eax + 0x4], offset mem_00B596C0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596C0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DE50] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotate(class NM::Vector3 const &, float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59744;
extern "C" int mem_00B59740;

extern "C" __declspec(naked) void __fastcall fn_0066DE50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b375e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59744], al
        jne L_guarded
        or dword ptr [mem_00B59744], eax
        mov ecx, offset mem_00B59740
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59740], 0x0098aac4
        mov dword ptr [eax + 0x4], offset mem_00B59740
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59740
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DED0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotateE(class NM::Vector3 const &, float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5974C;
extern "C" int mem_00B59748;

extern "C" __declspec(naked) void __fastcall fn_0066DED0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b377e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5974C], al
        jne L_guarded
        or dword ptr [mem_00B5974C], eax
        mov ecx, offset mem_00B59748
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59748], 0x0098ac74
        mov dword ptr [eax + 0x4], offset mem_00B59748
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59748
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DF50] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotateTS(class NM::Vector3 const &, float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59754;
extern "C" int mem_00B59750;

extern "C" __declspec(naked) void __fastcall fn_0066DF50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b379e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59754], al
        jne L_guarded
        or dword ptr [mem_00B59754], eax
        mov ecx, offset mem_00B59750
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59750], 0x0098ae24
        mov dword ptr [eax + 0x4], offset mem_00B59750
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59750
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DFD0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotateTSA(class NM::Vector3 const &, float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5975C;
extern "C" int mem_00B59758;

extern "C" __declspec(naked) void __fastcall fn_0066DFD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b37be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5975C], al
        jne L_guarded
        or dword ptr [mem_00B5975C], eax
        mov ecx, offset mem_00B59758
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59758], 0x0098afd4
        mov dword ptr [eax + 0x4], offset mem_00B59758
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59758
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006923C0] ExprParser::Method2Type<ValuePtrArrayObject, int, ValuePtr const &, {public: void __thiscall ValuePtrArrayObject::setElement(int, ValuePtr const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5BCC4;
extern "C" int mem_00B5BCC0;

extern "C" __declspec(naked) void __fastcall fn_006923C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b5e4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5BCC4], al
        jne L_guarded
        or dword ptr [mem_00B5BCC4], eax
        mov ecx, offset mem_00B5BCC0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5BCC0], 0x0098efec
        mov dword ptr [eax + 0x4], offset mem_00B5BCC0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5BCC0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_00671F30();
extern "C" void ext_0067BA20();

// [0x0066CC70] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotate(class NM::Vector3 const &, float)>::vfunc_49 (86 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066CC70(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push ecx
        fstp dword ptr [esp]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_0067BA20
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

// [0x0066C150] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_SE(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067CE50();

extern "C" __declspec(naked) void __fastcall fn_0066C150(void* self) {
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
        call ext_0067CE50
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

// [0x0066C060] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067CD30();

extern "C" __declspec(naked) void __fastcall fn_0066C060(void* self) {
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
        call ext_0067CD30
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

// [0x0066CD30] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotateTS(class NM::Vector3 const &, float)>::vfunc_49 (86 bytes)
extern "C" void ext_0067C760();
extern "C" void ext_00671F30();
extern "C" __declspec(naked) void __fastcall fn_0066CD30(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push ecx
        fstp dword ptr [esp]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_0067C760
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

// [0x0066C200] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067C940();

extern "C" __declspec(naked) void __fastcall fn_0066C200(void* self) {
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
        call ext_0067C940
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

// [0x0066C100] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067CDC0();

extern "C" __declspec(naked) void __fastcall fn_0066C100(void* self) {
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
        call ext_0067CDC0
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

// [0x0066C250] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAnglesAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067CA30();

extern "C" __declspec(naked) void __fastcall fn_0066C250(void* self) {
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
        call ext_0067CA30
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

// [0x0066CD90] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotateTSA(class NM::Vector3 const &, float)>::vfunc_49 (86 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067C810();
extern "C" __declspec(naked) void __fastcall fn_0066CD90(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push ecx
        fstp dword ptr [esp]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_0067C810
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

// [0x0066C2B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067CB20();

extern "C" __declspec(naked) void __fastcall fn_0066C2B0(void* self) {
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
        call ext_0067CB20
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

// [0x0066C1B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_0067CEE0();

extern "C" __declspec(naked) void __fastcall fn_0066C1B0(void* self) {
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
        call ext_0067CEE0
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

// [0x0066C300] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
extern "C" void ext_0067CC10();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_0066C300(void* self) {
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
        call ext_0067CC10
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

// [0x0066CCD0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &public: void __thiscall NM::Vector3::radArbitraryRotateE(class NM::Vector3 const &, float)>::vfunc_49 (86 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_0067C6B0();
extern "C" __declspec(naked) void __fastcall fn_0066CCD0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push ecx
        fstp dword ptr [esp]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_0067C6B0
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

// [0x00692380] ExprParser::Method2Type<ValuePtrArrayObject, int, ValuePtr const &, {public: void __thiscall ValuePtrArrayObject::setElement(int, ValuePtr const &), 0}>::vfunc_49 (64 bytes)
extern "C" void ext_004ECA90();

extern "C" __declspec(naked) void __fastcall fn_00692380(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [esp + 0xc], 0x0
        call eax
        push eax
        mov ecx, esi
        call ext_004ECA90
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
