// Decompiled translation unit: src/classes/keaMatrix_pcSparse_SSE.cpp

extern "C" void ext_007D9680();
extern "C" int mem_0099EE90;
extern "C" int mem_0092F1E4;
extern "C" int mem_0099EE88;
extern "C" int mem_0099EE84;
extern "C" int mem_0099EE80;
extern "C" int mem_0099EE7C;
extern "C" int mem_0099EE78;

// [0x00800EC0] keaMatrix_pcSparse_SSE::vfunc_0 (286 bytes)
extern "C" __declspec(naked) void __fastcall fn_00800EC0(void* self, int edx_unused, int a, int b, int c) {
    __asm {
        mov eax, [esp+4]
        push ebx
        mov ebx, [esp+0xc]
        push esi
        mov esi, ecx
        mov [esi+4], eax
        add eax, 3
        sar eax, 2
        push edi
        mov edi, [esp+0x18]
        mov [esi+0x14], eax
        add eax, eax
        add eax, eax
        push edi
        mov [esi+8], eax
        push offset mem_0099EE90
        lea eax, [4*eax+0x10]
        push eax
        push ebx
        call ext_007D9680
        add eax, 0xf
        and eax, -0x10
        mov [esi+0x18], eax
        mov eax, [esi+8]
        mov ecx, eax
        imul ecx, eax
        push edi
        push offset mem_0092F1E4
        lea edx, [4*ecx+0x10]
        push edx
        push ebx
        call ext_007D9680
        add eax, 0xf
        and eax, -0x10
        mov [esi+0xc], eax
        mov eax, [esi+8]
        mov ecx, eax
        imul ecx, eax
        push edi
        push offset mem_0099EE88
        lea edx, [4*ecx+0x10]
        push edx
        push ebx
        call ext_007D9680
        mov ecx, [esi+0xc]
        add eax, 0xf
        and eax, -0x10
        mov [esi+0x10], eax
        mov [esi+0x28], eax
        mov eax, [esi+0x14]
        mov edx, eax
        imul edx, eax
        add edx, 0xf
        and edx, -0x10
        push edi
        add edx, edx
        push offset mem_0099EE84
        add edx, edx
        push edx
        push ebx
        mov [esi+0x24], ecx
        call ext_007D9680
        mov [esi+0x1c], eax
        mov eax, [esi+0x14]
        mov ecx, eax
        imul ecx, eax
        add ecx, 0xf
        add esp, 0x40
        and ecx, -0x10
        push edi
        add ecx, ecx
        push offset mem_0099EE80
        add ecx, ecx
        push ecx
        push ebx
        call ext_007D9680
        mov edx, [esi+0x14]
        push edi
        mov [esi+0x20], eax
        push offset mem_0099EE7C
        add edx, 0xf
        and edx, -0x10
        add edx, edx
        add edx, edx
        push edx
        push ebx
        call ext_007D9680
        mov [esi+0x2c], eax
        mov eax, [esi+0x14]
        add eax, 0xf
        and eax, -0x10
        push edi
        add eax, eax
        push offset mem_0099EE78
        add eax, eax
        push eax
        push ebx
        call ext_007D9680
        add esp, 0x30
        pop edi
        mov [esi+0x30], eax
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x00801380] keaMatrix_pcSparse_SSE::vfunc_5 (441 bytes)
extern "C" __declspec(naked) void __fastcall fn_00801380(void* self, int edx_unused, int a, int b) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x10
        sub esp, 0x24
        mov eax, [ebp+0x8]
        push ebx
        mov ebx, ecx
        mov ecx, [ebp+0xc]
        push esi
        mov [esp+0xc], ecx
        mov ecx, [ebx+0x14]
        xor esi, esi
        test ecx, ecx
        push edi
        mov [esp+0xc], ebx
        mov [esp+0x1c], eax
        jle L_008014ff
        xorps xmm5, xmm5
        movaps [esp+0x20], xmm5
        mov [esp+0x14], eax
    L_008013b9:
        xor edx, edx
        test esi, esi
        movaps xmm6, xmm5
        movaps xmm3, xmm5
        movaps xmm1, xmm5
        movaps xmm4, xmm5
        movaps xmm2, xmm5
        _emit 0x0f
        _emit 0x8e
        _emit 0x79
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edi, [ebx+0x1c]
        mov eax, ecx
        imul eax, esi
        lea edi, [edi+eax*4]
        mov [esp+0x18], esi
    L_008013e1:
        mov eax, [edi]
        test eax, eax
        je L_0080143e
        mov ebx, [esp+0x10]
        movaps xmm0, [ebx+edx*4]
        movaps xmm7, [eax]
        mov ebx, [esp+0xc]
        movaps xmm5, xmm0
        shufps xmm5, xmm0, 0x0
        mulps xmm5, xmm7
        movaps xmm7, [eax+0x10]
        addps xmm5, xmm6
        movaps xmm6, xmm0
        shufps xmm6, xmm0, 0x55
        mulps xmm6, xmm7
        movaps xmm7, [eax+0x20]
        addps xmm5, xmm6
        movaps xmm6, xmm0
        shufps xmm6, xmm0, 0xaa
        mulps xmm6, xmm7
        addps xmm5, xmm6
        movaps xmm6, xmm0
        shufps xmm6, xmm0, 0xff
        movaps xmm0, [eax+0x30]
        mulps xmm6, xmm0
        addps xmm5, xmm6
        movaps xmm6, xmm5
        movaps xmm5, [esp+0x20]
    L_0080143e:
        add edi, 4
        add edx, 4
        sub dword ptr [esp+0x18], 1
        jne L_008013e1
    L_0080144b:
        cmp esi, ecx
        jge L_008014ba
        mov eax, [esp+0x10]
        lea ebx, [eax+edx*4]
        mov edx, [esp+0xc]
        lea edi, [ecx*4]
        lea eax, [edi+4]
        imul eax, esi
        add eax, [edx+0x1c]
        sub ecx, esi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_00801470:
        mov edx, [eax]
        test edx, edx
        je L_008014ac
        movaps xmm0, [ebx]
        movaps xmm7, [edx]
        mulps xmm7, xmm0
        addps xmm7, xmm3
        movaps xmm3, xmm7
        movaps xmm7, [edx+0x10]
        mulps xmm7, xmm0
        addps xmm7, xmm1
        movaps xmm1, xmm7
        movaps xmm7, [edx+0x20]
        mulps xmm7, xmm0
        addps xmm7, xmm4
        movaps xmm4, xmm7
        movaps xmm7, [edx+0x30]
        mulps xmm7, xmm0
        addps xmm7, xmm2
        movaps xmm2, xmm7
    L_008014ac:
        add eax, edi
        add ebx, 0x10
        sub ecx, 1
        jne L_00801470
    L_008014b6:
        mov ebx, [esp+0xc]
    L_008014ba:
        mov eax, [esp+0x14]
        movaps xmm0, xmm3
        movlhps xmm0, xmm1
        movhlps xmm1, xmm3
        addps xmm0, xmm1
        movaps xmm1, xmm4
        movlhps xmm1, xmm2
        movhlps xmm2, xmm4
        addps xmm1, xmm2
        movaps xmm2, xmm0
        shufps xmm2, xmm1, 0xdd
        shufps xmm0, xmm1, 0x88
        addps xmm2, xmm0
        addps xmm2, xmm6
        movaps [eax], xmm2
        mov ecx, [ebx+0x14]
        add esi, 1
        add eax, 0x10
        cmp esi, ecx
        mov [esp+0x14], eax
        jl L_008013b9
    L_008014ff:
        mov esi, [ebx+4]
        fldz
    L_00801504:
        mov ecx, [ebx+4]
        mov eax, ecx
        cdq
        mov edi, 0xc
        idiv edi
        test edx, edx
        je L_0080151e
        mov eax, ecx
        cdq
        idiv edi
        sub ecx, edx
        add ecx, edi
    L_0080151e:
        cmp esi, ecx
        je L_0080152e
        mov eax, [esp+0x1c]
        fst dword ptr [eax+esi*4]
        add esi, 1
        jmp L_00801504
    L_0080152e:
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x007FEDA0] keaMatrix_pcSparse_SSE::vfunc_2 (581 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FEDA0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        mov eax, ecx
        mov ebx, dword ptr [eax+0x14]
        mov ecx, dword ptr [eax+0x8]
        mov edx, dword ptr [eax+0x10]
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        mov dword ptr [esp+0x18], ecx
        mov dword ptr [esp+0x10], edx
        jle L_ret1
        xor esi, esi
        mov ecx, ebx
        shl ecx, 6
        mov dword ptr [esp+0x14], esi
        mov dword ptr [esp+0x20], ecx
        mov dword ptr [esp+0x1c], edx
L_b:
        mov ebp, ebx
L_loopA:
        mov ecx, dword ptr [eax+0x20]
        mov dword ptr [esi+ecx], edx
        add edx, 0x40
        add esi, 4
        sub ebp, 1
        jne L_loopA
        mov edx, dword ptr [eax+0x30]
        mov esi, dword ptr [esp+0x14]
        mov dword ptr [edx+4*edi], 0
        mov edx, dword ptr [eax+0x2c]
        lea ecx, [ebx-1]
        mov dword ptr [edx+4*edi], ecx
        mov edx, dword ptr [esp+0x1c]
        add edx, dword ptr [esp+0x20]
        lea ecx, [4*ebx]
        add edi, 1
        add esi, ecx
        cmp edi, ebx
        mov dword ptr [esp+0x14], esi
        mov dword ptr [esp+0x1c], edx
        jl L_b
        mov ecx, dword ptr [esp+0x18]
L_ret1:
        mov ebx, dword ptr [esp+0x4c]
        mov edx, dword ptr [esp+0x44]
        xor eax, eax
        xor ebp, ebp
        test ebx, ebx
        jle L_o
        mov eax, dword ptr [esp+0x30]
        fldz
        sub edx, eax
        mov dword ptr [esp+0x14], eax
        mov dword ptr [esp+0x24], edx
        mov dword ptr [esp+0x1c], ebx
        mov dword ptr [esp+0x20], ebx
        jmp L_d
L_c:
        mov edx, dword ptr [esp+0x24]
L_d:
        mov eax, dword ptr [esp+0x14]
        mov esi, dword ptr [edx+eax]
        mov eax, dword ptr [esp+0x34]
        mov edx, esi
        imul edx, dword ptr [esp+0x50]
        lea edi, [eax+4*edx]
        xor edx, edx
        cmp ebx, 4
        mov dword ptr [esp+0x28], esi
        jl L_f
        mov esi, dword ptr [esp+0x44]
        mov ecx, dword ptr [esp+0x10]
        add ebx, -4
        shr ebx, 2
        add esi, 8
        add ebx, 1
        lea eax, [ecx+4*ebp+0x20]
        lea edx, [4*ebx]
L_e:
        mov ecx, dword ptr [esi-8]
        fld dword ptr [edi+4*ecx]
        add eax, 0x40
        fstp dword ptr [eax-0x60]
        mov ecx, dword ptr [esi-4]
        fld dword ptr [edi+4*ecx]
        add esi, 0x10
        sub ebx, 1
        fstp dword ptr [eax-0x50]
        mov ecx, dword ptr [esi-0x10]
        fld dword ptr [edi+4*ecx]
        fstp dword ptr [eax-0x40]
        mov ecx, dword ptr [esi-0xc]
        fld dword ptr [edi+4*ecx]
        fstp dword ptr [eax-0x30]
        jne L_e
        mov ebx, dword ptr [esp+0x4c]
        mov ecx, dword ptr [esp+0x18]
        mov esi, dword ptr [esp+0x28]
L_f:
        cmp edx, ebx
        jge L_h
        mov ecx, dword ptr [esp+0x10]
        lea eax, [ebp+4*edx]
        lea eax, [ecx+4*eax]
L_g:
        mov ecx, dword ptr [esp+0x44]
        mov ecx, dword ptr [ecx+4*edx]
        fld dword ptr [edi+4*ecx]
        add edx, 1
        fstp dword ptr [eax]
        add eax, 0x10
        cmp edx, ebx
        jl L_g
        mov ecx, dword ptr [esp+0x18]
L_h:
        cmp edx, ecx
        mov eax, dword ptr [esp+0x38]
        fld dword ptr [eax+4*esi]
        mov eax, dword ptr [esp+0x3c]
        fsub dword ptr [eax+4*esi]
        mov eax, dword ptr [esp+0x14]
        fstp dword ptr [eax]
        jge L_j
        mov esi, dword ptr [esp+0x10]
        lea eax, [ebp+4*edx]
        lea esi, [esi+4*eax]
        mov eax, ecx
        sub eax, edx
        add edx, eax
L_i:
        fst dword ptr [esi]
        add esi, 0x10
        sub eax, 1
        jne L_i
L_j:
        add ebp, 1
        and ebp, 3
        lea eax, [ebp-1]
        and eax, ecx
        shl eax, 4
        add dword ptr [esp+0x10], eax
        mov eax, 4
        add dword ptr [esp+0x14], eax
        sub dword ptr [esp+0x1c], 1
        jne L_c
        test ebp, ebp
        je L_n
        cmp ebp, eax
        je L_n
        mov edx, dword ptr [esp+0x10]
        sub eax, ebp
        lea edi, [edx+4*ebp]
        mov dword ptr [esp+0x44], eax
        add ebp, eax
L_k:
        xor edx, edx
        test ecx, ecx
        jle L_m
        mov eax, edi
        mov esi, ecx
        mov edx, ecx
L_l:
        fst dword ptr [eax]
        add eax, 0x10
        sub esi, 1
        jne L_l
        mov eax, dword ptr [esp+0x44]
L_m:
        add edi, 4
        sub eax, 1
        mov dword ptr [esp+0x44], eax
        jne L_k
L_n:
        mov eax, dword ptr [esp+0x20]
        fstp st(0)
L_o:
        cmp eax, ecx
        jge L_p
        mov esi, dword ptr [esp+0x30]
        lea edi, [esi+4*eax]
        sub ecx, eax
        xor eax, eax
        rep stosd
L_p:
        lea eax, [ebx-1]
        and eax, 3
        add eax, 1
        sub edx, 1
        sub ebp, 1
        cmp eax, 4
        jge L_r
        fld1
        add edx, edx
        mov ecx, 4
        add edx, edx
        sub ecx, eax
        mov eax, dword ptr [esp+0x10]
L_q:
        lea esi, [edx+ebp]
        sub edx, 4
        fst dword ptr [eax+4*esi]
        sub ebp, 1
        sub ecx, 1
        jne L_q
        fstp st(0)
L_r:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret 0x24
    }
}

