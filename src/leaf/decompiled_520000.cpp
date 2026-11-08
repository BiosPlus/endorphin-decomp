// Decompiled translation unit: src/leaf/decompiled_520000.cpp

// [0x00522190] sub_00522190 (25 bytes)
extern "C" void __fastcall fn_00522190(char* self, int edx_unused, int a1) {
    *(int*)(self + 0xc4) = a1;
    void** vtbl = *(void***)self;
    typedef void (__fastcall *VFn)(char*, int, int);
    ((VFn)vtbl[0x17])(self, (int)vtbl, 0);
}
