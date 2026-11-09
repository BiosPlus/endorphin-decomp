// Decompiled translation unit: src/classes/GLMatrixStackManager.cpp

// [0x0054E8A0] GLMatrixStackManager::vfunc_0 (31 bytes)
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_0054E8A0(void* self, int edx_unused, int flags) {
    *(int*)self = 0x00956F94;
    if (flags & 1) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(self);
    }
    return self;
}

// [0x0054E8F0] GLMatrixStackManager::vfunc_7 (35 bytes)
extern "C" int mem_009253D0;

extern "C" void __stdcall fn_0054E8F0(const float* v) {
    typedef void (__stdcall *PFN_glTranslatef)(float, float, float);
    ((PFN_glTranslatef)mem_009253D0)(v[0], v[1], v[2]);
}
