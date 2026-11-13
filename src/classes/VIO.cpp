// Decompiled translation unit: src/classes/VIO.cpp

// [0x00574D00] VIO::vfunc_3 (37 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();

extern "C" __declspec(naked) void* __fastcall fn_00574D00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push 0x92f190
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
