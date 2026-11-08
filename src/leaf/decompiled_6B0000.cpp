// Decompiled translation unit: src/leaf/decompiled_6B0000.cpp

// [0x006B6270] sub_006B6270 (25 bytes)
extern "C" void ext_006B0DE0();

extern "C" __declspec(naked) void __fastcall fn_006B6270(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x114], eax
        mov dword ptr [esp + 4], eax
        add ecx, 0xa8
        jmp ext_006B0DE0
    }
}
