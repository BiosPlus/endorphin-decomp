// Decompiled translation unit: src/classes/LoadPoseDialog.cpp

// [0x0042F540] LoadPoseDialog::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0042F540(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4b0, p + 0x74);
    ddx(a1, 0x439, p + 0xc8);
    ddx(a1, 0x43a, p + 0x11c);
    ddx(a1, 0x43b, p + 0x170);
}
