// Decompiled translation unit: src/leaf/decompiled_6A0000.cpp

// [0x006AD920] sub_006AD920 (18 bytes)
extern "C" void ext_0053A700();

extern "C" __declspec(naked) void __fastcall fn_006AD920(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0xC1 // mov eax, ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x04 // mov ecx, dword ptr [esp + 0x4]
        __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x30 // mov dword ptr [eax + 0x30], ecx
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov dword ptr [esp + 0x4], eax
        jmp ext_0053A700
    }
}
