// Decompiled translation unit: src/classes/SkeletalJoint.cpp

#include <math.h>

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
extern "C" void ext_007C9930();
extern "C" void ext_007C5900();
extern "C" void ext_007C5910();
extern "C" void ext_006501E0();
extern "C" void ext_00694330();
extern "C" void ext_00694880();

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

extern "C" void ext_007C5920();
extern "C" void ext_007C5950();
extern "C" void ext_007C5980();
extern "C" int mem_009802E0;
extern "C" int mem_00955A40;

// [0x0064E380] SkeletalJoint::vfunc_18 (106 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064E380(void* self, int edx_unused, float* out) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x64]
        push edi
        push eax
        call ext_007C5900
        mov ebx, eax
        add esp, 0x4
        test bl, 0x1
        je L_e380_else1
        mov ecx, dword ptr [esi + 0x64]
        push ecx
        call ext_007C5920
        add esp, 0x4
        jmp L_e380_join1
L_e380_else1:
        fld dword ptr [mem_009802E0]
L_e380_join1:
        test bl, 0x6
        mov edi, dword ptr [esp + 0x10]
        fstp dword ptr [edi]
        je L_e380_else2
        mov edx, dword ptr [esi + 0x64]
        push edx
        call ext_007C5950
        fstp dword ptr [edi + 0x4]
        mov eax, dword ptr [esi + 0x64]
        push eax
        call ext_007C5980
        fstp dword ptr [edi + 0x8]
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        ret 0x4
L_e380_else2:
        fld dword ptr [mem_00955A40]
        fst dword ptr [edi + 0x4]
        fstp dword ptr [edi + 0x8]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0064E5B0] SkeletalJoint::vfunc_37 (117 bytes)
extern "C" void __fastcall fn_0064E5B0(void* self, int edx_unused, const float* src, float* dst) {
    char* s = (char*)self;
    float tmp[3];
    tmp[0] = src[0];
    tmp[1] = src[1];
    tmp[2] = src[2];
    tmp[0] = tmp[0] - *(float*)(s + 0x70);
    tmp[1] = tmp[1] - *(float*)(s + 0x74);
    tmp[2] = tmp[2] - *(float*)(s + 0x78);
    volatile float* d = dst;
    d[0] = tmp[0];
    d[1] = tmp[1];
    d[2] = tmp[2];
    d[0] = d[0] * *(float*)(s + 0x7c);
    d[1] = d[1] * *(float*)(s + 0x80);
    d[2] = d[2] * *(float*)(s + 0x84);
}

extern "C" void ext_0064E630();
extern "C" void ext_007C5B70();

// [0x00646320] SkeletalJoint::vfunc_32 (64 bytes)
extern "C" void __fastcall fn_00646320(void* self, int edx_unused, float* a1) {
    float tmp[3];
    tmp[0] = a1[0];
    tmp[1] = a1[1];
    tmp[2] = a1[2];
    ((void (__fastcall*)(void*, int, float*))ext_0064E630)(self, edx_unused, tmp);
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float*))ext_007C5B70)(a, tmp);
}

// [0x0064E280] SkeletalJoint::vfunc_15 (155 bytes)
extern "C" void __fastcall fn_0064E280(void* self, int edx_unused, float* out) {
    float p[3];
    float q[3];
    float tmp[3];
    p[2] = 0.0f;
    p[1] = 0.0f;
    p[0] = 0.0f;
    q[2] = 0.0f;
    q[1] = 0.0f;
    q[0] = 0.0f;
    ((void (__cdecl*)(int, int, float*))ext_007C93A0)(
        ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x64)), 0, q);
    ((void (__cdecl*)(int, int, float*))ext_007C93A0)(
        ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x64)), 1, p);
    tmp[0] = p[0] - q[0];
    tmp[1] = p[1] - q[1];
    tmp[2] = p[2] - q[2];
    volatile float* d = out;
    d[0] = tmp[0];
    d[1] = tmp[1];
    d[2] = tmp[2];
}

extern "C" void ext_0064E6C0();
extern "C" void ext_007C5BA0();

