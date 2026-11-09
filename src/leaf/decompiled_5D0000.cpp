// Decompiled translation unit: src/leaf/decompiled_5D0000.cpp

// [0x005D07E0] sub_005D07E0 (12 bytes)
extern "C" void ext_005CFCB0();
extern "C" void ext_005CFCC0();

extern "C" __declspec(naked) void __cdecl fn_005D07E0() {
    __asm {
        call ext_005CFCB0
        __asm _emit 0x50
        call ext_005CFCC0
        ret
    }
}

// [0x005D06D0] sub_005D06D0 (14 bytes)
extern "C" void ext_005B11E0();

extern "C" __declspec(naked) void __fastcall fn_005D06D0(void* self) {
    __asm {
        push 0x0
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005D0790] sub_005D0790 (33 bytes)
extern "C" void __fastcall fn_005D0790(void* self, int edx_unused, void* value) {
    void** slot = (void**)self;
    void* old = *slot;
    if (value != old && old != 0) {
        typedef void (__thiscall *VFn)(void*, int);
        VFn fn = (VFn)((*(void***)old)[0]);
        fn(old, 1);
    }
    *slot = value;
}
