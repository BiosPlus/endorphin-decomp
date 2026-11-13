// Decompiled translation unit: src/classes/keaMatrix_pcSparse_vanilla.cpp

extern "C" void ext_007D9680();

// [0x007FEFF0] keaMatrix_pcSparse_vanilla::vfunc_0 (367 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FEFF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, [esp+4]
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov [esi+4], eax
        add eax, 3
        sar eax, 2
        lea ecx, [4*eax]
        push edi
        lea edx, [4*ecx]
        mov edi, edx
        and edi, 0xf
        mov [esi+0x14], eax
        mov [esi+8], ecx
        je l1
        lea edx, [4*ecx+0x10]
        sub edx, edi
    l1:
        lea ebx, [edx+0x10]
        mov edx, ecx
        imul edx, ecx
        lea ecx, [4*edx+0x10]
        mov [esp+0x20], ecx
        mov ecx, eax
        imul ecx, eax
        mov edx, ecx
        and edx, 0x8000000f
        jns l2
        dec edx
        or edx, -0x10
        inc edx
    l2:
        mov edi, ecx
        je l3
        sub edi, edx
        add edi, 0x10
    l3:
        add edi, edi
        add edi, edi
        test edx, edx
        mov [esp+0x10], edi
        je l4
        sub ecx, edx
        add ecx, 0x10
    l4:
        lea edx, [4*ecx]
        mov ecx, eax
        and ecx, 0x8000000f
        mov [esp+0x14], edx
        jns l5
        dec ecx
        or ecx, -0x10
        inc ecx
    l5:
        mov edx, eax
        je l6
        sub edx, ecx
        add edx, 0x10
    l6:
        add edx, edx
        add edx, edx
        test ecx, ecx
        mov [esp+0x18], edx
        je l7
        sub eax, ecx
        add eax, 0x10
    l7:
        mov edi, [esp+0x28]
        push edi
        push 0x99ee90
        push ebx
        mov ebx, [esp+0x30]
        push ebx
        mov ebp, eax
        call ext_007D9680
        add eax, 0xf
        and eax, -0x10
        push edi
        mov [esi+0x18], eax
        mov eax, [esp+0x34]
        push 0x92f1e4
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esp+0x40]
        push edi
        push 0x99ee88
        add eax, 0xf
        push ecx
        and eax, -0x10
        push ebx
        mov [esi+0xc], eax
        call ext_007D9680
        mov edx, [esi+0xc]
        add eax, 0xf
        and eax, -0x10
        push edi
        mov [esi+0x10], eax
        mov [esi+0x28], eax
        mov eax, [esp+0x44]
        push 0x99ee84
        push eax
        push ebx
        mov [esi+0x24], edx
        call ext_007D9680
        mov ecx, [esp+0x54]
        add esp, 0x40
        push edi
        push 0x99ee80
        push ecx
        push ebx
        mov [esi+0x1c], eax
        call ext_007D9680
        mov edx, [esp+0x28]
        push edi
        push 0x99ee7c
        push edx
        push ebx
        mov [esi+0x20], eax
        call ext_007D9680
        push edi
        mov [esi+0x2c], eax
        push 0x99ee78
        lea eax, [4*ebp]
        push eax
        push ebx
        call ext_007D9680
        add esp, 0x30
        pop edi
        mov [esi+0x30], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}

// [0x007FF160] keaMatrix_pcSparse_vanilla::vfunc_5 (655 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FF160(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x18
        fldz
        push ebx
        push esi
        mov ebx, ecx
        mov esi, [ebx+0x14]
        push edi
        xor edi, edi
        test esi, esi
        mov [esp+0xc], ebx
        jle l_3b7
        mov eax, [esp+0x28]
        add eax, 8
        mov [esp+0x10], eax
        push ebp
    l_187:
        fst dword ptr [esp+0x24]
        xor ecx, ecx
        test edi, edi
        fst dword ptr [esp+0x20]
        fst dword ptr [esp+0x1c]
        fst dword ptr [esp+0x18]
        jle l_2af
        mov edx, [esp+0x30]
        mov ecx, [ebx+0x1c]
        mov eax, esi
        add edx, 8
        imul eax, edi
        lea ebx, [ecx+4*eax]
        mov ebp, edi
        lea ecx, [4*edi]
    l_1bc:
        mov eax, [ebx]
        test eax, eax
        je l_298
        fld dword ptr [edx-8]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd dword ptr [esp+0x18]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+4]
        fmul st, st(1)
        fadd dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+8]
        fmul st, st(1)
        fadd dword ptr [esp+0x20]
        fstp dword ptr [esp+0x20]
        fmul dword ptr [eax+0xc]
        fadd dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
        fld dword ptr [edx-4]
        fld dword ptr [eax+0x10]
        fmul st, st(1)
        fadd dword ptr [esp+0x18]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+0x14]
        fmul st, st(1)
        fadd dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+0x18]
        fmul st, st(1)
        fadd dword ptr [esp+0x20]
        fstp dword ptr [esp+0x20]
        fmul dword ptr [eax+0x1c]
        fadd dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
        fld dword ptr [edx]
        fld dword ptr [eax+0x20]
        fmul st, st(1)
        fadd dword ptr [esp+0x18]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+0x24]
        fmul st, st(1)
        fadd dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+0x28]
        fmul st, st(1)
        fadd dword ptr [esp+0x20]
        fstp dword ptr [esp+0x20]
        fmul dword ptr [eax+0x2c]
        fadd dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
        fld dword ptr [edx+4]
        fld dword ptr [eax+0x30]
        fmul st, st(1)
        fadd dword ptr [esp+0x18]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+0x34]
        fmul st, st(1)
        fadd dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+0x38]
        fmul st, st(1)
        fadd dword ptr [esp+0x20]
        fstp dword ptr [esp+0x20]
        fmul dword ptr [eax+0x3c]
        fadd dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
    l_298:
        add ebx, 4
        add edx, 0x10
        sub ebp, 1
        jne l_1bc
        mov eax, [esp+0x14]
        mov ebx, [esp+0x10]
    l_2af:
        cmp edi, esi
        jge l_385
        mov edx, [esp+0x30]
        mov eax, [esp+0x10]
        lea ebp, [4*esi]
        lea ebx, [edx+4*ecx+8]
        lea edx, [ebp+4]
        imul edx, edi
        add edx, [eax+0x1c]
        sub esi, edi
    l_2d5:
        mov eax, [edx]
        test eax, eax
        je l_36f
        fld dword ptr [ebx-4]
        fld dword ptr [ebx-8]
        fld dword ptr [ebx]
        fld dword ptr [ebx+4]
        fld dword ptr [eax+4]
        fmul st, st(4)
        fld dword ptr [eax]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [eax+8]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax+0xc]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp+0x18]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+0x10]
        fmul st, st(3)
        fld dword ptr [eax+0x14]
        fmul st, st(5)
        faddp st(1), st
        fld dword ptr [eax+0x18]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax+0x1c]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp+0x1c]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+0x20]
        fmul st, st(3)
        fld dword ptr [eax+0x24]
        fmul st, st(5)
        faddp st(1), st
        fld dword ptr [eax+0x28]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax+0x2c]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp+0x20]
        fstp dword ptr [esp+0x20]
        fld dword ptr [eax+0x30]
        fmulp st(3), st
        fld dword ptr [eax+0x34]
        fmulp st(4), st
        fxch st(2)
        faddp st(3), st
        fmul dword ptr [eax+0x38]
        faddp st(2), st
        fmul dword ptr [eax+0x3c]
        faddp st(1), st
        fadd dword ptr [esp+0x24]
        fstp dword ptr [esp+0x24]
    l_36f:
        add edx, ebp
        add ebx, 0x10
        sub esi, 1
        jne l_2d5
        mov eax, [esp+0x14]
        mov ebx, [esp+0x10]
    l_385:
        fld dword ptr [esp+0x18]
        add edi, 1
        fstp dword ptr [eax-8]
        add eax, 0x10
        fld dword ptr [esp+0x1c]
        mov [esp+0x14], eax
        fstp dword ptr [eax-0x14]
        fld dword ptr [esp+0x20]
        fstp dword ptr [eax-0x10]
        fld dword ptr [esp+0x24]
        fstp dword ptr [eax-0xc]
        mov esi, [ebx+0x14]
        cmp edi, esi
        jl l_187
        pop ebp
    l_3b7:
        mov ecx, [ebx+4]
    l_3ba:
        mov esi, [ebx+4]
        mov eax, esi
        cdq
        mov edi, 0xc
        idiv edi
        test edx, edx
        je l_3d4
        mov eax, esi
        cdq
        idiv edi
        sub esi, edx
        add esi, edi
    l_3d4:
        cmp ecx, esi
        je l_3e4
        mov edx, [esp+0x28]
        fst dword ptr [edx+4*ecx]
        add ecx, 1
        jmp l_3ba
    l_3e4:
        pop edi
        fstp st(0)
        pop esi
        pop ebx
        add esp, 0x18
        ret 8
    }
}

