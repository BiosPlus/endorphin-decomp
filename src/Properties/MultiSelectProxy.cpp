// Decompiled translation unit: src/Properties/MultiSelectProxy.cpp

// [0x004EF2F0] Properties::MultiSelectProxy::vfunc_6 (18 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EF2F0(void* self) {
    __asm {
        __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x34 __asm _emit 0x00 // cmp dword ptr [ecx + 0x34], 0x0
        __asm _emit 0x75 __asm _emit 0x03 // jne L_004EF2F9
        __asm _emit 0x32 __asm _emit 0xC0 // xor al, al
        ret
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x34 // mov ecx, dword ptr [ecx + 0x34]  (L_004EF2F9)
        __asm _emit 0x8B __asm _emit 0x01 // mov eax, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x10 // mov edx, dword ptr [eax]
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}