// [0x00801540] keaMatrix_pcSparse_SSE::vfunc_4 (765 bytes)
extern "C" __declspec(naked) void __fastcall fn_00801540(void* self, int edx_unused, float* a, float* b) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x10
        sub esp, 0x34
        mov edx, dword ptr [ebp+0x8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp+0xc]
        cmp edx, edi
        mov eax, ecx
        mov dword ptr [esp+0x1c], edx
        je L_801577
        xor esi, esi
        cmp dword ptr [eax+0x8], esi
        je L_801577
        mov ecx, edx
        sub edi, edx
    L_801567:
        fld dword ptr [edi+ecx]
        add esi, 0x1
        fstp dword ptr [ecx]
        add ecx, 0x4
        cmp esi, dword ptr [eax+0x8]
        jne L_801567
    L_801577:
        mov ecx, dword ptr [eax+0x14]
        xor edi, edi
        test ecx, ecx
        jle L_80169f
        xorps xmm6, xmm6
    L_801587:
        imul ecx, edi
        xor esi, esi
        test edi, edi
        movaps xmm3, xmm6
        mov dword ptr [esp+0x18], esi
        mov ebx, ecx
        jle L_80161d
        mov ecx, dword ptr [eax+0x20]
        lea ecx, [ecx+4*ebx]
        add ebx, edi
        mov dword ptr [esp+0x18], edi
        mov dword ptr [esp+0x20], ebx
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_8015b0:
        mov edx, dword ptr [ecx]
        test edx, edx
        je L_801608
        mov ebx, dword ptr [esp+0x1c]
        movaps xmm0, xmmword ptr [ebx+4*esi]
        movaps xmm2, xmmword ptr [edx]
        mov ebx, dword ptr [esp+0x20]
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 0x0
        mulps xmm1, xmm2
        addps xmm1, xmm3
        movaps xmm3, xmmword ptr [edx+0x10]
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0x55
        mulps xmm2, xmm3
        movaps xmm3, xmmword ptr [edx+0x20]
        addps xmm1, xmm2
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0xaa
        mulps xmm2, xmm3
        addps xmm1, xmm2
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0xff
        movaps xmm0, xmmword ptr [edx+0x30]
        mulps xmm2, xmm0
        addps xmm1, xmm2
        movaps xmm3, xmm1
    L_801608:
        add ecx, 0x4
        add esi, 0x4
        sub dword ptr [esp+0x18], 0x1
        jne L_8015b0
        mov edx, dword ptr [esp+0x1c]
        mov dword ptr [esp+0x18], esi
    L_80161d:
        mov ecx, dword ptr [eax+0x20]
        mov ecx, dword ptr [ecx+4*ebx]
        movaps xmm0, xmmword ptr [edx+4*esi]
        mov ebx, dword ptr [eax+0x18]
        movaps xmm5, xmmword ptr [ebx+4*esi]
        movaps xmm4, xmmword ptr [ecx]
        movaps xmm7, xmmword ptr [ecx+0x10]
        movaps xmm1, xmm0
        subps xmm1, xmm3
        mulps xmm1, xmm5
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 0x0
        mulps xmm2, xmm4
        addps xmm2, xmm3
        movaps xmm3, xmm0
        subps xmm3, xmm2
        mulps xmm3, xmm5
        movaps xmm4, xmm3
        shufps xmm4, xmm3, 0x55
        mulps xmm4, xmm7
        movaps xmm7, xmmword ptr [ecx+0x20]
        addps xmm4, xmm2
        movaps xmm2, xmm0
        movlhps xmm1, xmm3
        subps xmm2, xmm4
        mulps xmm2, xmm5
        movaps xmm3, xmm2
        shufps xmm3, xmm2, 0xaa
        mulps xmm3, xmm7
        addps xmm3, xmm4
        subps xmm0, xmm3
        mulps xmm0, xmm5
        movhlps xmm0, xmm2
        shufps xmm1, xmm0, 0xcc
        movaps xmmword ptr [edx+4*esi], xmm1
        mov ecx, dword ptr [eax+0x14]
        add edi, 0x1
        cmp edi, ecx
        jl L_801587
        jmp L_8016a3
    L_80169f:
        mov esi, dword ptr [esp+0x18]
    L_8016a3:
        mov edi, dword ptr [eax+0x14]
        lea ebx, [edi-0x1]
        mov ecx, ebx
        imul ecx, edi
        test ebx, ebx
        mov dword ptr [esp+0x28], ebx
        jl L_80181d
        add ecx, ebx
        xorps xmm2, xmm2
        movaps xmmword ptr [esp+0x30], xmm2
        mov dword ptr [esp+0x24], ecx
        jmp L_8016d5
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_8016d0:
        movaps xmm2, xmmword ptr [esp+0x30]
    L_8016d5:
        mov edi, dword ptr [eax+0x14]
        mov ebx, dword ptr [esp+0x24]
        lea edx, [edi-0x1]
        cmp edx, dword ptr [esp+0x28]
        movaps xmm4, xmm2
        movaps xmm6, xmm2
        movaps xmm3, xmm2
        mov ecx, esi
        mov dword ptr [esp+0x20], ebx
        jle L_80175e
        sub edx, dword ptr [esp+0x28]
        mov esi, dword ptr [eax+0x20]
        lea ebx, [esi+4*ebx]
        mov dword ptr [esp+0x2c], edx
    L_801702:
        mov esi, dword ptr [ebx]
        test esi, esi
        je L_801743
        mov edx, dword ptr [esp+0x1c]
        movaps xmm0, xmmword ptr [edx+4*ecx]
        movaps xmm1, xmmword ptr [esi]
        mulps xmm1, xmm0
        addps xmm1, xmm4
        movaps xmm4, xmm1
        movaps xmm1, xmmword ptr [esi+0x10]
        mulps xmm1, xmm0
        addps xmm1, xmm2
        movaps xmm2, xmm1
        movaps xmm1, xmmword ptr [esi+0x20]
        mulps xmm1, xmm0
        addps xmm1, xmm6
        movaps xmm6, xmm1
        movaps xmm1, xmmword ptr [esi+0x30]
        mulps xmm1, xmm0
        addps xmm1, xmm3
        movaps xmm3, xmm1
    L_801743:
        sub dword ptr [esp+0x20], edi
        lea esi, [4*edi]
        sub ebx, esi
        sub ecx, 0x4
        sub dword ptr [esp+0x2c], 0x1
        jne L_801702
        mov esi, dword ptr [esp+0x18]
    L_80175e:
        mov edx, dword ptr [eax+0x20]
        mov edi, dword ptr [esp+0x20]
        mov edx, dword ptr [edx+4*edi]
        mov edi, dword ptr [esp+0x1c]
        movaps xmm0, xmmword ptr [edi+4*ecx]
        mov ebx, dword ptr [eax+0x18]
        movaps xmm5, xmmword ptr [ebx+4*ecx]
        movaps xmm1, xmm4
        movlhps xmm1, xmm2
        movhlps xmm2, xmm4
        movaps xmm4, xmmword ptr [edx+0x30]
        addps xmm1, xmm2
        movaps xmm7, xmmword ptr [edx+0x10]
        movaps xmm2, xmm6
        movlhps xmm2, xmm3
        movhlps xmm3, xmm6
        movaps xmm6, xmmword ptr [edx+0x20]
        addps xmm2, xmm3
        sub dword ptr [esp+0x24], 0x1
        movaps xmm3, xmm1
        shufps xmm1, xmm2, 0x88
        shufps xmm3, xmm2, 0xdd
        addps xmm3, xmm1
        lea edi, [edi+4*ecx]
        mov ecx, dword ptr [esp+0x28]
        movaps xmm1, xmm0
        subps xmm1, xmm3
        mulps xmm1, xmm5
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 0xff
        mulps xmm2, xmm4
        addps xmm2, xmm3
        movaps xmm3, xmm0
        subps xmm3, xmm2
        mulps xmm3, xmm5
        movaps xmm4, xmm3
        shufps xmm4, xmm3, 0xaa
        mulps xmm4, xmm6
        addps xmm4, xmm2
        movaps xmm2, xmm0
        subps xmm2, xmm4
        mulps xmm2, xmm5
        movaps xmm6, xmm2
        shufps xmm6, xmm2, 0x55
        mulps xmm6, xmm7
        addps xmm6, xmm4
        subps xmm0, xmm6
        mulps xmm0, xmm5
        sub ecx, 0x1
        test ecx, ecx
        movlhps xmm0, xmm2
        movhlps xmm1, xmm3
        shufps xmm0, xmm1, 0xcc
        movaps xmmword ptr [edi], xmm0
        mov dword ptr [esp+0x28], ecx
        jge L_8016d0
        mov edx, dword ptr [esp+0x1c]
    L_80181d:
        mov ecx, dword ptr [eax+0x4]
        cmp ecx, dword ptr [eax+0x8]
        je L_801834
        fldz
    L_801827:
        fst dword ptr [edx+4*ecx]
        add ecx, 0x1
        cmp ecx, dword ptr [eax+0x8]
        jne L_801827
        fstp st(0)
    L_801834:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00800FE0] keaMatrix_pcSparse_SSE::vfunc_1 (925 bytes)
