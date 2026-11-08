// Decompiled translation unit: src/leaf/decompiled_600000.cpp

// [0x00609730] sub_00609730 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_00609730(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x0C // mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x04 // mov eax, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x50 __asm _emit 0x24 // mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}
