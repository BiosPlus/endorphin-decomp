// Decompiled translation unit: src/NMData/GraphicData.cpp

// [0x00587D10] NMData::GraphicData::vfunc_33 (22 bytes)
extern "C" void ext_005B5A10();
extern "C" void ext_0058A1A0();

extern "C" void __fastcall fn_00587D10(void* self) {
    typedef void (__fastcall *thiscall_fn)(void*);
    ((thiscall_fn)ext_005B5A10)(static_cast<char*>(self) + 0x154);
    ((thiscall_fn)ext_0058A1A0)(self);
}

// [0x0061FEF0] NMData::GraphicData::vfunc_6_off_C (67 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_0061FEF0(void* self, int edx_unused, float* out) {
    __asm {
        sub esp, 0x10
        add ecx, 0x148
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
        add esp, 0x10
        ret 0x4
    }
}
