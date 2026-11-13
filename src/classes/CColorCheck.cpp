// Decompiled translation unit: src/classes/CColorCheck.cpp

extern "C" void ext_006A5EA2();
extern "C" void ext_006A5CE0();

// [0x0040FDA0] CColorCheck::vfunc_22 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040FDA0(void* self) {
    __asm {
        push esi
        push 0x20
        push 0xb
        push 0x1f
        mov esi, ecx
        call ext_006A5EA2
        mov ecx, esi
        pop esi
        jmp ext_006A5CE0
    }
}

// [0x0040FEE0] CColorCheck::vfunc_80 (696 bytes)
extern "C" void ext_00874F81();
extern "C" void ext_0040FE10();
extern "C" void ext_006A5EC0();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6004();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6142();
extern "C" void ext_006A6148();
extern "C" void ext_006A614E();
extern "C" int mem_0092563C;
extern "C" int mem_00924080;
extern "C" int mem_00925640;
extern "C" int mem_0092A23C;

extern "C" __declspec(naked) void __fastcall fn_0040FEE0(void* self) {
    __asm {
        push -1
        push offset ext_00874F81
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x250
        push ebx
        mov ebx, dword ptr [esp + 0x264]
        mov eax, dword ptr [ebx + 0x18]
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        mov dword ptr [esp + 0x30], edi
        call ext_006A6004
        push 0x47
        mov esi, eax
        call dword ptr [mem_0092563C]
        cdq
        sub eax, edx
        mov ebp, eax
        push 0x200
        lea ecx, [esp + 0x64]
        sar ebp, 1
        push ecx
        mov ecx, edi
        sub ebp, 3
        call ext_006A614E
        lea eax, [esp + 0x60]
        lea ecx, [eax + 1]
    L_strlen:
        mov dl, byte ptr [eax]
        add eax, 1
        test dl, dl
        jne L_strlen
        sub eax, ecx
        mov ecx, dword ptr [esi + 8]
        lea edx, [esp + 0x30]
        push edx
        push eax
        lea eax, [esp + 0x68]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esp + 0x30]
        push 0xf
        add eax, 0x14
        push eax
        push 1
        push 0x10
        lea edx, [esp + 0x48]
        push edx
        call dword ptr [mem_00925640]
        mov ecx, edi
        call ext_006A5EC0
        mov ecx, dword ptr [ebx + 0xc]
        mov eax, dword ptr [ebx + 0x10]
        push 8
        push 1
        mov dword ptr [esp + 0x38], ecx
        push 0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x1c], eax
        call ext_006A6148
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x26c], 0
        call ext_006A610C
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        push 5
        mov ecx, esi
        call edx
        mov ebx, dword ptr [esp + 0x10]
        shr ebx, 2
        and bl, 1
        je L_a
        mov eax, dword ptr [edi + 0x6c]
        jmp L_b
    L_a:
        mov eax, dword ptr [edi + 0x64]
    L_b:
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        push eax
        lea eax, [esp + 0x64]
        push eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 0x5c]
        mov dword ptr [eax + 8], ecx
        push esi
        mov ecx, edi
        mov dword ptr [eax + 0xc], edx
        call ext_0040FE10
        test bl, bl
        je L_c
        mov eax, dword ptr [edi + 0x68]
        jmp L_d
    L_c:
        mov eax, dword ptr [edi + 0x60]
    L_d:
        push eax
        push 0xa
        push 0xa
        push 2
        push 2
        mov ecx, esi
        call ext_006A6142
        lea ecx, [esp + 0x1c]
        call ext_006A5FF2
        test bl, bl
        je L_e
        mov eax, dword ptr [edi + 0x6c]
        jmp L_f
    L_e:
        mov eax, dword ptr [edi + 0x64]
    L_f:
        push eax
        push 1
        push 0
        lea ecx, [esp + 0x20]
        call ext_006A6148
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x26c], 1
        call ext_006A610C
        push 0xc
        push 2
        lea ecx, [esp + 0x58]
        push ecx
        mov ecx, esi
        call ext_006A6106
        push 2
        push 2
        mov ecx, esi
        call ext_006A6100
        push 2
        push 0xc
        mov ecx, esi
        call ext_006A6100
        push 0xc
        push 0xc
        mov ecx, esi
        call ext_006A6100
        push 0xc
        push 2
        mov ecx, esi
        call ext_006A6100
        lea ecx, [esp + 0x14]
        call ext_006A5FF2
        cmp dword ptr [edi + 0x54], 1
        jne L_big
        test bl, bl
        je L_g
        mov edi, dword ptr [edi + 0x6c]
        jmp L_h
    L_g:
        mov edi, dword ptr [edi + 0x64]
    L_h:
        push edi
        push 2
        push 0
        lea ecx, [esp + 0x30]
        call ext_006A6148
        lea edx, [esp + 0x24]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x26c], 2
        call ext_006A610C
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x44]
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        add eax, -1
        push eax
        lea ebx, [eax + ebp]
        lea ecx, [ebp + 4]
        lea edx, [ebp + ebp]
        push 4
        lea eax, [esp + 0x60]
        mov dword ptr [esp + 0x50], ecx
        add ebp, ecx
        mov edi, ebx
        push eax
        mov ecx, esi
        sub edi, edx
        call ext_006A6106
        mov ecx, dword ptr [esp + 0x48]
        push ebx
        push ecx
        mov ecx, esi
        call ext_006A6100
        push edi
        push ebp
        mov ecx, esi
        call ext_006A6100
        mov esi, offset mem_0092A23C
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x268], 1
        mov dword ptr [esp + 0x24], esi
        call ext_006A5FF2
        mov edi, dword ptr [esp + 0x2c]
        jmp L_end
    L_big:
        mov esi, offset mem_0092A23C
    L_end:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x14]
        mov dword ptr [edi + 0x5c], edx
        mov dword ptr [edi + 0x58], eax
        mov byte ptr [esp + 0x268], 0
        mov dword ptr [esp + 0x14], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x268], -1
        mov dword ptr [esp + 0x1c], esi
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x260]
        pop edi
        pop esi
        pop ebp
        mov fs:[0], ecx
        pop ebx
        add esp, 0x25c
        ret 4
    }
}
