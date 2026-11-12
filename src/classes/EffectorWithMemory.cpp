// Decompiled translation unit: src/classes/EffectorWithMemory.cpp

// [0x00607ED0] EffectorWithMemory::vfunc_0 (69 bytes)
extern "C" void ext_00602EF0();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_00607ED0(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x70);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x70) = 0;
    *reinterpret_cast<int*>(p + 0x74) = 0;
    *reinterpret_cast<int*>(p + 0x78) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00602EF0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}

// [0x0063CB20] EffectorWithMemory::vfunc_33 (65 bytes)
extern "C" void ext_0063CA70();

extern "C" void __fastcall fn_0063CB20(void* self) {
    unsigned char* p = static_cast<unsigned char*>(self);
    reinterpret_cast<void (__fastcall*)(void*)>(ext_0063CA70)(self);
    void* obj = *reinterpret_cast<void**>(p + 0x04);
    if (p[0x5c] != 0) {
        double d = static_cast<double>(*reinterpret_cast<float*>(p + 0x64));
        int v = *reinterpret_cast<int*>(p + 0x34);
        void** vt = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (__thiscall*)(void*, int, double)>(vt[3])(obj, v, d);
    } else {
        double d = 0.0;
        int v = *reinterpret_cast<int*>(p + 0x34);
        void** vt = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (__thiscall*)(void*, int, double)>(vt[3])(obj, v, d);
    }
    obj = *reinterpret_cast<void**>(p + 0x04);
    void** vt = *reinterpret_cast<void***>(obj);
    reinterpret_cast<void (__fastcall*)(void*)>(vt[0])(obj);
}