// [0x007FF3F0] keaMatrix_pcSparse_vanilla::vfunc_4 (1245 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FF3F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x30
        mov edx, [esp+0x38]
        push ebp
        push esi
        mov esi, [esp+0x3c]
        cmp esi, edx
        mov ebp, ecx
        mov [esp+0xc], ebp
        je l_422
        xor ecx, ecx
        cmp [ebp+8], ecx
        je l_422
        mov eax, esi
        sub edx, esi
    l_412:
        fld dword ptr [edx+eax]
        add ecx, 1
        fstp dword ptr [eax]
        add eax, 4
        cmp ecx, [ebp+8]
        jne l_412
    l_422:
        mov eax, [ebp+0x14]
        fldz
        xor ecx, ecx
        test eax, eax
        push ebx
        push edi
        mov [esp+0x48], ecx
        jle l_65d
        jmp l_43d
    l_439:
        mov ecx, [esp+0x48]
    l_43d:
        imul eax, ecx
        fst dword ptr [esp+0x3c]
        fst dword ptr [esp+0x38]
        fst dword ptr [esp+0x34]
        fst dword ptr [esp+0x30]
        test ecx, ecx
        mov dword ptr [esp+0x10], 0
        mov ebx, eax
        jle l_566
        mov eax, [ebp+0x20]
        lea edi, [eax+4*ebx]
        mov eax, [esp+0x48]
        add eax, eax
        add eax, eax
        add ebx, [esp+0x48]
        lea edx, [esi+8]
        mov [esp+0x10], eax
    l_47b:
        mov eax, [edi]
        test eax, eax
        je l_557
        fld dword ptr [edx-8]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        fld dword ptr [eax+4]
        fmul st, st(1)
        fadd dword ptr [esp+0x34]
        fstp dword ptr [esp+0x34]
        fld dword ptr [eax+8]
        fmul st, st(1)
        fadd dword ptr [esp+0x38]
        fstp dword ptr [esp+0x38]
        fmul dword ptr [eax+0xc]
        fadd dword ptr [esp+0x3c]
        fstp dword ptr [esp+0x3c]
        fld dword ptr [edx-4]
        fld dword ptr [eax+0x10]
        fmul st, st(1)
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        fld dword ptr [eax+0x14]
        fmul st, st(1)
        fadd dword ptr [esp+0x34]
        fstp dword ptr [esp+0x34]
        fld dword ptr [eax+0x18]
        fmul st, st(1)
        fadd dword ptr [esp+0x38]
        fstp dword ptr [esp+0x38]
        fmul dword ptr [eax+0x1c]
        fadd dword ptr [esp+0x3c]
        fstp dword ptr [esp+0x3c]
        fld dword ptr [edx]
        fld dword ptr [eax+0x20]
        fmul st, st(1)
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        fld dword ptr [eax+0x24]
        fmul st, st(1)
        fadd dword ptr [esp+0x34]
        fstp dword ptr [esp+0x34]
        fld dword ptr [eax+0x28]
        fmul st, st(1)
        fadd dword ptr [esp+0x38]
        fstp dword ptr [esp+0x38]
        fmul dword ptr [eax+0x2c]
        fadd dword ptr [esp+0x3c]
        fstp dword ptr [esp+0x3c]
        fld dword ptr [edx+4]
        fld dword ptr [eax+0x30]
        fmul st, st(1)
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        fld dword ptr [eax+0x34]
        fmul st, st(1)
        fadd dword ptr [esp+0x34]
        fstp dword ptr [esp+0x34]
        fld dword ptr [eax+0x38]
        fmul st, st(1)
        fadd dword ptr [esp+0x38]
        fstp dword ptr [esp+0x38]
        fmul dword ptr [eax+0x3c]
        fadd dword ptr [esp+0x3c]
        fstp dword ptr [esp+0x3c]
    l_557:
        add edi, 4
        add edx, 0x10
        sub ecx, 1
        jne l_47b
    l_566:
        mov ecx, [ebp+0x20]
        mov edi, [esp+0x10]
        mov ecx, [ecx+4*ebx]
        mov eax, 1
        add edi, edi
        xor ebx, ebx
        mov [esp+0x1c], eax
        add edi, edi
        mov dword ptr [esp+0x18], 3
        mov dword ptr [esp+0x20], 4
    l_58f:
        cmp dword ptr [esp+0x18], 4
        fld dword ptr [edi+esi]
        fsub dword ptr [esp+ebx+0x30]
        mov edx, [ebp+0x18]
        fmul dword ptr [edi+edx]
        fstp dword ptr [esp+0x28]
        fld dword ptr [esp+0x28]
        fst dword ptr [esp+0x28]
        fstp dword ptr [edi+esi]
        jl l_5ff
        mov edx, [esp+0x1c]
        fld dword ptr [esp+0x28]
        add edx, ebx
        lea edx, [ecx+4*edx]
    l_5bf:
        fld dword ptr [edx]
        add eax, 4
        fmul st, st(1)
        add edx, 0x10
        cmp eax, 1
        fadd dword ptr [esp+4*eax+0x20]
        fstp dword ptr [esp+4*eax+0x20]
        fld dword ptr [edx-0xc]
        fmul st, st(1)
        fadd dword ptr [esp+4*eax+0x24]
        fstp dword ptr [esp+4*eax+0x24]
        fld dword ptr [edx-8]
        fmul st, st(1)
        fadd dword ptr [esp+4*eax+0x28]
        fstp dword ptr [esp+4*eax+0x28]
        fld dword ptr [edx-4]
        fmul st, st(1)
        fadd dword ptr [esp+4*eax+0x2c]
        fstp dword ptr [esp+4*eax+0x2c]
        jl l_5bf
        fstp st(0)
    l_5ff:
        cmp eax, 4
        jge l_626
        fld dword ptr [edi+esi]
        lea edx, [ebx+eax]
        lea edx, [ecx+4*edx]
    l_60d:
        fld dword ptr [edx]
        add eax, 1
        fmul st, st(1)
        add edx, 4
        cmp eax, 4
        fadd dword ptr [esp+4*eax+0x2c]
        fstp dword ptr [esp+4*eax+0x2c]
        jl l_60d
        fstp st(0)
    l_626:
        mov eax, [esp+0x1c]
        sub dword ptr [esp+0x18], 1
        add eax, 1
        add ebx, 4
        add edi, 4
        sub dword ptr [esp+0x20], 1
        mov [esp+0x1c], eax
        jne l_58f
        mov ecx, [esp+0x48]
        mov eax, [ebp+0x14]
        add ecx, 1
        cmp ecx, eax
        mov [esp+0x48], ecx
        jl l_439
    l_65d:
        mov eax, [ebp+0x14]
        lea ebx, [eax-1]
        mov ecx, ebx
        imul ecx, eax
        test ebx, ebx
        mov [esp+0x48], ebx
        jl l_8ae
        add ecx, ebx
        mov [esp+0x20], ecx
        jmp l_684
    l_67c:
        mov ebx, [esp+0x48]
        mov ecx, [esp+0x20]
    l_684:
        mov edi, [ebp+0x14]
        fst dword ptr [esp+0x3c]
        mov edx, [esp+0x10]
        fst dword ptr [esp+0x38]
        lea eax, [edi-1]
        fst dword ptr [esp+0x34]
        cmp eax, ebx
        fst dword ptr [esp+0x30]
        mov [esp+0x1c], edx
        mov [esp+0x28], ecx
        jle l_78d
        mov edx, [ebp+0x20]
        sub eax, ebx
        lea ebp, [edx+4*ecx]
        mov ecx, [esp+0x10]
        mov ebx, eax
        lea eax, [4*ebx]
        lea edx, [esi+4*ecx+8]
        mov ecx, eax
        mov eax, [esp+0x10]
        sub eax, ecx
        mov ecx, [esp+0x28]
        mov [esp+0x1c], eax
    l_6d7:
        mov eax, [ebp]
        test eax, eax
        je l_772
        fld dword ptr [edx-4]
        fld dword ptr [edx-8]
        fld dword ptr [edx]
        fld dword ptr [edx+4]
        fld dword ptr [eax+4]
        fmul st, st(4)
        fld dword ptr [eax]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [eax+8]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax+0xc]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        fld dword ptr [eax+0x10]
        fmul st, st(3)
        fld dword ptr [eax+0x14]
        fmul st, st(5)
        faddp st(1), st
        fld dword ptr [eax+0x18]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax+0x1c]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp+0x34]
        fstp dword ptr [esp+0x34]
        fld dword ptr [eax+0x20]
        fmul st, st(3)
        fld dword ptr [eax+0x24]
        fmul st, st(5)
        faddp st(1), st
        fld dword ptr [eax+0x28]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax+0x2c]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp+0x38]
        fstp dword ptr [esp+0x38]
        fld dword ptr [eax+0x30]
        fmulp st(3), st
        fld dword ptr [eax+0x34]
        fmulp st(4), st
        fxch st(2)
        faddp st(3), st
        fmul dword ptr [eax+0x38]
        faddp st(2), st
        fmul dword ptr [eax+0x3c]
        faddp st(1), st
        fadd dword ptr [esp+0x3c]
        fstp dword ptr [esp+0x3c]
    l_772:
        lea eax, [4*edi]
        sub ecx, edi
        sub ebp, eax
        sub edx, 0x10
        sub ebx, 1
        jne l_6d7
        mov ebp, [esp+0x14]
    l_78d:
        mov edx, [ebp+0x20]
        mov eax, [edx+4*ecx]
        mov ecx, [esp+0x1c]
        mov ebp, 4
        mov [esp+0x24], eax
        mov edi, 0xc
        lea ecx, [4*ecx+0xc]
        mov dword ptr [esp+0x18], 0
        mov [esp+0x28], ebp
    l_7b8:
        cmp dword ptr [esp+0x18], 4
        mov ebx, ebp
        jl l_828
        mov eax, [esp+0x24]
        lea edx, [edi+ebp]
        lea edx, [eax+4*edx]
        mov eax, ebp
        neg eax
        shr eax, 2
        add eax, 1
        lea esi, [ecx+esi+0xc]
        lea ebx, [ebp+4*eax]
    l_7dd:
        fld dword ptr [esi-4]
        add edx, 0x10
        fmul dword ptr [edx-0xc]
        add esi, 0x10
        sub eax, 1
        fld dword ptr [esi-0x18]
        fmul dword ptr [edx-0x10]
        fadd dword ptr [esp+edi+0x30]
        fstp dword ptr [esp+0x2c]
        fadd dword ptr [esp+0x2c]
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fld dword ptr [edx-8]
        fmul dword ptr [esi-0x10]
        faddp st(1), st
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fld dword ptr [esi-0xc]
        fmul dword ptr [edx-4]
        faddp st(1), st
        fstp dword ptr [esp+edi+0x30]
        jne l_7dd
        mov esi, [esp+0x44]
    l_828:
        cmp ebx, 4
        jge l_862
        mov edx, [esp+0x1c]
        add edx, ebx
        lea esi, [esi+4*edx]
        mov edx, [esp+0x24]
        lea eax, [edi+ebx]
        lea edx, [edx+4*eax]
        mov eax, 4
        sub eax, ebx
    l_847:
        fld dword ptr [edx]
        add edx, 4
        fmul dword ptr [esi]
        add esi, 4
        sub eax, 1
        fadd dword ptr [esp+edi+0x30]
        fstp dword ptr [esp+edi+0x30]
        jne l_847
        mov esi, [esp+0x44]
    l_862:
        fld dword ptr [ecx+esi]
        mov eax, [esp+0x14]
        fsub dword ptr [esp+edi+0x30]
        mov edx, [eax+0x18]
        mov eax, 1
        add [esp+0x18], eax
        fmul dword ptr [ecx+edx]
        sub ebp, eax
        sub edi, 4
        sub ecx, 4
        sub [esp+0x28], eax
        fstp dword ptr [ecx+esi+4]
        jne l_7b8
        mov eax, [esp+0x48]
        sub dword ptr [esp+0x20], 1
        mov ebp, [esp+0x14]
        sub eax, 1
        test eax, eax
        mov [esp+0x48], eax
        jge l_67c
    l_8ae:
        mov eax, [ebp+4]
        cmp eax, [ebp+8]
        pop edi
        pop ebx
        je l_8c3
    l_8b8:
        fst dword ptr [esi+4*eax]
        add eax, 1
        cmp eax, [ebp+8]
        jne l_8b8
    l_8c3:
        pop esi
        fstp st(0)
        pop ebp
        add esp, 0x30
        ret 8
    }
}

