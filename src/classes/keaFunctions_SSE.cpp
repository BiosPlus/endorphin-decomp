// Decompiled translation unit: src/classes/keaFunctions_SSE.cpp

// [0x007F20B0] keaFunctions_SSE::vfunc_1 (638 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F20B0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x10
        sub esp, 0x54
        push ebx
        push esi
        push edi
        mov ecx, [ebp + 0x14]
        mov [esp + 0x3c], ecx
        mov ecx, [ebp + 0x18]
        mov eax, [ebp + 0xc]
        mov edx, [ebp + 0x8]
        mov [esp + 0x40], ecx
        mov ecx, [ebp + 0x1c]
        mov [esp + 0x38], ecx
        mov ecx, [ebp + 0x20]
        mov [esp + 0x3c], ecx
        mov ecx, [ebp + 0x24]
        mov [esp + 0x40], ecx
        mov ecx, [ebp + 0x34]
        mov [esp + 0x50], ecx
        mov ecx, [ebp + 0x38]
        mov [esp + 0x54], ecx
        mov ecx, [ebp + 0x3c]
        mov [esp + 0x58], ecx
        mov ecx, [ebp + 0x40]
        mov [esp + 0x18], ecx
        mov ecx, [ebp + 0x58]
        test ecx, ecx
        mov edi, [ebp + 0x44]
        mov [esp + 0x24], eax
        mov eax, [ebp + 0x10]
        mov [esp + 0x4c], edx
        mov [esp + 0x1c], edi
        je L_007f215a

        mov ebx, [edx]
        mov edi, eax
        sub edi, ebx
        mov [esp + 0x14], ecx

    L_007f2124:
        mov ecx, [edi + ebx]
        mov esi, [ebx]
        mov edx, ecx
        lea eax, [esi + 0x10]
        sub edx, esi
        mov esi, 3

    L_007f2135:
        fld dword ptr [ecx]
        add ecx, 4
        fstp dword ptr [eax - 0x10]
        add eax, 4
        sub esi, 1
        fld dword ptr [edx + eax - 4]
        fstp dword ptr [eax - 4]
        jne L_007f2135

        add ebx, 4
        sub dword ptr [esp + 0x14], 1
        jne L_007f2124

        mov edi, [esp + 0x1c]

    L_007f215a:
        mov eax, [ebp + 0x54]
        test eax, eax
        je L_007f2193

        mov edx, [esp + 0x24]
        fldz
        mov edx, [edx]
        mov esi, eax

    L_007f216b:
        mov eax, [edx]
        add eax, 0x20
        mov ecx, 3

    L_007f2175:
        fst dword ptr [eax - 0x20]
        add eax, 4
        sub ecx, 1
        fst dword ptr [eax - 0x14]
        fst dword ptr [eax - 4]
        fst dword ptr [eax + 0xc]
        jne L_007f2175

        add edx, 4
        sub esi, 1
        jne L_007f216b

        fstp st(0)

    L_007f2193:
        mov eax, [esp + 0x50]
        mov ecx, [esp + 0x38]
        mov [esp + 0x14], eax
        mov eax, [ebp + 0x4c]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov [esp + 0x20], ecx
        je L_007f2325

        mov [esp + 0x2c], eax
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    L_007f21c0:
        mov edx, [ebp + 0x48]
        cmp dword ptr [edx], 0
        mov dword ptr [esp + 0x28], 0
        je L_007f22f1

        mov eax, [esp + 0x18]
        add ecx, 0x20
        sub eax, edi
        mov [esp + 0x34], eax

    L_007f21e1:
        mov ebx, [eax + edi]
        cmp ebx, -1
        je L_007f22d4

        mov esi, [edi]
        mov eax, esi
        cdq
        sub eax, edx
        mov edx, eax
        mov eax, [esp + 0x24]
        mov eax, [eax]
        mov [esp + 0x30], eax
        mov eax, esi
        sar edx, 1
        and eax, 0x80000001
        jns L_007f2210
        dec eax
        or eax, -2
        inc eax

    L_007f2210:
        mov esi, [esp + 0x30]
        movaps xmm5, [ecx - 0x20]
        movaps xmm2, [ecx - 0x10]
        movaps xmm3, [ecx]
        shl eax, 5
        add eax, [esi + 4*edx]
        mov esi, [esp + 0x14]
        movaps xmm1, [esi]
        mov edx, [esp + 0x4c]
        mov edx, [edx]
        mov edx, [edx + 4*ebx]
        mulps xmm2, xmm1
        mulps xmm5, xmm1
        mulps xmm3, xmm1
        movaps xmm0, xmm5
        movlhps xmm0, xmm2
        movhlps xmm2, xmm5
        addps xmm0, xmm2
        xorps xmm4, xmm4
        movaps xmm2, xmm4
        movhlps xmm2, xmm3
        movlhps xmm3, xmm4
        addps xmm2, xmm3
        movaps xmm3, xmm0
        shufps xmm0, xmm2, 0x88
        shufps xmm3, xmm2, 0xdd
        addps xmm3, xmm0
        movaps xmm0, [edx]
        addps xmm0, xmm3
        movaps [edx], xmm0
        movaps xmm0, [eax]
        addps xmm0, xmm3
        movaps [eax], xmm0
        movaps xmm5, [ecx + 0x10]
        movaps xmm2, [ecx + 0x20]
        movaps xmm3, [ecx + 0x30]
        mulps xmm2, xmm1
        mulps xmm5, xmm1
        mulps xmm3, xmm1
        movaps xmm0, xmm5
        movlhps xmm0, xmm2
        movhlps xmm2, xmm5
        addps xmm0, xmm2
        movaps xmm2, xmm0
        movaps xmm1, xmm4
        movhlps xmm1, xmm3
        add edx, 0x10
        movlhps xmm3, xmm4
        addps xmm1, xmm3
        shufps xmm0, xmm1, 0x88
        shufps xmm2, xmm1, 0xdd
        addps xmm2, xmm0
        movaps xmm0, [edx]
        addps xmm0, xmm2
        movaps [edx], xmm0
        movaps xmm0, [eax + 0x10]
        mov edx, [ebp + 0x48]
        add eax, 0x10
        addps xmm0, xmm2
        movaps [eax], xmm0
        mov eax, [esp + 0x34]

    L_007f22d4:
        mov esi, [esp + 0x28]
        add esi, 1
        add edi, 4
        add ecx, 0x60
        cmp esi, [edx]
        mov [esp + 0x28], esi
        jne L_007f21e1

        mov edi, [esp + 0x1c]

    L_007f22f1:
        mov eax, [edx]
        mov ecx, [esp + 0x20]
        add dword ptr [esp + 0x14], 0x10
        add dword ptr [esp + 0x18], 0x20
        lea eax, [eax + 2*eax]
        shl eax, 5
        add ecx, eax
        add edi, 0x20
        add edx, 4
        sub dword ptr [esp + 0x2c], 1
        mov [esp + 0x20], ecx
        mov [esp + 0x1c], edi
        mov [ebp + 0x48], edx
        jne L_007f21c0

    L_007f2325:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x54
    }
}
