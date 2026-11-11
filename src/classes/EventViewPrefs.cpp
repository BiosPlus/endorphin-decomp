// Decompiled translation unit: src/classes/EventViewPrefs.cpp

// [0x00416D90] EventViewPrefs::vfunc_63 (103 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00416D90(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x42e, p + 0x8c);
    ddx(a1, 0x42f, p + 0xe0);
    ddx(a1, 0x438, p + 0x134);
    ddx(a1, 0x430, p + 0x188);
    ddx(a1, 0x431, p + 0x1dc);
}
