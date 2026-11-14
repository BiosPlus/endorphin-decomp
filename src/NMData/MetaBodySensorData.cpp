// Decompiled translation unit: src/NMData/MetaBodySensorData.cpp

extern "C" void ext_004275E0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0060E890();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F7F4;
extern "C" int mem_00A9F7FC;
extern "C" int mem_00A9F554;
extern "C" int mem_00A9F6D4;

// [0x0060EA90] NMData::MetaBodySensorData::vfunc_21 (157 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060EA90(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        push edi
        call edx
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov ecx, esi
        call ext_0060E890
        mov eax, dword ptr [mem_00A9F7F4]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x180]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F7FC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x19c]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F554]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 0x1bc]
        push edx
        call ext_004275E0
        mov eax, dword ptr [mem_00A9F6D4]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        add esi, 0x1b8
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00610780] NMData::MetaBodySensorData::vfunc_8 (37 bytes)
extern "C" void ext_006105E0();
extern "C" __declspec(naked) void* __fastcall fn_00610780(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+0Ch]
        add ecx, 154h
        push ecx
        push esi
        mov dword ptr [esp+0Ch], 0
        call ext_006105E0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0060E6C0] NMData::MetaBodySensorData::vfunc_22 (228 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_0060E590();
extern "C" void ext_00640110();
extern "C" void ext_00427550();
extern "C" void ext_00640A50();
extern "C" int mem_00A9F268;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FEC;
extern "C" __declspec(naked) void* __fastcall fn_0060E6C0(void* self, int edx_unused, void* arg0) {
    __asm {
        mov     eax, dword ptr [mem_00A9F268]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     ecx, ebp
        call    ext_006404E0
        mov     edi, eax
        push    edi
        mov     ecx, esi
        call    ext_0060E590
        mov     ecx, dword ptr [mem_00A9F7F4]
        push    ecx
        mov     ecx, edi
        call    ext_00640110
        lea     ecx, [esi + 0x180]
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x18]
        call    ext_00427550
        lea     ebx, [esi + 0x19c]
        mov     ecx, ebx
        call    dword ptr [mem_00924FEC]
        test    al, al
        jne     L_0060E73F
        mov     edx, dword ptr [mem_00A9F7FC]
        push    edx
        mov     ecx, edi
        call    ext_00640110
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x18]
        call    ext_00427550
    L_0060E73F:
        lea     ebx, [esi + 0x1bc]
        mov     ecx, ebx
        call    dword ptr [mem_00924FEC]
        test    al, al
        jne     L_0060E774
        mov     eax, dword ptr [mem_00A9F554]
        push    eax
        mov     ecx, edi
        call    ext_00640110
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x18]
        call    ext_00427550
    L_0060E774:
        cmp     dword ptr [esi + 0x1b8], 0
        je      L_0060E79B
        mov     ecx, dword ptr [mem_00A9F6D4]
        push    ecx
        mov     ecx, edi
        call    ext_00640110
        mov     edx, dword ptr [esi + 0x1b8]
        push    edx
        push    eax
        call    ext_00640A50
        add     esp, 8
    L_0060E79B:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
