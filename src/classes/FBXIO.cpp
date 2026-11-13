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