// [0x00646360] SkeletalJoint::vfunc_33 (64 bytes)
extern "C" void __fastcall fn_00646360(void* self, int edx_unused, float* a1) {
    float tmp[3];
    tmp[0] = a1[0];
    tmp[1] = a1[1];
    tmp[2] = a1[2];
    ((void (__fastcall*)(void*, int, float*))ext_0064E6C0)(self, edx_unused, tmp);
    int a = *(int*)((char*)self + 0x64);
    ((void (__cdecl*)(int, float*))ext_007C5BA0)(a, tmp);
}

extern "C" void ext_0064E7C0();
extern "C" void ext_00693F40();
extern "C" void ext_007C5BD0();
extern "C" double mem_00993830;

// [0x00650980] SkeletalJoint::vfunc_31 (168 bytes)
extern "C" __declspec(naked) void __fastcall fn_00650980(void* self, int edx_unused, float* p, unsigned char flag) {
    __asm {
        sub esp, 1Ch
        mov eax, dword ptr [esp + 20h]
        fld dword ptr [eax]
        push ebx
        mov bl, byte ptr [esp + 28h]
        fstp dword ptr [esp + 4]
        test bl, bl
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 8]
        push esi
        fld dword ptr [eax + 8]
        mov esi, ecx
        fstp dword ptr [esp + 10h]
        jne skip_virt_650980
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 90h]
        lea ecx, [esp + 8]
        push ecx
        mov edx, ecx
        push edx
        mov ecx, esi
        call eax
skip_virt_650980:
        lea ecx, [esp + 8]
        push ecx
        mov ecx, esi
        call ext_0064E7C0
        fldz
        fst dword ptr [esp + 20h]
        lea edx, [esp + 8]
        fst dword ptr [esp + 1Ch]
        push edx
        fst dword ptr [esp + 1Ch]
        lea ecx, [esp + 18h]
        fstp dword ptr [esp + 18h]
        call ext_00693F40
        test bl, bl
        jne skip_scale_650980
        fld dword ptr [esp + 14h]
        fld qword ptr [mem_00993830]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 18h]
        fmul st, st(1)
        fstp dword ptr [esp + 18h]
        fmul dword ptr [esp + 1Ch]
        fstp dword ptr [esp + 1Ch]
skip_scale_650980:
        mov ecx, dword ptr [esi + 64h]
        lea eax, [esp + 14h]
        push eax
        push ecx
        call ext_007C5BD0
        add esp, 8
        pop esi
        pop ebx
        add esp, 1Ch
        ret 8
    }
}

// [0x006552E0] SkeletalJoint::vfunc_14 (71 bytes)
extern "C" void __fastcall fn_006552E0(void* self, int edx_unused, void* a1) {
    float m[9];
    m[2] = 0.0f;
    m[1] = 0.0f;
    m[5] = 0.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[6] = 0.0f;
    m[0] = 1.0f;
    m[4] = 1.0f;
    m[8] = 1.0f;
    ((void (__stdcall*)(float*))ext_006501E0)(m);
    ((void (__thiscall*)(void*, float*))ext_00694330)(a1, m);
}

extern "C" void ext_00694880();

// [0x00650CD0] SkeletalJoint::vfunc_13 (168 bytes)
extern "C" void __fastcall fn_00650CD0(void* self, int edx_unused, float* a1) {
    float v[3];
    v[2] = 0.0f;
    v[1] = 0.0f;
    v[0] = 0.0f;
    ((void (__thiscall*)(void*, float*))(*(void***)self)[18])(self, v);

    float m[9];
    m[2] = 0.0f;
    m[1] = 0.0f;
    m[5] = 0.0f;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[6] = 0.0f;
    m[0] = 1.0f;
    m[4] = 1.0f;
    m[8] = 1.0f;
    ((void (__thiscall*)(void*, float*))ext_006501E0)(self, m);
    ((void (__thiscall*)(float*, float*))ext_00694880)(m, a1);

    volatile float* p = a1;
    p[0] /= v[0];
    p[1] /= v[1];
    p[2] /= v[2];
    p[0] /= *(float*)((char*)self + 0x7c);
    p[1] /= *(float*)((char*)self + 0x80);
    p[2] /= *(float*)((char*)self + 0x84);
}