extern "C" void ext_006A6E8C();
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" int mem_00AA7E40;

// [0x007FF8D0] keaMatrix_pcSparse_vanilla::vfunc_6 (1526 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FF8D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x14]
        lea eax, [4*edi]
        mov dword ptr [ebp - 0x8], ecx
        call ext_006A6EC0
        xor eax, eax
        xor ebx, ebx
        test edi, edi
        mov dword ptr [ebp - 0x30], esp
        mov dword ptr [ebp - 0x14], eax
        jle L_007FF964
    L_007FF903:
        mov ecx, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ecx + 4*eax]
        mov edx, dword ptr [ebp + 0xc]
        cmp dword ptr [edx + 4*esi], 0x0
        jne L_007FF95A
        mov edi, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x8]
        mov ecx, esi
        imul ecx, edi
        lea eax, [4*edi]
        push eax
        lea eax, [edx + 4*ecx]
        push 0x0
        push eax
        call ext_006A6E8C
        mov eax, dword ptr [ebp - 0x30]
        fld1
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0xc]
        add edi, 0x1
        imul edi, esi
        mov dword ptr [eax + 4*ebx], esi
        mov eax, dword ptr [ebp - 0x14]
        fstp dword ptr [ecx + 4*edi]
        mov edi, dword ptr [ebp + 0x14]
        add esp, 0xc
        mov dword ptr [edx + 4*esi], 0x1
        add ebx, 0x1
    L_007FF95A:
        add eax, 0x1
        cmp eax, edi
        mov dword ptr [ebp - 0x14], eax
        jl L_007FF903
    L_007FF964:
        mov ecx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [ecx + 0x14]
        xor esi, esi
        test eax, eax
        mov dword ptr [ebp - 0x28], ebx
        mov dword ptr [ebp - 0x24], esi
        jle L_007FFC2B
    L_007FF97A:
        imul eax, esi
        xor edi, edi
        test esi, esi
        mov ecx, eax
        mov dword ptr [ebp - 0x14], edi
        mov dword ptr [ebp - 0x34], edi
        mov dword ptr [ebp - 0xc], ecx
        jle L_007FFADE
    L_007FF992:
        mov edx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [edx + 0x20]
        mov edx, dword ptr [eax + 4*ecx]
        test edx, edx
        je L_007FFAC6
        xor eax, eax
        test ebx, ebx
        mov dword ptr [ebp - 0x18], eax
        jle L_007FFAC6
    L_007FF9B0:
        mov ecx, dword ptr [ebp - 0x30]
        mov ecx, dword ptr [ecx + 4*eax]
        mov ebx, ecx
        sar ebx, 0x2
        cmp ebx, edi
        jg L_007FFAB1
        imul ecx, dword ptr [ebp + 0x18]
        mov edi, dword ptr [ebp + 0x8]
        mov ebx, dword ptr [ebp - 0x34]
        lea eax, [ecx + 4*esi]
        lea eax, [edi + 4*eax]
        add ecx, ebx
        lea ecx, [edi + 4*ecx]
        fld dword ptr [eax]
        fld dword ptr [ecx]
        fmul dword ptr [edx]
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x4]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fld dword ptr [edx + 0x8]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax + 0x8]
        fld dword ptr [eax + 0xc]
        fld dword ptr [edx + 0xc]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax + 0xc]
        fld dword ptr [eax]
        fld dword ptr [edx + 0x10]
        fmul dword ptr [ecx + 0x4]
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x14]
        fmul dword ptr [ecx + 0x4]
        fsubp st(1), st
        fstp dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fld dword ptr [edx + 0x18]
        fmul dword ptr [ecx + 0x4]
        fsubp st(1), st
        fstp dword ptr [eax + 0x8]
        fld dword ptr [eax + 0xc]
        fld dword ptr [edx + 0x1c]
        fmul dword ptr [ecx + 0x4]
        fsubp st(1), st
        fstp dword ptr [eax + 0xc]
        fld dword ptr [eax]
        fld dword ptr [edx + 0x20]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x24]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st
        fstp dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fld dword ptr [edx + 0x28]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st
        fstp dword ptr [eax + 0x8]
        fld dword ptr [eax + 0xc]
        fld dword ptr [edx + 0x2c]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st
        fstp dword ptr [eax + 0xc]
        fld dword ptr [eax]
        fld dword ptr [edx + 0x30]
        fmul dword ptr [ecx + 0xc]
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x34]
        fmul dword ptr [ecx + 0xc]
        fsubp st(1), st
        fstp dword ptr [eax + 0x4]
        fld dword ptr [eax + 0x8]
        fld dword ptr [edx + 0x38]
        fmul dword ptr [ecx + 0xc]
        fsubp st(1), st
        mov edi, dword ptr [ebp - 0x14]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [eax + 0xc]
        fld dword ptr [edx + 0x3c]
        fmul dword ptr [ecx + 0xc]
        fsubp st(1), st
        fstp dword ptr [eax + 0xc]
        mov eax, dword ptr [ebp - 0x18]
    L_007FFAB1:
        add eax, 0x1
        cmp eax, dword ptr [ebp - 0x28]
        mov dword ptr [ebp - 0x18], eax
        jl L_007FF9B0
        mov ebx, dword ptr [ebp - 0x28]
        mov ecx, dword ptr [ebp - 0xc]
    L_007FFAC6:
        add dword ptr [ebp - 0x34], 0x4
        add edi, 0x1
        add ecx, 0x1
        cmp edi, esi
        mov dword ptr [ebp - 0x14], edi
        mov dword ptr [ebp - 0xc], ecx
        jl L_007FF992
    L_007FFADE:
        mov edx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [edx + 0x20]
        mov ecx, dword ptr [eax + 4*ecx]
        mov dword ptr [ebp - 0xc], ecx
        xor ecx, ecx
        test ebx, ebx
        mov dword ptr [ebp - 0x18], ecx
        jle L_007FFC17
    L_007FFAF7:
        mov edx, dword ptr [ebp - 0x30]
        mov eax, dword ptr [edx + 4*ecx]
        mov edx, eax
        sar edx, 0x2
        cmp edx, esi
        jg L_007FFC09
        imul eax, dword ptr [ebp + 0x18]
        mov ecx, dword ptr [ebp + 0x8]
        lea eax, [eax + 4*esi]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp - 0x34]
        add eax, eax
        add eax, eax
        mov dword ptr [ebp - 0x14], edx
        mov dword ptr [ebp - 0x10], 0x0
        mov ebx, 0x1
        mov ecx, edx
        mov dword ptr [ebp - 0x20], eax
        mov dword ptr [ebp - 0x2c], 0x3
        mov dword ptr [ebp - 0x1c], 0x4
    L_007FFB40:
        cmp dword ptr [ebp - 0x2c], 0x4
        mov eax, dword ptr [ebp - 0x8]
        mov eax, dword ptr [eax + 0x18]
        mov edi, dword ptr [ebp - 0x20]
        fld dword ptr [edi + eax]
        mov edi, ebx
        fmul dword ptr [ecx]
        fstp dword ptr [ecx]
        jl L_007FFBB8
        mov edx, dword ptr [ebp - 0x10]
        mov esi, dword ptr [ebp - 0xc]
        add edx, ebx
        lea edx, [esi + 4*edx]
        mov esi, ebx
        neg esi
        shr esi, 0x2
        add esi, 0x1
        lea eax, [ecx + 0xc]
        lea edi, [ebx + 4*esi]
    L_007FFB73:
        fld dword ptr [eax - 0x8]
        add edx, 0x10
        fld dword ptr [edx - 0x10]
        add eax, 0x10
        sub esi, 0x1
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax - 0x18]
        fld dword ptr [eax - 0x14]
        fld dword ptr [edx - 0xc]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax - 0x14]
        fld dword ptr [eax - 0x10]
        fld dword ptr [edx - 0x8]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax - 0x10]
        fld dword ptr [eax - 0xc]
        fld dword ptr [edx - 0x4]
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [eax - 0xc]
        jne L_007FFB73
        mov edx, dword ptr [ebp - 0x14]
        mov esi, dword ptr [ebp - 0x24]
    L_007FFBB8:
        cmp edi, 0x4
        jge L_007FFBE3
        mov eax, dword ptr [ebp - 0x10]
        mov esi, dword ptr [ebp - 0xc]
        add eax, edi
        lea eax, [esi + 4*eax]
    L_007FFBC8:
        fld dword ptr [edx + 4*edi]
        add edi, 0x1
        fld dword ptr [eax]
        add eax, 0x4
        cmp edi, 0x4
        fmul dword ptr [ecx]
        fsubp st(1), st
        fstp dword ptr [edx + 4*edi - 0x4]
        jl L_007FFBC8
        mov esi, dword ptr [ebp - 0x24]
    L_007FFBE3:
        mov edi, 0x1
        sub dword ptr [ebp - 0x2c], edi
        mov eax, 0x4
        add dword ptr [ebp - 0x10], eax
        add dword ptr [ebp - 0x20], eax
        add ebx, edi
        add ecx, eax
        sub dword ptr [ebp - 0x1c], edi
        jne L_007FFB40
        mov ecx, dword ptr [ebp - 0x18]
        mov ebx, dword ptr [ebp - 0x28]
    L_007FFC09:
        add ecx, 0x1
        cmp ecx, ebx
        mov dword ptr [ebp - 0x18], ecx
        jl L_007FFAF7
    L_007FFC17:
        mov ecx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [ecx + 0x14]
        add esi, 0x1
        cmp esi, eax
        mov dword ptr [ebp - 0x24], esi
        jl L_007FF97A
    L_007FFC2B:
        mov edx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [edx + 0x14]
        lea edi, [eax - 0x1]
        mov edx, edi
        imul edx, eax
        test edi, edi
        mov dword ptr [ebp - 0x40], edx
        mov dword ptr [ebp - 0x24], edi
        jl L_007FFEB0
        lea eax, [4*edi]
        mov dword ptr [ebp - 0x10], eax
        jmp L_007FFC56
    L_007FFC53:
        mov edx, dword ptr [ebp - 0x40]
    L_007FFC56:
        mov ecx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [ecx + 0x14]
        mov ebx, dword ptr [ebp - 0x34]
        sub eax, 0x1
        add edx, edi
        cmp eax, edi
        mov dword ptr [ebp - 0xc], edx
        jle L_007FFD63
        sub eax, edi
        mov dword ptr [ebp - 0x1c], eax
    L_007FFC74:
        mov eax, dword ptr [ebp - 0x8]
        mov ecx, dword ptr [eax + 0x20]
        mov ecx, dword ptr [ecx + 4*edx]
        test ecx, ecx
        je L_007FFD4D
        xor esi, esi
        cmp dword ptr [ebp - 0x28], esi
        jle L_007FFD4D
    L_007FFC90:
        mov edx, dword ptr [ebp - 0x30]
        mov eax, dword ptr [edx + 4*esi]
        imul eax, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp - 0x10]
        mov edi, dword ptr [ebp + 0x8]
        add edx, eax
        lea edx, [edi + 4*edx]
        add eax, ebx
        lea eax, [edi + 4*eax]
        fld dword ptr [edx]
        add esi, 0x1
        cmp esi, dword ptr [ebp - 0x28]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx + 0xc]
        faddp st(1), st
        fsubp st(1), st
        fstp dword ptr [edx]
        fld dword ptr [edx + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x14]
        fld dword ptr [eax]
        fmul dword ptr [ecx + 0x10]
        faddp st(1), st
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx + 0x1c]
        faddp st(1), st
        fsubp st(1), st
        fstp dword ptr [edx + 0x4]
        fld dword ptr [edx + 0x8]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x24]
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx + 0x2c]
        faddp st(1), st
        fsubp st(1), st
        fstp dword ptr [edx + 0x8]
        fld dword ptr [edx + 0xc]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x34]
        fld dword ptr [eax]
        fmul dword ptr [ecx + 0x30]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x38]
        faddp st(1), st
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx + 0x3c]
        faddp st(1), st
        fsubp st(1), st
        fstp dword ptr [edx + 0xc]
        jl L_007FFC90
        mov edx, dword ptr [ebp - 0xc]
        mov edi, dword ptr [ebp - 0x24]
    L_007FFD4D:
        mov eax, dword ptr [ebp - 0x8]
        sub edx, dword ptr [eax + 0x14]
        sub ebx, 0x4
        sub dword ptr [ebp - 0x1c], 0x1
        mov dword ptr [ebp - 0xc], edx
        jne L_007FFC74
    L_007FFD63:
        mov ecx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [ecx + 0x20]
        mov ecx, dword ptr [eax + 4*edx]
        xor eax, eax
        cmp dword ptr [ebp - 0x28], eax
        mov dword ptr [ebp - 0xc], ecx
        mov dword ptr [ebp - 0x18], eax
        jle L_007FFE9E
        lea edx, [4*ebx + 0xc]
        mov dword ptr [ebp - 0x44], edx
    L_007FFD87:
        mov ecx, dword ptr [ebp - 0x30]
        mov edx, dword ptr [ecx + 4*eax]
        imul edx, dword ptr [ebp + 0x18]
        add edx, dword ptr [ebp - 0x10]
        mov eax, dword ptr [ebp + 0x8]
        lea eax, [eax + 4*edx]
        mov edx, dword ptr [ebp - 0x44]
        mov ecx, 0xc
        mov ebx, 0x4
        mov dword ptr [ebp - 0x14], eax
        mov dword ptr [ebp - 0x1c], ecx
        add eax, ecx
        mov dword ptr [ebp - 0x2c], edx
        mov dword ptr [ebp - 0x20], 0x0
        mov dword ptr [ebp - 0x3c], ebx
    L_007FFDBC:
        cmp dword ptr [ebp - 0x20], 0x4
        mov edi, ebx
        jl L_007FFE2A
        mov esi, dword ptr [ebp - 0xc]
        add ecx, ebx
        lea ecx, [esi + 4*ecx]
        mov esi, ebx
        neg esi
        shr esi, 0x2
        add esi, 0x1
        lea edx, [eax + 0xc]
        lea edi, [ebx + 4*esi]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_007FFDE0:
        fld dword ptr [eax]
        add ecx, 0x10
        fld dword ptr [edx - 0x8]
        add edx, 0x10
        sub esi, 0x1
        fmul dword ptr [ecx - 0x10]
        fsubp st(1), st
        fstp dword ptr [ebp - 0x38]
        fld dword ptr [ebp - 0x38]
        fst dword ptr [eax]
        fld dword ptr [ecx - 0xc]
        fmul dword ptr [edx - 0x14]
        fsubp st(1), st
        fstp dword ptr [ebp - 0x38]
        fld dword ptr [ebp - 0x38]
        fst dword ptr [eax]
        fld dword ptr [ecx - 0x8]
        fmul dword ptr [edx - 0x10]
        fsubp st(1), st
        fstp dword ptr [ebp - 0x38]
        fld dword ptr [ebp - 0x38]
        fst dword ptr [eax]
        fld dword ptr [ecx - 0x4]
        fmul dword ptr [edx - 0xc]
        fsubp st(1), st
        fstp dword ptr [eax]
        jne L_007FFDE0
        mov ecx, dword ptr [ebp - 0x1c]
    L_007FFE2A:
        cmp edi, 0x4
        jge L_007FFE58
        mov esi, dword ptr [ebp - 0xc]
        lea edx, [ecx + edi]
        lea edx, [esi + 4*edx]
        mov esi, dword ptr [ebp - 0x14]
        jmp L_007FFE40
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_007FFE40:
        fld dword ptr [eax]
        add edi, 0x1
        fld dword ptr [esi + 4*edi - 0x4]
        add edx, 0x4
        cmp edi, 0x4
        fmul dword ptr [edx - 0x4]
        fsubp st(1), st
        fstp dword ptr [eax]
        jl L_007FFE40
    L_007FFE58:
        mov edx, dword ptr [ebp - 0x8]
        mov esi, dword ptr [edx + 0x18]
        mov edx, dword ptr [ebp - 0x2c]
        fld dword ptr [edx + esi]
        mov esi, 0x1
        fmul dword ptr [eax]
        add dword ptr [ebp - 0x20], esi
        sub ecx, 0x4
        sub edx, 0x4
        fstp dword ptr [eax]
        sub ebx, esi
        sub eax, 0x4
        sub dword ptr [ebp - 0x3c], esi
        mov dword ptr [ebp - 0x1c], ecx
        mov dword ptr [ebp - 0x2c], edx
        jne L_007FFDBC
        mov eax, dword ptr [ebp - 0x18]
        add eax, esi
        cmp eax, dword ptr [ebp - 0x28]
        mov dword ptr [ebp - 0x18], eax
        jl L_007FFD87
        mov edi, dword ptr [ebp - 0x24]
    L_007FFE9E:
        sub dword ptr [ebp - 0x10], 0x4
        sub edi, 0x1
        test edi, edi
        mov dword ptr [ebp - 0x24], edi
        jge L_007FFC53
    L_007FFEB0:
        lea esp, [ebp - 0x50]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0x4]
        xor ecx, ebp
        call ext_006A745E
        mov esp, ebp
        pop ebp
        ret 0x14
    }
}

