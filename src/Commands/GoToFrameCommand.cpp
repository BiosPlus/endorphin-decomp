// Decompiled translation unit: src/Commands/GoToFrameCommand.cpp

extern "C" void ext_00468180();
extern "C" void ext_00468660();

// [0x0048E050] Commands::GoToFrameCommand::vfunc_1 (30 bytes)
extern "C" void __fastcall fn_0048E050(void* self) {
    typedef void* (__fastcall *Fn)(void*);
    typedef void (__thiscall *VFn)(void*, int);
    void* a = ((Fn)ext_00468180)(self);
    void* b = ((Fn)ext_00468660)(a);
    int arg = *(int*)((char*)self + 0x10);
    VFn f = (VFn)(*(void***)b)[0x58 / 4];
    f(b, arg);
}
