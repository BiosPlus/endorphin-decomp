// Decompiled translation unit: src/Geometry/MarkerType.cpp

extern "C" void* __cdecl ext_005B3FF0(void* a, int b);
extern "C" void __cdecl ext_00671F30(void* a);

// [0x005B4430] Geometry::MarkerType::vfunc_18 (61 bytes)
extern "C" void* __fastcall fn_005B4430(void* self, int edx_unused, void* a1, int a2, int a3) {
    volatile int local = 0;
    if (a2 != 0x317) {
        ext_00671F30(a1);
        return a1;
    }
    ext_005B3FF0(a1, a3);
    return a1;
}
