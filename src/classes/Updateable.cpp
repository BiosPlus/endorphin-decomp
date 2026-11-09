// Decompiled translation unit: src/classes/Updateable.cpp

extern "C" void __cdecl ext_006A5C5C(void* self);

// [0x00528AC0] Updateable::vfunc_1 (31 bytes)
extern "C" void* __fastcall fn_00528AC0(void* self, int edx_unused, unsigned char flags) {
    *(void**)self = (void*)0x00953454;
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
