// Decompiled translation unit: src/classes/RefCounted.cpp

// [0x00699050] RefCounted::vfunc_0 (31 bytes)
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_00699050(void* self, int edx_unused, int flags) {
    *(void**)self = (void*)0x0098FABC;
    if (flags & 1) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(self);
    }
    return self;
}
