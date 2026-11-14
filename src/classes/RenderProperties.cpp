// Decompiled translation unit: src/classes/RenderProperties.cpp

extern "C" int mem_00A9F208;
extern "C" int mem_00924FE4;

// [0x0054C910] RenderProperties::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054C910(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F208]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0054D420();
extern "C" void ext_0063EA50();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F3D0;
extern "C" int mem_00A9EF8C;
extern "C" int mem_00A9F3A4;
extern "C" int mem_00A9EDD4;
extern "C" int mem_00A9EF88;
extern "C" int mem_00A9F3A0;
extern "C" int mem_00A9FAAC;
extern "C" int mem_00A9EF4C;
extern "C" int mem_00A9FAF8;
extern "C" int mem_0092510C;
extern "C" int mem_00A9EF3C;
extern "C" int mem_00928E78;
extern "C" int mem_0092BD70;
extern "C" int mem_00A9EF1C;
extern "C" int mem_00A9FA70;
extern "C" int mem_00A9F988;
extern "C" int mem_00A9EF80;
extern "C" int mem_00A9EF84;
extern "C" int mem_00A9F400;
extern "C" int mem_00A9F028;
extern "C" int mem_00A9F124;
extern "C" int mem_00A9F128;
extern "C" int mem_00A9ED84;
extern "C" int mem_00A9EF78;
extern "C" int mem_00A9EFE0;
extern "C" int mem_00924FF4;

