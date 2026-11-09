// Decompiled translation unit: src/classes/CBaseTabCtrl.cpp

extern "C" void ext_006A5CE0();
extern "C" void ext_006A5EA2();

// [0x00404680] CBaseTabCtrl::vfunc_22 (32 bytes)
extern "C" void __fastcall fn_00404680(void* self) {
    typedef void (__thiscall *Fn0)(void*);
    typedef void (__thiscall *Fn3)(void*, int, int, int);
    ((Fn0)ext_006A5CE0)(self);
    if (*(int*)((char*)self + 0x5c) != 0) {
        ((Fn3)ext_006A5EA2)(self, 0, 0x2000, 0);
    }
}
