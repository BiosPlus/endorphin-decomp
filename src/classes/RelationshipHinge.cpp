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

extern "C" float ext_007C9DF0(int);

// [0x00658B90] RelationshipHinge::vfunc_8 (35 bytes)
extern "C" float __fastcall fn_00658B90(void* self, int edx_unused, int a1) {
    if (a1 == 0) {
        int a = ext_007C9C50(*(int*)((char*)self + 0x64));
        return -ext_007C9DF0(a);
    }
    return 0.0f;
}

// [0x00658910] RelationshipHinge::vfunc_10 (31 bytes)
extern "C" int ext_007C9310(int, int, int);

extern "C" __declspec(naked) void __fastcall fn_00658910(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x64]
        push eax
        push 0x0
        push ecx
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9310
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_007C9340();

// [0x006588F0] RelationshipHinge::vfunc_9 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_006588F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x64]
        push eax
        push 0x0
        push ecx
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9340
        add esp, 0xc
        ret 0x4
    }
}
