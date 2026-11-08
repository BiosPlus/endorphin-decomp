// Decompiled translation unit: src/leaf/decompiled_7C0000.cpp

extern "C" int mem_009251D8;

// [0x007C8E10] sub_007C8E10 (19 bytes)
extern "C" __declspec(naked) void fn_007C8E10() {
    __asm {
        mov eax, dword ptr [esp + 0x4]          // mov eax, dword ptr [esp + 0x4]
        mov ecx, eax                            // mov ecx, eax
        sub ecx, dword ptr [eax - 0x8]          // sub ecx, dword ptr [eax - 0x8]
        mov dword ptr [esp + 0x4], ecx          // mov dword ptr [esp + 0x4], ecx
        jmp dword ptr [mem_009251D8]            // jmp dword ptr [MSVCR80!free]
    }
}
