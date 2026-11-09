// Decompiled translation unit: src/Properties/PropertyManager.cpp

// [0x00676210] Properties::PropertyManager::vfunc_0 (28 bytes)
// Forwards its three stack arguments to sub_00675DD0 as (a1, a2, a3, 0) using cdecl, then pops 0xC bytes.
extern "C" void ext_00675DD0();

extern "C" int __stdcall fn_00676210(int a1, int a2, int a3) {
    typedef int (__cdecl *Fn)(int, int, int, int);
    return ((Fn)ext_00675DD0)(a1, a2, a3, 0);
}
