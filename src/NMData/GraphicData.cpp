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

// [0x0061FEA0] NMData::GraphicData::vfunc_5_off_C (78 bytes)
extern "C" void ext_005B1B60();

extern "C" __declspec(naked) void __fastcall fn_0061FEA0(void* self, int edx_unused, float* v) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0x148]
        call ext_005B1B60
        fldz
        cmp dword ptr [esi + 0x4], 0x0
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x10]
        je skip_call
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esp + 0x8]
        push edx
        call eax
skip_call:
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}
