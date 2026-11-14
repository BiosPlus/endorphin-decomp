// Decompiled translation unit: src/VMCSModes/RunEvolutionMode.cpp

// [0x004F2850] VMCSModes::RunEvolutionMode::vfunc_18 (23 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469130();

extern "C" void __fastcall fn_004F2850(void* self) {
    typedef void (__thiscall *Callee0)(void* self);
    typedef void (__thiscall *Callee1)(void* self, int a);
    char* p = static_cast<char*>(self);
    ((Callee0)ext_00469130)(*(void**)(p + 0x8));
    ((Callee1)ext_004667A0)(*(void**)(p + 0x4), 1);
}

// [0x004F4D40] VMCSModes::RunEvolutionMode::vfunc_0 (67 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00468660();
extern "C" void ext_00469530();
extern "C" void ext_0046BB30();
extern "C" void ext_00594000();
extern "C" void ext_00594730();

extern "C" void __fastcall fn_004F4D40(void* self) {
    typedef void (__thiscall *Callee0)(void* self);
    typedef void (__thiscall *Callee1)(void* self, int a);
    typedef void (__thiscall *Callee2)(void* self, int a, int b);
    typedef void* (__thiscall *CalleeRet)(void* self);
    typedef void (__thiscall *VCall)(void* self);
    typedef void* (__cdecl *CalleeNoArg)();
    char* p = static_cast<char*>(self);
    ((Callee0)ext_0046BB30)(*(void**)(p + 0x8));
    ((Callee1)ext_004667A0)(*(void**)(p + 0x4), 1);
    void* obj = ((CalleeRet)ext_00468660)(*(void**)(p + 0x8));
    void** vt = *(void***)obj;
    ((VCall)vt[0xac / 4])(obj);
    void* r = ((CalleeNoArg)ext_00594000)();
    ((Callee0)ext_00594730)(r);
    ((Callee2)ext_00469530)(*(void**)(p + 0x8), 5, 0);
}