extern "C" void ext_006501E0();
extern "C" void ext_00694330();
extern "C" void ext_006946C0();
extern "C" void ext_00694880();

struct Mat3_00650A30 {
    float m[9];
};

struct Vec3_00650A30 {
    float x, y, z, w;
};

// [0x00650A30] SkeletalJoint::vfunc_12 (189 bytes)
extern "C" void __fastcall fn_00650A30(void* self, int edx_unused, void* arg1, unsigned char flag) {
    Mat3_00650A30 mat;
    mat.m[2] = 0.0f; mat.m[1] = 0.0f; mat.m[5] = 0.0f;
    mat.m[3] = 0.0f; mat.m[7] = 0.0f; mat.m[6] = 0.0f;
    mat.m[0] = 1.0f; mat.m[4] = 1.0f; mat.m[8] = 1.0f;
    ((void (__thiscall*)(void*, Mat3_00650A30*))ext_006501E0)(self, &mat);
    if (flag) {
        ((void (__thiscall*)(Mat3_00650A30*, void*))ext_00694880)(&mat, arg1);
    } else {
        Vec3_00650A30 vec;
        vec.w = 0.0f;
        vec.z = 0.0f;
        vec.y = 0.0f;
        vec.x = 0.0f;
        ((void (__thiscall*)(Vec3_00650A30*, Mat3_00650A30*))ext_00694330)(&vec, &mat);
        vec.x *= *(double*)&mem_00993830;
        vec.y *= *(double*)&mem_00993830;
        vec.z *= *(double*)&mem_00993830;
        ((void (__thiscall*)(Vec3_00650A30*, void*))ext_006946C0)(&vec, arg1);
        void** vtbl = *(void***)self;
        ((void (__thiscall*)(void*, void*, void*))vtbl[0x94 / 4])(self, arg1, arg1);
    }
}

// [0x0064E320] SkeletalJoint::vfunc_50 (53 bytes)
extern "C" void __fastcall fn_0064E320(void* self) {
    char* p = (char*)self;
    *(int*)(p + 0x88) = 0;
    if (*(int*)(p + 0x64) != 0) {
        void** vt = *(void***)self;
        ((void (__fastcall*)(void*))vt[7])(self);
        int a = *(int*)(p + 0x64);
        int b = ((int (__cdecl*)(int))ext_007D8700)(a);
        ((void (__cdecl*)(int))ext_007C9930)(b);
        *(int*)(p + 0x64) = 0;
    }
}

extern "C" void ext_006A6E9E();
extern "C" void ext_007C5A20();
extern "C" void ext_007C5D00();
extern "C" void ext_007C9480();
extern "C" void ext_007C97A0();
extern "C" int mem_00B55748;

