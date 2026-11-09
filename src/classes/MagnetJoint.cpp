// Decompiled translation unit: src/classes/MagnetJoint.cpp

extern "C" int __cdecl ext_007D8700(int a1);
extern "C" int __cdecl ext_007C9260(int a1);

// [0x0065A070] MagnetJoint::vfunc_49 (25 bytes)
extern "C" int __fastcall fn_0065A070(unsigned char* self) {
    int r = ext_007D8700(*(int*)(self + 0x6C));
    int s = ext_007C9260(r);
    return s != 0;
}

// [0x0065A1A0] MagnetJoint::vfunc_41 (41 bytes)
extern "C" void __cdecl ext_007C9B90(int a0, float a1, float a2, float a3);

extern "C" void __fastcall fn_0065A1A0(unsigned char* self, int edx_unused, float* v) {
    ext_007C9B90(*(int*)(self + 0x6C), v[0], v[1], v[2]);
}

// [0x0065A1D0] MagnetJoint::vfunc_42 (41 bytes)
extern "C" void __cdecl ext_007C9B60(int a0, float a1, float a2, float a3);
extern "C" void __fastcall fn_0065A1D0(unsigned char* self, int edx_unused, float* v) {
    ext_007C9B60(*(int*)(self + 0x6C), v[0], v[1], v[2]);
}
