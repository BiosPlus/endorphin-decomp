// Decompiled translation unit: src/classes/FBXIO.cpp

// [0x0055DE50] FBXIO::vfunc_3 (38 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9EED4;

extern "C" __declspec(naked) void __fastcall fn_0055DE50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EED4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00562A30] FBXIO::vfunc_13 (70 bytes)
extern "C" void ext_0055E990();
extern "C" void ext_0055F4E0();
extern "C" void ext_005605A0();
extern "C" void ext_005619C0();
extern "C" void ext_006629B0();

extern "C" __declspec(naked) void __fastcall fn_00562A30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0055F4E0
        test al, al
        je done
        cmp byte ptr [esi + 0x214], 0
        je skip1
        lea eax, [esi + 0x1f8]
        push eax
        call ext_006629B0
        add esp, 4
        test al, al
        jne skip2
    skip1:
        mov ecx, esi
        call ext_005605A0
    skip2:
        mov ecx, esi
        call ext_005619C0
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        call ext_0055E990
    done:
        pop esi
        ret 4
    }
}
