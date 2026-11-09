// Decompiled translation unit: src/SpinButtonStates/ClickedDownState.cpp

extern "C" void ext_00458860();
extern "C" void ext_004586A0();

// [0x00458980] SpinButtonStates::ClickedDownState::vfunc_8 (13 bytes)
extern "C" void __fastcall fn_00458980(void* self, int edx_unused, int a1, int a2) {
    typedef void (__thiscall *Fn)(void*, int);
    void* inner = *(void**)((char*)self + 0xc);
    ((Fn)&ext_00458860)(inner, 3);
}

// [0x00458790] SpinButtonStates::ClickedDownState::vfunc_1 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458790(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x8]
        push 0x190
        push 0x2
        call ext_004586A0
        ret
    }
}
