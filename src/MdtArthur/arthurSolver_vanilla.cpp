// Decompiled translation unit: src/MdtArthur/arthurSolver_vanilla.cpp

extern "C" void ext_007F36C0();

// [0x007F3740] MdtArthur::arthurSolver_vanilla::vfunc_1 (304 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F3740(void* self) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp + 10h]
        cdq
        and edx, 3
        push edi
        xor edi, edi
        add eax, edx
        sar eax, 2
        mov dword ptr [esp + 4], edi
        mov dword ptr [esp + 8], eax
        je L_exit
        mov eax, dword ptr [esp + 0a8h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0a0h]
        push esi
        mov esi, dword ptr [esp + 1ch]
        sub eax, esi
        mov dword ptr [esp + 1ch], eax
        jmp L_loop_entry

        _emit 0x8b
        _emit 0xff
    L_loop_body:
        mov edi, dword ptr [esp + 10h]
    L_loop_entry:
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esp + 0a0h]
        mov ecx, dword ptr [esp + 5ch]
        imul eax, edx
        mov ebx, dword ptr [ebp + 2ch]
        add eax, edi
        mov eax, dword ptr [ecx + eax*4]
        mov ecx, dword ptr [esp + 68h]
        add eax, dword ptr [ecx + edx*4]
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [esp + 0a0h]
        imul eax, ebx
        add eax, edi
        mov edi, dword ptr [esp + 5ch]
        mov eax, dword ptr [edi + eax*4]
        mov edi, dword ptr [esp + 68h]
        add eax, dword ptr [edi + ebx*4]
        shl ecx, 5
        add ecx, dword ptr [esp + 28h]
        lea edi, [eax + eax*2]
        xor eax, eax
        shl edi, 5
        add edi, dword ptr [esp + 28h]
        cmp edx, -1
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], eax
        je L_skip1
        push eax
        push ecx
        push ebp
        push esi
        call ext_007F36C0
        add esp, 10h
    L_skip1:
        cmp ebx, -1
        je L_skip2
        push 1
        push edi
        push ebp
        push esi
        call ext_007F36C0
        add esp, 10h
    L_skip2:
        mov eax, esi
        mov ecx, 4
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_fpu_loop1:
        mov edx, dword ptr [esp + 1ch]
        fld dword ptr [edx + eax]
        add eax, 4
        sub ecx, 1
        fmul dword ptr [esp + 0c4h]
        fadd dword ptr [esp + 0c0h]
        fadd dword ptr [eax - 4]
        fstp dword ptr [eax - 4]
        jne L_fpu_loop1
        mov ecx, 4
    L_fpu_loop2:
        fld dword ptr [esi]
        add esi, 4
        sub ecx, 1
        fld1
        fdivrp st(1), st
        fstp dword ptr [esi - 4]
        jne L_fpu_loop2
        mov ecx, dword ptr [esp + 10h]
        add ecx, 1
        add ebp, 100h
        cmp ecx, dword ptr [esp + 14h]
        mov dword ptr [esp + 10h], ecx
        mov esi, eax
        jne L_loop_body
        pop esi
        pop ebp
        pop ebx
    L_exit:
        pop edi
        add esp, 8
        ret 0ach
    }
}

