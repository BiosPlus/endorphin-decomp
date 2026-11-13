// Decompiled translation unit: src/classes/keaFunctions_Vanilla.cpp

// [0x007F1AA0] keaFunctions_Vanilla::vfunc_1 (683 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F1AA0(void* self) {
    __asm {
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        je      L_007F1AF0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [ecx]
        mov     ebx, dword ptr [esp + 0x1c]
        sub     ebx, edi
        mov     ebp, eax
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_007F1AC0:
        mov     ecx, dword ptr [ebx + edi]
        mov     esi, dword ptr [edi]
        mov     edx, ecx
        lea     eax, [esi + 0x10]
        sub     edx, esi
        mov     esi, 0x3
    L_007F1AD1:
        fld     dword ptr [ecx]
        add     ecx, 0x4
        fstp    dword ptr [eax - 0x10]
        add     eax, 0x4
        sub     esi, 0x1
        fld     dword ptr [edx + eax - 0x4]
        fstp    dword ptr [eax - 0x4]
        jne     L_007F1AD1
        add     edi, 0x4
        sub     ebp, 0x1
        jne     L_007F1AC0
    L_007F1AF0:
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        je      L_007F1B2A
        mov     edx, dword ptr [esp + 0x18]
        fldz
        mov     edx, dword ptr [edx]
        mov     esi, eax
    L_007F1B02:
        mov     eax, dword ptr [edx]
        add     eax, 0x20
        mov     ecx, 0x3
    L_007F1B0C:
        fst     dword ptr [eax - 0x20]
        add     eax, 0x4
        sub     ecx, 0x1
        fst     dword ptr [eax - 0x14]
        fst     dword ptr [eax - 0x4]
        fst     dword ptr [eax + 0xc]
        jne     L_007F1B0C
        add     edx, 0x4
        sub     esi, 0x1
        jne     L_007F1B02
        fstp    st(0)
    L_007F1B2A:
        mov     eax, dword ptr [esp + 0x58]
        mov     ecx, dword ptr [esp + 0x28]
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     dword ptr [esp + 0x1c], ecx
        je      L_007F1D44
        mov     esi, dword ptr [esp + 0x40]
        add     esi, 0x8
        mov     dword ptr [esp + 0x58], eax
    L_007F1B50:
        mov     edx, dword ptr [esp + 0x54]
        cmp     dword ptr [edx], 0x0
        mov     ebx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x60], 0x0
        je      L_007F1D10
        mov     eax, dword ptr [esp + 0x4c]
        add     ecx, 0x8
        sub     eax, ebx
        mov     dword ptr [esp + 0x28], eax
        jmp     L_007F1B80
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
    L_007F1B80:
        mov     ebp, dword ptr [eax + ebx]
        cmp     ebp, -0x1
        je      L_007F1CF7
        mov     edi, dword ptr [ebx]
        mov     eax, edi
        cdq
        sub     eax, edx
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x64], eax
        mov     eax, edi
        sar     edx, 1
        and     eax, 0x80000001
        jns     L_007F1BAF
        dec     eax
        or      eax, -0x2
        inc     eax
    L_007F1BAF:
        fld     dword ptr [ecx - 0x8]
        mov     edi, dword ptr [esp + 0x64]
        fmul    dword ptr [esi - 0x8]
        shl     eax, 0x5
        fld     dword ptr [ecx - 0x4]
        add     eax, dword ptr [edi + 4*edx]
        fmul    dword ptr [esi - 0x4]
        mov     edx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edx]
        mov     edx, dword ptr [edx + 4*ebp]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fld     dword ptr [eax]
        fadd    st(0), st(1)
        fstp    dword ptr [eax]
        fadd    dword ptr [edx]
        fstp    dword ptr [edx]
        fld     dword ptr [ecx + 0xc]
        fmul    dword ptr [esi - 0x4]
        fld     dword ptr [ecx + 0x8]
        fmul    dword ptr [esi - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x10]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x14]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fld     dword ptr [eax + 0x4]
        fadd    st(0), st(1)
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x4]
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [ecx + 0x1c]
        fmul    dword ptr [esi - 0x4]
        fld     dword ptr [ecx + 0x18]
        fmul    dword ptr [esi - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x20]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x24]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fld     dword ptr [eax + 0x8]
        fadd    st(0), st(1)
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [ecx + 0x2c]
        fmul    dword ptr [esi - 0x4]
        fld     dword ptr [ecx + 0x28]
        fmul    dword ptr [esi - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x30]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x34]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fld     dword ptr [eax + 0x10]
        fadd    st(0), st(1)
        fstp    dword ptr [eax + 0x10]
        fadd    dword ptr [edx + 0x10]
        fstp    dword ptr [edx + 0x10]
        fld     dword ptr [ecx + 0x3c]
        fmul    dword ptr [esi - 0x4]
        fld     dword ptr [ecx + 0x38]
        fmul    dword ptr [esi - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x40]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x44]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fld     dword ptr [eax + 0x14]
        fadd    st(0), st(1)
        fstp    dword ptr [eax + 0x14]
        fadd    dword ptr [edx + 0x14]
        fstp    dword ptr [edx + 0x14]
        fld     dword ptr [ecx + 0x4c]
        fmul    dword ptr [esi - 0x4]
        fld     dword ptr [ecx + 0x48]
        fmul    dword ptr [esi - 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x50]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x54]
        fmul    dword ptr [esi + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x64]
        fld     dword ptr [eax + 0x18]
        fadd    st(0), st(1)
        fstp    dword ptr [eax + 0x18]
        mov     eax, dword ptr [esp + 0x28]
        fadd    dword ptr [edx + 0x18]
        fstp    dword ptr [edx + 0x18]
        mov     edx, dword ptr [esp + 0x54]
    L_007F1CF7:
        mov     edi, dword ptr [esp + 0x60]
        add     edi, 0x1
        add     ebx, 0x4
        add     ecx, 0x60
        cmp     edi, dword ptr [edx]
        mov     dword ptr [esp + 0x60], edi
        jne     L_007F1B80
    L_007F1D10:
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [eax + 2*eax]
        shl     eax, 0x5
        add     ecx, eax
        mov     eax, 0x20
        add     dword ptr [esp + 0x4c], eax
        add     dword ptr [esp + 0x50], eax
        add     edx, 0x4
        add     esi, 0x10
        sub     dword ptr [esp + 0x58], 0x1
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x54], edx
        jne     L_007F1B50
    L_007F1D44:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x54
    }
}

