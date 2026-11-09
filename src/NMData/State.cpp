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

// [0x0049AC80] NMData::State::vfunc_4_off_10 (34 bytes)
extern "C" void* __fastcall fn_0049AC80(void* self, int edx_unused, unsigned char a1) {
    if (a1 != 0) {
        if (*((char*)self + 0x54) != 0) {
            return 0;
        }
    }
    void* p = *(void**)((char*)self + 0xec);
    if (p != 0) {
        return (char*)p + 0x10;
    }
    return 0;
}

extern "C" int mem_00AA237C;
extern "C" int mem_00924FE4;

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049FA70(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00AA237C]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
