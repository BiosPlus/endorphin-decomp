// Decompiled translation unit: src/Primitives/Marker.cpp

// [0x0052F6F0] Primitives::Marker::vfunc_13 (25 bytes)
extern "C" void ext_00538550();

extern "C" __declspec(naked) void __fastcall fn_0052F6F0(void* self, int edx_unused, const float* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax]
        push 0
        push 0
        push ecx
        add ecx, 0x3c
        fstp dword ptr [esp]
        call ext_00538550
        ret 4
    }
}
