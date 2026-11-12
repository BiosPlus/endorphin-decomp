// Decompiled translation unit: src/classes/SymbolContainer.cpp

// [0x006870A0] SymbolContainer::vfunc_1 (37 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006870A0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x28]
        call ext_005DF5C0
        pop esi
        pop ecx
        ret 0x4
    }
}
