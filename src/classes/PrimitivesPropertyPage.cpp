// Decompiled translation unit: src/classes/PrimitivesPropertyPage.cpp

// [0x004477F0] PrimitivesPropertyPage::vfunc_63 (193 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_004477F0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x435, p + 0x8c);
    ddx(a1, 0x436, p + 0xe0);
    ddx(a1, 0x48d, p + 0x134);
    ddx(a1, 0x42f, p + 0x188);
    ddx(a1, 0x490, p + 0x1dc);
    ddx(a1, 0x48e, p + 0x230);
    ddx(a1, 0x433, p + 0x284);
    ddx(a1, 0x432, p + 0x2d8);
    ddx(a1, 0x437, p + 0x32c);
    ddx(a1, 0x48f, p + 0x380);
}
