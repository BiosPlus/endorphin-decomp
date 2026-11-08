// Decompiled translation unit: src/leaf/decompiled_490000.cpp

// [0x00493E10] sub_00493E10 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_00493E10(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x88 __asm _emit 0x41 __asm _emit 0x08 // mov byte ptr [ecx + 0x8], al
        __asm _emit 0x8B __asm _emit 0x09 // mov ecx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov dword ptr [esp + 0x4], eax
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x14 // mov eax, dword ptr [edx + 0x14]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}