// [0x0054DAE0] RenderProperties::vfunc_1 (2138 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054DAE0(void* self, int edx_unused, void* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8b56f9
        push    eax
        mov     dword ptr fs:[0x0], esp
        mov     eax, dword ptr [mem_00A9F838]
        sub     esp, 0x24
        push    ebp
        mov     ebp, dword ptr [esp + 0x38]
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     ecx, ebp
        call    ext_0063EFE0
        push    eax
        lea     ecx, [edi + 0x18]
        push    ecx
        call    ext_004275E0
        mov     edx, dword ptr [mem_00A9F3D0]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    edx
        mov     ecx, ebp
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DB50
        cmp     eax, 0xb53b30
        je      L_0054DB50
        cmp     eax, 0xb53ab0
        je      L_0054DB50
        cmp     eax, 0xb53a70
        je      L_0054DB50
        cmp     eax, 0xb53af0
        jne     L_0054DB57
    L_0054DB50:
        mov     esi, 0xb53b30
        jmp     L_0054DB59
    L_0054DB57:
        mov     esi, eax
    L_0054DB59:
        mov     eax, dword ptr [mem_00A9EF8C]
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DB8D
        cmp     eax, 0xb53b30
        je      L_0054DB8D
        cmp     eax, 0xb53ab0
        je      L_0054DB8D
        cmp     eax, 0xb53a70
        je      L_0054DB8D
        cmp     eax, 0xb53af0
        jne     L_0054DB92
    L_0054DB8D:
        mov     eax, 0xb53b30
    L_0054DB92:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x4]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9F3A4]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DBDB
        cmp     eax, 0xb53b30
        je      L_0054DBDB
        cmp     eax, 0xb53ab0
        je      L_0054DBDB
        cmp     eax, 0xb53a70
        je      L_0054DBDB
        cmp     eax, 0xb53af0
        jne     L_0054DBE0
    L_0054DBDB:
        mov     eax, 0xb53b30
    L_0054DBE0:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x8]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9EDD4]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DC29
        cmp     eax, 0xb53b30
        je      L_0054DC29
        cmp     eax, 0xb53ab0
        je      L_0054DC29
        cmp     eax, 0xb53a70
        je      L_0054DC29
        cmp     eax, 0xb53af0
        jne     L_0054DC2E
    L_0054DC29:
        mov     eax, 0xb53b30
    L_0054DC2E:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x14]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9EF88]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DC77
        cmp     eax, 0xb53b30
        je      L_0054DC77
        cmp     eax, 0xb53ab0
        je      L_0054DC77
        cmp     eax, 0xb53a70
        je      L_0054DC77
        cmp     eax, 0xb53af0
        jne     L_0054DC7C
    L_0054DC77:
        mov     eax, 0xb53b30
    L_0054DC7C:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0xc]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9F3A0]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DCC5
        cmp     eax, 0xb53b30
        je      L_0054DCC5
        cmp     eax, 0xb53ab0
        je      L_0054DCC5
        cmp     eax, 0xb53a70
        je      L_0054DCC5
        cmp     eax, 0xb53af0
        jne     L_0054DCCA
    L_0054DCC5:
        mov     eax, 0xb53b30
    L_0054DCCA:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x10]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9FAAC]
        add     esp, 0x8
        push    eax
        mov     ecx, esi
        call    ext_0063EFE0
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x39]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_00427640
        mov     eax, dword ptr [mem_00A9EF4C]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DD35
        cmp     eax, 0xb53b30
        je      L_0054DD35
        cmp     eax, 0xb53ab0
        je      L_0054DD35
        cmp     eax, 0xb53a70
        je      L_0054DD35
        cmp     eax, 0xb53af0
        jne     L_0054DD3A
    L_0054DD35:
        mov     eax, 0xb53b30
    L_0054DD3A:
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    edx
        mov     ecx, dword ptr [mem_00A9FAF8]
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x40], 0x0
        call    dword ptr [mem_0092510C]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956ecc
        mov     ecx, esi
        mov     byte ptr [edi + 0x38], al
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DD9B
        cmp     eax, 0xb53b30
        je      L_0054DD9B
        cmp     eax, 0xb53ab0
        je      L_0054DD9B
        cmp     eax, 0xb53a70
        je      L_0054DD9B
        cmp     eax, 0xb53af0
        jne     L_0054DDA0
    L_0054DD9B:
        mov     eax, 0xb53b30
    L_0054DDA0:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x3a]
        push    eax
        call    ext_00427640
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956eb8
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DDE8
        cmp     eax, 0xb53b30
        je      L_0054DDE8
        cmp     eax, 0xb53ab0
        je      L_0054DDE8
        cmp     eax, 0xb53a70
        je      L_0054DDE8
        cmp     eax, 0xb53af0
        jne     L_0054DDED
    L_0054DDE8:
        mov     eax, 0xb53b30
    L_0054DDED:
        push    ebx
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     ebx, [edi + 0x3b]
        push    ebx
        mov     dword ptr [esp + 0x4c], eax
        call    ext_00427640
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956eb8
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DE36
        cmp     eax, 0xb53b30
        je      L_0054DE36
        cmp     eax, 0xb53ab0
        je      L_0054DE36
        cmp     eax, 0xb53a70
        je      L_0054DE36
        cmp     eax, 0xb53af0
        jne     L_0054DE3B
    L_0054DE36:
        mov     eax, 0xb53b30
    L_0054DE3B:
        mov     ecx, eax
        call    ext_0063EA50
        test    al, al
        je      L_0054DE49
        mov     byte ptr [ebx], 0x1
    L_0054DE49:
        mov     edx, dword ptr [mem_00A9EF3C]
        push    0x1
        push    0x0
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x50], 0x1e
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DE86
        cmp     eax, 0xb53b30
        je      L_0054DE86
        cmp     eax, 0xb53ab0
        je      L_0054DE86
        cmp     eax, 0xb53a70
        je      L_0054DE86
        cmp     eax, 0xb53af0
        jne     L_0054DE8B
    L_0054DE86:
        mov     eax, 0xb53b30
    L_0054DE8B:
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        call    ext_0053F5F0
        fild    dword ptr [esp + 0x4c]
        add     esp, 0x8
        fdivr   qword ptr [mem_00928E78]
        fadd    qword ptr [mem_0092BD70]
        fstp    qword ptr [esp + 0x10]
        fld     qword ptr [esp + 0x10]
        fistp   dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x44]
        push    0x1
        mov     dword ptr [edi + 0x34], edx
        mov     eax, dword ptr [mem_00A9EF1C]
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DEF8
        cmp     eax, 0xb53b30
        je      L_0054DEF8
        cmp     eax, 0xb53ab0
        je      L_0054DEF8
        cmp     eax, 0xb53a70
        je      L_0054DEF8
        cmp     eax, 0xb53af0
        jne     L_0054DEFF
    L_0054DEF8:
        mov     ebx, 0xb53b30
        jmp     L_0054DF01
    L_0054DEFF:
        mov     ebx, eax
    L_0054DF01:
        mov     ecx, dword ptr [mem_00A9FA70]
        push    ecx
        mov     ecx, ebx
        call    ext_0063EFE0
        push    eax
        lea     edx, [edi + 0x60]
        push    edx
        call    ext_004275E0
        mov     eax, dword ptr [mem_00A9F988]
        add     esp, 0x8
        push    eax
        mov     ecx, ebx
        call    ext_0063EFE0
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     edx, [edi + 0x7c]
        push    edx
        mov     dword ptr [esp + 0x4c], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9EF80]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        pop     ebx
        je      L_0054DF73
        cmp     eax, 0xb53b30
        je      L_0054DF73
        cmp     eax, 0xb53ab0
        je      L_0054DF73
        cmp     eax, 0xb53a70
        je      L_0054DF73
        cmp     eax, 0xb53af0
        jne     L_0054DF7A
    L_0054DF73:
        mov     esi, 0xb53b30
        jmp     L_0054DF7C
    L_0054DF7A:
        mov     esi, eax
    L_0054DF7C:
        mov     ecx, dword ptr [mem_00A9EF84]
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054DFB1
        cmp     eax, 0xb53b30
        je      L_0054DFB1
        cmp     eax, 0xb53ab0
        je      L_0054DFB1
        cmp     eax, 0xb53a70
        je      L_0054DFB1
        cmp     eax, 0xb53af0
        jne     L_0054DFB6
    L_0054DFB1:
        mov     eax, 0xb53b30
    L_0054DFB6:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x3c]
        push    eax
        call    ext_00427640
        mov     ecx, dword ptr [mem_00A9F400]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E000
        cmp     eax, 0xb53b30
        je      L_0054E000
        cmp     eax, 0xb53ab0
        je      L_0054E000
        cmp     eax, 0xb53a70
        je      L_0054E000
        cmp     eax, 0xb53af0
        jne     L_0054E005
    L_0054E000:
        mov     eax, 0xb53b30
    L_0054E005:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x40]
        push    eax
        call    ext_0046C0A0
        mov     ecx, dword ptr [mem_00A9F028]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E04F
        cmp     eax, 0xb53b30
        je      L_0054E04F
        cmp     eax, 0xb53ab0
        je      L_0054E04F
        cmp     eax, 0xb53a70
        je      L_0054E04F
        cmp     eax, 0xb53af0
        jne     L_0054E054
    L_0054E04F:
        mov     eax, 0xb53b30
    L_0054E054:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x44]
        push    eax
        call    ext_0046C0A0
        mov     ecx, dword ptr [mem_00A9F124]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E09E
        cmp     eax, 0xb53b30
        je      L_0054E09E
        cmp     eax, 0xb53ab0
        je      L_0054E09E
        cmp     eax, 0xb53a70
        je      L_0054E09E
        cmp     eax, 0xb53af0
        jne     L_0054E0A3
    L_0054E09E:
        mov     eax, 0xb53b30
    L_0054E0A3:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x48]
        push    eax
        call    ext_0053F5F0
        mov     ecx, dword ptr [mem_00A9F128]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E0ED
        cmp     eax, 0xb53b30
        je      L_0054E0ED
        cmp     eax, 0xb53ab0
        je      L_0054E0ED
        cmp     eax, 0xb53a70
        je      L_0054E0ED
        cmp     eax, 0xb53af0
        jne     L_0054E0F2
    L_0054E0ED:
        mov     eax, 0xb53b30
    L_0054E0F2:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x4c]
        push    eax
        call    ext_0053F5F0
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956eac
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E13A
        cmp     eax, 0xb53b30
        je      L_0054E13A
        cmp     eax, 0xb53ab0
        je      L_0054E13A
        cmp     eax, 0xb53a70
        je      L_0054E13A
        cmp     eax, 0xb53af0
        jne     L_0054E13F
    L_0054E13A:
        mov     eax, 0xb53b30
    L_0054E13F:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x50]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0046C0A0
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956ea0
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E187
        cmp     eax, 0xb53b30
        je      L_0054E187
        cmp     eax, 0xb53ab0
        je      L_0054E187
        cmp     eax, 0xb53a70
        je      L_0054E187
        cmp     eax, 0xb53af0
        jne     L_0054E18C
    L_0054E187:
        mov     eax, 0xb53b30
    L_0054E18C:
        mov     dword ptr [esp + 0x40], eax
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [edi + 0x54]
        push    ecx
        call    ext_0046C0A0
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956e94
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E1D4
        cmp     eax, 0xb53b30
        je      L_0054E1D4
        cmp     eax, 0xb53ab0
        je      L_0054E1D4
        cmp     eax, 0xb53a70
        je      L_0054E1D4
        cmp     eax, 0xb53af0
        jne     L_0054E1D9
    L_0054E1D4:
        mov     eax, 0xb53b30
    L_0054E1D9:
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [edi + 0x58]
        push    eax
        call    ext_0053F5F0
        add     esp, 0x8
        push    0x1
        push    0x0
        push    0x956e88
        mov     ecx, esi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E221
        cmp     eax, 0xb53b30
        je      L_0054E221
        cmp     eax, 0xb53ab0
        je      L_0054E221
        cmp     eax, 0xb53a70
        je      L_0054E221
        cmp     eax, 0xb53af0
        jne     L_0054E226
    L_0054E221:
        mov     eax, 0xb53b30
    L_0054E226:
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [edi + 0x5c]
        push    edx
        mov     dword ptr [esp + 0x48], eax
        call    ext_0053F5F0
        mov     eax, dword ptr [mem_00A9ED84]
        add     esp, 0x8
        push    0x1
        push    0x0
        push    eax
        mov     ecx, ebp
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E26F
        cmp     eax, 0xb53b30
        je      L_0054E26F
        cmp     eax, 0xb53ab0
        je      L_0054E26F
        cmp     eax, 0xb53a70
        je      L_0054E26F
        cmp     eax, 0xb53af0
        jne     L_0054E274
    L_0054E26F:
        mov     eax, 0xb53b30
    L_0054E274:
        mov     ecx, dword ptr [edi + 0xd0]
        test    ecx, ecx
        je      L_0054E286
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [edx + 0x4]
        call    eax
    L_0054E286:
        mov     ecx, dword ptr [mem_00A9EF78]
        push    0x1
        push    0x0
        push    ecx
        mov     ecx, ebp
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E2BB
        cmp     eax, 0xb53b30
        je      L_0054E2BB
        cmp     eax, 0xb53ab0
        je      L_0054E2BB
        cmp     eax, 0xb53a70
        je      L_0054E2BB
        cmp     eax, 0xb53af0
        jne     L_0054E2C0
    L_0054E2BB:
        mov     eax, 0xb53b30
    L_0054E2C0:
        push    eax
        mov     ecx, edi
        call    ext_0054D420
        mov     edx, dword ptr [mem_00A9EFE0]
        push    0x1
        push    0x0
        push    edx
        mov     ecx, ebp
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      L_0054E2FD
        cmp     eax, 0xb53b30
        je      L_0054E2FD
        cmp     eax, 0xb53ab0
        je      L_0054E2FD
        cmp     eax, 0xb53a70
        je      L_0054E2FD
        cmp     eax, 0xb53af0
        jne     L_0054E302
    L_0054E2FD:
        mov     eax, 0xb53b30
    L_0054E302:
        mov     ecx, dword ptr [edi + 0xd4]
        test    ecx, ecx
        pop     edi
        pop     esi
        pop     ebp
        je      L_0054E317
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [edx + 0x4]
        call    eax
    L_0054E317:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x30
        ret     0x4
    }
}

