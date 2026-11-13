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
