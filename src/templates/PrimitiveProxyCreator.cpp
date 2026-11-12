// Decompiled translation unit: src/templates/PrimitiveProxyCreator.cpp

// [0x004B4C30] ExprParser::PrimitiveProxyCreator<NMData::GraphEngineData, bool, 25>::vfunc_17 (151 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0049CFF0();
extern "C" void ext_004BA270();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_004B4C30(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa377ec
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success:
        call ext_0049CFF0
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x19
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x00500150] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00500150(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_500150
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_500150:
        call ext_0049CFF0
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x1d
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x005001F0] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 30>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_005001F0(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_5001F0
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_5001F0:
        call ext_0049CFF0
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x1e
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x00500850] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, float, 4>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00500850(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_500850
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_500850:
        call ext_004BA270
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x4
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x005008F0] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 16>::vfunc_17 (151 bytes)
extern "C" void ext_0049DA40();

extern "C" __declspec(naked) void __fastcall fn_005008F0(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_5008f0
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_5008f0:
        call ext_0049DA40
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x10
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x00500990] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 8>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00500990(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_500990
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_500990:
        call ext_0049DA40
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x8
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x00500A30] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 12>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00500A30(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_500a30
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_500a30:
        call ext_0049DA40
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0xc
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

// [0x00500AD0] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 24>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00500AD0(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40460
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_500ad0
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_500ad0:
        call ext_0049DA40
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x18
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}

extern "C" void ext_00498F90();

// [0x0050B0C0] ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>::vfunc_17 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_0050B0C0(void* self) {
    __asm {
        push -1
        push 0x892ed9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push 0
        push 0xa40f04
        push 0xa2e2f8
        push 0
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jne short label_success_50b0c0
        push 0x9432ac
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], esi
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x28]
        push edx
        call ext_006A6DD2
    label_success_50b0c0:
        call ext_00498F90
        mov ecx, eax
        mov eax, dword ptr [esp + 0x5c]
        add esi, 0x4
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret 8
    }
}
