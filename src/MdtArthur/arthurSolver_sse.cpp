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

extern "C" void ext_007F2F80();
extern "C" void ext_007F3F00();
extern "C" void ext_007F4160();

// [0x007F44C0] MdtArthur::arthurSolver_sse::vfunc_2 (1070 bytes)
extern "C" __declspec(naked) void __fastcall fn_007F44C0(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -10h
        sub     esp, 134h
        mov     eax, dword ptr [ebp + 0ch]
        mov     edx, dword ptr [eax + 8]
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov     ecx, 37h
        lea     esi, [ebp + 10h]
        lea     edi, [esp + 60h]
        rep movsd
        mov     ecx, dword ptr [eax + 4]
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [ebx]
        mov     dword ptr [esp + 4ch], edx
        mov     edx, dword ptr [eax + 10h]
        mov     dword ptr [esp + 48h], ecx
        mov     ecx, dword ptr [eax + 0ch]
        mov     dword ptr [esp + 3ch], edx
        mov     edx, dword ptr [eax + 18h]
        mov     dword ptr [esp + 38h], ecx
        mov     ecx, dword ptr [eax + 14h]
        mov     dword ptr [esp + 2ch], edx
        mov     edx, dword ptr [eax + 20h]
        mov     dword ptr [esp + 40h], ecx
        mov     ecx, dword ptr [eax + 1ch]
        mov     eax, dword ptr [ebx + 4]
        mov     dword ptr [esp + 54h], eax
        mov     eax, dword ptr [esp + 114h]
        mov     dword ptr [esp + 34h], edx
        cdq
        and     edx, 3
        mov     dword ptr [esp + 30h], ecx
        mov     ecx, dword ptr [ebx + 8]
        add     eax, edx
        sar     eax, 2
        mov     dword ptr [esp + 44h], edi
        mov     dword ptr [esp + 50h], esi
        mov     dword ptr [esp + 58h], ecx
        xorps   xmm0, xmm0
        je      L_7F4574
        mov     ecx, dword ptr [esp + 110h]
        mov     edx, esi
        sub     edi, ecx
        sub     edx, ecx
    L_7F4557:
        movaps  xmm1, xmmword ptr [ecx]
        movaps  xmm2, xmm0
        subps   xmm2, xmm1
        movaps  xmmword ptr [edi + ecx], xmm2
        movaps  xmmword ptr [edx + ecx], xmm0
        add     ecx, 10h
        sub     eax, 1
        jne     L_7F4557
        mov     edi, dword ptr [esp + 44h]
    L_7F4574:
        fld     dword ptr [esp + 130h]
        mov     edx, dword ptr [esp + 2ch]
        mov     ecx, dword ptr [esp + 30h]
        sub     esp, 10h
        fstp    dword ptr [esp + 0ch]
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 44h]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 48h]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [esp + 4ch]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 5ch]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 114h]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 118h]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 128h]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 114h]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [esp + 118h]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 128h]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 88h]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 8ch]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 88h]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 8ch]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 4], edx
        lea     edx, [esp + 5ch]
        mov     dword ptr [eax + 8], ecx
        push    edx
        lea     eax, [esp + 74h]
        push    eax
        call    ext_007F3F00
        add     esp, 54h
        xor     eax, eax
        mov     dword ptr [esp + 28h], eax
        mov     dword ptr [ebx + 0ch], eax
    L_7F4646:
        mov     ecx, dword ptr [esp + 138h]
        fldz
        cmp     eax, ecx
        mov     ebx, dword ptr [esp + 10h]
        jl      L_7F4691
        add     ecx, ecx
        cmp     eax, ecx
        jge     L_7F4686
        mov     ecx, dword ptr [esp + 24h]
        cmp     ecx, -1
        je      L_7F4686
        lea     edx, [ebx + 4*ecx]
        fld     dword ptr [edi + 4*edx]
        fabs
        fstp    dword ptr [esp + 0ch]
        fld     dword ptr [esp + 0ch]
        fld     dword ptr [esp + 134h]
        fcompp
        fnstsw  ax
        test    ah, 5
        jnp     L_7F469A
    L_7F4686:
        pop     edi
        fstp    st(0)
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0e4h
    L_7F4691:
        mov     ecx, dword ptr [esp + 24h]
        cmp     ecx, -1
        je      L_7F4686
    L_7F469A:
        mov     eax, dword ptr [esp + 11ch]
        lea     ebx, [ebx + 4*ecx]
        fld     dword ptr [eax + 4*ebx]
        fld     dword ptr [edi + 4*ebx]
        fchs
        fmulp   st(1), st(0)
        fstp    dword ptr [esp + 0ch]
        fcom    dword ptr [edi + 4*ebx]
        fnstsw  ax
        fld     dword ptr [esi + 4*ebx]
        test    ah, 5
        fld     dword ptr [esp + 0ch]
        fld     st(0)
        faddp   st(2), st(0)
        jp      L_7F46ED
        mov     ecx, dword ptr [esp + 0ech]
        fld     dword ptr [ecx + 4*ebx]
        fcomp   st(2)
        fnstsw  ax
        fstp    st(1)
        test    ah, 5
        jnp     L_7F46E4
        fstp    st(0)
        fld     dword ptr [ecx + 4*ebx]
        fsub    dword ptr [esi + 4*ebx]
    L_7F46E4:
        mov     edx, dword ptr [esp + 0f8h]
        jmp     L_7F4711
    L_7F46ED:
        mov     edx, dword ptr [esp + 0f8h]
        fld     dword ptr [edx + 4*ebx]
        fcomp   st(2)
        fnstsw  ax
        fstp    st(1)
        test    ah, 41h
        je      L_7F470A
        fstp    st(0)
        fld     dword ptr [edx + 4*ebx]
        fsub    dword ptr [esi + 4*ebx]
    L_7F470A:
        mov     ecx, dword ptr [esp + 0ech]
    L_7F4711:
        fstp    dword ptr [esp + 0ch]
        fld     dword ptr [esi + 4*ebx]
        fld     dword ptr [esp + 0ch]
        fld     st(0)
        faddp   st(2), st(0)
        fxch    st(1)
        fstp    dword ptr [esp + 5ch]
        fld     dword ptr [esp + 5ch]
        fst     dword ptr [esi + 4*ebx]
        fld     dword ptr [ecx + 4*ebx]
        fcompp
        fnstsw  ax
        test    ah, 5
        jp      L_7F4746
        mov     ecx, dword ptr [esp + 38h]
        mov     dword ptr [ecx + 4*ebx], 0ffffffffh
        jmp     L_7F4751
    L_7F4746:
        mov     eax, dword ptr [esp + 38h]
        fxch    st(1)
        fst     dword ptr [eax + 4*ebx]
        fxch    st(1)
    L_7F4751:
        fld     dword ptr [esi + 4*ebx]
        fld     dword ptr [edx + 4*ebx]
        fcompp
        fnstsw  ax
        test    ah, 41h
        jne     L_7F476F
        mov     ecx, dword ptr [esp + 2ch]
        fstp    st(1)
        mov     dword ptr [ecx + 4*ebx], 0ffffffffh
        jmp     L_7F4778
    L_7F476F:
        mov     edx, dword ptr [esp + 2ch]
        fxch    st(1)
        fstp    dword ptr [edx + 4*ebx]
    L_7F4778:
        mov     ecx, dword ptr [esp + 0dch]
        mov     edx, dword ptr [esp + 0e0h]
        push    ebx
        sub     esp, 14h
        fstp    dword ptr [esp + 10h]
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0fch]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 100h]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0ch], edx
        sub     esp, 7ch
        mov     edi, esp
        mov     ecx, 1fh
        lea     esi, [esp + 0f4h]
        rep movsd
        mov     esi, dword ptr [esp + 0d8h]
        mov     edi, dword ptr [esp + 0dch]
        mov     ecx, dword ptr [esp + 0e0h]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], ecx
        call    ext_007F2F80
        mov     edx, dword ptr [esp + 1a4h]
        mov     ecx, dword ptr [esp + 0cch]
        fld     dword ptr [edx + 4*ebx]
        mov     edx, dword ptr [esp + 0d0h]
        fmul    dword ptr [esp + 1cch]
        add     esp, 9ch
        sub     esp, 0ch
        mov     eax, esp
        fadd    dword ptr [esp + 138h]
        sub     esp, 0ch
        fmul    dword ptr [esp + 28h]
        fadd    dword ptr [esi + 4*ebx]
        fstp    dword ptr [esi + 4*ebx]
        fld     dword ptr [esp + 14ch]
        fstp    dword ptr [esp + 18h]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 50h]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 54h]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 58h]
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 5ch]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 114h]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [esp + 118h]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 128h]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 114h]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 118h]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 128h]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 84h]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [esp + 88h]
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 98h]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 8ch]
        mov     dword ptr [eax + 8], ecx
        sub     esp, 0ch
        mov     eax, esp
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], edx
        lea     eax, [esp + 5ch]
        push    eax
        lea     ecx, [esp + 74h]
        push    ecx
        call    ext_007F4160
        add     esp, 54h
        add     dword ptr [esp + 28h], 1
        mov     eax, dword ptr [esp + 28h]
        mov     edi, esi
        mov     esi, dword ptr [esp + 50h]
        jmp     L_7F4646
    }
}
