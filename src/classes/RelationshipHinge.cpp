// Decompiled translation unit: src/classes/RelationshipHinge.cpp

extern "C" int ext_007D8700(int);
extern "C" int ext_007C9260(int);

// [0x0064E1C0] RelationshipHinge::vfunc_49 (25 bytes)
extern "C" int __fastcall fn_0064E1C0(void* self) {
    int a = ext_007D8700(*(int*)((char*)self + 0x64));
    int b = ext_007C9260(a);
    return b != 0;
}

extern "C" int ext_007C9370(int, int);

// [0x00658BF0] RelationshipHinge::vfunc_55 (29 bytes)
extern "C" int __fastcall fn_00658BF0(void* self, int edx_unused, int a1) {
    return ext_007C9370(ext_007D8700(*(int*)((char*)self + 0x64)), a1);
}
