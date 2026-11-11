// Decompiled translation unit: src/classes/VSKIO.cpp

extern "C" void ext_005760E0();
extern "C" void ext_00574CF0();
extern "C" int mem_00924FF0;

// [0x005762C0] VSKIO::vfunc_14 (117 bytes)
extern "C" __declspec(naked) void __fastcall fn_005762C0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x89dca8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        mov edx, ecx
        push esi
        push edx
        lea ecx, [esp + 8]
        call ext_005760E0
        mov esi, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        push eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [edx + 488h], eax
        add esi, 20h
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0ch]
        call eax
        lea ecx, [esp + 4]
        mov dword ptr [esp + 18h], 0ffffffffh
        call ext_00574CF0
        mov ecx, dword ptr [esp + 10h]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 4
    }
}
