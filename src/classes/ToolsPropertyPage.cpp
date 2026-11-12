// Decompiled translation unit: src/classes/ToolsPropertyPage.cpp

// [0x0045B0A0] ToolsPropertyPage::vfunc_63 (175 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0045B0A0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x42f, p + 0x8c);
    ddx(a1, 0x492, p + 0xe0);
    ddx(a1, 0x430, p + 0x134);
    ddx(a1, 0x438, p + 0x188);
    ddx(a1, 0x431, p + 0x1dc);
    ddx(a1, 0x433, p + 0x230);
    ddx(a1, 0x432, p + 0x284);
    ddx(a1, 0x434, p + 0x2d8);
    ddx(a1, 0x435, p + 0x32c);
}
