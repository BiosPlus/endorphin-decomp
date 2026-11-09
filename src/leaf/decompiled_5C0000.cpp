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

// [0x005CF930] sub_005CF930 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" void __fastcall fn_005CF930(void* self) {
    // push 1; add ecx, 0x210; call sub_005B11E0; ret
    __asm {
        push 1
        add ecx, 0x210
        call ext_005B11E0
    }
}
