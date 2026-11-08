// Decompiled translation unit: src/classes/HasConstantTMPtr.cpp

// [0x005321E0] HasConstantTMPtr::vfunc_10 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_005321E0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0xC1 // mov eax, ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x04 // mov ecx, dword ptr [esp + 0x4]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x40 __asm _emit 0x04 // mov eax, dword ptr [eax + 0x4]
        __asm _emit 0x8B __asm _emit 0x52 __asm _emit 0x10 // mov edx, dword ptr [edx + 0x10]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov dword ptr [esp + 0x4], eax
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}
