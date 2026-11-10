// Decompiled translation unit: src/classes/HotkeyEditDialog.cpp

// [0x00421F50] HotkeyEditDialog::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00421F50(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x452, p + 0x74);
    ddx(a1, 0x476, p + 0x170);
    ddx(a1, 0x475, p + 0x11c);
    ddx(a1, 0x479, p + 0x1e8);
}
