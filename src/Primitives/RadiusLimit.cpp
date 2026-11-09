// Decompiled translation unit: src/Primitives/RadiusLimit.cpp

// [0x0053C090] Primitives::RadiusLimit::vfunc_28 (42 bytes)
extern "C" void ext_005B11D0();
extern "C" void ext_0063E036();

typedef float* (__thiscall *GetFloatPtrFn)(void* ecx_this, int arg);
typedef void (__stdcall *GluSphereFn)(void* quadric, double radius, int slices, int stacks);

extern "C" void __fastcall fn_0053C090(void* self, int edx_unused, int a1) {
    char* p = reinterpret_cast<char*>(self);
    void* sub = *reinterpret_cast<void**>(p + 0x20);
    float* radius_ptr = ((GetFloatPtrFn)ext_005B11D0)(sub, 3);
    double radius = (double)(*radius_ptr);
    GluSphereFn gluSphere = (GluSphereFn)ext_0063E036;
    gluSphere(*reinterpret_cast<void**>(p + 0x48), radius,
              *reinterpret_cast<int*>(p + 0x3c), *reinterpret_cast<int*>(p + 0x44));
}
