// Decompiled translation unit: src/classes/Randomizer.cpp

extern "C" void ext_006A6E9E();
extern "C" void ext_0063EFE0();
extern "C" void ext_0053F5F0();
extern "C" void ext_00640110();
extern "C" void ext_00640A50();

// [0x0068BBC0] Randomizer::vfunc_10 (44 bytes)
extern "C" void __fastcall fn_0068BBC0(void* self, int edx_unused, void* a1) {
    typedef void* (__cdecl *Fn)(void*, int, void*, void*, int);
    void* p = ((Fn)ext_006A6E9E)(a1, 0, (void*)0x00A2E2F8, (void*)0x00AA3000, 0);
    if (p) {
        *(void**)((char*)self + 8) = *(void**)((char*)p + 8);
    }
}

// [0x0068BD60] Randomizer::vfunc_1_off_4 (42 bytes)
extern "C" void __fastcall fn_0068BD60(void* self, int edx_unused, void* a1) {
    void* r = ((void* (__fastcall*)(void*, int, void*))ext_0063EFE0)(a1, edx_unused, (void*)0x00985004);
    a1 = r;
    ((void (__cdecl*)(void*, void*))ext_0053F5F0)((char*)self + 4, &a1);
}

// [0x0068BD90] Randomizer::vfunc_3_off_4 (40 bytes)
extern "C" void* __fastcall fn_0068BD90(void* self, int edx_unused, void* a1) {
    void* r = ((void* (__fastcall*)(void*, int, void*))ext_00640110)(a1, edx_unused, (void*)0x00985004);
    ((void (__cdecl*)(void*, int))ext_00640A50)(r, *(int*)((char*)self + 4));
    return a1;
}
