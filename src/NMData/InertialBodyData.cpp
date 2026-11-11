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
