// Decompiled translation unit: src/NMData/NameTableLoader.cpp

extern "C" void ext_004EBC80();

// [0x0049CCC0] NMData::NameTableLoader::vfunc_1 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049CCC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x4]
        push eax
        push edx
        call ext_004EBC80
        ret 0x4
    }
}
