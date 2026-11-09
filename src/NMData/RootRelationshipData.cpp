// Decompiled translation unit: src/NMData/RootRelationshipData.cpp

// [0x005EBEA0] NMData::RootRelationshipData::vfunc_22 (17 bytes)
extern "C" void ext_005EB5A0();

extern "C" __declspec(naked) void* __fastcall fn_005EBEA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_005EB5A0
        mov eax, esi
        pop esi
        ret 0x4
    }
}
