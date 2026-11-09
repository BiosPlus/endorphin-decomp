// Decompiled translation unit: src/classes/VersionControlManager.cpp

extern "C" int mem_00924FE4;

// [0x004A96B0] VersionControlManager::vfunc_6 (34 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004A96B0(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x009414AC
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}
