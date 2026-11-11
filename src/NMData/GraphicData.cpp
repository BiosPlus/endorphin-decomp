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

// [0x0061FF40] NMData::GraphicData::vfunc_14 (60 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_0061FF40(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x9c
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        add ecx, 0x154
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00620120] NMData::GraphicData::vfunc_34 (139 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00620120(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x891da8
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je short null_this
        lea eax, [esi + 0xc]
        jmp short after_this
null_this:
        xor eax, eax
after_this:
        mov edx, dword ptr [mem_00B40640]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0xd8]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x24]
        push eax
        call ext_00493E40
        mov edi, eax
        mov dword ptr [esp + 0x18], edi
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xd8]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        call eax
        push edi
        lea ecx, [esi + 0xc]
        mov dword ptr [edi + 0x20], eax
        call ext_00528B90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    }
}
