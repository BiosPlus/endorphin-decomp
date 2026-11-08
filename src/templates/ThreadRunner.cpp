// Decompiled translation unit: src/templates/ThreadRunner.cpp

// [0x0046FAB0] ThreadRunner<RuntimeEngine>::vfunc_1 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0046FAB0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0xC1 // mov eax, ecx
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x18 // mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x03 __asm _emit 0x48 __asm _emit 0x14 // add ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B __asm _emit 0x40 __asm _emit 0x10 // mov eax, dword ptr [eax + 0x10]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}
