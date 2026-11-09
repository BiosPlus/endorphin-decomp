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

extern "C" int ext_007C9C50(int);
extern "C" int ext_007C9DD0(int);
extern "C" float ext_007C9CB0(int);

// [0x00658CB0] RelationshipHinge::vfunc_38 (29 bytes)
extern "C" float __fastcall fn_00658CB0(void* self, int edx_unused, int a1) {
    int a = ext_007C9C50(*(int*)((char*)self + 0x64));
    int b = ext_007C9DD0(a);
    return -ext_007C9CB0(b);
}

extern "C" int ext_007C9DE0(int);

// [0x00658CD0] RelationshipHinge::vfunc_39 (29 bytes)
extern "C" float __fastcall fn_00658CD0(void* self, int edx_unused, int a1) {
    int a = ext_007C9C50(*(int*)((char*)self + 0x64));
    int b = ext_007C9DE0(a);
    return -ext_007C9CB0(b);
}
