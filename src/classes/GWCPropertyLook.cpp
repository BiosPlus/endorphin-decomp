// Decompiled translation unit: src/classes/GWCPropertyLook.cpp

// [0x006AFDA0] GWCPropertyLook::vfunc_0 (31 bytes)
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_006AFDA0(void* self, int edx_unused, int flag) {
    *(void**)self = (void*)0x00991168;
    if (flag & 1) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(self);
    }
    return self;
}
