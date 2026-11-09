// Decompiled translation unit: src/leaf/decompiled_500000.cpp

// [0x00504930] sub_00504930 (10 bytes)
extern "C" void ext_00527280();
extern "C" void ext_005220C0();

extern "C" __declspec(naked) void __cdecl fn_00504930() {
    __asm {
        call ext_00527280
        jmp ext_005220C0
    }
}

// [0x00506E10] sub_00506E10 (16 bytes)
extern "C" void __cdecl ext_00506BD0(void* a, void* b, int c);

extern "C" void __fastcall fn_00506E10(void* self) {
    ext_00506BD0((char*)self + 4, self, 1);
}

// [0x00504970] sub_00504970 (26 bytes)
extern "C" void ext_00516EB0();

extern "C" __declspec(naked) void* __fastcall fn_00504970(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x30]
        test ecx, ecx
        je short zero_ret
        push eax
        call ext_00516EB0
        test eax, eax
        je short zero_ret
        add eax, 0x20
        ret
zero_ret:
        xor eax, eax
        ret
    }
}
