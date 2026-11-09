// Decompiled translation unit: src/classes/ForceApplicationTool.cpp

// [0x00544380] ForceApplicationTool::vfunc_26 (18 bytes)
extern "C" void ext_005442D0();

extern "C" void __fastcall fn_00544380(void* self) {
    typedef void (__fastcall *VFunc)(void*);
    ext_005442D0();
    void* vt = *(void**)self;
    VFunc f = *(VFunc*)((char*)vt + 0x74);
    f(self);
}
