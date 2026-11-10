// Decompiled translation unit: src/NMData/MetaBodyData.cpp

// [0x005B6880] NMData::MetaBodyData::vfunc_6_off_C (74 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005B6880(void* self, int edx_unused, float* out) {
    __asm {
        mov eax, dword ptr [ecx + 0x14c]
        sub esp, 0x10
        test eax, eax
        je short L_end
        lea ecx, [eax + 0x24]
        call ext_005B11F0
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fldz
        fstp dword ptr [eax + 0xc]
    L_end:
        add esp, 0x10
        ret 0x4
    }
}
