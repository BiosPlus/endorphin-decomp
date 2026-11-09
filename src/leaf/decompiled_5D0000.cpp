// Decompiled translation unit: src/leaf/decompiled_5D0000.cpp

// [0x005D07E0] sub_005D07E0 (12 bytes)
extern "C" void ext_005CFCB0();
extern "C" void ext_005CFCC0();

extern "C" __declspec(naked) void __cdecl fn_005D07E0() {
    __asm {
        call ext_005CFCB0
        __asm _emit 0x50
        call ext_005CFCC0
        ret
    }
}

// [0x005D06D0] sub_005D06D0 (14 bytes)
extern "C" void ext_005B11E0();

extern "C" __declspec(naked) void __fastcall fn_005D06D0(void* self) {
    __asm {
        push 0x0
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005D0790] sub_005D0790 (33 bytes)
extern "C" void __fastcall fn_005D0790(void* self, int edx_unused, void* value) {
    void** slot = (void**)self;
    void* old = *slot;
    if (value != old && old != 0) {
        typedef void (__thiscall *VFn)(void*, int);
        VFn fn = (VFn)((*(void***)old)[0]);
        fn(old, 1);
    }
    *slot = value;
}

// [0x005D1430] sub_005D1430 (33 bytes)
extern "C" void ext_005B11D0();

extern "C" void __fastcall fn_005D1430(unsigned char* self, int edx_unused, float value) {
    typedef float* (__thiscall *AllocFn)(void* ecx_this, int arg);
    float* slot = ((AllocFn)ext_005B11D0)((void*)(self + 0x210), 0);
    *slot = value;
    self[0x214] = 1;
}

// [0x005D0830] sub_005D0830 (47 bytes)
extern "C" int mem_00924EA8;

extern "C" void __fastcall fn_005D0830(void* self) {
    unsigned char* p = (unsigned char*)self;
    typedef void (__thiscall *ClearFn)(void*);
    ((ClearFn)mem_00924EA8)(p + 4);
    *(float*)(p + 0x2c) = 0.0f;
    *(float*)(p + 0x3c) = 0.0f;
    *(int*)(p + 0x20) = 0;
    *(float*)(p + 0x40) = 0.0f;
    *(int*)(p + 0x24) = 0;
    *(int*)(p + 0x28) = 0;
    *(float*)(p + 0x34) = 1.0f;
    *(unsigned char*)(p + 0x30) = 0;
    *(float*)(p + 0x38) = 1.0f;
}

// [0x005D0710] sub_005D0710 (47 bytes)
extern "C" void ext_005B11E0();

extern "C" float __fastcall fn_005D0710(void* self) {
    typedef float (__thiscall *GetFn)(void*, int);
    GetFn get = (GetFn)ext_005B11E0;
    void* p = (char*)self + 0x210;
    double a = get(p, 1);
    double b = get(p, 2);
    return (float)(a / b);
}