// [0x0064FAA0] SkeletalJoint::vfunc_48 (300 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064FAA0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esi + 6Ch], 1
        mov eax, dword ptr [ebx + 228h]
        test eax, eax
        push edi
        je L_1
        mov eax, dword ptr [eax + 158h]
        mov ecx, dword ptr [eax + 0ACh]
        mov edx, dword ptr [ecx + 0A4h]
        mov eax, dword ptr [edx]
        jmp L_2
    L_1:
        xor eax, eax
    L_2:
        mov dword ptr [esi + 68h], eax
        mov eax, dword ptr [ebx + 22Ch]
        test eax, eax
        je L_3
        mov eax, dword ptr [eax + 158h]
        mov ecx, dword ptr [eax + 0ACh]
        mov edx, dword ptr [ecx + 0A4h]
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 14h], eax
        jmp L_4
    L_3:
        mov dword ptr [esp + 14h], 0
    L_4:
        mov ecx, dword ptr [mem_00B55748]
        mov edi, dword ptr [ecx + 28h]
        mov eax, dword ptr [edi + 40h]
        push eax
        call ext_007C5D00
        push eax
        mov dword ptr [esi + 64h], eax
        call ext_007D8700
        mov edx, dword ptr [esi + 68h]
        mov ecx, dword ptr [esi + 64h]
        add esp, 8
        mov ebp, eax
        mov eax, dword ptr [esp + 14h]
        push edx
        push eax
        push ecx
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0F8h]
        add esp, 0Ch
        mov ecx, ebx
        call eax
        mov ecx, dword ptr [esi + 64h]
        push eax
        push ecx
        call ext_007C5A20
        mov eax, dword ptr [edi + 38h]
        push eax
        lea edx, [eax + 1]
        push ebp
        mov dword ptr [edi + 38h], edx
        call ext_007C97A0
        push 1
        push 0A8F318h
        push 0A2FBBCh
        push 0
        push ebx
        call ext_006A6E9E
        fld dword ptr [eax + 30Ch]
        fstp dword ptr [esi + 98h]
        add esp, 24h
        fld dword ptr [eax + 310h]
        pop edi
        fstp dword ptr [esi + 9Ch]
        fld dword ptr [eax + 314h]
        fstp dword ptr [esi + 0A0h]
        fld dword ptr [eax + 318h]
        fstp dword ptr [esi + 0A4h]
        fld dword ptr [eax + 31Ch]
        fstp dword ptr [esi + 0A8h]
        fld dword ptr [eax + 320h]
        fstp dword ptr [esi + 0ACh]
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

extern "C" void ext_0056B670();
extern "C" void ext_0064E8C0();
extern "C" void ext_0067B7F0();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A7250();
extern "C" void ext_006A7256();
extern "C" void ext_007C5C00();
extern "C" double mem_00A9CE00;
extern "C" double mem_00993828;

// [0x00650AF0] SkeletalJoint::vfunc_34 (465 bytes)
extern "C" __declspec(naked) void __fastcall fn_00650AF0(void* self, int edx_unused, const float* v, unsigned char flag) {
    __asm {
        sub esp, 34h
        fldz
        push esi
        mov esi, dword ptr [esp + 3Ch]
        fst dword ptr [esp + 24h]
        fst dword ptr [esp + 20h]
        push edi
        fstp dword ptr [esp + 20h]
        mov edi, ecx
        fld dword ptr [esi + 4]
        fld dword ptr [esi]
        fld dword ptr [esi + 8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 40h]
        fld qword ptr [mem_00A9CE00]
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 40h]
        fcompp
        fnstsw ax
        test ah, 1
        je loc_650ca8
        cmp byte ptr [esp + 44h], 0
        fld dword ptr [esi]
        fstp dword ptr [esp + 8]
        fld dword ptr [esi + 4]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esi + 8]
        fstp dword ptr [esp + 10h]
        jne loc_650b97
        fld dword ptr [edi + 7Ch]
        lea eax, [esp + 8]
        fmul dword ptr [esp + 8]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [edi + 80h]
        fmul dword ptr [esp + 10h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [edi + 84h]
        fmul dword ptr [esp + 14h]
        fstp dword ptr [esp + 14h]
        call ext_0064E8C0
loc_650b97:
        fldz
        lea ecx, [esp + 8]
        fst dword ptr [esp + 38h]
        push ecx
        fst dword ptr [esp + 38h]
        lea ecx, [esp + 30h]
        fst dword ptr [esp + 34h]
        fstp dword ptr [esp + 30h]
        call ext_00693F40
        fld dword ptr [esp + 2Ch]
        call ext_006A7256
        fstp dword ptr [esp + 44h]
        fld dword ptr [esp + 44h]
        sub esp, 18h
        fadd st(0), st
        fstp dword ptr [esp + 5Ch]
        fld dword ptr [esp + 48h]
        fstp dword ptr [esp + 2Ch]
        fld dword ptr [esp + 4Ch]
        fstp dword ptr [esp + 30h]
        fld dword ptr [esp + 50h]
        fstp dword ptr [esp + 34h]
        fld qword ptr [mem_00A9CE00]
        fstp dword ptr [esp + 58h]
        fld dword ptr [esp + 58h]
        fstp qword ptr [esp + 10h]
        fldz
        fstp qword ptr [esp + 8]
        fld dword ptr [esp + 5Ch]
        fstp qword ptr [esp]
        call ext_0056B670
        add esp, 18h
        test al, al
        jne loc_650ca8
        fld dword ptr [esp + 44h]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 40h]
        call ext_006A6EB0
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 40h]
        lea ecx, [esp + 14h]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 40h]
        fld dword ptr [esp + 30h]
        fld dword ptr [esp + 40h]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 34h]
        fmul st, st(1)
        fstp dword ptr [esp + 18h]
        fmul dword ptr [esp + 38h]
        fstp dword ptr [esp + 1Ch]
        call ext_0067B7F0
        fld dword ptr [esp + 14h]
        fld dword ptr [esp + 44h]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 18h]
        fmul st, st(1)
        fstp dword ptr [esp + 0Ch]
        fmul dword ptr [esp + 1Ch]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 8]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 0Ch]
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 10h]
        fstp dword ptr [esp + 28h]
