// Decompiled translation unit: src/NMData/NullRelationshipData.cpp

extern "C" int mem_00A9F118;
extern "C" int mem_00924FE4;

// [0x0055DE20] NMData::NullRelationshipData::vfunc_59 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0055DE20(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F118]
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
