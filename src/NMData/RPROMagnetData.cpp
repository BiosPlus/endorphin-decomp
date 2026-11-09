// Decompiled translation unit: src/NMData/RPROMagnetData.cpp

// [0x00584F50] NMData::RPROMagnetData::vfunc_59 (35 bytes)
extern "C" int mem_00A9F1E8;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_00584F50(void* self, int edx_unused, void* sret) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1E8]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}
