// Decompiled translation unit: src/leaf/decompiled_650000.cpp

// [0x0065ACC0] sub_0065ACC0 (10 bytes)
// Calls sub_007C7150 with the dword at [self] as its single stack argument, then returns.
extern "C" void __cdecl ext_007C7150(int value);

extern "C" void __fastcall fn_0065ACC0(void* self) {
    ext_007C7150(*(int*)self);
}

// [0x0065AF20] sub_0065AF20 (10 bytes)
// Calls sub_007C8BC0 with the dword at [self] as its single stack argument, then returns.
extern "C" void __cdecl ext_007C8BC0(int value);

extern "C" void __fastcall fn_0065AF20(void* self) {
    ext_007C8BC0(*(int*)self);
}

// [0x0065C5E0] sub_0065C5E0 (10 bytes)
// Pushes &self->[+0x4c] as a single stack argument to sub_0065C3F0 (no caller cleanup), then returns.
extern "C" void ext_0065C3F0();

extern "C" __declspec(naked) void __fastcall fn_0065C5E0(void* self) {
    __asm {
        lea eax, [ecx + 0x4c]
        push eax
        call ext_0065C3F0
        ret
    }
}

// [0x0065B0F0] sub_0065B0F0 (11 bytes)
extern "C" void ext_007CCDF0(int value);

extern "C" void __fastcall fn_0065B0F0(void* self) {
    ext_007CCDF0(*(int*)((char*)self + 0x34));
}
