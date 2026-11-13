// Decompiled translation unit: src/classes/NMFileIO.cpp

// [0x00553720] NMFileIO::vfunc_3 (36 bytes)
extern "C" void ext_00552B00();

extern "C" __declspec(naked) int __fastcall fn_00553720(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x5c]
        call ext_00552B00
        push edi
        lea ecx, [esi + 0x16c]
        call ext_00552B00
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}
