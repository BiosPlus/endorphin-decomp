// Decompiled translation unit: src/VMCSModes/SimulationMode.cpp

// [0x004F28A0] VMCSModes::SimulationMode::vfunc_88 (19 bytes)
extern "C" void ext_0046F890();

typedef unsigned char (__fastcall *Callee_0046F890)(void* self);

extern "C" int __fastcall fn_004F28A0(void* self) {
    void* obj = *(void**)((char*)self + 0x8);
    void* inner = *(void**)((char*)obj + 0x14);
    unsigned char r = ((Callee_0046F890)ext_0046F890)(inner);
    return r ? 0 : 1;
}

// [0x004F2D80] VMCSModes::SimulationMode::vfunc_20 (39 bytes)
extern "C" void ext_004667A0();
extern "C" void ext_00469530();

extern "C" void __fastcall fn_004F2D80(void* self) {
    typedef void (__thiscall *Fn1)(void*, int, int);
    typedef void (__thiscall *Fn2)(void*, int);
    typedef void (__thiscall *Fn3)(void*);
    ((Fn1)ext_00469530)(*(void**)((char*)self + 0x8), 5, 0);
    ((Fn2)ext_004667A0)(*(void**)((char*)self + 0x4), 1);
    void* obj4 = *(void**)((char*)self + 0x4);
    void* inner = *(void**)((char*)obj4 + 0xc);
    void** vtbl = *(void***)inner;
    ((Fn3)vtbl[20])(inner);
}
