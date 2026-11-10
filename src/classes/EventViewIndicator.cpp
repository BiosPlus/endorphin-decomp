// Decompiled translation unit: src/classes/EventViewIndicator.cpp

// [0x004168F0] EventViewIndicator::vfunc_63 (85 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_004168F0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4a1, p + 0x88);
    ddx(a1, 0x435, p + 0xdc);
    ddx(a1, 0x4a2, p + 0x130);
    ddx(a1, 0x4aa, p + 0x188);
}
