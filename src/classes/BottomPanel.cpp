// Decompiled translation unit: src/classes/BottomPanel.cpp

// [0x004086A0] BottomPanel::vfunc_92 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_004086A0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x01 // mov eax, dword ptr [ecx]
        __asm _emit 0x0F __asm _emit 0xB7 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 // movzx edx, word ptr [esp + 0x8]
        __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 // mov dword ptr [esp + 0x8], edx
        __asm _emit 0x8B __asm _emit 0x80 __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [eax + 0x174]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}
