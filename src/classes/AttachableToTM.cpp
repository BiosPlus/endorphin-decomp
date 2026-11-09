// Decompiled translation unit: src/classes/AttachableToTM.cpp

// [0x0053A730] AttachableToTM::vfunc_0 (31 bytes)
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_0053A730(void* self, int edx_unused, int flags) {
    *(int*)self = 0x0095536C;
    if (flags & 1) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(self);
    }
    return self;
}
