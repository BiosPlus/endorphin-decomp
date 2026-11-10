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
