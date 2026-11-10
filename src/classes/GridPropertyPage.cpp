// Decompiled translation unit: src/classes/GridPropertyPage.cpp

extern "C" void ext_006A5FC8();
extern "C" void ext_0052EE00();
extern "C" void ext_006A608E();

// [0x0041BB70] GridPropertyPage::vfunc_84 (54 bytes)
extern "C" int __fastcall fn_0041BB70(void* self) {
    typedef void* (__thiscall *PFN_getter)(void*);
    typedef void* (__cdecl *PFN_plain)();
    typedef unsigned char (__thiscall *PFN_vcall)(void*);
    typedef void (__thiscall *PFN_sink)(void*, int);

    void* wnd = ((PFN_getter)ext_006A5FC8)(self);
    void* obj = ((PFN_plain)ext_0052EE00)();
    unsigned char r = ((PFN_vcall)(*(void***)obj)[0x138 / 4])(obj);
    *(int*)((char*)self + 0x1f0) = (r == 0) ? 1 : 0;
    ((PFN_sink)ext_006A608E)(self, 0);
    (void)wnd;
    return 1;
}
