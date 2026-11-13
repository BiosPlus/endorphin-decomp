// Decompiled translation unit: src/NMData/EvolveEngineData.cpp

// [0x004FDA70] NMData::EvolveEngineData::vfunc_7 (21 bytes)
extern "C" void ext_004FD870();
extern "C" void ext_0050E990();

extern "C" __declspec(naked) void __fastcall fn_004FDA70(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, ecx
        lea ecx, [edx + 0xc]
        call ext_004FD870
        lea ecx, [edx + 0x2c]
        call ext_0050E990
        ret 0x4
    }
}

// [0x004BED30] NMData::EvolveEngineData::vfunc_6 (35 bytes)
extern "C" int mem_00A9EEA0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_004BED30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EEA0]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005004C0] NMData::EvolveEngineData::vfunc_13_off_8 (333 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00500120();
extern "C" void ext_0055DA20();
extern "C" void ext_00661650();
extern "C" int mem_00A9EEA4;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9EFC0;
extern "C" int mem_00A9F304;
extern "C" int mem_00A9F3B4;
extern "C" int mem_0094EE3C;
extern "C" int mem_0094EE24;

extern "C" __declspec(naked) void* __fastcall fn_005004C0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EEA4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [mem_00924FC0]
        push eax
        push esi
        mov ebx, ecx
        mov dword ptr [esp + 0x14], 0
        call edi
        add esp, 8
        test al, al
        je short loc_00500500
        mov esi, dword ptr [esp + 0x14]
        add ebx, 4
        push ebx
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_00500500:
        push offset mem_0094EE3C
        push esi
        call edi
        add esp, 8
        test al, al
        je short loc_00500527
        mov esi, dword ptr [esp + 0x14]
        add ebx, 0x24
        push ebx
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_00500527:
        mov ecx, dword ptr [mem_00A9EFC0]
        push ecx
        push esi
        call edi
        add esp, 8
        test al, al
        je short loc_00500574
        lea edx, [ebx + 0xd8]
        test edx, edx
        je short loc_0050055D
        mov esi, dword ptr [esp + 0x14]
        lea eax, [ebx + 0xe4]
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_0050055D:
        mov esi, dword ptr [esp + 0x14]
        xor eax, eax
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_00500574:
        mov eax, dword ptr [mem_00A9F304]
        push eax
        push esi
        call edi
        add esp, 8
        test al, al
        je short loc_0050059F
        mov esi, dword ptr [esp + 0x14]
        add ebx, 0x9c
        push ebx
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_0050059F:
        mov ecx, dword ptr [mem_00A9F3B4]
        push ecx
        push esi
        call edi
        add esp, 8
        test al, al
        je short loc_005005D1
        add ebx, 0x124
        push ebx
        call ext_00500120
        mov esi, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_005005D1:
        push offset mem_0094EE24
        push esi
        call edi
        mov esi, dword ptr [esp + 0x1c]
        add esp, 8
        test al, al
        je short loc_005005FB
        mov edx, dword ptr [ebx + 0x134]
        push edx
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

loc_005005FB:
        push esi
        call ext_0046F7D0
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8
    }
}
