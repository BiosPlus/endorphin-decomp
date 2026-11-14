// Decompiled translation unit: src/NMData/SensorData.cpp

extern "C" int mem_00924EA8;
extern "C" int mem_0093F7B8;

// [0x0060E540] NMData::SensorData::vfunc_62 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060E540(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x14]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 0x154]
        call dword ptr [mem_00924EA8]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esi + 0x174]
        mov dword ptr [esi + 0xe8], 0xffffffff
        fld1
        mov dword ptr [esi + 0x170], 0
        fstp dword ptr [esi + 0x178]
        pop esi
        ret
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_0046C0A0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F164;
extern "C" int mem_00A9F058;
extern "C" int mem_00A9F380;

// [0x0060E890] NMData::SensorData::vfunc_21 (365 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060E890(void* self, int edx_unused, void* arg0) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0xf8]
        push    edi
        call    edx
        mov     eax, dword ptr [mem_00A9F838]
        mov     edi, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    ext_0063EFE0
        push    eax
        lea     ecx, [esi + 0x14]
        push    ecx
        call    ext_004275E0
        mov     edx, dword ptr [mem_00A9FA6C]
        add     esp, 0x8
        push    edx
        mov     ecx, edi
        call    ext_0063EFE0
        push    eax
        lea     eax, [esi + 0x154]
        push    eax
        call    ext_004275E0
        mov     ecx, dword ptr [mem_00A9F164]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_60e90f
        cmp     eax, 0xb53b30
        je      loc_60e90f
        cmp     eax, 0xb53ab0
        je      loc_60e90f
        cmp     eax, 0xb53a70
        je      loc_60e90f
        cmp     eax, 0xb53af0
        jne     loc_60e916
loc_60e90f:
        mov     edi, 0xb53b30
        jmp     loc_60e918
loc_60e916:
        mov     edi, eax
loc_60e918:
        cmp     edi, 0xb53a34
        je      loc_60e9f8
        cmp     edi, 0xb53b30
        je      loc_60e9f8
        cmp     edi, 0xb53ab0
        je      loc_60e9f8
        cmp     edi, 0xb53a70
        je      loc_60e9f8
        cmp     edi, 0xb53af0
        je      loc_60e9f8
        mov     edx, dword ptr [mem_00A9F058]
        push    0x1
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_60e989
        cmp     eax, 0xb53b30
        je      loc_60e989
        cmp     eax, 0xb53ab0
        je      loc_60e989
        cmp     eax, 0xb53a70
        je      loc_60e989
        cmp     eax, 0xb53af0
        jne     loc_60e98e
loc_60e989:
        mov     eax, 0xb53b30
loc_60e98e:
        mov     dword ptr [esp + 0xc], eax
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esi + 0x174]
        push    ecx
        call    ext_0046C0A0
        mov     edx, dword ptr [mem_00A9F380]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_60e9db
        cmp     eax, 0xb53b30
        je      loc_60e9db
        cmp     eax, 0xb53ab0
        je      loc_60e9db
        cmp     eax, 0xb53a70
        je      loc_60e9db
        cmp     eax, 0xb53af0
        jne     loc_60e9e0
loc_60e9db:
        mov     eax, 0xb53b30
loc_60e9e0:
        mov     dword ptr [esp + 0xc], eax
        lea     eax, [esp + 0xc]
        push    eax
        add     esi, 0x178
        push    esi
        call    ext_0046C0A0
        add     esp, 0x8
loc_60e9f8:
        pop     edi
        pop     esi
        ret     0x4
    }
}

extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640BC0();
extern "C" int mem_00924FEC;
extern "C" int mem_00924FF0;

// [0x0060E590] NMData::SensorData::vfunc_22 (240 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0060E590(void* self, int edx_unused, void* arg0) {
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        call    dword ptr [mem_00924FEC]
        test    al, al
        mov     ebx, dword ptr [esp + 0x10]
        jnz     L_0060E5CB
        mov     eax, dword ptr [mem_00A9F838]
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00427550
    L_0060E5CB:
        lea     edi, [esi + 0x154]
        mov     ecx, edi
        call    dword ptr [mem_00924FEC]
        test    al, al
        jnz     L_0060E601
        mov     ecx, dword ptr [mem_00A9FA6C]
        push    ecx
        mov     ecx, ebx
        call    ext_00640110
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00427550
    L_0060E601:
        fld     dword ptr [mem_0093F7B8]
        fcomp   dword ptr [esi + 0x174]
        fnstsw  ax
        test    ah, 0x44
        jp      L_0060E623
        fld1
        fcomp   dword ptr [esi + 0x178]
        fnstsw  ax
        test    ah, 0x44
        jnp     L_0060E678
    L_0060E623:
        mov     edx, dword ptr [mem_00A9F164]
        push    edx
        mov     ecx, ebx
        call    ext_006404E0
        mov     edi, eax
        mov     eax, dword ptr [mem_00A9F058]
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_00640390
        fld     dword ptr [esi + 0x174]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        mov     ecx, dword ptr [mem_00A9F380]
        add     esp, 0x8
        push    0x0
        push    ecx
        mov     ecx, edi
        call    ext_00640390
        fld     dword ptr [esi + 0x178]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        add     esp, 0x8
    L_0060E678:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
    }
}
