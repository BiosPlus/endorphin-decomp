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
