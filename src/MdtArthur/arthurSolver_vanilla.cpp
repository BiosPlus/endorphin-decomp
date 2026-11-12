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
