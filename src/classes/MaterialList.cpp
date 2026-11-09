// Decompiled translation unit: src/classes/MaterialList.cpp

extern "C" void ext_0052AF80();

// [0x0052ED30] MaterialList::vfunc_1 (15 bytes)
extern "C" void __fastcall fn_0052ED30(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *Callee)(int, int);
    ((Callee)ext_0052AF80)(a1, 0);
}

extern "C" int mem_00A9F084;
extern "C" int mem_00924FE4;

// [0x0052ED00] MaterialList::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0052ED00(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F084]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
