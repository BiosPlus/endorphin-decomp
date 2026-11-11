// Decompiled translation unit: src/NMData/JointLimit.cpp

extern "C" void __cdecl ext_0061ECD0(void* a1, void* self);
extern "C" void __cdecl ext_0061ECF0(void* a1, void* self);
extern "C" void __cdecl ext_0061ED10(void* a1, void* self);
extern "C" void __cdecl ext_0061ED30(void* a1, void* self);
extern "C" void __cdecl ext_00671F30(void* a1);

// [0x0061F090] NMData::JointLimit::vfunc_15 (146 bytes)
extern "C" void* __fastcall fn_0061F090(void* self, int edx_unused, void* a1, int a2) {
    volatile int local = 0;
    switch (a2) {
    case 0x48:
        ext_0061ED30(a1, self);
        break;
    case 0x14a:
        ext_0061ED10(a1, self);
        break;
    case 0x177:
        ext_0061ECF0(a1, self);
        break;
    case 0x1b0:
        ext_0061ECD0(a1, self);
        break;
    default:
        ext_00671F30(a1);
        break;
    }
    return a1;
}
