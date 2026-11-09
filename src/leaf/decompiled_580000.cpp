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

// [0x0058F570] sub_0058F570 (16 bytes)
extern "C" void ext_0058B4E0();

extern "C" __declspec(naked) void __fastcall fn_0058F570(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058B4E0
        ret 4
    }
}

// [0x0058F580] sub_0058F580 (16 bytes)
extern "C" void __fastcall ext_0058B540(void* self, int edx_unused, float a1);

extern "C" void __fastcall fn_0058F580(void* self, int edx_unused, float a1) {
    ext_0058B540(self, edx_unused, a1);
}

// [0x0058F590] sub_0058F590 (16 bytes)
extern "C" void ext_0058B5A0();

extern "C" __declspec(naked) void __fastcall fn_0058F590(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058B5A0
        ret 4
    }
}

// [0x0058F600] sub_0058F600 (16 bytes)
extern "C" void ext_0058ABC0();

extern "C" __declspec(naked) void __fastcall fn_0058F600(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058ABC0
        ret 4
    }
}

// [0x0058F610] sub_0058F610 (16 bytes)
extern "C" void ext_0058ACA0();
extern "C" void __fastcall fn_0058F610(void* self, int edx_unused, float a1) {
    ((void (__stdcall*)(float))ext_0058ACA0)(a1);
}

// [0x0058F620] sub_0058F620 (16 bytes)
extern "C" void ext_0058AD80();

extern "C" __declspec(naked) void __fastcall fn_0058F620(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        fstp dword ptr [esp]
        call ext_0058AD80
        ret 4
    }
}
