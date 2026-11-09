// Decompiled translation unit: src/classes/RelationshipFixedPathJoint.cpp

extern "C" int __cdecl ext_007D8700(int a1);
extern "C" void __cdecl ext_007C9860(int a1);

// [0x00659DB0] RelationshipFixedPathJoint::vfunc_50 (19 bytes)
extern "C" void __fastcall fn_00659DB0(unsigned char* self) {
    int v = *(int*)(self + 0x64);
    int r = ext_007D8700(v);
    ext_007C9860(r);
}

// [0x00659DD0] RelationshipFixedPathJoint::vfunc_52 (20 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00645A00();

extern "C" void __fastcall fn_00659DD0(void* self, int edx_unused, int a1, int a2) {
    ((void (__fastcall*)(void*))ext_00645A00)(self);
    ((void (__fastcall*)(void*))ext_00493D90)((char*)self + 0x64);
}
