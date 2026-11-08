// Decompiled translation unit: src/leaf/decompiled_5B0000.cpp

// [0x005B6970] sub_005B6970 (9 bytes)
extern "C" void ext_005B6930();

extern "C" __declspec(naked) void __cdecl fn_005B6970() {
    __asm {
        call ext_005B6930
        fld dword ptr [eax + 4]
        ret
    }
}
