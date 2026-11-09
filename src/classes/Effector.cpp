// Decompiled translation unit: src/classes/Effector.cpp

extern "C" void ext_00603090();
extern "C" void ext_006A6E9E();

// [0x006036D0] Effector::vfunc_19 (18 bytes)
extern "C" void __fastcall fn_006036D0(void* self, int edx_unused, float* p) {
    typedef void (__thiscall *Fn)(void*, float);
    ((Fn)ext_00603090)(self, *p);
}

// [0x00602F50] Effector::vfunc_4 (29 bytes)
extern "C" void __fastcall fn_00602F50(void* self, int edx_unused, int a1) {
    typedef void* (__cdecl *Fn)(void*, int, void*, void*, int);
    ((Fn)ext_006A6E9E)(*(void**)((char*)self + 4), 0, (void*)0xA93730, (void*)0xA2E2F8, 0);
}
