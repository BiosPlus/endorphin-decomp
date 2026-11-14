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

// [0x005012A0] NMData::EvolveEngineData::vfunc_2_off_8 (245 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_005010D0();
extern "C" void ext_00679030();
extern "C" void ext_006798D0();
extern "C" void ext_00685900();
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) void* __fastcall fn_005012A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b28a9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, ecx
        xor ebx, ebx
        lea eax, [ebp - 0x8]
        neg eax
        sbb eax, eax
        mov dword ptr [esp + 0x8], ebx
        mov ecx, dword ptr [ebp + 0x138]
        push esi
        and eax, ebp
        cmp ecx, ebx
        push edi
        mov dword ptr [esp + 0x24], ebx
        je loc_005012E0
        add ecx, 0x10
        jmp loc_005012E2

loc_005012E0:
        xor ecx, ecx

loc_005012E2:
        mov edi, dword ptr [esp + 0x30]
        mov esi, dword ptr [esp + 0x2c]
        push eax
        push edi
        push ecx
        push esi
        call ext_006798D0
        mov ecx, eax
        call ext_00679030
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x10], 1
        je loc_00501315
        cmp eax, dword ptr [mem_00B599BC]
        jne loc_0050137E

loc_00501315:
        mov eax, dword ptr [ebp + 0x138]
        cmp eax, ebx
        push edi
        je loc_00501339
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        lea edx, [esp + 0x18]
        push edx
        call eax
        mov dword ptr [esp + 0x24], 1
        jmp loc_0050135E

loc_00501339:
        lea ecx, [ebp + 0x124]
        call ext_005010D0
        cmp eax, ebx
        je loc_0050137E
        push ebx
        push ebx
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, eax
        call ext_00685900
        mov dword ptr [esp + 0x24], 2

loc_0050135E:
        push eax
        mov ecx, esi
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        cmp ecx, ebx
        mov byte ptr [esp + 0x24], bl
        je loc_0050137E
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x14]
        push eax
        call edx

loc_0050137E:
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret 8
    }
}

// [0x00500BA0] NMData::EvolveEngineData::vfunc_3 (168 bytes)
extern "C" void ext_00427550();
extern "C" void ext_004FD9A0();
extern "C" void ext_005006E0();
extern "C" void ext_0050E680();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" int mem_00A9EEA4;
extern "C" int mem_00A9F1A0;
extern "C" int mem_00A9F304;
extern "C" int mem_00A9F3B0;
extern "C" int mem_00A9F3B4;
extern "C" int mem_0094EE4C;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void* __fastcall fn_00500BA0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EEA4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640390
        push eax
        lea ecx, [esi + 0xc]
        call ext_004FD9A0
        mov ecx, dword ptr [mem_00A9F1A0]
        push 0
        push ecx
        mov ecx, edi
        call ext_00640390
        push eax
        lea ecx, [esi + 0x2c]
        call ext_0050E680
        mov edx, dword ptr [mem_00A9F304]
        push 0
        push edx
        mov ecx, edi
        call ext_00640390
        mov edx, dword ptr [esi + 0xa8]
        lea ecx, [esi + 0xa8]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov ecx, dword ptr [mem_00A9F3B0]
        mov edx, dword ptr [mem_00A9F3B4]
        push 0
        push ecx
        push edx
        lea eax, [esi + 0x12c]
        push edi
        push eax
        call ext_005006E0
        add esp, 0x14
        push offset mem_0094EE4C
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x110]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x00501D40] NMData::EvolveEngineData::vfunc_7_off_8 (118 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_0065F550();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00501D40(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call ext_0065F550
        mov edi, dword ptr [esi + 0x128]
        add esi, 0x124
        cmp edi, dword ptr [esi + 0x8]
        jbe fn501d40_l0
        call dword ptr [mem_00925134]
    fn501d40_l0:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe fn501d40_l1
        call dword ptr [mem_00925134]
    fn501d40_l1:
        cmp esi, esi
        je fn501d40_l2
        call dword ptr [mem_00925134]
    fn501d40_l2:
        cmp edi, ebx
        je fn501d40_done
        cmp edi, dword ptr [esi + 0x8]
        jb fn501d40_l3
        call dword ptr [mem_00925134]
    fn501d40_l3:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        mov ecx, ebp
        call ext_0040ECB0
        cmp edi, dword ptr [esi + 0x8]
        jb fn501d40_l4
        call dword ptr [mem_00925134]
    fn501d40_l4:
        add edi, 0x4
        jmp fn501d40_l0
    fn501d40_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
