// Decompiled translation unit: src/classes/NMCAutoCompleteEdit.cpp

// [0x006B8470] NMCAutoCompleteEdit::vfunc_79 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B8470(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x58], 0x0
        je done
        mov eax, dword ptr [ecx + 0x58]
        mov ecx, dword ptr [ecx + 0x54]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        pop esi
    done:
        ret 0xc
    }
}

extern "C" void ext_006A5C68();
extern "C" void ext_006A5CE0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5FF2();
extern "C" void ext_006B87B0();
extern "C" int mem_00925650;
extern "C" int mem_00924100;
extern "C" int mem_00925694;

// [0x006B8BE0] NMCAutoCompleteEdit::vfunc_22 (218 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B8BE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b7df8
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        cmp dword ptr [esi + 0x7c], edi
        jne loc_6b8c4c
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov edx, dword ptr [esi + 0x5c]
        mov edx, dword ptr [edx + 0x60]
        push esi
        push edi
        push eax
        lea eax, [esp + 0x1c]
        push eax
        push 0x90a00051
        push 0x928b5d
        lea ecx, [esi + 0x5c]
        push 0x92f38c
        push 0x10188
        mov dword ptr [esp + 0x30], edi
        mov dword ptr [esp + 0x34], edi
        mov dword ptr [esp + 0x38], edi
        mov dword ptr [esp + 0x3c], edi
        call edx
        jmp loc_6b8c51

    loc_6b8c4c:
        call ext_006B87B0

    loc_6b8c51:
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x8], 0x92a5d4
        push 0x11
        mov dword ptr [esp + 0x2c], edi
        call dword ptr [mem_00924100]
        push eax
        call ext_006A5C68
        cmp eax, edi
        jne loc_6b8c77
        xor eax, eax
        jmp loc_6b8c7a

    loc_6b8c77:
        mov eax, dword ptr [eax + 0x4]

    loc_6b8c7a:
        push 0x1
        push eax
        mov eax, dword ptr [esi + 0x7c]
        push 0x30
        push eax
        call dword ptr [mem_00925694]
        mov ecx, esi
        call ext_006A5CE0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x28], 0xffffffff
        mov dword ptr [esp + 0x8], 0x92a23c
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x24
        ret
    }
}

extern "C" void ext_006A5DA0();
extern "C" void ext_006B87F0();
extern "C" void ext_006B8B70();
extern "C" void ext_006B8CE0();
extern "C" int mem_00925660;
extern "C" int mem_009255A0;
extern "C" int mem_00925664;

// [0x006B9350] NMCAutoCompleteEdit::vfunc_66 (385 bytes)
extern "C" __declspec(naked) int __fastcall fn_006B9350(void* self, int edx_unused, int* pMsg) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp dword ptr [edi + 0x4], 0x100
        mov esi, ecx
        jne loc_6b9440
        mov eax, dword ptr [edi + 0x8]
        cmp eax, 0x9
        jne loc_6b93bb
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push eax
        call dword ptr [mem_00925660]
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push 0x0
        push eax
        push edi
        call dword ptr [mem_009255A0]
        lea ecx, [esi + 0x5c]
        call ext_006B8B70
        test al, al
        push 0x1
        mov ecx, esi
        je loc_6b93ab
        call ext_006B87F0
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4

    loc_6b93ab:
        call ext_006B8CE0
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4

    loc_6b93bb:
        cmp eax, 0xd
        je loc_6b9494
        cmp eax, 0x27
        je loc_6b9494
        cmp eax, 0x26
        je loc_6b944e
        cmp eax, 0x28
        je loc_6b944e
        cmp eax, 0x21
        je loc_6b944e
        cmp eax, 0x22
        je loc_6b944e
        cmp eax, 0x24
        je loc_6b944e
        cmp eax, 0x23
        je loc_6b944e
        cmp eax, 0x1b
        jne loc_6b942b
        lea ecx, [esi + 0x5c]
        call ext_006B8B70
        test al, al
        je loc_6b9440
        mov ecx, dword ptr [esi + 0x20]
        push 0x1
        push ecx
        call dword ptr [mem_00925660]
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push 0x0
        push eax
        push edi
        call dword ptr [mem_009255A0]
        mov ecx, esi
        call ext_006B87B0
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4

    loc_6b942b:
        mov edx, dword ptr [esi + 0x114]
        mov eax, dword ptr [esi + 0x20]
        push 0x0
        push edx
        push 0x1
        push eax
        call dword ptr [mem_00925664]

    loc_6b9440:
        push edi
        mov ecx, esi
        call ext_006A5DA0
        pop edi
        pop esi
        pop ebx
        ret 0x4

    loc_6b944e:
        mov ecx, dword ptr [esi + 0x20]
        push 0x1
        push ecx
        call dword ptr [mem_00925660]
        lea ebx, [esi + 0x5c]
        mov ecx, ebx
        call ext_006B8B70
        test al, al
        je loc_6b9440
        mov esi, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push 0x0
        push esi
        push edi
        call dword ptr [mem_009255A0]
        test ebx, ebx
        jne loc_6b9487
        mov dword ptr [edi], ebx
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4

    loc_6b9487:
        mov ebx, dword ptr [ebx + 0x20]
        mov dword ptr [edi], ebx
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4

    loc_6b9494:
        lea ecx, [esi + 0x5c]
        call ext_006B8B70
        test al, al
        je loc_6b9440
        mov edx, dword ptr [esi + 0x20]
        push 0x1
        push edx
        call dword ptr [mem_00925660]
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push 0x0
        push eax
        push edi
        call dword ptr [mem_009255A0]
        push 0x1
        mov ecx, esi
        call ext_006B87F0
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret 0x4
    }
}
