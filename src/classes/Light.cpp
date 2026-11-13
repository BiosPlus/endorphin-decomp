// Decompiled translation unit: src/classes/Light.cpp

extern "C" void ext_004275C0();
extern "C" void ext_00427A60();
extern "C" void ext_0046C0A0();
extern "C" void ext_0054E340();
extern "C" void ext_0054E400();
extern "C" void ext_0063F530();
extern "C" void ext_0066A550();
extern "C" void ext_0067B930();
extern "C" int mem_00A9EE48;
extern "C" int mem_00924FC0;
extern "C" int mem_00925134;
extern "C" int mem_00A9F604;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F9A4;
extern "C" int mem_00A9F9A0;
extern "C" int mem_00A9ED04;
extern "C" int mem_00A9EE40;
extern "C" int mem_00A9F2A4;
extern "C" int mem_00A9EE44;
extern "C" int mem_00A9F3B8;
extern "C" int mem_00A9ED38;
extern "C" int mem_00A9F1B0;

// [0x0054E420] Light::vfunc_1 (963 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054E420(void* self, int edx_unused, void* arg) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, fs:[0]
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x4c
        mov     eax, dword ptr [mem_00A9EE48]
        push    ebx
        mov     ebx, dword ptr [esp + 0x60]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        lea     ecx, [ebx + 4]
        push    ecx
        mov     dword ptr [esp + 0x18], esi
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        mov     ecx, esi
        push    eax
        call    ext_0054E400
        mov     esi, dword ptr [ebx + 0x40]
        add     ebx, 0x3c
        cmp     esi, dword ptr [ebx + 8]
        jbe     L_54E472
        call    dword ptr [mem_00925134]
    L_54E472:
        mov     ebp, esi
        mov     esi, dword ptr [ebx + 8]
        cmp     dword ptr [ebx + 4], esi
        mov     edi, ebx
        mov     dword ptr [esp + 0x18], esi
        jbe     L_54E488
        call    dword ptr [mem_00925134]
    L_54E488:
        test    edi, edi
        je      L_54E490
        cmp     edi, ebx
        je      L_54E496
    L_54E490:
        call    dword ptr [mem_00925134]
    L_54E496:
        cmp     ebp, esi
        jae     L_54E577
        test    edi, edi
        jne     L_54E4A8
        call    dword ptr [mem_00925134]
    L_54E4A8:
        cmp     ebp, dword ptr [edi + 8]
        jb      L_54E4B3
        call    dword ptr [mem_00925134]
    L_54E4B3:
        mov     esi, dword ptr [ebp]
        mov     edx, dword ptr [mem_00A9F604]
        push    edx
        lea     edi, [esi + 4]
        push    edi
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_54E512
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], esi
        call    ext_004275C0
        push    0x92f10c
        push    eax
        mov     dword ptr [esp + 0x6c], 0
        call    dword ptr [mem_00924FC0]
        mov     ecx, dword ptr [esp + 0x18]
        mov     byte ptr [ecx + 4], al
        add     esp, 8
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x64], -1
        call    dword ptr [mem_00924FF4]
        jmp     L_54E55E
    L_54E512:
        mov     edx, dword ptr [mem_00A9F9A4]
        push    edx
        push    edi
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_54E530
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, 0x48
        jmp     L_54E54C
    L_54E530:
        mov     edx, dword ptr [mem_00A9F9A0]
        push    edx
        push    edi
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      L_54E55E
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, 0x4c
    L_54E54C:
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x1c], esi
        call    ext_0046C0A0
        add     esp, 8
    L_54E55E:
        mov     edi, ebx
        cmp     ebp, dword ptr [edi + 8]
        jb      L_54E56B
        call    dword ptr [mem_00925134]
    L_54E56B:
        mov     esi, dword ptr [esp + 0x18]
        add     ebp, 4
        jmp     L_54E488
    L_54E577:
        mov     esi, dword ptr [esp + 0x6c]
        mov     edi, dword ptr [esi + 0x28]
        mov     ebx, dword ptr [mem_00925134]
        add     esi, 0x24
        cmp     edi, dword ptr [esi + 8]
        jbe     L_54E58E
        call    ebx
    L_54E58E:
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 8]
        cmp     dword ptr [esi + 4], edi
        jbe     L_54E5AD
        call    ebx
    L_54E5AD:
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x2c], esi
        mov     dword ptr [esp + 0x30], edi
        call    ext_00427A60
    L_54E5C2:
        mov     esi, dword ptr [esp + 0x20]
        test    esi, esi
        je      L_54E5D0
        cmp     esi, dword ptr [esp + 0x2c]
        je      L_54E5D2
    L_54E5D0:
        call    ebx
    L_54E5D2:
        mov     ebp, dword ptr [esp + 0x24]
        cmp     ebp, dword ptr [esp + 0x30]
        jae     L_54E7CE
        test    esi, esi
        jne     L_54E5E6
        call    ebx
    L_54E5E6:
        cmp     ebp, dword ptr [esi + 8]
        jb      L_54E5ED
        call    ebx
    L_54E5ED:
        mov     esi, dword ptr [ebp]
        mov     edx, dword ptr [mem_00A9ED04]
        mov     ebx, dword ptr [mem_00924FC0]
        push    edx
        lea     edi, [esi + 4]
        push    edi
        mov     byte ptr [esp + 0x74], 0
        call    ebx
        add     esp, 8
        test    al, al
        je      L_54E621
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        add     ecx, 0x28
        call    ext_0066A550
        jmp     L_54E731
    L_54E621:
        mov     eax, dword ptr [mem_00A9EE40]
        push    eax
        push    edi
        call    ebx
        add     esp, 8
        test    al, al
        je      L_54E643
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        add     ecx, 8
        call    ext_0066A550
        jmp     L_54E731
    L_54E643:
        mov     ecx, dword ptr [mem_00A9F2A4]
        push    ecx
        push    edi
        call    ebx
        add     esp, 8
        test    al, al
        je      L_54E666
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        add     ecx, 0x18
        call    ext_0066A550
        jmp     L_54E731
    L_54E666:
        mov     edx, dword ptr [mem_00A9EE44]
        push    edx
        push    edi
        call    ebx
        add     esp, 8
        test    al, al
        je      L_54E6D9
        mov     ebp, dword ptr [esp + 0x10]
        mov     ecx, ebp
        call    ext_0054E340
        test    al, al
        jne     L_54E6CE
        mov     eax, dword ptr [mem_00A9F3B8]
        push    1
        push    0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_54E6BA
        cmp     eax, 0xb53b30
        je      L_54E6BA
        cmp     eax, 0xb53ab0
        je      L_54E6BA
        cmp     eax, 0xb53a70
        je      L_54E6BA
        cmp     eax, 0xb53af0
        jne     L_54E6BF
    L_54E6BA:
        mov     eax, 0xb53b30
    L_54E6BF:
        push    eax
        lea     ecx, [ebp + 0x50]
        call    ext_0067B930
        mov     ebp, dword ptr [esp + 0x24]
        jmp     L_54E731
    L_54E6CE:
        mov     ebp, dword ptr [esp + 0x24]
        mov     byte ptr [esp + 0x6c], 1
        jmp     L_54E731
    L_54E6D9:
        mov     ecx, dword ptr [mem_00A9ED38]
        push    ecx
        push    edi
        call    ebx
        add     esp, 8
        test    al, al
        je      L_54E731
        mov     edx, dword ptr [mem_00A9F3B8]
        push    1
        push    0
        push    edx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_54E71F
        cmp     eax, 0xb53b30
        je      L_54E71F
        cmp     eax, 0xb53ab0
        je      L_54E71F
        cmp     eax, 0xb53a70
        je      L_54E71F
        cmp     eax, 0xb53af0
        jne     L_54E724
    L_54E71F:
        mov     eax, 0xb53b30
    L_54E724:
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        add     ecx, 0x5c
        call    ext_0067B930
    L_54E731:
        mov     eax, dword ptr [mem_00A9F1B0]
        push    eax
        push    edi
        call    ebx
        add     esp, 8
        test    al, al
        jne     L_54E747
        cmp     byte ptr [esp + 0x6c], al
        je      L_54E7A4
    L_54E747:
        mov     ecx, dword ptr [mem_00A9F3B8]
        push    1
        push    0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_54E77C
        cmp     eax, 0xb53b30
        je      L_54E77C
        cmp     eax, 0xb53ab0
        je      L_54E77C
        cmp     eax, 0xb53a70
        je      L_54E77C
        cmp     eax, 0xb53af0
        jne     L_54E781
    L_54E77C:
        mov     eax, 0xb53b30
    L_54E781:
        push    eax
        lea     ecx, [esp + 0x38]
        call    ext_0067B930
        fld     dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x38]
        fld     dword ptr [esp + 0x38]
        fstp    dword ptr [eax + 0x3c]
        fld     dword ptr [esp + 0x3c]
        fstp    dword ptr [eax + 0x40]
    L_54E7A4:
        mov     edx, dword ptr [esp + 0x20]
        cmp     ebp, dword ptr [edx + 8]
        jb      L_54E7B3
        call    dword ptr [mem_00925134]
    L_54E7B3:
        add     ebp, 4
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x24], ebp
        call    ext_00427A60
        mov     ebx, dword ptr [mem_00925134]
        jmp     L_54E5C2
    L_54E7CE:
        mov     ecx, dword ptr [esp + 0x5c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x58
        ret     4
    }
}
