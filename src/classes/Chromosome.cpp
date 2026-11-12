// Decompiled translation unit: src/classes/Chromosome.cpp

extern "C" void ext_0046F7D0();
extern "C" void ext_00512950();
extern "C" void ext_0055DA20();
extern "C" void ext_00661650();
extern "C" int mem_00924FC0;
extern "C" int mem_00AEBE20;
extern "C" int mem_00AEBE1C;

// [0x005141D0] Chromosome::vfunc_13 (189 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005141D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push 0x9518f0
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x14], 0x0
        call ebx
        add esp, 8
        test al, al
        je short label_2
        mov eax, 0x1
        test byte ptr [mem_00AEBE20], al
        jne short label_1
        or dword ptr [mem_00AEBE20], eax
        call ext_00512950
        mov dword ptr [mem_00AEBE1C], eax

    label_1:
        mov eax, dword ptr [mem_00AEBE1C]
        add esi, 0x4
        push esi
        mov esi, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

    label_2:
        push 0x9518e4
        push edi
        call ebx
        add esp, 8
        test al, al
        je short label_3
        lea ecx, [esi + 0x14]
        test ecx, ecx
        je short label_4
        lea eax, [esi + 0x18]
        mov esi, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

    label_4:
        mov esi, dword ptr [esp + 0x14]
        xor eax, eax
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8

    label_3:
        mov esi, dword ptr [esp + 0x14]
        push esi
        call ext_0046F7D0
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 8
    }
}
