// Decompiled translation unit: src/leaf/decompiled_420000.cpp

// [0x004276B0] sub_004276B0 (32 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_004276B0(void) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}
