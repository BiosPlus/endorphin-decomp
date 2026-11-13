// Decompiled translation unit: src/ExprParser/Operators/FunctionN.cpp

extern "C" void ext_0041CF50();
extern "C" void ext_0048A120();
extern "C" void ext_004ECA40();
extern "C" void ext_004ECB40();
extern "C" void ext_006997D0();
extern "C" void ext_00699930();
extern "C" void ext_00699950();
extern "C" void ext_00699FA0();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

// [0x006A2420] ExprParser::Operators::FunctionN::vfunc_2 (590 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A2420(void* self, int edx_unused, void* arg0, void* arg1) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8b33b8
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        push    edi
        je      L_2452
        mov     edi, dword ptr [esi + 0x8]
        sub     edi, eax
        sar     edi, 3
        cmp     edi, 1
        jge     L_2469
    L_2452:
        push    0xa183e8
        lea     eax, [esp + 0x34]
        push    eax
        mov     dword ptr [esp + 0x38], 2
        call    ext_006A6DD2
    L_2469:
        push    ebx
        lea     ebx, [edi - 1]
        test    ebx, ebx
        jl      L_24a2
    L_2471:
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je      L_2484
        mov     eax, dword ptr [esi + 8]
        sub     eax, ecx
        sar     eax, 3
        cmp     ebx, eax
        jb      L_248a
    L_2484:
        call    dword ptr [mem_00925134]
    L_248a:
        mov     ecx, dword ptr [esi + 4]
        mov     ecx, dword ptr [ecx + ebx*8 + 4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x30]
        call    eax
        cmp     eax, 6
        je      L_24b9
        sub     ebx, 1
        jns     L_2471
    L_24a2:
        push    0xa183e8
        lea     eax, [esp + 0x38]
        push    eax
        mov     dword ptr [esp + 0x3c], 0xf
        call    ext_006A6DD2
    L_24b9:
        test    ebx, ebx
        jl      L_24a2
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je      L_24d0
        mov     eax, dword ptr [esi + 8]
        sub     eax, ecx
        sar     eax, 3
        cmp     ebx, eax
        jb      L_24d6
    L_24d0:
        call    dword ptr [mem_00925134]
    L_24d6:
        mov     ecx, dword ptr [esi + 4]
        mov     ecx, dword ptr [ecx + ebx*8 + 4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x30]
        call    eax
        cmp     eax, 6
        jne     L_24a2
        push    ebp
        push    ebx
        mov     ecx, esi
        call    ext_004ECA40
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [ecx]
        push    0
        push    0xaa3d80
        push    0xa2e2f8
        push    0
        mov     dword ptr [esp + 0x28], eax
        push    eax
        mov     eax, dword ptr [edx + 0x60]
        call    eax
        push    eax
        call    ext_006A6E9E
        mov     ebp, eax
        add     esp, 0x14
        test    ebp, ebp
        jne     L_2535
        push    0xa183e8
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     dword ptr [esp + 0x40], 0xf
        call    ext_006A6DD2
    L_2535:
        mov     ecx, ebp
        add     ebx, 1
        call    ext_00699930
        sub     edi, ebx
        mov     ecx, edi
        cmp     ecx, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], ecx
        jle     L_2566
        push    0xa183e8
        lea     edx, [esp + 0x3c]
        push    edx
        mov     dword ptr [esp + 0x40], 7
        call    ext_006A6DD2
    L_2566:
        xor     edi, edi
        test    ecx, ecx
        jle     L_25e7
        lea     eax, [ebx*8]
        mov     dword ptr [esp + 0x38], eax
    L_2577:
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je      L_258d
        mov     eax, dword ptr [esi + 8]
        sub     eax, ecx
        sar     eax, 3
        lea     ecx, [edi + ebx]
        cmp     ecx, eax
        jb      L_2593
    L_258d:
        call    dword ptr [mem_00925134]
    L_2593:
        mov     ecx, dword ptr [esi + 4]
        add     ecx, dword ptr [esp + 0x38]
        lea     edx, [esp + 0x1c]
        push    edx
        call    ext_004ECB40
        push    eax
        push    edi
        mov     ecx, ebp
        mov     dword ptr [esp + 0x34], 0
        call    ext_00699950
        mov     ecx, dword ptr [esp + 0x20]
        test    ecx, ecx
        mov     dword ptr [esp + 0x2c], -1
        je      L_25d1
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x78]
        lea     edx, [esp + 0x1c]
        push    edx
        call    eax
    L_25d1:
        add     dword ptr [esp + 0x38], 8
        add     edi, 1
        cmp     edi, dword ptr [esp + 0x10]
        jl      L_2577
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
    L_25e7:
        cmp     ecx, eax
        jge     L_25f3
        push    ecx
        mov     ecx, ebp
        call    ext_00699FA0
    L_25f3:
        mov     ecx, ebp
        call    ext_006997D0
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_0041CF50
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jle     L_263c
        mov     edi, eax
        mov     ebx, -8
    L_2613:
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je      L_2637
        mov     eax, dword ptr [esi + 8]
        mov     edx, eax
        sub     edx, ecx
        sar     edx, 3
        je      L_2637
        push    esi
        push    eax
        add     eax, -8
        push    eax
        call    ext_0048A120
        add     esp, 0xc
        add     dword ptr [esi + 8], ebx
    L_2637:
        sub     edi, 1
        jne     L_2613
    L_263c:
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [edx + 4]
        test    eax, eax
        je      L_2659
        mov     ecx, dword ptr [edx + 8]
        mov     esi, ecx
        sub     esi, eax
        sar     esi, 2
        je      L_2659
        add     ecx, -4
        mov     dword ptr [edx + 8], ecx
    L_2659:
        mov     ecx, dword ptr [esp + 0x24]
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x20
        ret     8
    }
}
