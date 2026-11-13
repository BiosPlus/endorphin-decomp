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