// [0x007FFED0] keaMatrix_pcSparse_vanilla::vfunc_1 (1615 bytes)
extern "C" __declspec(naked) void __fastcall fn_007FFED0(void* self) {
    __asm {
        sub esp, 0x50
        mov eax, dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x58]
        push ebx
        mov ebx, dword ptr [ecx + 0x24]
        push ebp
        mov ebp, dword ptr [ecx + 0x14]
        push esi
        push edi
        mov dword ptr [esp + 0x38], eax
        mov eax, dword ptr [ecx + 0x28]
        xor edi, edi
        xor esi, esi
        test ebp, ebp
        mov dword ptr [esp + 0x2c], ecx
        mov dword ptr [esp + 0x34], edx
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x68], eax
        mov dword ptr [esp + 0x44], edi
        mov dword ptr [esp + 0x14], esi
        jle L_8003d6

        mov edx, dword ptr [esp + 0x6c]
        fldz
        mov dword ptr [esp + 0x18], edx
    L_7fff1a:
        mov edx, dword ptr [esp + 0x70]
        mov eax, dword ptr [esp + 0x64]
        mov dword ptr [esp + 0x20], edx
        sub ebp, 0x1
        xor edx, edx
        test edi, edi
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x4c], ebp
        mov dword ptr [esp + 0x30], 0xfffffff
        mov dword ptr [esp + 0x28], edx
        jl L_80039a

        mov ecx, dword ptr [esp + 0x68]
        add ecx, 0x8
    L_7fff4e:
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esp + 0x6c]
        mov eax, dword ptr [eax + 4*edx]
        mov edx, dword ptr [esp + 0x18]
        mov edx, dword ptr [edx]
        mov dword ptr [esp + 0x3c], edx
        xor edx, edx
        test eax, eax
        jle L_800346

        mov ebx, dword ptr [esp + 0x24]
        add ebx, 0x20
        mov dword ptr [esp + 0x40], eax
    L_7fff7c:
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [eax]
        cmp edi, -0x1
        mov dword ptr [esp + 0x48], edi
        je L_8002b0

        xor ebp, ebp
        cmp dword ptr [esp + 0x3c], ebp
        jle L_8002b0

        mov eax, dword ptr [esp + 0x34]
        add eax, 0x8
    L_7fffa2:
        mov esi, dword ptr [esp + 0x38]
        cmp edi, dword ptr [esi + 4*ebp]
        jne L_80029c

        test edx, edx
        mov edi, 0x4
        je L_800130

        mov edx, ecx
        mov esi, ebx
    L_7fffc0:
        fld dword ptr [esi - 0x20]
        fld dword ptr [eax - 0x8]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax - 0x4]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x4]
        fadd st, st(1)
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esi - 0x10]
        fld dword ptr [eax + 0x8]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0xc]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x10]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x14]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esi]
        fld dword ptr [eax + 0x18]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x1c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x20]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x24]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esi + 0x10]
        fld dword ptr [eax + 0x28]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x2c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x30]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x34]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esi + 0x20]
        fld dword ptr [eax + 0x38]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x3c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x40]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x44]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esi + 0x30]
        fld dword ptr [eax + 0x48]
        add esi, 0x4
        fmul st, st(1)
        add edx, 0x10
        sub edi, 0x1
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x4c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x50]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x54]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx - 0x18]
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [edx - 0x18]
        fld dword ptr [esp + 0x54]
        fadd dword ptr [edx - 0x14]
        fstp dword ptr [edx - 0x14]
        fld dword ptr [edx - 0x10]
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [edx - 0x10]
        fld dword ptr [edx - 0xc]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [edx - 0xc]
        jne L_7fffc0
        jmp L_800293

    L_800130:
        mov esi, ecx
        mov edx, ebx
    L_800134:
        fld dword ptr [edx - 0x20]
        fld dword ptr [eax - 0x8]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax - 0x4]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x4]
        fadd st, st(1)
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx - 0x10]
        fld dword ptr [eax + 0x8]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0xc]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x10]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x14]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx]
        fld dword ptr [eax + 0x18]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x1c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x20]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x24]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx + 0x10]
        fld dword ptr [eax + 0x28]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x2c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x30]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x34]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx + 0x20]
        fld dword ptr [eax + 0x38]
        fmul st, st(1)
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x3c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x40]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x44]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edx + 0x30]
        fld dword ptr [eax + 0x48]
        add edx, 0x4
        fmul st, st(1)
        add esi, 0x10
        sub edi, 0x1
        fadd dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x4c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x50]
        fmul st, st(1)
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        fmul dword ptr [eax + 0x54]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esi - 0x18]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esi - 0x14]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esi - 0x10]
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esi - 0xc]
        jne L_800134

    L_800293:
        mov edi, dword ptr [esp + 0x48]
        mov edx, 0x1
    L_80029c:
        add ebp, 0x1
        add eax, 0x60
        cmp ebp, dword ptr [esp + 0x3c]
        jl L_7fffa2

        mov esi, dword ptr [esp + 0x14]
    L_8002b0:
        add dword ptr [esp + 0x1c], 0x4
        add ebx, 0x60
        sub dword ptr [esp + 0x40], 0x1
        jne L_7fff7c

        test edx, edx
        mov ebx, dword ptr [esp + 0x10]
        je L_800346

        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [eax + 0x1c]
        mov ebp, dword ptr [esp + 0x68]
        mov dword ptr [edx + 4*esi], ebx
        mov eax, dword ptr [eax + 0x20]
        mov dword ptr [eax + 4*esi], ebp
        mov esi, ebp
        lea edx, [ecx + 0x4]
        lea eax, [ebx + 0x4]
        sub esi, ebx
        mov edi, 0x4
    L_8002ee:
        fld dword ptr [edx - 0xc]
        add eax, 0x10
        fstp dword ptr [eax - 0x14]
        add edx, 0x10
        sub edi, 0x1
        fld dword ptr [esi + eax - 0x10]
        fstp dword ptr [eax - 0x10]
        fld dword ptr [edx - 0x14]
        fstp dword ptr [eax - 0xc]
        fld dword ptr [edx - 0x10]
        fstp dword ptr [eax - 0x8]
        jne L_8002ee

        mov esi, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x28]
        mov eax, esi
        sub eax, edx
        sar eax, 0x1f
        mov edi, eax
        not edi
        and eax, esi
        mov esi, dword ptr [esp + 0x14]
        add ebx, 0x40
        add ebp, 0x40
        and edi, edx
        add ecx, 0x40
        add edi, eax
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x68], ebp
        mov dword ptr [esp + 0x30], edi
        jmp L_80035e

    L_800346:
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [edx + 4*esi], 0x0
        mov eax, dword ptr [eax + 0x20]
        mov dword ptr [eax + 4*esi], 0x0
    L_80035e:
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x6c]
        mov eax, dword ptr [eax + 4*edx]
        mov edi, dword ptr [esp + 0x44]
        add dword ptr [esp + 0x20], 0x20
        lea eax, [eax + 2*eax]
        shl eax, 0x5
        add dword ptr [esp + 0x24], eax
        add edx, 0x1
        add esi, 0x1
        cmp edx, edi
        mov dword ptr [esp + 0x28], edx
        mov dword ptr [esp + 0x14], esi
        jle L_7fff4e

        mov ecx, dword ptr [esp + 0x2c]
        mov ebp, dword ptr [esp + 0x4c]
    L_80039a:
        mov edx, dword ptr [ecx + 0x30]
        mov eax, dword ptr [esp + 0x30]
        add dword ptr [esp + 0x38], 0x20
        mov dword ptr [edx + 4*edi], eax
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx]
        add dword ptr [esp + 0x18], 0x4
        lea eax, [eax + 2*eax]
        shl eax, 0x5
        add dword ptr [esp + 0x34], eax
        add edi, 0x1
        add esi, ebp
        cmp edi, dword ptr [ecx + 0x14]
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x44], edi
        jl L_7fff1a

        fstp st(0)
    L_8003d6:
        mov edx, dword ptr [esp + 0x68]
        xor esi, esi
        cmp dword ptr [ecx + 0x14], esi
        mov dword ptr [ecx + 0x24], ebx
        mov dword ptr [ecx + 0x28], edx
        jle L_800492

        mov eax, dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x7c]
        fld dword ptr [esp + 0x78]
        add eax, 0x8
    L_8003fa:
        mov edx, dword ptr [ecx + 0x14]
        fld dword ptr [eax - 0x8]
        fmul st, st(2)
        mov edi, dword ptr [ecx + 0x1c]
        mov ebx, dword ptr [ecx + 0x20]
        add edx, 0x1
        fadd st, st(1)
        imul edx, esi
        add edx, edx
        add edx, edx
        mov edi, dword ptr [edx + edi]
        mov edx, dword ptr [edx + ebx]
        add esi, 0x1
        fadd dword ptr [edi]
        add eax, 0x10
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x68], edx
        fstp dword ptr [edi]
        fld dword ptr [eax - 0x18]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edx]
        fstp dword ptr [edx]
        fld dword ptr [eax - 0x14]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edi + 0x14]
        fstp dword ptr [edi + 0x14]
        fld dword ptr [eax - 0x14]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edx + 0x14]
        fstp dword ptr [edx + 0x14]
        fld dword ptr [eax - 0x10]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edi + 0x28]
        fstp dword ptr [edi + 0x28]
        fld dword ptr [eax - 0x10]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edx + 0x28]
        fstp dword ptr [edx + 0x28]
        fld dword ptr [eax - 0xc]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edi + 0x3c]
        fstp dword ptr [edi + 0x3c]
        fld dword ptr [eax - 0xc]
        fmul st, st(2)
        fadd st, st(1)
        fadd dword ptr [edx + 0x3c]
        fstp dword ptr [edx + 0x3c]
        cmp esi, dword ptr [ecx + 0x14]
        jl L_8003fa

        fstp st(1)
        fstp st(0)
    L_800492:
        mov eax, dword ptr [ecx + 0x4]
        sub eax, 0x1
        and eax, 0x3
        add eax, 0x1
        cmp eax, 0x4
        lea edx, [eax + 4*eax]
        jge L_8004cc

        mov esi, dword ptr [esp + 0x68]
        fld1
        mov edi, dword ptr [esp + 0x10]
        lea edx, [esi + 4*edx]
        sub edi, esi
        mov esi, 0x4
        sub esi, eax
    L_8004bc:
        fst dword ptr [edi + edx]
        add edx, 0x14
        sub esi, 0x1
        fst dword ptr [edx - 0x14]
        jne L_8004bc
        fstp st(0)
    L_8004cc:
        xor ebp, ebp
        xor esi, esi
        cmp dword ptr [ecx + 0x14], ebp
        jle L_800515

        mov ebx, dword ptr [ecx + 0x14]
    L_8004d8:
        mov eax, dword ptr [ecx + 0x14]
        cmp esi, eax
        mov edx, esi
        jge L_800505

        lea edi, [4*eax]
        lea eax, [edi + 0x4]
        imul eax, esi
        add eax, dword ptr [ecx + 0x1c]
    L_8004f1:
        cmp dword ptr [eax], 0x0
        je L_8004fc
        cmp edx, ebp
        jle L_8004fc
        mov ebp, edx
    L_8004fc:
        add edx, 0x1
        add eax, edi
        cmp edx, ebx
        jl L_8004f1
    L_800505:
        mov eax, dword ptr [ecx + 0x2c]
        mov dword ptr [eax + 4*esi], ebp
        mov ebx, dword ptr [ecx + 0x14]
        add esi, 0x1
        cmp esi, ebx
        jl L_8004d8
    L_800515:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 0x1c
    }
}
