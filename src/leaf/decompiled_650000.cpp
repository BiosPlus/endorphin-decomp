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

// [0x0065BB70] sub_0065BB70 (11 bytes)
extern "C" void ext_007C8B90(int value);

extern "C" void __fastcall fn_0065BB70(void* self) {
    ext_007C8B90(*(int*)((char*)self + 0x18));
}

// [0x0065F2A0] sub_0065F2A0 (15 bytes)
// Loads ecx from the global mem_00B58FF4 and pushes the dword at [self] as one stack argument
// to sub_0066C030 (no caller cleanup), then returns. ecx must carry the global, which C++ can't express.
extern "C" void ext_0066C030();
extern "C" int mem_00B58FF4;

extern "C" __declspec(naked) void __fastcall fn_0065F2A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [mem_00B58FF4]
        push eax
        call ext_0066C030
        ret
    }
}

// [0x0065BEF0] sub_0065BEF0 (16 bytes)
extern "C" void ext_007C7710();

extern "C" __declspec(naked) void __fastcall fn_0065BEF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x40]
        fldz
        push eax
        fstp dword ptr [ecx + 0x4]
        call ext_007C7710
        pop ecx
        ret
    }
}
