// Decompiled translation unit: src/classes/VMCSEngine.cpp

// [0x00468690] VMCSEngine::vfunc_1 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00468690(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x18 // mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x0C // mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x8B __asm _emit 0x82 __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edx + 0xac]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}
