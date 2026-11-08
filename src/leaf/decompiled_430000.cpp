// Decompiled translation unit: src/leaf/decompiled_430000.cpp

// [0x00430CA0] sub_00430CA0 (18 bytes)
extern "C" __declspec(naked) void __fastcall fn_00430CA0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x04 // mov ecx, dword ptr [esp + 0x4]
        __asm _emit 0x8B __asm _emit 0x01 // mov eax, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x10 // mov edx, dword ptr [eax]
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp + 0x4], 0x1
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}
