// Decompiled translation unit: src/Primitives/Cuboid.cpp

extern "C" void ext_0053A610();

// [0x0053D2B0] Primitives::Cuboid::vfunc_25 (42 bytes)
extern "C" void __fastcall fn_0053D2B0(unsigned char* self, int edx_unused, int a1, int a2, int a3) {
    typedef void (__fastcall *PlaneFn)(void*, int, int, int, int);
    ((PlaneFn)ext_0053A610)(self, a1, a1, a2, a3);
    unsigned int flags = *(unsigned int*)(self + 0x1c);
    if (!(flags & 0x40)) {
        flags ^= 0x40;
        *(unsigned int*)(self + 0x1c) = flags;
    }
}
