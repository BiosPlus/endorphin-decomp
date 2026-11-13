// Decompiled translation unit: src/MdtArthur/arthurSolver_sse.cpp

extern "C" void ext_007F36C0();

// [0x007F4330] MdtArthur::arthurSolver_sse::vfunc_1 (400 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F4330(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x10
        sub esp, 0xc4
        mov edx, dword ptr [ebp + 0x94]
        mov ecx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
        movss xmm0, dword ptr [ebp + 0xb0]
        mov dword ptr [esp + 0x18], edx
        mov edx, dword ptr [ebp + 0x9c]
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        push esi
        mov dword ptr [esp + 0x24], ecx
        push edi
        mov dword ptr [esp + 0x2c], edx
        mov edx, dword ptr [ebp + 0xa4]
        mov ecx, 0x1f
        lea esi, [ebp + 0x14]
        lea edi, [esp + 0x50]
        rep movsd
        mov ecx, dword ptr [ebp + 0x98]
        mov esi, dword ptr [ebp + 0x90]
        mov dword ptr [esp + 0x24], edx
        mov edx, dword ptr [ebp + 0xa8]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [ebp + 0xa0]
        mov dword ptr [esp + 0x28], edx
        cdq
        and edx, 3
        shufps xmm0, xmm0, 0
        movaps xmm2, xmm0
        movss xmm0, dword ptr [ebp + 0xac]
        add eax, edx
        xor edi, edi
        sar eax, 2
        shufps xmm0, xmm0, 0
        movaps xmm3, xmm0
        mov dword ptr [esp + 0x3c], eax
        je done
        sub ecx, ebx
        xorps xmm4, xmm4
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x40], ecx
        jmp loop_cond
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_cond:
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, -1
        mov ebx, dword ptr [esi + 0x2c]
        movaps xmmword ptr [esp + 0x20], xmm4
        je skip_a
        mov eax, dword ptr [esp + 0xc8]
        mov edx, dword ptr [esp + 0x84]
        imul eax, ecx
        add eax, edi
        mov eax, dword ptr [edx + 4*eax]
        mov edx, dword ptr [esp + 0x90]
        add eax, dword ptr [edx + 4*ecx]
        push 0
        lea eax, [eax + 2*eax]
        shl eax, 5
        add eax, dword ptr [esp + 0x54]
        lea ecx, [esp + 0x24]
        push eax
        push esi
        push ecx
        call ext_007F36C0
        add esp, 0x10
skip_a:
        cmp ebx, -1
        je skip_b
        mov edx, dword ptr [esp + 0xc8]
        mov eax, dword ptr [esp + 0x84]
        imul edx, ebx
        mov ecx, dword ptr [esp + 0x90]
        add edx, edi
        mov eax, dword ptr [eax + 4*edx]
        add eax, dword ptr [ecx + 4*ebx]
        push 1
        lea edx, [eax + 2*eax]
        shl edx, 5
        add edx, dword ptr [esp + 0x54]
        lea eax, [esp + 0x24]
        push edx
        push esi
        push eax
        call ext_007F36C0
        add esp, 0x10
skip_b:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x40]
        movaps xmm0, xmmword ptr [ecx + eax]
        movaps xmm1, xmmword ptr [esp + 0x20]
        mulps xmm0, xmm2
        addps xmm0, xmm3
        addps xmm0, xmm1
        rcpps xmm1, xmm0
        movaps xmm5, xmm1
        mulps xmm5, xmm0
        movaps xmm0, xmm1
        mulps xmm5, xmm1
        addps xmm0, xmm1
        subps xmm0, xmm5
        movaps xmmword ptr [eax], xmm0
        add edi, 1
        add eax, 0x10
        add esi, 0x100
        cmp edi, dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x10], eax
        jne loop_cond
done:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xac
    }
}