loc_650ca8:
        mov eax, dword ptr [edi + 64h]
        lea edx, [esp + 20h]
        push edx
        push eax
        call ext_007C5C00
        add esp, 8
        pop edi
        pop esi
        add esp, 34h
        ret 8
    }
}

// [0x0064E430] SkeletalJoint::vfunc_53 (291 bytes)
extern "C" void ext_007C5A20();
extern "C" void ext_007C93A0();
extern "C" void ext_007C93E0();
extern "C" void ext_007C9490();
extern "C" void ext_007C9550();
extern "C" void ext_007D8700();
extern "C" __declspec(naked) void __fastcall fn_0064E430(void* self) {
    __asm {
        sub esp, 24h
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 64h]
        push eax
        call ext_007D8700
        fldz
        fst dword ptr [esp + 20h]
        lea ecx, [esp + 0ch]
        push ecx
        fst dword ptr [esp + 20h]
        fst dword ptr [esp + 1ch]
        lea edx, [esp + 1ch]
        fst dword ptr [esp + 18h]
        push edx
        fst dword ptr [esp + 18h]
        mov esi, eax
        fst dword ptr [esp + 14h]
        push 0
        fst dword ptr [esp + 38h]
        push esi
        fst dword ptr [esp + 38h]
        fstp dword ptr [esp + 34h]
        call ext_007C93E0
        lea eax, [esp + 34h]
        push eax
        push 0
        push esi
        call ext_007C93A0
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 1ch]
        add esp, 8
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp + 0ch]
        fld dword ptr [esp + 34h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 2ch]
        fstp dword ptr [esp]
        push 0
        push esi
        call ext_007C9550
        fld dword ptr [esp + 48h]
        add esp, 14h
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 2ch]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9490
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp + 0ch]
        fld dword ptr [esp + 1ch]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 2ch]
        fstp dword ptr [esp]
        push ecx
        fld dword ptr [esp + 2ch]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9550
        fld dword ptr [esp + 48h]
        add esp, 14h
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 2ch]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9490
        mov ecx, dword ptr [edi + 64h]
        push 707h
        push ecx
        call ext_007C5A20
        add esp, 1ch
        pop edi
        pop esi
        add esp, 24h
        ret
    }
}

// [0x0064E1E0] SkeletalJoint::vfunc_6 (52 bytes)
extern "C" void ext_0064DF60();
extern "C" void ext_007C9260();
extern "C" void ext_007C97F0();

extern "C" void __fastcall fn_0064E1E0(void* self) {
    int r = ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x64));
    if (((int (__cdecl*)(int))ext_007C9260)(r) == 0) {
        ((void (__fastcall*)(void*))ext_0064DF60)(self);
        int r2 = ((int (__cdecl*)(int))ext_007D8700)(*(int*)((char*)self + 0x64));
        ((void (__cdecl*)(int))ext_007C97F0)(r2);
    }
}
