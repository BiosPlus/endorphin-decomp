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
