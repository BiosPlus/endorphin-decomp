// Decompiled translation unit: src/classes/HasRelativeTMPtr.cpp

extern "C" void ext_004875A0();

// [0x0053A7A0] HasRelativeTMPtr::vfunc_2 (24 bytes)
extern "C" int __fastcall fn_0053A7A0(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    int field4 = *(int*)(p + 4);
    void* field8 = *(void**)(p + 8);
    typedef void (__thiscall *Fn)(void*, int, int);
    ((Fn)ext_004875A0)(field8, a1, field4);
    return a1;
}
