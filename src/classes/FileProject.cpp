// Decompiled translation unit: src/classes/FileProject.cpp

// [0x00666880] FileProject::vfunc_10 (41 bytes)
extern "C" void ext_00663690();
extern "C" void ext_0067CFF0();

extern "C" __declspec(naked) void __fastcall fn_00666880(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push 0x0
        lea eax, [esi + 0x48]
        push eax
        push edi
        call ext_00663690
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        push ecx
        push edi
        mov ecx, esi
        call ext_0067CFF0
        pop edi
        pop esi
        ret 0x8
    }
}
