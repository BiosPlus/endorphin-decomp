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

// [0x005B6F00] NMData::MetaBodyData::vfunc_38 (182 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005B6F00(void* self, int edx_unused, float* scale) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x158], 0x0
        je L_end
        fldz
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0x18]
        fst dword ptr [esp + 0x10]
        push ebx
        fst dword ptr [esp + 0x10]
        push edi
        fst dword ptr [esp + 0x10]
        lea edi, [esi + 0xc]
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        call edx
        mov ebx, dword ptr [esi + 0x158]
        mov eax, dword ptr [ebx + 0x2c]
        add ebx, 0x24
        cmp eax, 0x5
        jne L_t4
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jmp L_set
    L_t4:
        cmp eax, 0x4
        jne L_t2
        mov ecx, dword ptr [esp + 0x20]
        fld dword ptr [ecx]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jmp L_set
    L_t2:
        cmp eax, 0x2
        jne L_set
        mov edx, dword ptr [esp + 0x20]
        fld dword ptr [edx]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
    L_set:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x14]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        call edx
        cmp dword ptr [esi + 0x10], 0x0
        je L_pop
        mov eax, dword ptr [esi + 0x10]
        mov edi, dword ptr [eax]
        mov ecx, ebx
        add edi, 0x34
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [edi]
        push eax
        call edx
    L_pop:
        pop edi
        pop ebx
    L_end:
        pop esi
        add esp, 0x10
        ret 0x4
    }
}
