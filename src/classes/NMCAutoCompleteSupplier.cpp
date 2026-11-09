// Decompiled translation unit: src/classes/NMCAutoCompleteSupplier.cpp

// [0x0041CC80] NMCAutoCompleteSupplier::vfunc_0 (31 bytes)
extern "C" void __cdecl ext_006A5C5C(void* p);

extern "C" void* __fastcall fn_0041CC80(void* self, int edx_unused, int flags) {
    void** vtbl = (void**)self;
    *vtbl = (void*)0x0092DBC4;
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
