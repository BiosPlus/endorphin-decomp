// Decompiled translation unit: src/NMData/SceneData.cpp

extern "C" int mem_00A9F23C;
extern "C" int mem_00924FE4;

// [0x0047DB90] NMData::SceneData::vfunc_6 (35 bytes)
// Constructs the std::string in the hidden return buffer (a1) from the global C string mem_00A9F23C
// via the imported basic_string(const char*, allocator) ctor; returns the buffer in eax.
extern "C" __declspec(naked) void* __fastcall fn_0047DB90(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F23C]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
