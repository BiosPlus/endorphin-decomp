// Decompiled translation unit: src/leaf/decompiled_7C0000.cpp

// [0x007C8E10] sub_007C8E10 (19 bytes)
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __fastcall fn_007C8E10(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x8B __asm _emit 0xC8 // mov ecx, eax
        __asm _emit 0x2B __asm _emit 0x48 __asm _emit 0xF8 // sub ecx, dword ptr [eax - 0x8]
        __asm _emit 0x89 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x04 // mov dword ptr [esp + 0x4], ecx
        jmp dword ptr [mem_009251D8] // MSVCR80!free
    }
}