// [0x007F2AC0] MdtArthur::arthurSolver_vanilla::vfunc_0 (1212 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F2AC0(void* self) {
    __asm {
        sub esp, 030h
        fld dword ptr [esp + 0f8h]
        mov eax, dword ptr [esp + 068h]
        fld1
        mov dword ptr [esp], eax
        mov eax, dword ptr [esp + 038h]
        fdivrp st(1), st
        cdq
        push ebx
        and edx, 03h
        push ebp
        add eax, edx
        mov ebp, eax
        mov eax, dword ptr [esp + 03ch]
        push esi
        sar ebp, 02h
        push edi
        mov dword ptr [esp + 018h], ebp
        fstp dword ptr [esp + 01ch]
        je L_7F2B13
        fldz
        lea ecx, [eax + 08h]
        mov edx, ebp
    L_7F2AFD:
        fst dword ptr [ecx - 08h]
        add ecx, 010h
        sub edx, 01h
        fst dword ptr [ecx - 014h]
        fst dword ptr [ecx - 010h]
        fst dword ptr [ecx - 0ch]
        jne L_7F2AFD
        fstp st(0)
    L_7F2B13:
        mov ecx, dword ptr [esp + 0c0h]
        test ecx, ecx
        mov dword ptr [esp + 0108h], 0
        je L_7F2E6F
        mov ebx, dword ptr [esp + 0fch]
        fldz
        mov edi, dword ptr [esp + 09ch]
        mov edx, dword ptr [esp + 0f0h]
        mov dword ptr [esp + 014h], edi
        add ebx, 08h
        mov dword ptr [esp + 0fch], ecx
    L_7F2B52:
        xor esi, esi
        cmp dword ptr [edi], esi
        mov dword ptr [esp + 0f0h], esi
        je L_7F2E45
        mov ecx, dword ptr [esp + 0108h]
        mov edi, dword ptr [esp + 050h]
        lea ecx, [ecx + 2 * ecx]
        shl ecx, 05h
        lea ecx, [ecx + edi + 08h]
    L_7F2B78:
        fld dword ptr [ebx - 08h]
        mov edi, dword ptr [esp + 010h]
        fld dword ptr [ecx - 08h]
        mov esi, dword ptr [edi + 4 * esi]
        fmul st, st(1)
        shl esi, 04h
        add esi, eax
        lea eax, [ecx + 02ch]
        fadd st, st(2)
        fstp dword ptr [esp + 020h]
        fld dword ptr [ecx - 04h]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 024h]
        fld dword ptr [ecx]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 028h]
        fmul dword ptr [ecx + 04h]
        fadd st, st(1)
        fstp dword ptr [esp + 02ch]
        fld dword ptr [ebx - 04h]
        fld dword ptr [ecx + 08h]
        fmul st, st(1)
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esp + 020h]
        fld dword ptr [ecx + 0ch]
        fmul st, st(1)
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esp + 024h]
        fld dword ptr [ecx + 010h]
        fmul st, st(1)
        fadd dword ptr [esp + 028h]
        fstp dword ptr [esp + 028h]
        fmul dword ptr [ecx + 014h]
        fadd dword ptr [esp + 02ch]
        fstp dword ptr [esp + 02ch]
        fld dword ptr [ebx]
        fld dword ptr [ecx + 018h]
        fmul st, st(1)
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esp + 020h]
        fld dword ptr [ecx + 01ch]
        fmul st, st(1)
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esp + 024h]
        fld dword ptr [ecx + 020h]
        fmul st, st(1)
        fadd dword ptr [esp + 028h]
        fstp dword ptr [esp + 028h]
        fmul dword ptr [ecx + 024h]
        fadd dword ptr [esp + 02ch]
        fstp dword ptr [esp + 02ch]
        fld dword ptr [ebx + 08h]
        fld dword ptr [ecx + 028h]
        fmul st, st(1)
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esp + 020h]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esp + 024h]
        fld dword ptr [ecx + 030h]
        fmul st, st(1)
        fadd dword ptr [esp + 028h]
        fstp dword ptr [esp + 028h]
        fmul dword ptr [ecx + 034h]
        fadd dword ptr [esp + 02ch]
        fstp dword ptr [esp + 02ch]
        fld dword ptr [ebx + 0ch]
        fld dword ptr [ecx + 038h]
        fmul st, st(1)
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esp + 020h]
        fld dword ptr [ecx + 03ch]
        fmul st, st(1)
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esp + 024h]
        fld dword ptr [ecx + 040h]
        fmul st, st(1)
        fadd dword ptr [esp + 028h]
        fstp dword ptr [esp + 028h]
        lea edi, [edx + 020h]
        mov ebp, 03h
        fmul dword ptr [ecx + 044h]
        fadd dword ptr [esp + 02ch]
        fstp dword ptr [esp + 02ch]
        fld dword ptr [ebx + 010h]
        fld dword ptr [ecx + 048h]
        fmul st, st(1)
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esp + 020h]
        fld dword ptr [ecx + 04ch]
        fmul st, st(1)
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esp + 024h]
        fld dword ptr [ecx + 050h]
        fmul st, st(1)
        fadd dword ptr [esp + 028h]
        fstp dword ptr [esp + 028h]
        fmul dword ptr [ecx + 054h]
        fadd dword ptr [esp + 02ch]
        fstp dword ptr [esp + 02ch]
        fld dword ptr [esi]
        fadd dword ptr [esp + 020h]
        fstp dword ptr [esi]
        fld dword ptr [esi + 04h]
        fadd dword ptr [esp + 024h]
        fstp dword ptr [esi + 04h]
        fld dword ptr [esp + 028h]
        fadd dword ptr [esi + 08h]
        fstp dword ptr [esi + 08h]
        fld dword ptr [esi + 0ch]
        fadd dword ptr [esp + 02ch]
        fstp dword ptr [esi + 0ch]
        mov esi, eax
        fld dword ptr [ecx - 08h]
        fmul dword ptr [edx + 0ch]
        fstp dword ptr [ecx - 08h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx - 04h]
        fstp dword ptr [ecx - 04h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx]
        fstp dword ptr [ecx]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 04h]
        fstp dword ptr [ecx + 04h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 08h]
        fstp dword ptr [ecx + 08h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 0ch]
        fstp dword ptr [ecx + 0ch]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 010h]
        fstp dword ptr [ecx + 010h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 014h]
        fstp dword ptr [ecx + 014h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 018h]
        fstp dword ptr [ecx + 018h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 01ch]
        fstp dword ptr [ecx + 01ch]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 020h]
        fstp dword ptr [ecx + 020h]
        fld dword ptr [edx + 0ch]
        fmul dword ptr [ecx + 024h]
        fstp dword ptr [ecx + 024h]
    L_7F2D54:
        fld dword ptr [edi - 020h]
        add edi, 04h
        fld dword ptr [ecx + 028h]
        add esi, 010h
        sub ebp, 01h
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 030h]
        fld dword ptr [eax]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 034h]
        fld dword ptr [ecx + 030h]
        fmul st, st(1)
        fadd st, st(2)
        fstp dword ptr [esp + 038h]
        fmul dword ptr [ecx + 034h]
        fadd st, st(1)
        fstp dword ptr [esp + 03ch]
        fld dword ptr [edi - 014h]
        fld dword ptr [ecx + 038h]
        fmul st, st(1)
        fadd dword ptr [esp + 030h]
        fstp dword ptr [esp + 030h]
        fld dword ptr [ecx + 03ch]
        fmul st, st(1)
        fadd dword ptr [esp + 034h]
        fstp dword ptr [esp + 034h]
        fld dword ptr [ecx + 040h]
        fmul st, st(1)
        fadd dword ptr [esp + 038h]
        fstp dword ptr [esp + 038h]
        fmul dword ptr [ecx + 044h]
        fadd dword ptr [esp + 03ch]
        fstp dword ptr [esp + 03ch]
        fld dword ptr [edi - 04h]
        fld dword ptr [ecx + 048h]
        fmul st, st(1)
        fadd dword ptr [esp + 030h]
        fstp dword ptr [esp + 030h]
        fld dword ptr [ecx + 04ch]
        fmul st, st(1)
        fadd dword ptr [esp + 034h]
        fstp dword ptr [esp + 034h]
        fld dword ptr [ecx + 050h]
        fmul st, st(1)
        fadd dword ptr [esp + 038h]
        fstp dword ptr [esp + 038h]
        fmul dword ptr [ecx + 054h]
        fadd dword ptr [esp + 03ch]
        fstp dword ptr [esp + 03ch]
        fld dword ptr [esp + 030h]
        fstp dword ptr [esi - 014h]
        fld dword ptr [esp + 034h]
        fstp dword ptr [esi - 010h]
        fld dword ptr [esp + 038h]
        fstp dword ptr [esi - 0ch]
        fld dword ptr [esp + 03ch]
        fstp dword ptr [esi - 08h]
        jne L_7F2D54
        mov esi, dword ptr [esp + 0f0h]
        mov edi, dword ptr [esp + 014h]
        add dword ptr [esp + 0108h], 01h
        mov eax, dword ptr [esp + 044h]
        add esi, 01h
        add ecx, 060h
        cmp esi, dword ptr [edi]
        mov dword ptr [esp + 0f0h], esi
        jne L_7F2B78
        mov ebp, dword ptr [esp + 018h]
    L_7F2E45:
        mov ecx, dword ptr [edi]
        mov esi, dword ptr [esp + 010h]
        add edi, 04h
        lea ecx, [esi + 4 * ecx]
        add ebx, 020h
        add edx, 030h
        sub dword ptr [esp + 0fch], 01h
        mov dword ptr [esp + 010h], ecx
        mov dword ptr [esp + 014h], edi
        jne L_7F2B52
        fstp st(0)
    L_7F2E6F:
        test ebp, ebp
        je L_7F2F72
        mov ebx, dword ptr [esp + 0cch]
        fld dword ptr [esp + 010ch]
        mov ebp, dword ptr [esp + 0d8h]
        fld dword ptr [esp + 01ch]
        mov esi, dword ptr [esp + 0e4h]
        mov edi, ebp
        sub edi, ebx
        mov dword ptr [esp + 010ch], edi
        mov edi, dword ptr [esp + 0e4h]
        sub edi, ebx
        mov dword ptr [esp + 044h], edi
        lea ecx, [ebx + 04h]
        mov edi, eax
        sub edi, ebx
        mov ebx, dword ptr [esp + 0e4h]
        sub ebx, eax
        mov dword ptr [esp + 0f0h], ebx
        lea edx, [eax + 08h]
        mov eax, dword ptr [esp + 018h]
        mov ebx, ebp
        add esi, 0ch
        sub ebx, dword ptr [esp + 0e4h]
        mov dword ptr [esp + 0108h], eax
    L_7F2EE0:
        fld dword ptr [ebp]
        mov eax, dword ptr [esp + 010ch]
        fld dword ptr [ecx - 04h]
        add ebp, 010h
        fadd st, st(3)
        add ecx, 010h
        add esi, 010h
        fmul dword ptr [esi - 01ch]
        fmul st, st(2)
        fsubp st(1), st
        fmul st, st(1)
        fsub dword ptr [edx - 08h]
        fstp dword ptr [edx - 08h]
        fld dword ptr [ecx + eax - 010h]
        mov eax, dword ptr [esp + 044h]
        fld dword ptr [ecx - 010h]
        fadd st, st(3)
        fmul dword ptr [ecx + eax - 010h]
        mov eax, dword ptr [esp + 0f0h]
        add eax, edx
        add edx, 010h
        sub dword ptr [esp + 0108h], 01h
        fmul st, st(2)
        fsubp st(1), st
        fmul st, st(1)
        fsub dword ptr [ecx + edi - 010h]
        fstp dword ptr [ecx + edi - 010h]
        fld dword ptr [eax + ebx]
        fld dword ptr [ecx - 0ch]
        fadd st, st(3)
        fmul dword ptr [eax]
        fmul st, st(2)
        fsubp st(1), st
        fmul st, st(1)
        fsub dword ptr [edx - 010h]
        fstp dword ptr [edx - 010h]
        fld dword ptr [esi + ebx - 010h]
        fld dword ptr [ecx - 08h]
        fadd st, st(3)
        fmul dword ptr [esi - 010h]
        fmul st, st(2)
        fsubp st(1), st
        fmul st, st(1)
        fsub dword ptr [edx - 0ch]
        fstp dword ptr [edx - 0ch]
        jne L_7F2EE0
        fstp st(0)
        fstp st(0)
    L_7F2F72:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 030h
        ret 0cch
    }
}
