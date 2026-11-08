// Decompiled translation unit: src/leaf/decompiled_620000.cpp

// [0x00627510] sub_00627510 (27 bytes)
extern "C" void ext_00647F20();

extern "C" __declspec(naked) void __fastcall fn_00627510(void* self) {
    __asm {
        lea eax, [ecx + 0x54]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        mov dword ptr [esp + 4], eax
        jmp ext_00647F20
    }
}
