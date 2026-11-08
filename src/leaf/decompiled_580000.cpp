// Decompiled translation unit: src/leaf/decompiled_580000.cpp

// [0x0058CFB0] sub_0058CFB0 (8 bytes)
extern "C" void ext_0058B230();

extern "C" __declspec(naked) void __cdecl fn_0058CFB0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax]
        ret
    }
}

// [0x0058CFC0] sub_0058CFC0 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_0058CFC0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x0058CFD0] sub_0058CFD0 (9 bytes)
extern "C" __declspec(naked) void __cdecl fn_0058CFD0() {
    __asm {
        call ext_0058B230
        fld dword ptr [eax + 8]
        ret
    }
}
