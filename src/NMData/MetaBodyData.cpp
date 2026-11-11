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

// [0x005B6E70] NMData::MetaBodyData::vfunc_36 (143 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B6E70(void* self, int edx_unused, float* scale) {
    __asm {
        sub esp, 0x10
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x158], 0x0
        je short L_end
        fldz
        mov eax, dword ptr [edi + 0xc]
        mov edx, dword ptr [eax + 0x18]
        fst dword ptr [esp + 0x10]
        push ebx
        fst dword ptr [esp + 0x10]
        push esi
        fst dword ptr [esp + 0x10]
        lea esi, [edi + 0xc]
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [eax]
        mov ebx, dword ptr [edi + 0x158]
        fmul dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        mov eax, dword ptr [esi]
        fmul dword ptr [esp + 0x18]
        mov edx, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x18]
        call edx
        cmp dword ptr [edi + 0x10], 0x0
        je short L_pop
        mov edi, dword ptr [edi + 0x10]
        mov esi, dword ptr [edi]
        lea ecx, [ebx + 0x24]
        call ext_005B11F0
        push eax
        mov eax, dword ptr [esi + 0x34]
        mov ecx, edi
        call eax
    L_pop:
        pop esi
        pop ebx
    L_end:
        pop edi
        add esp, 0x10
        ret 0x4
    }
}
