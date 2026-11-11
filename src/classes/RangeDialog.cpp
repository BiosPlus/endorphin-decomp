// Decompiled translation unit: src/classes/RangeDialog.cpp

extern "C" void ext_006A5F44();

// [0x004495D0] RangeDialog::vfunc_63 (82 bytes)
extern "C" void __fastcall fn_004495D0(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    typedef void (__stdcall *DdxFn)(int, int, void*);
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x499, p + 0x78);
    ddx(a1, 0x49b, (void*)*(int*)(p + 0xcc));
    ddx(a1, 0x49a, p + 0xd0);
    ddx(a1, 0x49c, (void*)*(int*)(p + 0x124));
}

// [0x004495A0] RangeDialog::vfunc_86 (35 bytes)
extern "C" void ext_004490F0();
extern "C" void ext_00449160();
extern "C" void ext_006A5FB0();

extern "C" void __fastcall fn_004495A0(void* self) {
    char* p = (char*)self;
    typedef int (__fastcall *GetFn)(void*);
    typedef void (__fastcall *TailFn)(void*);
    *(int*)(p + 0x144) = ((GetFn)ext_004490F0)(self);
    *(int*)(p + 0x148) = ((GetFn)ext_00449160)(self);
    ((TailFn)ext_006A5FB0)(self);
}
