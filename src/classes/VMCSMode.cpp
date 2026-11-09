// Decompiled translation unit: src/classes/VMCSMode.cpp

// [0x004F2830] VMCSMode::vfunc_141 (31 bytes)
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004F2830(void* self) {
    __asm {
        __asm _emit 0xF6 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 // test byte ptr [esp + 0x4], 0x1
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        __asm _emit 0xC7 __asm _emit 0x06 __asm _emit 0xE4 __asm _emit 0xC1 __asm _emit 0x94 __asm _emit 0x00 // mov dword ptr [esi], 0x94c1e4
        je L_004F2849
        push esi
        call ext_006A5C5C
        __asm _emit 0x83 __asm _emit 0xC4 __asm _emit 0x04 // add esp, 0x4
L_004F2849:
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        ret 0x4
    }
}
