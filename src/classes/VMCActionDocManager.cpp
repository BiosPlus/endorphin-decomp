// Decompiled translation unit: src/classes/VMCActionDocManager.cpp

extern "C" void ext_00467AC0();
extern "C" void ext_00467780();

// [0x00467F00] VMCActionDocManager::vfunc_13 (30 bytes)
extern "C" __declspec(naked) void __cdecl fn_00467F00(void) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_null
        mov dword ptr [esp + 0x10], eax
        jmp ext_00467AC0
    L_null:
        mov dword ptr [esp + 0x10], 0x0
        jmp ext_00467780
    }
}
