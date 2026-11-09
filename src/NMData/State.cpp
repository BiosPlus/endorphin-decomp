// Decompiled translation unit: src/NMData/State.cpp

extern "C" void ext_006829A0();

// [0x008702F0] NMData::State::vfunc_1_off_18 (12 bytes)
extern "C" __declspec(naked) void fn_008702F0() {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_006829A0
        ret 0x8
    }
}

extern "C" void ext_004A14D0();

// [0x004A17B0] NMData::State::vfunc_37_off_8 (16 bytes)
extern "C" void __fastcall fn_004A17B0(void* self) {
    void* p = (char*)self - 8;
    void* obj = *(void**)((char*)self + 0xf4);
    ((void (__thiscall *)(void*, void*))ext_004A14D0)(obj, p);
}

extern "C" void ext_0049ED70();

// [0x0049F240] NMData::State::vfunc_1_off_10 (28 bytes)
extern "C" void* __fastcall fn_0049F240(void* self, int edx_unused, int a1) {
    void* r = ((void* (__thiscall *)(void*, int))ext_0049ED70)((char*)self - 0x10, a1);
    if (r != 0) {
        return (char*)r + 0x10;
    }
    return 0;
}
