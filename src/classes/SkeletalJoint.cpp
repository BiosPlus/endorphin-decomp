// Decompiled translation unit: src/classes/SkeletalJoint.cpp

extern "C" void ext_007C5C30();
extern "C" void ext_007C5C50();
extern "C" void ext_007C5C60();

// [0x00646520] SkeletalJoint::vfunc_1 (17 bytes)
extern "C" void __fastcall fn_00646520(void* self) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, int, int))ext_007C5C30)(a, 0, 0);
}

// [0x006463C0] SkeletalJoint::vfunc_21 (20 bytes)
extern "C" void __fastcall fn_006463C0(void* self, int edx_unused, int a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, int))ext_007C5C50)(a, a1);
}

// [0x006463E0] SkeletalJoint::vfunc_20 (20 bytes)
extern "C" void __fastcall fn_006463E0(void* self, int edx_unused, int a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, int))ext_007C5C60)(a, a1);
}
