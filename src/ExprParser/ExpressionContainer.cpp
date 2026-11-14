// Decompiled translation unit: src/ExprParser/ExpressionContainer.cpp

extern "C" void ext_0057CCE0();
extern "C" void ext_00671F30();
extern "C" void ext_006721F0();
extern "C" int mem_00925134;

// [0x0069A1F0] ExprParser::ExpressionContainer::vfunc_2 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069A1F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x8], 0x0
        call ext_0057CCE0
        test eax, eax
        je short L_0069A245
        mov ecx, dword ptr [esi + 0x1c]
        test ecx, ecx
        push edi
        mov edi, dword ptr [eax]
        je short L_0069A223
        mov eax, dword ptr [esi + 0x20]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb short L_0069A229
    L_0069A223:
        call dword ptr [mem_00925134]
    L_0069A229:
        mov ecx, dword ptr [esi + 0x1c]
        mov esi, dword ptr [esp + 0x10]
        lea edx, [ecx + 8 * edi]
        push edx
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_0069A245:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0069B070] ExprParser::ExpressionContainer::vfunc_10 (78 bytes)
extern "C" void ext_006A6E9E();
extern "C" void ext_0069A590();
extern "C" void ext_00490C80();
extern "C" void ext_00491150();

extern "C" __declspec(naked) void __fastcall fn_0069B070(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        push 0
        push 0AA3D80h
        push 0A2E2F8h
        push 0
        push eax
        mov edi, ecx
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_done
        lea ecx, [esi + 0x8]
        push ecx
        lea ecx, [edi + 0x8]
        call ext_0069A590
        lea edx, [esi + 0x18]
        push edx
        lea ecx, [edi + 0x18]
        call ext_00490C80
        add esi, 0x28
        push esi
        lea ecx, [edi + 0x28]
        call ext_00491150
    L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00699E90] ExprParser::ExpressionContainer::vfunc_3_off_4 (265 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00682460();
extern "C" int mem_00AA23B8;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00AA2354;
extern "C" int mem_00AA23DC;
extern "C" int mem_00AA2404;
extern "C" int mem_00AA23D0;

extern "C" __declspec(naked) void __fastcall fn_00699E90(void* self) {
    __asm {
        push    ecx
        mov     eax, dword ptr [mem_00AA23B8]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [edi + 0x24]
        mov     dword ptr [esp + 0x10], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00427550
        mov     esi, dword ptr [edi + 0x8]
        add     edi, 0x4
        cmp     esi, dword ptr [edi + 0x8]
        jbe     L_699ed0
        call    dword ptr [mem_00925134]
    L_699ed0:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     L_699ede
        call    dword ptr [mem_00925134]
    L_699ede:
        cmp     edi, edi
        je      L_699ee8
        call    dword ptr [mem_00925134]
    L_699ee8:
        cmp     esi, ebp
        je      L_699f8f
        mov     ecx, dword ptr [mem_00AA2354]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        cmp     esi, dword ptr [edi + 0x8]
        mov     ebp, eax
        jb      L_699f0b
        call    dword ptr [mem_00925134]
    L_699f0b:
        mov     edx, dword ptr [mem_00AA23DC]
        push    edx
        push    esi
        push    ebp
        call    ext_00682460
        add     esp, 0xc
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_699f27
        call    dword ptr [mem_00925134]
    L_699f27:
        mov     eax, dword ptr [mem_00AA2404]
        mov     ebx, dword ptr [esi + 0x20]
        push    eax
        mov     ecx, ebp
        call    ext_00640110
        mov     edx, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, ebx
        call    eax
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        call    ext_00640A50
        add     esp, 0x8
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_699f5d
        call    dword ptr [mem_00925134]
    L_699f5d:
        mov     edx, dword ptr [mem_00AA23D0]
        push    edx
        mov     ecx, ebp
        call    ext_00640110
        mov     ecx, dword ptr [esi + 0x1c]
        push    ecx
        push    eax
        call    ext_00640A50
        add     esp, 0x8
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_699f83
        call    dword ptr [mem_00925134]
    L_699f83:
        mov     ebx, dword ptr [esp + 0x18]
        add     esi, 0x2c
        jmp     L_699ed0
    L_699f8f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        pop     ecx
        ret     0x4
    }
}

extern "C" void ext_004275C0();
extern "C" void ext_00427A60();
extern "C" void ext_004E3D30();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_00671100();
extern "C" void ext_00671490();
extern "C" void ext_0067FAB0();
extern "C" void ext_006824E0();
extern "C" void ext_0069ABD0();

extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC0;
extern "C" int mem_009251E4;
extern "C" int mem_00AA2400;
extern "C" int mem_00924FE8;
extern "C" int mem_00B599BC;

// [0x0069ACC0] ExprParser::ExpressionContainer::vfunc_1_off_4 (942 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069ACC0(void* self, int edx_unused, void* a1) {
    __asm {
        push    -1
        push    0x8b6684
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x7c
        mov     eax, dword ptr [mem_00AA23B8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x98]
        push    edi
        mov     edi, ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], edi
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x4]
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, eax
        call    edx
        push    eax
        lea     ecx, [edi + 0x24]
        mov     dword ptr [esp + 0x98], 0
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x70]
        mov     dword ptr [esp + 0x94], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     edi, dword ptr [esi + 0x28]
        mov     ebp, dword ptr [mem_00925134]
        add     esi, 0x24
        cmp     edi, dword ptr [esi + 0x8]
        jbe     short L_0069AD41
        call    ebp
    L_0069AD41:
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], esi
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [esp + 0x34], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     short L_0069AD60
        call    ebp
    L_0069AD60:
        mov     dword ptr [esp + 0x38], esi
        mov     dword ptr [esp + 0x3c], esi
        mov     dword ptr [esp + 0x40], edi
        lea     ecx, [esp + 0x38]
    L_0069AD70:
        call    ext_00427A60
        mov     edi, dword ptr [esp + 0x30]
        test    edi, edi
        je      short L_0069AD83
        cmp     edi, dword ptr [esp + 0x3c]
        je      short L_0069AD85
    L_0069AD83:
        call    ebp
    L_0069AD85:
        mov     ebx, dword ptr [esp + 0x34]
        cmp     ebx, dword ptr [esp + 0x40]
        jae     L_0069AFC1
        test    edi, edi
        jne     short L_0069AD99
        call    ebp
    L_0069AD99:
        cmp     ebx, dword ptr [edi + 0x8]
        jb      short L_0069ADA0
        call    ebp
    L_0069ADA0:
        mov     esi, dword ptr [ebx]
        mov     ecx, dword ptr [mem_00AA2354]
        lea     eax, [esi + 0x4]
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC0]
        add     esp, 0x8
        test    al, al
        je      L_0069AFAA
        mov     edx, dword ptr [mem_00AA23D0]
        push    edx
        mov     ecx, esi
        call    ext_0063EFE0
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x70]
        push    eax
        lea     ecx, [esp + 0x18]
        call    ext_004275C0
        mov     ecx, eax
        mov     dword ptr [esp + 0x94], 1
        call    dword ptr [mem_00924FF0]
        push    eax
        call    dword ptr [mem_009251E4]
        add     esp, 0x4
        lea     ecx, [esp + 0x70]
        mov     ebp, eax
        mov     dword ptr [esp + 0x94], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [mem_00AA2404]
        push    ecx
        mov     ecx, esi
        call    ext_0063EFE0
        cmp     eax, 0xb53a34
        je      short L_0069AE75
        cmp     eax, 0xb53b30
        je      short L_0069AE75
        cmp     eax, 0xb53ab0
        je      short L_0069AE75
        cmp     eax, 0xb53a70
        je      short L_0069AE75
        cmp     eax, 0xb53af0
        je      short L_0069AE75
        mov     edx, dword ptr [mem_00AA2404]
        push    edx
        mov     ecx, esi
        call    ext_0063EFE0
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    ext_0053F5F0
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        call    ext_00671100
        add     esp, 0xc
        mov     edi, eax
        jmp     short L_0069AEBB
    L_0069AE75:
        mov     eax, dword ptr [mem_00AA2400]
        push    eax
        mov     ecx, esi
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, eax
        call    edx
        push    eax
        mov     dword ptr [esp + 0x98], 2
        call    ext_00671490
        add     esp, 0x4
        lea     ecx, [esp + 0x70]
        mov     edi, eax
        mov     dword ptr [esp + 0x94], 0xffffffff
        call    dword ptr [mem_00924FF4]
    L_0069AEBB:
        lea     ecx, [esp + 0x54]
        call    dword ptr [mem_00924FE8]
        mov     eax, dword ptr [mem_00AA23DC]
        push    eax
        push    1
        lea     ecx, [esp + 0x5c]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0xa4], 3
        call    ext_006824E0
        mov     ecx, dword ptr [mem_00B599BC]
        xor     esi, esi
        add     esp, 0x10
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], ecx
        cmp     ecx, esi
        mov     byte ptr [esp + 0x94], 4
        mov     dword ptr [esp + 0x44], ebp
        mov     dword ptr [esp + 0x48], edi
        je      short L_0069AF1D
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x70]
        lea     eax, [esp + 0x24]
        push    eax
        lea     eax, [esp + 0x24]
        push    eax
        call    edx
        jmp     short L_0069AF25
    L_0069AF1D:
        mov     dword ptr [esp + 0x1c], esi
        lea     eax, [esp + 0x1c]
    L_0069AF25:
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    1
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        add     ecx, 0x4
        mov     byte ptr [esp + 0xa0], 5
        call    ext_0069ABD0
        mov     ecx, dword ptr [esp + 0x50]
        cmp     ecx, esi
        mov     byte ptr [esp + 0x94], 4
        je      short L_0069AF6F
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x78]
        lea     eax, [esp + 0x4c]
        push    eax
        call    edx
    L_0069AF6F:
        mov     ecx, dword ptr [esp + 0x28]
        cmp     ecx, esi
        mov     byte ptr [esp + 0x94], 3
        je      short L_0069AF8B
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x78]
        lea     edx, [esp + 0x24]
        push    edx
        call    eax
    L_0069AF8B:
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x94], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ebp, dword ptr [mem_00925134]
        mov     edi, dword ptr [esp + 0x30]
    L_0069AFAA:
        cmp     ebx, dword ptr [edi + 0x8]
        jb      short L_0069AFB1
        call    ebp
    L_0069AFB1:
        add     ebx, 0x4
        mov     dword ptr [esp + 0x34], ebx
        lea     ecx, [esp + 0x2c]
        jmp     L_0069AD70
    L_0069AFC1:
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        lea     edi, [ebx + 0x4]
        je      short L_0069AFE5
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        mov     eax, 0x2e8ba2e9
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
    L_0069AFE5:
        add     ebx, 0x14
        push    eax
        mov     ecx, ebx
        call    ext_0067FAB0
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     short L_0069B000
        call    ebp
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_0069B000:
        mov     ebp, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebp
        jbe     short L_0069B00E
        call    dword ptr [mem_00925134]
    L_0069B00E:
        test    edi, edi
        je      short L_0069B016
        cmp     edi, edi
        je      short L_0069B01C
    L_0069B016:
        call    dword ptr [mem_00925134]
    L_0069B01C:
        cmp     esi, ebp
        je      short L_0069B053
        test    edi, edi
        mov     ebp, dword ptr [mem_00925134]
        jne     short L_0069B02C
        call    ebp
    L_0069B02C:
        cmp     esi, dword ptr [edi + 0x8]
        jb      short L_0069B033
        call    ebp
    L_0069B033:
        mov     ecx, dword ptr [esi + 0x20]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x48]
        push    0
        call    eax
        push    eax
        mov     ecx, ebx
        call    ext_004E3D30
        cmp     esi, dword ptr [edi + 0x8]
        jb      short L_0069B04E
        call    ebp
    L_0069B04E:
        add     esi, 0x2c
        jmp     short L_0069B000
    L_0069B053:
        mov     ecx, dword ptr [esp + 0x8c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x88
        ret     0x4
    }
}