extern "C" __declspec(naked) void __fastcall fn_00800FE0(void* self, int edx_unused, const float* a1, const float* a2, const int* a3, const int* a4, float* a5, float a6, float a7) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -10h
        sub esp, 54h
        mov edx, dword ptr [ebp+14h]
        mov eax, dword ptr [ebp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi+14h]
        mov esi, dword ptr [edi+24h]
        mov ebx, dword ptr [edi+28h]
        mov dword ptr [esp+14h], edx
        xor edx, edx
        cmp ecx, edx
        mov dword ptr [esp+50h], eax
        mov eax, dword ptr [ebp+0ch]
        mov dword ptr [esp+54h], edi
        mov dword ptr [esp+30h], eax
        mov dword ptr [esp+1ch], esi
        mov dword ptr [esp+40h], edx
        mov dword ptr [esp+18h], edx
        jle L_80123d
        mov eax, dword ptr [ebp+10h]
        mov dword ptr [esp+20h], eax
    L_80102d:
        mov eax, dword ptr [esp+50h]
        sub ecx, 1
        mov dword ptr [esp+2ch], eax
        mov eax, dword ptr [ebp+14h]
        mov dword ptr [esp+5ch], ecx
        xor ecx, ecx
        test edx, edx
        mov dword ptr [esp+34h], eax
        mov dword ptr [esp+24h], 0fffffffh
        mov dword ptr [esp+44h], ecx
        jl L_801201
        xorps xmm6, xmm6
    L_80105c:
        mov edx, dword ptr [esp+34h]
        mov eax, dword ptr [esp+2ch]
        mov dword ptr [esp+28h], edx
        mov edx, dword ptr [ebp+10h]
        mov dword ptr [esp+38h], eax
        mov eax, dword ptr [edx+4*ecx]
        test eax, eax
        mov edx, dword ptr [esp+20h]
        mov edx, dword ptr [edx]
        mov dword ptr [esp+3ch], edx
        movaps xmm2, xmm6
        movaps xmm3, xmm6
        movaps xmm4, xmm6
        movaps xmm5, xmm6
        mov dword ptr [esp+48h], 0
        jle L_8011bc
        mov dword ptr [esp+4ch], eax
    L_80109c:
        mov eax, dword ptr [esp+28h]
        mov eax, dword ptr [eax]
        cmp eax, -1
        mov dword ptr [esp+58h], eax
        je L_80114d
        xor esi, esi
        cmp dword ptr [esp+3ch], esi
        jle L_801149
        mov edi, dword ptr [esp+30h]
        nop
    L_8010c0:
        mov edx, dword ptr [esp+14h]
        cmp eax, dword ptr [edx+4*esi]
        jne L_801135
        mov eax, dword ptr [esp+38h]
        mov ecx, edi
        mov edx, 6
    L_8010d4:
        movaps xmm0, xmmword ptr [eax]
        movaps xmm1, xmmword ptr [ecx]
        movaps xmm7, xmm0
        shufps xmm7, xmm0, 0
        mulps xmm7, xmm1
        addps xmm7, xmm2
        movaps xmm2, xmm7
        movaps xmm7, xmm0
        shufps xmm7, xmm0, 55h
        mulps xmm7, xmm1
        addps xmm7, xmm3
        movaps xmm3, xmm7
        movaps xmm7, xmm0
        shufps xmm7, xmm0, 0aah
        mulps xmm7, xmm1
        addps xmm7, xmm4
        movaps xmm4, xmm7
        movaps xmm7, xmm0
        shufps xmm7, xmm0, 0ffh
        mulps xmm7, xmm1
        add eax, 10h
        add ecx, 10h
        sub edx, 1
        addps xmm7, xmm5
        movaps xmm5, xmm7
        jne L_8010d4
        mov eax, dword ptr [esp+58h]
        mov ecx, dword ptr [esp+44h]
        mov dword ptr [esp+48h], 1
    L_801135:
        add esi, 1
        add edi, 60h
        cmp esi, dword ptr [esp+3ch]
        jl L_8010c0
        mov edi, dword ptr [esp+54h]
    L_801149:
        mov esi, dword ptr [esp+1ch]
    L_80114d:
        add dword ptr [esp+38h], 60h
        add dword ptr [esp+28h], 4
        sub dword ptr [esp+4ch], 1
        jne L_80109c
        cmp dword ptr [esp+48h], 0
        je L_8011bc
        mov eax, dword ptr [esp+18h]
        movaps xmmword ptr [esi], xmm2
        movaps xmmword ptr [esi+10h], xmm3
        movaps xmmword ptr [esi+20h], xmm4
        movaps xmmword ptr [esi+30h], xmm5
        movaps xmmword ptr [ebx], xmm2
        movaps xmmword ptr [ebx+10h], xmm3
        movaps xmmword ptr [ebx+20h], xmm4
        movaps xmmword ptr [ebx+30h], xmm5
        mov edx, dword ptr [edi+1ch]
        mov dword ptr [edx+4*eax], esi
        mov edx, dword ptr [edi+20h]
        mov dword ptr [edx+4*eax], ebx
        mov eax, dword ptr [esp+24h]
        sub eax, ecx
        sar eax, 1fh
        mov edx, eax
        and eax, dword ptr [esp+24h]
        not edx
        add esi, 40h
        and edx, ecx
        add ebx, 40h
        add edx, eax
        mov dword ptr [esp+1ch], esi
        mov dword ptr [esp+24h], edx
        jmp L_8011d4
    L_8011bc:
        mov edx, dword ptr [edi+1ch]
        mov eax, dword ptr [esp+18h]
        mov dword ptr [edx+4*eax], 0
        mov edx, dword ptr [edi+20h]
        mov dword ptr [edx+4*eax], 0
    L_8011d4:
        mov eax, dword ptr [ebp+10h]
        mov eax, dword ptr [eax+4*ecx]
        add dword ptr [esp+34h], 20h
        add dword ptr [esp+18h], 1
        lea edx, [eax+2*eax]
        shl edx, 5
        add dword ptr [esp+2ch], edx
        mov edx, dword ptr [esp+40h]
        add ecx, 1
        cmp ecx, edx
        mov dword ptr [esp+44h], ecx
        jle L_80105c
    L_801201:
        mov eax, dword ptr [edi+30h]
        mov ecx, dword ptr [esp+24h]
        add dword ptr [esp+14h], 20h
        mov dword ptr [eax+4*edx], ecx
        mov eax, dword ptr [esp+20h]
        mov eax, dword ptr [eax]
        add dword ptr [esp+20h], 4
        lea ecx, [eax+2*eax]
        shl ecx, 5
        add dword ptr [esp+30h], ecx
        mov ecx, dword ptr [esp+5ch]
        add dword ptr [esp+18h], ecx
        add edx, 1
        cmp edx, dword ptr [edi+14h]
        mov dword ptr [esp+40h], edx
        jl L_80102d
    L_80123d:
        xor edx, edx
        cmp dword ptr [edi+14h], edx
        mov dword ptr [edi+24h], esi
        mov dword ptr [edi+28h], ebx
        jle L_8012ee
        mov eax, dword ptr [ebp+18h]
        fld dword ptr [ebp+20h]
        fld dword ptr [ebp+1ch]
        add eax, 8
    L_80125a:
        mov ecx, dword ptr [edi+14h]
        fld dword ptr [eax-8]
        fmul st, st(2)
        mov esi, dword ptr [edi+1ch]
        mov ebx, dword ptr [edi+20h]
        add ecx, 1
        fadd st, st(1)
        imul ecx, edx
        add ecx, ecx
        add ecx, ecx
        mov esi, dword ptr [ecx+esi]
        mov ebx, dword ptr [ecx+ebx]
        add edx, 1
        fadd dword ptr [esi]
        add eax, 10h
        mov dword ptr [esp+1ch], esi
        fstp dword ptr [esi]
        fld dword ptr [eax-18h]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [ebx]
        fstp dword ptr [ebx]
        fld dword ptr [eax-14h]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [esi+14h]
        fstp dword ptr [esi+14h]
        fld dword ptr [eax-14h]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [ebx+14h]
        fstp dword ptr [ebx+14h]
        fld dword ptr [eax-10h]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [esi+28h]
        fstp dword ptr [esi+28h]
        fld dword ptr [eax-10h]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [ebx+28h]
        fstp dword ptr [ebx+28h]
        fld dword ptr [eax-0ch]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [esi+3ch]
        fstp dword ptr [esi+3ch]
        fld dword ptr [eax-0ch]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [ebx+3ch]
        fstp dword ptr [ebx+3ch]
        cmp edx, dword ptr [edi+14h]
        jl L_80125a
        fstp st(1)
        fstp st(0)
    L_8012ee:
        mov eax, dword ptr [edi+4h]
        sub eax, 1
        and eax, 3
        add eax, 1
        cmp eax, 4
        lea ecx, [eax+4*eax]
        jge L_801320
        fld1
        mov edx, 4
        sub esi, ebx
        lea ecx, [ebx+4*ecx]
        sub edx, eax
    L_801310:
        fst dword ptr [esi+ecx]
        add ecx, 14h
        sub edx, 1
        fst dword ptr [ecx-14h]
        jne L_801310
        fstp st(0)
    L_801320:
        xor edx, edx
        cmp dword ptr [edi+14h], edx
        mov dword ptr [esp+14h], edx
        jle L_801374
        jmp L_801330
    L_80132d:
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_801330:
        mov eax, dword ptr [edi+14h]
        cmp edx, eax
        mov ecx, edx
        jge L_801362
        lea esi, [4*eax]
        lea eax, [esi+4]
        imul eax, edx
        add eax, dword ptr [edi+1ch]
    L_801349:
        cmp dword ptr [eax], 0
        je L_801358
        cmp ecx, dword ptr [esp+14h]
        jle L_801358
        mov dword ptr [esp+14h], ecx
    L_801358:
        add ecx, 1
        add eax, esi
        cmp ecx, dword ptr [edi+14h]
        jl L_801349
    L_801362:
        mov eax, dword ptr [edi+2ch]
        mov ecx, dword ptr [esp+14h]
        mov dword ptr [eax+4*edx], ecx
        add edx, 1
        cmp edx, dword ptr [edi+14h]
        jl L_801330
    L_801374:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 1ch
    }
}
