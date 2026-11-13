// Decompiled translation unit: src/classes/BVHIO.cpp

extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9ED4C;

// [0x0056DA30] BVHIO::vfunc_3 (38 bytes)
extern "C" __declspec(naked) int __fastcall fn_0056DA30(void* self, int edx_unused, int a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9ED4C]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        push    0
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640390
        push    eax
        mov     ecx, esi
        call    ext_00553720
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