// [0x007F3BA0] MdtArthur::arthurSolver_sse::vfunc_0 (854 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F3BA0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x10
        sub esp, 0x104
        push ebx
        push esi
        push edi
        mov edx, dword ptr [ebp + 0x90]
        mov ecx, dword ptr [ebp + 0x10]
        mov dword ptr [esp + 0x40], edx
        mov edx, dword ptr [ebp + 0x98]
        mov dword ptr [esp + 0x48], edx
        mov edx, dword ptr [ebp + 0xa0]
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [esp + 0x34], edx
        mov edx, dword ptr [ebp + 0xac]
        mov dword ptr [esp + 0x24], edx
        mov edx, dword ptr [ebp + 0xb0]
        mov dword ptr [esp + 0x28], edx
        mov edx, dword ptr [ebp + 0xb8]
        mov dword ptr [esp + 0xf4], edx
        mov edx, dword ptr [ebp + 0xbc]
        mov dword ptr [esp + 0xf8], edx
        mov edx, dword ptr [ebp + 0xc0]
        mov dword ptr [esp + 0xf0], edx
        mov edx, dword ptr [ebp + 0xc4]
        mov ebx, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0x58], ecx
        mov dword ptr [esp + 0xf4], edx
        mov edx, dword ptr [ebp + 0xc8]
        mov ecx, 0x1f
        lea esi, [ebp + 0x14]
        lea edi, [esp + 0x70]
        rep movsd
        mov ecx, dword ptr [ebp + 0x94]
        mov esi, dword ptr [ebp + 0xb4]
        mov dword ptr [esp + 0xf8], edx
        mov edx, dword ptr [esp + 0x98]
        mov dword ptr [esp + 0x44], ecx
        mov ecx, dword ptr [ebp + 0x9c]
        mov dword ptr [esp + 0x10], edx
        cdq
        mov dword ptr [esp + 0x30], ecx
        mov ecx, dword ptr [ebp + 0xa4]
        and edx, 3
        add eax, edx
        mov dword ptr [esp + 0x38], ecx
        mov ecx, dword ptr [ebp + 0xa8]
        sar eax, 2
        mov dword ptr [esp + 0x50], ebx
        mov dword ptr [esp + 0x20], ecx
        xorps xmm0, xmm0
        mov dword ptr [esp + 0x1c], eax
        je zero_done
        mov edx, ebx
        mov edi, eax
zero_loop:
        movaps xmmword ptr [edx], xmm0
        add edx, 0x10
        sub edi, 1
        jne zero_loop
zero_done:
        mov edi, dword ptr [esp + 0xe0]
        xor edx, edx
        test edi, edi
        mov dword ptr [esp + 0x14], edx
        je tail
        mov ebx, dword ptr [esp + 0xbc]
        mov eax, dword ptr [esp + 0xf0]
        add esi, 0x20
        mov dword ptr [esp + 0x18], edi
        jmp outer_body
outer_next:
        mov edx, dword ptr [esp + 0x14]
outer_body:
        xor edi, edi
        cmp dword ptr [ebx], edi
        je after_inner
        lea ecx, [edx + 2*edx]
        mov edx, dword ptr [esp + 0x70]
        shl ecx, 5
        lea ecx, [ecx + edx + 0x20]
