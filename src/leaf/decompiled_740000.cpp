// Decompiled translation unit: src/leaf/decompiled_740000.cpp

// [0x0074AE00] sub_0074AE00 (32 bytes)
// Stores three stack args into self->[0], [4], [8] and zeroes self->[0xC]; ret 0xC.
extern "C" __declspec(naked) void __fastcall fn_0074AE00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], 0x0
        ret 0xc
    }
}

extern "C" void ext_00700980();

// [0x00747570] sub_00747570 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00747570(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov ecx, dword ptr [esp+8]
        push 0
        call ext_00700980
        mov al, 1
        ret 8
    }
}
