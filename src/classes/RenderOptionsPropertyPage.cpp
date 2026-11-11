// Decompiled translation unit: src/classes/RenderOptionsPropertyPage.cpp

// [0x0044A170] RenderOptionsPropertyPage::vfunc_63 (103 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0044A170(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x477, p + 0x88);
    ddx(a1, 0x482, p + 0xf4);
    ddx(a1, 0x47d, p + 0x148);
    ddx(a1, 0x484, p + 0x19c);
    ddx(a1, 0x489, p + 0x1f8);
}