// [0x007F15D0] keaFunctions_Vanilla::vfunc_0 (1232 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F15D0(void* self) {
    __asm {
        sub     esp, 0x2c
        fld     dword ptr [esp + 0x8c]
        mov     eax, dword ptr [esp + 0x30]
        fld1
        mov     edx, dword ptr [esp + 0x34]
        _emit 0xde
        _emit 0xf1
        mov     ecx, dword ptr [esp + 0x38]
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [esp + 0x88]
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        mov     dword ptr [esp + 0x3c], ecx
        mov     dword ptr [esp + 0x90], eax
        fstp    dword ptr [esp + 0x38]
        je      L_1A99
        mov     eax, dword ptr [esp + 0x60]
        fld     dword ptr [esp + 0x94]
        mov     ecx, dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x38]
        fldz
        push    ebx
        mov     ebx, dword ptr [esp + 0x4c]
        fldz
        push    ebp
        mov     ebp, dword ptr [esp + 0x84]
        mov     edx, ebx
        sub     edx, esi
        push    edi
        lea     edi, [edx + esi + 0xc]
        mov     edx, ebx
        sub     edx, eax
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esp + 0x60]
        sub     edx, eax
        mov     dword ptr [esp + 0x94], ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x6c], edx
        mov     edx, dword ptr [esp + 0x60]
        mov     eax, edx
        sub     eax, ebx
        sub     ecx, esi
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x9c]
        lea     ecx, [ecx + esi + 0x4]
        sub     edx, esi
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x88], edi
        mov     dword ptr [esp + 0x84], ecx
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x60], eax
        jmp     L_1699
    L_1697:
        fxch    st(1)
    L_1699:
        fxch    st(1)
        mov     dword ptr [esp + 0x9c], 0x0
        fst     dword ptr [esi + 0xc]
        fst     dword ptr [esi + 0x8]
        fst     dword ptr [esi + 0x4]
        fst     dword ptr [esi]
        cmp     dword ptr [ebp], 0x0
        je      L_19E0
        mov     ebx, dword ptr [esp + 0x94]
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x44], ebx
        mov     ebx, dword ptr [esp + 0x48]
        add     eax, 0xc
        add     edx, 0x8
        sub     ebx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0xa0], ebx
    L_16E3:
        mov     ebx, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [ebx]
        cmp     ebx, -0x1
        je      L_19B9
        mov     edi, dword ptr [esp + 0xa0]
        lea     ecx, [ebx + 2*ebx]
        shl     ecx, 0x4
        add     ecx, dword ptr [esp + 0x78]
        mov     ebp, 0x3
        fld     dword ptr [ecx + 0xc]
        add     ecx, 0x20
        fmul    dword ptr [eax - 0xc]
        fstp    dword ptr [edx - 0x8]
        fld     dword ptr [eax - 0x8]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx - 0x4]
        fld     dword ptr [edi + edx]
        lea     edi, [edx + 0x2c]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx]
        fld     dword ptr [eax]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [ecx - 0x14]
        fmul    dword ptr [eax + 0x4]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [eax + 0x8]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0xc]
        fld     dword ptr [eax + 0xc]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0x10]
        fld     dword ptr [eax + 0x10]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0x14]
        fld     dword ptr [ecx - 0x14]
        fmul    dword ptr [eax + 0x14]
        fstp    dword ptr [edx + 0x18]
        fld     dword ptr [eax + 0x18]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0x1c]
        fld     dword ptr [eax + 0x1c]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x20]
        fmul    dword ptr [ecx - 0x14]
        fstp    dword ptr [edx + 0x24]
    L_1778:
        fld     dword ptr [ecx - 0x20]
        add     ecx, 0x4
        fld     dword ptr [eax + 0x24]
        add     edi, 0x10
        sub     ebp, 0x1
        _emit 0xd8
        _emit 0xc9
        _emit 0xd8
        _emit 0xc3
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 0x28]
        _emit 0xd8
        _emit 0xc9
        _emit 0xd8
        _emit 0xc3
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x2c]
        _emit 0xd8
        _emit 0xc9
        _emit 0xd8
        _emit 0xc3
        fstp    dword ptr [esp + 0x34]
        fmul    dword ptr [eax + 0x30]
        _emit 0xd8
        _emit 0xc2
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx - 0x14]
        fld     dword ptr [eax + 0x34]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 0x38]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x3c]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x34]
        fmul    dword ptr [eax + 0x40]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx - 0x4]
        fld     dword ptr [eax + 0x44]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 0x48]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x4c]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x34]
        fmul    dword ptr [eax + 0x50]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [edi - 0x14]
        fld     dword ptr [esp + 0x30]
        fstp    dword ptr [edi - 0x10]
        fld     dword ptr [esp + 0x34]
        fstp    dword ptr [edi - 0xc]
        fld     dword ptr [esp + 0x38]
        fstp    dword ptr [edi - 0x8]
        jne     L_1778
        mov     edi, dword ptr [esp + 0xa0]
        shl     ebx, 0x5
        add     ebx, dword ptr [esp + 0x8c]
        mov     ecx, ebx
        fld     dword ptr [ecx]
        fld     dword ptr [eax - 0xc]
        _emit 0xd8
        _emit 0xc9
        _emit 0xd8
        _emit 0xc3
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax - 0x8]
        _emit 0xd8
        _emit 0xc9
        _emit 0xd8
        _emit 0xc3
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [edi + edx]
        _emit 0xd8
        _emit 0xc9
        _emit 0xd8
        _emit 0xc3
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [eax]
        _emit 0xd8
        _emit 0xc2
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x4]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x8]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0xc]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [eax + 0x10]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ecx + 0x8]
        fld     dword ptr [eax + 0x14]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x18]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x1c]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [eax + 0x20]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ecx + 0x10]
        fld     dword ptr [eax + 0x24]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x28]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x2c]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [eax + 0x30]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ecx + 0x14]
        fld     dword ptr [eax + 0x34]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x38]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x3c]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [eax + 0x40]
        mov     edi, dword ptr [esp + 0x88]
        mov     ebp, dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ecx + 0x18]
        mov     ecx, dword ptr [esp + 0x84]
        fld     dword ptr [eax + 0x44]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x48]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x4c]
        _emit 0xd8
        _emit 0xc9
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [eax + 0x50]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esi]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esi]
        fld     dword ptr [esi + 0x4]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esi + 0x4]
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esi + 0x8]
        fld     dword ptr [esi + 0xc]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esi + 0xc]
    L_19B9:
        add     dword ptr [esp + 0x9c], 0x1
        mov     ebx, dword ptr [esp + 0x9c]
        add     dword ptr [esp + 0x44], 0x4
        add     edx, 0x60
        add     eax, 0x60
        cmp     ebx, dword ptr [ebp]
        jne     L_16E3
        mov     edx, dword ptr [esp + 0x54]
    L_19E0:
        fld     dword ptr [edx + esi]
        mov     eax, dword ptr [ebp]
        fld     dword ptr [edi - 0xc]
        lea     eax, [eax + 2*eax]
        _emit 0xd8
        _emit 0xc5
        shl     eax, 0x5
        add     dword ptr [esp + 0x40], eax
        add     dword ptr [esp + 0x48], eax
        fmul    dword ptr [ecx - 0x4]
        mov     eax, dword ptr [esp + 0x6c]
        add     dword ptr [esp + 0x94], 0x20
        add     edi, 0x10
        _emit 0xd8
        _emit 0xcc
        add     ecx, 0x10
        add     ebp, 0x4
        add     esi, 0x10
        sub     dword ptr [esp + 0x60], 0x1
        _emit 0xde
        _emit 0xe9
        mov     dword ptr [esp + 0x88], edi
        mov     dword ptr [esp + 0x84], ecx
        _emit 0xd8
        _emit 0xcb
        mov     dword ptr [esp + 0x10], ebp
        fsub    dword ptr [esi - 0x10]
        fstp    dword ptr [esi - 0x10]
        fld     dword ptr [ecx + eax - 0x10]
        mov     eax, dword ptr [esp + 0x14]
        fld     dword ptr [eax + ecx - 0x10]
        mov     eax, dword ptr [esp + 0x18]
        _emit 0xd8
        _emit 0xc5
        fmul    dword ptr [ecx - 0x10]
        _emit 0xd8
        _emit 0xcc
        _emit 0xde
        _emit 0xe9
        _emit 0xd8
        _emit 0xcb
        fsub    dword ptr [esi - 0xc]
        fstp    dword ptr [esi - 0xc]
        fld     dword ptr [edx + esi - 0x8]
        fld     dword ptr [edi - 0x14]
        _emit 0xd8
        _emit 0xc5
        fmul    dword ptr [ecx - 0xc]
        _emit 0xd8
        _emit 0xcc
        _emit 0xde
        _emit 0xe9
        _emit 0xd8
        _emit 0xcb
        fsub    dword ptr [esi - 0x8]
        fstp    dword ptr [esi - 0x8]
        fld     dword ptr [edi + eax - 0x10]
        fld     dword ptr [edi - 0x10]
        _emit 0xd8
        _emit 0xc5
        fmul    dword ptr [ecx - 0x8]
        _emit 0xd8
        _emit 0xcc
        _emit 0xde
        _emit 0xe9
        _emit 0xd8
        _emit 0xcb
        fsub    dword ptr [esi - 0x4]
        fstp    dword ptr [esi - 0x4]
        jne     L_1697
        _emit 0xdd
        _emit 0xd9
        pop     edi
        _emit 0xdd
        _emit 0xd9
        pop     ebp
        _emit 0xdd
        _emit 0xd9
        pop     ebx
        _emit 0xdd
        _emit 0xd8
    L_1A99:
        pop     esi
        add     esp, 0x2c
        ret     0x64
    }
}
