// Decompiled translation unit: src/NMData/RigNode.cpp

// [0x005AA900] NMData::RigNode::vfunc_14 (210 bytes)
extern "C" void* __fastcall ext_0058F6B0(void* self, int edx_unused, void* a1, int a2);
extern "C" void* __fastcall ext_00661680(void* self, int edx_unused, int a1, int a2);
extern "C" void* __cdecl ext_0046F7D0(void* p);

extern "C" __declspec(naked) void* __fastcall fn_005AA900(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0xd
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        je L979
        cmp eax, 0x134
        je L930
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        push edi
        call ext_0058F6B0
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    L930:
        cmp dword ptr [esi + 0x190], 0
        je LFAIL
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        test al, al
        je LFAIL
        mov eax, dword ptr [esi + 0x154]
        cmp eax, 1
        je L95E
        cmp eax, 3
        jne LFAIL
    L95E:
        add esi, 0x158
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L979:
        cmp dword ptr [esi + 0x190], 0
        je LFAIL
        mov ecx, dword ptr [esi + 0x190]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        test al, al
        je LFAIL
        mov eax, dword ptr [esi + 0x154]
        cmp eax, 2
        je L9A3
        cmp eax, 3
        jne LFAIL
    L9A3:
        add esi, 0x164
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    LFAIL:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005AAB90] NMData::RigNode::vfunc_21 (384 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0058F630();
extern "C" void ext_005AAA00();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" int mem_00A9F6BC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F1B8;
extern "C" int mem_00A9ED1C;

extern "C" __declspec(naked) void __fastcall fn_005AAB90(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x34
        push esi
        push edi
        mov edi, dword ptr [esp + 0x4c]
        push edi
        mov esi, ecx
        call ext_0058F630
        mov eax, dword ptr [mem_00A9F6BC]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, eax
        call edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x48], 0
        call ext_005AAA00
        lea ecx, [esp + 0x20]
        mov dword ptr [esi + 0x154], eax
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [mem_00A9F7F4]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x170]
        push ecx
        call ext_004275E0
        add esp, 0x8
        push 0x95ef48
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x4c]
        mov dword ptr [esp + 0x4c], eax
        push edx
        lea eax, [esi + 0x18c]
        push eax
        call ext_00427640
        mov ecx, dword ptr [mem_00A9F1B8]
        add esp, 0x8
        push 1
        push 0
        push ecx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_MATCH_1
        cmp eax, 0xb53b30
        je L_MATCH_1
        cmp eax, 0xb53ab0
        je L_MATCH_1
        cmp eax, 0xb53a70
        je L_MATCH_1
        cmp eax, 0xb53af0
        jne L_NO_MATCH_1
    L_MATCH_1:
        mov eax, 0xb53b30
    L_NO_MATCH_1:
        push eax
        lea edx, [esp + 0xc]
        push edx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0x158]
        add esp, 0x8
        fld dword ptr [eax + 0x4]
        push 1
        fstp dword ptr [esi + 0x15c]
        push 0
        fld dword ptr [eax + 0x8]
        mov ecx, edi
        fstp dword ptr [esi + 0x160]
        mov eax, dword ptr [mem_00A9ED1C]
        push eax
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_MATCH_2
        cmp eax, 0xb53b30
        je L_MATCH_2
        cmp eax, 0xb53ab0
        je L_MATCH_2
        cmp eax, 0xb53a70
        je L_MATCH_2
        cmp eax, 0xb53af0
        jne L_NO_MATCH_2
    L_MATCH_2:
        mov eax, 0xb53b30
    L_NO_MATCH_2:
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call ext_0067EFD0
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x44]
        fstp dword ptr [esi + 0x164]
        fld dword ptr [eax + 0x4]
        add esp, 0x8
        fstp dword ptr [esi + 0x168]
        pop edi
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x16c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x40
        ret 0x4
    }
}
