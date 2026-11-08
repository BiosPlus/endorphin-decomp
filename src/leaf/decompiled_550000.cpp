// Decompiled translation unit: src/leaf/decompiled_550000.cpp

// [0x00559180] sub_00559180 (31 bytes)
extern "C" void ext_00559070();

extern "C" __declspec(naked) void __fastcall fn_00559180(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x414], eax
        mov dword ptr [ecx + 0x418], eax
        mov dword ptr [esp + 0x4], eax
        add ecx, 0x43c
        jmp ext_00559070
    }
}
