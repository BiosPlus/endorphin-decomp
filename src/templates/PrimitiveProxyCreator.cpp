// Decompiled translation unit: src/templates/PrimitiveProxyCreator.cpp

// [0x004B4C30] ExprParser::PrimitiveProxyCreator<NMData::GraphEngineData, bool, 25>::vfunc_17 (151 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0049CFF0();
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
