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