extern "C" void ext_00427550();
extern "C" void ext_00541410();
extern "C" void ext_0054C940();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00640AA0();
extern "C" void ext_00640BC0();
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F3D0;
extern "C" int mem_00A9EF8C;
extern "C" int mem_00A9F3A4;
extern "C" int mem_00A9EDD4;
extern "C" int mem_00A9EF88;
extern "C" int mem_00A9F3A0;
extern "C" int mem_00A9FAAC;
extern "C" int mem_0093BD38;
extern "C" int mem_00928E78;
extern "C" int mem_0092BD70;
extern "C" int mem_00A9EF3C;
extern "C" int mem_00A9EF4C;
extern "C" int mem_00A9FAF8;
extern "C" int mem_00A9FAFC;
extern "C" int mem_00A9EF1C;
extern "C" int mem_00A9FA70;
extern "C" int mem_00A9F988;
extern "C" int mem_00A9EF80;
extern "C" int mem_00A9EF84;
extern "C" int mem_00A9F400;
extern "C" int mem_00A9F028;
extern "C" int mem_00A9F124;
extern "C" int mem_00A9F128;
extern "C" int mem_00A9ED84;
extern "C" int mem_00A9EF78;
extern "C" int mem_00A9EFE0;

// [0x0054CD50] RenderProperties::vfunc_3 (885 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054CD50(void* self, int edx_unused, void* arg) {
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [mem_00A9F838]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    ext_00427550
        mov     ecx, dword ptr [mem_00A9F3D0]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        mov     edx, dword ptr [mem_00A9EF8C]
        mov     edi, eax
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0x4]
        push    ecx
        push    eax
        call    ext_00640A50
        mov     edx, dword ptr [mem_00A9F3A4]
        add     esp, 0x8
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        push    eax
        call    ext_00640A50
        mov     edx, dword ptr [mem_00A9EDD4]
        add     esp, 0x8
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0x14]
        push    ecx
        push    eax
        call    ext_00640A50
        mov     edx, dword ptr [mem_00A9EF88]
        add     esp, 0x8
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        push    eax
        call    ext_00640A50
        mov     edx, dword ptr [mem_00A9F3A0]
        add     esp, 0x8
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        push    eax
        call    ext_00640A50
        add     esp, 0x8
        push    0x0
        push    0x956ecc
        mov     ecx, edi
        call    ext_00640390
        movzx   edx, byte ptr [esi + 0x3a]
        push    edx
        push    eax
        call    ext_00640A80
        add     esp, 0x8
        push    0x0
        push    0x956eb8
        mov     ecx, edi
        call    ext_00640390
        push    0x0
        push    eax
        call    ext_00640A80
        mov     eax, dword ptr [mem_00A9FAAC]
        add     esp, 0x8
        push    eax
        mov     ecx, edi
        call    ext_00640110
        push    0x0
        push    eax
        call    ext_00640A80
        fild    dword ptr [esi + 0x34]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 0x8
        test    ecx, ecx
        jge     L_skip_neg
        fadd    qword ptr [mem_0093BD38]
    L_skip_neg:
        fdivr   qword ptr [mem_00928E78]
        fadd    qword ptr [mem_0092BD70]
        fstp    qword ptr [esp + 0xc]
        fld     qword ptr [esp + 0xc]
        fistp   dword ptr [esp + 0x18]
        mov     edx, dword ptr [mem_00A9EF3C]
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    eax
        call    ext_00640A50
        add     esp, 0x8
        cmp     byte ptr [esi + 0x38], 0x0
        push    0x0
        je      L_else
        mov     edx, dword ptr [mem_00A9EF4C]
        push    edx
        mov     ecx, edi
        call    ext_00640390
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [mem_00A9FAF8]
        push    eax
        jmp     L_after_if
    L_else:
        mov     ecx, dword ptr [mem_00A9EF4C]
        push    ecx
        mov     ecx, edi
        call    ext_00640390
        mov     edx, dword ptr [mem_00A9FAFC]
        mov     dword ptr [esp + 0x18], eax
        push    edx
    L_after_if:
        lea     ecx, [esp + 0x1c]
        call    ext_00427550
        mov     eax, dword ptr [mem_00A9EF1C]
        push    ebp
        push    eax
        mov     ecx, edi
        call    ext_006404E0
        mov     ecx, dword ptr [mem_00A9FA70]
        mov     ebp, eax
        push    ecx
        mov     ecx, ebp
        call    ext_00640110
        lea     ecx, [esi + 0x60]
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x20]
        call    ext_00427550
        mov     edx, dword ptr [mem_00A9F988]
        push    edx
        mov     ecx, ebp
        call    ext_00640110
        mov     ecx, dword ptr [esi + 0x7c]
        push    ecx
        push    eax
        call    ext_00640A50
        mov     edx, dword ptr [mem_00A9EF80]
        add     esp, 0x8
        push    edx
        mov     ecx, edi
        call    ext_006404E0
        mov     edi, eax
        mov     eax, dword ptr [mem_00A9EF84]
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_00640390
        movzx   ecx, byte ptr [esi + 0x3c]
        push    ecx
        push    eax
        call    ext_00640A80
        mov     edx, dword ptr [mem_00A9F400]
        add     esp, 0x8
        push    0x0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        fld     dword ptr [esi + 0x40]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        mov     eax, dword ptr [mem_00A9F028]
        add     esp, 0x8
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_00640390
        fld     dword ptr [esi + 0x44]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        mov     ecx, dword ptr [mem_00A9F124]
        add     esp, 0x8
        push    0x0
        push    ecx
        mov     ecx, edi
        call    ext_00640390
        mov     edx, dword ptr [esi + 0x48]
        push    edx
        push    eax
        call    ext_00640AA0
        mov     eax, dword ptr [mem_00A9F128]
        add     esp, 0x8
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0x4c]
        push    ecx
        push    eax
        call    ext_00640AA0
        add     esp, 0x8
        push    0x0
        push    0x956eac
        mov     ecx, edi
        call    ext_00640390
        fld     dword ptr [esi + 0x50]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        add     esp, 0x8
        push    0x0
        push    0x956ea0
        mov     ecx, edi
        call    ext_00640390
        fld     dword ptr [esi + 0x54]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00640BC0
        add     esp, 0x8
        push    0x0
        push    0x956e94
        mov     ecx, edi
        call    ext_00640390
        mov     edx, dword ptr [esi + 0x58]
        push    edx
        push    eax
        call    ext_00640AA0
        add     esp, 0x8
        push    0x0
        push    0x956e88
        mov     ecx, edi
        call    ext_00640390
        mov     ecx, dword ptr [esi + 0x5c]
        push    ecx
        push    eax
        call    ext_00640AA0
        mov     edx, dword ptr [mem_00A9ED84]
        add     esp, 0x8
        push    edx
        mov     ecx, ebx
        call    ext_006404E0
        mov     ecx, dword ptr [esi + 0xd0]
        test    ecx, ecx
        pop     ebp
        je      L_skip_d0
        push    0x1
        push    eax
        call    ext_00541410
    L_skip_d0:
        mov     eax, dword ptr [mem_00A9EF78]
        push    eax
        mov     ecx, ebx
        call    ext_006404E0
        push    eax
        mov     ecx, esi
        call    ext_0054C940
        mov     ecx, dword ptr [mem_00A9EFE0]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        cmp     dword ptr [esi + 0xd4], 0x0
        je      L_end
        mov     ecx, dword ptr [esi + 0xd4]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [edx + 0xc]
        call    eax
    L_end:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
