// Decompiled translation unit: src/leaf/decompiled_5C0000.cpp

// [0x005C3AA0] sub_005C3AA0 (9 bytes)
extern "C" void ext_005C3A30();

extern "C" __declspec(naked) void __cdecl fn_005C3AA0() {
    __asm {
        call ext_005C3A30
        fld dword ptr [eax + 4]
        ret
    }
}
