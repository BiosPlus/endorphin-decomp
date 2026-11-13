// Decompiled translation unit: src/classes/Camera.cpp

// [0x005490E0] Camera::vfunc_17 (200 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_00547820();
extern "C" void ext_00540D60();
extern "C" void ext_006936A0();
extern "C" void ext_0047FFA0();

extern "C" __declspec(naked) void __fastcall fn_005490E0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x74]
        push edi
        fstp dword ptr [esi + 0xd8]
        lea edi, [esi + 0xd8]
        fld dword ptr [esi + 0x78]
        push ecx
        fstp dword ptr [edi + 0x4]
        lea eax, [esp + 0x10]
        fld dword ptr [esi + 0x7c]
        mov ecx, edi
        fstp dword ptr [edi + 0x8]
        fldz
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x70]
        fstp dword ptr [esp]
        push eax
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [edi]
        push ecx
        fld dword ptr [eax + 0x4]
        lea ebx, [esi + 0x90]
        fstp dword ptr [edi + 0x4]
        lea ecx, [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x68]
        fstp dword ptr [esp]
        push ebx
        push ecx
        mov ecx, edi
        call ext_00547820
        mov ecx, eax
        call ext_00540D60
        push eax
        mov ecx, edi
        call ext_006936A0
        fld dword ptr [esi + 0x6c]
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, edi
        call ext_006936A0
        push edi
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esi + 0x80]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0xe8]
        pop edi
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0xec]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0xf0]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xf4]
        mov byte ptr [esi + 0x2c], 1
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00548390] Camera::vfunc_1 (335 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00517FC0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F698;
extern "C" int mem_00A9EF48;
extern "C" int mem_00A9ED50;
extern "C" int mem_00A9F47C;

extern "C" __declspec(naked) void __fastcall fn_00548390(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 8]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F698]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_5483E7
        cmp eax, 0xb53b30
        je L_5483E7
        cmp eax, 0xb53ab0
        je L_5483E7
        cmp eax, 0xb53a70
        je L_5483E7
        cmp eax, 0xb53af0
        jne L_54848E
    L_5483E7:
        mov eax, dword ptr [mem_00A9EF48]
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_54841B
        cmp eax, 0xb53b30
        je L_54841B
        cmp eax, 0xb53ab0
        je L_54841B
        cmp eax, 0xb53a70
        je L_54841B
        cmp eax, 0xb53af0
        jne L_548420
    L_54841B:
        mov eax, 0xb53b30
    L_548420:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0xd0]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00517FC0
        mov eax, dword ptr [mem_00A9ED50]
        add esp, 8
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_54846C
        cmp eax, 0xb53b30
        je L_54846C
        cmp eax, 0xb53ab0
        je L_54846C
        cmp eax, 0xb53a70
        je L_54846C
        cmp eax, 0xb53af0
        jne L_548471
    L_54846C:
        mov eax, 0xb53b30
    L_548471:
        lea ecx, [esp + 0xc]
        push ecx
        add edi, 0xc8
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_00517FC0
        add esp, 8
        pop edi
        pop esi
        ret 4
    L_54848E:
        mov edx, dword ptr [mem_00A9F698]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [edi + 0xd0]
        push ecx
        call ext_00517FC0
        mov edx, dword ptr [mem_00A9F47C]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add edi, 0xc8
        push edi
        call ext_00517FC0
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}
