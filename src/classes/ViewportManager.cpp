// Decompiled translation unit: src/classes/ViewportManager.cpp

// [0x005431E0] ViewportManager::vfunc_3 (15 bytes)
extern "C" int __stdcall ext_00541410(int a1, int a2);

extern "C" int __stdcall fn_005431E0(int a1) {
    return ext_00541410(a1, 0);
}

// [0x005431B0] ViewportManager::vfunc_6 (35 bytes)
// Constructs the std::string at a1 from the C string pointer held in mem_00A9ED84 via the
// imported basic_string(const char*, allocator) ctor; returns a1 in eax (ret 0x4).
extern "C" int mem_00A9ED84;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_005431B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9ED84]
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
