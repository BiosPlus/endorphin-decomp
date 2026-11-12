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
