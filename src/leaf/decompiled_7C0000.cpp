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

// [0x007CCA60] sub_007CCA60 (30 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CCA60(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [edx + 0x20]
        and eax, 0xff
        lea eax, [eax + 4*eax]
        mov eax, dword ptr [edx + 8*eax + 0x10]
        mov dword ptr [esp + 0x4], ecx
        jmp eax
    }
}
