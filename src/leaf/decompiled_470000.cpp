// Decompiled translation unit: src/leaf/decompiled_470000.cpp

// [0x00474EE0] sub_00474EE0 (24 bytes)
extern "C" void ext_00451670();
extern "C" __declspec(naked) void __fastcall fn_00474EE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x74
        mov dword ptr [esp + 0x8], eax
        call ext_00451670
        ret 0x4
    }
}
