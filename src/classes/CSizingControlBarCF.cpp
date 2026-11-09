// Decompiled translation unit: src/classes/CSizingControlBarCF.cpp

// [0x004546D0] CSizingControlBarCF::vfunc_1 (44 bytes)
extern "C" void ext_00454BA0();
extern "C" void ext_006A5C5C();
extern "C" int mem_009242F4;

extern "C" void* __fastcall fn_004546D0(void* self, int edx_unused, int flags) {
    typedef void (__fastcall *ThisFn)(void*);
    typedef void (__cdecl *CFn)(void*);
    ((ThisFn)mem_009242F4)((char*)self + 0x12c);
    ((ThisFn)ext_00454BA0)(self);
    if (flags & 1) {
        ((CFn)ext_006A5C5C)(self);
    }
    return self;
}
