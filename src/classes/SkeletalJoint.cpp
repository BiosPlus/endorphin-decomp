// Decompiled translation unit: src/classes/SkeletalJoint.cpp

extern "C" void ext_007C5C30();
extern "C" void ext_007C5C50();
extern "C" void ext_007C5C60();
extern "C" void ext_007C59C0();
extern "C" void ext_007C5C70();
extern "C" void ext_007C5C80();
extern "C" void ext_007C5C90();
extern "C" void ext_007C5CA0();
extern "C" void ext_007C5CB0();
extern "C" void ext_007C5CC0();
extern "C" void ext_007C5CD0();
extern "C" void ext_007C5CE0();
extern "C" void ext_007C5CF0();
extern "C" void ext_007C93A0();
extern "C" void ext_007D8700();
extern "C" void ext_007C5900();
extern "C" void ext_007C5910();

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

// [0x006463A0] SkeletalJoint::vfunc_16 (20 bytes)
extern "C" void __fastcall fn_006463A0(void* self, int edx_unused, int a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, int))ext_007C59C0)(a, a1);
}

// [0x00646400] SkeletalJoint::vfunc_22 (23 bytes)
extern "C" void __fastcall fn_00646400(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5C70)(a, a1);
}

// [0x00646420] SkeletalJoint::vfunc_28 (23 bytes)
extern "C" void __fastcall fn_00646420(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5C80)(a, a1);
}

// [0x00646440] SkeletalJoint::vfunc_25 (23 bytes)
extern "C" void __fastcall fn_00646440(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5C90)(a, a1);
}

// [0x00646460] SkeletalJoint::vfunc_23 (23 bytes)
extern "C" void __fastcall fn_00646460(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5CA0)(a, a1);
}

// [0x00646480] SkeletalJoint::vfunc_29 (23 bytes)
extern "C" void __fastcall fn_00646480(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5CB0)(a, a1);
}

// [0x006464A0] SkeletalJoint::vfunc_26 (23 bytes)
extern "C" void __fastcall fn_006464A0(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5CC0)(a, a1);
}

// [0x006464C0] SkeletalJoint::vfunc_24 (23 bytes)
extern "C" void __fastcall fn_006464C0(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5CD0)(a, a1);
}

// [0x006464E0] SkeletalJoint::vfunc_30 (23 bytes)
extern "C" void __fastcall fn_006464E0(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5CE0)(a, a1);
}

// [0x00646500] SkeletalJoint::vfunc_27 (23 bytes)
extern "C" void __fastcall fn_00646500(void* self, int edx_unused, float a1) {
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float))ext_007C5CF0)(a, a1);
}

// [0x0064E360] SkeletalJoint::vfunc_55 (28 bytes)
extern "C" void __fastcall fn_0064E360(void* self, int edx_unused, int a1) {
    int b = ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x64));
    ((void (__cdecl*)(int, int, int))ext_007C93A0)(b, 0, a1);
}

// [0x0064E9E0] SkeletalJoint::vfunc_17 (55 bytes)
extern "C" void __fastcall fn_0064E9E0(void* self, int edx_unused, float* out) {
    char* p = (char*)self;
    out[0] = *(float*)(p + 0x70);
    out[1] = *(float*)(p + 0x74);
    out[2] = *(float*)(p + 0x78);
    out[0] = out[0] / *(float*)(p + 0x7C);
    out[1] = out[1] / *(float*)(p + 0x80);
    out[2] = out[2] / *(float*)(p + 0x84);
}

// [0x0064E3F0] SkeletalJoint::vfunc_19 (60 bytes)
extern "C" int mem_009802E0;

extern "C" __declspec(naked) void __fastcall fn_0064E3F0(void* self, int edx_unused, float* out) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x64]
        push eax
        call ext_007C5900
        add esp, 0x4
        test eax, 0x700
        je short L_0064E41C
        mov ecx, dword ptr [esi + 0x64]
        push ecx
        call ext_007C5910
        mov edx, dword ptr [esp + 0xc]
        add esp, 0x4
        fstp dword ptr [edx]
        pop esi
        ret 0x4
    L_0064E41C:
        fld dword ptr [mem_009802E0]
        mov eax, dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        pop esi
        ret 0x4
    }
}

// [0x0064E560] SkeletalJoint::vfunc_36 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064E560(void* self, int edx_unused, const float* a1, float* a2) {
    __asm {
        fld dword ptr [ecx + 0x7c]
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        fmul dword ptr [edx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x80]
        fmul dword ptr [edx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x84]
        fmul dword ptr [edx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [eax]
        fadd dword ptr [ecx + 0x70]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x74]
        fadd dword ptr [eax + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x78]
        fadd dword ptr [eax + 0x8]
        fstp dword ptr [eax + 0x8]
        ret 0x8
    }
}