inner_loop:
        movaps xmm0, xmmword ptr [eax]
        movaps xmm3, xmmword ptr [ecx - 0x10]
        movaps xmm4, xmmword ptr [ecx - 0x20]
        movaps xmm1, xmmword ptr [eax + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 4*edi]
        movaps xmm2, xmm0
        shufps xmm2, xmm0, 0x55
        mulps xmm2, xmm3
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 0x0
        mulps xmm3, xmm4
        addps xmm2, xmm3
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 0xaa
        movaps xmm0, xmmword ptr [ecx]
        mulps xmm3, xmm0
        addps xmm2, xmm3
        movaps xmm3, xmmword ptr [ecx + 0x10]
        movaps xmm0, xmm1
        shufps xmm0, xmm1, 0x0
        mulps xmm0, xmm3
        movaps xmm3, xmmword ptr [ecx + 0x20]
        addps xmm2, xmm0
        movaps xmm0, xmm1
        shufps xmm0, xmm1, 0x55
        mulps xmm0, xmm3
        addps xmm2, xmm0
        movaps xmm0, xmm1
        shufps xmm0, xmm1, 0xaa
        movaps xmm1, xmmword ptr [ecx + 0x30]
        mulps xmm0, xmm1
        addps xmm2, xmm0
        shl edx, 4
        add edx, dword ptr [esp + 0x50]
        movaps xmm0, xmmword ptr [edx]
        addps xmm2, xmm0
        movaps xmmword ptr [edx], xmm2
        movaps xmm0, xmmword ptr [esi - 0x20]
        movaps xmm2, xmmword ptr [ecx - 0x20]
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 0xff
        mulps xmm2, xmm1
        movaps xmmword ptr [ecx - 0x20], xmm2
        movaps xmm2, xmmword ptr [ecx - 0x10]
        mulps xmm2, xmm1
        movaps xmmword ptr [ecx - 0x10], xmm2
        movaps xmm2, xmmword ptr [ecx]
        mulps xmm2, xmm1
        movaps xmmword ptr [ecx], xmm2
        movaps xmm2, xmmword ptr [ecx + 0x10]
        movaps xmm7, xmmword ptr [ecx + 0x20]
        movaps xmm4, xmm0
        movaps xmm1, xmm0
        shufps xmm1, xmm0, 0x55
        shufps xmm4, xmm0, 0x0
        movaps xmm5, xmm1
        mulps xmm1, xmm7
        shufps xmm0, xmm0, 0xaa
        movaps xmm6, xmm0
        movaps xmmword ptr [esp + 0x100], xmm1
        mulps xmm4, xmm2
        mulps xmm5, xmm2
        mulps xmm6, xmm2
        movaps xmm2, xmmword ptr [esi - 0x10]
        movaps xmm1, xmm2
        shufps xmm1, xmm2, 0x55
        mulps xmm1, xmm7
        shufps xmm2, xmm2, 0xaa
        movaps xmm3, xmm2
        mulps xmm3, xmm7
        movaps xmm7, xmmword ptr [ecx + 0x30]
        movaps xmmword ptr [esp + 0xf0], xmm7
        movaps xmm7, xmmword ptr [esi]
        mulps xmm0, xmmword ptr [esp + 0xf0]
        movaps xmmword ptr [esp + 0x60], xmm7
        movaps xmm7, xmmword ptr [esp + 0x100]
        addps xmm7, xmm4
        addps xmm0, xmm7
        movaps xmmword ptr [ecx + 0x10], xmm0
        addps xmm1, xmm5
        movaps xmm0, xmmword ptr [esp + 0xf0]
        add dword ptr [esp + 0x14], 1
        mulps xmm2, xmm0
        addps xmm1, xmm2
        movaps xmmword ptr [ecx + 0x20], xmm1
        movaps xmm1, xmmword ptr [esp + 0x60]
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 0xaa
        mulps xmm2, xmm0
        addps xmm3, xmm6
        addps xmm2, xmm3
        movaps xmmword ptr [ecx + 0x30], xmm2
        add edi, 1
        add ecx, 0x60
        cmp edi, dword ptr [ebx]
        jne inner_loop
        mov ecx, dword ptr [esp + 0x20]
after_inner:
        mov edx, dword ptr [ebx]
        mov edi, dword ptr [esp + 0x10]
        lea edx, [edi + 4*edx]
        add eax, 0x20
        add esi, 0x30
        add ebx, 4
        sub dword ptr [esp + 0x18], 1
        mov dword ptr [esp + 0x10], edx
        jne outer_next
        mov ebx, dword ptr [esp + 0x50]
        mov eax, dword ptr [esp + 0x1c]
tail:
        test eax, eax
        movss xmm0, dword ptr [ebp + 0xcc]
        shufps xmm0, xmm0, 0x0
        movaps xmm1, xmm0
        rcpps xmm0, xmm1
        movaps xmm2, xmm0
        mulps xmm2, xmm1
        movss xmm1, dword ptr [ebp + 0xd0]
        mulps xmm2, xmm0
        addps xmm0, xmm0
        subps xmm0, xmm2
        shufps xmm1, xmm1, 0x0
        je done
        mov edx, dword ptr [esp + 0x40]
        mov esi, dword ptr [esp + 0x30]
        sub edx, ecx
        sub esi, ecx
        mov edi, ebx
        mov eax, ecx
        sub edi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
tail_loop:
        movaps xmm2, xmmword ptr [edx + eax]
        movaps xmm3, xmmword ptr [eax]
        addps xmm2, xmm1
        mulps xmm2, xmm3
        movaps xmm3, xmmword ptr [esi + eax]
        mulps xmm2, xmm0
        subps xmm3, xmm2
        movaps xmm2, xmmword ptr [edi + eax]
        mulps xmm3, xmm0
        subps xmm3, xmm2
        movaps xmmword ptr [edi + eax], xmm3
        add eax, 0x10
        sub ecx, 1
        jne tail_loop
done:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xcc
    }
}
