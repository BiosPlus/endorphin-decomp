// Decompiled translation unit: src/Geometry/MeshType.cpp

// [0x005B43B0] Geometry::MeshType::vfunc_18 (114 bytes)
extern "C" void* __cdecl ext_005B3FF0(void* a, int b);
extern "C" void* __cdecl ext_005B4010(void* a, int b);
extern "C" void* __cdecl ext_005B4030(void* a, int b);
extern "C" void __cdecl ext_00671F30(void* a);

extern "C" void* __fastcall fn_005B43B0(void* self, int edx_unused, void* a1, int a2, int a3) {
    volatile int local = 0;
    switch (a2) {
    case 0x318: ext_005B3FF0(a1, a3); break;
    case 0x319: ext_005B4010(a1, a3); break;
    case 0x31A: ext_005B4030(a1, a3); break;
    default:    ext_00671F30(a1); break;
    }
    return a1;
}
