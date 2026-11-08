// Decompiled translation unit: src/ExprParser/ExtROType.cpp

// [0x0066AF40] ExprParser::ExtROType::vfunc_3 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066AF40(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x8B __asm _emit 0x00 // mov eax, dword ptr [eax]
        __asm _emit 0x8B __asm _emit 0x48 __asm _emit 0x04 // mov ecx, dword ptr [eax + 0x4]
        __asm _emit 0x8B __asm _emit 0x11 // mov edx, dword ptr [ecx]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov dword ptr [esp + 0x4], eax
        __asm _emit 0x8B __asm _emit 0x42 __asm _emit 0x0C // mov eax, dword ptr [edx + 0xc]
        __asm _emit 0xFF __asm _emit 0xE0 // jmp eax
    }
}
