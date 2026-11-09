// Decompiled translation unit: src/classes/AVIIO.cpp

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
extern "C" int mem_00A9EE78;
extern "C" int mem_00924FE4;

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00401C30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9EE78]
        push esi
        mov esi, dword ptr [esp+0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp+0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}
