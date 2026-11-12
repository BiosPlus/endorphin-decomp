// Decompiled translation unit: src/classes/CMessageReflector.cpp
extern "C" int mem_00AD3E34;
extern "C" int mem_00AD3E30;
extern "C" int mem_009255C0;
extern "C" int mem_00925694;

// [0x00458CA0] CMessageReflector::vfunc_1 (288 bytes)
extern "C" __declspec(naked) int __fastcall fn_00458CA0(void* self, int edx_unused, unsigned msg, unsigned w, int l, int* pr) {
    __asm {
        sub esp, 0x10
        push edi
        mov edi, [esp+0x18]
        cmp edi, [mem_00AD3E34]
        jne L22
        mov eax, [esp+0x24]
        mov [eax], ecx
        mov eax, 1
        pop edi
        add esp, 0x10
        ret 0x10
    L22:
        cmp edi, 0x39
        push ebx
        mov ebx, [esp+0x20]
        push esi
        mov esi, [esp+0x28]
        ja L13
        je LEB
        lea eax, [edi-0x2b]
        cmp eax, 4
        ja L3A
        jmp dword ptr [4*eax+0x458dc0]
        test ebx, ebx
        je L3A
        mov eax, [esi+0x14]
        jmp L36
    LEB:
        test ebx, ebx
        je L3A
        mov eax, [ecx+0x1c]
        mov ecx, [esi+4]
        push ecx
        push eax
        call dword ptr [mem_009255C0]
        jmp L36
        test ebx, ebx
        je L3A
        mov edx, [esi+4]
        mov eax, [ecx+0x1c]
        push edx
        push eax
        call dword ptr [mem_009255C0]
        jmp L36
    L13:
        cmp edi, 0x115
        ja L49
        cmp edi, 0x114
        jae L34
        cmp edi, 0x4e
        je L45
        cmp edi, 0x111
        jne L3A
        test esi, esi
        je L3A
    L34:
        mov eax, esi
    L36:
        test eax, eax
        jne L7E
    L3A:
        pop esi
        pop ebx
        xor eax, eax
        pop edi
        add esp, 0x10
        ret 0x10
    L45:
        mov eax, [esi]
        jmp L36
    L49:
        cmp edi, 0x132
        jb L3A
        cmp edi, 0x138
        jbe L34
        cmp edi, 0x210
        jne L3A
        movzx eax, bx
        add eax, -1
        cmp eax, 1
        jbe L34
        mov eax, [ecx+0x1c]
        mov edx, ebx
        shr edx, 0x10
        push edx
        push eax
        call dword ptr [mem_009255C0]
        jmp L36
    L7E:
        mov edx, [mem_00AD3E30]
        lea ecx, [esp+0xc]
        push ecx
        push 0
        push edx
        add edi, 0x2000
        push eax
        mov [esp+0x1c], edi
        mov [esp+0x20], ebx
        mov [esp+0x24], esi
        mov dword ptr [esp+0x28], 0
        call dword ptr [mem_00925694]
        mov ecx, [esp+0x2c]
        pop esi
        pop ebx
        mov [ecx], eax
        mov eax, [esp+0x10]
        pop edi
        add esp, 0x10
        ret 0x10
    }
}
