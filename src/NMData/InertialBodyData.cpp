// Decompiled translation unit: src/NMData/InertialBodyData.cpp

// [0x005CE870] NMData::InertialBodyData::vfunc_1_off_4 (58 bytes)
typedef void (__thiscall *Vec4Fn)(void* self, float* v);

extern "C" void __fastcall fn_005CE870(void* self, int edx_unused, const float* src) {
    float tmp[4];
    tmp[0] = src[0];
    void* obj = (char*)*(void**)((char*)self + 0xac) + 0xc;
    tmp[1] = src[1];
    tmp[2] = src[2];
    tmp[3] = 1.0f;
    void** vtbl = *(void***)obj;
    Vec4Fn fn = (Vec4Fn)vtbl[5];
    fn(obj, tmp);
}

// [0x005CF8D0] NMData::InertialBodyData::vfunc_15 (57 bytes)
extern "C" void ext_005CF4A0();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_005CF8D0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x234
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je short L_005CF8F8
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 8
L_005CF8F8:
        push ecx
        push esi
        call ext_005CF4A0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005CE760] NMData::InertialBodyData::vfunc_14 (64 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_005CE760(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x9c
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je short L_005CE78E
        sub eax, 0x1b
        je short L_005CE791
        push esi
        call ext_0046F7D0
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 8
L_005CE78E:
        add ecx, 0x24
L_005CE791:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005CE7A0] NMData::InertialBodyData::vfunc_0_off_4 (205 bytes)
extern "C" void ext_00528B60();
extern "C" void ext_005866C0();
extern "C" void ext_00594000();
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005CE7A0(void* self) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je L_005CE868
        mov eax, dword ptr [eax + 0x94]
        test eax, eax
        je L_005CE868
        cmp dword ptr [eax + 0x10], 0
        je L_005CE868
        fldz
        push edi
        fst dword ptr [esp + 0x1c]
        lea edi, [esi + 0x20]
        fst dword ptr [esp + 0x18]
        mov ecx, edi
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x10]
        call ext_005B11F0
        fld dword ptr [eax + 0x8]
        mov ecx, edi
        fstp dword ptr [esp + 0xc]
        call ext_005B11F0
        fld dword ptr [eax + 0x4]
        mov ecx, edi
        fstp dword ptr [esp + 0x8]
        call ext_005B11F0
        fld dword ptr [eax]
        mov eax, dword ptr [esi + 0xac]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        lea ecx, [eax + 0xc]
        fstp dword ptr [esp + 0x14]
        lea edx, [esp + 0x10]
        fld dword ptr [esp + 0xc]
        push edx
        fstp dword ptr [esp + 0x1c]
        fld1
        fstp dword ptr [esp + 0x20]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        call eax
        mov eax, dword ptr [esi + 0xac]
        mov ecx, dword ptr [eax + 0x94]
        mov edx, dword ptr [ecx + 0x10]
        mov edi, dword ptr [edx + 0x10]
        lea ecx, [eax + 0xc]
        call ext_00528B60
        call ext_00594000
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add eax, 0x258
        push eax
        call ext_005866C0
        pop edi
L_005CE868:
        pop esi
        add esp, 0x18
        ret
    }
}
