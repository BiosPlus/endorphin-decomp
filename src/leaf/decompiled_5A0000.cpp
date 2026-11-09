// Decompiled translation unit: src/leaf/decompiled_5A0000.cpp

extern "C" void ext_005A1070();

// [0x005A3610] sub_005A3610 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_005A3610() {
    __asm {
        push 3
        call ext_005A1070
        ret
    }
}

// [0x005AE4C0] sub_005AE4C0 (21 bytes)
extern "C" void ext_005AD3F0();
extern "C" void __fastcall fn_005AE4C0(void* self) {
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)ext_005AD3F0)(self, 0);
    ((Fn)ext_005AD3F0)(self, 1);
}
