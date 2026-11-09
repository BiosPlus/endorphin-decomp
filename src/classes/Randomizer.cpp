// Decompiled translation unit: src/classes/Randomizer.cpp

extern "C" void ext_006A6E9E();

// [0x0068BBC0] Randomizer::vfunc_10 (44 bytes)
extern "C" void __fastcall fn_0068BBC0(void* self, int edx_unused, void* a1) {
    typedef void* (__cdecl *Fn)(void*, int, void*, void*, int);
    void* p = ((Fn)ext_006A6E9E)(a1, 0, (void*)0x00A2E2F8, (void*)0x00AA3000, 0);
    if (p) {
        *(void**)((char*)self + 8) = *(void**)((char*)p + 8);
    }
}
