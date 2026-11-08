// Decompiled translation unit: src/classes/VSTParser.cpp

extern "C" void ext_00579100();
extern "C" void ext_00577600();

// [0x00579290] VSTParser::vfunc_1 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00579290(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        sub eax, 0x0
        je L_zero
        sub eax, 0x1
        jne L_done
        mov ecx, dword ptr [ecx + 0x4]
        jmp ext_00579100
    L_zero:
        mov ecx, dword ptr [ecx + 0x4]
        jmp ext_00577600
    L_done:
        ret 0x4
    }
}
