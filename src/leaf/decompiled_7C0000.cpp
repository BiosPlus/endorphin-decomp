// Decompiled translation unit: src/leaf/decompiled_7C0000.cpp

extern "C" float mem_0099D148;
extern "C" int mem_009552D0;
extern "C" int mem_0095FFC0;
extern "C" void ext_007DD130();
extern "C" void ext_007C7900();
extern "C" void ext_007C7970();
extern "C" void ext_007C6150();
extern "C" void ext_00493D90();
extern "C" void ext_007C7750();
extern "C" void ext_007C79E0();
extern "C" void ext_007D62D0();
extern "C" void ext_007D6360();
extern "C" void ext_007D66B0();
extern "C" void ext_007D6980();
extern "C" void ext_007D6AA0();
extern "C" void ext_007D6B00();
extern "C" void ext_007D6CF0();
extern "C" void ext_007D6DD0();
extern "C" void ext_007D71D0();
extern "C" void ext_007D7700();
extern "C" void ext_007D7990();
extern "C" void ext_007D7A50();
extern "C" void ext_007D8E80();
extern "C" void ext_007D8EB0();
extern "C" void ext_007D8F60();
extern "C" void ext_007DA220();
extern "C" void ext_007DA2D0();

// [0x007CC3D0] sub_007CC3D0 (32 bytes)
// Zeroes the float triple at arg2[0..2] (stores 0.0 to [+8], [+4], [0]), then stores
// the global float mem_0099D148 to *arg3; returns 1. arg1 is unused.
extern "C" __declspec(naked) int __cdecl fn_007CC3D0(int a0, float* a1, float* a2) {
    __asm {
        fldz
        mov eax, dword ptr [esp + 0x8]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [mem_0099D148]
        fstp dword ptr [eax]
        mov eax, 0x1
        ret
    }
}

// [0x007C71C0] sub_007C71C0 (12 bytes)
extern "C" void __cdecl ext_007C7150(int value);

extern "C" __declspec(naked) void __cdecl fn_007C71C0(int a0) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_007C7150
        pop ecx
        ret
    }
}

// [0x007C8B30] sub_007C8B30 (22 bytes)
extern "C" void __cdecl ext_007DD0A0();

extern "C" __declspec(naked) int __cdecl fn_007C8B30(void* a0) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x20]
        push 0x0
        push ecx
        mov ecx, dword ptr [eax + 0xc]
        call ext_007DD0A0
        movzx eax, al
        ret
    }
}

// [0x007C8B50] sub_007C8B50 (22 bytes)
extern "C" __declspec(naked) int __cdecl fn_007C8B50(void* a0) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x20]
        push 0x1
        push ecx
        mov ecx, dword ptr [eax + 0xc]
        call ext_007DD0A0
        movzx eax, al
        ret
    }
}

// [0x007C8730] sub_007C8730 (22 bytes)
extern "C" void __cdecl ext_007C8690(void* a0);
extern "C" void __cdecl ext_007C8700(void* a0);

extern "C" void __cdecl fn_007C8730(void* a0) {
    ext_007C8700(a0);
    ext_007C8690(a0);
}

// [0x007C8B70] sub_007C8B70 (24 bytes)
extern "C" int __cdecl fn_007C8B70(void* self) {
    unsigned char r = ((unsigned char (__thiscall*)(void*, int))ext_007DD130)(
        *(void**)((char*)self + 0x0C), *(int*)((char*)self + 0x20));
    return !r;
}

// [0x007C97A0] sub_007C97A0 (25 bytes)
extern "C" void ext_007C9260();

extern "C" __declspec(naked) void __cdecl fn_007C97A0(void* self, int value) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        call ext_007C9260
        add esp, 0x4
        test eax, eax
        jne short L_skip_007C97A0
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x44], eax
    L_skip_007C97A0:
        ret
    }
}

// [0x007C70A0] sub_007C70A0 (25 bytes)
extern "C" void __cdecl ext_007D5720(int a0, int a1, int a2);

extern "C" void __cdecl fn_007C70A0(char* a0) {
    ext_007D5720(*(int*)(a0 + 0x48), *(int*)(a0 + 0x34), *(int*)(a0 + 0x38));
}

// [0x007CC200] sub_007CC200 (25 bytes)
extern "C" void __cdecl ext_007CC8E0(int a0, int a1, int a2);

extern "C" int __cdecl fn_007CC200(int a0, int a1) {
    ext_007CC8E0(a0, a1, 3);
    return a0;
}

// [0x007C5A50] sub_007C5A50 (26 bytes)
extern "C" int mem_00993828;
extern "C" void ext_006A6EAA();
#include <math.h>
extern "C" void __cdecl fn_007C5A50(void* self, float a1) {
    *(float*)((char*)self + 0x1ac) = (float)cos((double)a1 * *(double*)&mem_00993828);
}

// [0x007C5A70] sub_007C5A70 (26 bytes)
extern "C" void __cdecl fn_007C5A70(void* self, float a1) {
    *(float*)((char*)self + 0x1b0) = (float)cos((double)a1 * *(double*)&mem_00993828);
}

// [0x007C5A90] sub_007C5A90 (26 bytes)
extern "C" void __cdecl fn_007C5A90(void* self, float a1) {
    *(float*)((char*)self + 0x1b4) = (float)cos((double)a1 * *(double*)&mem_00993828);
}

// [0x007C5AD0] sub_007C5AD0 (26 bytes)
extern "C" void __cdecl fn_007C5AD0(void* self, float a1) {
    *(float*)((char*)self + 0x1c8) = (float)cos((double)a1 * *(double*)&mem_00993828);
}

// [0x007C5AF0] sub_007C5AF0 (26 bytes)
extern "C" void __cdecl fn_007C5AF0(void* self, float a1) {
    *(float*)((char*)self + 0x1d4) = (float)cos((double)a1 * *(double*)&mem_00993828);
}

// [0x007C5B10] sub_007C5B10 (26 bytes)
extern "C" void __cdecl fn_007C5B10(void* self, float a1) {
    *(float*)((char*)self + 0x1d8) = (float)cos((double)a1 * *(double*)&mem_00993828);
}

// [0x007C9460] sub_007C9460 (26 bytes)
extern "C" void ext_007C93E0();
extern "C" int __cdecl fn_007C9460(int a1, int a2, int a3) {
    return ((int (__cdecl*)(int, int, int, int))ext_007C93E0)(a1, 1, a2, a3);
}

// [0x007C7310] sub_007C7310 (28 bytes)
extern "C" void ext_007C7240();

extern "C" __declspec(naked) void __cdecl fn_007C7310(void* a0) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_007C7240
        mov eax, dword ptr [esi + 0x5f0]
        mov ecx, dword ptr [eax + 0xc]
        push esi
        call ecx
        add esp, 0x8
        pop esi
        ret
    }
}

// [0x007C8C50] sub_007C8C50 (28 bytes)
extern "C" void ext_007DD160();

extern "C" __declspec(naked) int __cdecl fn_007C8C50(void* a0, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x20]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax + 0x20]
        push ecx
        mov ecx, dword ptr [eax + 0xc]
        push edx
        call ext_007DD160
        movzx eax, al
        ret
    }
}

// [0x007C7130] sub_007C7130 (29 bytes)
extern "C" void __cdecl ext_007C6E80(void* a0);
extern "C" int mem_00AB28C8;

extern "C" __declspec(naked) void __cdecl fn_007C7130(void* a0) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_007C6E80
        mov eax, dword ptr [esi]
        add eax, 0x4c
        push esi
        push eax
        call dword ptr [mem_00AB28C8]
        add esp, 0xc
        pop esi
        ret
    }
}

// [0x007CA430] sub_007CA430 (33 bytes)
extern "C" int __cdecl fn_007CA430(float* a0, float* a1, float* a2) {
    a1[2] = 0.0f;
    a1[1] = 0.0f;
    a1[0] = 0.0f;
    *a2 = a0[4];
    return 1;
}

// [0x007CAB10] sub_007CAB10 (33 bytes)
extern "C" int __cdecl fn_007CAB10(float* a0, float* a1, float* a2) {
    a1[2] = 0.0f;
    a1[1] = 0.0f;
    a1[0] = 0.0f;
    *a2 = a0[7];
    return 1;
}

// [0x007CB380] sub_007CB380 (33 bytes)
extern "C" int __cdecl fn_007CB380(float* a0, float* a1, float* a2) {
    a1[2] = 0.0f;
    a1[1] = 0.0f;
    a1[0] = 0.0f;
    *a2 = a0[6];
    return 1;
}

// [0x007C5F50] sub_007C5F50 (33 bytes)
extern "C" void ext_007D4AF0();

extern "C" int __cdecl fn_007C5F50(char* a0) {
    typedef int (__cdecl *Fn)(int, int);
    int r = ((Fn)ext_007D4AF0)(*(int*)(a0 + 0x17c), (int)(a0 + 0x184));
    return r != 0 ? 1 : 0;
}

// [0x007C5920] sub_007C5920 (34 bytes)
#include <math.h>
extern "C" float __cdecl fn_007C5920(void* a0) {
    float v = *(float*)((char*)a0 + 0x1ac);
    float r = (float)acos((double)v);
    return r + r;
}

// [0x007C5950] sub_007C5950 (34 bytes)
extern "C" void ext_006A7256();
extern "C" __declspec(naked) float __cdecl fn_007C5950(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x1b0]
        call ext_006A7256
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fadd st(0), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret
    }
}

// [0x007C5980] sub_007C5980 (34 bytes)
#include <math.h>
extern "C" float __cdecl fn_007C5980(void* a0) {
    float v = *(float*)((char*)a0 + 0x1b4);
    float r = (float)acos((double)v);
    return r + r;
}

// [0x007C8700] sub_007C8700 (34 bytes)
extern "C" void ext_007C7130(void* a0);
extern "C" void __cdecl fn_007C8700(void* a0) {
    unsigned char* self = (unsigned char*)a0;
    void* p = *(void**)(self + 8);
    while (p != 0) {
        ext_007C7130(p);
        p = *(void**)(self + 8);
    }
}

// [0x007C59C0] sub_007C59C0 (35 bytes)
extern "C" void __cdecl fn_007C59C0(const char* src, float* dst) {
    const float* v = reinterpret_cast<const float*>(src + 0x180);
    dst[0] = v[0];
    dst[1] = v[1];
    dst[2] = v[2];
}

// [0x007C5B70] sub_007C5B70 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C5B70(void* self, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x160]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x164]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x168]
        ret
    }
}

// [0x007C5BA0] sub_007C5BA0 (35 bytes)
extern "C" void __cdecl fn_007C5BA0(void* a0, const float* a1) {
    char* self = (char*)a0;
    *(float*)(self + 0x180) = a1[0];
    *(float*)(self + 0x184) = a1[1];
    *(float*)(self + 0x188) = a1[2];
}

// [0x007C5C00] sub_007C5C00 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C5C00(void* self, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x190]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x194]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x198]
        ret
    }
}

// [0x007C5FA0] sub_007C5FA0 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C5FA0(void* a0, float* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x140]
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x144]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x148]
        fstp dword ptr [ecx + 0x8]
        ret
    }
}

// [0x007C6030] sub_007C6030 (35 bytes)
extern "C" void __cdecl fn_007C6030(void* a0, float* a1) {
    char* p = (char*)a0;
    a1[0] = *(float*)(p + 0xb0);
    a1[1] = *(float*)(p + 0xb4);
    a1[2] = *(float*)(p + 0xb8);
}

// [0x007C6070] sub_007C6070 (35 bytes)
extern "C" void __cdecl fn_007C6070(void* a0, float* a1) {
    char* p = (char*)a0;
    a1[0] = *(float*)(p + 0xc0);
    a1[1] = *(float*)(p + 0xc4);
    a1[2] = *(float*)(p + 0xc8);
}

// [0x007C60B0] sub_007C60B0 (35 bytes)
extern "C" void __cdecl fn_007C60B0(void* a0, float* a1) {
    char* p = (char*)a0;
    a1[0] = *(float*)(p + 0xe0);
    a1[1] = *(float*)(p + 0xe4);
    a1[2] = *(float*)(p + 0xe8);
}

// [0x007C60E0] sub_007C60E0 (35 bytes)
// Copies three floats from self+0xF0..0xF8 into the caller-supplied float triple out[0..2].
// Both arguments are on the stack (cdecl, caller cleans up); ecx is not used.
extern "C" void __cdecl fn_007C60E0(char* self, float* out) {
    out[0] = *(float*)(self + 0xf0);
    out[1] = *(float*)(self + 0xf4);
    out[2] = *(float*)(self + 0xf8);
}

// [0x007C6220] sub_007C6220 (35 bytes)
extern "C" void __cdecl fn_007C6220(char* self, float a, float b, float c) {
    *(float*)(self + 0x140) = a;
    *(float*)(self + 0x144) = b;
    *(float*)(self + 0x148) = c;
}

// [0x007C62B0] sub_007C62B0 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C62B0(void* a0, float a1, float a2, float a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0xb0]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0xb4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0xb8]
        ret
    }
}

// [0x007C62E0] sub_007C62E0 (35 bytes)
extern "C" void __cdecl fn_007C62E0(void* self, float a1, float a2, float a3) {
    *(float*)((char*)self + 0xC0) = a1;
    *(float*)((char*)self + 0xC4) = a2;
    *(float*)((char*)self + 0xC8) = a3;
}

// [0x007C6850] sub_007C6850 (35 bytes)
extern "C" void __cdecl fn_007C6850(void* self, float a1, float a2, float a3) {
    *(float*)((char*)self + 0x10) += a1;
    *(float*)((char*)self + 0x14) += a2;
    *(float*)((char*)self + 0x18) += a3;
}

// [0x007C6940] sub_007C6940 (35 bytes)
extern "C" void __cdecl fn_007C6940(void* self, float a1, float a2, float a3) {
    *(float*)((char*)self + 0x20) += a1;
    *(float*)((char*)self + 0x24) += a2;
    *(float*)((char*)self + 0x28) += a3;
}

// [0x007C76E0] sub_007C76E0 (35 bytes)
extern "C" void __cdecl fn_007C76E0(void* self, float a1, float a2, float a3) {
    *(float*)((char*)self + 0x1DC) = a1;
    *(float*)((char*)self + 0x1E0) = a2;
    *(float*)((char*)self + 0x1E4) = a3;
}

// [0x007C9310] sub_007C9310 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9310(void) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        shl eax, 0x5
        fld dword ptr [eax + ecx]
        add eax, ecx
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x8]
        ret
    }
}

// [0x007C9B60] sub_007C9B60 (35 bytes)
extern "C" void __cdecl fn_007C9B60(void* self, float a1, float a2, float a3) {
    char* p = (char*)self;
    *(float*)(p + 0x1c0) = a1;
    *(float*)(p + 0x1c4) = a2;
    *(float*)(p + 0x1c8) = a3;
}

// [0x007C9B90] sub_007C9B90 (35 bytes)
extern "C" void __cdecl fn_007C9B90(void* self, float a1, float a2, float a3) {
    char* p = (char*)self;
    *(float*)(p + 0x1cc) = a1;
    *(float*)(p + 0x1d0) = a2;
    *(float*)(p + 0x1d4) = a3;
}

// [0x007C9CD0] sub_007C9CD0 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9CD0(void* self, float v) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        jne short L_neg
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        ret
    L_neg:
        mov ecx, dword ptr [esp + 0x4]
        fchs
        fstp dword ptr [ecx + 0x4]
        ret
    }
}

// [0x007C9D00] sub_007C9D00 (35 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9D00(float* out, float v) {
    __asm {
        fldz
        fld dword ptr [esp + 8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 1
        jne short neg_path
        mov eax, dword ptr [esp + 4]
        fstp dword ptr [eax + 8]
        ret
neg_path:
        mov ecx, dword ptr [esp + 4]
        fchs
        fstp dword ptr [ecx + 8]
        ret
    }
}

// [0x007CA790] sub_007CA790 (35 bytes)
extern "C" __declspec(naked) float __fastcall fn_007CA790(float* self, int edx_unused, const float* a) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x007C9340] sub_007C9340 (36 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9340(void* a0, int a1, float* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        shl eax, 0x5
        fld dword ptr [eax + ecx + 0x10]
        add eax, ecx
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x14]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x18]
        fstp dword ptr [ecx + 0x8]
        ret
    }
}

// [0x007CBB50] sub_007CBB50 (36 bytes)
// Zeroes the float triple at arg2[0..2], stores (p[5] + p[4]) to *arg3 where p = arg1
// (floats at +0x10 and +0x14), and returns 1.
extern "C" int __cdecl fn_007CBB50(void* a0, float* a1, float* a2) {
    float* p = (float*)a0;
    a1[2] = 0.0f;
    a1[1] = 0.0f;
    a1[0] = 0.0f;
    a2[0] = p[5] + p[4];
    return 1;
}

// [0x007C9E20] sub_007C9E20 (37 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9E20(int* out, int value) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        jne short L_nonzero
        cmp dword ptr [eax + 0x50], ecx
        jne short L_nonzero
        cmp dword ptr [eax + 0x1c], ecx
        jne short L_nonzero
        mov dword ptr [eax + 0x4], ecx
        ret
L_nonzero:
        mov ecx, 0x1
        mov dword ptr [eax + 0x4], ecx
        ret
    }
}

// [0x007CA310] sub_007CA310 (37 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CA310(float* out, float s, float* v) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        fld dword ptr [ecx]
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xca
        _emit 0xd9
        _emit 0xc9
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        _emit 0xd8
        _emit 0xc9
        fstp dword ptr [eax + 0x4]
        _emit 0xd8
        _emit 0x49
        _emit 0x08
        fstp dword ptr [eax + 0x8]
        ret
    }
}

// [0x007CD550] sub_007CD550 (37 bytes)
extern "C" int __cdecl ext_007D8700(int a1);
extern "C" void __cdecl ext_007C9930(int a1);

extern "C" __declspec(naked) void __cdecl fn_007CD550(void* a0) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx + 0x18]
        test eax, eax
        mov dword ptr [ecx + 0x18], 0x0
        je done
        push eax
        call ext_007D8700
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        jmp ext_007C9930
done:
        ret
    }
}

// [0x007C8820] sub_007C8820 (38 bytes)
extern "C" __declspec(naked) int __cdecl fn_007C8820(void* a0, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        jl short L_007C8843
        mov ecx, dword ptr [esp + 0x4]
        cmp eax, dword ptr [ecx]
        jge short L_007C8843
        mov ecx, dword ptr [ecx + 0x20]
        lea eax, [eax + 4*eax]
        cmp dword ptr [ecx + 8*eax + 0x24], 0x0
        je short L_007C8843
        mov eax, 0x1
        ret
    L_007C8843:
        xor eax, eax
        ret
    }
}

// [0x007CCA80] sub_007CCA80 (38 bytes)
extern "C" void __cdecl fn_007CCA80(void* self, void* a1) {
    typedef void (__cdecl *Fn)(void*, void*);
    unsigned int idx = *(unsigned int*)self & 0xFF;
    char* p = *(char**)((char*)self + 0x0C);
    char* table = *(char**)(p + 0x20);
    Fn f = *(Fn*)(table + idx * 40 + 0x18);
    f(self, a1);
}

// [0x007C97C0] sub_007C97C0 (38 bytes)
extern "C" void ext_007C9260();

extern "C" __declspec(naked) void __cdecl fn_007C97C0(void* self, int a1, int a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        call ext_007C9260
        add esp, 0x4
        test eax, eax
        jne short L_skip_007C97C0
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x94], eax
        mov dword ptr [ecx + 0x98], edx
    L_skip_007C97C0:
        ret
    }
}

// [0x007C8850] sub_007C8850 (42 bytes)
extern "C" void ext_007C8820();

extern "C" __declspec(naked) int __cdecl fn_007C8850(void* a0, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edx
        push esi
        call ext_007C8820
        add esp, 0x8
        test eax, eax
        jne short L_nonzero_007C8850
        mov eax, 0x0099D280
        pop esi
        ret
    L_nonzero_007C8850:
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [edx + 4*edx]
        mov eax, dword ptr [ecx + 8*eax + 0x20]
        pop esi
        ret
    }
}

// [0x007C9E50] sub_007C9E50 (43 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9E50(void* a0, int a1) {
    __asm {
        cmp dword ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x4]
        jne short L_nonzero
        cmp dword ptr [eax], 0x0
        jne short L_nonzero
        cmp dword ptr [eax + 0x50], 0x0
        jne short L_nonzero
        cmp dword ptr [eax + 0x1c], 0x0
        jne short L_nonzero
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        ret
L_nonzero:
        mov ecx, 0x1
        mov dword ptr [eax + 0x4], ecx
        ret
    }
}

// [0x007CB940] sub_007CB940 (43 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CB940(void* a0, float a1) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp store_arg
        mov eax, dword ptr [esp + 0x4]
        fstp st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x10]
        ret
store_arg:
        mov ecx, dword ptr [esp + 0x4]
        fstp st(1)
        fstp dword ptr [ecx + 0x10]
        ret
    }
}

// [0x007CC5D0] sub_007CC5D0 (43 bytes)
extern "C" void __cdecl ext_007CC200(void* a0, void* a1);

extern "C" __declspec(naked) void __cdecl fn_007CC5D0(void* a0) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0x10
        call ecx
        add esp, 0x8
        test eax, eax
        je short zero_ret
        push esi
        push eax
        call ext_007CC200
        add esp, 0x8
        pop esi
        ret
zero_ret:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007C59F0] sub_007C59F0 (44 bytes)
extern "C" void __cdecl fn_007C59F0(char* self, float* out) {
    out[0] = *(float*)(self + 0x170);
    out[1] = *(float*)(self + 0x174);
    out[2] = *(float*)(self + 0x178);
    out[3] = *(float*)(self + 0x17c);
}

// [0x007C5BD0] sub_007C5BD0 (44 bytes)
extern "C" void __cdecl fn_007C5BD0(char* self, const float* src) {
    *(float*)(self + 0x170) = src[0];
    *(float*)(self + 0x174) = src[1];
    *(float*)(self + 0x178) = src[2];
    *(float*)(self + 0x17c) = src[3];
}

// [0x007C9B30] sub_007C9B30 (44 bytes)
extern "C" void __cdecl fn_007C9B30(char* dst, const float* src) {
    float* d = (float*)(dst + 0x1a4);
    const float* s = src;
    float a = s[0];
    d[0] = a;
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

// [0x007CA8A0] sub_007CA8A0 (44 bytes)
extern "C" int mem_0092C510;

extern "C" __declspec(naked) void __cdecl fn_007CA8A0(float* a0, float* a1, float* a2, float* a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        fld qword ptr [mem_0092C510]
        mov edx, dword ptr [esp + 0xc]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x14]
        fmul st, st(1)
        fstp dword ptr [edx]
        fmul dword ptr [eax + 0x18]
        mov eax, dword ptr [esp + 0x10]
        fstp dword ptr [eax]
        ret
    }
}

// [0x007CCC00] sub_007CCC00 (44 bytes)
extern "C" int mem_0094CE80;
extern "C" __declspec(naked) void __cdecl fn_007CCC00(void* self, float a1) {
    __asm {
        fld dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [ecx + 0x1c]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x41
        jnp short L_below
        or dword ptr [ecx + 0xc], 0x8
        ret
    L_below:
        and dword ptr [ecx + 0xc], -0x9
        ret
    }
}

// [0x007C61F0] sub_007C61F0 (46 bytes)
extern "C" void ext_007D5170();

extern "C" __declspec(naked) void __cdecl fn_007C61F0(void* a, const void* b) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        lea eax, [edx + 0x110]
        mov ecx, 0x10
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        mov dword ptr [esp + 0x8], eax
        add edx, 0xd0
        mov dword ptr [esp + 0x4], edx
        jmp ext_007D5170
    }
}

// [0x007CD4B0] sub_007CD4B0 (46 bytes)
extern "C" int __cdecl ext_007CC9F0(void* a0);
extern "C" void __cdecl ext_007C8B30(void* a0);

extern "C" void __cdecl fn_007CD4B0(void* self) {
    void* p = *(void**)((char*)self + 0x210);
    if (p == 0) return;
    if (ext_007CC9F0(p) == 0) return;
    ext_007C8B30(*(void**)((char*)self + 0x210));
}

// [0x007CD4E0] sub_007CD4E0 (46 bytes)
extern "C" void __cdecl ext_007C8B50(void* a0);

extern "C" void __cdecl fn_007CD4E0(void* self) {
    void* p = *(void**)((char*)self + 0x210);
    if (p == 0) return;
    if (ext_007CC9F0(p) == 0) return;
    ext_007C8B50(*(void**)((char*)self + 0x210));
}

// [0x007C1F60] sub_007C1F60 (47 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C1F60(void* self, unsigned int value) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, dword ptr [eax + 0x8]
        mov edi, dword ptr [eax + 0x14]
        mov edx, ecx
        shr edx, 0x8
        mov byte ptr [esi + edi], dl
        mov edx, dword ptr [eax + 0x14]
        mov esi, dword ptr [eax + 0x8]
        inc edx
        mov dword ptr [eax + 0x14], edx
        pop edi
        mov byte ptr [edx + esi], cl
        mov ecx, dword ptr [eax + 0x14]
        inc ecx
        pop esi
        mov dword ptr [eax + 0x14], ecx
        ret
    }
}

// [0x007CC4E0] sub_007CC4E0 (47 bytes)
extern "C" void __cdecl fn_007CC4E0(int unused, const float* src, float* dst) {
    if (src) {
        dst[0] = src[8];
        dst[1] = src[9];
        dst[2] = src[10];
    } else {
        dst[0] = 0.0f;
        dst[1] = 0.0f;
        dst[2] = 1.0f;
    }
}

// [0x007CCCD0] sub_007CCCD0 (49 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CCCD0(char* p, float a) {
    __asm {
        fldz
        fld dword ptr [esp+8]
        fcom st(1)
        fnstsw ax
        test ah, 5
        jp L1
        mov eax, dword ptr [esp+4]
        fstp st(0)
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fst dword ptr [eax+0x20]
        fstp dword ptr [eax+0x2c]
        ret
    L1:
        mov eax, dword ptr [esp+4]
        fstp st(1)
        fst dword ptr [eax+0x20]
        fstp dword ptr [eax+0x2c]
        ret
    }
}

// [0x007CAFD0] sub_007CAFD0 (49 bytes)
extern "C" void __cdecl ext_006A7250();

extern "C" __declspec(naked) void __cdecl fn_007CAFD0(void* a0, float a1) {
    __asm {
        fld dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        fst dword ptr [esi + 0x10]
        fld dword ptr [esi + 0x14]
        fld st(1)
        fmulp st(2), st
        _emit 0xdc
        _emit 0xc8
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x18]
        pop esi
        ret
    }
}

// [0x007C9A60] sub_007C9A60 (50 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9A60(char* a0, int a1, float* a2) {
    __asm {
        cmp dword ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x4]
        jne short L_nonzero
        add eax, 0x160
        jmp short L_copy
L_nonzero:
        add eax, 0x174
L_copy:
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [ecx + 0xc]
        ret
    }
}

// [0x007CC930] sub_007CC930 (52 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CC930(void* a0) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        cmp eax, dword ptr [ecx + 0xc]
        jne short L_7CC94B
        cmp eax, dword ptr [eax + 0x4]
        jne short L_7CC945
        xor edx, edx
        jmp short L_7CC948
L_7CC945:
        mov edx, dword ptr [eax + 0x8]
L_7CC948:
        mov dword ptr [ecx + 0xc], edx
L_7CC94B:
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov esi, dword ptr [eax + 0x4]
        mov dword ptr [edx + 0x4], esi
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [edx + 0x8], eax
        add dword ptr [ecx + 0x1c], -1
        pop esi
        ret
    }
}

// [0x007CDBC0] sub_007CDBC0 (53 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CDBC0(void* a0) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x80]
        mov edx, dword ptr [eax + 0x7c]
        mov dword ptr [edx + 4*ecx], 0x0
        mov ecx, dword ptr [eax + 0x8c]
        mov edx, dword ptr [eax + 0x88]
        mov dword ptr [edx + 4*ecx], 0x0
        mov ecx, dword ptr [eax + 0x74]
        mov edx, dword ptr [eax + 0x70]
        mov dword ptr [edx + 4*ecx], 0x0
        ret
    }
}

// [0x007C67D0] sub_007C67D0 (55 bytes)
extern "C" void __cdecl fn_007C67D0(char* self) {
    float z = 0.0f;
    *(float*)(self + 0x150) = z;
    *(float*)(self + 0x154) = z;
    *(float*)(self + 0x158) = z;
    *(float*)(self + 0x15c) = z;
    *(float*)(self + 0x160) = z;
    *(float*)(self + 0x164) = z;
    *(float*)(self + 0x168) = z;
    *(float*)(self + 0x16c) = z;
}

// [0x007CB980] sub_007CB980 (55 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CB980(void* self, float x) {
    __asm {
        fldz
        fcom dword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x41
        jne short L_pos
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [eax + 0x14]
        ret
L_pos:
        mov eax, dword ptr [esp + 0x4]
        fstp st(0)
        fld dword ptr [esp + 0x8]
        fmul qword ptr [mem_00993828]
        fstp dword ptr [eax + 0x14]
        ret
    }
}

// [0x007C6790] sub_007C6790 (57 bytes)
extern "C" void __cdecl fn_007C6790(void* self) {
    unsigned char* p = (unsigned char*)self;
    float z = 0.0f;
    *(float*)(p + 0x10) = z;
    *(float*)(p + 0x14) = z;
    *(float*)(p + 0x18) = z;
    *(unsigned int*)(p + 0x1c) = 0;
    *(float*)(p + 0x20) = z;
    *(float*)(p + 0x24) = z;
    *(float*)(p + 0x28) = z;
    *(unsigned int*)(p + 0x2c) = 0;
    *(float*)(p + 0x30) = z;
    *(float*)(p + 0x34) = z;
    *(float*)(p + 0x38) = z;
    *(unsigned int*)(p + 0x3c) = 0;
    *(float*)(p + 0x40) = z;
    *(float*)(p + 0x44) = z;
    *(float*)(p + 0x48) = z;
    *(unsigned int*)(p + 0x4c) = 0;
}

// [0x007CAB40] sub_007CAB40 (57 bytes)
extern "C" float mem_0093F7B8;
extern "C" __declspec(naked) float __cdecl fn_007CAB40(float a0) {
    __asm {
        fldz
        fld st(0)
        fld dword ptr [esp + 0x4]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jp L_cmp_007CAB40
        fstp st(0)
        ret
    L_cmp_007CAB40:
        fcompp
        fnstsw ax
        test ah, 0x5
        jp L_one_007CAB40
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret
    L_one_007CAB40:
        fld1
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret
    }
}

// [0x007CA1A0] sub_007CA1A0 (59 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CA1A0(void* self) {
    __asm {
        fld dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        xor ecx, ecx
        fmul qword ptr [mem_009552D0]
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        fmul st, st(1)
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        fmulp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fst dword ptr [eax]
        fst dword ptr [eax + 0x10]
        fstp dword ptr [eax + 0x20]
        ret
    }
}

// [0x007CCA20] sub_007CCA20 (59 bytes)
extern "C" __declspec(naked) int __cdecl fn_007CCA20(void* a0, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x38
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [edx + 0x20]
        and eax, 0xff
        lea eax, [eax + 4*eax]
        mov eax, dword ptr [edx + 8*eax + 0xc]
        mov edx, dword ptr [esp + 0x40]
        mov dword ptr [esp], ecx
        mov ecx, dword ptr [esp + 0x48]
        push ecx
        mov dword ptr [esp + 8], edx
        mov edx, dword ptr [esp + 0x48]
        push edx
        lea ecx, [esp + 8]
        push ecx
        call eax
        add esp, 0x44
        ret
    }
}

// [0x007C6970] sub_007C6970 (63 bytes)
extern "C" void __cdecl fn_007C6970(char* self, float a, float b, float c) {
    *(float*)(self + 0x150) += a;
    *(unsigned int*)(self + 0x1c4) |= 0x400;
    *(float*)(self + 0x154) += b;
    *(float*)(self + 0x158) += c;
}

// [0x007C9AA0] sub_007C9AA0 (63 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9AA0(void* self, float x, float y, float z, int flag) {
    __asm {
        cmp dword ptr [esp + 0x14], 0x0
        mov eax, dword ptr [esp + 0x4]
        jne short L_007C9AC5
        fld dword ptr [esp + 0x8]
        add eax, 0xec
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        ret
L_007C9AC5:
        fld dword ptr [esp + 0x8]
        add eax, 0x12c
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        ret
    }
}

// [0x007CB010] sub_007CB010 (63 bytes)
extern "C" void ext_006A7250();
extern "C" __declspec(naked) void __cdecl fn_007CB010(float* self, float arg) {
    __asm {
        fld dword ptr [esp + 0x8]
        push esi
        fmul qword ptr [mem_00993828]
        mov esi, dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x14]
        fld dword ptr [esi + 0x10]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x18]
        pop esi
        ret
    }
}

// [0x007C7710] sub_007C7710 (49 bytes)
extern "C" void __cdecl ext_007C6790(void* a0);
extern "C" void* __cdecl ext_007D4A70(void* a0);
extern "C" void* __cdecl ext_007D4AA0(void* a0, void* a1);

extern "C" void __cdecl fn_007C7710(void* a0) {
    void* esi = ext_007D4A70(a0);
    while (esi) {
        ext_007C6790(*(void**)((char*)esi + 0x14));
        esi = ext_007D4AA0(a0, esi);
    }
}

// [0x007C6810] sub_007C6810 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_007C6810(void* a0, void (__cdecl* a1)(void*, void*), void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        add ebx, 0x1d4
        push ebx
        call ext_007D4A70
        add esp, 4
        test eax, eax
        je c6810_out
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        nop
    c6810_loop:
        mov edi, dword ptr [eax + 0x14]
        push eax
        push ebx
        call ext_007D4AA0
        push ebp
        push edi
        mov esi, eax
        call dword ptr [esp + 0x28]
        add esp, 0x10
        test esi, esi
        mov eax, esi
        jne c6810_loop
        pop edi
        pop esi
        pop ebp
    c6810_out:
        pop ebx
        ret
    }
}

// [0x007CDB70] sub_007CDB70 (65 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CDB70(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0xac]
        mov edx, ecx
        and edx, 0x80000003
        jns short L_pos
        dec edx
        or edx, -0x4
        inc edx
    L_pos:
        je short L_zero
        sub ecx, edx
        add ecx, 0x4
    L_zero:
        mov dword ptr [eax + 0xac], ecx
        mov ecx, 0x1
        add dword ptr [eax + 0x80], ecx
        add dword ptr [eax + 0x8c], ecx
        add dword ptr [eax + 0x74], ecx
        add dword ptr [eax + 0xa8], ecx
        ret
    }
}

// [0x007C9E80] sub_007C9E80 (66 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9E80(void* self, float a1, float a2) {
    __asm {
        fld dword ptr [esp+8]
        mov ecx, dword ptr [esp+4]
        fstp dword ptr [ecx+0x54]
        fldz
        fld st(0)
        fld dword ptr [esp+0xc]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp short L_7C9EA5
        mov eax, 1
        jmp short L_7C9EA7
L_7C9EA5:
        xor eax, eax
L_7C9EA7:
        fcom st(1)
        mov dword ptr [ecx+0x50], eax
        mov dword ptr [ecx+0x1c], 0
        fnstsw ax
        fstp st(1)
        test ah, 5
        jp short L_7C9EBE
        fchs
L_7C9EBE:
        fstp dword ptr [ecx+0x58]
        ret
    }
}

// [0x007CDB20] sub_007CDB20 (67 bytes)
extern "C" void __cdecl fn_007CDB20(int* self) {
    unsigned char* p = reinterpret_cast<unsigned char*>(self);
    *reinterpret_cast<int*>(p + 0x04) = 0;
    *reinterpret_cast<int*>(p + 0x14) = 0;
    *reinterpret_cast<int*>(p + 0x20) = 0;
    *reinterpret_cast<int*>(p + 0x2c) = 0;
    *reinterpret_cast<int*>(p + 0x38) = 0;
    *reinterpret_cast<int*>(p + 0x44) = 0;
    *reinterpret_cast<int*>(p + 0x50) = 0;
    *reinterpret_cast<int*>(p + 0x5c) = 0;
    *reinterpret_cast<int*>(p + 0x68) = 0;
    *reinterpret_cast<int*>(p + 0x74) = 0;
    *reinterpret_cast<int*>(p + 0xa8) = 0;
    *reinterpret_cast<int*>(p + 0xa4) = 0;
    *reinterpret_cast<int*>(p + 0xac) = 0;
    *reinterpret_cast<int*>(p + 0xb0) = 0;
    *reinterpret_cast<int*>(p + 0xb4) = 0;
}

// [0x007CC8E0] sub_007CC8E0 (68 bytes)
extern "C" void __cdecl fn_007CC8E0(int a0, int a1, int a2) {
    char* node = (char*)a0;
    char* owner = (char*)a1;
    int v = (int)(short)a2;
    *(int*)(node + 0xc) = a1;
    *(int*)node = v;
    if (*(int*)(owner + 0xc) == 0) {
        *(int*)(owner + 0xc) = a0;
        *(int*)(node + 0x4) = a0;
        *(int*)(node + 0x8) = a0;
    } else {
        *(int*)(node + 0x4) = *(int*)(*(int*)(owner + 0xc) + 0x4);
        *(int*)(node + 0x8) = *(int*)(owner + 0xc);
        *(int*)(*(int*)(node + 0x4) + 0x8) = a0;
        *(int*)(*(int*)(node + 0x8) + 0x4) = a0;
    }
    *(int*)(owner + 0x1c) += 1;
}

// [0x007CA340] sub_007CA340 (32 bytes)
extern "C" void* __cdecl fn_007CA340(void* a0, int a1, float a2) {
    ext_007CC8E0((int)a0, a1, 1);
    *(float*)((char*)a0 + 0x10) = a2;
    return a0;
}

// [0x007CA750] sub_007CA750 (51 bytes)
extern "C" void ext_007CA340();
extern "C" __declspec(naked) void* __cdecl fn_007CA750(void* self, float a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0x14
        call ecx
        add esp, 0x8
        test eax, eax
        je short loc_zero_007CA750
        fld dword ptr [esp + 0xc]
        push ecx
        fstp dword ptr [esp]
        push esi
        push eax
        call ext_007CA340
        add esp, 0xc
        pop esi
        ret
    loc_zero_007CA750:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007CB5F0] sub_007CB5F0 (57 bytes)
extern "C" void ext_007CAFD0();
extern "C" void ext_007CB010();

extern "C" __declspec(naked) void* __cdecl fn_007CB5F0(void* a0, int a1, float a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x4
        push eax
        push esi
        call ext_007CC8E0
        fld dword ptr [esp + 0x1c]
        add esp, 0x8
        fstp dword ptr [esp]
        push esi
        call ext_007CAFD0
        fld dword ptr [esp + 0x1c]
        add esp, 0x4
        fstp dword ptr [esp]
        push esi
        call ext_007CB010
        add esp, 0x8
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007CC180] sub_007CC180 (57 bytes)
extern "C" void ext_007CB940();
extern "C" void ext_007CB980();

extern "C" __declspec(naked) void* __cdecl fn_007CC180(void* a0, int a1, float a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x5
        push eax
        push esi
        call ext_007CC8E0
        fld dword ptr [esp + 0x1c]
        add esp, 0x8
        fstp dword ptr [esp]
        push esi
        call ext_007CB940
        fld dword ptr [esp + 0x1c]
        add esp, 0x4
        fstp dword ptr [esp]
        push esi
        call ext_007CB980
        add esp, 0x8
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007CB890] sub_007CB890 (61 bytes)
extern "C" void ext_007CB5F0();
extern "C" __declspec(naked) void* __cdecl fn_007CB890(void* self, float a1, float a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0x1c
        call ecx
        add esp, 0x8
        test eax, eax
        je short loc_zero_007CB890
        fld dword ptr [esp + 0x10]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push esi
        push eax
        call ext_007CB5F0
        add esp, 0x10
        pop esi
        ret
    loc_zero_007CB890:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007CC1C0] sub_007CC1C0 (61 bytes)
extern "C" void ext_007CC180();

extern "C" __declspec(naked) void* __cdecl fn_007CC1C0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0x18
        call ecx
        add esp, 0x8
        test eax, eax
        je short loc_zero_007CC1C0
        fld dword ptr [esp + 0x10]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        push esi
        push eax
        call ext_007CC180
        add esp, 0x10
        pop esi
        ret
    loc_zero_007CC1C0:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007C9D30] sub_007C9D30 (69 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9D30(char* self, float x) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        fld1
        test ah, 0x1
        jne L_7C9D56
        fcom st(1)
        fnstsw ax
        test ah, 0x1
        jne L_7C9D56
        mov eax, dword ptr [esp + 0x4]
        fstp st(2)
        fstp st(1)
        fstp dword ptr [eax + 0xc]
        ret
    L_7C9D56:
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp L_7C9D6B
        mov ecx, dword ptr [esp + 0x4]
        fstp st(0)
        fstp dword ptr [ecx + 0xc]
        ret
    L_7C9D6B:
        mov edx, dword ptr [esp + 0x4]
        fstp st(1)
        fstp dword ptr [edx + 0xc]
        ret
    }
}

// [0x007CCB60] sub_007CCB60 (69 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CCB60(void* self, float a1) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_nonneg
        fstp st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        jmp short L_store
    L_nonneg:
        fstp st(1)
    L_store:
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [ecx + 0x10]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x41
        jnp short L_below
        or dword ptr [ecx + 0xc], 0x2
        ret
    L_below:
        and dword ptr [ecx + 0xc], -0x3
        ret
    }
}

// [0x007CCBB0] sub_007CCBB0 (69 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CCBB0(void* self, float a1) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_nonneg
        fstp st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        jmp short L_store
    L_nonneg:
        fstp st(1)
    L_store:
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [ecx + 0x18]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x41
        jnp short L_below
        or dword ptr [ecx + 0xc], 0x4
        ret
    L_below:
        and dword ptr [ecx + 0xc], -0x5
        ret
    }
}

// [0x007CCC30] sub_007CCC30 (69 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CCC30(void* self, float a1) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_nonneg
        fstp st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        jmp short L_store
    L_nonneg:
        fstp st(1)
    L_store:
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [ecx + 0x28]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x41
        jnp short L_below
        or dword ptr [ecx + 0xc], 0x10
        ret
    L_below:
        and dword ptr [ecx + 0xc], -0x11
        ret
    }
}

// [0x007CCC80] sub_007CCC80 (69 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CCC80(void* self, float a1) {
    __asm {
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_nonneg
        fstp st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        jmp short L_store
    L_nonneg:
        fstp st(1)
    L_store:
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [ecx + 0x34]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x41
        jnp short L_below
        or dword ptr [ecx + 0xc], 0x20
        ret
    L_below:
        and dword ptr [ecx + 0xc], -0x21
        ret
    }
}

// [0x007CD580] sub_007CD580 (69 bytes)
extern "C" void __cdecl fn_007CD580(void* a0, void* a1) {
    *(int*)((char*)a0 + 0x250) = 0x007cd4b0;
    *(int*)((char*)a0 + 0x24c) = 0x007cd4e0;
    *(int*)((char*)a0 + 0x258) = 0x007cd490;
    *(int*)((char*)a0 + 0x254) = 0x007cd530;
    *(int*)((char*)a1 + 0x90) = 0x007cd550;
    *(int*)((char*)a1 + 0x9c) = 0x007cd510;
}

// [0x007C9EF0] sub_007C9EF0 (71 bytes)
extern "C" void __cdecl fn_007C9EF0(char* self, int flag, float* out) {
    float* src;
    if (flag == 0) {
        src = (float*)(self + 0x160);
    } else {
        src = (float*)(self + 0x16c);
    }
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}

// [0x007CCAB0] sub_007CCAB0 (71 bytes)
extern "C" float mem_00968ED8;
extern "C" __declspec(naked) void __cdecl fn_007CCAB0(char* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fldz
        fst dword ptr [eax + 0x10]
        xor ecx, ecx
        fld dword ptr [mem_00968ED8]
        mov dword ptr [eax], ecx
        fstp dword ptr [eax + 0x14]
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x40]
        fld dword ptr [mem_0099D148]
        fst dword ptr [eax + 0x20]
        fstp dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x28]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fst dword ptr [eax + 0x38]
        fstp dword ptr [eax + 0x3c]
        ret
    }
}

// [0x007C9AE0] sub_007C9AE0 (73 bytes)
extern "C" void __cdecl fn_007C9AE0(void* self, float a, float b, float c, float d, int flag) {
    char* s = (char*)self;
    float* dst;
    if (flag == 0) {
        dst = (float*)(s + 0x160);
        *(int*)(s + 0x170) = 1;
    } else {
        dst = (float*)(s + 0x174);
        *(int*)(s + 0x184) = 1;
    }
    dst[0] = a;
    dst[1] = b;
    dst[2] = c;
    dst[3] = d;
}

// [0x007C8DC0] sub_007C8DC0 (74 bytes)
extern "C" int mem_00925208;

extern "C" void* __cdecl fn_007C8DC0(unsigned int a, unsigned int b) {
    unsigned char* p = (unsigned char*)((void* (__cdecl*)(unsigned int))mem_00925208)(a + b + 8);
    unsigned int pad;
    if (p == 0) {
        return 0;
    }
    pad = b - ((unsigned int)p % b);
    if (pad == b) {
        pad = 0;
    }
    if (pad < 8) {
        do {
            pad += b;
        } while (pad < 8);
    }
    p += pad;
    ((unsigned int*)p)[-1] = a;
    ((unsigned int*)p)[-2] = pad;
    return p;
}

// [0x007C9D80] sub_007C9D80 (79 bytes)
extern "C" void ext_007C9C90();
extern "C" float mem_0099D148;

extern "C" __declspec(naked) void __cdecl fn_007C9D80(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        fldz
        fst dword ptr [ecx + 0x10]
        xor eax, eax
        fst dword ptr [ecx + 0x54]
        mov dword ptr [ecx + 0x50], eax
        fst dword ptr [ecx + 0x58]
        mov dword ptr [ecx + 0x1c], eax
        fst dword ptr [ecx + 0x24]
        mov dword ptr [ecx], eax
        fst dword ptr [ecx + 0x14]
        mov dword ptr [ecx + 0x4], eax
        fst dword ptr [ecx + 0x20]
        mov dword ptr [ecx + 0x8], eax
        fstp dword ptr [ecx + 0x28]
        mov dword ptr [ecx + 0xc], eax
        fld dword ptr [mem_0099D148]
        lea eax, [ecx + 0x30]
        push eax
        fstp dword ptr [ecx + 0x2c]
        call ext_007C9C90
        add esp, 0x4
        add ecx, 0x40
        mov dword ptr [esp + 0x4], ecx
        jmp ext_007C9C90
    }
}

// [0x007CA1E0] sub_007CA1E0 (81 bytes)
extern "C" int mem_009548E0;

extern "C" __declspec(naked) void __cdecl fn_007CA1E0() {
    __asm {
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x14]
        fmul    st(0), st
        xor     ecx, ecx
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x4], ecx
        fmul    st(0), st
        mov     dword ptr [eax + 0x8], ecx
        fld     dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0xc], ecx
        fdiv    qword ptr [mem_009548E0]
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        fld     st(1)
        fadd    st, st(3)
        fmul    st, st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x8]
        fmul    st(0), st
        fld     st(0)
        faddp   st(3), st
        fxch    st(2)
        fmul    st, st(1)
        fstp    dword ptr [eax + 0x10]
        fxch    st(1)
        faddp   st(2), st
        fmulp   st(1), st
        fstp    dword ptr [eax + 0x20]
        ret
    }
}

// [0x007C5FD0] sub_007C5FD0 (89 bytes)
extern "C" void __cdecl fn_007C5FD0(char* self, float* out) {
    out[0] = *(float*)(self + 0x110);
    out[1] = *(float*)(self + 0x114);
    out[2] = *(float*)(self + 0x118);
    out[3] = *(float*)(self + 0x120);
    out[4] = *(float*)(self + 0x124);
    out[5] = *(float*)(self + 0x128);
    out[6] = *(float*)(self + 0x130);
    out[7] = *(float*)(self + 0x134);
    out[8] = *(float*)(self + 0x138);
}

// [0x007C6250] sub_007C6250 (89 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C6250(void* self, const void* in) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        fld dword ptr [ecx]
        mov edx, dword ptr [esp + 0x4]
        fstp dword ptr [edx + 0x110]
        lea eax, [edx + 0x110]
        fld dword ptr [ecx + 0x4]
        add edx, 0xd0
        fstp dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], eax
        fld dword ptr [ecx + 0x8]
        mov dword ptr [esp + 0x4], edx
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx + 0x18]
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx + 0x1c]
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [eax + 0x28]
        jmp ext_007D5170
    }
}

// [0x007CCEC0] sub_007CCEC0 (89 bytes)
extern "C" __declspec(naked) void* __cdecl fn_007CCEC0(int* a0, unsigned a1, unsigned a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        cmp ebx, esi
        push edi
        ja fail_007CCEC0
        mov edi, dword ptr [esp + 0x18]
        cmp edi, esi
        ja fail_007CCEC0
        mov eax, edi
        sub eax, ebx
        sar eax, 0x1f
        mov ecx, eax
        push ebp
        not ecx
        mov ebp, eax
        mov edx, ecx
        and eax, ebx
        and ecx, edi
        and edx, ebx
        and ebp, edi
        or edx, ebp
        or eax, ecx
        imul esi, edx
        lea ecx, [edx + 0x1]
        imul ecx, edx
        mov edx, dword ptr [esp + 0x14]
        sar ecx, 0x1
        sub eax, ecx
        add eax, esi
        imul eax, eax, 0x58
        add eax, dword ptr [edx + 0x8]
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
fail_007CCEC0:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007CA7C0] sub_007CA7C0 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CA7C0(void* self, int edx_unused, const float* src, float* dst) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [eax + 0x4]
        mov edx, dword ptr [esp + 0x8]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fadd dword ptr [ecx + 0x30]
        fstp dword ptr [edx]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x14]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x24]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fadd dword ptr [ecx + 0x34]
        fstp dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fadd dword ptr [ecx + 0x38]
        fstp dword ptr [edx + 0x8]
        ret 8
    }
}

// [0x007CC480] sub_007CC480 (91 bytes)
extern "C" short __cdecl fn_007CC480(void* unused, float* m4, float* m3) {
    m3[0] = 1.0f;
    m3[4] = 1.0f;
    m3[8] = 1.0f;
    m3[1] = 0.0f;
    m3[2] = 0.0f;
    m3[3] = 0.0f;
    m3[5] = 0.0f;
    m3[6] = 0.0f;
    m3[7] = 0.0f;

    m4[0] = 1.0f;
    m4[5] = 1.0f;
    m4[10] = 1.0f;
    m4[15] = 1.0f;
    m4[1] = 0.0f;
    m4[2] = 0.0f;
    m4[3] = 0.0f;
    m4[4] = 0.0f;
    m4[6] = 0.0f;
    m4[7] = 0.0f;
    m4[8] = 0.0f;
    m4[9] = 0.0f;
    m4[11] = 0.0f;
    m4[12] = 0.0f;
    m4[13] = 0.0f;
    m4[14] = 0.0f;
    return 0;
}

// [0x007CCF20] sub_007CCF20 (93 bytes)
extern "C" __declspec(naked) int __cdecl fn_007CCF20(void* self, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        cmp ebx, esi
        push edi
        ja L_zero_007CCF20
        mov edi, dword ptr [esp + 0x18]
        cmp edi, esi
        ja L_zero_007CCF20
        mov eax, edi
        sub eax, ebx
        sar eax, 0x1f
        mov ecx, eax
        not ecx
        push ebp
        mov ebp, eax
        mov edx, ecx
        and ecx, edi
        and eax, ebx
        or eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        lea ecx, [edx + 0x1]
        imul esi, edx
        imul ecx, edx
        mov edx, dword ptr [esp + 0x14]
        sar ecx, 1
        sub eax, ecx
        mov ecx, dword ptr [edx + 0x8]
        add eax, esi
        imul eax, eax, 0x58
        mov eax, dword ptr [eax + ecx + 0x4c]
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    L_zero_007CCF20:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007CCF80] sub_007CCF80 (93 bytes)
extern "C" __declspec(naked) int __cdecl fn_007CCF80(void* self, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        cmp ebx, esi
        push edi
        ja L_zero_007CCF80
        mov edi, dword ptr [esp + 0x18]
        cmp edi, esi
        ja L_zero_007CCF80
        mov eax, edi
        sub eax, ebx
        sar eax, 0x1f
        mov ecx, eax
        not ecx
        push ebp
        mov ebp, eax
        mov edx, ecx
        and ecx, edi
        and eax, ebx
        or eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        lea ecx, [edx + 0x1]
        imul esi, edx
        imul ecx, edx
        mov edx, dword ptr [esp + 0x14]
        sar ecx, 1
        sub eax, ecx
        mov ecx, dword ptr [edx + 0x8]
        add eax, esi
        imul eax, eax, 0x58
        mov eax, dword ptr [eax + ecx + 0x50]
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    L_zero_007CCF80:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007CCFE0] sub_007CCFE0 (93 bytes)
extern "C" __declspec(naked) int __cdecl fn_007CCFE0(void* self, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        cmp ebx, esi
        push edi
        ja L_zero_007CCFE0
        mov edi, dword ptr [esp + 0x18]
        cmp edi, esi
        ja L_zero_007CCFE0
        mov eax, edi
        sub eax, ebx
        sar eax, 0x1f
        mov ecx, eax
        not ecx
        push ebp
        mov ebp, eax
        mov edx, ecx
        and ecx, edi
        and eax, ebx
        or eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        lea ecx, [edx + 0x1]
        imul esi, edx
        imul ecx, edx
        mov edx, dword ptr [esp + 0x14]
        sar ecx, 1
        sub eax, ecx
        mov ecx, dword ptr [edx + 0x8]
        add eax, esi
        imul eax, eax, 0x58
        mov eax, dword ptr [eax + ecx + 0x54]
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    L_zero_007CCFE0:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007CD900] sub_007CD900 (94 bytes)
// Writes negated/copied components of the 4-float input at ecx into the 12-float block at eax.
extern "C" __declspec(naked) void __fastcall fn_007CD900(void* self) {
    __asm {
        push ecx
        fld dword ptr [ecx + 0x4]
        fchs
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x8]
        fchs
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0xc]
        fchs
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x18]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0x28]
        fchs
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0xc]
        fchs
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0x14]
        fchs
        fstp dword ptr [eax + 0x8]
        pop ecx
        ret
    }
}

// [0x007CD960] sub_007CD960 (100 bytes)
// Writes negated/copied components of the 4-float input at ecx into the 12-float block at eax.
extern "C" __declspec(naked) void __fastcall fn_007CD960(void* self) {
    __asm {
        push ecx
        fld dword ptr [ecx + 0x4]
        fchs
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x8]
        fchs
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0xc]
        fchs
        fstp dword ptr [eax + 0x20]
        fld dword ptr [ecx]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x18]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x4]
        fchs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0x28]
        fchs
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [ecx + 0x8]
        fchs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0xc]
        fchs
        fstp dword ptr [eax + 0x24]
        fld dword ptr [ecx + 0xc]
        fchs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [eax + 0x14]
        fchs
        fstp dword ptr [eax + 0x8]
        pop ecx
        ret
    }
}

// [0x007C7970] sub_007C7970 (103 bytes)
extern "C" int __cdecl fn_007C7970(char* self) {
    int i = 0;
    unsigned int* p = (unsigned int*)(self + 0x20);
    do {
        if ((p[-8] & 0x7f800000u) == 0x7f800000u) return 1;
        if ((p[-4] & 0x7f800000u) == 0x7f800000u) return 1;
        if ((p[0] & 0x7f800000u) == 0x7f800000u) return 1;
        if ((p[4] & 0x7f800000u) == 0x7f800000u) return 1;
        ++i;
        ++p;
    } while (i < 3);
    return 0;
}

// [0x007CA280] sub_007CA280 (103 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CA280(void* self) {
    __asm {
        push ecx
        fld dword ptr [edx]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_x_ecx
        fld dword ptr [edx]
        jmp L_x_store
L_x_ecx:
        fld dword ptr [ecx]
L_x_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi]
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_y_ecx
        fld dword ptr [edx + 0x4]
        jmp L_y_store
L_y_ecx:
        fld dword ptr [ecx + 0x4]
L_y_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0x8]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_z_ecx
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x8]
        pop ecx
        ret
L_z_ecx:
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x8]
        pop ecx
        ret
    }
}

// [0x007CB8D0] sub_007CB8D0 (103 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CB8D0(void* self) {
    __asm {
        push ecx
        fld dword ptr [edx]
        fld dword ptr [ecx]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_b8_x_ecx
        fld dword ptr [edx]
        jmp L_b8_x_store
L_b8_x_ecx:
        fld dword ptr [ecx]
L_b8_x_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi]
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x4]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_b8_y_ecx
        fld dword ptr [edx + 0x4]
        jmp L_b8_y_store
L_b8_y_ecx:
        fld dword ptr [ecx + 0x4]
L_b8_y_store:
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0x8]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_b8_z_ecx
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x8]
        pop ecx
        ret
L_b8_z_ecx:
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fstp dword ptr [esi + 0x8]
        pop ecx
        ret
    }
}

// [0x007C7150] sub_007C7150 (105 bytes)
extern "C" void ext_007C70A0(void* self);
extern "C" void ext_007D5AF0(void* a, int b, int c);

extern "C" void __cdecl fn_007C7150(void* self) {
    char* p = (char*)self;
    typedef void (__cdecl *fn_t)(void*);
    fn_t f = *(fn_t*)(p + 0x30);
    if (f) {
        f(self);
    }
    if (*(void**)(p + 0x34)) {
        ext_007C70A0(self);
    }
    ext_007D5AF0(p + 0x44, 0, 0);
    *(float*)(p + 0x4c) = *(float*)(p + 0x4c) - *(float*)(p + 0x1c);
    *(float*)(p + 0x50) = *(float*)(p + 0x50) - *(float*)(p + 0x1c);
    *(float*)(p + 0x54) = *(float*)(p + 0x54) - *(float*)(p + 0x1c);
    *(float*)(p + 0x58) = *(float*)(p + 0x58) + *(float*)(p + 0x1c);
    *(float*)(p + 0x5c) = *(float*)(p + 0x5c) + *(float*)(p + 0x1c);
    *(float*)(p + 0x60) = *(float*)(p + 0x60) + *(float*)(p + 0x1c);
}

// [0x007CC970] sub_007CC970 (80 bytes)
extern "C" void ext_007D58E0();
extern "C" __declspec(naked) void __cdecl fn_007CC970(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test dword ptr [esi], 0xffffff00
        je skip_flags
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax + 0xb0]
        push 0x0099dd3c
        push ecx
        push 0
        call ext_007D58E0
        add esp, 0xc
skip_flags:
        mov eax, dword ptr [esi]
        and eax, 0xff
        lea edx, [eax + 4*eax]
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax + 0x20]
        mov edx, dword ptr [ecx + 8*edx]
        push esi
        call edx
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [ecx + 0x10]
        push esi
        call edx
        add esp, 8
        pop esi
        ret
    }
}

extern "C" int mem_0099D228;
extern "C" int mem_009548E8;
extern "C" void ext_007CC9C0();
extern "C" void ext_007CC970();

// [0x007C8690] sub_007C8690 (102 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C8690(int* a0) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0xc]
        xor ebx, ebx
        test esi, esi
        je done
        push edi
    loop_:
        mov edi, dword ptr [esi + 0x8]
        push esi
        call ext_007CC9C0
        add esp, 0x4
        test eax, eax
        jne skip
        push esi
        call ext_007CC970
        add esp, 0x4
    skip:
        mov eax, dword ptr [ebp + 0xc]
        cmp edi, eax
        jne notEq
        mov ecx, ebx
        add ebx, 1
        cmp ecx, 0x64
        jg report
    notEq:
        test eax, eax
        mov esi, edi
        jne loop_
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    report:
        mov edx, dword ptr [ebp + 0xb0]
        push offset mem_0099D228
        push offset mem_009548E8
        push edx
        push 1
        call ext_007D58E0
        add esp, 0x10
        pop edi
    done:
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007C8C90] sub_007C8C90 (106 bytes)
extern "C" __declspec(naked) int __cdecl fn_007C8C90(void* a0, int* a1, int* a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0xc]
        cmp dword ptr [ecx], edx
        jge done_check
        push ebx
        push edi
loop_top:
        mov eax, dword ptr [ecx]
        test eax, eax
        jl loop_next
        cmp eax, dword ptr [esi + 0xc]
        jge loop_next
        mov ebx, dword ptr [esi + 0x10]
        mov edi, eax
        imul edi, edi, 0x9c
        cmp dword ptr [edi + ebx + 0x8], eax
        je loop_found
loop_next:
        add eax, 0x1
        cmp eax, edx
        mov dword ptr [ecx], eax
        jl loop_top
loop_found:
        pop edi
        pop ebx
done_check:
        mov eax, dword ptr [ecx]
        cmp eax, edx
        jne has_value
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax], 0x0
        xor eax, eax
        pop esi
        ret
has_value:
        mov edx, dword ptr [esi + 0x10]
        imul eax, eax, 0x9c
        mov eax, dword ptr [eax + edx + 0xc]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [edx], eax
        add dword ptr [ecx], 0x1
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x007CFEC0] sub_007CFEC0 (108 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CFEC0(void* self) {
    __asm {
        push ecx
        fld dword ptr [eax+10h]
        fmul dword ptr [ecx+4]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax+20h]
        fmul dword ptr [ecx+8]
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edx]
        fadd dword ptr [eax+30h]
        fstp dword ptr [esi]
        fld dword ptr [eax+4]
        fmul dword ptr [ecx]
        fld dword ptr [eax+14h]
        fmul dword ptr [ecx+4]
        faddp st(1), st
        fld dword ptr [eax+24h]
        fmul dword ptr [ecx+8]
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edx+4]
        fadd dword ptr [eax+34h]
        fstp dword ptr [esi+4]
        fld dword ptr [eax+8]
        fmul dword ptr [ecx]
        fld dword ptr [eax+18h]
        fmul dword ptr [ecx+4]
        faddp st(1), st
        fld dword ptr [eax+28h]
        fmul dword ptr [ecx+8]
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edx+8]
        fadd dword ptr [eax+38h]
        fstp dword ptr [esi+8]
        pop ecx
        ret
    }
}

// [0x007CA830] sub_007CA830 (108 bytes)
extern "C" void ext_006A7250();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __cdecl fn_007CA830(void* self, float f, float g, float h) {
    __asm {
        fld dword ptr [esp + 0x8]
        push esi
        fld qword ptr [mem_00993828]
        mov esi, dword ptr [esp + 0x8]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        fmul st, st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x14]
        fld dword ptr [esp + 0x14]
        fmulp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fst dword ptr [esi + 0x18]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x1c]
        pop esi
        ret
    }
}

// [0x007CAF30] sub_007CAF30 (54 bytes)
extern "C" void ext_007CA830();

extern "C" __declspec(naked) void __cdecl fn_007CAF30() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        push 2
        push eax
        push esi
        call ext_007CC8E0
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 1Ch]
        fstp dword ptr [esp]
        push esi
        call ext_007CA830
        add esp, 10h
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007C7900] sub_007C7900 (109 bytes)
extern "C" int __cdecl fn_007C7900(char* self) {
    int i = 0;
    unsigned int* p = (unsigned int*)(self + 0xF0);
    do {
        if ((p[-4] & 0x7f800000u) == 0x7f800000u) return 1;
        if ((p[0] & 0x7f800000u) == 0x7f800000u) return 1;
        if ((p[-48] & 0x7f800000u) == 0x7f800000u) return 1;
        if ((p[-44] & 0x7f800000u) == 0x7f800000u) return 1;
        ++i;
        ++p;
    } while (i < 3);
    return 0;
}

// [0x007CAF70] sub_007CAF70 (69 bytes)
extern "C" void ext_007CAF30();

extern "C" __declspec(naked) void* __cdecl fn_007CAF70(void* self, float a1, float a2, float a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0x20
        call ecx
        add esp, 0x8
        test eax, eax
        je short loc_zero_007CAF70
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push esi
        push eax
        call ext_007CAF30
        add esp, 0x14
        pop esi
        ret
    loc_zero_007CAF70:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007C9280] sub_007C9280 (115 bytes)
extern "C" void* __cdecl ext_007D8710(void* p);
extern "C" int __cdecl ext_007C58E0(void* p);
extern "C" int __cdecl ext_007D3490(int v);

extern "C" int __cdecl fn_007C9280(void* p) {
    int cnt = 0;
    void* a = ext_007D8710(p);
    int b = ext_007C58E0(p);
    if (a) {
        char* node = *(char**)((char*)a + 0x168);
        if (node) {
            do {
                int t = *(int*)(node + 0x84);
                if (t == 0) {
                    cnt += 1;
                } else if (t == 1) {
                    cnt += 2;
                } else {
                    cnt += 3;
                }
                node = *(char**)(node + 0x5c);
            } while (node);
        }
        return cnt;
    }
    if (b) {
        return ext_007D3490(b);
    }
    return *(int*)((char*)p + 0xa4);
}

// [0x007C93E0] sub_007C93E0 (119 bytes)
extern "C" void ext_007CA110();

extern "C" void __cdecl fn_007C93E0(void* a0, int a1, int a2, int a3) {
    char* self = (char*)a0;
    if (a1 == 0) {
        ((void (__cdecl*)(int, int, int, int))ext_007CA110)(*(int*)(self + 0x94), (int)(self + 0xbc), 0, a2);
        ((void (__cdecl*)(int, int, int, int))ext_007CA110)(*(int*)(self + 0x94), (int)(self + 0xcc), 0, a3);
    } else {
        ((void (__cdecl*)(int, int, int, int))ext_007CA110)(*(int*)(self + 0x98), (int)(self + 0xfc), 0, a2);
        ((void (__cdecl*)(int, int, int, int))ext_007CA110)(*(int*)(self + 0x98), (int)(self + 0x10c), 0, a3);
    }
}

// [0x007CC510] sub_007CC510 (123 bytes)
extern "C" void ext_007CC4E0(int a0, int a1, float* a2);

struct Cc510Xf {
    char pad[0x30];
    float ox, oy, oz;
};

extern "C" __declspec(naked) float __cdecl fn_007CC510(int a0, Cc510Xf* a1, float* a2) {
    __asm {
        sub esp, 0x18
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [esp + 0xc]
        push eax
        push edx
        push ecx
        call ext_007CC4E0
        mov eax, dword ptr [esp + 0x30]
        fld dword ptr [eax]
        add esp, 0xc
        test edx, edx
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x8]
        je short L_no_xf
        fld dword ptr [esp]
        fsub dword ptr [edx + 0x30]
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x4]
        fsub dword ptr [edx + 0x34]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fsub dword ptr [edx + 0x38]
        fstp dword ptr [esp + 0x8]
L_no_xf:
        fld dword ptr [esp + 0x10]
        fmul dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        fmul dword ptr [esp]
        faddp st(1), st
        fld dword ptr [esp + 0x14]
        fmul dword ptr [esp + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        add esp, 0x18
        ret
    }
}

// [0x007CD880] sub_007CD880 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CD880(void* self) {
    __asm {
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax + 0x4]
        fsubp st(1), st
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax + 0x8]
        fsubp st(1), st
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0xc]
        fsubp st(1), st
        fstp dword ptr [edx]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0x8]
        fsubp st(1), st
        fstp dword ptr [edx + 0x4]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx]
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax + 0xc]
        fsubp st(1), st
        fstp dword ptr [edx + 0x8]
        fld dword ptr [eax + 0xc]
        fmul dword ptr [ecx]
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x8]
        fsubp st(1), st
        fstp dword ptr [edx + 0xc]
        ret
    }
}

// [0x007C8E30] sub_007C8E30 (125 bytes)
extern "C" int mem_0092A278;
extern "C" void ext_006A7250();

extern "C" __declspec(naked) void __fastcall fn_007C8E30(void* self) {
    __asm {
        push ecx
        fld dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fld st(2)
        fmulp st(3), st
        fxch st(2)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp]
        fstp dword ptr [esp]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp]
        fstp dword ptr [esp]
        fldz
        fld dword ptr [esp]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_zero_7C8E30
        fstp st(1)
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld st(0)
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [esi]
        fmul st, st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esi + 0x4]
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [esi + 0x8]
        pop ecx
        ret
L_zero_7C8E30:
        fstp st(0)
        fst dword ptr [esp]
        fld1
        fstp dword ptr [esi]
        fst dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x007C6330] sub_007C6330 (128 bytes)
extern "C" void __cdecl fn_007C6330(void* self, float v) {
    char* p = reinterpret_cast<char*>(self);
    char* q = *reinterpret_cast<char**>(p + 0x17c);
    *reinterpret_cast<float*>(p + 0x1c8) = v;
    float a = *reinterpret_cast<float*>(q + 0x1f8);
    float b = *reinterpret_cast<float*>(q + 0x204);
    if (v < a / b) {
        *reinterpret_cast<float*>(p + 0x1c8) = a / b;
    }
    if (a * b < v) {
        *reinterpret_cast<float*>(p + 0x1c8) = a * b;
    }
    *reinterpret_cast<float*>(p + 0x8) = 1.0f / *reinterpret_cast<float*>(p + 0x1c8);
}

// [0x007C7010] sub_007C7010 (129 bytes)
extern "C" void ext_007D48A0();
extern "C" void ext_007D5BA0();

extern "C" __declspec(naked) void __cdecl fn_007C7010(void* self, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test byte ptr [esi + 0x40], 0x1
        je skip_flag
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [esi + 0x34]
        mov eax, dword ptr [ecx + 0x10]
        push edi
        push edx
        call eax
        mov ecx, dword ptr [esi]
        mov edi, dword ptr [ecx + 0xb0]
        lea edx, [esi + 0x44]
        push edx
        call ext_007D48A0
        push eax
        mov eax, dword ptr [edi + 0x10]
        call eax
        add esp, 0xc
        and dword ptr [esi + 0x40], -0x2
        pop edi
    skip_flag:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esi + 0x38], ecx
        je zero_path
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        lea edx, [esi + 0x44]
        push edx
        call ext_007D5BA0
        add esp, 0x8
        cmp dword ptr [esp + 0x18], 0x0
        je clear_flag
        or dword ptr [esi + 0x40], 0x1
        pop esi
        ret
    clear_flag:
        and dword ptr [esi + 0x40], -0x2
        pop esi
        ret
    zero_path:
        push ecx
        add esi, 0x44
        push esi
        call ext_007D5BA0
        add esp, 0x8
        pop esi
        ret
    }
}

// [0x007CA080] sub_007CA080 (130 bytes)
// (a1 + 0x110, a3 + 0x110) are transform sub-objects; callees take eax/ecx/edx.
extern "C" void ext_007DB640();
extern "C" void ext_007FC440();

extern "C" __declspec(naked) void __cdecl fn_007CA080(void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0ch
        test eax, eax
        je L_a1_null
        mov ecx, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [esp + 1ch]
        add eax, 110h
        test esi, esi
        je L_a3_null
        lea edx, [esp + 4]
        call ext_007FC440
        mov ecx, edx
        mov edx, dword ptr [esp + 20h]
        lea eax, [esi + 110h]
        call ext_007DB640
        pop esi
        add esp, 0ch
        ret
L_a3_null:
        mov edx, dword ptr [esp + 20h]
        pop esi
        add esp, 0ch
        jmp ext_007FC440
L_a1_null:
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        je L_copy
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 1ch]
        add eax, 110h
        add esp, 0ch
        jmp ext_007DB640
L_copy:
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], eax
        add esp, 0ch
        ret
    }
}

// [0x007CA120] sub_007CA120 (121 bytes)
extern "C" void __cdecl fn_007CA120(void* a0, float* a1, void* a2, float* a3) {
    float tmp[3];
    float* p = a1;
    if (a0 != 0) {
        tmp[0] = *(float*)((char*)a0 + 0x170) + a1[0];
        tmp[1] = *(float*)((char*)a0 + 0x174) + a1[1];
        tmp[2] = *(float*)((char*)a0 + 0x178) + a1[2];
        p = tmp;
    }
    fn_007CA080(a0, p, a2, a3);
    if (a2 != 0) {
        a3[0] -= *(float*)((char*)a2 + 0x170);
        a3[1] -= *(float*)((char*)a2 + 0x174);
        a3[2] -= *(float*)((char*)a2 + 0x178);
    }
}

// [0x007C9370] sub_007C9370 (34 bytes)
extern "C" void ext_007CA120();

extern "C" __declspec(naked) void __cdecl fn_007C9370(void* a0, float* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax + 0x98]
        push 0x0
        lea ecx, [eax + 0x12c]
        push ecx
        push edx
        call ext_007CA120
        add esp, 0x10
        ret
    }
}

// [0x007C93A0] sub_007C93A0 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C93A0(void* a0, int a1, int a2) {
    __asm {
        cmp dword ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push 0x0
        jne short alt_007C93C9
        mov edx, dword ptr [eax + 0x94]
        lea ecx, [eax + 0xec]
        push ecx
        push edx
        call ext_007CA120
        add esp, 0x10
        ret
alt_007C93C9:
        mov edx, dword ptr [eax + 0x98]
        lea ecx, [eax + 0x12c]
        push ecx
        push edx
        call ext_007CA120
        add esp, 0x10
        ret
    }
}

// [0x007C9490] sub_007C9490 (103 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9490(void* a0, int a1, float a2, float a3, float a4) {
    __asm {
        sub esp, 0ch
        cmp dword ptr [esp + 14h], 0x0
        fld dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 10h]
        fstp dword ptr [esp]
        fld dword ptr [esp + 1ch]
        fstp dword ptr [esp + 4h]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp + 8h]
        jne short alt_007C94D6
        mov edx, dword ptr [eax + 94h]
        lea ecx, [eax + 0ech]
        push ecx
        push edx
        lea eax, [esp + 8h]
        push eax
        push 0x0
        call ext_007CA120
        add esp, 10h
        add esp, 0ch
        ret
alt_007C94D6:
        mov edx, dword ptr [eax + 98h]
        lea ecx, [eax + 12ch]
        push ecx
        push edx
        lea eax, [esp + 8h]
        push eax
        push 0x0
        call ext_007CA120
        add esp, 10h
        add esp, 0ch
        ret
    }
}

// [0x007C9500] sub_007C9500 (78 bytes)
extern "C" void __cdecl ext_007C9490(void* a0, int a1, float a2, float a3, float a4);

extern "C" void __cdecl fn_007C9500(void* a0, float a1, float a2, float a3) {
    ext_007C9490(a0, 0, a1, a2, a3);
    ext_007C9490(a0, 1, a1, a2, a3);
}

// [0x007CA460] sub_007CA460 (132 bytes)
// out[i] = B->vec30[i] + v[i] * A->f10, where A = ext_007D5AE0(a1), B = ext_007D48A0(a1).
extern "C" void ext_007D5AE0();
extern "C" __declspec(naked) void __cdecl fn_007CA460(void* a1, float* v, float* out) {
    __asm {
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x24]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        fld dword ptr [edi + 0x10]
        mov ecx, dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx]
        add esp, 0x8
        fld dword ptr [esp + 0x8]
        pop edi
        fld st(0)
        pop esi
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x30]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x34]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x38]
        mov eax, dword ptr [esp + 0x28]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x8]
        add esp, 0x1c
        ret
    }
}

// [0x007C8960] sub_007C8960 (141 bytes)
struct Cell007C8960 {
    int v[6];
};

extern "C" void __cdecl fn_007C8960(int* self, int b, int c, const Cell007C8960* d) {
    Cell007C8960* e = (Cell007C8960*)(((char*)self[10]) + 24 * (self[0] * c + b));
    *e = *d;
    e->v[3] = 0;
    if (b != c) {
        Cell007C8960* f = (Cell007C8960*)(((char*)self[10]) + 24 * (self[0] * b + c));
        *f = *d;
        f->v[3] = 1;
    }
}

// [0x007C79E0] sub_007C79E0 (141 bytes)
extern "C" __declspec(naked) void __fastcall fn_007C79E0(void* self) {
    __asm {
        mov ecx, dword ptr [ebx + 0x18]
        mov edx, dword ptr [ebx + 0x1c]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [ecx + 4*ebp]
        push edi
        mov edi, dword ptr [edx + 4*ebp]
        add edi, esi
        cmp esi, edi
        jge L_second
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop1:
        test eax, eax
        jne L_second
        mov eax, dword ptr [ebx + 0x14]
        mov ecx, dword ptr [eax + 4*esi]
        push ecx
        call ext_007C7900
        add esi, 1
        add esp, 4
        cmp esi, edi
        jl L_loop1
    L_second:
        mov edx, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [ebx + 0x8]
        mov esi, dword ptr [edx + 4*ebp]
        mov edi, dword ptr [ecx + 4*ebp]
        add edi, esi
        cmp esi, edi
        jge L_tail
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_loop2:
        test eax, eax
        jne L_tail_call
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 4*esi]
        push eax
        call ext_007C7970
        add esi, 1
        add esp, 4
        cmp esi, edi
        jl L_loop2
    L_tail:
        test eax, eax
        je L_done
    L_tail_call:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx + 0x5c4]
        test eax, eax
        je L_done
        mov ecx, dword ptr [ecx + 0x5cc]
        push ecx
        push ebp
        push ebx
        call eax
        add esp, 0xc
    L_done:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x007CC3F0] sub_007CC3F0 (143 bytes)
extern "C" void ext_007D48A0();
extern "C" int mem_0099DCA0;
extern "C" int mem_0092C180;

extern "C" __declspec(naked) void __cdecl fn_007CC3F0(void* a0, int a1, float* a2) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_007D48A0
        mov edx, dword ptr [esp + 0x18]
        mov ecx, eax
        fld dword ptr [ecx + 0x24]
        add esp, 0x4
        fmul dword ptr [edx + 0x4]
        fld dword ptr [edx]
        fmul dword ptr [ecx + 0x20]
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmul dword ptr [edx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fcomp qword ptr [mem_0099DCA0]
        fnstsw ax
        test ah, 0x1
        mov eax, dword ptr [esp + 0x18]
        jne scale_path
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [eax + 0x8]
        add esp, 0xc
        ret
    scale_path:
        fld dword ptr [edx]
        fld qword ptr [mem_0092C180]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [edx + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [edx + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0xc
        ret
    }
}

// [0x007CD5D0] sub_007CD5D0 (132 bytes)
extern "C" void __cdecl ext_007E1720(void* a0);
extern "C" void __cdecl ext_007E19D0(void* a0);
extern "C" void __cdecl ext_007E1D30(void* a0);
extern "C" void __cdecl ext_007E2AF0(void* a0);
extern "C" void __cdecl ext_007E3D70(void* a0);
extern "C" void __cdecl ext_007E3FB0(void* a0);
extern "C" void __cdecl ext_007E4690(void* a0);
extern "C" void __cdecl ext_007E62C0(void* a0);
extern "C" void __cdecl ext_007E7F90(void* a0);
extern "C" void __cdecl ext_007E89C0(void* a0);
extern "C" void __cdecl ext_007E8EE0(void* a0);
extern "C" void __cdecl ext_007EC6A0(void* a0);
extern "C" void __cdecl ext_007ECC90(void* a0);
extern "C" void __cdecl ext_007ED4A0(void* a0);
extern "C" void __cdecl ext_007EF0D0(void* a0);
extern "C" void __cdecl ext_007EF8D0(void* a0);
extern "C" void __cdecl ext_007EF8F0(void* a0);
extern "C" void __cdecl ext_007EFB20(void* a0);
extern "C" void __cdecl ext_007EFB40(void* a0);

extern "C" int __cdecl fn_007CD5D0(void* a0) {
    ext_007EFB40(a0);
    ext_007EF8D0(a0);
    ext_007EFB20(a0);
    ext_007EF8F0(a0);
    ext_007EF0D0(a0);
    ext_007ED4A0(a0);
    ext_007ECC90(a0);
    ext_007EC6A0(a0);
    ext_007E8EE0(a0);
    ext_007E89C0(a0);
    ext_007E7F90(a0);
    ext_007E62C0(a0);
    ext_007E1720(a0);
    ext_007E19D0(a0);
    ext_007E1D30(a0);
    ext_007E2AF0(a0);
    ext_007E3D70(a0);
    ext_007E3FB0(a0);
    ext_007E4690(a0);
    return 1;
}

// [0x007C6150] sub_007C6150 (155 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C6150(void* self, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x120]
        mov ecx, dword ptr [esp + 0x8]
        fmul dword ptr [eax + 0x174]
        fld dword ptr [eax + 0x110]
        fmul dword ptr [eax + 0x170]
        faddp st(1), st
        fld dword ptr [eax + 0x130]
        fmul dword ptr [eax + 0x178]
        faddp st(1), st
        fadd dword ptr [eax + 0x140]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x114]
        fmul dword ptr [eax + 0x170]
        fld dword ptr [eax + 0x124]
        fmul dword ptr [eax + 0x174]
        faddp st(1), st
        fld dword ptr [eax + 0x134]
        fmul dword ptr [eax + 0x178]
        faddp st(1), st
        fadd dword ptr [eax + 0x144]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x118]
        fmul dword ptr [eax + 0x170]
        fld dword ptr [eax + 0x128]
        fmul dword ptr [eax + 0x174]
        faddp st(1), st
        fld dword ptr [eax + 0x138]
        fmul dword ptr [eax + 0x178]
        faddp st(1), st
        fadd dword ptr [eax + 0x148]
        fstp dword ptr [ecx + 0x8]
        ret
    }
}

// [0x007C3CB0] sub_007C3CB0 (160 bytes)
// Bit-writer step: appends 3 bits of the value argument (stack slot +0x10 at entry) into the
// 16-bit accumulator at self+0x16B0 (bit count at self+0x16B4, output index at self+0x14,
// buffer base at self+0x8). Flushes two bytes when the accumulator would overflow, then
// tail-jumps to ext_007C5570 with the same stack arguments.
extern "C" void ext_007C5570();

extern "C" __declspec(naked) void __cdecl fn_007C3CB0(void* self, int a1, int a2, int value) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x16b4]
        cmp ecx, 0xd
        jle short L_else_007C3CB0
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x18], 0x1
        mov edx, esi
        mov dword ptr [esp + 0xc], eax
        shl edx, cl
        mov ecx, dword ptr [eax + 0x8]
        or word ptr [eax + 0x16b0], dx
        mov edx, dword ptr [eax + 0x14]
        mov bl, byte ptr [eax + 0x16b0]
        mov byte ptr [ecx + edx], bl
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [eax + 0x8]
        mov bl, byte ptr [eax + 0x16b1]
        inc ecx
        mov dword ptr [eax + 0x14], ecx
        mov byte ptr [ecx + edx], bl
        mov edx, dword ptr [eax + 0x16b4]
        mov ebx, dword ptr [eax + 0x14]
        mov cl, 0x10
        sub cl, dl
        inc ebx
        shr si, cl
        add edx, -0xd
        mov dword ptr [eax + 0x14], ebx
        mov dword ptr [eax + 0x16b4], edx
        mov word ptr [eax + 0x16b0], si
        pop esi
        pop ebx
        jmp ext_007C5570
    L_else_007C3CB0:
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x10], 0x1
        shl edx, cl
        mov dword ptr [esp + 0x4], eax
        or word ptr [eax + 0x16b0], dx
        add ecx, 0x3
        mov dword ptr [eax + 0x16b4], ecx
        jmp ext_007C5570
    }
}

// [0x007CA4F0] sub_007CA4F0 (161 bytes)
extern "C" __declspec(naked) short __cdecl fn_007CA4F0(float* a, float* b, float* c, float* d) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], ecx
        mov dword ptr [eax + 0x20], ecx
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0x10]
        fld st(0)
        fld qword ptr [mem_009552D0]
        fmul st(1), st
        fxch st(1)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x10]
        fld st(0)
        fmul st, st(2)
        fmulp st(1), st
        fstp dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x10]
        fld st(0)
        fmulp st(2), st
        fmulp st(1), st
        fstp dword ptr [eax + 0x20]
        mov eax, dword ptr [esp + 0x8]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x10]
        fld qword ptr [mem_0095FFC0]
        fmul st, st(1)
        fmul st, st(1)
        fmulp st(1), st
        fstp dword ptr [eax]
        xor ax, ax
        ret
    }
}

// [0x007CB3B0] sub_007CB3B0 (177 bytes)
extern "C" int mem_0099D6C0;
extern "C" int mem_00993CA0;
extern "C" int mem_00993828;
extern "C" int mem_009576E8;
extern "C" __declspec(naked) void __cdecl fn_007CB3B0() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        fld dword ptr [eax + 10h]
        xor ecx, ecx
        fstp dword ptr [esp]
        fld dword ptr [eax + 14h]
        mov eax, dword ptr [esp + 10h]
        fadd st(0), st
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0Ch], ecx
        fstp dword ptr [esp + 8]
        mov dword ptr [eax + 14h], ecx
        fld dword ptr [esp + 8]
        mov dword ptr [eax + 18h], ecx
        fld dword ptr [esp]
        mov dword ptr [eax + 1Ch], ecx
        fld st(1)
        fmul qword ptr [mem_0099D6C0]
        fmul st, st(2)
        fld st(1)
        fmul qword ptr [mem_00993CA0]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fst dword ptr [eax]
        fstp dword ptr [eax + 10h]
        fld qword ptr [mem_00993828]
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr [eax + 20h]
        mov eax, dword ptr [esp + 0Ch]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 4]
        fst dword ptr [eax + 8]
        fst dword ptr [eax + 0Ch]
        fst dword ptr [eax + 10h]
        fst dword ptr [eax + 18h]
        fst dword ptr [eax + 1Ch]
        fst dword ptr [eax + 20h]
        fst dword ptr [eax + 24h]
        fst dword ptr [eax + 2Ch]
        fst dword ptr [eax + 30h]
        fst dword ptr [eax + 34h]
        fstp dword ptr [eax + 38h]
        fst dword ptr [eax + 14h]
        fst dword ptr [eax + 28h]
        fstp dword ptr [eax + 3Ch]
        mov eax, dword ptr [esp + 14h]
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [eax]
        xor ax, ax
        pop ecx
        ret
    }
}

extern "C" void __cdecl ext_007C8730(void* p);
extern "C" int mem_00AB28BC;

// [0x007C8750] sub_007C8750 (180 bytes)
extern "C" void __cdecl fn_007C8750(void* a1) {
    typedef void (__cdecl *cdecl_fn)(void*);
    char* s = (char*)a1;
    ext_007C8730(s);
    char* edi = *(char**)(s + 0x24);
    while (edi != 0) {
        ((cdecl_fn)(*(int*)edi))(s);
        edi = *(char**)(edi + 0x4);
    }
    if (*(int*)(s + 0x2c) != 0) {
        ((cdecl_fn)mem_00AB28BC)(s + 0x2c);
    }
    *(int*)s = 0;
    *(int*)(s + 0x4) = 0;
    ((cdecl_fn)mem_00AB28BC)(s + 0x4c);
    ((cdecl_fn)mem_00AB28BC)(s + 0x6c);
    {
        char* obj = *(char**)(s + 0xb0);
        ((cdecl_fn)(*(int*)(obj + 0xc)))(*(void**)(s + 0xa4));
    }
    {
        char* obj = *(char**)(s + 0xb0);
        ((cdecl_fn)(*(int*)(obj + 0xc)))(*(void**)(s + 0x20));
    }
    {
        char* obj = *(char**)(s + 0xb0);
        ((cdecl_fn)(*(int*)(obj + 0xc)))(*(void**)(s + 0x28));
    }
    if (*(int*)(s + 0x24) != 0) {
        char* obj = *(char**)(s + 0xb0);
        ((cdecl_fn)(*(int*)(obj + 0xc)))(*(void**)(s + 0x24));
    }
    {
        char* obj = *(char**)(s + 0xb0);
        ((cdecl_fn)(*(int*)(obj + 0xc)))(s);
    }
}

// [0x007CBC50] sub_007CBC50 (186 bytes)
extern "C" int mem_0099D8C0;
extern "C" int mem_0099D6C0;
extern "C" int mem_00993CA0;
extern "C" int mem_00993828;
extern "C" int mem_009576E8;
extern "C" __declspec(naked) void __cdecl fn_007CBC50() {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        fld dword ptr [eax + 10h]
        xor ecx, ecx
        fstp dword ptr [esp]
        fld dword ptr [eax + 10h]
        fmul qword ptr [mem_0099D8C0]
        fadd dword ptr [eax + 14h]
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        fadd st(0), st
        mov dword ptr [eax + 0Ch], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 18h], ecx
        fstp dword ptr [esp + 8]
        mov dword ptr [eax + 1Ch], ecx
        fld dword ptr [esp + 8]
        fld dword ptr [esp]
        fld st(1)
        fmul qword ptr [mem_0099D6C0]
        fmul st, st(2)
        fld st(1)
        fmul qword ptr [mem_00993CA0]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fst dword ptr [eax]
        fstp dword ptr [eax + 10h]
        fld qword ptr [mem_00993828]
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr [eax + 20h]
        mov eax, dword ptr [esp + 0Ch]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 4]
        fst dword ptr [eax + 8]
        fst dword ptr [eax + 0Ch]
        fst dword ptr [eax + 10h]
        fst dword ptr [eax + 18h]
        fst dword ptr [eax + 1Ch]
        fst dword ptr [eax + 20h]
        fst dword ptr [eax + 24h]
        fst dword ptr [eax + 2Ch]
        fst dword ptr [eax + 30h]
        fst dword ptr [eax + 34h]
        fstp dword ptr [eax + 38h]
        fst dword ptr [eax + 14h]
        fst dword ptr [eax + 28h]
        fstp dword ptr [eax + 3Ch]
        mov eax, dword ptr [esp + 14h]
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [eax]
        xor ax, ax
        pop ecx
        ret
    }
}

// [0x007C6880] sub_007C6880 (187 bytes)
extern "C" void __cdecl fn_007C6880(void* a0, float a1, float a2, float a3, float a4, float a5, float a6) {
    float* s = (float*)a0;
    float t[3];
    float d[3];
    fn_007C6150(a0, t);
    d[0] = a4 - t[0];
    d[1] = a5 - t[1];
    d[2] = a6 - t[2];
    s[4] += a1;
    s[5] += a2;
    s[6] += a3;
    t[0] = d[1] * a3 - d[2] * a2;
    t[1] = d[2] * a1 - d[0] * a3;
    t[2] = d[0] * a2 - d[1] * a1;
    s[8] += t[0];
    s[9] += t[1];
    s[10] += t[2];
}

// [0x007CCDF0] sub_007CCDF0 (77 bytes)
extern "C" void __cdecl ext_007DFDE0(int a0, int a1);
extern "C" void __cdecl ext_007DFB60(int a0);

extern "C" void __cdecl fn_007CCDF0(void* a0) {
    unsigned char* p = (unsigned char*)a0;
    ext_007DFDE0(*(int*)(p + 0x18), *(int*)(p + 0x20));
    ext_007DFB60(*(int*)(p + 0x1c));
    {
        void** t = *(void***)(p + 0x20);
        ((void (__cdecl*)(int))t[3])(*(int*)(p + 0x0c));
    }
    {
        void** t = *(void***)(p + 0x20);
        ((void (__cdecl*)(int))t[3])(*(int*)(p + 0x10));
    }
    {
        void** t = *(void***)(p + 0x20);
        ((void (__cdecl*)(int))t[3])(*(int*)(p + 0x08));
    }
    {
        void** t = *(void***)(p + 0x20);
        ((void (__cdecl*)(void*))t[3])(a0);
    }
}

// [0x007C6CF0] sub_007C6CF0 (187 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C6CF0(void* self, float* a, float* out) {
    __asm {
        sub esp, 0x18
        mov edx, dword ptr [esp + 0x1c]
        lea eax, [esp]
        push eax
        push edx
        call ext_007C6150
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [eax]
        fsub dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fsub dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x2c]
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edx + 0xc4]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edx + 0xc8]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [edx + 0xc8]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [edx + 0xc0]
        fmulp st(3), st
        fxch st(1)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edx + 0xc0]
        fmulp st(2), st
        fmul dword ptr [edx + 0xc4]
        fsubp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fadd dword ptr [edx + 0xb0]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0xb4]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx + 0xb8]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        add esp, 0x20
        ret
    }
}

// [0x007CAC90] sub_007CAC90 (190 bytes)
// Stack args (__cdecl): src (point at +0x10..+0x18), out 4x4 (identity), out 3x3 diagonal
// inertia-like matrix from the point, and a scalar out = 8*x*y*z.
extern "C" int mem_00987B28;
extern "C" int mem_0099D590;
extern "C" __declspec(naked) int __cdecl fn_007CAC90(int a0, float* a1, float* a2, float* a3) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x10]
        xor ecx, ecx
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x14]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x18]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], ecx
        fld dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x8], ecx
        fld st(0)
        mov dword ptr [eax + 0xc], ecx
        fmul st, st(1)
        mov dword ptr [eax + 0x14], ecx
        fld dword ptr [esp]
        mov dword ptr [eax + 0x18], ecx
        fld st(0)
        mov dword ptr [eax + 0x1c], ecx
        fmul st, st(1)
        fld st(0)
        fadd st, st(3)
        fld qword ptr [mem_00987B28]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmul st, st(1)
        fld st(0)
        faddp st(6), st
        fxch st(5)
        fmul st, st(2)
        fstp dword ptr [eax + 0x10]
        fxch st(4)
        faddp st(2), st
        fmulp st(1), st
        fstp dword ptr [eax + 0x20]
        mov eax, dword ptr [esp + 0x10]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        mov eax, dword ptr [esp + 0x18]
        fxch st(1)
        fmul qword ptr [mem_0099D590]
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [eax]
        xor ax, ax
        add esp, 0x8
        ret
    }
}

// [0x007CA360] sub_007CA360 (201 bytes)
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();

extern "C" __declspec(naked) void __cdecl fn_007CA360(void* a1, void* a2) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        fld dword ptr [edi + 0x10]
        fstp dword ptr [esp + 0x14]
        lea ebx, [esi + 0x14]
        fld dword ptr [edi + 0x10]
        add esp, 0x8
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x10]
        lea edi, [esi + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x30]
        fstp dword ptr [edi]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [eax + 0x30]
        fstp dword ptr [ebx]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x38]
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        fstp dword ptr [ebx + 0x8]
        je skip_007CA360
        push ebp
        lea ebp, [eax + 0x30]
        mov ecx, ebp
        mov edx, edi
        mov esi, edi
        call ext_007CA280
        mov ecx, ebp
        mov edx, ebx
        mov esi, ebx
        call ext_007CB8D0
        pop ebp
skip_007CA360:
        fld dword ptr [edi]
        mov eax, 1
        fld dword ptr [esp + 0xc]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edi]
        fld dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edi + 0x4]
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edi + 0x8]
        pop edi
        fld dword ptr [ebx]
        pop esi
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [ebx]
        fadd dword ptr [ebx + 0x4]
        fstp dword ptr [ebx + 0x4]
        fadd dword ptr [ebx + 0x8]
        fstp dword ptr [ebx + 0x8]
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x007C8EB0] sub_007C8EB0 (207 bytes)
extern "C" __declspec(naked) void __fastcall fn_007C8EB0(void* self) {
    __asm {
        push ecx
        fld dword ptr [esi]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [esi + 0x4]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fcompp
        fnstsw ax
        fld dword ptr [esi + 0x8]
        test ah, 0x5
        jp loc_7C8F26
        fld dword ptr [esi]
        fld st(1)
        fmulp st(2), st
        _emit 0xdc
        _emit 0xc8
        faddp st(1), st
        call ext_006A7250
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld st(0)
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [edi]
        fldz
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esi]
        fchs
        fmulp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edi + 0x8]
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [ebx]
        fld dword ptr [edi]
        fmul dword ptr [esi + 0x8]
        fld dword ptr [esi]
        fmul dword ptr [edi + 0x8]
        fsubp st(1), st
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [esi + 0x4]
        fchs
        fmul dword ptr [edi]
        fstp dword ptr [ebx + 0x8]
        pop ecx
        ret
    loc_7C8F26:
        fld dword ptr [esi + 0x4]
        _emit 0xdc
        _emit 0xc8
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        call ext_006A7250
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fldz
        fstp dword ptr [edi]
        fld dword ptr [esi + 0x8]
        fchs
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [edi + 0x4]
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edi + 0x8]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esi + 0x8]
        fsubp st(1), st
        fstp dword ptr [ebx]
        fld dword ptr [esi]
        fchs
        fmul dword ptr [edi + 0x8]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esi]
        fstp dword ptr [ebx + 0x8]
        pop ecx
        ret
    }
}

// [0x007CBB80] sub_007CBB80 (208 bytes)
extern "C" int mem_009453D8;
extern "C" int mem_0099D8B8;

extern "C" __declspec(naked) void __cdecl fn_007CBB80(void* a1, float* a2, float* out) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, eax
        fld dword ptr [edx + 0x24]
        add esp, 0x8
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fmul dword ptr [edx + 0x20]
        faddp st(1), st
        fld dword ptr [edx + 0x28]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x30]
        fstp dword ptr [ecx]
        fld dword ptr [edx + 0x34]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [edx + 0x38]
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0x10]
        fcom qword ptr [mem_009453D8]
        fnstsw ax
        test ah, 0x41
        jne L_le_c1
        fstp st(0)
        fld dword ptr [edi + 0x14]
        jmp L_have_s
L_le_c1:
        fcomp qword ptr [mem_0099D8B8]
        fnstsw ax
        test ah, 0x5
        jp L_skip_block1
        fld dword ptr [edi + 0x14]
        fchs
L_have_s:
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x20]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ecx]
        fld dword ptr [edx + 0x24]
        fmul st, st(1)
        fadd dword ptr [ecx + 0x4]
        fstp dword ptr [ecx + 0x4]
        fmul dword ptr [edx + 0x28]
        fadd dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x8]
L_skip_block1:
        fld dword ptr [edi + 0x10]
        pop edi
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ecx]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fadd dword ptr [ecx + 0x4]
        fstp dword ptr [ecx + 0x4]
        fmul dword ptr [esi + 0x8]
        pop esi
        fadd dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x8]
        ret
    }
}

// [0x007C63B0] sub_007C63B0 (224 bytes)
extern "C" __declspec(naked) void __fastcall fn_007C63B0(void* self) {
    __asm {
        sub esp, 0x14
        fld dword ptr [eax + 0x1c]
        fmul dword ptr [eax + 0x18]
        fld dword ptr [eax + 0x20]
        fmul dword ptr [eax + 0xc]
        fsubp st(1), st
        fld dword ptr [eax + 0x20]
        fmul dword ptr [eax + 0x10]
        fld dword ptr [eax + 0x1c]
        fld dword ptr [eax + 0xc]
        fmul dword ptr [eax + 0x1c]
        fld dword ptr [eax + 0x10]
        fmul dword ptr [eax + 0x18]
        fsubp st(1), st
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fsubrp st(2), st
        fld dword ptr [eax]
        fmulp st(2), st
        fld dword ptr [eax + 0xc]
        fmul st, st(4)
        faddp st(2), st
        fld dword ptr [eax + 0x18]
        fmul st, st(1)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(4), st
        fxch st(3)
        fstp dword ptr [esp]
        fmul st, st(2)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x18]
        fld dword ptr [eax]
        fmul dword ptr [eax + 0x20]
        fld st(1)
        fmulp st(2), st
        fsubrp st(1), st
        fmul st, st(2)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0xc]
        fmul dword ptr [eax + 0x18]
        fld dword ptr [eax]
        fmul dword ptr [eax + 0x1c]
        fsubp st(1), st
        fmul st, st(2)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0xc]
        fld dword ptr [eax]
        fmul dword ptr [eax + 0x10]
        fld st(1)
        fmulp st(2), st
        fsubrp st(1), st
        fmul st, st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [eax + 0x1c]
        fsubp st(1), st
        fmulp st(1), st
        fstp dword ptr [ecx]
        fld dword ptr [esp]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [edx + 0x4]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [edx + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [edx]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esi]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [esi + 0x4]
        add esp, 0x14
        ret
    }
}

// [0x007C69B0] sub_007C69B0 (233 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C69B0(void* a0, float a1, float a2, float a3, float a4, float a5, float a6) {
    __asm {
        sub esp, 0x18
        mov edx, dword ptr [esp + 0x1c]
        lea eax, [esp]
        push eax
        push edx
        call ext_007C6150
        fld dword ptr [esp + 0x34]
        fsub dword ptr [esp + 0x8]
        or dword ptr [edx + 0x1c4], 0x400
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x38]
        fsub dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x3c]
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fadd dword ptr [edx + 0x150]
        fstp dword ptr [edx + 0x150]
        fld dword ptr [edx + 0x154]
        fld dword ptr [esp + 0x2c]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [edx + 0x154]
        fld dword ptr [edx + 0x158]
        fld dword ptr [esp + 0x30]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [edx + 0x158]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmul st, st(2)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmul st, st(5)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fmul st, st(4)
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(4), st
        fxch st(1)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0xc]
        fxch st(1)
        fmulp st(2), st
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0x160]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [edx + 0x160]
        fld dword ptr [edx + 0x164]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [edx + 0x164]
        fld dword ptr [edx + 0x168]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [edx + 0x168]
        add esp, 0x20
        ret
    }
}

// [0x007CD690] sub_007CD690 (235 bytes)
// Register-argument helper: esi = src float[3], edi/ebx = out float[3] each. Uses ecx as scratch via [esp].
extern "C" __declspec(naked) void __fastcall fn_007CD690(void* self) {
    __asm {
        push ecx
        fld dword ptr [esi]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [esi + 0x4]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fcompp
        fnstsw ax
        fld dword ptr [esi + 0x8]
        test ah, 0x5
        jp short yb_007CD690
        fld dword ptr [esi]
                _emit 0xdc
                _emit 0xc8
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esi + 0x8]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [edi]
        fldz
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esi]
        fchs
        fmulp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edi + 0x8]
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [ebx]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [edi]
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esi]
        fsubp st(1), st
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [esi + 0x4]
        fchs
        fmul dword ptr [edi]
        fstp dword ptr [ebx + 0x8]
        pop ecx
        ret
yb_007CD690:
        fld dword ptr [esi + 0x4]
                _emit 0xdc
                _emit 0xc8
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [esp]
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp]
        fldz
        fstp dword ptr [edi]
        fld dword ptr [esi + 0x8]
        fchs
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [edi + 0x4]
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fst dword ptr [edi + 0x8]
        fmul dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [edi + 0x4]
        fsubp st(1), st
        fstp dword ptr [ebx]
        fld dword ptr [esi]
        fchs
        fmul dword ptr [edi + 0x8]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [esi]
        fmul dword ptr [edi + 0x4]
        fstp dword ptr [ebx + 0x8]
        pop ecx
        ret
    }
}
// [0x007CE390] sub_007CE390 (249 bytes)
extern "C" int mem_0094CE80;
extern "C" int mem_009576E8;
extern "C" int mem_00955090;

extern "C" __declspec(naked) void __fastcall fn_007CE390(void* self) {
    __asm {
        push ecx
        cmp dword ptr [ecx + 0x8], 0
        jne short L_7ce3ad
        fld dword ptr [ecx + 0x24]
        mov dword ptr [ecx + 0x8], 1
        fsub dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x24]
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x20]
    L_7ce3ad:
        fld dword ptr [ecx + 0x28]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x41
        jp short L_7ce3cd
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [ecx + 0x14]
        jmp short L_7ce43a
    L_7ce3cd:
        cmp dword ptr [esp + 0x8], 0
        je short L_7ce43a
        fld dword ptr [ecx + 0x14]
        fld dword ptr [ecx + 0x20]
        fld qword ptr [mem_009576E8]
        fadd st(1), st
        fxch st(2)
        fcompp
        fnstsw ax
        fld qword ptr [mem_00955090]
        test ah, 0x41
        jne short L_7ce40c
    L_7ce3f3:
        fld dword ptr [ecx + 0x14]
        fsub st, st(1)
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [ecx + 0x14]
        fld dword ptr [ecx + 0x20]
        fadd st, st(3)
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp short L_7ce3f3
    L_7ce40c:
        fld dword ptr [ecx + 0x14]
        fadd st, st(2)
        fld dword ptr [ecx + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne short L_7ce436
    L_7ce41d:
        fld dword ptr [ecx + 0x14]
        fadd st, st(1)
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [ecx + 0x14]
        fadd st, st(2)
        fld dword ptr [ecx + 0x20]
        fcompp
        fnstsw ax
        test ah, 0x41
        je short L_7ce41d
    L_7ce436:
        fstp st(1)
        fstp st(0)
    L_7ce43a:
        cmp dword ptr [ecx], 0
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x20]
        fldz
        fstp dword ptr [ecx + 0x10]
        je short L_7ce487
        fld dword ptr [ecx + 0x24]
        fadd dword ptr [ecx + 0x14]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [ecx + 0x30]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_7ce46a
        fsub dword ptr [ecx + 0x30]
        fstp dword ptr [ecx + 0x10]
        pop ecx
        ret
    L_7ce46a:
        fld dword ptr [ecx + 0x40]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_7ce47e
        fsub dword ptr [ecx + 0x40]
        fstp dword ptr [ecx + 0x10]
        pop ecx
        ret
    L_7ce47e:
        fstp st(0)
        mov dword ptr [ecx + 0xc], 0
    L_7ce487:
        pop ecx
        ret
    }
}

// [0x007CE900] sub_007CE900 (250 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CE900(void* self) {
    __asm {
        cmp dword ptr [esp + 0x8], 0
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        je blk2
        mov ebx, dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        add ebx, edx
        shl ebx, 6
        push ebp
        mov ebp, dword ptr [ecx]
        fstp dword ptr [ebx + ebp]
        mov ebx, dword ptr [ecx + 0x4]
        mov ebp, dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        add ebx, edx
        shl ebx, 6
        fstp dword ptr [ebx + ebp + 0x4]
        mov ebx, dword ptr [ecx + 0x4]
        mov ebp, dword ptr [ecx]
        fld dword ptr [eax + 0x8]
        add ebx, edx
        shl ebx, 6
        fstp dword ptr [ebx + ebp + 0x8]
        mov ebx, dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        mov ebp, dword ptr [ecx]
        fmul dword ptr [esi + 0x4]
        add ebx, edx
        fld dword ptr [eax + 0x4]
        shl ebx, 6
        fmul dword ptr [esi + 0x8]
        lea ebx, [ebx + ebp + 0x10]
        pop ebp
        fsubp st(1), st
        fstp dword ptr [ebx]
        fld dword ptr [esi + 0x8]
        fmul dword ptr [eax]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [esi]
        fsubp st(1), st
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [esi]
        fld dword ptr [eax]
        fmul dword ptr [esi + 0x4]
        fsubp st(1), st
        fstp dword ptr [ebx + 0x8]
blk2:
        cmp dword ptr [esp + 0x14], 0
        je done
        mov esi, dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        mov ebx, dword ptr [ecx]
        fchs
        add esi, edx
        shl esi, 6
        fstp dword ptr [esi + ebx + 0x20]
        mov esi, dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x4]
        mov ebx, dword ptr [ecx]
        fchs
        add esi, edx
        shl esi, 6
        fstp dword ptr [esi + ebx + 0x24]
        mov esi, dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        mov ebx, dword ptr [ecx]
        fchs
        add esi, edx
        shl esi, 6
        fstp dword ptr [esi + ebx + 0x28]
        mov esi, dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x4]
        mov ecx, dword ptr [ecx]
        fmul dword ptr [edi + 0x8]
        add esi, edx
        fld dword ptr [eax + 0x8]
        shl esi, 6
        fmul dword ptr [edi + 0x4]
        lea ecx, [esi + ecx + 0x30]
        fsubp st(1), st
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [edi]
        fld dword ptr [eax]
        fmul dword ptr [edi + 0x8]
        fsubp st(1), st
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax]
        fmul dword ptr [edi + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [edi]
        fsubp st(1), st
        fstp dword ptr [ecx + 0x8]
done:
        pop esi
        pop ebx
        ret
    }
}

// [0x007CD780] sub_007CD780 (253 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CD780(void* self) {
    __asm {
        sub esp, 0x28
        fld dword ptr [eax]
        fmul st(0), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x4]
        fmul st(0), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        fmul st(0), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0xc]
        fmul st(0), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fld qword ptr [mem_0092C510]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp]
        fmul dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0xc]
        fld st(0)
        faddp st(2), st
        fld dword ptr [esp + 0x10]
        fld st(0)
        fsubp st(3), st
        fld dword ptr [esp + 0x14]
        fld st(0)
        fsubp st(4), st
        fxch st(3)
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0xc]
        fld dword ptr [esp]
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x18]
        faddp st(1), st
        fstp dword ptr [ecx + 0x4]
        fxch st(1)
        fsubrp st(3), st
        fld st(0)
        fadd st, st(3)
        fsub st, st(2)
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld dword ptr [esp + 0x24]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0x1c]
        fld dword ptr [esp]
        fsub dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [ecx + 0x14]
        fsubp st(2), st
        faddp st(1), st
        fstp dword ptr [ecx + 0x20]
        add esp, 0x28
        ret
    }
}

// [0x007CE060] sub_007CE060 (256 bytes)
extern "C" __declspec(naked) void __fastcall fn_007CE060(void* self) {
    __asm {
        mov edx, dword ptr [esp + 4]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        fld dword ptr [ebp + 0x54]
        fld dword ptr [ebp + 0x28]
        fcompp
        fnstsw ax
        fld dword ptr [ebp + 0x58]
        test ah, 5
        jnp L1
        fchs
    L1:
        mov eax, dword ptr [ecx]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi]
        mov eax, dword ptr [edx + 4*eax]
        fld dword ptr [esp + 0xc]
        pop ebp
        fld st(0)
        fmulp st(2), st
        fld dword ptr [eax + 0x10]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [edx + 4*eax]
        fld st(0)
        fmul dword ptr [esi + 4]
        fadd dword ptr [eax + 0x14]
        fstp dword ptr [eax + 0x14]
        mov eax, dword ptr [ecx]
        fld dword ptr [esi + 8]
        mov eax, dword ptr [edx + 4*eax]
        fmul st, st(1)
        fadd dword ptr [eax + 0x18]
        fstp dword ptr [eax + 0x18]
        mov eax, dword ptr [ecx]
        fld dword ptr [edi]
        mov eax, dword ptr [edx + 4*eax]
        fmul st, st(1)
        fadd dword ptr [eax + 0x20]
        fstp dword ptr [eax + 0x20]
        mov eax, dword ptr [ecx]
        fld dword ptr [edi + 4]
        mov eax, dword ptr [edx + 4*eax]
        fmul st, st(1)
        fadd dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x24]
        mov eax, dword ptr [ecx]
        fld dword ptr [edi + 8]
        mov eax, dword ptr [edx + 4*eax]
        fmul st, st(1)
        fadd dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x28]
        cmp dword ptr [ecx + 4], -1
        je L2
        mov eax, dword ptr [ecx + 4]
        fchs
        mov eax, dword ptr [edx + 4*eax]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 8]
        fld st(0)
        fmul dword ptr [esi]
        fadd dword ptr [eax + 0x10]
        fstp dword ptr [eax + 0x10]
        mov eax, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4*eax]
        fld st(0)
        fmul dword ptr [esi + 4]
        fadd dword ptr [eax + 0x14]
        fstp dword ptr [eax + 0x14]
        mov eax, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4*eax]
        fld st(0)
        fmul dword ptr [esi + 8]
        fadd dword ptr [eax + 0x18]
        fstp dword ptr [eax + 0x18]
        mov eax, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4*eax]
        fld st(0)
        fmul dword ptr [ebx]
        fadd dword ptr [eax + 0x20]
        fstp dword ptr [eax + 0x20]
        mov eax, dword ptr [ecx + 4]
        fld dword ptr [ebx + 4]
        mov eax, dword ptr [edx + 4*eax]
        fmul st, st(1)
        fadd dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x24]
        mov ecx, dword ptr [ecx + 4]
        mov edx, dword ptr [edx + 4*ecx]
        fmul dword ptr [ebx + 8]
        fadd dword ptr [edx + 0x28]
        fstp dword ptr [edx + 0x28]
        ret
    L2:
        fstp st(0)
        ret
    }
}

// [0x007C71D0] sub_007C71D0 (36 bytes)
extern "C" void __cdecl ext_007D4970(void*, void*, int);
extern "C" int __cdecl fn_007C71D0(void* a, char* b) {
    ((void (__cdecl *)(void*, char*, int))ext_007D4970)(a, b + 0x184, *(int*)(b + 0x180));
    return 1;
}

// [0x007C6710] sub_007C6710 (108 bytes)
extern "C" void __cdecl ext_007D4970(void*, void*, int);
struct S6710Inner { char p0[0x70]; char p70[0xa0]; int c110; char p114[0x138]; void (__cdecl *cb)(void*); };
struct S6710 { char p0[0x17c]; S6710Inner* inner; int v180; char p184[0x18]; char b19c[0x28]; unsigned flags; char p1c8[0x44]; float f20c; };
extern "C" void __cdecl fn_007C6710(S6710* s) {
    if (!(s->flags & 1)) {
        ext_007D4970((char*)s->inner + 0x70, s->b19c, s->v180);
        s->flags |= 1;
        s->inner->c110++;
        if (s->inner->cb) s->inner->cb(s);
    }
    s->flags &= ~0x100u;
    s->f20c = 0.0f;
}

// [0x007C97F0] sub_007C97F0 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C97F0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 0x40]
        push esi
        call ext_007C9260
        add esp, 4
        test eax, eax
        jne L_end
        cmp dword ptr [esi + 0x94], eax
        push ebx
        lea ebx, [esi + 0x94]
        jne L_a
        cmp dword ptr [esi + 0x98], eax
        je L_pop
    L_a:
        push ebp
        mov eax, 1
        or dword ptr [esi + 0x9c], eax
        add dword ptr [ecx + 0x158], eax
        push edi
        lea edi, [esi + 0x60]
        mov ebp, 2
    L_loop:
        mov eax, dword ptr [ebx]
        test eax, eax
        je L_next
        mov ecx, dword ptr [esi + 0x44]
        push ecx
        add eax, 0x1d4
        push edi
        push eax
        call ext_007D4970
        add esp, 0xc
    L_next:
        add edi, 0x18
        add ebx, 4
        sub ebp, 1
        jne L_loop
        pop edi
        pop ebp
    L_pop:
        pop ebx
    L_end:
        pop esi
        ret
    }
}

// [0x007CCD10] sub_007CCD10 (209 bytes)
struct AllocT { void* (*alloc)(int); };
struct CtxT { char pad[0xb0]; AllocT* a; };
struct ObjT { int n; int one; void* p8; void* pc; void* p10; int p14; void* p18; void* p1c; AllocT* a20; };
extern "C" void __cdecl ext_007CCAB0(void*);
extern "C" void* __cdecl ext_007DFE00(int, AllocT*);
extern "C" void* __cdecl ext_007DFA40(CtxT*);
extern "C" ObjT* __cdecl fn_007CCD10(CtxT* c, int n, int m) {
    ObjT* o = (ObjT*)c->a->alloc(0x24);
    if (!o) return 0;
    o->a20 = c->a; unsigned cnt; char* e;
    o->pc = c->a->alloc(0x28000);
    o->p10 = c->a->alloc(m << 5);
    o->n = n;
    cnt = (unsigned)(((n + 1) * n) >> 1);
    e = (char*)c->a->alloc(cnt * 0x58); o->p8 = e; char* q = (char*)o->p8; e = q;
    for (unsigned i = 0; i < cnt; i++, e += 0x58) {
        ext_007CCAB0(e);
        *(int*)(e + 0x50) = 0; *(int*)(e + 0x54) = 0; *(int*)(e + 0x4c) = 0;
    }
    o->one = 1;
    o->p18 = ext_007DFE00(m, c->a);
    o->p1c = ext_007DFA40(c);
    o->p14 = 0;
    return o;
}

// [0x007CAB80] sub_007CAB80 (265 bytes)
extern "C" void ext_007CAB40();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();
extern "C" __declspec(naked) void __cdecl fn_007CAB80(int a, int b, int c) {
    __asm {
        sub esp, 0x18
        push esi
        push edi
        mov edi, [esp+0x24]
        push edi
        call ext_007D5AE0
        push edi
        mov esi, eax
        call ext_007D48A0
        mov ecx, eax
        mov eax, [esp+0x30]
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        add esp, 4
        fld dword ptr [ecx+4]
        fmul dword ptr [eax+4]
        faddp st(1), st
        fld dword ptr [ecx+8]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [esp+0xc]
        fld dword ptr [ecx+0x14]
        fmul dword ptr [eax+4]
        fld dword ptr [ecx+0x10]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx+0x18]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [esp+0x10]
        fld dword ptr [ecx+0x24]
        fmul dword ptr [eax+4]
        fld dword ptr [ecx+0x20]
        fmul dword ptr [eax]
        faddp st(1), st
        fld dword ptr [ecx+0x28]
        fmul dword ptr [eax+8]
        faddp st(1), st
        fstp dword ptr [esp+0x14]
        fld dword ptr [esp+0xc]
        fstp dword ptr [esp]
        call ext_007CAB40
        fmul dword ptr [esi+0x10]
        fstp dword ptr [esp+0x18]
        fld dword ptr [esp+0x10]
        fstp dword ptr [esp]
        call ext_007CAB40
        fmul dword ptr [esi+0x14]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [esp+0x14]
        fstp dword ptr [esp]
        call ext_007CAB40
        fmul dword ptr [esi+0x18]
        mov eax, [esp+0x30]
        add esp, 4
        fstp dword ptr [esp+0x1c]
        fld dword ptr [ecx]
        fld dword ptr [esp+0x14]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp+0x18]
        fld st(0)
        fmul dword ptr [ecx+0x10]
        faddp st(3), st
        fld dword ptr [ecx+0x20]
        fld dword ptr [esp+0x1c]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        faddp st(1), st
        fadd dword ptr [ecx+0x30]
        fstp dword ptr [eax]
        fld dword ptr [ecx+0x14]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr [ecx+4]
        faddp st(1), st
        fld dword ptr [ecx+0x24]
        fmul st, st(4)
        faddp st(1), st
        fadd dword ptr [ecx+0x34]
        fstp dword ptr [eax+4]
        fmul dword ptr [ecx+0x18]
        pop edi
        fld dword ptr [ecx+8]
        pop esi
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [ecx+0x28]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [ecx+0x38]
        fstp dword ptr [eax+8]
        add esp, 0x18
        ret
    }
}

// [0x007C9F60] sub_007C9F60 (287 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C9F60(const void* a, const float* in, const void* c, float* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0xc
        test eax, eax
        je L_null_a
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x120]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x110]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x130]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x114]
        fmul dword ptr [ecx]
        fld dword ptr [eax + 0x124]
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x134]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x118]
        fmul dword ptr [ecx]
        fld dword ptr [eax + 0x128]
        fmul dword ptr [ecx + 0x4]
        faddp st(1), st
        fld dword ptr [eax + 0x138]
        fmul dword ptr [ecx + 0x8]
        faddp st(1), st
        jmp L_have_t
    L_null_a:
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
    L_have_t:
        mov eax, dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        test eax, eax
        je L_null_c
        fld dword ptr [eax + 0x114]
        mov ecx, dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp]
        fld st(0)
        fmul dword ptr [eax + 0x110]
        faddp st(3), st
        fld dword ptr [eax + 0x118]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        faddp st(1), st
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x120]
        fmul st, st(1)
        fld dword ptr [eax + 0x124]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax + 0x128]
        fmul st, st(4)
        faddp st(1), st
        fstp dword ptr [ecx + 0x4]
        fmul dword ptr [eax + 0x130]
        fld dword ptr [eax + 0x134]
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [eax + 0x138]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [ecx + 0x8]
        add esp, 0xc
        ret
    L_null_c:
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0xc
        ret
    }
}

extern "C" void ext_007C8E30();
extern "C" void ext_007C8EB0();
extern "C" int mem_0092A270;

// [0x007C9130] sub_007C9130 (296 bytes)
extern "C" __declspec(naked) void __fastcall fn_007C9130(void* self) {
    __asm {
        sub esp, 0x24
        fld dword ptr [esp + 0x2c]
        push ebx
        fst dword ptr [esp + 0x4]
        push esi
        fld dword ptr [esp + 0x38]
        push edi
        fst dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x14]
        fld st(2)
        fmulp st(3), st
        fxch st(2)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fsub qword ptr [mem_0092A270]
        fabs
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fcomp dword ptr [mem_00968ED8]
        fnstsw ax
        test ah, 0x41
        jnp short loc_007C91A2
        lea esi, [esp + 0xc]
        call ext_007C8E30
        fstp st(0)
    loc_007C91A2:
        lea ebx, [esp + 0x24]
        lea edi, [esp + 0x18]
        lea esi, [esp + 0xc]
        call ext_007C8EB0
        mov esi, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esi + 0x94]
        lea eax, [esi + 0xbc]
        push eax
        push ecx
        lea edx, [esp + 0x14]
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x94]
        lea eax, [esi + 0xcc]
        push eax
        push ecx
        mov edx, edi
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x94]
        lea eax, [esi + 0xdc]
        push eax
        push ecx
        mov edx, ebx
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x98]
        lea eax, [esi + 0xfc]
        push eax
        push ecx
        lea edx, [esp + 0x44]
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x98]
        add esp, 0x40
        lea eax, [esi + 0x10c]
        push eax
        push ecx
        mov edx, edi
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x98]
        lea eax, [esi + 0x11c]
        push eax
        push ecx
        mov edx, ebx
        push edx
        push 0x0
        call ext_007CA110
        add esp, 0x20
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x007C8C10] sub_007C8C10 (51 bytes)
extern "C" void ext_007DCED0();
extern "C" void ext_007DD1D0();
extern "C" __declspec(naked) int __cdecl fn_007C8C10(void* a, void* b) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax + 0x20]
        push esi
        mov esi, dword ptr [esp + 8]
        mov edx, dword ptr [esi + 0x20]
        push edi
        push 0
        push ecx
        mov ecx, dword ptr [esi + 0xc]
        push edx
        call ext_007DD1D0
        movzx edi, al
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax + 0x2c]
        push ecx
        call ext_007DCED0
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_007DC8F0();
extern "C" void ext_007D58E0();
extern "C" __declspec(naked) void __cdecl fn_007C8890(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        movsx edi, word ptr [esp + 0x10]
        cmp dword ptr [esi], edi
        jg skip_err
        mov eax, dword ptr [esi + 0xb0]
        push eax
        push 0x1b5
        push 0x99d320
        push 0x99d308
        push 0x99d2e8
        push 0x15
        push 0xab29f8
        call ext_007DC8F0
        add esp, 0x1c
skip_err:
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [edi + 4*edi]
        add eax, eax
        add eax, eax
        add eax, eax
        cmp dword ptr [eax + ecx + 0x24], 0x0
        lea ecx, [eax + ecx + 0x24]
        je do_store
        mov edx, dword ptr [esi + 0xb0]
        push 0x99d2c4
        push 0x99d29c
        push edx
        push 0x3
        call ext_007D58E0
        add esp, 0x10
        pop edi
        pop esi
        ret
do_store:
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [ecx], 0x1
        mov ecx, dword ptr [esi + 0x20]
        mov dword ptr [eax + ecx], edx
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + ecx + 0x4], edx
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax + ecx + 0x8], edx
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [eax + ecx + 0xc], edx
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [eax + ecx + 0x10], edx
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [eax + ecx + 0x18], edx
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + ecx + 0x20], edx
        add dword ptr [esi + 0x4], 0x1
        pop edi
        pop esi
        ret
    }
}

// [0x007CA710] sub_007CA710 (51 bytes)
extern "C" void ext_007C8890();
extern "C" void __cdecl fn_007CA710(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 1, 0x99d580, 0x7ca820, 0x7ca360, 0x7ca430, 0x7ca460, 0x7ca4f0, 0x7ca5a0);
}

// [0x007CAEF0] sub_007CAEF0 (51 bytes)
extern "C" void __cdecl fn_007CAEF0(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 2, 0x99d6b8, 0x7ca820, 0x7ca8e0, 0x7cab10, 0x7cab80, 0x7cac90, 0x7cad50);
}

// [0x007CB850] sub_007CB850 (51 bytes)
extern "C" void __cdecl fn_007CB850(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 4, 0x99d8ac, 0x7ca820, 0x7cb050, 0x7cb380, 0x7cb630, 0x7cb3b0, 0x7cb470);
}

// [0x007CC140] sub_007CC140 (51 bytes)
extern "C" void ext_007C8890();
extern "C" void __cdecl fn_007CC140(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 5, 0x99dc88, 0x7ca820, 0x7cb9e0, 0x7cbb50, 0x7cbb80, 0x7cbc50, 0x7cbd10);
}

// [0x007CC590] sub_007CC590 (51 bytes)
extern "C" void ext_007C8890();
extern "C" void __cdecl fn_007CC590(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 3, 0x99dca8, 0x7ca820, 0x7cc220, 0x7cc3d0, 0x7cc3f0, 0x7cc480, 0x493d90);
}

// [0x007CD660] sub_007CD660 (34 bytes)
extern "C" void ext_007EFF40();
extern "C" void ext_007CB850();
extern "C" void ext_007EFF00();
extern "C" void ext_007CC140();
extern "C" void __cdecl fn_007CD660(int a1) {
    ((void (__cdecl *)(int))ext_007EFF40)(a1);
    ((void (__cdecl *)(int))ext_007CB850)(a1);
    ((void (__cdecl *)(int))ext_007EFF00)(a1);
    ((void (__cdecl *)(int))ext_007CC140)(a1);
}

// [0x007CD9D0] sub_007CD9D0 (321 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CD9D0(void) {
    __asm {
        sub     esp, 0x1c
        test    eax, eax
        jle     done
        mov     edx, dword ptr [esp + 0x20]
        fldz
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x18], esi
        mov     esi, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x14], 0
        lea     ecx, [4*edi]
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x24], eax
outer_top:
        test    edx, edx
        jle     outer_next
        mov     eax, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x34]
        xor     ebx, ebx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], edx
middle_top:
        xor     esi, esi
        fst     dword ptr [esp + 0xc]
        cmp     edi, 4
        jl      rem_setup
        mov     eax, dword ptr [esp + 0x18]
        lea     edx, [edi - 4]
        shr     edx, 2
        add     edx, 1
        mov     ecx, ebp
        lea     esi, [4*edx]
unroll_loop:
        fld     dword ptr [eax + 4]
        add     eax, 0x10
        fmul    dword ptr [ecx + 4]
        add     ecx, 0x10
        sub     edx, 1
        fld     dword ptr [ecx - 0x10]
        fmul    dword ptr [eax - 0x10]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0xc]
        fld     dword ptr [eax - 8]
        fmul    dword ptr [ecx - 8]
        faddp   st(1), st
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0xc]
        fld     dword ptr [eax - 4]
        fmul    dword ptr [ecx - 4]
        faddp   st(1), st
        fstp    dword ptr [esp + 0xc]
        jne     unroll_loop
rem_setup:
        cmp     esi, edi
        jge     rem_done
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [ebx + esi]
        lea     edx, [edx + 4*ecx]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, esi
        lea     ecx, [ecx + 4*eax]
        mov     eax, edi
        sub     eax, esi
rem_loop:
        fld     dword ptr [ecx]
        add     ecx, 4
        fmul    dword ptr [edx]
        add     edx, 4
        sub     eax, 1
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        jne     rem_loop
rem_done:
        mov     eax, dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0xc]
        lea     ecx, [4*edi]
        fstp    dword ptr [eax]
        add     eax, 4
        add     ebx, edi
        add     ebp, ecx
        sub     dword ptr [esp + 0x20], 1
        mov     dword ptr [esp + 0x1c], eax
        jne     middle_top
        mov     edx, dword ptr [esp + 0x2c]
outer_next:
        add     dword ptr [esp + 0x14], edi
        add     dword ptr [esp + 0x18], ecx
        lea     eax, [4*edx]
        add     dword ptr [esp + 0x10], eax
        sub     dword ptr [esp + 0x24], 1
        jne     outer_top
        pop     esi
        fstp    st(0)
        pop     ebp
        pop     ebx
done:
        add     esp, 0x1c
        ret
    }
}

// [0x007CE490] sub_007CE490 (330 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CE490(int i, char* s, char* o) {
    __asm {
        mov ecx, dword ptr [esp+8]
        fldz
        push ebx
        push esi
        mov esi, dword ptr [esp+0Ch]
        push edi
        xor eax, eax
loop_top:
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        add edx, esi
        shl edx, 4
        add edx, eax
        fst dword ptr [edi+4*edx]
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        add edx, esi
        shl edx, 4
        add edx, eax
        fst dword ptr [edi+4*edx+20h]
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        add edx, esi
        shl edx, 4
        add edx, eax
        fst dword ptr [edi+4*edx+10h]
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        add edx, esi
        shl edx, 4
        add edx, eax
        add eax, 1
        fst dword ptr [edi+4*edx+30h]
        cmp eax, 3
        jne loop_top
        mov eax, dword ptr [ecx+2Ch]
        lea edi, [eax+esi]
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        and edi, 80000003h
        jns skip1
        dec edi
        or edi, -4
        inc edi
skip1:
        lea edx, [edi+4*eax]
        mov eax, dword ptr [ecx+28h]
        fst dword ptr [eax+4*edx]
        mov edx, dword ptr [ecx+50h]
        lea edi, [edx+esi]
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        and edi, 80000003h
        jns skip2
        dec edi
        or edi, -4
        inc edi
skip2:
        mov edx, dword ptr [ecx+4Ch]
        lea eax, [edi+4*eax]
        fst dword ptr [edx+4*eax]
        mov eax, dword ptr [ecx+20h]
        lea edi, [eax+esi]
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        and edi, 80000003h
        jns skip3
        dec edi
        or edi, -4
        inc edi
skip3:
        lea edx, [edi+4*eax]
        mov eax, dword ptr [ecx+1Ch]
        fst dword ptr [eax+4*edx]
        mov edx, dword ptr [ecx+14h]
        lea edi, [edx+esi]
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        and edi, 80000003h
        jns skip4
        dec edi
        or edi, -4
        inc edi
skip4:
        mov edx, dword ptr [ecx+10h]
        lea eax, [edi+4*eax]
        fstp dword ptr [edx+4*eax]
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        mov eax, dword ptr [esp+18h]
        mov ebx, dword ptr [eax+0B4h]
        add edx, esi
        shl edx, 6
        mov dword ptr [edx+edi+0Ch], ebx
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        mov ebx, dword ptr [ecx+0A4h]
        add edx, esi
        shl edx, 6
        mov dword ptr [edx+edi+1Ch], ebx
        mov edx, dword ptr [ecx+4]
        mov edi, dword ptr [ecx]
        mov eax, dword ptr [eax+0B8h]
        add edx, esi
        shl edx, 6
        mov dword ptr [edx+edi+2Ch], eax
        mov edx, dword ptr [ecx+4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx+0A4h]
        add edx, esi
        pop edi
        shl edx, 6
        pop esi
        mov dword ptr [edx+eax+3Ch], ecx
        pop ebx
        ret
    }
}

// [0x007CA5A0] sub_007CA5A0 (356 bytes)
extern "C" void ext_007CB970();
extern "C" __declspec(naked) void __cdecl fn_007CA5A0(void* self) {
    __asm {
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr [esp + 0x2c]
        cmp byte ptr [ebx], 0x1
        jne L_done
        push esi
        push edi
        push ebx
        call ext_007CB970
        fstp dword ptr [esp + 0x38]
        mov esi, dword ptr [esp + 0x3c]
        add esp, 0x4
        mov edi, 0x99d348
                _emit 0x8d
                _emit 0xa4
                _emit 0x24
                _emit 0x00
                _emit 0x00
                _emit 0x00
                _emit 0x00
L_loop:
        fld dword ptr [esp + 0x34]
        fld dword ptr [edi - 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi - 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x20]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x14]
        fmul st, st(2)
        fld dword ptr [esi + 0x4]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esi + 0x24]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x18]
        fmulp st(2), st
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esi + 0x28]
        faddp st(1), st
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [edi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fmul dword ptr [edi + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x20]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esi + 0x14]
        fmul st, st(2)
        fld dword ptr [esi + 0x4]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esi + 0x24]
        fmul st, st(2)
        faddp st(1), st
        mov eax, dword ptr [ebx + 0xc]
        lea edx, [esp + 0x18]
        fadd dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x18]
        fmulp st(2), st
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esi + 0x28]
        faddp st(1), st
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x20]
        mov eax, dword ptr [eax + 0xb0]
        mov ecx, dword ptr [eax + 0x24]
        push ecx
        push edx
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [esp + 0x2c]
        push ecx
        push 0x4
        call edx
        add edi, 0x18
        add esp, 0x10
        cmp edi, 0x99d588
        jl L_loop
        pop edi
        pop esi
L_done:
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x007C6AA0] sub_007C6AA0 (357 bytes)
extern "C" __declspec(naked) int __cdecl fn_007C6AA0(void* self, float* bnd) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        fld dword ptr [ecx + 0xb4]
        mov edx, dword ptr [esp + 8]
        fld dword ptr [ecx + 0xb0]
        fld dword ptr [ecx + 0xb8]
        fld st(1)
        fmulp st(2), st
        fldz
        fadd st(2), st
        fxch st(2)
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld st(3)
        fmulp st(4), st
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld dword ptr [edx + 4]
        fcompp
        fnstsw ax
        test ah, 5
        jnp fail_pop
        fld dword ptr [ecx + 0xc4]
        fld dword ptr [ecx + 0xc0]
        fld dword ptr [ecx + 0xc8]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd st, st(3)
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 4]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld dword ptr [edx + 8]
        fcompp
        fnstsw ax
        test ah, 5
        jnp fail_pop
        fld dword ptr [ecx + 0xe4]
        fld dword ptr [ecx + 0xe0]
        fld dword ptr [ecx + 0xe8]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd st, st(3)
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 4]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld dword ptr [edx + 0xc]
        fcompp
        fnstsw ax
        test ah, 5
        jnp fail_pop
        fld dword ptr [ecx + 0xf4]
        fld dword ptr [ecx + 0xf0]
        fld dword ptr [ecx + 0xf8]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 4]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 4]
        fstp dword ptr [esp + 4]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fld dword ptr [edx + 0x10]
        fcompp
        fnstsw ax
        test ah, 5
        jnp fail_nopop
        fld dword ptr [ecx + 0x20c]
        fld dword ptr [edx + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne ret0
        test dword ptr [ecx + 0x1c4], 0x100
        je ret1
    ret0:
        xor eax, eax
        ret
    fail_pop:
        fstp st(0)
    fail_nopop:
    ret1:
        mov eax, 1
        ret
    }
}

// [0x007CC770] sub_007CC770 (364 bytes)
extern "C" void ext_007C5F80();
extern "C" void ext_007C6060();
extern "C" void ext_007C60A0();
extern "C" void ext_007C6780();
extern "C" void ext_007C6810();
extern "C" void ext_007C6F70();
extern "C" void ext_007C6F80();
extern "C" void ext_007C6F90();
extern "C" void ext_007C6FA0();
extern "C" void ext_007C6FB0();
extern "C" void ext_007C6FC0();
extern "C" void ext_007C6FD0();
extern "C" void ext_007DB720();

extern "C" __declspec(naked) void __cdecl fn_007CC770(void* self, void* arg2) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esi + 0x28]
        test edi, edi
        je L_B
        push esi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], esi
        call ext_007CC9F0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x10]
        push eax
        push 0x7cc610
        push edi
        call ext_007C6810
        add esp, 0x10
        cmp dword ptr [edi + 0x210], esi
        jne L_B
        mov dword ptr [edi + 0x210], 0
    L_B:
        test ebx, ebx
        je L_C
        push ebx
        mov dword ptr [ebx + 0x210], esi
        call ext_007C5F80
        push eax
        push esi
        call ext_007C6F80
        push ebx
        call ext_007C6060
        push eax
        push esi
        call ext_007C6F90
        push ebx
        call ext_007C60A0
        push eax
        push esi
        call ext_007C6FB0
        lea ecx, [ebx + 0x170]
        push ecx
        push esi
        call ext_007C6FD0
        push esi
        call ext_007CC9F0
        add esp, 0x30
        test eax, eax
        je L_END
        push ebx
        call ext_007C6780
        add esp, 0x4
        test eax, eax
        push esi
        je L_32F
        call ext_007C8B50
        add esp, 0x4
        pop edi
        mov dword ptr [esi + 0x28], ebx
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_32F:
        call ext_007C8B30
        add esp, 0x4
        pop edi
        mov dword ptr [esi + 0x28], ebx
        pop esi
        pop ebx
        add esp, 0x10
        ret
    L_C:
        test edi, edi
        je L_END
        push ebp
        push edi
        call ext_007C5F80
        push esi
        mov ebp, eax
        call ext_007C6F70
        add esp, 0x8
        cmp eax, ebp
        jne L_1
        push 0
        push esi
        call ext_007C6F80
        add esp, 0x8
    L_1:
        push edi
        call ext_007C6060
        push esi
        mov ebp, eax
        call ext_007C6FA0
        add esp, 0x8
        cmp eax, ebp
        jne L_2
        push 0x99dcb4
        push esi
        call ext_007C6F90
        add esp, 0x8
    L_2:
        push edi
        call ext_007C60A0
        push esi
        mov ebp, eax
        call ext_007C6FC0
        add esp, 0x8
        cmp eax, ebp
        pop ebp
        jne L_3
        push 0x99dcb4
        push esi
        call ext_007C6FB0
        add esp, 0x8
    L_3:
        push esi
        call ext_007DB720
        add edi, 0x170
        add esp, 0x4
        cmp eax, edi
        jne L_END
        push 0x99dcb4
        push esi
        call ext_007C6FD0
        add esp, 0x8
    L_END:
        pop edi
        mov dword ptr [esi + 0x28], ebx
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x007CB9E0] sub_007CB9E0 (366 bytes)
extern "C" void ext_007D5AE0();
extern "C" void ext_007D48A0();
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();

extern "C" __declspec(naked) void __cdecl fn_007CB9E0(void* p) {
    __asm {
        sub     esp, 18h
        push    ebx
        mov     ebx, dword ptr [esp+20h]
        push    ebp
        push    edi
        push    ebx
        call    ext_007D5AE0
        push    ebx
        mov     edi, eax
        call    ext_007D48A0
        fld     dword ptr [eax+20h]
        fabs
        lea     edx, [ebx+8]
        fstp    dword ptr [esp+30h]
        lea     ebp, [ebx+14h]
        fld     dword ptr [esp+30h]
        add     esp, 8
        fmul    dword ptr [edi+14h]
        fadd    dword ptr [edi+10h]
        fstp    dword ptr [esp+0ch]
        fld     dword ptr [eax+24h]
        fabs
        fstp    dword ptr [esp+28h]
        fld     dword ptr [esp+28h]
        fmul    dword ptr [edi+14h]
        fadd    dword ptr [edi+10h]
        fstp    dword ptr [esp+10h]
        fld     dword ptr [eax+28h]
        fabs
        fstp    dword ptr [esp+28h]
        fld     dword ptr [esp+28h]
        fmul    dword ptr [edi+14h]
        fadd    dword ptr [edi+10h]
        fstp    dword ptr [esp+14h]
        fld     dword ptr [eax+30h]
        fld     dword ptr [esp+0ch]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [edx]
        fld     dword ptr [eax+34h]
        fld     dword ptr [esp+10h]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [ebx+0ch]
        fld     dword ptr [eax+38h]
        fld     dword ptr [esp+14h]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [ebx+10h]
        fld     dword ptr [eax+30h]
        faddp   st(3), st
        fxch    st(2)
        fstp    dword ptr [ebp]
        fadd    dword ptr [eax+34h]
        fstp    dword ptr [ebx+18h]
        fadd    dword ptr [eax+38h]
        mov     eax, dword ptr [esp+2ch]
        test    eax, eax
        fstp    dword ptr [ebx+1ch]
        je      done_007CB9E0
        fld     dword ptr [eax+20h]
        push    esi
        fabs
        lea     ecx, [esp+1ch]
        fstp    dword ptr [esp+2ch]
        mov     esi, edx
        fld     dword ptr [esp+2ch]
        fmul    dword ptr [edi+14h]
        fadd    dword ptr [edi+10h]
        fstp    dword ptr [esp+10h]
        fld     dword ptr [eax+24h]
        fabs
        fstp    dword ptr [esp+2ch]
        fld     dword ptr [esp+2ch]
        fmul    dword ptr [edi+14h]
        fadd    dword ptr [edi+10h]
        fstp    dword ptr [esp+14h]
        fld     dword ptr [eax+28h]
        fabs
        fstp    dword ptr [esp+2ch]
        fld     dword ptr [esp+2ch]
        fmul    dword ptr [edi+14h]
        fadd    dword ptr [edi+10h]
        fstp    dword ptr [esp+18h]
        fld     dword ptr [eax+30h]
        fld     dword ptr [esp+10h]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp+1ch]
        fld     dword ptr [eax+34h]
        fld     dword ptr [esp+14h]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp+20h]
        fld     dword ptr [eax+38h]
        fld     dword ptr [esp+18h]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp+24h]
        fld     dword ptr [eax+30h]
        faddp   st(3), st
        fxch    st(2)
        fstp    dword ptr [esp+10h]
        fadd    dword ptr [eax+34h]
        fstp    dword ptr [esp+14h]
        fadd    dword ptr [eax+38h]
        fstp    dword ptr [esp+18h]
        call    ext_007CA280
        lea     ecx, [esp+10h]
        mov     edx, ebp
        mov     esi, ebp
        call    ext_007CB8D0
        pop     esi
done_007CB9E0:
        pop     edi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 18h
        ret
    }
}

extern "C" __declspec(naked) unsigned __cdecl fn_007C27C0(void* s, unsigned cur_match) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov esi, dword ptr [edi + 0x24]
        mov eax, dword ptr [edi + 0x74]
        mov edx, dword ptr [edi + 0x64]
        mov ecx, dword ptr [edi + 0x30]
        mov ebp, dword ptr [edi + 0x70]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edi + 0x88]
        lea ebx, [esi - 0x106]
        add ecx, edx
        cmp edx, ebx
        mov dword ptr [esp + 0x18], eax
        jbe L1
        sub edx, esi
        add edx, 0x106
        mov dword ptr [esp + 0x1c], edx
        jmp L2
    L1:
        mov dword ptr [esp + 0x1c], 0
    L2:
        mov dl, byte ptr [ecx + ebp - 1]
        lea ebx, [ecx + 0x102]
        mov byte ptr [esp + 0x28], dl
        mov dl, byte ptr [ecx + ebp]
        mov byte ptr [esp + 0x13], dl
        mov edx, dword ptr [edi + 0x84]
        cmp ebp, edx
        jb L3
        shr dword ptr [esp + 0x14], 2
    L3:
        mov edx, dword ptr [edi + 0x6c]
        cmp eax, edx
        mov dword ptr [esp + 0x20], edx
        jbe L4
        mov dword ptr [esp + 0x18], edx
    L4:
        mov esi, dword ptr [esp + 0x2c]
    L5:
        mov edx, dword ptr [edi + 0x30]
        mov al, byte ptr [esp + 0x13]
        add edx, esi
        cmp byte ptr [edx + ebp], al
        jne L9
        mov al, byte ptr [esp + 0x28]
        cmp byte ptr [edx + ebp - 1], al
        jne L9
        mov al, byte ptr [edx]
        cmp al, byte ptr [ecx]
        jne L9
        mov al, byte ptr [edx + 1]
        inc edx
        cmp al, byte ptr [ecx + 1]
        jne L9
        add ecx, 2
        inc edx
    L6:
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        mov al, byte ptr [ecx + 1]
        inc ecx
        inc edx
        cmp al, byte ptr [edx]
        jne L7
        cmp ecx, ebx
        jb L6
    L7:
        mov edx, ecx
        lea ecx, [ebx - 0x102]
        sub edx, ebx
        add edx, 0x102
        cmp edx, ebp
        jle L9
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [edi + 0x68], esi
        cmp edx, eax
        mov ebp, edx
        jge L10
        mov al, byte ptr [edx + ecx - 1]
        mov dl, byte ptr [edx + ecx]
        mov byte ptr [esp + 0x28], al
        mov byte ptr [esp + 0x13], dl
    L9:
        mov edx, dword ptr [edi + 0x2c]
        mov eax, dword ptr [edi + 0x38]
        and edx, esi
        xor esi, esi
        mov si, word ptr [eax + 2*edx]
        mov eax, dword ptr [esp + 0x1c]
        cmp esi, eax
        jbe L10
        mov eax, dword ptr [esp + 0x14]
        dec eax
        mov dword ptr [esp + 0x14], eax
        jne L5
    L10:
        mov eax, dword ptr [esp + 0x20]
        cmp ebp, eax
        ja L11
        mov eax, ebp
    L11:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007C6490] sub_007C6490 (372 bytes)
extern "C" void ext_007C63B0();

extern "C" __declspec(naked) void __cdecl fn_007C6490() {
    __asm {
        sub     esp, 0x28
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx + 0x17c]
        fld     dword ptr [eax + 0x1f4]
        fld     dword ptr [eax + 0x1f8]
        fmul    st, st(1)
        fmulp   st(1), st
        fstp    dword ptr [esp]
        fld     dword ptr [eax + 0x200]
        mov     eax, dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0xc]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x10]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [eax + 0x14]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x1c]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x20]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x2c]
        fld     dword ptr [esp]
        fld     st(0)
        fmul    st, st(2)
        fcom    st(3)
        fnstsw  ax
        test    ah, 0x41
        jne     loc_7c6518
        fld     st(3)
        jmp     loc_7c651a
    loc_7c6518:
        fld     st(0)
    loc_7c651a:
        fxch    st(2)
        fdivrp  st(3), st
        fxch    st(1)
        fcomp   st(2)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_7c652f
        fstp    st(2)
        fld     st(0)
        jmp     loc_7c6540
    loc_7c652f:
        fcom    st(2)
        fnstsw  ax
        test    ah, 0x41
        je      loc_7c653e
        fstp    st(2)
        fld     st(1)
        jmp     loc_7c6540
    loc_7c653e:
        fxch    st(2)
    loc_7c6540:
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x14]
        fcom    st(2)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_7c6555
        fld     st(0)
        jmp     loc_7c6557
    loc_7c6555:
        fld     st(2)
    loc_7c6557:
        fcomp   st(2)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_7c6566
        fstp    st(0)
        fld     st(0)
        jmp     loc_7c6573
    loc_7c6566:
        fcom    st(2)
        fnstsw  ax
        test    ah, 0x5
        jnp     loc_7c6573
        fstp    st(0)
        fld     st(1)
    loc_7c6573:
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        fcom    st(2)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_7c6588
        fld     st(0)
        jmp     loc_7c658a
    loc_7c6588:
        fld     st(2)
    loc_7c658a:
        fcomp   st(2)
        fnstsw  ax
        test    ah, 0x5
        jp      loc_7c6599
    loc_7c6593:
        fstp    st(2)
    loc_7c6595:
        fstp    st(1)
        jmp     loc_7c65a6
    loc_7c6599:
        fstp    st(1)
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x5
        jnp     loc_7c6595
        fstp    st(0)
    loc_7c65a6:
        fstp    dword ptr [esp + 0x24]
        push    esi
        fld     dword ptr [esp + 0x8]
        lea     esi, [ecx + 0x70]
        fstp    dword ptr [ecx + 0x80]
        lea     edx, [ecx + 0x60]
        fld     dword ptr [esp + 0x14]
        add     ecx, 0x50
        fstp    dword ptr [ecx + 0x40]
        lea     eax, [esp + 0x8]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [ecx + 0x50]
        fld     dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 0x34]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + 0x44]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [ecx + 0x54]
        fld     dword ptr [esp + 0x10]
        fstp    dword ptr [ecx + 0x38]
        fld     dword ptr [esp + 0x1c]
        fstp    dword ptr [ecx + 0x48]
        fld     dword ptr [esp + 0x28]
        fstp    dword ptr [ecx + 0x58]
        call    ext_007C63B0
        pop     esi
        add     esp, 0x28
        ret
    }
}

// [0x007CB470] sub_007CB470 (374 bytes)
extern "C" void ext_007CB9C0();
extern "C" int mem_00993828;
extern "C" __declspec(naked) void __cdecl fn_007CB470(void* self) {
    __asm {
        sub esp, 0x30
        push ebx
        mov ebx, dword ptr [esp + 0x38]
        cmp byte ptr [ebx], 0x4
        jne L_done
        push esi
        push edi
        push ebx
        call ext_007CB970
        fstp dword ptr [esp + 0x20]
        push ebx
        call ext_007CB9C0
        fmul qword ptr [mem_00993828]
        mov esi, dword ptr [esp + 0x4c]
        add esp, 0x8
        fstp dword ptr [esp + 0x20]
        mov edi, 0x99d6d0
                _emit 0x8d
                _emit 0xa4
                _emit 0x24
                _emit 0x00
                _emit 0x00
                _emit 0x00
                _emit 0x00
L_loop:
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x1c]
        fld dword ptr [edi - 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [edi - 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi]
        fmul st, st(2)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x20]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x4]
        fmul st, st(3)
        fld st(2)
        fmul dword ptr [esi + 0x14]
        faddp st(1), st
        fld dword ptr [esi + 0x24]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x18]
        fmulp st(2), st
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esi + 0x28]
        faddp st(1), st
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [edi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x10]
        fmul dword ptr [edi + 0xc]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x20]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x4]
        fmul st, st(3)
        fld st(2)
        fmul dword ptr [esi + 0x14]
        faddp st(1), st
        fld dword ptr [esi + 0x24]
        fmul st, st(2)
        faddp st(1), st
        mov eax, dword ptr [ebx + 0xc]
        lea edx, [esp + 0x24]
        fadd dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x18]
        fmulp st(2), st
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esi + 0x28]
        faddp st(1), st
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 0xb0]
        mov ecx, dword ptr [eax + 0x24]
        push ecx
        push edx
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [esp + 0x38]
        push ecx
        push 0x4
        call edx
        add edi, 0x18
        add esp, 0x10
        cmp edi, 0x99d8b0
        jl L_loop
        pop edi
        pop esi
L_done:
        pop ebx
        add esp, 0x30
        ret
    }
}

// [0x007CDDE0] sub_007CDDE0 (396 bytes)
extern "C" int mem_00993860; extern "C" int mem_0092A278;
extern "C" __declspec(naked) void __fastcall fn_007CDDE0(void* self) {
    __asm {
        push ecx
        fld dword ptr [edi+4]
        push esi
        fld dword ptr [ebx+0x2c]
        mov esi, [esp+0xc]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_b1
        fld dword ptr [esi]
        mov eax, [ecx+0x50]
        fmul dword ptr [edi+4]
        add eax, edx
        push ebp
        mov ebp, eax
        fadd dword ptr [edi+8]
        and eax, 3
        fld1
        shr ebp, 2
        fld st(0)
        lea eax, [eax+4*ebp]
        fdivrp st(2), st
        mov ebp, [ecx+0x4c]
        fxch st(1)
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fld st(0)
        fsub dword ptr [esi+4]
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fstp dword ptr [ebp+4*eax]
        mov eax, [ecx+0x50]
        fldz
        add eax, edx
        mov ebp, eax
        shr ebp, 2
        and eax, 3
        lea eax, [eax+4*ebp]
        mov ebp, [ecx+0x4c]
        fcom dword ptr [ebp+4*eax]
        fnstsw ax
        test ah, 0x41
        jne L_6d
        mov eax, [ecx+0x50]
        add eax, edx
        mov ebp, eax
        shr ebp, 2
        and eax, 3
        lea eax, [eax+4*ebp]
        mov ebp, [ecx+0x4c]
        fst dword ptr [ebp+4*eax]
    L_6d:
        fcomp dword ptr [edi+8]
        pop ebp
        fnstsw ax
        test ah, 0x44
        mov eax, [ecx+0x14]
        jp L_8a
        fstp st(0)
        fsub dword ptr [esi+8]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        jmp L_9c
    L_8a:
        fstp st(1)
        fmul dword ptr [esi]
        fmul dword ptr [edi+4]
        fsub dword ptr [esi+8]
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
    L_9c:
        add eax, edx
        mov esi, eax
        shr esi, 2
        and eax, 3
        lea eax, [eax+4*esi]
        mov esi, [ecx+0x10]
        jmp L_40
    L_b1:
        fld dword ptr [edi+0xc]
        fchs
        fmul dword ptr [ebx+0x28]
        fstp dword ptr [esp+4]
        fld dword ptr [esi]
        fld dword ptr [esp+4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi+8]
        fmul dword ptr [ebx+0x10]
        fdivp st(2), st
        fxch st(1)
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fabs
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fcomp dword ptr [mem_00993860]
        fnstsw ax
        test ah, 5
        jp L_f7
        mov esi, 1
        jmp L_f9
    L_f7:
        xor esi, esi
    L_f9:
        fld dword ptr [ebx+0x28]
        mov [ebx+0xc], esi
        fmul dword ptr [ebx+0x10]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 1
        jne L_161
        mov eax, [ecx+0x20]
        add eax, edx
        mov esi, eax
        shr esi, 2
        and eax, 3
        lea eax, [eax+4*esi]
        mov esi, [ecx+0x1c]
        fstp dword ptr [esi+4*eax]
    L_125:
        cmp dword ptr [ebx+0xc], 0
        je L_5c
        mov eax, [ecx+0x20]
        fldz
        add eax, edx
        mov esi, eax
        shr esi, 2
        and eax, 3
        lea eax, [eax+4*esi]
        mov esi, [ecx+0x1c]
    L_40:
        fstp dword ptr [esi+4*eax]
        mov eax, [ecx+0x2c]
        mov ecx, [ecx+0x28]
        fld dword ptr [ebx+0x10]
        add eax, edx
        mov edx, eax
        shr edx, 2
        and eax, 3
        lea eax, [eax+4*edx]
        fstp dword ptr [ecx+4*eax]
    L_5c:
        mov al, 1
        pop esi
        pop ecx
        ret
    L_161:
        test esi, esi
        fstp st(0)
        jne L_125
        xor al, al
        pop esi
        pop ecx
        ret
    }
}

// [0x007CDF70] sub_007CDF70 (228 bytes)
extern "C" void ext_007CDDE0();
extern "C" float mem_0093C1A8;
extern "C" __declspec(naked) void __fastcall fn_007CDF70(void* self) {
    __asm {
        fldz
        push ebx
        mov ebx, eax
        fcom dword ptr [ebx+0x10]
        push ebp
        mov ebp, dword ptr [esp+0xc]
        push edi
        fnstsw ax
        test ah, 0x41
        jne L_007CDF70_hi
        fcomp dword ptr [ebx+0x34]
        lea edi, [ebx+0x30]
        fnstsw ax
        test ah, 0x5
        jp L_007CDF70_ret1
        push ecx
        mov edx, ebp
        mov ecx, esi
        call ext_007CDDE0
        add esp, 4
        test al, al
        jne L_007CDF70_lo_ok
    L_007CDF70_ret0:
        pop edi
        pop ebp
        xor al, al
        pop ebx
        ret
    L_007CDF70_lo_ok:
        mov eax, dword ptr [esi+0x38]
        fldz
        add eax, ebp
        mov ecx, eax
        and eax, 0x3
        shr ecx, 2
        lea edx, [eax+4*ecx]
        mov eax, dword ptr [esi+0x34]
        fstp dword ptr [eax+4*edx]
        mov ecx, dword ptr [esi+0x44]
        fld dword ptr [mem_0099D148]
        lea eax, [ecx+ebp]
        mov ecx, dword ptr [esi+0x40]
        mov edx, eax
        shr edx, 2
        and eax, 0x3
        pop edi
        lea eax, [eax+4*edx]
        pop ebp
        fstp dword ptr [ecx+4*eax]
        mov al, 1
        pop ebx
        ret
    L_007CDF70_hi:
        fcom dword ptr [ebx+0x10]
        fnstsw ax
        test ah, 0x5
        jp L_007CDF70_fpop
        fcomp dword ptr [ebx+0x44]
        lea edi, [ebx+0x40]
        fnstsw ax
        test ah, 0x5
        jp L_007CDF70_ret1
        push ecx
        mov edx, ebp
        mov ecx, esi
        call ext_007CDDE0
        add esp, 4
        test al, al
        je L_007CDF70_ret0
        mov edx, dword ptr [esi+0x38]
        fld dword ptr [mem_0093C1A8]
        lea eax, [edx+ebp]
        mov ecx, eax
        and eax, 0x3
        shr ecx, 2
        lea edx, [eax+4*ecx]
        mov eax, dword ptr [esi+0x34]
        fstp dword ptr [eax+4*edx]
        mov ecx, dword ptr [esi+0x44]
        fldz
        lea eax, [ecx+ebp]
        mov ecx, dword ptr [esi+0x40]
        mov edx, eax
        shr edx, 2
        and eax, 0x3
        pop edi
        lea eax, [eax+4*edx]
        pop ebp
        fstp dword ptr [ecx+4*eax]
        mov al, 1
        pop ebx
        ret
    L_007CDF70_fpop:
        fstp st(0)
    L_007CDF70_ret1:
        pop edi
        pop ebp
        mov al, 1
        pop ebx
        ret
    }
}

// [0x007CAD50] sub_007CAD50 (414 bytes)
extern "C" int mem_00993828;
extern "C" int mem_0099D5A0;
extern "C" int mem_0099D6C0;

extern "C" void ext_007CA8A0();

extern "C" __declspec(naked) void __cdecl fn_007CAD50(unsigned char* a, float* m) {
    __asm {
        sub esp, 0x30
        push ebx
        mov ebx, dword ptr [esp + 0x38]
        cmp byte ptr [ebx], 0x2
        jne L_skip
        push esi
        push edi
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        push ebx
        call ext_007CA8A0
        fld dword ptr [esp + 0x1c]
        fld qword ptr [mem_00993828]
        mov esi, dword ptr [esp + 0x54]
        fmul st(1), st
        add esp, 0x10
        fxch st(1)
        mov edi, offset mem_0099D5A0
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        jmp L_loop
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        fld dword ptr [edi - 0x8]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi - 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld st(1)
        fmul dword ptr [edi]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x20]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x4]
        fmul st, st(3)
        fld dword ptr [esi + 0x14]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x24]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fld dword ptr [esi + 0x18]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [esi + 0x28]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x1c]
        fmul dword ptr [edi + 0xc]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x20]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x4]
        fmul st, st(3)
        fld dword ptr [esi + 0x14]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [esi + 0x24]
        fmul st, st(2)
        mov eax, dword ptr [ebx + 0xc]
        lea edx, [esp + 0x24]
        faddp st(1), st
        fadd dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 0x8]
        fmulp st(3), st
        fld dword ptr [esi + 0x18]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [esi + 0x28]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 0xb0]
        mov ecx, dword ptr [eax + 0x24]
        push ecx
        push edx
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [esp + 0x38]
        push ecx
        push 0x4
        call edx
        add edi, 0x18
        add esp, 0x10
        cmp edi, offset mem_0099D6C0
        jl L_loop
        pop edi
        pop esi
    L_skip:
        pop ebx
        add esp, 0x30
        ret
    }
}

// [0x007CC220] sub_007CC220 (423 bytes)
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D48A0();
extern "C" float mem_0093C1A8;
extern "C" float mem_0099D148;
extern "C" int mem_0099DCA0;
extern "C" int mem_0099DC98;

extern "C" __declspec(naked) int __cdecl fn_007CC220(void* a1, void* a2) {
    __asm {
        sub esp, 0x18
        push ebx
        push edi
        mov edi, dword ptr [esp + 0x24]
        push edi
        call ext_007D48A0
        fld dword ptr [mem_0093C1A8]
        fst dword ptr [edi + 0x8]
        lea edx, [edi + 0x8]
        fst dword ptr [edx + 0x4]
        lea ebx, [edi + 0x14]
        fst dword ptr [edx + 0x8]
        mov ecx, eax
        fld dword ptr [mem_0099D148]
        add esp, 0x4
        fst dword ptr [ebx]
        fst dword ptr [ebx + 0x4]
        fst dword ptr [ebx + 0x8]
        fld dword ptr [ecx + 0x20]
        fld qword ptr [mem_0099DCA0]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        fld qword ptr [mem_0099DC98]
        jp c220_L278
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [ebx]
        jmp c220_L2D9
c220_L278:
        fld dword ptr [ecx + 0x20]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp c220_L28B
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [edx]
        jmp c220_L2D9
c220_L28B:
        fld dword ptr [ecx + 0x24]
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne c220_L29F
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [edi + 0x18]
        jmp c220_L2D9
c220_L29F:
        fld dword ptr [ecx + 0x24]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp c220_L2B3
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [edi + 0xc]
        jmp c220_L2D9
c220_L2B3:
        fld dword ptr [ecx + 0x28]
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne c220_L2C7
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [edi + 0x1c]
        jmp c220_L2D9
c220_L2C7:
        fld dword ptr [ecx + 0x28]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp c220_L2D9
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [edi + 0x10]
c220_L2D9:
        mov ecx, dword ptr [esp + 0x28]
        test ecx, ecx
        je c220_L3B4
        fxch st(3)
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x10]
        fxch st(1)
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 0x20]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne c220_L31A
        fstp st(0)
        fstp st(0)
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [esp + 0x14]
        jmp c220_L38F
c220_L31A:
        fld dword ptr [ecx + 0x20]
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp c220_L333
        fstp st(0)
        fstp st(0)
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [esp + 0x8]
        jmp c220_L38F
c220_L333:
        fld dword ptr [ecx + 0x24]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne c220_L34C
        fstp st(0)
        fstp st(0)
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [esp + 0x18]
        jmp c220_L38F
c220_L34C:
        fld dword ptr [ecx + 0x24]
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp c220_L365
        fstp st(0)
        fstp st(0)
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [esp + 0xc]
        jmp c220_L38F
c220_L365:
        fld dword ptr [ecx + 0x28]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne c220_L37C
        fstp st(0)
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [esp + 0x1c]
        jmp c220_L38F
c220_L37C:
        fld dword ptr [ecx + 0x28]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp c220_L38F
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [esp + 0x10]
c220_L38F:
        push esi
        lea ecx, [esp + 0xc]
        mov esi, edx
        call ext_007CA280
        lea ecx, [esp + 0x18]
        mov edx, ebx
        mov esi, ebx
        call ext_007CB8D0
        pop esi
        pop edi
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret
c220_L3B4:
        fstp st(3)
        pop edi
        fstp st(1)
        mov eax, 1
        fstp st(0)
        pop ebx
        fstp st(0)
        add esp, 0x18
        ret
    }
}

// [0x007C7750] sub_007C7750 (429 bytes)
extern "C" void ext_007C9300();
extern "C" void ext_007D8450();
extern "C" void ext_007D8470();
extern "C" void ext_007D8490();
extern "C" void ext_007D8570();
extern "C" double mem_00957450;
extern "C" __declspec(naked) void __cdecl fn_007C7750(void* a1, int a2, int a3, void* a4) {
    __asm {
        sub esp, 0x2c
        push ebp
        mov ebp, dword ptr [esp + 0x34]
        mov eax, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [ebp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x3c]
        mov edx, dword ptr [ecx + 4*esi]
        push edi
        mov edi, dword ptr [eax + 4*esi]
        add edx, edi
        cmp edi, edx
        mov dword ptr [esp + 0xc], edi
        jge L_exit
        push ebx
                _emit 0x8d
                _emit 0xa4
                _emit 0x24
                _emit 0x00
                _emit 0x00
                _emit 0x00
                _emit 0x00
    L_loop:
        mov eax, dword ptr [ebp]
        mov eax, dword ptr [eax + 4*edi]
        push eax
        call ext_007D8710
        mov ebx, eax
        add esp, 0x4
        test ebx, ebx
        je L_after
        mov esi, dword ptr [ebx + 0x168]
        test esi, esi
        je L_esi
        mov ebp, dword ptr [esp + 0x48]
        mov edi, ebp
        and edi, 0x1
        and ebp, 0x2
    L_inner:
        lea ecx, [esp + 0x30]
        push ecx
        push esi
        call ext_007D8450
        add esp, 0x8
        test edi, edi
        je L_flagB
        lea edx, [esp + 0x18]
        push edx
        push esi
        call ext_007D8470
        push esi
        call ext_007D8490
        fmul qword ptr [mem_00957450]
        mov eax, dword ptr [esp + 0x58]
        mov ecx, dword ptr [eax + 0x24]
        fadd qword ptr [mem_0092A270]
        push ecx
        lea edx, [esp + 0x28]
        push edx
        fstp dword ptr [esp + 0x28]
        mov edx, dword ptr [eax + 0x20]
        fld dword ptr [esp + 0x2c]
        lea ecx, [esp + 0x44]
        fld dword ptr [esp + 0x28]
        push ecx
        fld st(0)
        push 0x0
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x38]
        fmul st, st(1)
        fstp dword ptr [esp + 0x38]
        fmul dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x4c]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x50]
        fadd dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x54]
        fadd dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x3c]
        call edx
        add esp, 0x1c
    L_flagB:
        test ebp, ebp
        je L_skipB
        push 0x0
        push ebx
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9300
        add esp, 0x8
        test eax, eax
        je L_zero
        lea eax, [esp + 0x24]
        push eax
        push 0x0
        jmp L_c
    L_zero:
        lea ecx, [esp + 0x24]
        push ecx
        push 0x1
    L_c:
        push esi
        call ext_007D8570
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x58]
        mov edx, dword ptr [eax + 0x24]
        mov eax, dword ptr [eax + 0x20]
        fstp dword ptr [esp + 0x30]
        add esp, 0xc
        fld dword ptr [esp + 0x28]
        push edx
        fadd dword ptr [esp + 0x38]
        lea ecx, [esp + 0x28]
        push ecx
        lea edx, [esp + 0x38]
        fstp dword ptr [esp + 0x30]
        push edx
        fld dword ptr [esp + 0x38]
        push 0x1
        fadd dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x3c]
        call eax
        add esp, 0x10
    L_skipB:
        mov esi, dword ptr [esi + 0x5c]
        test esi, esi
        jne L_inner
        mov edi, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x40]
    L_esi:
        mov esi, dword ptr [esp + 0x44]
    L_after:
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ecx + 4*esi]
        add eax, dword ptr [edx + 4*esi]
        add edi, 0x1
        cmp edi, eax
        mov dword ptr [esp + 0x10], edi
        jl L_loop
        pop ebx
    L_exit:
        pop edi
        pop esi
        pop ebp
        add esp, 0x2c
        ret
    }
}

// [0x007C9860] sub_007C9860 (87 bytes)
extern "C" void ext_007D4B90();

extern "C" __declspec(naked) void __cdecl fn_007C9860(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        call ext_007C9260
        add esp, 0x4
        test eax, eax
        je done_007C9860
        mov eax, dword ptr [ecx + 0x40]
        and dword ptr [ecx + 0x9c], -0x2
        add dword ptr [eax + 0x158], -0x1
        push ebx
        push esi
        push edi
        lea esi, [ecx + 0x94]
        lea edi, [ecx + 0x60]
        mov ebx, 0x2
    loop_007C9860:
        mov eax, dword ptr [esi]
        test eax, eax
        je skip_007C9860
        add eax, 0x1d4
        push edi
        push eax
        call ext_007D4B90
        add esp, 0x8
    skip_007C9860:
        add edi, 0x18
        add esi, 0x4
        sub ebx, 0x1
        jne loop_007C9860
        pop edi
        pop esi
        pop ebx
    done_007C9860:
        ret
    }
}

// [0x007C66A0] sub_007C66A0 (102 bytes)
extern "C" void ext_007D4B90();
extern "C" void __cdecl fn_007C66A0(void* self) {
    unsigned char* p = (unsigned char*)self;
    if (p[0x1c4] & 1) {
        unsigned char* obj = *(unsigned char**)(p + 0x17c);
        ((void (__cdecl*)(void*, void*))ext_007D4B90)(obj + 0x70, p + 0x19c);
        *(unsigned int*)(p + 0x1c4) &= 0xfffffefeu;
        *(float*)(p + 0x20c) = 0.0f;
        obj = *(unsigned char**)(p + 0x17c);
        *(int*)(p + 0x1b8) = -1;
        *(int*)(obj + 0x110) += -1;
        obj = *(unsigned char**)(p + 0x17c);
        void (__cdecl* cb)(void*) = *(void (__cdecl**)(void*))(obj + 0x250);
        if (cb) {
            cb(p);
        }
    }
}

// [0x007C7200] sub_007C7200 (56 bytes)
extern "C" void ext_007C66A0();
extern "C" void ext_007C6780();
extern "C" void ext_007D4B90();
extern "C" int __cdecl fn_007C7200(void* self) {
    char* p = (char*)self;
    if (((int (__cdecl*)(void*))ext_007C6780)(p)) {
        ((void (__cdecl*)(void*))ext_007C66A0)(p);
    }
    ((void (__cdecl*)(int, void*))ext_007D4B90)(*(int*)(p + 0x17c), p + 0x184);
    return 1;
}

// [0x007C98C0] sub_007C98C0 (101 bytes)
extern "C" void __cdecl ext_007D86C0(void* a1);
extern "C" void __cdecl ext_007C9860(void* a1);

extern "C" void __cdecl fn_007C98C0(void* self) {
    char* esi = (char*)self;
    typedef int (__cdecl *fn_t)(void*);
    typedef void (__cdecl *vfn_t)(void*);
    typedef void (__cdecl *f2_t)(void*, void*);
    if (((fn_t)&ext_007C9260)(esi) != 0) {
        ((vfn_t)&ext_007C9860)(esi);
    }
    if (*(int*)(esi + 0xb0) == 5) {
        void* r = ext_007D8710(esi);
        ext_007D86C0(r);
        void* p = *(void**)(*(char**)(esi + 0x40) + 0x258);
        if (p != 0) {
            ((vfn_t)p)(esi);
        }
    }
    char* edx = *(char**)(esi + 0x40) + 0x38;
    ((f2_t)&ext_007D4B90)(edx, esi + 0x48);
    *(int*)(esi + 0xb0) = -1;
}

// [0x007C6610] sub_007C6610 (129 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C6610(void* self, int v) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x17c]
        push edi
        lea ebp, [esi + 0x184]
        push ebp
        push eax
        call ext_007D4B90
        add esp, 8
        test byte ptr [esi + 0x1c4], 1
        je skip1
        mov edx, dword ptr [esi + 0x17c]
        lea ecx, [esi + 0x19c]
        push ecx
        add edx, 0x70
        push edx
        call ext_007D4B90
        add esp, 8
skip1:
        mov edi, dword ptr [esp + 0x14]
        mov eax, dword ptr [esi + 0x17c]
        push edi
        push ebp
        push eax
        mov dword ptr [esi + 0x180], edi
        call ext_007D4970
        add esp, 0xc
        test byte ptr [esi + 0x1c4], 1
        je skip2
        mov edx, dword ptr [esi + 0x17c]
        push edi
        lea ecx, [esi + 0x19c]
        push ecx
        add edx, 0x70
        push edx
        call ext_007D4970
        add esp, 0xc
skip2:
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x007C9930] sub_007C9930 (32 bytes)
extern "C" void ext_007C98C0();
extern "C" int mem_00AB28C8;

extern "C" __declspec(naked) void __cdecl fn_007C9930(void* a0) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_007C98C0
        mov eax, dword ptr [esi + 0x40]
        add eax, 0x15c
        push esi
        push eax
        call dword ptr [mem_00AB28C8]
        add esp, 0xc
        pop esi
        ret
    }
}

// [0x007C8F80] sub_007C8F80 (432 bytes)
extern "C" void ext_007D4B30();
extern "C" __declspec(naked) void __cdecl fn_007C8F80(void* self, int a2) {
    __asm {
        fldz
        push ebx
        xor eax, eax
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x98], eax
        mov dword ptr [esi + 0x94], eax
        mov dword ptr [esi + 0xa0], eax
        mov dword ptr [esi + 0xa4], eax
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x9c], eax
        mov dword ptr [esi + 0x90], eax
        mov dword ptr [esi + 0x40], ebp
        or eax, -1
        mov dword ptr [esi + 0xb8], eax
        mov dword ptr [esi + 0xb4], eax
        fst dword ptr [esi]
        fst dword ptr [esi + 0x10]
        push edi
        fst dword ptr [esi + 0x20]
        lea edi, [esi + 0x74]
        fst dword ptr [esi + 0x30]
        mov ebx, 2
        fst dword ptr [esi + 0x4]
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x34]
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x2c]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x148]
        fst dword ptr [esi + 0x13c]
        fst dword ptr [esi + 0x14c]
        fst dword ptr [esi + 0x140]
        fst dword ptr [esi + 0x150]
        fst dword ptr [esi + 0x144]
        fld1
        fst dword ptr [esi + 0xbc]
        fst dword ptr [esi + 0xd0]
        fst dword ptr [esi + 0xe4]
        fst dword ptr [esi + 0xf8]
        fxch st(1)
        fst dword ptr [esi + 0xc0]
        fst dword ptr [esi + 0xc4]
        fst dword ptr [esi + 0xc8]
        fst dword ptr [esi + 0xcc]
        fst dword ptr [esi + 0xd4]
        fst dword ptr [esi + 0xd8]
        fst dword ptr [esi + 0xdc]
        fst dword ptr [esi + 0xe0]
        fst dword ptr [esi + 0xe8]
        fst dword ptr [esi + 0xec]
        fst dword ptr [esi + 0xf0]
        fst dword ptr [esi + 0xf4]
        fxch st(1)
        fst dword ptr [esi + 0xfc]
        fst dword ptr [esi + 0x110]
        fst dword ptr [esi + 0x124]
        fstp dword ptr [esi + 0x138]
        fst dword ptr [esi + 0x100]
        fst dword ptr [esi + 0x104]
        fst dword ptr [esi + 0x108]
        fst dword ptr [esi + 0x10c]
        fst dword ptr [esi + 0x114]
        fst dword ptr [esi + 0x118]
        fst dword ptr [esi + 0x11c]
        fst dword ptr [esi + 0x120]
        fst dword ptr [esi + 0x128]
        fst dword ptr [esi + 0x12c]
        fst dword ptr [esi + 0x130]
        fstp dword ptr [esi + 0x134]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loop_top:
        mov eax, dword ptr [esi + 0x44]
        push eax
        lea ecx, [edi - 0x14]
        push ecx
        call ext_007D4B30
        mov dword ptr [edi], esi
        add esp, 0x8
        add edi, 0x18
        sub ebx, 1
        jne loop_top
        mov edx, dword ptr [esi + 0x44]
        push edx
        lea edi, [esi + 0x48]
        push edi
        call ext_007D4B30
        mov eax, dword ptr [esi + 0x44]
        push eax
        push edi
        add ebp, 0x38
        push ebp
        mov dword ptr [esi + 0x5c], esi
        call ext_007D4970
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007C6C60] sub_007C6C60 (136 bytes)
extern "C" int __cdecl ext_007C5F50(void*);
extern "C" void __cdecl ext_007C7200(void*);
extern "C" void* __cdecl ext_007D4A70(void*);
extern "C" void* __cdecl ext_007D4AA0(void*, void*);

extern "C" void __cdecl fn_007C6C60(void* self) {
    char* ebp = (char*)self;
    if (ext_007C5F50(self)) {
        ext_007C7200(self);
    }
    char* ebx = ebp + 0x1d4;
    char* esi = (char*)ext_007D4A70(ebx);
    if (esi) {
        do {
            unsigned int edi = *(unsigned int*)(esi + 0x14);
            ext_007D4AA0(ebx, esi);
            esi = (char*)ext_007D4AA0(ebx, esi);
            ext_007C9860((void*)edi);
            ext_007C9930((int)edi);
        } while (esi);
    }
    char* eax = *(char**)(ebp + 0x17c);
    *(int*)ebp = -1;
    eax = *(char**)(eax + 0x254);
    if (eax) {
        ((void (__cdecl*)(void*))eax)(self);
    }
    char* p = *(char**)(ebp + 0x17c);
    *(int*)(p + 0x10c) -= 1;
}

// [0x007C9BF0] sub_007C9BF0 (85 bytes)
extern "C" void ext_007C8F80();
extern "C" void ext_007C9D80();
extern "C" __declspec(naked) void __fastcall fn_007C9BF0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        push eax
        push esi
        call ext_007C8F80
        lea ecx, [esi + 160h]
        push ecx
        mov dword ptr [esi + 0b0h], 1
        mov dword ptr [esi + 0a0h], 7CF820h
        mov dword ptr [esi + 0a4h], 6
        mov dword ptr [esi + 0a8h], 7C97C0h
        mov dword ptr [esi + 0ach], 7C9130h
        call ext_007C9D80
        add esp, 0ch
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007C6DB0] sub_007C6DB0 (35 bytes)
extern "C" void ext_007C6C60();
extern "C" int mem_00AB28C8;

extern "C" __declspec(naked) void __cdecl fn_007C6DB0(void* a0) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_007C6C60
        mov eax, dword ptr [esi + 0x17c]
        add eax, 0x114
        push esi
        push eax
        call dword ptr [mem_00AB28C8]
        add esp, 0xc
        pop esi
        ret
    }
}

// [0x007C9C60] sub_007C9C60 (46 bytes)
extern "C" void ext_007C9BF0();
extern "C" int mem_00AB28C4;
extern "C" __declspec(naked) int __cdecl fn_007C9C60(void* a0) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        lea eax, [edi + 0x15c]
        push eax
        call dword ptr [mem_00AB28C4]
        mov esi, eax
        add esp, 4
        test esi, esi
        jne short L_has_result
        pop edi
        pop esi
        ret
L_has_result:
        push edi
        push esi
        call ext_007C9BF0
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007C7240] sub_007C7240 (203 bytes)
extern "C" void* __cdecl ext_007D4A70(void*);
extern "C" void* __cdecl ext_007D4AA0(void*, void*);
extern "C" void __cdecl ext_007C9930(int);
extern "C" void ext_007C6DB0();
extern "C" void ext_007D6260();
extern "C" void ext_007D5DD0();
extern "C" int mem_00AB28BC;
extern "C" __declspec(naked) void __cdecl fn_007C7240(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        lea ebp, [edi + 0x38]
        push ebp
        call ext_007D4A70
        add esp, 0x4
        test eax, eax
        je L_second
    L_loop1:
        mov ebx, dword ptr [eax + 0x14]
        push eax
        push ebp
        call ext_007D4AA0
        push ebx
        mov esi, eax
        call ext_007C9930
        add esp, 0xc
        test esi, esi
        mov eax, esi
        jne L_loop1
    L_second:
        push edi
        call ext_007D4A70
        add esp, 0x4
        test eax, eax
        je L_rest
    L_loop2:
        mov ebx, dword ptr [eax + 0x14]
        push eax
        push edi
        call ext_007D4AA0
        push ebx
        mov esi, eax
        call ext_007C6DB0
        add esp, 0xc
        test esi, esi
        mov eax, esi
        jne L_loop2
    L_rest:
        lea eax, [edi + 0x134]
        push eax
        call ext_007D6260
        lea ecx, [edi + 0x114]
        push ecx
        call dword ptr [mem_00AB28BC]
        lea edx, [edi + 0x1bc]
        push edx
        call ext_007D6260
        lea eax, [edi + 0x15c]
        push eax
        call dword ptr [mem_00AB28BC]
        lea ecx, [edi + 0x19c]
        push ecx
        call ext_007D6260
        lea edx, [edi + 0xa8]
        push edx
        call ext_007D6260
        lea eax, [edi + 0xc8]
        push eax
        call ext_007D6260
        lea ecx, [edi + 0xe8]
        push ecx
        call ext_007D6260
        push edi
        call ext_007D5DD0
        add esp, 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007CD050] sub_007CD050 (180 bytes)
extern "C" void ext_007C70E0();
extern "C" void ext_007C97A0();
extern "C" void ext_007CC600();
extern "C" void ext_007D86F0();
extern "C" void ext_007D8860();
extern "C" void ext_007D8940();
extern "C" __declspec(naked) void __fastcall fn_007CD050(void* self) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esi]
        push ebx
        push ebp
        push edi
        push eax
        call ext_007C70E0
        mov ecx, dword ptr [esi + 4]
        push ecx
        movsx ebp, ax
        call ext_007C70E0
        movsx edx, ax
        mov eax, dword ptr [esi]
        push eax
        mov dword ptr [esp + 0x1c], edx
        call ext_007CC600
        mov ecx, dword ptr [esi + 4]
        push ecx
        mov ebx, eax
        call ext_007CC600
        add esp, 0x10
        xor edi, edi
        test ebx, ebx
        mov dword ptr [esp + 0xc], eax
        jne short L_body
        test eax, eax
        je short L_ret
    L_body:
        mov edx, dword ptr [esp + 0x18]
        push edx
        call ext_007D8940
        mov edi, eax
        add esp, 4
        test edi, edi
        jne short L_found
        pop edi
        pop ebp
        pop ebx
        add esp, 8
        ret
    L_found:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x5f0]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        push ebx
        push edi
        call ext_007D8860
        mov ecx, dword ptr [esp + 0x20]
        add esp, 0x10
        cmp ebp, ecx
        mov eax, ebp
        jl short L_skip
        mov eax, ecx
        mov ecx, ebp
    L_skip:
        shl eax, 0xf
        add eax, ecx
        neg eax
        push eax
        push edi
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C97A0
        push esi
        push edi
        call ext_007D86F0
        add esp, 0x10
        mov dword ptr [esi + 0x18], edi
    L_ret:
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x007C9950] sub_007C9950 (259 bytes)
extern "C" void ext_007C8F80();
extern "C" __declspec(naked) void* __cdecl fn_007C9950(void* self, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        push eax
        push esi
        call ext_007C8F80
        fld1
        fst dword ptr [esi + 0x1a4]
        mov dword ptr [esi + 0xb0], 7
        fst dword ptr [esi + 0x174]
        mov dword ptr [esi + 0xa0], 0x7d3ea0
        fstp dword ptr [esi + 0x160]
        mov dword ptr [esi + 0xa4], 6
        fldz
        mov dword ptr [esi + 0xa8], 0x7c97c0
        mov dword ptr [esi + 0xac], 0x7c9130
        xor eax, eax
        mov dword ptr [esi + 0x184], eax
        mov dword ptr [esi + 0x170], eax
        fst dword ptr [esi + 0x1a8]
        fst dword ptr [esi + 0x1b4]
        add esp, 8
        fst dword ptr [esi + 0x178]
        mov eax, esi
        fst dword ptr [esi + 0x164]
        fst dword ptr [esi + 0x188]
        fst dword ptr [esi + 0x198]
        fst dword ptr [esi + 0x1ac]
        fst dword ptr [esi + 0x1b8]
        fst dword ptr [esi + 0x17c]
        fst dword ptr [esi + 0x168]
        fst dword ptr [esi + 0x18c]
        fst dword ptr [esi + 0x19c]
        fst dword ptr [esi + 0x1b0]
        fst dword ptr [esi + 0x1bc]
        fst dword ptr [esi + 0x180]
        fst dword ptr [esi + 0x16c]
        fst dword ptr [esi + 0x190]
        fstp dword ptr [esi + 0x1a0]
        fld dword ptr [mem_0099D148]
        fst dword ptr [esi + 0x1c0]
        fst dword ptr [esi + 0x1c4]
        fst dword ptr [esi + 0x1c8]
        fst dword ptr [esi + 0x1cc]
        fst dword ptr [esi + 0x1d0]
        fstp dword ptr [esi + 0x1d4]
        pop esi
        ret
    }
}

// [0x007CC610] sub_007CC610 (345 bytes)
extern "C" void ext_007C8C50();
extern "C" void ext_007C97F0();
extern "C" void ext_007D5950();
extern "C" void ext_007D8740();

extern "C" __declspec(naked) void __cdecl fn_007CC610(int a0, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push edi
        push eax
        call ext_007D8710
        mov edi, eax
        add esp, 0x4
        test edi, edi
        je L_done
        push edi
        call ext_007D8740
        add esp, 0x4
        test eax, eax
        je L_done
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x8]
        cmp ebx, ecx
        je L_chk
        cmp dword ptr [eax + 0x4], ecx
        jne L_pop
    L_chk:
        cmp dword ptr [esi + 0x4], 0x0
        je L_else
        cmp dword ptr [esi + 0xc], 0x0
        je L_else
        cmp ebx, ecx
        jne L_p1
        mov ebx, dword ptr [eax + 0x4]
    L_p1:
        push ebx
        call ext_007CC9F0
        add esp, 0x4
        cmp eax, dword ptr [esi + 0xc]
        jne L_else
        push ebx
        call ext_007CC600
        add esp, 0x4
        cmp eax, dword ptr [esi + 0x4]
        jne L_p2
        mov ecx, dword ptr [esi + 0x8]
        push ebx
        push ecx
        call ext_007C8C50
        add esp, 0x8
        test eax, eax
        je L_else
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 0xb0]
        push 0x0099dcc0
        push ecx
        push 0x1
        call ext_007D5950
        add esp, 0xc
    L_p2:
        push ebp
        push 0x0
        push edi
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9300
        add esp, 0x8
        push 0x1
        push edi
        mov ebx, eax
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9300
        push edi
        mov ebp, eax
        call ext_007D8700
        push eax
        call ext_007C9860
        add esp, 0x10
        push 0x0
        push edi
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9300
        add esp, 0x8
        cmp eax, dword ptr [esi]
        jne L_alt
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [esi + 0x4]
        push ecx
        push ebp
        push edx
        jmp L_common
    L_else:
        push edi
        call ext_007D8700
        push eax
        call ext_007C9860
        push edi
        call ext_007D8700
        push eax
        call ext_007C9930
        add esp, 0x10
        pop esi
        pop ebx
        pop edi
        ret
    L_alt:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0xb0]
        mov eax, dword ptr [esi + 0x4]
        push edx
        push eax
        push ebx
    L_common:
        push edi
        call ext_007D8860
        add esp, 0x10
        push edi
        call ext_007D8700
        push eax
        call ext_007C97F0
        add esp, 0x8
        pop ebp
    L_pop:
        pop esi
        pop ebx
    L_done:
        pop edi
        ret
    }
}

// [0x007C9BC0] sub_007C9BC0 (46 bytes)
extern "C" void ext_007C9950();
extern "C" int mem_00AB28C4;
extern "C" __declspec(naked) int __cdecl fn_007C9BC0(void* a0) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        lea eax, [edi + 0x15c]
        push eax
        call dword ptr [mem_00AB28C4]
        mov esi, eax
        add esp, 4
        test esi, esi
        jne short L_has_result
        pop edi
        pop esi
        ret
L_has_result:
        push edi
        push esi
        call ext_007C9950
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007C5760] sub_007C5760 (375 bytes)
extern "C" double mem_0099D150;

extern "C" __declspec(naked) void* __cdecl fn_007C5760(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push eax
        push esi
        call ext_007C8F80
        fldz
        fst dword ptr [esi + 0x160]
        mov eax, 0x9
        fst dword ptr [esi + 0x164]
        xor edi, edi
        fst dword ptr [esi + 0x168]
        add esp, 0x8
        fst dword ptr [esi + 0x16c]
        mov dword ptr [esi + 0xb0], eax
        fst dword ptr [esi + 0x170]
        mov dword ptr [esi + 0xa0], 0x7cff30
        fst dword ptr [esi + 0x174]
        mov dword ptr [esi + 0xa4], eax
        fst dword ptr [esi + 0x178]
        mov dword ptr [esi + 0xa8], 0x7c97c0
        fst dword ptr [esi + 0x17c]
        mov dword ptr [esi + 0xac], 0x7c9130
        fst dword ptr [esi + 0x180]
        mov dword ptr [esi + 0x1a0], 0x700
        fst dword ptr [esi + 0x184]
        mov dword ptr [esi + 0x1a4], edi
        fst dword ptr [esi + 0x188]
        fst dword ptr [esi + 0x18c]
        fst dword ptr [esi + 0x190]
        fst dword ptr [esi + 0x194]
        fst dword ptr [esi + 0x198]
        fstp dword ptr [esi + 0x19c]
        fld1
        fstp dword ptr [esi + 0x1a8]
        fld qword ptr [mem_0099D150]
        call ext_006A6EAA
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x1b8], edi
        fst dword ptr [esi + 0x1ac]
        mov dword ptr [esi + 0x1e4], edi
        fst dword ptr [esi + 0x1b0]
        mov dword ptr [esi + 0x1f4], edi
        fst dword ptr [esi + 0x1b4]
        pop edi
        fld1
        mov eax, esi
        fstp dword ptr [esi + 0x1bc]
        fld dword ptr [mem_0099D148]
        fst dword ptr [esi + 0x1c0]
        fst dword ptr [esi + 0x1c4]
        fst dword ptr [esi + 0x1cc]
        fst dword ptr [esi + 0x1d0]
        fst dword ptr [esi + 0x1dc]
        fst dword ptr [esi + 0x1e0]
        fxch st(1)
        fst dword ptr [esi + 0x1c8]
        fst dword ptr [esi + 0x1d4]
        fstp dword ptr [esi + 0x1d8]
        fst dword ptr [esi + 0x1e8]
        fst dword ptr [esi + 0x1ec]
        fst dword ptr [esi + 0x1f0]
        fst dword ptr [esi + 0x1f8]
        fst dword ptr [esi + 0x1fc]
        fst dword ptr [esi + 0x200]
        fst dword ptr [esi + 0x204]
        fst dword ptr [esi + 0x208]
        fstp dword ptr [esi + 0x20c]
        pop esi
        ret
    }
}

extern "C" void ext_007DE040();
extern "C" void ext_007DCFF0();
extern "C" void ext_00493D90();

// [0x007C8A80] sub_007C8A80 (59 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C8A80() {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push esi
        push eax
        mov eax, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        call ext_007DE040
        mov esi, eax
        mov ecx, dword ptr [esi + 0x2c]
        push offset ext_00493D90
        push ecx
        mov dword ptr [esi + 0xc8], offset fn_007C71C0
        call ext_007DCFF0
        add esp, 0x18
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007C5D00] sub_007C5D00 (46 bytes)
extern "C" void ext_007C5760();
extern "C" int mem_00AB28C4;
extern "C" __declspec(naked) int __cdecl fn_007C5D00(void* a0) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        lea eax, [edi + 0x15c]
        push eax
        call dword ptr [mem_00AB28C4]
        mov esi, eax
        add esp, 4
        test esi, esi
        jne short L_has_result
        pop edi
        pop esi
        ret
L_has_result:
        push edi
        push esi
        call ext_007C5760
        add esp, 8
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007C9550] sub_007C9550 (463 bytes)
extern "C" void ext_007C8E30();
extern "C" void ext_007CA110();
extern "C" int mem_0092A270;
extern "C" __declspec(naked) void __fastcall fn_007C9550(void* self) {
    __asm {
        sub esp, 0x24
        fld dword ptr [esp + 0x30]
        push esi
        fst dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x18]
        _emit 0xd9
        _emit 0xc2
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xca
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp + 0x34]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc9
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc9
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fsub qword ptr [mem_0092A270]
        _emit 0xd9
        _emit 0xe1
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fcomp dword ptr [mem_00968ED8]
        fnstsw ax
        test ah, 0x41
        jnp skip_a
        lea esi, [esp + 0x4]
        call ext_007C8E30
        _emit 0xdd
        _emit 0xd8
skip_a:
        fld dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x48]
        _emit 0xd9
        _emit 0xc2
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xca
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp + 0x40]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc9
        fadd dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x40]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xc9
        fadd dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fsub qword ptr [mem_0092A270]
        _emit 0xd9
        _emit 0xe1
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fcomp dword ptr [mem_00968ED8]
        fnstsw ax
        test ah, 0x41
        jnp skip_b
        lea esi, [esp + 0x10]
        call ext_007C8E30
        _emit 0xdd
        _emit 0xd8
skip_b:
        cmp dword ptr [esp + 0x30], 0x0
        fld dword ptr [esp + 0x18]
        _emit 0xd9
        _emit 0xc0
        mov esi, dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x8]
        lea edx, [esp + 0x4]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xca
        fld dword ptr [esp + 0x14]
        _emit 0xd9
        _emit 0xc0
        fld dword ptr [esp + 0xc]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xca
        _emit 0xd9
        _emit 0xcc
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x10]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xcc
        fld dword ptr [esp + 0x4]
        _emit 0xd9
        _emit 0xc0
        _emit 0xde
        _emit 0xce
        _emit 0xd9
        _emit 0xcc
        _emit 0xde
        _emit 0xe5
        _emit 0xd9
        _emit 0xcc
        fstp dword ptr [esp + 0x20]
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xca
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x24]
        jne flag_nz
        mov ecx, dword ptr [esi + 0x94]
        lea eax, [esi + 0xbc]
        push eax
        push ecx
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x94]
        lea eax, [esi + 0xcc]
        push eax
        push ecx
        lea edx, [esp + 0x28]
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x94]
        lea eax, [esi + 0xdc]
        jmp tail
flag_nz:
        mov ecx, dword ptr [esi + 0x98]
        lea eax, [esi + 0xfc]
        push eax
        push ecx
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x98]
        lea eax, [esi + 0x10c]
        push eax
        push ecx
        lea edx, [esp + 0x28]
        push edx
        push 0x0
        call ext_007CA110
        mov ecx, dword ptr [esi + 0x98]
        lea eax, [esi + 0x11c]
tail:
        push eax
        push ecx
        lea edx, [esp + 0x44]
        push edx
        push 0x0
        call ext_007CA110
        add esp, 0x30
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x007C9720] sub_007C9720 (126 bytes)
extern "C" void __cdecl ext_007C9550(void* a0, int a1, float a2, float a3, float a4, float a5, float a6, float a7);
extern "C" void __cdecl fn_007C9720(void* a0, float a1, float a2, float a3, float a4, float a5, float a6) {
    ext_007C9550(a0, 0, a1, a2, a3, a4, a5, a6);
    ext_007C9550(a0, 1, a1, a2, a3, a4, a5, a6);
}

// [0x007CDC00] sub_007CDC00 (473 bytes)
extern "C" __declspec(naked) void __cdecl fn_007CDC00(int* s, int count) {
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     eax, ebp
        and     eax, 0x3
        push    edi
        mov     edi, ebp
        je      L_7cdc15
        sub     edi, eax
        add     edi, 0x4
    L_7cdc15:
        cmp     ebp, edi
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, ebp
        je      L_7cdd67
        fldz
        push    ebx
    L_7cdc26:
        xor     eax, eax
    L_7cdc28:
        mov     edx, dword ptr [ecx + 0x4]
        mov     ebx, dword ptr [ecx]
        add     edx, esi
        shl     edx, 0x4
        add     edx, eax
        fst     dword ptr [ebx + 4*edx]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ebx, dword ptr [ecx]
        add     edx, esi
        shl     edx, 0x4
        add     edx, eax
        fst     dword ptr [ebx + 4*edx + 0x10]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ebx, dword ptr [ecx]
        add     edx, esi
        shl     edx, 0x4
        add     edx, eax
        fst     dword ptr [ebx + 4*edx + 0x20]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ebx, dword ptr [ecx]
        add     edx, esi
        shl     edx, 0x4
        add     edx, eax
        add     eax, 0x1
        fst     dword ptr [ebx + 4*edx + 0x30]
        cmp     eax, 0x3
        jne     L_7cdc28

        mov     eax, dword ptr [ecx + 0x14]
        lea     ebx, [eax + esi]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7cdc8d
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7cdc8d:
        lea     edx, [ebx + 4*eax]
        mov     eax, dword ptr [ecx + 0x10]
        fst     dword ptr [eax + 4*edx]

        mov     edx, dword ptr [ecx + 0x20]
        lea     ebx, [edx + esi]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7cdcb4
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7cdcb4:
        mov     edx, dword ptr [ecx + 0x1c]
        lea     eax, [ebx + 4*eax]
        fst     dword ptr [edx + 4*eax]

        mov     eax, dword ptr [ecx + 0x2c]
        lea     ebx, [eax + esi]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7cdcdb
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7cdcdb:
        lea     edx, [ebx + 4*eax]
        mov     eax, dword ptr [ecx + 0x28]
        fst     dword ptr [eax + 4*edx]

        mov     edx, dword ptr [ecx + 0x38]
        lea     ebx, [edx + esi]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7cdd02
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7cdd02:
        mov     edx, dword ptr [ecx + 0x34]
        lea     eax, [ebx + 4*eax]
        fst     dword ptr [edx + 4*eax]

        mov     eax, dword ptr [ecx + 0x44]
        lea     ebx, [eax + esi]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7cdd29
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7cdd29:
        lea     edx, [ebx + 4*eax]
        mov     eax, dword ptr [ecx + 0x40]
        fst     dword ptr [eax + 4*edx]

        mov     edx, dword ptr [ecx + 0x50]
        lea     ebx, [edx + esi]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7cdd50
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7cdd50:
        mov     edx, dword ptr [ecx + 0x4c]
        add     esi, 0x1
        cmp     esi, edi
        lea     eax, [ebx + 4*eax]
        fst     dword ptr [edx + 4*eax]
        jne     L_7cdc26
        fstp    st(0)
        pop     ebx
    L_7cdd67:
        mov     eax, dword ptr [ecx + 0x68]
        mov     esi, dword ptr [ecx + 0x64]
        add     dword ptr [ecx + 0x4], edi
        add     dword ptr [ecx + 0x14], edi
        add     dword ptr [ecx + 0x20], edi
        add     dword ptr [ecx + 0x2c], edi
        add     dword ptr [ecx + 0x38], edi
        add     dword ptr [ecx + 0x44], edi
        add     dword ptr [ecx + 0x50], edi
        mov     edx, 0x1
        add     dword ptr [ecx + 0x5c], edx
        mov     dword ptr [esi + 4*eax], ebp
        mov     esi, dword ptr [ecx + 0x88]
        mov     eax, dword ptr [ecx + 0x8c]
        add     dword ptr [ecx + 0x68], edx
        add     dword ptr [esi + 4*eax], edi
        lea     eax, [esi + 4*eax]
        mov     esi, dword ptr [ecx + 0x7c]
        mov     eax, dword ptr [ecx + 0x80]
        add     dword ptr [esi + 4*eax], ebp
        lea     eax, [esi + 4*eax]
        mov     esi, dword ptr [ecx + 0x70]
        mov     eax, dword ptr [ecx + 0x74]
        add     dword ptr [esi + 4*eax], edx
        add     dword ptr [ecx + 0xb4], edi
        add     dword ptr [ecx + 0xac], ebp
        add     dword ptr [ecx + 0xb0], ebp
        add     dword ptr [ecx + 0xa4], edx
        lea     eax, [esi + 4*eax]
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}

// [0x007CE160] sub_007CE160 (478 bytes)
extern "C" void ext_007CE060();
extern "C" __declspec(naked) void __fastcall fn_007CE160(void* self) {
    __asm {
        fldz
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0xc]
        fcom dword ptr [esi + 0x10]
        push edi
        mov edi, eax
        fnstsw ax
        test ah, 0x44
        jp L_007CE18D
        cmp dword ptr [esi + 0x50], 0
        jne L_007CE18D
        cmp dword ptr [esi + 0x1c], 0
        jne L_007CE18D
        pop edi
        fstp st(0)
        pop esi
        xor al, al
        pop ebp
        ret
L_007CE18D:
        mov eax, dword ptr [edx + 4]
        fld dword ptr [ecx]
        add eax, ebp
        shl eax, 6
        push ebx
        mov ebx, dword ptr [edx]
        fstp dword ptr [eax + ebx]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fld dword ptr [edi]
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x10]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fld dword ptr [ecx + 4]
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 4]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fld dword ptr [edi + 4]
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x14]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fld dword ptr [ecx + 8]
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 8]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fld dword ptr [edi + 8]
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x18]
        mov eax, dword ptr [esp + 0x18]
        cmp dword ptr [eax + 4], -1
        je L_007CE277
        mov eax, dword ptr [edx + 4]
        fld dword ptr [ecx]
        mov ebx, dword ptr [edx]
        fchs
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fchs
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x30]
        mov eax, dword ptr [edx + 4]
        fld dword ptr [ecx + 4]
        mov ebx, dword ptr [edx]
        add eax, ebp
        fchs
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x24]
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax + 4]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fchs
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x34]
        mov eax, dword ptr [edx + 4]
        fld dword ptr [ecx + 8]
        mov ebx, dword ptr [edx]
        add eax, ebp
        fchs
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x28]
        mov eax, dword ptr [esp + 0x1c]
        fld dword ptr [eax + 8]
        mov eax, dword ptr [edx + 4]
        mov ebx, dword ptr [edx]
        fchs
        add eax, ebp
        shl eax, 6
        fstp dword ptr [eax + ebx + 0x38]
L_007CE277:
        cmp dword ptr [esi + 0x50], 0
        jne L_007CE287
        cmp dword ptr [esi + 0x1c], 0
        je L_007CE335
L_007CE287:
        fcomp dword ptr [esi + 0x10]
        fnstsw ax
        test ah, 0x44
        jnp L_007CE2B0
        mov edx, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        call ext_007CE060
        add esp, 8
        pop ebx
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret
L_007CE2B0:
        mov eax, dword ptr [edx + 0x38]
        fld dword ptr [esi + 0x58]
        add eax, ebp
        fchs
        mov ecx, eax
        shr ecx, 2
        and eax, 3
        lea eax, [eax + 4*ecx]
        mov ecx, dword ptr [edx + 0x34]
        fstp dword ptr [ecx + 4*eax]
        mov eax, dword ptr [edx + 0x44]
        fld dword ptr [esi + 0x58]
        add eax, ebp
        mov ecx, eax
        shr ecx, 2
        and eax, 3
        lea eax, [eax + 4*ecx]
        mov ecx, dword ptr [edx + 0x40]
        fstp dword ptr [ecx + 4*eax]
        cmp dword ptr [esi + 0x50], 0
        je L_007CE30A
        mov eax, dword ptr [edx + 0x20]
        fld dword ptr [esi + 0x54]
        add eax, ebp
        mov ecx, eax
        shr ecx, 2
        pop ebx
        and eax, 3
        lea eax, [eax + 4*ecx]
        mov ecx, dword ptr [edx + 0x1c]
        pop edi
        fstp dword ptr [ecx + 4*eax]
        pop esi
        mov al, 1
        pop ebp
        ret
L_007CE30A:
        mov eax, dword ptr [edx + 0x2c]
        fld dword ptr [esi + 0x14]
        fsub dword ptr [esi + 0x18]
        add eax, ebp
        mov ecx, eax
        shr ecx, 2
        pop ebx
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        and eax, 3
        lea eax, [eax + 4*ecx]
        mov ecx, dword ptr [edx + 0x28]
        pop edi
        fstp dword ptr [ecx + 4*eax]
        pop esi
        mov al, 1
        pop ebp
        ret
L_007CE335:
        pop ebx
        fstp st(0)
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret
    }
}

// [0x007CE340] sub_007CE340 (65 bytes)
extern "C" void ext_007CDF70();
extern "C" void ext_007CE160();
extern "C" __declspec(naked) void __fastcall fn_007CE340(void* self) {
    __asm {
        push esi
        mov esi, eax
        push edi
        mov eax, ebx
        call ext_007CDF70
        add esp, 4
        test al, al
        je fail
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x8]
        push edi
        push eax
        mov eax, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push edx
        push ebx
        mov edx, esi
        call ext_007CE160
        add esp, 0x14
        test al, al
        je fail
        mov al, 1
        pop esi
        ret
    fail:
        xor al, al
        pop esi
        ret
    }
}

// [0x007C4450] sub_007C4450 (528 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C4450(void) {
    __asm {
        sub esp, 18h
        mov eax, dword ptr [esp+20h]
        push ebx
        push ebp
        push esi
        mov ebp, dword ptr [eax]
        mov ecx, dword ptr [eax+4]
        mov eax, dword ptr [eax+8]
        mov dword ptr [esp+18h], ecx
        push edi
        xor ebx, ebx
        mov edx, dword ptr [eax+4]
        mov ecx, dword ptr [eax+8]
        mov esi, dword ptr [eax]
        mov dword ptr [esp+24h], edx
        mov edx, dword ptr [eax+10h]
        mov dword ptr [esp+20h], ecx
        mov dword ptr [esp+10h], edx
        mov edx, dword ptr [esp+2ch]
        mov ecx, 8
        xor eax, eax
        lea edi, [edx+0b34h]
        mov dword ptr [esp+30h], ebx
        rep stosd
        mov eax, dword ptr [edx+144ch]
        mov ecx, dword ptr [edx+4*eax+0b54h]
        mov word ptr [ebp+4*ecx+2], bx
        mov eax, dword ptr [edx+144ch]
        inc eax
        cmp eax, 23dh
        jge L_end
        lea ecx, [edx+4*eax+0b54h]
        mov dword ptr [esp+2ch], ecx
        mov ecx, 23dh
        sub ecx, eax
        add eax, ecx
        mov dword ptr [esp+18h], ecx
        mov dword ptr [esp+14h], eax
    L_loop1:
        mov eax, dword ptr [esp+2ch]
        xor edi, edi
        mov ecx, dword ptr [eax]
        xor eax, eax
        mov ax, word ptr [ebp+4*ecx+2]
        mov di, word ptr [ebp+4*eax+2]
        mov eax, edi
        mov edi, dword ptr [esp+10h]
        inc eax
        cmp eax, edi
        jle L_skip1
        inc ebx
        mov eax, edi
        mov dword ptr [esp+30h], ebx
    L_skip1:
        mov edi, dword ptr [esp+1ch]
        mov word ptr [ebp+4*ecx+2], ax
        cmp ecx, edi
        jg L_after
        mov edi, dword ptr [esp+20h]
        inc word ptr [edx+2*eax+0b34h]
        xor ebx, ebx
        cmp ecx, edi
        jl L_nt
        mov ebx, ecx
        sub ebx, edi
        mov edi, dword ptr [esp+24h]
        mov ebx, dword ptr [edi+4*ebx]
    L_nt:
        mov di, word ptr [ebp+4*ecx]
        add eax, ebx
        and edi, 0ffffh
        imul eax, edi
        add dword ptr [edx+16a0h], eax
        test esi, esi
        je L_noesi
        xor eax, eax
        mov ax, word ptr [esi+4*ecx+2]
        mov ecx, dword ptr [edx+16a4h]
        add eax, ebx
        imul eax, edi
        add ecx, eax
        mov dword ptr [edx+16a4h], ecx
    L_noesi:
        mov ebx, dword ptr [esp+30h]
    L_after:
        mov ecx, dword ptr [esp+2ch]
        mov eax, dword ptr [esp+18h]
        add ecx, 4
        dec eax
        mov dword ptr [esp+2ch], ecx
        mov dword ptr [esp+18h], eax
        jne L_loop1
        test ebx, ebx
        je L_end
        mov eax, dword ptr [esp+10h]
        lea esi, [eax-1]
        lea edi, [edx+2*eax+0b34h]
    L_A:
        mov eax, esi
        cmp word ptr [edx+2*eax+0b34h], 0
        lea ecx, [edx+2*eax+0b34h]
        jne L_A2
    L_A1:
        sub ecx, 2
        dec eax
        cmp word ptr [ecx], 0
        je L_A1
    L_A2:
        dec word ptr [edx+2*eax+0b34h]
        add word ptr [edx+2*eax+0b36h], 2
        dec word ptr [edi]
        sub ebx, 2
        test ebx, ebx
        jg L_A
        mov esi, dword ptr [esp+10h]
        test esi, esi
        je L_end
        mov dword ptr [esp+2ch], edi
    L_B:
        xor eax, eax
        mov ax, word ptr [edi]
        test eax, eax
        mov dword ptr [esp+30h], eax
        je L_Bnext
        mov ecx, dword ptr [esp+14h]
        lea ebx, [edx+4*ecx+0b54h]
    L_C0:
        mov edi, dword ptr [esp+14h]
        mov ecx, dword ptr [ebx-4]
        dec edi
        sub ebx, 4
        mov dword ptr [esp+14h], edi
        mov edi, dword ptr [esp+1ch]
        cmp ecx, edi
        mov dword ptr [esp+24h], ebx
        jg L_Cskip
        lea edi, [ebp+4*ecx+2]
        xor eax, eax
        mov ax, word ptr [edi]
        cmp eax, esi
        je L_Ceq
        mov ebx, esi
        sub ebx, eax
        xor eax, eax
        mov ax, word ptr [ebp+4*ecx]
        imul ebx, eax
        mov eax, dword ptr [edx+16a0h]
        add eax, ebx
        mov ebx, dword ptr [esp+24h]
        mov dword ptr [edx+16a0h], eax
        mov word ptr [edi], si
    L_Ceq:
        mov eax, dword ptr [esp+30h]
        dec eax
        mov dword ptr [esp+30h], eax
    L_Cskip:
        test eax, eax
        jne L_C0
    L_Bnext:
        mov edi, dword ptr [esp+2ch]
        dec esi
        sub edi, 2
        test esi, esi
        mov dword ptr [esp+2ch], edi
        jne L_B
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ret
    }
}

// [0x007CB630] sub_007CB630 (531 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();
extern "C" int mem_009453D8;
extern "C" int mem_0099D8A8;

extern "C" __declspec(naked) void __fastcall fn_007CB630(void* self) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        mov esi, dword ptr [esp + 0x34]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x30]
        fld dword ptr [eax]
        add esp, 0x8
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x30]
        fstp dword ptr [esi]
        fld dword ptr [ecx + 0x34]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [ecx + 0x38]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [ecx + 0x24]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st(0)
        fld dword ptr [ecx + 0x20]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(3)
        faddp st(1), st(0)
        fld dword ptr [ecx + 0x28]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(2)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fabs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fcomp qword ptr [mem_009453D8]
        fnstsw ax
        test ah, 0x41
        jne L_007CB837
        fldz
        fcomp st(1)
        fnstsw ax
        fld dword ptr [edi + 0x14]
        test ah, 0x5
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ecx + 0x20]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx + 0x24]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [ecx + 0x28]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        jp L_007CB715
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fadd dword ptr [esp + 0x1c]
        jmp L_007CB72C
    L_007CB715:
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fsub dword ptr [esp + 0x1c]
    L_007CB72C:
        fstp dword ptr [esi + 0x8]
        fld dword ptr [ecx + 0x20]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx + 0x24]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [ecx + 0x28]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x14]
        fsubp st(3), st(0)
        fxch st(2)
        fstp dword ptr [esp + 0x8]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0xc]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x8]
        fld st(0)
        fld dword ptr [esp + 0x10]
        fld st(0)
        fld st(2)
        fmulp st(3), st(0)
        fld st(4)
        fmulp st(5), st(0)
        fxch st(2)
        faddp st(4), st(0)
        fld st(1)
        fmulp st(2), st(0)
        fxch st(3)
        faddp st(1), st(0)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [mem_0099D8A8]
        fld dword ptr [esp + 0x28]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_007CB83B
        fstp st(2)
        fstp st(2)
        fstp st(1)
        call ext_006A7250
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld1
        fdivrp st(1), st(0)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fmul st(0), st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fxch st(2)
    L_007CB7F0:
        fld dword ptr [edi + 0x10]
        pop edi
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fld st(0)
        fmulp st(4), st(0)
        fxch st(3)
        fstp dword ptr [esp + 0x10]
        fld st(2)
        fmulp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fmulp st(1), st(0)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [esi]
        fstp dword ptr [esi]
        fld dword ptr [esi + 0x4]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esi + 0x8]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0x18
        ret
    L_007CB837:
        fstp st(0)
        jmp L_007CB7F0
    L_007CB83B:
        fstp st(0)
        fxch st(2)
        fxch st(1)
        jmp L_007CB7F0
    }
}

// [0x007C5D30] sub_007C5D30 (542 bytes)
extern "C" void ext_007D4AE0();
extern "C" void ext_007D4B30();
extern "C" void ext_007D4B50();

extern "C" __declspec(naked) void __fastcall fn_007C5D30(void* self) {
    __asm {
        fldz
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        or eax, -0x1
        fstp dword ptr [esi + 0x20c]
        fld dword ptr [mem_0099D148]
        xor ebp, ebp
        push edi
        fstp dword ptr [esi + 0x214]
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x1bc], eax
        mov dword ptr [esi + 0x1c0], eax
        mov dword ptr [esi + 0x1b8], eax
        lea eax, [esi + 0x184]
        push ebp
        push eax
        mov dword ptr [esi + 0x17c], edi
        mov dword ptr [esi], 0x64
        mov dword ptr [esi + 0x4], 0x110
        mov dword ptr [esi + 0x180], ebp
        mov dword ptr [esi + 0x210], ebp
        mov dword ptr [esi + 0x1c4], ebp
        call ext_007D4B30
        mov ecx, dword ptr [esi + 0x180]
        push ecx
        lea edx, [esi + 0x19c]
        push edx
        mov dword ptr [esi + 0x198], esi
        call ext_007D4B30
        push 0x7c9f40
        lea ebx, [esi + 0x1d4]
        push 0xf4240
        push ebx
        mov dword ptr [esi + 0x1b0], esi
        call ext_007D4B50
        push ebx
        call ext_007D4AE0
        add esp, 0x20
        add dword ptr [edi + 0x10c], 0x1
        fld dword ptr [edi + 0x1f8]
        fld1
        mov dword ptr [esi + 0xc], ebp
        fld st(0)
        lea eax, [esi + 0x20]
        fdivrp st(2), st
        mov ecx, 0x4
        fxch st(1)
        fstp dword ptr [esi + 0x8]
        fldz
    L_007C5DFC:
        fst dword ptr [eax - 0x10]
        add eax, 0x4
        sub ecx, 0x1
        fst dword ptr [eax - 0x4]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x4c]
        fst dword ptr [eax + 0x3c]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x7c]
        fst dword ptr [eax + 0x6c]
        fst dword ptr [eax + 0x5c]
        fst dword ptr [eax + 0x8c]
        fst dword ptr [eax + 0x9c]
        fst dword ptr [eax + 0xac]
        fst dword ptr [eax + 0xbc]
        fst dword ptr [eax + 0xcc]
        fst dword ptr [eax + 0xdc]
        fst dword ptr [eax + 0x12c]
        fst dword ptr [eax + 0x13c]
        jne L_007C5DFC
        fld1
        mov eax, esi
        fst dword ptr [esi + 0xd0]
        fld dword ptr [edi + 0x1f8]
        fld qword ptr [mem_009552D0]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fst dword ptr [esi + 0xa8]
        fst dword ptr [esi + 0x94]
        fstp dword ptr [esi + 0x80]
        fmul dword ptr [edi + 0x1f8]
        fdivp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fst dword ptr [esi + 0x78]
        fst dword ptr [esi + 0x64]
        fstp dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x100]
        fst dword ptr [esi + 0x108]
        fxch st(1)
        fst dword ptr [esi + 0x104]
        fst dword ptr [esi + 0x110]
        fxch st(1)
        fst dword ptr [esi + 0x114]
        fst dword ptr [esi + 0x118]
        fst dword ptr [esi + 0x11c]
        fst dword ptr [esi + 0x120]
        fst dword ptr [esi + 0x128]
        fst dword ptr [esi + 0x12c]
        fst dword ptr [esi + 0x130]
        fst dword ptr [esi + 0x134]
        fst dword ptr [esi + 0x13c]
        fst dword ptr [esi + 0x140]
        fst dword ptr [esi + 0x144]
        fst dword ptr [esi + 0x148]
        fxch st(1)
        fst dword ptr [esi + 0x124]
        fst dword ptr [esi + 0x138]
        fstp dword ptr [esi + 0x14c]
        fst dword ptr [esi + 0x170]
        fst dword ptr [esi + 0x174]
        fst dword ptr [esi + 0x178]
        fst dword ptr [esi + 0x1cc]
        fstp dword ptr [esi + 0x1d0]
        fld dword ptr [edi + 0x1f8]
        pop edi
        mov dword ptr [esi + 0x1b4], ebp
        fstp dword ptr [esi + 0x1c8]
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007C6C30] sub_007C6C30 (39 bytes)
extern "C" void ext_007C5D30();
extern "C" __declspec(naked) void __cdecl fn_007C6C30(char* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        lea eax, [esi + 0x114]
        push eax
        call dword ptr [mem_00AB28C4]
        add esp, 4
        test eax, eax
        jne short L_call
        pop esi
        ret
    L_call:
        push esi
        push eax
        call ext_007C5D30
        add esp, 8
        pop esi
        ret
    }
}

extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();

// [0x007CA8E0] sub_007CA8E0 (559 bytes)
extern "C" __declspec(naked) int __cdecl fn_007CA8E0(void* a0, void* a1) {
    __asm {
        sub esp, 18h
        push ebx
        push esi
        mov esi, dword ptr [esp+24h]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov edi, eax
        call ext_007D48A0
        fld dword ptr [eax+10h]
        fabs
        lea edx, [esi+8]
        fstp dword ptr [esp+30h]
        add esp, 8
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+14h]
        fld dword ptr [eax]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+10h]
        faddp st(1), st
        fld dword ptr [eax+20h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+18h]
        faddp st(1), st
        fstp dword ptr [esp+0ch]
        fld dword ptr [eax+14h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+14h]
        fld dword ptr [eax+4]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+10h]
        faddp st(1), st
        fld dword ptr [eax+24h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+18h]
        faddp st(1), st
        fstp dword ptr [esp+10h]
        fld dword ptr [eax+18h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+14h]
        fld dword ptr [eax+8]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+10h]
        faddp st(1), st
        fld dword ptr [eax+28h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+18h]
        faddp st(1), st
        fstp dword ptr [esp+14h]
        fld dword ptr [eax+30h]
        fld dword ptr [esp+0ch]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edx]
        fld dword ptr [eax+34h]
        fld dword ptr [esp+10h]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [edx+4]
        fld dword ptr [eax+38h]
        fld dword ptr [esp+14h]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        lea ebx, [esi+14h]
        fstp dword ptr [edx+8]
        fld dword ptr [eax+30h]
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [ebx]
        fadd dword ptr [eax+34h]
        fstp dword ptr [ebx+4]
        fadd dword ptr [eax+38h]
        mov eax, dword ptr [esp+2ch]
        test eax, eax
        fstp dword ptr [ebx+8]
        je L_done_7CA8E0
        fld dword ptr [eax+10h]
        lea ecx, [esp+18h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+14h]
        fld dword ptr [eax]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+10h]
        faddp st(1), st
        fld dword ptr [eax+20h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+18h]
        faddp st(1), st
        fstp dword ptr [esp+0ch]
        fld dword ptr [eax+14h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+14h]
        fld dword ptr [eax+4]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+10h]
        faddp st(1), st
        fld dword ptr [eax+24h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+18h]
        faddp st(1), st
        fstp dword ptr [esp+10h]
        fld dword ptr [eax+18h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+14h]
        fld dword ptr [eax+8]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+10h]
        faddp st(1), st
        fld dword ptr [eax+28h]
        fabs
        fstp dword ptr [esp+28h]
        fld dword ptr [esp+28h]
        fmul dword ptr [edi+18h]
        faddp st(1), st
        fstp dword ptr [esp+14h]
        fld dword ptr [eax+30h]
        fld dword ptr [esp+0ch]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp+18h]
        fld dword ptr [eax+34h]
        fld dword ptr [esp+10h]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp+1ch]
        fld dword ptr [eax+38h]
        fld dword ptr [esp+14h]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp+20h]
        fld dword ptr [eax+30h]
        faddp st(3), st
        fxch st(2)
        fstp dword ptr [esp+0ch]
        fadd dword ptr [eax+34h]
        fstp dword ptr [esp+10h]
        fadd dword ptr [eax+38h]
        fstp dword ptr [esp+14h]
        mov esi, edx
        call ext_007CA280
        lea ecx, [esp+0ch]
        mov edx, ebx
        mov esi, ebx
        call ext_007CB8D0
L_done_7CA8E0:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 18h
        ret
    }
}

extern "C" void ext_007DE8C0();

// [0x007C8BC0] sub_007C8BC0 (70 bytes)
extern "C" __declspec(naked) int __cdecl fn_007C8BC0(int* s) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jne     L_nonnull
    L_ret0:
        xor     eax, eax
        pop     esi
        ret
    L_nonnull:
        mov     eax, dword ptr [esi + 0x20]
        push    edi
        push    eax
        call    ext_007DE8C0
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ecx + 0x2c]
        push    edx
        movzx   edi, al
        call    ext_007DCED0
        add     esp, 0x4
        test    edi, edi
        pop     edi
        je      L_ret0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi + 0x20], 0xffffffff
        mov     eax, 0x1
        pop     esi
        ret
    }
}

// [0x007C8D00] sub_007C8D00 (104 bytes)
extern "C" void ext_007C8BC0();
extern "C" void ext_007C8C70();
extern "C" void ext_007C8C90();
extern "C" void ext_007DD040();

extern "C" __declspec(naked) void __cdecl fn_007C8D00(void* arg0) {
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        lea     eax, [esp + 4]
        push    eax
        push    esi
        call    ext_007C8C70
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        push    esi
        call    ext_007C8C90
        add     esp, 0x14
        test    eax, eax
        je      short done_loop
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    loop_top:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ext_007C8BC0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x0c]
        push    edx
        push    esi
        call    ext_007C8C90
        add     esp, 0x10
        test    eax, eax
        jne     short loop_top
    done_loop:
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        call    ext_007DCED0
        add     esp, 4
        mov     ecx, esi
        pop     esi
        add     esp, 8
        jmp     ext_007DD040
    }
}

// [0x007CE5E0] sub_007CE5E0 (799 bytes)
extern "C" void ext_007CE490();
extern "C" int mem_00993830;
extern "C" __declspec(naked) void __cdecl fn_007CE5E0(void* self) {
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x3c]
        push    edi
        push    esi
        push    0x0
        call    ext_007CE490
        push    edi
        push    esi
        push    0x1
        call    ext_007CE490
        push    edi
        push    esi
        push    0x2
        call    ext_007CE490
        fld1
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        shl     eax, 0x6
        fst     dword ptr [eax + ecx]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi]
        shl     edx, 0x6
        fst     dword ptr [edx + eax + 0x44]
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esp + 0x44]
        shl     ecx, 0x6
        fstp    dword ptr [ecx + edx + 0x88]
        mov     ecx, dword ptr [esp + 0x4c]
        fld     dword ptr [ecx]
        mov     edx, dword ptr [esi]
        fsub    dword ptr [eax]
        mov     edi, dword ptr [esp + 0x50]
        add     esp, 0x24
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [ecx + 0x4]
        fsub    dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ecx + 0x8]
        fsub    dword ptr [eax + 0x8]
        mov     eax, dword ptr [esi + 0x4]
        shl     eax, 0x6
        add     eax, edx
        fstp    dword ptr [esp + 0x14]
        fldz
        fst     dword ptr [eax + 0x10]
        fld     dword ptr [esp + 0x14]
        fst     dword ptr [eax + 0x14]
        fld     dword ptr [esp + 0x10]
        fld     st(0)
        fchs
        fstp    dword ptr [eax + 0x18]
        fxch    st(1)
        fchs
        fstp    dword ptr [eax + 0x50]
        fxch    st(1)
        fst     dword ptr [eax + 0x54]
        fld     dword ptr [esp + 0xc]
        fst     dword ptr [eax + 0x58]
        fxch    st(2)
        fstp    dword ptr [eax + 0x90]
        fxch    st(1)
        fchs
        fstp    dword ptr [eax + 0x94]
        fst     dword ptr [eax + 0x98]
        mov     ebx, dword ptr [esi + 0x2c]
        fld     dword ptr [ecx]
        mov     eax, ebx
        fsub    dword ptr [edi]
        cdq
        and     edx, 0x3
        add     eax, edx
        fstp    dword ptr [esp + 0x1c]
        sar     eax, 0x2
        and     ebx, 0x80000003
        fld     dword ptr [esp + 0x1c]
        jns     L_7CE6CF
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7CE6CF:
        mov     edx, dword ptr [esi + 0x28]
        lea     eax, [ebx + 4*eax]
        fstp    dword ptr [edx + 4*eax]
        mov     eax, dword ptr [esi + 0x2c]
        fld     dword ptr [ecx + 0x4]
        lea     ebx, [eax + 0x1]
        fsub    dword ptr [edi + 0x4]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7CE704
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7CE704:
        mov     edx, dword ptr [esi + 0x28]
        lea     eax, [ebx + 4*eax]
        fstp    dword ptr [edx + 4*eax]
        mov     eax, dword ptr [esi + 0x2c]
        fld     dword ptr [ecx + 0x8]
        lea     ebx, [eax + 0x2]
        fsub    dword ptr [edi + 0x8]
        mov     eax, ebx
        cdq
        and     edx, 0x3
        add     eax, edx
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        sar     eax, 0x2
        and     ebx, 0x80000003
        jns     L_7CE739
        dec     ebx
        or      ebx, -0x4
        inc     ebx
    L_7CE739:
        cmp     dword ptr [esp + 0x30], 0x0
        mov     ecx, dword ptr [esi + 0x28]
        lea     eax, [ebx + 4*eax]
        fstp    dword ptr [ecx + 4*eax]
        je      L_7CE800
        mov     edx, dword ptr [esi + 0x4]
        fld     dword ptr [mem_0093F7B8]
        mov     eax, dword ptr [esi]
        shl     edx, 0x6
        fst     dword ptr [edx + eax + 0x20]
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi]
        shl     ecx, 0x6
        fst     dword ptr [ecx + edx + 0x64]
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        shl     eax, 0x6
        fstp    dword ptr [eax + ecx + 0xa8]
        mov     eax, dword ptr [esp + 0x24]
        fld     dword ptr [edi]
        mov     edx, dword ptr [esi + 0x4]
        fsub    dword ptr [eax]
        shl     edx, 0x6
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [edi + 0x4]
        fsub    dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [edi + 0x8]
        fsub    dword ptr [eax + 0x8]
        mov     eax, dword ptr [esi]
        add     eax, edx
        fstp    dword ptr [esp + 0x14]
        fst     dword ptr [eax + 0x30]
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fld     qword ptr [mem_00993830]
        fmul    st(1), st
        fxch    st(1)
        fstp    dword ptr [eax + 0x34]
        fld     dword ptr [esp + 0x10]
        fld     st(0)
        fchs
        fmul    st, st(2)
        fstp    dword ptr [eax + 0x38]
        fxch    st(2)
        fchs
        fmul    st, st(1)
        fstp    dword ptr [eax + 0x70]
        fxch    st(2)
        fst     dword ptr [eax + 0x74]
        fld     dword ptr [esp + 0xc]
        fld     st(0)
        fmul    st, st(4)
        fstp    dword ptr [eax + 0x78]
        fxch    st(2)
        fmul    st, st(3)
        fstp    dword ptr [eax + 0xb0]
        fxch    st(1)
        fchs
        fmulp   st(2), st
        fxch    st(1)
        fstp    dword ptr [eax + 0xb4]
        fstp    dword ptr [eax + 0xb8]
        jmp     L_7CE802
    L_7CE800:
        fstp    st(0)
    L_7CE802:
        mov     ecx, dword ptr [esi + 0x38]
        mov     eax, ecx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ecx, 0x80000003
        jns     L_7CE81D
        dec     ecx
        or      ecx, -0x4
        inc     ecx
    L_7CE81D:
        mov     edx, dword ptr [esi + 0x34]
        fld     dword ptr [mem_0093C1A8]
        lea     ecx, [ecx + 4*eax]
        fst     dword ptr [edx + 4*ecx]
        mov     ecx, dword ptr [esi + 0x44]
        mov     eax, ecx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ecx, 0x80000003
        jns     L_7CE847
        dec     ecx
        or      ecx, -0x4
        inc     ecx
    L_7CE847:
        fld     dword ptr [mem_0099D148]
        lea     eax, [ecx + 4*eax]
        mov     ecx, dword ptr [esi + 0x40]
        fst     dword ptr [ecx + 4*eax]
        mov     eax, dword ptr [esi + 0x38]
        lea     ecx, [eax + 0x1]
        mov     eax, ecx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ecx, 0x80000003
        jns     L_7CE874
        dec     ecx
        or      ecx, -0x4
        inc     ecx
    L_7CE874:
        lea     edx, [ecx + 4*eax]
        fxch    st(1)
        mov     eax, dword ptr [esi + 0x34]
        fst     dword ptr [eax + 4*edx]
        mov     eax, dword ptr [esi + 0x44]
        lea     ecx, [eax + 0x1]
        mov     eax, ecx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ecx, 0x80000003
        jns     L_7CE89D
        dec     ecx
        or      ecx, -0x4
        inc     ecx
    L_7CE89D:
        mov     edx, dword ptr [esi + 0x40]
        fxch    st(1)
        lea     ecx, [ecx + 4*eax]
        fst     dword ptr [edx + 4*ecx]
        mov     eax, dword ptr [esi + 0x38]
        lea     ecx, [eax + 0x2]
        mov     eax, ecx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ecx, 0x80000003
        jns     L_7CE8C6
        dec     ecx
        or      ecx, -0x4
        inc     ecx
    L_7CE8C6:
        lea     eax, [ecx + 4*eax]
        fxch    st(1)
        mov     ecx, dword ptr [esi + 0x34]
        fstp    dword ptr [ecx + 4*eax]
        mov     eax, dword ptr [esi + 0x44]
        lea     ecx, [eax + 0x2]
        mov     eax, ecx
        cdq
        and     edx, 0x3
        add     eax, edx
        sar     eax, 0x2
        and     ecx, 0x80000003
        jns     L_7CE8EF
        dec     ecx
        or      ecx, -0x4
        inc     ecx
    L_7CE8EF:
        lea     edx, [ecx + 4*eax]
        mov     eax, dword ptr [esi + 0x40]
        pop     edi
        fstp    dword ptr [eax + 4*edx]
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }
}

// [0x007CB050] sub_007CB050 (809 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();

extern "C" __declspec(naked) void __fastcall fn_007CB050(void* self) {
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x3c]
        push    esi
        push    edi
        push    ebp
        call    ext_007D5AE0
        push    ebp
        mov     edi, eax
        call    ext_007D48A0
        mov     ebx, eax
        fld     dword ptr [ebx + 0x20]
        add     esp, 8
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [ebx + 0x24]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [ebx + 0x28]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x44]
        fmul    st(0), st
        fld1
        fld     st(0)
        fsubrp  st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st
        fsubr   st, st(1)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fmul    st(0), st
        fsubr   st, st(1)
        fstp    dword ptr [esp + 0x24]
        fldz
        fld     dword ptr [esp + 0x20]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007CB0D7
        fstp    st(2)
        fstp    st(0)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x10]
        fld1
        fldz
        jmp     L_007CB0DD
    L_007CB0D7:
        fstp    st(0)
        fst     dword ptr [esp + 0x10]
    L_007CB0DD:
        fld     dword ptr [esp + 0x18]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007CB105
        fstp    st(2)
        fstp    st(0)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x18]
        fld1
        fldz
        jmp     L_007CB10B
    L_007CB105:
        fstp    st(0)
        fst     dword ptr [esp + 0x18]
    L_007CB10B:
        fld     dword ptr [esp + 0x24]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007CB133
        fstp    st(2)
        fstp    st(0)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x20]
        fld1
        fldz
        jmp     L_007CB139
    L_007CB133:
        fstp    st(0)
        fst     dword ptr [esp + 0x20]
    L_007CB139:
        fld     dword ptr [esp + 0x44]
        lea     esi, [ebp + 8]
        fabs
        add     ebp, 0x14
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [edi + 0x14]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x14]
        fabs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [edi + 0x14]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x1c]
        fabs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [edi + 0x14]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [ebx + 0x30]
        fld     dword ptr [esp + 0x28]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esi]
        fld     dword ptr [ebx + 0x34]
        fld     dword ptr [esp + 0x2c]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esi + 4]
        fld     dword ptr [ebx + 0x38]
        fld     dword ptr [esp + 0x30]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esi + 8]
        fld     dword ptr [ebx + 0x30]
        faddp   st(3), st
        fxch    st(2)
        fstp    dword ptr [ebp]
        fadd    dword ptr [ebx + 0x34]
        fstp    dword ptr [ebp + 4]
        fadd    dword ptr [ebx + 0x38]
        mov     ebx, dword ptr [esp + 0x48]
        test    ebx, ebx
        fstp    dword ptr [ebp + 8]
        je      L_007CB368
        fld     dword ptr [ebx + 0x20]
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [ebx + 0x24]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [ebx + 0x28]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x44]
        fmul    st(0), st
        fsubr   st, st(2)
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x20]
        fmul    st(0), st
        fsubr   st, st(2)
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x48]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007CB249
        fstp    st(1)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x48]
        fldz
        jmp     L_007CB24F
    L_007CB249:
        fstp    st(0)
        fst     dword ptr [esp + 0x48]
    L_007CB24F:
        fld     dword ptr [esp + 0x24]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007CB273
        fstp    st(1)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x1c]
        fldz
        jmp     L_007CB279
    L_007CB273:
        fstp    st(0)
        fst     dword ptr [esp + 0x1c]
    L_007CB279:
        fld     dword ptr [esp + 0x14]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007CB297
        fstp    st(1)
        call    ext_006A7250
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x24]
        jmp     L_007CB299
    L_007CB297:
        fstp    st(0)
    L_007CB299:
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x34]
        fld     dword ptr [esp + 0x44]
        mov     edx, esi
        fabs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [edi + 0x14]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [esp + 0x48]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x20]
        fabs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [edi + 0x14]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x18]
        fabs
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [edi + 0x14]
        fld     dword ptr [edi + 0x10]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [ebx + 0x30]
        fld     dword ptr [esp + 0x28]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [ebx + 0x34]
        fld     dword ptr [esp + 0x2c]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ebx + 0x38]
        fld     dword ptr [esp + 0x30]
        fld     st(0)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [ebx + 0x30]
        faddp   st(3), st
        fxch    st(2)
        fstp    dword ptr [esp + 0x28]
        fadd    dword ptr [ebx + 0x34]
        fstp    dword ptr [esp + 0x2c]
        fadd    dword ptr [ebx + 0x38]
        fstp    dword ptr [esp + 0x30]
        call    ext_007CA280
        lea     ecx, [esp + 0x28]
        mov     edx, ebp
        mov     esi, ebp
        call    ext_007CB8D0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x30
        ret
    L_007CB368:
        pop     edi
        fstp    st(1)
        pop     esi
        fstp    st(0)
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x30
        ret
    }
}

// [0x007C7330] sub_007C7330 (857 bytes)
extern "C" void ext_007D4AE0();
extern "C" void ext_007D4B50();
extern "C" void ext_007D60B0();
extern "C" void ext_007D6220();
extern "C" void ext_007D7A20();
extern "C" void ext_007D7A30();
extern "C" void fn_007C9F40();
extern "C" void fn_007D70A0();
extern "C" int mem_00943350;
extern "C" int mem_00AB28B8;
extern "C" int mem_0092A280;
extern "C" int mem_00940694;
extern "C" float mem_00968ED8;
extern "C" int mem_0097CB18;
extern "C" int mem_00958CC8;
extern "C" int mem_0099D180;
extern "C" int mem_0093F790;
extern "C" int mem_00932470;
extern "C" int mem_009499C8;
extern "C" int mem_0099D178;
extern "C" int mem_00999B48;
extern "C" int mem_0099D170;
extern "C" int mem_0099D16C;

extern "C" __declspec(naked) void __fastcall fn_007C7330(void* self) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    edi
        xor     edi, edi
        cmp     ebx, edi
        jne     L_007C7341
        pop     edi
        xor     eax, eax
        pop     ebx
        ret
    L_007C7341:
        fld     dword ptr [mem_00943350]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        fst     dword ptr [esi + 0x204]
        mov     dword ptr [esi + 0x5d0], edi
        fstp    dword ptr [esi + 0x200]
        mov     dword ptr [esi + 0x5d4], 0x1
        fld     dword ptr [esp + 0x1c]
        fst     dword ptr [esi + 0x1f4]
        fld     dword ptr [esp + 0x20]
        fst     dword ptr [esi + 0x1f8]
        fld     st(1)
        fmul    st(0), st
        fmulp   st(2), st
        fdivrp  st(1), st
        fstp    dword ptr [esi + 0x1fc]
        call    ext_007D7A30
        mov     dword ptr [esi + 0x290], eax
        mov     eax, dword ptr [esi + 0x5f0]
        push    eax
        lea     ecx, [esi + 0xa8]
        push    0x10
        push    ecx
        call    ext_007D6220
        mov     edx, dword ptr [esi + 0x5f0]
        push    edx
        lea     eax, [esi + 0xc8]
        push    0x10
        push    eax
        call    ext_007D6220
        mov     ecx, dword ptr [esi + 0x5f0]
        push    ecx
        lea     edx, [esi + 0xe8]
        push    0x10
        push    edx
        call    ext_007D6220
        mov     eax, dword ptr [esi + 0x5f0]
        push    eax
        lea     ecx, [esi + 0x134]
        push    0x10
        push    ecx
        mov     dword ptr [esi + 0x10c], edi
        mov     dword ptr [esi + 0x110], edi
        mov     dword ptr [esi + 0x108], ebx
        call    ext_007D6220
        mov     edx, dword ptr [esi + 0x5f0]
        mov     eax, dword ptr [esi + 0x108]
        push    edx
        push    0x10
        push    0x220
        push    eax
        lea     ecx, [esi + 0x114]
        push    ecx
        call    dword ptr [mem_00AB28B8]
        mov     edx, dword ptr [esi + 0x5f0]
        mov     eax, dword ptr [esp + 0x5c]
        add     esp, 0x44
        push    edx
        push    0x10
        push    0x210
        push    eax
        mov     dword ptr [esi + 0x154], eax
        lea     eax, [esi + 0x15c]
        push    eax
        mov     dword ptr [esi + 0x158], edi
        call    dword ptr [mem_00AB28B8]
        push    offset fn_007C9F40
        push    0xf4240
        push    esi
        call    ext_007D4B50
        push    esi
        call    ext_007D4AE0
        push    offset fn_007C9F40
        lea     ebx, [esi + 0x70]
        push    0xf4240
        push    ebx
        call    ext_007D4B50
        push    ebx
        call    ext_007D4AE0
        lea     ebx, [esi + 0x38]
        push    offset fn_007C9F40
        push    0xf4240
        push    ebx
        call    ext_007D4B50
        add     esp, 0x40
        push    ebx
        call    ext_007D4AE0
        mov     ecx, dword ptr [esi + 0x5f0]
        push    ecx
        lea     edx, [esi + 0x1bc]
        push    edi
        push    edx
        call    ext_007D6220
        mov     eax, dword ptr [esi + 0x5f0]
        push    eax
        lea     ecx, [esi + 0x19c]
        push    edi
        push    ecx
        call    ext_007D6220
        mov     dword ptr [esi + 0x250], edi
        mov     dword ptr [esi + 0x24c], edi
        mov     dword ptr [esi + 0x258], edi
        mov     dword ptr [esi + 0x254], edi
        call    ext_007D7A20
        fld     dword ptr [esi + 0x1f8]
        fdivr   qword ptr [mem_0092A280]
        mov     dword ptr [esi + 0x25c], eax
        mov     eax, 0x15e
        mov     dword ptr [esi + 0x228], 0x7ffffffc
        mov     dword ptr [esi + 0x210], 0x1
        mov     dword ptr [esi + 0x248], edi
        mov     dword ptr [esi + 0x1ec], edi
        mov     dword ptr [esi + 0x1f0], edi
        mov     dword ptr [esi + 0x26c], 0xa
        mov     dword ptr [esi + 0x274], eax
        mov     dword ptr [esi + 0x278], eax
        mov     dword ptr [esi + 0x270], edi
        mov     dword ptr [esi + 0x5c8], edi
        mov     dword ptr [esi + 0x5c4], offset fn_007D70A0
        fstp    dword ptr [esi + 0x264]
        fld     dword ptr [mem_00940694]
        fst     dword ptr [esi + 0x268]
        fst     dword ptr [esi + 0x208]
        fld     dword ptr [mem_00968ED8]
        fst     dword ptr [esi + 0x20c]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_0097CB18]
        fstp    dword ptr [esi + 0x284]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_00958CC8]
        fstp    dword ptr [esi + 0x27c]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_0099D180]
        fstp    dword ptr [esi + 0x280]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_0093F790]
        fstp    dword ptr [esi + 0x214]
        fstp    dword ptr [esi + 0x218]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_00932470]
        fstp    dword ptr [esi + 0x21c]
        fld     dword ptr [mem_009499C8]
        fstp    dword ptr [esi + 0x220]
        fstp    dword ptr [esi + 0x224]
        fldz
        fst     dword ptr [esi + 0x22c]
        fld     dword ptr [mem_0099D178]
        fstp    dword ptr [esi + 0x230]
        fld     dword ptr [mem_00943350]
        fstp    dword ptr [esi + 0x234]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_00999B48]
        fstp    dword ptr [esi + 0x23c]
        fld     dword ptr [esi + 0x1f4]
        fmul    qword ptr [mem_0099D170]
        fstp    dword ptr [esi + 0x240]
        fld     dword ptr [mem_0099D16C]
        fst     dword ptr [esi + 0x238]
        fstp    dword ptr [esi + 0x244]
        fst     dword ptr [esi + 0x1dc]
        fst     dword ptr [esi + 0x1e0]
        fstp    dword ptr [esi + 0x1e4]
        push    0x1
        push    esi
        mov     dword ptr [esi + 0x5cc], edi
        mov     dword ptr [esi + 0x294], edi
        call    ext_007D60B0
        mov     eax, 0x100000
        add     esp, 0x24
        mov     dword ptr [esi + 0x5d8], eax
        mov     dword ptr [esi + 0x5dc], eax
        mov     dword ptr [esi + 0x5e4], eax
        mov     dword ptr [esi + 0x5e0], eax
        mov     dword ptr [esi + 0x5e8], eax
        mov     dword ptr [esi + 0x5ec], eax
        mov     eax, esi
        pop     esi
        pop     edi
        pop     ebx
        ret
    }
}

// [0x007C8490] sub_007C8490 (68 bytes)
extern "C" void ext_007C7330();

extern "C" __declspec(naked) void __cdecl fn_007C8490(int a1, int a2, float a3, float a4, void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        push 0x5f4
        call eax
        add esp, 4
        test eax, eax
        jne L_have
        pop esi
        ret
    L_have:
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 8]
        sub esp, 8
        fstp dword ptr [esp + 4]
        mov dword ptr [eax + 0x5f0], esi
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push ecx
        push edx
        push eax
        call ext_007C7330
        add esp, 0x14
        pop esi
        ret
    }
}

// [0x007CBD10] sub_007CBD10 (1062 bytes)
extern "C" void ext_007CB970();
extern "C" void ext_007CB9C0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_007CBD10(void* self) {
    __asm {
        sub	esp, 0x2c
        push	ebx
        mov	ebx, dword ptr [esp + 0x34]
        cmp	byte ptr [ebx], 0x5
        jne	L_done
        push	esi
        push	edi
        push	ebx
        call ext_007CB970
        fstp	dword ptr [esp + 0x40]
        push	ebx
        call ext_007CB9C0
        fmul	qword ptr [mem_00993828]
        mov	esi, dword ptr [esp + 0x48]
        add	esp, 0x8
        fstp	dword ptr [esp + 0xc]
        mov	edi, 0x99db10
                _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop1:
        fld	dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0xc]
        fld	dword ptr [edi - 0x8]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [edi - 0x4]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [edi]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fsub	st, st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x30]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esi + 0x14]
        fmul	st, st(2)
        fld	dword ptr [esi + 0x4]
        fmul	st, st(4)
        faddp	st(1), st
        fld	dword ptr [esi + 0x24]
        fmul	st, st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esi + 0x18]
        fmulp	st(2), st
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [esi + 0x28]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [edi + 0x4]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [edi + 0x8]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [edi + 0xc]
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x10]
        fsubr	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x30]
        fstp	dword ptr [esp + 0x20]
        mov	eax, dword ptr [ebx + 0xc]
        fld	dword ptr [esi + 0x14]
        lea	edx, [esp + 0x20]
        fmul	st, st(2)
        fld	dword ptr [esi + 0x4]
        fmul	st, st(4)
        faddp	st(1), st
        fld	dword ptr [esi + 0x24]
        fmul	st, st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esi + 0x18]
        fmulp	st(2), st
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [esi + 0x28]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x28]
        mov	eax, dword ptr [eax + 0xb0]
        mov	ecx, dword ptr [eax + 0x24]
        push	ecx
        push	edx
        mov	edx, dword ptr [eax + 0x20]
        lea	ecx, [esp + 0x34]
        push	ecx
        push	0x4
        call	edx
        add	edi, 0x18
        add	esp, 0x10
        cmp	edi, 0x99dc90
        jl	L_loop1
        mov	edi, 0x99d990
                _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
L_loop2:
        fld	dword ptr [edi - 0x8]
        fld	dword ptr [esp + 0x3c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [edi - 0x4]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [edi]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0xc]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x30]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esi + 0x4]
        fmul	st, st(3)
        fld	dword ptr [esi + 0x14]
        fmul	st, st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x24]
        fmul	st, st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esi + 0x18]
        fmulp	st(2), st
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [esi + 0x28]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [edi + 0x4]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [edi + 0x8]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [edi + 0xc]
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x10]
        fadd	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(2), st
        mov	eax, dword ptr [ebx + 0xc]
        fxch	st(2)
        lea	edx, [esp + 0x2c]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x30]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esi + 0x4]
        fmul	st, st(3)
        fld	dword ptr [esi + 0x14]
        fmul	st, st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x24]
        fmul	st, st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esi + 0x18]
        fmulp	st(2), st
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [esi + 0x28]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x34]
        mov	eax, dword ptr [eax + 0xb0]
        mov	ecx, dword ptr [eax + 0x24]
        push	ecx
        push	edx
        mov	edx, dword ptr [eax + 0x20]
        lea	ecx, [esp + 0x28]
        push	ecx
        push	0x4
        call	edx
        add	edi, 0x18
        add	esp, 0x10
        cmp	edi, 0x99db10
        jl	L_loop2
        mov	edi, 0x99d8cc
L_loop3:
        fld	dword ptr [edi - 0x4]
        fld	dword ptr [esp + 0x3c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x14]
        fld	st(0)
        fmul	dword ptr [edi]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [edi + 0x4]
        fld	dword ptr [esp + 0xc]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x30]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esi + 0x14]
        fmul	st, st(2)
        fld	dword ptr [esi + 0x4]
        fmul	st, st(4)
        faddp	st(1), st
        fld	dword ptr [esi + 0x24]
        fmul	st, st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esi + 0x18]
        fmulp	st(2), st
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [esi + 0x28]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [edi + 0x8]
        fmul	st, st(2)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [edi + 0xc]
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x18]
        fmul	dword ptr [edi + 0x10]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esi + 0x10]
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [esi]
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fld	dword ptr [esi + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x30]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esi + 0x14]
        fmul	st, st(2)
        mov	eax, dword ptr [ebx + 0xc]
        fld	dword ptr [esi + 0x4]
        lea	edx, [esp + 0x2c]
        fmul	st, st(4)
        faddp	st(1), st
        fld	dword ptr [esi + 0x24]
        fmul	st, st(2)
        faddp	st(1), st
        fadd	dword ptr [esi + 0x34]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esi + 0x18]
        fmulp	st(2), st
        fld	dword ptr [esi + 0x8]
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	dword ptr [esi + 0x28]
        faddp	st(1), st
        fadd	dword ptr [esi + 0x38]
        fstp	dword ptr [esp + 0x34]
        mov	eax, dword ptr [eax + 0xb0]
        mov	ecx, dword ptr [eax + 0x24]
        push	ecx
        push	edx
        mov	edx, dword ptr [eax + 0x20]
        lea	ecx, [esp + 0x28]
        push	ecx
        push	0x4
        call	edx
        add	edi, 0x18
        add	esp, 0x10
        cmp	edi, 0x99d98c
        jl	L_loop3
        pop	edi
        pop	esi
L_done:
        pop	ebx
        add	esp, 0x2c
        ret
    }
}

extern "C" void ext_007DDEE0();

// [0x007C8B90] sub_007C8B90 (31 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C8B90(void* arg1) {
    __asm {
        fldz
        push esi
        mov esi, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_007DDEE0
        mov eax, dword ptr [esi + 0x2c]
        pop esi
        mov dword ptr [esp + 0x4], eax
        jmp ext_007DCED0
    }
}

// [0x007C84E0] sub_007C84E0 (424 bytes)
extern "C" void __cdecl ext_006A6E8C();
extern "C" void __cdecl ext_007D7A20();
extern "C" void __cdecl ext_007DAE10();
extern "C" void __cdecl ext_007DAE50();
extern "C" void __cdecl ext_007DB0B0();
extern "C" void __cdecl ext_007DB190();
extern "C" void __cdecl ext_007DB4C0();
extern "C" void __cdecl ext_007DB520();
extern "C" void __cdecl ext_007DC860();
extern "C" void __cdecl ext_007DC880();
extern "C" int mem_00AB28B8;
extern "C" int mem_0099D220;
extern "C" __declspec(naked) void __fastcall fn_007C84E0(void* self) {
    __asm {
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x54]
        mov eax, dword ptr [edi]
        push 0xb4
        call eax
        mov esi, eax
        xor ebx, ebx
        mov dword ptr [esi + 0xb0], edi
        mov dword ptr [esi + 0x24], ebx
        call ext_007D7A20
        mov dword ptr [esi + 0xac], eax
        mov eax, dword ptr [esp + 0x48]
        add eax, 0x9
        lea ecx, [eax + 4*eax]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], ebx
        mov edx, dword ptr [edi]
        push ecx
        call edx
        mov ecx, dword ptr [esi]
        lea ecx, [ecx + 4*ecx]
        add ecx, ecx
        add ecx, ecx
        add ecx, ecx
        push ecx
        push ebx
        push eax
        mov dword ptr [esi + 0x20], eax
        call ext_006A6E8C
        mov edx, dword ptr [esp + 0x5c]
        push edi
        push ebx
        push 0x80
        push edx
        lea eax, [esi + 0x4c]
        push eax
        call dword ptr [mem_00AB28B8]
        mov ecx, dword ptr [esp + 0x74]
        push edi
        push ebx
        push 0x38
        push ecx
        lea edx, [esi + 0x6c]
        push edx
        call dword ptr [mem_00AB28B8]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [edi]
        imul eax, eax
        lea eax, [eax + 2*eax]
        add eax, eax
        add eax, eax
        add eax, eax
        push eax
        call ecx
        mov ecx, dword ptr [esi]
        imul ecx, ecx
        lea edx, [ecx + 2*ecx]
        add edx, edx
        add edx, edx
        add esp, 0x40
        add edx, edx
        push edx
        push ebx
        push eax
        mov dword ptr [esi + 0x28], eax
        call ext_006A6E8C
        mov dword ptr [esi + 0x2c], ebx
        mov eax, dword ptr [edi]
        push 0x8
        call eax
        mov dword ptr [esi + 0xa4], eax
        mov dword ptr [eax], 0x4
        mov ecx, dword ptr [esi + 0xa4]
        mov dword ptr [ecx + 0x4], ebx
        mov edx, dword ptr [esi + 0xa4]
        mov dword ptr [esi + 0xa8], edx
        fld dword ptr [esp + 0x60]
        push esi
        fld qword ptr [mem_0099D220]
        mov dword ptr [esi + 0xc], ebx
        fmul st, st(1)
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x1c], ebx
        fstp dword ptr [esi + 0x8c]
        fstp dword ptr [esi + 0xa0]
        call ext_007DC880
        push esi
        call ext_007DC860
        push esi
        call ext_007DAE10
        push esi
        call ext_007DB520
        fldz
        mov eax, dword ptr [esi + 0xb0]
        fst dword ptr [esp + 0x2c]
        push eax
        fst dword ptr [esp + 0x34]
        lea ecx, [esp + 0x3c]
        fstp dword ptr [esp + 0x38]
        push ecx
        mov dword ptr [esp + 0x60], 0x6
        mov dword ptr [esp + 0x5c], 0x2
        mov dword ptr [esp + 0x58], 0x3
        call ext_007DB0B0
        lea edx, [esp + 0x34]
        push edx
        mov eax, edx
        push eax
        mov ecx, edx
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        call ext_007DB190
        fldz
        add esp, 0x34
        fstp dword ptr [esp]
        lea eax, [esp + 0x1c]
        push eax
        push esi
        call ext_007DB4C0
        push esi
        mov dword ptr [esi + 0x14], eax
        call ext_007DAE50
        add esp, 0x10
        mov dword ptr [esi + 0x10], eax
        pop edi
        mov dword ptr [esi + 0x90], ebx
        mov dword ptr [esi + 0x9c], ebx
        mov dword ptr [esi + 0x94], ebx
        mov dword ptr [esi + 0x98], ebx
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x34
        ret
    }
}

// [0x007CF820] sub_007CF820 (1694 bytes)
extern "C" void ext_006A6EA4();
extern "C" void ext_007CDC00();
extern "C" void ext_007CE340();
extern "C" void ext_007CE390();
extern "C" void ext_007CE490();
extern "C" void ext_007CE5E0();
extern "C" void ext_007D5170();
extern "C" void ext_007DEB50();
extern "C" void ext_007FC4E0();
extern "C" int mem_00993828;
extern "C" float mem_0093C1A8;
extern "C" float mem_0099D148;

extern "C" __declspec(naked) void __cdecl fn_007CF820(void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0x12c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x13c]
        push edi
        mov edi, dword ptr [esp + 0x144]
        push edi
        push esi
        push 0x0
        call ext_007CE490
        push edi
        push esi
        push 0x1
        call ext_007CE490
        push edi
        push esi
        push 0x2
        call ext_007CE490
        push edi
        push esi
        push 0x3
        call ext_007CE490
        push edi
        push esi
        push 0x4
        call ext_007CE490
        push edi
        push esi
        push 0x5
        call ext_007CE490
        mov ecx, dword ptr [edi + 0xb4]
        mov ebp, dword ptr [esp + 0x190]
        lea ebx, [edi + 0xb4]
        shl ecx, 6
        add esp, 0x48
        add ecx, ebp
        lea eax, [edi + 0xbc]
        lea edx, [esp + 0xac]
        call ext_007DEB50
        mov ecx, dword ptr [edi + 0xb8]
        cmp ecx, -1
        lea eax, [edi + 0xfc]
        je short L_7cf8bf
        shl ecx, 6
        add ecx, ebp
        lea edx, [esp + 0xec]
        call ext_007DEB50
        jmp short L_7cf8cb
    L_7cf8bf:
        lea ecx, [esp + 0xec]
        call ext_007FC4E0
    L_7cf8cb:
        mov eax, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx + eax*8], edx
        mov eax, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [edi + 0xb8]
        mov dword ptr [ecx + eax*8 + 0x4], edx
        cmp dword ptr [edi + 0x164], 0x0
        je L_7cfa0f
        mov eax, dword ptr [edi + 0xb8]
        cmp eax, -1
        mov ecx, dword ptr [esp + 0x14c]
        je short L_7cf936
        mov eax, dword ptr [ecx + eax*4]
        mov edx, dword ptr [ebx]
        mov ecx, dword ptr [ecx + edx*4]
        fld dword ptr [ecx + 0xc0]
        add eax, 0xc0
        fsub dword ptr [eax]
        add ecx, 0xc0
        fstp dword ptr [esp + 0x18]
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        jmp short L_7cf954
    L_7cf936:
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [ecx + eax*4]
        fld dword ptr [eax + 0xc0]
        add eax, 0xc0
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x8]
    L_7cf954:
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x100]
        fld dword ptr [esp + 0xfc]
        fld dword ptr [esp + 0x104]
        fld dword ptr [esp + 0xcc]
        fmul st, st(2)
        fld dword ptr [esp + 0xd0]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esp + 0xd4]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xbc]
        fmulp st(3), st
        fld dword ptr [esp + 0xc0]
        fmulp st(4), st
        fxch st(2)
        faddp st(3), st
        fmul dword ptr [esp + 0xc4]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push 0x1
        fchs
        lea ecx, [edi + 0x160]
        fstp dword ptr [edi + 0x174]
        fld dword ptr [esp + 0xb4]
        fmul dword ptr [esp + 0x20]
        fld dword ptr [esp + 0xb0]
        fmul dword ptr [esp + 0x1c]
        faddp st(1), st
        fld dword ptr [esp + 0xb8]
        fmul dword ptr [esp + 0x24]
        faddp st(1), st
        fstp dword ptr [edi + 0x188]
        call ext_007CE390
        add esp, 0x4
        jmp short L_7cfa17
    L_7cfa0f:
        fldz
        fstp dword ptr [edi + 0x170]
    L_7cfa17:
        mov eax, dword ptr [edi + 0xb8]
        push edi
        lea edx, [edi + 0x148]
        push edx
        xor edx, edx
        cmp eax, -1
        setne dl
        lea ecx, [edi + 0x13c]
        push ecx
        lea ecx, [esp + 0x128]
        shl eax, 6
        lea eax, [eax + ebp + 0x30]
        push edx
        push ecx
        mov ecx, dword ptr [ebx]
        lea edx, [esp + 0xf0]
        push edx
        shl ecx, 6
        push eax
        lea edx, [ecx + ebp + 0x30]
        push edx
        push esi
        call ext_007CE5E0
        lea eax, [esp + 0xd0]
        push eax
        lea ecx, [esp + 0x154]
        push ecx
        call ext_007D5170
        lea edx, [esp + 0x118]
        push edx
        lea eax, [esp + 0x74]
        push eax
        call ext_007D5170
        fld dword ptr [esp + 0x78]
        fld dword ptr [esp + 0x7c]
        add esp, 0x34
        fld dword ptr [esp + 0x4c]
        xor ecx, ecx
        fld dword ptr [esp + 0x50]
        lea eax, [esp + 0x58]
    L_7cfa9d:
        fld dword ptr [esp + 4*ecx + 0x12c]
        add ecx, 0x1
        fld st(0)
        add eax, 0x10
        cmp ecx, 0x4
        fmul st, st(5)
        fstp dword ptr [eax - 0x14]
        fld st(0)
        fmul st, st(4)
        fstp dword ptr [eax - 0x10]
        fld st(0)
        fmul st, st(3)
        fstp dword ptr [eax - 0xc]
        fmul st, st(1)
        fstp dword ptr [eax - 0x8]
        jb short L_7cfa9d
        fstp st(3)
        mov ecx, dword ptr [esi + 0x4]
        fstp st(1)
        mov edx, dword ptr [esi]
        fstp st(0)
        add ecx, 0x3
        fstp st(0)
        shl ecx, 6
        fld dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x88]
        fadd dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x70]
        fld st(2)
        fsub st, st(2)
        fadd st, st(1)
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x78]
        fsub dword ptr [esp + 0x84]
        fld dword ptr [esp + 0x6c]
        fld dword ptr [esp + 0x60]
        fld st(2)
        fsub st, st(2)
        fadd st, st(1)
        fstp dword ptr [esp + 0xa0]
        _emit 0xde
        _emit 0xea
        faddp st(1), st
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x7c]
        fld dword ptr [esp + 0x90]
        fld dword ptr [esp + 0x54]
        fst qword ptr [esp + 0x18]
        fld dword ptr [esp + 0x68]
        fstp qword ptr [esp + 0x3c]
        fld st(2)
        fsub st, st(2)
        faddp st(1), st
        fsub qword ptr [esp + 0x3c]
        fmul st, st(3)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x8c]
        fadd dword ptr [esp + 0x80]
        fst qword ptr [esp + 0xa4]
        fld dword ptr [esp + 0x58]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x64]
        fstp qword ptr [esp + 0x30]
        fadd qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x30]
        fadd st(1), st
        fxch st(1)
        fmul st, st(4)
        fstp dword ptr [esp + 0x2c]
        fxch st(4)
        faddp st(5), st
        fxch st(4)
        faddp st(5), st
        fxch st(4)
        fmul st, st(1)
        fstp dword ptr [esp + 0x30]
        fld qword ptr [esp + 0xa4]
        _emit 0xde
        _emit 0xe2
        fxch st(1)
        fsub qword ptr [esp + 0x10]
        fmul st, st(1)
        fstp dword ptr [esp + 0x34]
        fxch st(1)
        _emit 0xde
        _emit 0xe2
        fxch st(1)
        fsub qword ptr [esp + 0x3c]
        fadd qword ptr [esp + 0x18]
        fmulp st(1), st
        fstp dword ptr [esp + 0x38]
        fldz
        fst dword ptr [ecx + edx]
        mov eax, dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi]
        shl eax, 6
        fst dword ptr [eax + ecx + 0xd0]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fxch st(1)
        add edx, 0x4
        shl edx, 6
        fst dword ptr [edx + eax]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        fld dword ptr [esp + 0x30]
        shl ecx, 6
        fst dword ptr [ecx + edx + 0x110]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        fxch st(1)
        shl eax, 6
        fst dword ptr [eax + ecx + 0xc4]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fld dword ptr [esp + 0x28]
        shl edx, 6
        fst dword ptr [edx + eax + 0xd4]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        fxch st(1)
        shl ecx, 6
        fst dword ptr [ecx + edx + 0x104]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        fld dword ptr [esp + 0x34]
        shl eax, 6
        fst dword ptr [eax + ecx + 0x114]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fxch st(1)
        shl edx, 6
        fst dword ptr [edx + eax + 0xc8]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        fld dword ptr [esp + 0x2c]
        shl ecx, 6
        fst dword ptr [ecx + edx + 0xd8]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        fxch st(1)
        shl eax, 6
        fst dword ptr [eax + ecx + 0x108]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fld dword ptr [esp + 0x38]
        shl edx, 6
        fst dword ptr [edx + eax + 0x118]
        cmp dword ptr [edi + 0xb8], -1
        je L_7cfd77
        mov ecx, dword ptr [esi + 0x4]
        fxch st(1)
        mov edx, dword ptr [esi]
        shl ecx, 6
        fst dword ptr [ecx + edx + 0xe0]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        fxch st(6)
        fchs
        shl eax, 6
        fstp dword ptr [eax + ecx + 0xf0]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fxch st(5)
        shl edx, 6
        fst dword ptr [edx + eax + 0x120]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        fxch st(4)
        fchs
        shl ecx, 6
        fstp dword ptr [ecx + edx + 0x130]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        fxch st(3)
        shl eax, 6
        fst dword ptr [eax + ecx + 0xe4]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fxch st(2)
        fchs
        shl edx, 6
        fstp dword ptr [edx + eax + 0xf4]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        fxch st(1)
        shl ecx, 6
        fst dword ptr [ecx + edx + 0x124]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        fxch st(1)
        fchs
        shl eax, 6
        fstp dword ptr [eax + ecx + 0x134]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        shl edx, 6
        fst dword ptr [edx + eax + 0xe8]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        fxch st(1)
        fchs
        shl ecx, 6
        fstp dword ptr [ecx + edx + 0xf8]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        shl eax, 6
        fst dword ptr [eax + ecx + 0x128]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        fxch st(1)
        fchs
        shl edx, 6
        fstp dword ptr [edx + eax + 0x138]
        jmp short L_7cfd83
    L_7cfd77:
        fstp st(6)
        fstp st(4)
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fstp st(1)
    L_7cfd83:
        mov eax, dword ptr [esi + 0x2c]
        fld dword ptr [esp + 0x9c]
        lea ecx, [eax + 0x3]
        fchs
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_7cfdaa
        dec ecx
        or ecx, -4
        inc ecx
    L_7cfdaa:
        mov edx, dword ptr [esi + 0x28]
        lea ecx, [ecx + eax*4]
        fstp dword ptr [edx + ecx*4]
        mov eax, dword ptr [esi + 0x2c]
        fld dword ptr [esp + 0xa0]
        lea ecx, [eax + 0x4]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_7cfdda
        dec ecx
        or ecx, -4
        inc ecx
    L_7cfdda:
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [esi + 0x28]
        fstp dword ptr [ecx + eax*4]
        mov eax, dword ptr [esi + 0x38]
        mov ecx, dword ptr [esi + 0x34]
        fld dword ptr [mem_0093C1A8]
        add eax, 0x3
        mov edx, eax
        and eax, 0x3
        shr edx, 0x2
        lea eax, [eax + edx*4]
        fst dword ptr [ecx + eax*4]
        mov eax, dword ptr [esi + 0x44]
        mov ecx, dword ptr [esi + 0x40]
        fld dword ptr [mem_0099D148]
        add eax, 0x3
        mov edx, eax
        and eax, 0x3
        shr edx, 0x2
        lea eax, [eax + edx*4]
        fst dword ptr [ecx + eax*4]
        mov eax, dword ptr [esi + 0x38]
        mov ecx, dword ptr [esi + 0x34]
        fxch st(1)
        add eax, 0x4
        mov edx, eax
        and eax, 0x3
        shr edx, 0x2
        lea eax, [eax + edx*4]
        fstp dword ptr [ecx + eax*4]
        mov eax, dword ptr [esi + 0x44]
        mov ecx, dword ptr [esi + 0x40]
        add eax, 0x4
        mov edx, eax
        shr edx, 0x2
        and eax, 0x3
        lea eax, [eax + edx*4]
        mov edx, dword ptr [esp + 0x14c]
        fstp dword ptr [ecx + eax*4]
        push edx
        lea eax, [esp + 0xf0]
        fst dword ptr [esp + 0x28]
        push eax
        fst dword ptr [esp + 0x30]
        mov ecx, eax
        fstp dword ptr [esp + 0x34]
        push ecx
        mov ecx, dword ptr [esp + 0x15c]
        lea edx, [esp + 0x30]
        push edx
        push ebx
        lea ebx, [edi + 0x160]
        mov eax, esi
        mov edi, 0x5
        call ext_007CE340
        add esp, 0x14
        test al, al
        je short L_7cfea8
        push 0x6
        push esi
        call ext_007CDC00
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x12c
        ret
    L_7cfea8:
        push 0x5
        push esi
        call ext_007CDC00
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x12c
        ret
    }
}

// [0x007CEA00] sub_007CEA00 (3605 bytes)
extern "C" void ext_007C7690();
extern "C" void ext_007CD690();
extern "C" void ext_007CE900();
extern "C" void ext_007D84A0();
extern "C" void ext_007E46B0();
extern "C" double mem_00993868;
extern "C" double mem_00993840;
extern "C" double mem_0099DE28;
extern "C" float mem_0099DE24;

extern "C" __declspec(naked) void __fastcall fn_007CEA00(void* self) {
    __asm {
        sub esp, 0xb4
        fldz
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0xcc]
        mov eax, dword ptr [edi + 0x164]
        test eax, eax
        mov ebx, dword ptr [edi + 0x94]
        mov ebp, dword ptr [edi + 0x98]
        mov dword ptr [esp + 0x40], ebx
        mov dword ptr [esp + 0x44], ebp
        mov dword ptr [esp + 0x38], eax
        je near ptr L_007ceac0
        mov eax, dword ptr [edi + 0x168]
        fst dword ptr [esp + 0x1c]
        test eax, eax
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x24]
        je short L_007cea78
        nop
    L_007cea50:
        fld dword ptr [eax + 0x4c]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x50]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + 0x54]
        mov eax, dword ptr [eax + 0x5c]
        test eax, eax
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x24]
        jne short L_007cea50
    L_007cea78:
        lea esi, [esp + 0x1c]
        call ext_007E46B0
        fcomp qword ptr [mem_00993868]
        fnstsw ax
        test ah, 0x5
        jp short L_007cea9c
        fldz
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x24]
    L_007cea9c:
        fld dword ptr [edi + 0x4]
        fmul dword ptr [esp + 0x20]
        fld dword ptr [edi]
        fmul dword ptr [esp + 0x1c]
        faddp st(1), st
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esp + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fidiv dword ptr [esp + 0x38]
    L_007ceac0:
        test ebx, ebx
        fstp dword ptr [esp + 0x54]
        je short L_007cead9
        lea eax, [esp + 0xac]
        push eax
        push ebx
        call ext_007C6150
        add esp, 0x8
    L_007cead9:
        test ebp, ebp
        je short L_007ceaee
        lea ecx, [esp + 0xb8]
        push ecx
        push ebp
        call ext_007C6150
        add esp, 0x8
    L_007ceaee:
        mov edi, dword ptr [edi + 0x168]
        test edi, edi
        mov ebp, dword ptr [esp + 0xc8]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], edi
        je near ptr L_007cf7ec
        mov ebx, dword ptr [esp + 0x14]
    L_007ceb13:
        mov esi, dword ptr [esp + 0xcc]
        fld dword ptr [esp + 0x54]
        cmp dword ptr [esi + 0x160], 0x0
        jne short L_007ceb29
        xor ebx, ebx
    L_007ceb29:
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [edi + 0x84]
        mov edx, dword ptr [edi + 0x90]
        mov ecx, 0x1
        cmp eax, ecx
        mov dword ptr [esp + 0x3c], edx
        jne short L_007ceb4c
        mov dword ptr [esp + 0x4c], ecx
        jmp short L_007ceb5d
    L_007ceb4c:
        xor edx, edx
        cmp eax, 0x2
        setne dl
        sub edx, ecx
        and edx, 0x2
        mov dword ptr [esp + 0x4c], edx
    L_007ceb5d:
        cmp dword ptr [edi + 0x88], ecx
        jne short L_007ceb73
        fld dword ptr [edi + 0xa8]
        fmul st, st(1)
        fstp dword ptr [edi + 0xa4]
    L_007ceb73:
        cmp dword ptr [edi + 0x8c], ecx
        jne short L_007ceb89
        fmul dword ptr [edi + 0xb4]
        fstp dword ptr [edi + 0xb0]
        jmp short L_007ceb8b
    L_007ceb89:
        fstp st(0)
    L_007ceb8b:
        fld1
        mov ecx, dword ptr [esp + 0x40]
        test ecx, ecx
        fstp dword ptr [esp + 0x50]
        je short L_007cebc9
        fld dword ptr [edi + 0x40]
        fsub dword ptr [esp + 0xac]
        fstp dword ptr [esp + 0x7c]
        fld dword ptr [edi + 0x44]
        fsub dword ptr [esp + 0xb0]
        fstp dword ptr [esp + 0x80]
        fld dword ptr [edi + 0x48]
        fsub dword ptr [esp + 0xb4]
        fstp dword ptr [esp + 0x84]
    L_007cebc9:
        mov eax, dword ptr [esp + 0x44]
        test eax, eax
        je short L_007cebfb
        fld dword ptr [edi + 0x40]
        fsub dword ptr [esp + 0xb8]
        fstp dword ptr [esp + 0x70]
        fld dword ptr [edi + 0x44]
        fsub dword ptr [esp + 0xbc]
        fstp dword ptr [esp + 0x74]
        fld dword ptr [edi + 0x48]
        fsub dword ptr [esp + 0xc0]
        fstp dword ptr [esp + 0x78]
    L_007cebfb:
        lea edx, [esp + 0x64]
        push edx
        push eax
        push ecx
        push edi
        call ext_007D84A0
        fld dword ptr [edi + 0x50]
        fmul dword ptr [esp + 0x78]
        mov eax, dword ptr [ebp + 0x5c]
        fld dword ptr [esp + 0x74]
        mov ecx, dword ptr [ebp + 0x58]
        fmul dword ptr [edi + 0x4c]
        mov edx, dword ptr [esi + 0xb4]
        push esi
        push ebp
        faddp st(1), st
        push ebx
        fld dword ptr [edi + 0x54]
        fmul dword ptr [esp + 0x88]
        mov dword ptr [ecx + 8*eax], edx
        mov eax, dword ptr [ebp + 0x5c]
        mov ecx, dword ptr [ebp + 0x58]
        mov edx, dword ptr [esi + 0xb8]
        faddp st(1), st
        mov dword ptr [ecx + 8*eax + 0x4], edx
        fstp dword ptr [esp + 0x54]
        call ext_007CE490
        fldz
        mov ecx, dword ptr [esp + 0x58]
        add esp, 0x1c
        fstp dword ptr [esp + 0x14]
        test cl, 0x2
        fld dword ptr [esp + 0x38]
        je short L_007cec84
        fld dword ptr [edi + 0x98]
        fchs
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_007cec84
        fld dword ptr [edi + 0x94]
        fchs
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
    L_007cec84:
        and ecx, 0x100
        mov dword ptr [esp + 0x48], ecx
        je short L_007cece9
        cmp dword ptr [esi + 0xb8], -0x1
        jne short L_007cecc0
        fld dword ptr [edi + 0x7c]
        fmul dword ptr [edi + 0x50]
        fld dword ptr [edi + 0x78]
        fmul dword ptr [edi + 0x4c]
        faddp st(1), st
        fld dword ptr [edi + 0x80]
        fmul dword ptr [edi + 0x54]
        faddp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fadd dword ptr [esp + 0x14]
        jmp short L_007cece5
    L_007cecc0:
        fld dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x7c]
        fmul dword ptr [edi + 0x50]
        fld dword ptr [edi + 0x4c]
        fmul dword ptr [edi + 0x78]
        faddp st(1), st
        fld dword ptr [edi + 0x80]
        fmul dword ptr [edi + 0x54]
        faddp st(1), st
        fstp dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x28]
    L_007cece5:
        fstp dword ptr [esp + 0x14]
    L_007cece9:
        cmp dword ptr [edi + 0x84], 0x3
        jne near ptr L_007ceef2
        fld1
        lea esi, [esp + 0x88]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x64]
        fld dword ptr [edi + 0x4c]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x88]
        fld dword ptr [esp + 0x68]
        fld dword ptr [edi + 0x50]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [edi + 0x54]
        fmulp st(1), st
        fsubr dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x90]
        fld dword ptr [edi + 0x4c]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [edi + 0x50]
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [edi + 0x54]
        fstp dword ptr [esp + 0x60]
        call ext_007E46B0
        mov eax, dword ptr [esp + 0xcc]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x40]
        push ecx
        call ext_007C7690
        fmul qword ptr [mem_00993840]
        fld dword ptr [esp + 0x14]
        add esp, 0x4
        fcompp
        fnstsw ax
        test ah, 0x41
        jne short L_007cedf4
        fld dword ptr [edi + 0xc4]
        fmul st(0), st
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        lea esi, [esp + 0x58]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [edi + 0xc4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmul dword ptr [esp + 0x88]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x8c]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x90]
        fmulp st(1), st
        fsubr dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x60]
        call ext_007E46B0
        fstp st(0)
    L_007cedf4:
        mov edx, dword ptr [esp + 0x44]
        mov eax, dword ptr [esp + 0x40]
        push edx
        push eax
        lea ecx, [esp + 0x84]
        push ecx
        lea edi, [esp + 0x7c]
        lea eax, [esp + 0x64]
        mov edx, ebx
        mov ecx, ebp
        call ext_007CE900
        mov edx, dword ptr [ebp + 0x2c]
        mov esi, dword ptr [esp + 0x24]
        fld dword ptr [esi + 0x58]
        lea ecx, [ebx + edx]
        fchs
        mov eax, ecx
        fld dword ptr [esp + 0x34]
        cdq
        fld st(0)
        and edx, 0x3
        fmulp st(2), st
        add eax, edx
        fxch st(1)
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007cee53
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cee53:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x28]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [ebp + 0x38]
        lea ecx, [edx + ebx]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cee7a
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cee7a:
        fldz
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x34]
        fst dword ptr [ecx + 4*eax]
        mov edx, dword ptr [ebp + 0x44]
        lea ecx, [ebx + edx]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007ceea3
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007ceea3:
        fld dword ptr [mem_0099D148]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x40]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [ebp + 0x20]
        fld dword ptr [esp + 0x14]
        lea ecx, [ebx + edx]
        mov eax, ecx
        fmulp st(2), st
        cdq
        fxch st(1)
        and edx, 0x3
        add eax, edx
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007ceee0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007ceee0:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x1c]
        fstp dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0x3c]
        jmp near ptr L_007cefef
    L_007ceef2:
        mov edx, dword ptr [esp + 0x44]
        fstp st(0)
        mov eax, dword ptr [esp + 0x40]
        mov esi, dword ptr [esp + 0x18]
        push edx
        push eax
        lea ecx, [esp + 0x84]
        push ecx
        lea edi, [esp + 0x7c]
        lea eax, [esi + 0x4c]
        mov edx, ebx
        mov ecx, ebp
        call ext_007CE900
        fld dword ptr [esi + 0x58]
        mov edx, dword ptr [ebp + 0x2c]
        fchs
        lea ecx, [ebx + edx]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cef40
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cef40:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x28]
        fstp dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [esp + 0x3c]
        test cl, 0x8
        je short L_007cef62
        fld dword ptr [esi + 0xa0]
        fchs
        fstp dword ptr [esp + 0x28]
        fldz
        jmp short L_007cef68
    L_007cef62:
        fldz
        fst dword ptr [esp + 0x28]
    L_007cef68:
        mov edx, dword ptr [ebp + 0x38]
        lea esi, [edx + ebx]
        mov eax, esi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and esi, 0x80000003
        jns short L_007cef86
        dec esi
        or esi, -0x4
        inc esi
    L_007cef86:
        mov edx, dword ptr [ebp + 0x34]
        fld dword ptr [esp + 0x28]
        lea eax, [esi + 4*eax]
        fstp dword ptr [edx + 4*eax]
        mov eax, dword ptr [ebp + 0x44]
        lea esi, [ebx + eax]
        mov eax, esi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and esi, 0x80000003
        jns short L_007cefb1
        dec esi
        or esi, -0x4
        inc esi
    L_007cefb1:
        fld dword ptr [mem_0099D148]
        lea edx, [esi + 4*eax]
        mov eax, dword ptr [ebp + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov edx, dword ptr [ebp + 0x20]
        lea esi, [ebx + edx]
        mov eax, esi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and esi, 0x80000003
        jns short L_007cefde
        dec esi
        or esi, -0x4
        inc esi
    L_007cefde:
        mov edx, dword ptr [ebp + 0x1c]
        fld dword ptr [esp + 0x14]
        lea eax, [esi + 4*eax]
        mov esi, dword ptr [esp + 0x18]
        fstp dword ptr [edx + 4*eax]
    L_007cefef:
        test cl, 0x4
        je near ptr L_007cf07c
        mov eax, dword ptr [ebp + 0x50]
        lea edi, [eax + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf016
        dec edi
        or edi, -0x4
        inc edi
    L_007cf016:
        fld dword ptr [esi + 0x9c]
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [ebp + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov edx, dword ptr [ebp + 0x50]
        lea edi, [edx + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf043
        dec edi
        or edi, -0x4
        inc edi
    L_007cf043:
        mov edx, dword ptr [ebp + 0x4c]
        lea eax, [edi + 4*eax]
        fcom dword ptr [edx + 4*eax]
        fnstsw ax
        test ah, 0x41
        jne short L_007cf07c
        mov eax, dword ptr [ebp + 0x50]
        lea edi, [eax + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf071
        dec edi
        or edi, -0x4
        inc edi
    L_007cf071:
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [ebp + 0x4c]
        fstp dword ptr [eax + 4*edx]
        jmp short L_007cf07e
    L_007cf07c:
        fstp st(0)
    L_007cf07e:
        add ebx, 0x1
        cmp dword ptr [esp + 0x4c], 0x0
        mov dword ptr [esp + 0x14], ebx
        je near ptr L_007cf522
        mov edi, ecx
        and edi, 0x1
        lea eax, [esi + 0x4c]
        je short L_007cf0fb
        fld dword ptr [esi + 0x6c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi + 0x70]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0x74]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x30]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fmul dword ptr [eax]
        faddp st(3), st
        fld dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x34]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmul dword ptr [eax]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fmul dword ptr [eax + 0x8]
        fsubp st(1), st
        jmp short L_007cf127
    L_007cf0fb:
        fld dword ptr [eax]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fsubr dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x68]
        fld dword ptr [eax + 0x4]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [eax + 0x8]
        fmulp st(1), st
        fsubr dword ptr [esp + 0x6c]
    L_007cf127:
        lea esi, [esp + 0x2c]
        fstp dword ptr [esp + 0x34]
        call ext_007E46B0
        fstp dword ptr [esp + 0x38]
        cmp dword ptr [esp + 0x4c], 0x1
        fld dword ptr [mem_00968ED8]
        fcomp dword ptr [esp + 0x38]
        fnstsw ax
        jne short L_007cf15d
        test ah, 0x41
        jne near ptr L_007cf28c
        mov esi, dword ptr [esp + 0x18]
        jmp near ptr L_007cf7c3
    L_007cf15d:
        test ah, 0x41
        jne short L_007cf17f
        mov esi, dword ptr [esp + 0x18]
        lea ebx, [esp + 0x1c]
        lea edi, [esp + 0x2c]
        add esi, 0x4c
        call ext_007CD690
        mov ebx, dword ptr [esp + 0x14]
        jmp near ptr L_007cf28c
    L_007cf17f:
        fld dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x18]
        fld st(0)
        add eax, 0x4c
        test edi, edi
        fmul dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x34]
        fld st(0)
        fmul dword ptr [eax + 0x4]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax]
        fmul st, st(1)
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fmul dword ptr [eax + 0x8]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fld dword ptr [eax]
        fmul st, st(4)
        fsubp st(1), st
        fstp dword ptr [esp + 0x24]
        jne near ptr L_007cf286
        fld qword ptr [mem_0099DE28]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0xa0]
        fmul st(2), st
        fxch st(2)
        fstp dword ptr [esp + 0xa4]
        fmul st, st(1)
        fstp dword ptr [esp + 0xa8]
        fld dword ptr [esp + 0x1c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x94]
        fld dword ptr [esp + 0x20]
        fmul st, st(1)
        fstp dword ptr [esp + 0x98]
        fmul dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x94]
        fld st(0)
        fld dword ptr [esp + 0xa0]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x98]
        fld st(0)
        fld dword ptr [esp + 0xa4]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x9c]
        fld st(0)
        fld dword ptr [esp + 0xa8]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fxch st(4)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x1c]
        fsubrp st(1), st
        fstp dword ptr [esp + 0x20]
        fsubrp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [mem_0099DE24]
        fstp dword ptr [esp + 0x50]
        jmp short L_007cf28c
    L_007cf286:
        fstp st(0)
        fstp st(0)
        fstp st(0)
    L_007cf28c:
        mov esi, dword ptr [esp + 0xcc]
        push esi
        push ebp
        push ebx
        call ext_007CE490
        mov ecx, dword ptr [esp + 0x50]
        mov edx, dword ptr [esp + 0x4c]
        push ecx
        push edx
        lea eax, [esp + 0x90]
        push eax
        lea edi, [esp + 0x88]
        lea eax, [esp + 0x44]
        mov edx, ebx
        mov ecx, ebp
        call ext_007CE900
        add esp, 0x18
        test byte ptr [esp + 0x3c], 0x10
        je near ptr L_007cf357
        mov ecx, dword ptr [ebp + 0x50]
        lea edi, [ecx + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf2ed
        dec edi
        or edi, -0x4
        inc edi
    L_007cf2ed:
        lea edx, [edi + 4*eax]
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [ebp + 0x4c]
        fld dword ptr [edi + 0xac]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [ebp + 0x50]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf31d
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf31d:
        fldz
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp + 0x4c]
        fcom dword ptr [eax + 4*edx]
        fnstsw ax
        test ah, 0x41
        jne short L_007cf35d
        mov ecx, dword ptr [ebp + 0x50]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf34c
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf34c:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp + 0x4c]
        fstp dword ptr [eax + 4*edx]
        jmp short L_007cf35f
    L_007cf357:
        mov edi, dword ptr [esp + 0x18]
        jmp short L_007cf35f
    L_007cf35d:
        fstp st(0)
    L_007cf35f:
        test byte ptr [esp + 0x3c], 0x40
        je short L_007cf392
        mov ecx, dword ptr [ebp + 0x20]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf383
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf383:
        fld dword ptr [edi + 0xbc]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp + 0x1c]
        fstp dword ptr [eax + 4*edx]
    L_007cf392:
        cmp dword ptr [esp + 0x48], 0x0
        je near ptr L_007cf479
        or eax, -0x1
        cmp dword ptr [esi + 0xb8], eax
        jne short L_007cf3f6
        mov ecx, dword ptr [ebp + 0x20]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf3c5
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf3c5:
        fld dword ptr [edi + 0x7c]
        lea edx, [ecx + 4*eax]
        fmul dword ptr [esp + 0x30]
        mov eax, dword ptr [ebp + 0x1c]
        fld dword ptr [edi + 0x78]
        lea eax, [eax + 4*edx]
        fmul dword ptr [esp + 0x2c]
        faddp st(1), st
        fld dword ptr [edi + 0x80]
        fmul dword ptr [esp + 0x34]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [eax]
        jmp short L_007cf44b
    L_007cf3f6:
        cmp dword ptr [esi + 0xb4], eax
        jne short L_007cf44d
        mov ecx, dword ptr [ebp + 0x20]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf41b
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf41b:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp + 0x1c]
        fld dword ptr [eax + 4*edx]
        lea eax, [eax + 4*edx]
        fld dword ptr [edi + 0x7c]
        fmul dword ptr [esp + 0x30]
        fld dword ptr [edi + 0x78]
        fmul dword ptr [esp + 0x2c]
        faddp st(1), st
        fld dword ptr [edi + 0x80]
        fmul dword ptr [esp + 0x34]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x10]
    L_007cf44b:
        fstp dword ptr [eax]
    L_007cf44d:
        mov ecx, dword ptr [ebp + 0x20]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf46a
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf46a:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp + 0x1c]
        fld dword ptr [eax + 4*edx]
        fstp dword ptr [edi + 0xbc]
    L_007cf479:
        mov eax, dword ptr [edi + 0x88]
        test eax, eax
        je short L_007cf490
        cmp eax, 0x1
        je short L_007cf490
        fld qword ptr [mem_0092C180]
        jmp short L_007cf49a
    L_007cf490:
        fld dword ptr [edi + 0xa4]
        fmul dword ptr [esp + 0x50]
    L_007cf49a:
        mov ecx, dword ptr [ebp + 0x44]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        add ecx, ebx
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf4bf
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf4bf:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [ebp + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [ebp + 0x44]
        mov edx, dword ptr [ebp + 0x38]
        add ecx, ebx
        mov eax, ecx
        lea esi, [edx + ebx]
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf4eb
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf4eb:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x40]
        fld dword ptr [ecx + 4*eax]
        mov eax, esi
        cdq
        fchs
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and esi, 0x80000003
        jns short L_007cf50e
        dec esi
        or esi, -0x4
        inc esi
    L_007cf50e:
        lea edx, [esi + 4*eax]
        mov eax, dword ptr [ebp + 0x34]
        mov esi, dword ptr [esp + 0x18]
        fstp dword ptr [eax + 4*edx]
        add ebx, 0x1
        mov dword ptr [esp + 0x14], ebx
    L_007cf522:
        cmp dword ptr [esp + 0x4c], 0x2
        jne near ptr L_007cf7c3
        mov ecx, dword ptr [esp + 0xcc]
        push ecx
        push ebp
        push ebx
        call ext_007CE490
        mov edx, dword ptr [esp + 0x50]
        mov eax, dword ptr [esp + 0x4c]
        push edx
        push eax
        lea ecx, [esp + 0x90]
        push ecx
        lea edi, [esp + 0x88]
        lea eax, [esp + 0x34]
        mov edx, ebx
        mov ecx, ebp
        call ext_007CE900
        mov cl, byte ptr [esp + 0x54]
        add esp, 0x18
        test cl, 0x20
        je near ptr L_007cf5fa
        mov edx, dword ptr [ebp + 0x50]
        lea edi, [edx + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf590
        dec edi
        or edi, -0x4
        inc edi
    L_007cf590:
        mov edx, dword ptr [ebp + 0x4c]
        fld dword ptr [esi + 0xb8]
        lea eax, [edi + 4*eax]
        fstp dword ptr [edx + 4*eax]
        mov eax, dword ptr [ebp + 0x50]
        lea edi, [eax + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf5bd
        dec edi
        or edi, -0x4
        inc edi
    L_007cf5bd:
        fldz
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [ebp + 0x4c]
        fcom dword ptr [eax + 4*edx]
        fnstsw ax
        test ah, 0x41
        jne short L_007cf5f8
        mov edx, dword ptr [ebp + 0x50]
        lea edi, [edx + ebx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf5ed
        dec edi
        or edi, -0x4
        inc edi
    L_007cf5ed:
        mov edx, dword ptr [ebp + 0x4c]
        lea eax, [edi + 4*eax]
        fstp dword ptr [edx + 4*eax]
        jmp short L_007cf5fa
    L_007cf5f8:
        fstp st(0)
    L_007cf5fa:
        test cl, cl
        jns short L_007cf62b
        mov eax, dword ptr [ebp + 0x20]
        lea ecx, [ebx + eax]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf61c
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf61c:
        mov edx, dword ptr [ebp + 0x1c]
        fld dword ptr [esi + 0xc0]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
    L_007cf62b:
        cmp dword ptr [esp + 0x48], 0x0
        je near ptr L_007cf71c
        mov eax, dword ptr [esp + 0xcc]
        or ecx, -0x1
        cmp dword ptr [eax + 0xb8], ecx
        jne short L_007cf697
        mov eax, dword ptr [ebp + 0x20]
        lea ecx, [ebx + eax]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf666
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf666:
        fld dword ptr [esi + 0x7c]
        mov edx, dword ptr [ebp + 0x1c]
        fmul dword ptr [esp + 0x20]
        lea ecx, [ecx + 4*eax]
        fld dword ptr [esp + 0x1c]
        lea eax, [edx + 4*ecx]
        fmul dword ptr [esi + 0x78]
        faddp st(1), st
        fld dword ptr [esi + 0x80]
        fmul dword ptr [esp + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [eax]
        jmp short L_007cf6ed
    L_007cf697:
        cmp dword ptr [eax + 0xb4], ecx
        jne short L_007cf6ef
        mov eax, dword ptr [ebp + 0x20]
        lea ecx, [ebx + eax]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf6bd
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf6bd:
        mov edx, dword ptr [ebp + 0x1c]
        lea ecx, [ecx + 4*eax]
        fld dword ptr [edx + 4*ecx]
        lea eax, [edx + 4*ecx]
        fld dword ptr [esi + 0x7c]
        fmul dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [esi + 0x78]
        faddp st(1), st
        fld dword ptr [esi + 0x80]
        fmul dword ptr [esp + 0x24]
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x10]
    L_007cf6ed:
        fstp dword ptr [eax]
    L_007cf6ef:
        mov eax, dword ptr [ebp + 0x20]
        lea ecx, [ebx + eax]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf70d
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf70d:
        mov edx, dword ptr [ebp + 0x1c]
        lea ecx, [ecx + 4*eax]
        fld dword ptr [edx + 4*ecx]
        fstp dword ptr [esi + 0xbc]
    L_007cf71c:
        mov eax, dword ptr [esi + 0x8c]
        test eax, eax
        je short L_007cf733
        cmp eax, 0x1
        je short L_007cf733
        fld qword ptr [mem_0092C180]
        jmp short L_007cf73d
    L_007cf733:
        fld dword ptr [esi + 0xb0]
        fmul dword ptr [esp + 0x50]
    L_007cf73d:
        mov eax, dword ptr [ebp + 0x44]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        lea ecx, [ebx + eax]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf763
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf763:
        mov edx, dword ptr [ebp + 0x40]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
        mov eax, dword ptr [ebp + 0x44]
        mov edx, dword ptr [ebp + 0x38]
        lea ecx, [ebx + eax]
        mov eax, ecx
        lea edi, [edx + ebx]
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007cf790
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007cf790:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 0x40]
        fld dword ptr [ecx + 4*eax]
        mov eax, edi
        cdq
        fchs
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007cf7b3
        dec edi
        or edi, -0x4
        inc edi
    L_007cf7b3:
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [ebp + 0x34]
        add ebx, 0x1
        fstp dword ptr [eax + 4*edx]
        mov dword ptr [esp + 0x14], ebx
    L_007cf7c3:
        mov ecx, dword ptr [esp + 0xcc]
        cmp dword ptr [ecx + 0x160], 0x0
        jne short L_007cf7dd
        push ebx
        push ebp
        call ext_007CDC00
        add esp, 0x8
    L_007cf7dd:
        mov esi, dword ptr [esi + 0x5c]
        test esi, esi
        mov dword ptr [esp + 0x18], esi
        jne near ptr L_007ceb13
    L_007cf7ec:
        mov edx, dword ptr [esp + 0xcc]
        cmp dword ptr [edx + 0x160], 0x0
        je short L_007cf80a
        mov eax, dword ptr [esp + 0x14]
        push eax
        push ebp
        call ext_007CDC00
        add esp, 0x8
    L_007cf80a:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xb4
        ret
    }
}


// [0x007CFF30] sub_007CFF30 (13661 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007CD780();
extern "C" void ext_007CD880();
extern "C" void ext_007CDC00();
extern "C" void ext_007CE490();
extern "C" void ext_007CFEC0();
extern "C" void ext_007D5170();
extern "C" void ext_007D5870();
extern "C" void ext_007E46B0();
extern "C" void ext_007FC2D0();
extern "C" void ext_007FC440();
extern "C" void ext_007FC4E0();
extern "C" int mem_00993828;
extern "C" float mem_0093C1A8;
extern "C" float mem_0099D148;
extern "C" int mem_0092A278;
extern "C" int mem_0092C180;
extern "C" int mem_0092C508;
extern "C" int mem_0099DE50;
extern "C" int mem_0094CE80;
extern "C" int mem_0093F7B0;
extern "C" double mem_00993840;
extern "C" int mem_0092C510;
extern "C" int mem_0093F8F0;
extern "C" int mem_0099DE30;

extern "C" __declspec(naked) void __fastcall fn_007CFF30(void* self) {
    __asm {
        sub esp, 0x218
        push ebx
        mov ebx, dword ptr [esp + 0x224]
        mov edx, dword ptr [ebx + 0xb4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x22c]
        mov eax, dword ptr [edi + 0x5c]
        mov ecx, dword ptr [edi + 0x58]
        mov dword ptr [ecx + 8*eax], edx
        mov eax, dword ptr [edi + 0x5c]
        mov ecx, dword ptr [edi + 0x58]
        mov edx, dword ptr [ebx + 0xb8]
        mov dword ptr [ecx + 8*eax + 0x4], edx
        mov eax, dword ptr [esp + 0x23c]
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x234]
        mov esi, dword ptr [ebx + 0xb4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        shl esi, 0x6
        fst qword ptr [esp + 0xb0]
        add esi, ecx
        fmul dword ptr [eax + 0x4]
        xor ebp, ebp
        fstp dword ptr [esp + 0x8c]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [ebx + 0xb8]
        shl eax, 0x6
        fstp dword ptr [esp + 0x90]
        add eax, ecx
        mov dword ptr [esp + 0x30], eax
        mov eax, dword ptr [ebx + 0x94]
        add eax, 0xd0
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ebx + 0x98]
        add eax, 0xd0
        lea ecx, [ebx + 0xbc]
        mov dword ptr [esp + 0x40], eax
        push ecx
        lea eax, [esp + 0x21c]
        push eax
        call ext_007D5170
        mov ecx, dword ptr [esp + 0x18]
        add esp, 0x8
        lea eax, [esp + 0x218]
        lea edx, [esp + 0xa0]
        call ext_007CD880
        mov eax, edx
        lea ecx, [esp + 0x1b8]
        call ext_007FC2D0
        mov eax, esi
        lea ecx, [ebx + 0xec]
        lea edx, [esp + 0x6c]
        lea esi, [esp + 0x1e8]
        call ext_007CFEC0
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d008c
        cmp dword ptr [ebx + 0x98], ebp
        je short L_007d008c
        lea esi, [ebx + 0xfc]
        lea ecx, [esp + 0x208]
        push esi
        push ecx
        call ext_007D5170
        mov ecx, dword ptr [esp + 0x48]
        add esp, 0x8
        lea eax, [esp + 0x208]
        lea edx, [esp + 0x184]
        call ext_007CD880
        mov eax, edx
        lea ecx, [esp + 0x10c]
        call ext_007FC2D0
        lea ecx, [esi + 0x30]
        mov esi, dword ptr [esp + 0x30]
        mov eax, esi
        lea edx, [esp + 0x13c]
        call ext_007FC440
        jmp short L_007d00b5
    L_007d008c:
        lea eax, [ebx + 0xfc]
        lea ecx, [esp + 0x10c]
        call ext_007FC4E0
        mov edx, ecx
        push edx
        lea eax, [esp + 0x188]
        push eax
        call ext_007D5170
        mov esi, dword ptr [esp + 0x38]
        add esp, 0x8
    L_007d00b5:
        fld dword ptr [esp + 0x184]
        xor ecx, ecx
        fld dword ptr [esp + 0x188]
        lea eax, [esp + 0xc4]
        fld dword ptr [esp + 0x18c]
        fld dword ptr [esp + 0x190]
    L_007d00da:
        fld dword ptr [esp + 4*ecx + 0xa0]
        add ecx, 0x1
        fld st(0)
        add eax, 0x10
        cmp ecx, 0x4
        fmul st, st(5)
        fstp dword ptr [eax - 0x14]
        fld st(0)
        fmul st, st(4)
        fstp dword ptr [eax - 0x10]
        fld st(0)
        fmul st, st(3)
        fstp dword ptr [eax - 0xc]
        fmul st, st(1)
        fstp dword ptr [eax - 0x8]
        jb short L_007d00da
        fstp st(3)
        lea eax, [esp + 0xa0]
        fstp st(1)
        lea ecx, [esp + 0x194]
        fstp st(0)
        fstp st(0)
        fld dword ptr [esp + 0xd4]
        fst qword ptr [esp + 0x58]
        fld dword ptr [esp + 0xc0]
        fst qword ptr [esp + 0x7c]
        faddp st(1), st
        fst qword ptr [esp + 0x200]
        fld dword ptr [esp + 0xe8]
        fst qword ptr [esp + 0x100]
        fld dword ptr [esp + 0xfc]
        fst qword ptr [esp + 0x170]
        fxch st(2)
        faddp st(1), st
        faddp st(1), st
        fstp dword ptr [esp + 0xa0]
        fld dword ptr [esp + 0xc4]
        fst qword ptr [esp + 0xb8]
        fld dword ptr [esp + 0xd0]
        fst qword ptr [esp + 0x84]
        fld dword ptr [esp + 0xf8]
        fst qword ptr [esp + 0x17c]
        fld dword ptr [esp + 0xec]
        fst qword ptr [esp + 0x64]
        fxch st(3)
        fsubrp st(2), st
        faddp st(1), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0xa4]
        fld dword ptr [esp + 0xc8]
        fst qword ptr [esp + 0x50]
        fld dword ptr [esp + 0xf4]
        fst qword ptr [esp + 0x10]
        fld dword ptr [esp + 0xe0]
        fst qword ptr [esp + 0x40]
        faddp st(1), st
        fst qword ptr [esp + 0x20]
        fld dword ptr [esp + 0xdc]
        fst qword ptr [esp + 0x18]
        fxch st(2)
        fsubrp st(1), st
        faddp st(1), st
        fstp dword ptr [esp + 0xa8]
        fld dword ptr [esp + 0xe4]
        fst qword ptr [esp + 0x38]
        fld dword ptr [esp + 0xf0]
        fst qword ptr [esp + 0x1f8]
        fsubp st(1), st
        fst qword ptr [esp + 0x94]
        fld dword ptr [esp + 0xd8]
        fst qword ptr [esp + 0x30]
        fld dword ptr [esp + 0xcc]
        fst qword ptr [esp + 0x48]
        fxch st(2)
        fsubrp st(1), st
        faddp st(1), st
        fstp dword ptr [esp + 0xac]
        call ext_007CD780
        fld qword ptr [esp + 0x84]
        fld st(0)
        fld qword ptr [esp + 0xb8]
        fsub st(1), st
        fxch st(1)
        fsub qword ptr [esp + 0x64]
        fld qword ptr [esp + 0x17c]
        fadd st(1), st
        fld qword ptr [mem_00993828]
        fmul st(2), st
        fxch st(2)
        fstp dword ptr [esp + 0xc0]
        fld qword ptr [esp + 0x18]
        fsub qword ptr [esp + 0x50]
        fst qword ptr [esp + 0x84]
        fadd qword ptr [esp + 0x40]
        fsub qword ptr [esp + 0x10]
        fmul st, st(2)
        fstp dword ptr [esp + 0xc4]
        fld qword ptr [esp + 0x48]
        fadd qword ptr [esp + 0x30]
        fst qword ptr [esp + 0x17c]
        fsubr qword ptr [esp + 0x38]
        fld qword ptr [esp + 0x1f8]
        fadd st(1), st
        fxch st(1)
        fmul st, st(3)
        fstp dword ptr [esp + 0xc8]
        fld qword ptr [esp + 0x200]
        fld qword ptr [esp + 0x170]
        fsub st(1), st
        fld qword ptr [esp + 0x100]
        fsub st(2), st
        fxch st(2)
        fmul st, st(5)
        fstp dword ptr [esp + 0xcc]
        fld qword ptr [esp + 0x17c]
        faddp st(3), st
        fxch st(2)
        fadd qword ptr [esp + 0x38]
        fmul st, st(4)
        fstp dword ptr [esp + 0xd0]
        fld qword ptr [esp + 0x84]
        fadd qword ptr [esp + 0x10]
        fsub qword ptr [esp + 0x40]
        fmul st, st(4)
        fstp dword ptr [esp + 0xd4]
        fld qword ptr [esp + 0x94]
        fsub qword ptr [esp + 0x48]
        fadd qword ptr [esp + 0x30]
        fmul st, st(4)
        fstp dword ptr [esp + 0xd8]
        fld st(0)
        fsub st, st(2)
        fadd qword ptr [esp + 0x7c]
        fld qword ptr [esp + 0x58]
        fsub st(1), st
        fxch st(1)
        fmul st, st(5)
        fstp dword ptr [esp + 0xdc]
        fld qword ptr [esp + 0x64]
        faddp st(4), st
        fxch st(3)
        fst qword ptr [esp + 0x58]
        fadd st, st(5)
        fadd st, st(6)
        fmul st, st(4)
        fstp dword ptr [esp + 0xe0]
        fld qword ptr [esp + 0x18]
        fadd qword ptr [esp + 0x20]
        fadd qword ptr [esp + 0x50]
        fmul st, st(4)
        fstp dword ptr [esp + 0xe4]
        fld qword ptr [esp + 0x58]
        fsubrp st(6), st
        fxch st(5)
        fsubrp st(4), st
        fxch st(3)
        fmul st, st(2)
        fstp dword ptr [esp + 0xe8]
        fxch st(2)
        fsubrp st(3), st
        fxch st(2)
        fsubrp st(1), st
        fadd qword ptr [esp + 0x7c]
        fmulp st(1), st
        fstp dword ptr [esp + 0xec]
        fld dword ptr [esp + 0x1e8]
        fld dword ptr [esp + 0x13c]
        fsubr st, st(1)
        fstp dword ptr [esp + 0x94]
        fld dword ptr [esp + 0x1ec]
        fld dword ptr [esp + 0x140]
        fsubr st, st(1)
        fstp dword ptr [esp + 0x98]
        fld dword ptr [esp + 0x1f0]
        fld dword ptr [esp + 0x144]
        fsubr st, st(1)
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x94]
        fld dword ptr [esp + 0x98]
        mov dword ptr [esp + 0x50], 0x100
        fld dword ptr [esp + 0x9c]
        mov dword ptr [esp + 0x7c], ebp
        fld dword ptr [esp + 0x110]
        fmul st, st(2)
        fld dword ptr [esp + 0x10c]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esp + 0x114]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x170]
        fld dword ptr [esp + 0x120]
        fmul st, st(2)
        fld dword ptr [esp + 0x11c]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esp + 0x124]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x174]
        fld dword ptr [esp + 0x130]
        fmulp st(2), st
        fld dword ptr [esp + 0x12c]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esp + 0x134]
        faddp st(1), st
        fstp dword ptr [esp + 0x178]
        fld dword ptr [esi + 0x30]
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x58]
        fsub dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x5c]
        fsub dword ptr [esi + 0x38]
        lea esi, [esp + 0x110]
        mov ecx, esi
        mov dword ptr [esp + 0x18], ecx
        fstp dword ptr [esp + 0x60]
        jmp short L_007d0490
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov edi, edi
    L_007d0490:
        mov edx, dword ptr [esp + 0x50]
        test dword ptr [ebx + 0x1a0], edx
        je near ptr L_007d0641
        push ebx
        push edi
        push ebp
        call ext_007CE490
        mov eax, dword ptr [edi + 0x2c]
        mov edx, dword ptr [esp + 0x88]
        fld dword ptr [esp + 4*edx + 0x17c]
        lea ecx, [eax + ebp]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d04d9
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d04d9:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x28]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [eax - 0x4]
        mov ecx, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax]
        mov ecx, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx + 0x4]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax + 0x4]
        mov eax, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x8]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x74]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x70]
        add ecx, ebp
        fld dword ptr [esi]
        shl ecx, 0x6
        fmul st, st(2)
        lea eax, [ecx + edx + 0x10]
        fld dword ptr [esi + 0x4]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x6c]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fld dword ptr [esi - 0x4]
        fmulp st(4), st
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [esi - 0x4]
        fld dword ptr [esi]
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [eax + 0x8]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d05e4
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [eax - 0x4]
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x20]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [eax]
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x24]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [eax + 0x4]
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x28]
        mov eax, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x5c]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x60]
        add eax, ebp
        fld dword ptr [esi + 0x4]
        shl eax, 0x6
        fmul st, st(2)
        lea eax, [eax + ecx + 0x30]
        fld dword ptr [esi]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x58]
        fld dword ptr [esi - 0x4]
        fmulp st(2), st
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [esi]
        fld dword ptr [esi - 0x4]
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [eax + 0x8]
    L_007d05e4:
        mov edx, dword ptr [edi + 0x38]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0602
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0602:
        fld dword ptr [mem_0093C1A8]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x34]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x44]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d062f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d062f:
        fld dword ptr [mem_0099D148]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x40]
        fstp dword ptr [ecx + 4*eax]
        add ebp, 0x1
    L_007d0641:
        mov eax, dword ptr [esp + 0x7c]
        add dword ptr [esp + 0x18], 0x10
        shl dword ptr [esp + 0x50], 1
        add eax, 0x1
        add esi, 0x10
        cmp eax, 0x3
        mov dword ptr [esp + 0x7c], eax
        jb near ptr L_007d0490
        test byte ptr [ebx + 0x1a0], 0x1
        je near ptr L_007d07e9
        push ebx
        push edi
        push ebp
        call ext_007CE490
        fld dword ptr [esp + 0xb0]
        mov edx, dword ptr [edi + 0x2c]
        fchs
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d06a0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d06a0:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x28]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fldz
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0xcc]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x10]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(1)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x4]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0xd0]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x14]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(1)
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x8]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0xd4]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d0784
        mov edx, dword ptr [edi + 0x4]
        fxch st(1)
        mov eax, dword ptr [edi]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x20]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(3)
        add ecx, ebp
        fchs
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x30]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(2)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x24]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x34]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x28]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x38]
        jmp short L_007d078c
    L_007d0784:
        fstp st(1)
        fstp st(0)
        fstp st(0)
        fstp st(0)
    L_007d078c:
        mov edx, dword ptr [edi + 0x38]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d07aa
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d07aa:
        fld dword ptr [mem_0093C1A8]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x34]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x44]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d07d7
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d07d7:
        fld dword ptr [mem_0099D148]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x40]
        fstp dword ptr [ecx + 4*eax]
        add ebp, 0x1
    L_007d07e9:
        mov eax, dword ptr [ebx + 0x1a0]
        and eax, 0x6
        sub eax, 0x2
        je near ptr L_007d0b59
        sub eax, 0x2
        je near ptr L_007d0aee
        sub eax, 0x2
        jne near ptr L_007d0cb9
        push ebx
        push edi
        push ebp
        call ext_007CE490
        push ebx
        lea edx, [ebp + 0x1]
        push edi
        push edx
        call ext_007CE490
        fld dword ptr [esp + 0xc0]
        mov eax, dword ptr [edi + 0x2c]
        fchs
        lea ecx, [eax + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0x18
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d084a
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d084a:
        mov edx, dword ptr [edi + 0x28]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
        mov eax, dword ptr [edi + 0x2c]
        fld dword ptr [esp + 0xac]
        lea ecx, [eax + ebp + 0x1]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d087b
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d087b:
        mov edx, dword ptr [edi + 0x28]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fldz
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0xd8]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x10]
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        lea edx, [ecx + ebp + 0x1]
        shl edx, 0x6
        fst dword ptr [edx + eax]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0xe4]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x50]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(1)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x4]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0xdc]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x14]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(1)
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x44]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0xe8]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x54]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x8]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0xe0]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x18]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(1)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x48]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0xec]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x58]
        cmp dword ptr [ebx + 0xb8], -0x1
        je near ptr L_007d0a37
        mov ecx, dword ptr [edi + 0x4]
        fxch st(1)
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x20]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(6)
        fchs
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x30]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(5)
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x60]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(4)
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x70]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(3)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x24]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(2)
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x34]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(1)
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x64]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(1)
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x74]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x28]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(1)
        add ecx, ebp
        fchs
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x38]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x68]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x78]
        jmp short L_007d0a45
    L_007d0a37:
        fstp st(1)
        fstp st(0)
        fstp st(1)
        fstp st(2)
        fstp st(1)
        fstp st(0)
        fstp st(0)
    L_007d0a45:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0a62
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0a62:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0a8e
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0a8e:
        fld dword ptr [mem_0099D148]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x38]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0abc
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0abc:
        lea edx, [ecx + 4*eax]
        fxch st(1)
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0ae6
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0ae6:
        add ebp, 0x2
        jmp near ptr L_007d0cb0
    L_007d0aee:
        push ebx
        push edi
        push ebp
        call ext_007CE490
        mov ecx, dword ptr [edi + 0x2c]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0b16
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0b16:
        fld dword ptr [esp + 0x1ac]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        fld dword ptr [esp + 0x134]
        fld dword ptr [esp + 0x1bc]
        fld dword ptr [esp + 0x130]
        fld dword ptr [esp + 0x1c0]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x12c]
        jmp short L_007d0bc2
    L_007d0b59:
        push ebx
        push edi
        push ebp
        call ext_007CE490
        mov ecx, dword ptr [edi + 0x2c]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0b81
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0b81:
        fld dword ptr [esp + 0x1a0]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        fld dword ptr [esp + 0x124]
        fld dword ptr [esp + 0x1bc]
        fld dword ptr [esp + 0x120]
        fld dword ptr [esp + 0x1c0]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x11c]
    L_007d0bc2:
        fld dword ptr [esp + 0x1b8]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(2)
        fmul st, st(1)
        add ecx, ebp
        fld st(2)
        shl ecx, 0x6
        fmulp st(6), st
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x24]
        fmulp st(1), st
        fxch st(1)
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fst dword ptr [ecx + edx + 0x10]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x14]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x28]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d0c58
        mov ecx, dword ptr [edi + 0x4]
        fxch st(2)
        mov edx, dword ptr [edi]
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x30]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x34]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d0c5e
    L_007d0c58:
        fstp st(2)
        fstp st(0)
        fstp st(0)
    L_007d0c5e:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0c7b
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0c7b:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0ca7
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0ca7:
        fld dword ptr [mem_0099D148]
        add ebp, 0x1
    L_007d0cb0:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
    L_007d0cb9:
        fld dword ptr [esp + 0x94]
        lea esi, [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x9c]
        fstp dword ptr [esp + 0x28]
        call ext_007E46B0
        test dword ptr [ebx + 0x1a4], 0x700
        fstp dword ptr [esp + 0x10]
        fld1
        fld dword ptr [esp + 0x10]
        je short L_007d0d1f
        fld st(0)
        fst qword ptr [esp + 0x38]
        fsub dword ptr [ebx + 0x1a8]
        fstp dword ptr [esp + 0x18]
        fldz
        fcomp dword ptr [esp + 0x18]
        fnstsw ax
        test ah, 0x5
        jp short L_007d0d1f
        fstp st(1)
        mov esi, 0x2
        jmp short L_007d0d53
    L_007d0d1f:
        test dword ptr [ebx + 0x1b8], 0x700
        je near ptr L_007d10b5
        fst qword ptr [esp + 0x38]
        fsub dword ptr [ebx + 0x1bc]
        fstp dword ptr [esp + 0x18]
        fldz
        fcomp dword ptr [esp + 0x18]
        fnstsw ax
        test ah, 0x5
        jp near ptr L_007d10b7
        mov esi, 0x1
    L_007d0d53:
        push ebx
        fstp st(0)
        push edi
        push ebp
        call ext_007CE490
        fld dword ptr [esp + 0x24]
        mov ecx, dword ptr [edi + 0x2c]
        fchs
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0d83
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0d83:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x28]
        mov edx, dword ptr [edi]
        fld st(0)
        add ecx, ebp
        fld dword ptr [esp + 0x70]
        shl ecx, 0x6
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x74]
        fld st(3)
        fmul st, st(3)
        fld st(2)
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x94]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x6c]
        fld st(1)
        fmulp st(3), st
        fld st(5)
        fmul st, st(1)
        fsubp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x98]
        fld st(2)
        fmulp st(2), st
        fld st(0)
        fmulp st(4), st
        fxch st(1)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x60]
        fld st(4)
        fmul st, st(2)
        fld st(3)
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x100]
        fld dword ptr [esp + 0x58]
        fld st(4)
        fmulp st(2), st
        fmul st(5), st
        fxch st(1)
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x104]
        fxch st(1)
        fmulp st(3), st
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x108]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fchs
        fstp dword ptr [ecx + edx]
        mov eax, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x94]
        mov ecx, dword ptr [edi]
        fchs
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x10]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x24]
        mov eax, dword ptr [edi]
        fld st(0)
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x4]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x98]
        mov edx, dword ptr [edi]
        add ecx, ebp
        fchs
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x14]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld st(2)
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x8]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x9c]
        mov eax, dword ptr [edi]
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d0f16
        mov ecx, dword ptr [edi + 0x4]
        fxch st(1)
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x20]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x100]
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x30]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x24]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x104]
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x34]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x28]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x108]
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d0f1c
    L_007d0f16:
        fstp st(0)
        fstp st(0)
        fstp st(0)
    L_007d0f1c:
        cmp esi, 0x2
        jne short L_007d0f90
        test dword ptr [ebx + 0x1b8], 0x700
        je short L_007d0f90
        fld dword ptr [ebx + 0x1bc]
        fld qword ptr [esp + 0x38]
        fsub st, st(1)
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x41
        jne short L_007d0f8e
        fld dword ptr [ebx + 0x1c0]
        fld qword ptr [mem_0092C180]
        fucomp st(1)
        fnstsw ax
        test ah, 0x44
        jnp short L_007d0f8c
        mov ecx, dword ptr [edi + 0x38]
        fld dword ptr [ebx + 0x1a8]
        add ecx, ebp
        fsubrp st(2), st
        mov eax, ecx
        cdq
        fmulp st(1), st
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d0faf
        dec ecx
        or ecx, -0x4
        inc ecx
        jmp short L_007d0faf
    L_007d0f8c:
        fstp st(1)
    L_007d0f8e:
        fstp st(0)
    L_007d0f90:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0fad
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0fad:
        fldz
    L_007d0faf:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d0fd5
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d0fd5:
        cmp esi, 0x1
        fld dword ptr [mem_0099D148]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        jne near ptr L_007d10ae
        fld dword ptr [ebx + 0x1c0]
        mov ecx, dword ptr [edi + 0x50]
        fld qword ptr [esp + 0xb0]
        add ecx, ebp
        fmul st(1), st
        fld dword ptr [ebx + 0x1c4]
        faddp st(2), st
        fld1
        fld st(0)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d1044
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short L_007d104e
    L_007d1044:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
    L_007d104e:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1063
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1063:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x1c0]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d10a0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d10a0:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
        add ebp, 0x1
        jmp short L_007d10b7
    L_007d10ae:
        fld1
        add ebp, 0x1
        jmp short L_007d10b7
    L_007d10b5:
        fstp st(0)
    L_007d10b7:
        lea esi, [esp + 0x110]
        mov ecx, esi
        lea edx, [ebx + 0x180]
        mov dword ptr [esp + 0x50], 0x100
        mov dword ptr [esp + 0x7c], 0x0
        mov dword ptr [esp + 0x30], ecx
        mov dword ptr [esp + 0x18], edx
    L_007d10de:
        mov eax, dword ptr [esp + 0x50]
        test dword ptr [ebx + 0x1a0], eax
        jne near ptr L_007d13ec
        mov eax, dword ptr [ebx + 0x1e4]
        test al, 0x3
        mov dword ptr [esp + 0x64], eax
        je near ptr L_007d13ec
        push ebx
        fstp st(0)
        push edi
        push ebp
        call ext_007CE490
        add esp, 0xc
        test byte ptr [esp + 0x64], 0x1
        je short L_007d1154
        mov edx, dword ptr [esp + 0x18]
        fld dword ptr [edx - 0x20]
        mov ecx, dword ptr [edi + 0x2c]
        mov eax, dword ptr [esp + 0x7c]
        fsub dword ptr [esp + 4*eax + 0x170]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d114b
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d114b:
        mov edx, dword ptr [edi + 0x28]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
    L_007d1154:
        test byte ptr [esp + 0x64], 0x2
        je short L_007d118a
        mov eax, dword ptr [edi + 0x20]
        mov edx, dword ptr [esp + 0x18]
        fld dword ptr [edx]
        lea ecx, [eax + ebp]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1181
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1181:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x1c]
        fstp dword ptr [ecx + 4*eax]
    L_007d118a:
        mov edx, dword ptr [edi + 0x38]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        test byte ptr [esp + 0x64], 0x4
        je short L_007d11e6
        and ecx, 0x80000003
        fld dword ptr [ebx + 0x1f0]
        fchs
        jns short L_007d11b7
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d11b7:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x34]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x44]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d11de
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d11de:
        fld dword ptr [ebx + 0x1f0]
        jmp short L_007d1226
    L_007d11e6:
        and ecx, 0x80000003
        jns short L_007d11f3
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d11f3:
        fld dword ptr [mem_0093C1A8]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x34]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x44]
        lea ecx, [edx + ebp]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1220
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1220:
        fld dword ptr [mem_0099D148]
    L_007d1226:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x40]
        fstp dword ptr [ecx + 4*eax]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [esp + 0x30]
        fld dword ptr [eax - 0x4]
        mov ecx, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax]
        mov ecx, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx + 0x4]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax + 0x4]
        mov ecx, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx + 0x8]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x74]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x70]
        add edx, ebp
        fld dword ptr [esi]
        shl edx, 0x6
        fmul st, st(2)
        lea ecx, [edx + ecx + 0x10]
        fld dword ptr [esi + 0x4]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [ecx]
        fld dword ptr [esp + 0x6c]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fld dword ptr [esi - 0x4]
        fmulp st(4), st
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [ecx + 0x4]
        fmul dword ptr [esi - 0x4]
        fld dword ptr [esi]
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [ecx + 0x8]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d132d
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax - 0x4]
        mov ecx, dword ptr [edi]
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx + 0x20]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax]
        mov ecx, dword ptr [edi]
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx + 0x24]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [eax + 0x4]
        mov ecx, dword ptr [edi]
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + ecx + 0x28]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x5c]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x60]
        add edx, ebp
        fld dword ptr [esi + 0x4]
        shl edx, 0x6
        fmul st, st(2)
        lea eax, [edx + eax + 0x30]
        fld dword ptr [esi]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x58]
        fld dword ptr [esi - 0x4]
        fmulp st(2), st
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [esi]
        fld dword ptr [esi - 0x4]
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [eax + 0x8]
    L_007d132d:
        fld dword ptr [ebx + 0x1e8]
        mov ecx, dword ptr [edi + 0x50]
        fld qword ptr [esp + 0xb0]
        add ecx, ebp
        fmul st(1), st
        fld dword ptr [ebx + 0x1ec]
        faddp st(2), st
        fld1
        fld st(0)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d1384
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short L_007d138e
    L_007d1384:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
    L_007d138e:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d13a3
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d13a3:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x1e8]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d13e0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d13e0:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
        add ebp, 0x1
    L_007d13ec:
        mov eax, dword ptr [esp + 0x7c]
        add dword ptr [esp + 0x18], 0x4
        add dword ptr [esp + 0x30], 0x10
        shl dword ptr [esp + 0x50], 1
        add eax, 0x1
        add esi, 0x10
        cmp eax, 0x3
        mov dword ptr [esp + 0x7c], eax
        jb near ptr L_007d10de
        fld dword ptr [esp + 0xa0]
        fst qword ptr [esp + 0x38]
        fld st(0)
        fmul st, st(1)
        fst qword ptr [esp + 0x100]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fabs
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [mem_0094CE80]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        jne short L_007d148c
        fld dword ptr [esp + 0xa4]
        fmul st(0), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fabs
        fstp dword ptr [esp + 0x10]
        fcomp dword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x1
        jne short L_007d148e
        mov ecx, dword ptr [esp + 0x240]
        fstp st(1)
        push offset mem_0099DE30
        fstp st(0)
        push ecx
        push 0x0
        call ext_007D5870
        add esp, 0xc
        jmp near ptr L_007d3410
    L_007d148c:
        fstp st(0)
    L_007d148e:
        mov ecx, dword ptr [ebx + 0x1f4]
        test cl, 0x3
        je near ptr L_007d2b37
        fld dword ptr [ebx + 0x190]
        lea esi, [ebx + 0x170]
        fld dword ptr [ebx + 0x194]
        mov eax, dword ptr [ebx + 0x1a0]
        test al, 0x7
        fld dword ptr [ebx + 0x178]
        fst qword ptr [esp + 0x20]
        fld dword ptr [ebx + 0x198]
        fst qword ptr [esp + 0x40]
        fld dword ptr [ebx + 0x17c]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [ebx + 0x174]
        fchs
        fmul st, st(4)
        fld st(2)
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x10]
        fmulp st(2), st
        fsubrp st(1), st
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x6c]
        fld dword ptr [esi]
        fst qword ptr [esp + 0x48]
        fmul st, st(4)
        fld qword ptr [esp + 0x10]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x40]
        fmulp st(3), st
        fsubrp st(2), st
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x70]
        fld dword ptr [ebx + 0x174]
        fst qword ptr [esp + 0x58]
        fld qword ptr [esp + 0x48]
        fmul st, st(3)
        fld qword ptr [esp + 0x10]
        fmul st, st(5)
        fsubp st(1), st
        fld qword ptr [esp + 0x40]
        fmul st(2), st
        fxch st(1)
        faddp st(2), st
        fxch st(1)
        fmul st, st(2)
        fstp dword ptr [esp + 0x74]
        fld qword ptr [esp + 0x20]
        fmulp st(4), st
        fld qword ptr [esp + 0x58]
        fmulp st(3), st
        fxch st(3)
        fsubrp st(2), st
        fld qword ptr [esp + 0x48]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x78]
        jne near ptr L_007d1ee1
        test cl, 0x8
        je near ptr L_007d1ee1
        fstp st(0)
        fstp st(1)
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fld dword ptr [esp + 0xa4]
        fst qword ptr [esp + 0x30]
        fld dword ptr [esi + 0xc]
        fld dword ptr [esp + 0xa8]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esi + 0x8]
        fld dword ptr [esp + 0xac]
        fstp qword ptr [esp + 0x40]
        fld st(3)
        fmul st, st(3)
        fld st(5)
        fmul st, st(7)
        faddp st(1), st
        fld qword ptr [esp + 0x10]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [esp + 0x40]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x24]
        fld qword ptr [esp + 0x10]
        fmul st, st(4)
        fld st(1)
        fmul st, st(7)
        faddp st(1), st
        fld qword ptr [esp + 0x40]
        fmul st, st(6)
        faddp st(1), st
        fld st(2)
        fmul st, st(4)
        fsubp st(1), st
        fstp dword ptr [esp + 0x28]
        fld qword ptr [esp + 0x40]
        fmul st, st(4)
        fld st(2)
        fmul st, st(7)
        faddp st(1), st
        fld st(1)
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x10]
        fmul st, st(6)
        fsubp st(1), st
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x6c]
        fst qword ptr [esp + 0x50]
        fld dword ptr [esp + 0x70]
        fstp qword ptr [esp + 0x18]
        fld dword ptr [esp + 0x78]
        fstp qword ptr [esp + 0x48]
        fld dword ptr [esp + 0x74]
        fstp qword ptr [esp + 0x64]
        fmulp st(3), st
        fld qword ptr [esp + 0x18]
        fmul st, st(6)
        faddp st(3), st
        fld qword ptr [esp + 0x48]
        fmul qword ptr [esp + 0x10]
        faddp st(3), st
        fld qword ptr [esp + 0x64]
        fld qword ptr [esp + 0x40]
        fmul st(1), st
        fxch st(4)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x70]
        fld qword ptr [esp + 0x50]
        fmul qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x64]
        fmul st, st(7)
        faddp st(1), st
        fld qword ptr [esp + 0x18]
        fmulp st(4), st
        faddp st(3), st
        fld qword ptr [esp + 0x48]
        fld qword ptr [esp + 0x30]
        fmul st(1), st
        fxch st(4)
        fsubrp st(1), st
        fstp dword ptr [esp + 0x74]
        fld qword ptr [esp + 0x50]
        fmul qword ptr [esp + 0x40]
        fld qword ptr [esp + 0x48]
        fmulp st(7), st
        faddp st(6), st
        fld qword ptr [esp + 0x64]
        fmulp st(3), st
        fxch st(5)
        faddp st(2), st
        fld qword ptr [esp + 0x18]
        fmul qword ptr [esp + 0x10]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x78]
        fld dword ptr [esp + 0xc0]
        fld dword ptr [esp + 0xcc]
        fld dword ptr [esp + 0xd8]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esp + 0xe4]
        fstp qword ptr [esp + 0x40]
        fld st(0)
        fmul st, st(4)
        fld st(2)
        fmul st, st(6)
        faddp st(1), st
        fld qword ptr [esp + 0x10]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x40]
        fmul st, st(7)
        fsubp st(1), st
        fstp dword ptr [esp + 0x14c]
        fld dword ptr [esp + 0xc4]
        fst qword ptr [esp + 0xb8]
        fld dword ptr [esp + 0xd0]
        fstp qword ptr [esp + 0x48]
        fld dword ptr [esp + 0xdc]
        fstp qword ptr [esp + 0x30]
        fld dword ptr [esp + 0xe8]
        fstp qword ptr [esp + 0x64]
        fmul st, st(5)
        fld qword ptr [esp + 0x48]
        fmul st, st(5)
        faddp st(1), st
        fld qword ptr [esp + 0x30]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x64]
        fmul st, st(7)
        fsubp st(1), st
        fstp dword ptr [esp + 0x150]
        fld dword ptr [esp + 0xc8]
        fst qword ptr [esp + 0x84]
        fld dword ptr [esp + 0xd4]
        fstp qword ptr [esp + 0x18]
        fld dword ptr [esp + 0xe0]
        fstp qword ptr [esp + 0x50]
        fld dword ptr [esp + 0xec]
        fstp qword ptr [esp + 0x7c]
        fld qword ptr [esp + 0x18]
        fmul st, st(5)
        fxch st(1)
        fmul st, st(6)
        faddp st(1), st
        fld qword ptr [esp + 0x50]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x7c]
        fmul st, st(7)
        fsubp st(1), st
        fstp dword ptr [esp + 0x154]
        fld st(1)
        fmul st, st(6)
        fld st(1)
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x10]
        fmul st, st(5)
        faddp st(1), st
        fld qword ptr [esp + 0x40]
        push ebx
        fmul st, st(6)
        push edi
        push ebp
        faddp st(1), st
        fstp dword ptr [esp + 0x164]
        fld qword ptr [esp + 0xc4]
        fmul st, st(6)
        fld qword ptr [esp + 0x54]
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x3c]
        fmul st, st(5)
        faddp st(1), st
        fld qword ptr [esp + 0x70]
        fmul st, st(6)
        faddp st(1), st
        fstp dword ptr [esp + 0x168]
        fld qword ptr [esp + 0x90]
        fmul st, st(6)
        fld qword ptr [esp + 0x24]
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x5c]
        fmul st, st(5)
        faddp st(1), st
        fld qword ptr [esp + 0x88]
        fmul st, st(6)
        faddp st(1), st
        fstp dword ptr [esp + 0x16c]
        fmul st, st(5)
        fxch st(1)
        fmul st, st(2)
        faddp st(1), st
        fld qword ptr [esp + 0x1c]
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x4c]
        fmul st, st(3)
        faddp st(1), st
        fstp dword ptr [esp + 0x170]
        fld qword ptr [esp + 0x54]
        fmul st, st(4)
        fld qword ptr [esp + 0xc4]
        fmul st, st(2)
        faddp st(1), st
        fld qword ptr [esp + 0x3c]
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x70]
        fmul st, st(3)
        faddp st(1), st
        fstp dword ptr [esp + 0x174]
        fld qword ptr [esp + 0x24]
        fmulp st(4), st
        fmul qword ptr [esp + 0x90]
        faddp st(3), st
        fld qword ptr [esp + 0x5c]
        fmulp st(2), st
        fxch st(2)
        fsubrp st(1), st
        fld qword ptr [esp + 0x88]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x178]
        call ext_007CE490
        push ebx
        lea edx, [ebp + 0x1]
        push edi
        push edx
        call ext_007CE490
        push ebx
        lea eax, [ebp + 0x2]
        push edi
        push eax
        call ext_007CE490
        add esp, 0x24
        test byte ptr [ebx + 0x1f4], 0x1
        je near ptr L_007d191d
        mov ecx, dword ptr [edi + 0x2c]
        fld dword ptr [esp + 0x24]
        add ecx, ebp
        fchs
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d18b8
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d18b8:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x2c]
        fld dword ptr [esp + 0x28]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d18e6
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d18e6:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x2c]
        fld dword ptr [esp + 0x2c]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1914
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1914:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
    L_007d191d:
        test byte ptr [ebx + 0x1f4], 0x2
        je near ptr L_007d19ac
        mov ecx, dword ptr [edi + 0x20]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1947
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1947:
        fld dword ptr [esp + 0x70]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x1c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x20]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1973
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1973:
        fld dword ptr [esp + 0x74]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x1c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x20]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d199f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d199f:
        fld dword ptr [esp + 0x78]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x1c]
        fstp dword ptr [eax + 4*edx]
    L_007d19ac:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        test byte ptr [ebx + 0x1f4], 0x4
        je near ptr L_007d1acb
        and ecx, 0x80000003
        fld dword ptr [ebx + 0x20c]
        fchs
        jns short L_007d19de
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d19de:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1a04
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1a04:
        fld dword ptr [ebx + 0x20c]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x38]
        fld dword ptr [ebx + 0x20c]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1a3a
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1a3a:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1a62
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1a62:
        fld dword ptr [ebx + 0x20c]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x38]
        fld dword ptr [ebx + 0x20c]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        fchs
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1a98
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1a98:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1ac0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1ac0:
        fld dword ptr [ebx + 0x20c]
        jmp near ptr L_007d1bb0
    L_007d1acb:
        and ecx, 0x80000003
        jns short L_007d1ad8
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1ad8:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1b04
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1b04:
        fld dword ptr [mem_0099D148]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x38]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1b32
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1b32:
        lea edx, [ecx + 4*eax]
        fxch st(1)
        mov eax, dword ptr [edi + 0x34]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1b5c
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1b5c:
        lea edx, [ecx + 4*eax]
        fxch st(1)
        mov eax, dword ptr [edi + 0x40]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x38]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1b86
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1b86:
        lea edx, [ecx + 4*eax]
        fxch st(1)
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1bb0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1bb0:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x14c]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x10]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x158]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x50]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x164]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x90]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x150]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x14]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x15c]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x54]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x168]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x94]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x154]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x18]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x160]
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x58]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x16c]
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x98]
        cmp dword ptr [ebx + 0xb8], -0x1
        je near ptr L_007d1d3b
        mov ecx, dword ptr [edi + 0x4]
        fxch st(6)
        mov edx, dword ptr [edi]
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x30]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(4)
        fchs
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x70]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(2)
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0xb0]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x34]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fchs
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x74]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fchs
        add edx, ebp
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0xb4]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x38]
        mov eax, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x160]
        mov ecx, dword ptr [edi]
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x78]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x16c]
        mov eax, dword ptr [edi]
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0xb8]
        jmp short L_007d1d49
    L_007d1d3b:
        fstp st(6)
        fstp st(4)
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
    L_007d1d49:
        fld dword ptr [ebx + 0x204]
        mov ecx, dword ptr [edi + 0x50]
        fld qword ptr [esp + 0xb0]
        add ecx, ebp
        fmul st(1), st
        fld dword ptr [ebx + 0x208]
        faddp st(2), st
        fld1
        fld st(0)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d1db5
        fmul qword ptr [mem_0099DE50]
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fstp dword ptr [esp + 0x10]
        jns short L_007d1daf
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1daf:
        fld dword ptr [esp + 0x10]
        jmp short L_007d1dd4
    L_007d1db5:
        and edx, 0x3
        fsubr st, st(1)
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fstp dword ptr [esp + 0x10]
        jns short L_007d1dd0
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1dd0:
        fld dword ptr [esp + 0x10]
    L_007d1dd4:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x50]
        lea ecx, [ecx + ebp + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1dfc
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1dfc:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fst dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x50]
        lea ecx, [ecx + ebp + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d1e24
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1e24:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        fld dword ptr [esp + 0x90]
        cdq
        fld dword ptr [ebx + 0x204]
        and edx, 0x3
        fmul st, st(2)
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d1e65
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1e65:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        fld dword ptr [ebx + 0x204]
        lea ecx, [ecx + ebp + 0x1]
        fmul st, st(2)
        mov eax, ecx
        cdq
        and edx, 0x3
        fsub st, st(1)
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d1e9f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1e9f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        fld dword ptr [ebx + 0x204]
        lea ecx, [ecx + ebp + 0x2]
        fmulp st(2), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fsubp st(1), st
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d1ed9
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1ed9:
        add ebp, 0x3
        jmp near ptr L_007d2b2a
    L_007d1ee1:
        test al, 0x1
        jne near ptr L_007d26a2
        fstp st(1)
        fld dword ptr [esp + 0x194]
        faddp st(2), st
        fmulp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x40]
        fld dword ptr [ebx + 0x174]
        fld dword ptr [esi]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ebx
        fld1
        push edi
        fdivrp st(1), st
        push ebp
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fst qword ptr [esp + 0x64]
        fld dword ptr [esp + 0x4c]
        fst qword ptr [esp + 0x90]
        fmulp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0xb0]
        fst qword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x1c]
        fst qword ptr [esp + 0x2c]
        fld dword ptr [esi]
        fmul qword ptr [esp + 0x44]
        fld dword ptr [ebx + 0x174]
        fmulp st(3), st
        fsubrp st(2), st
        fmulp st(1), st
        fstp dword ptr [esp + 0x4c]
        call ext_007CE490
        add esp, 0xc
        test byte ptr [ebx + 0x1f4], 0x1
        je short L_007d1fe2
        fld dword ptr [ebx + 0x174]
        mov ecx, dword ptr [edi + 0x2c]
        fld qword ptr [esp + 0x38]
        add ecx, ebp
        fmul st(1), st
        mov eax, ecx
        fld dword ptr [esi]
        cdq
        fld qword ptr [esp + 0x30]
        and edx, 0x3
        fmul st(1), st
        add eax, edx
        fxch st(3)
        sar eax, 0x2
        and ecx, 0x80000003
        faddp st(1), st
        fmul qword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d1fd7
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d1fd7:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        jmp short L_007d1fea
    L_007d1fe2:
        fld qword ptr [esp + 0x30]
        fld qword ptr [esp + 0x38]
    L_007d1fea:
        test byte ptr [ebx + 0x1f4], 0x2
        fld dword ptr [esp + 0x40]
        je short L_007d2041
        fld dword ptr [esi]
        mov ecx, dword ptr [edi + 0x20]
        fmul dword ptr [esp + 0x70]
        add ecx, ebp
        fld dword ptr [ebx + 0x174]
        mov eax, ecx
        fmul dword ptr [esp + 0x6c]
        cdq
        and edx, 0x3
        add eax, edx
        fsubp st(1), st
        sar eax, 0x2
        and ecx, 0x80000003
        fld st(1)
        fchs
        fmul qword ptr [esp + 0x58]
        fmulp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d2038
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2038:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x1c]
        fstp dword ptr [eax + 4*edx]
    L_007d2041:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        test byte ptr [ebx + 0x1f4], 0x4
        je short L_007d209d
        and ecx, 0x80000003
        fld dword ptr [ebx + 0x200]
        fchs
        jns short L_007d206f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d206f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2095
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2095:
        fld dword ptr [ebx + 0x200]
        jmp short L_007d20dc
    L_007d209d:
        and ecx, 0x80000003
        jns short L_007d20aa
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d20aa:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d20d6
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d20d6:
        fld dword ptr [mem_0099D148]
    L_007d20dc:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0xcc]
        mov edx, dword ptr [edi]
        fmul st, st(2)
        add ecx, ebp
        fld dword ptr [esp + 0xc0]
        shl ecx, 0x6
        fmul st, st(4)
        fsubp st(1), st
        fld st(1)
        fchs
        fmul qword ptr [esp + 0x84]
        fld st(0)
        fmul st, st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + edx + 0x10]
        mov eax, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0xd0]
        mov ecx, dword ptr [edi]
        fmul st, st(4)
        add eax, ebp
        fld dword ptr [esp + 0xc4]
        shl eax, 0x6
        fmul st, st(6)
        fsubp st(1), st
        fld st(1)
        fmul st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx + 0x14]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0xd4]
        mov eax, dword ptr [edi]
        fmul st, st(5)
        add edx, ebp
        fld dword ptr [esp + 0xc8]
        shl edx, 0x6
        fmulp st(7), st
        fsubrp st(6), st
        fxch st(1)
        fmul st, st(5)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d21dc
        mov ecx, dword ptr [edi + 0x4]
        fxch st(2)
        fmul qword ptr [esp + 0x84]
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + edx + 0x30]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fmul st(1), st
        add eax, ebp
        fxch st(1)
        shl eax, 0x6
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + ecx + 0x34]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fmulp st(2), st
        add edx, ebp
        fxch st(1)
        shl edx, 0x6
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d21e4
    L_007d21dc:
        fstp st(4)
        fstp st(0)
        fstp st(2)
        fstp st(1)
    L_007d21e4:
        fld dword ptr [ebx + 0x1f8]
        mov ecx, dword ptr [edi + 0x50]
        fld qword ptr [esp + 0xb0]
        add ecx, ebp
        fmul st(1), st
        fld dword ptr [ebx + 0x1fc]
        faddp st(2), st
        fld1
        fld st(0)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d223b
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short L_007d2245
    L_007d223b:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
    L_007d2245:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d225a
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d225a:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x1f8]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d2297
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2297:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
        add ebp, 0x1
        fxch st(1)
    L_007d22a5:
        mov eax, dword ptr [ebx + 0x1a0]
        and eax, 0x6
        not eax
        test eax, eax
        mov dword ptr [esp + 0x64], eax
        je near ptr L_007d2b37
        fstp st(0)
        fld dword ptr [esp + 0x194]
        fst qword ptr [esp + 0x58]
        faddp st(1), st
        fst qword ptr [esp + 0x20]
        fadd st(0), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ebx + 0x174]
        fld dword ptr [esi]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fmul qword ptr [mem_0093F7B0]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x30]
        fst qword ptr [esp + 0x94]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x40]
        fst qword ptr [esp + 0x84]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        mov eax, esi
        fld dword ptr [esp + 0x10]
        lea ecx, [esp + 0x14c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x48]
        fld qword ptr [esp + 0x20]
        fld st(0)
        fadd st, st(2)
        fld1
        fld st(0)
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x50]
        fld qword ptr [esp + 0x84]
        fmul qword ptr [mem_00993828]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fadd st, st(2)
        fdivr st, st(3)
        fstp dword ptr [esp + 0x18]
        fld st(4)
        fadd st, st(3)
        fld qword ptr [esp + 0x58]
        fadd qword ptr [mem_00993840]
        fmulp st(6), st
        fld qword ptr [esp + 0x94]
        fld qword ptr [mem_0092C510]
        fmul st(1), st
        fxch st(7)
        faddp st(1), st
        fmulp st(5), st
        fdivrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x48]
        fld st(2)
        faddp st(2), st
        fld st(0)
        fadd st, st(4)
        fmulp st(3), st
        fld qword ptr [esp + 0x84]
        fmulp st(4), st
        fxch st(2)
        faddp st(3), st
        fxch st(2)
        fmulp st(1), st
        fdivp st(1), st
        fstp dword ptr [esp + 0x7c]
        call ext_007CD780
        fld dword ptr [ebx + 0x194]
        fld dword ptr [esp + 0x154]
        fst qword ptr [esp + 0xb8]
        fld dword ptr [ebx + 0x198]
        fld dword ptr [esp + 0x150]
        fst qword ptr [esp + 0x84]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x94]
        fld dword ptr [esp + 0x14c]
        fld dword ptr [ebx + 0x190]
        fld st(1)
        fmulp st(4), st
        fld st(0)
        fmulp st(5), st
        fxch st(3)
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x98]
        fmulp st(1), st
        fxch st(1)
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x9c]
        fld dword ptr [esp + 0x1bc]
        fld dword ptr [esp + 0x114]
        fld dword ptr [esp + 0x1c0]
        fld dword ptr [esp + 0x110]
        fld st(3)
        fmul st, st(3)
        fld st(2)
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x6c]
        fld dword ptr [esp + 0x10c]
        fld dword ptr [esp + 0x1b8]
        fld st(3)
        fmul st, st(2)
        fld st(1)
        fmulp st(6), st
        fsubrp st(5), st
        fxch st(4)
        fstp dword ptr [esp + 0x70]
        fld st(3)
        fmulp st(2), st
        fmul st, st(4)
        fsubp st(1), st
        fstp dword ptr [esp + 0x74]
        fld dword ptr [esp + 0x124]
        fld dword ptr [esp + 0x120]
        fld st(4)
        fmul st, st(2)
        fld st(3)
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x11c]
        fld st(3)
        fmul st, st(1)
        fld st(5)
        fmulp st(4), st
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x24]
        fmul st, st(3)
        fld st(4)
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x134]
        fld dword ptr [esp + 0x130]
        fld st(4)
        fmul st, st(2)
        fld st(3)
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x12c]
        fmul st(3), st
        fld st(4)
        fmulp st(3), st
        fxch st(3)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x5c]
        fmulp st(2), st
        test byte ptr [esp + 0x64], 0x2
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x60]
        je near ptr L_007d2814
        fld dword ptr [mem_0093F8F0]
        fcomp dword ptr [esp + 0x30]
        fnstsw ax
        test ah, 0x5
        jp near ptr L_007d2814
        push ebx
        push edi
        push ebp
        call ext_007CE490
        add esp, 0xc
        test byte ptr [ebx + 0x1f4], 0x1
        je short L_007d2578
        fld dword ptr [esp + 0x50]
        mov ecx, dword ptr [edi + 0x2c]
        fmul dword ptr [esp + 0x1a0]
        add ecx, ebp
        mov eax, ecx
        cdq
        fstp dword ptr [esp + 0x10]
        and edx, 0x3
        fld dword ptr [esp + 0x10]
        add eax, edx
        fld dword ptr [esp + 0x18]
        sar eax, 0x2
        and ecx, 0x80000003
        fmul qword ptr [esp + 0x84]
        fstp dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d256f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d256f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
    L_007d2578:
        test byte ptr [ebx + 0x1f4], 0x2
        je short L_007d25ce
        fld dword ptr [esp + 0x18]
        mov ecx, dword ptr [edi + 0x20]
        fmul dword ptr [esp + 0x98]
        add ecx, ebp
        fld dword ptr [esp + 0x94]
        mov eax, ecx
        fmul qword ptr [esp + 0x84]
        cdq
        and edx, 0x3
        add eax, edx
        fmul dword ptr [esp + 0x7c]
        sar eax, 0x2
        and ecx, 0x80000003
        fsubp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d25c5
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d25c5:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x1c]
        fstp dword ptr [eax + 4*edx]
    L_007d25ce:
        fld dword ptr [esp + 0x50]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x20]
        mov edx, dword ptr [edi]
        fmul st, st(1)
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x24]
        fmul st, st(1)
        fstp dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [esp + 0x1a0]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x6c]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x70]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x74]
        fmulp st(1), st
        fsubr dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x20]
        fst dword ptr [ecx + edx + 0x10]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x14]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x28]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d26a9
        mov ecx, dword ptr [edi + 0x4]
        fxch st(2)
        mov edx, dword ptr [edi]
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x30]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x34]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d26af
    L_007d26a2:
        fstp st(0)
        jmp near ptr L_007d22a5
    L_007d26a9:
        fstp st(2)
        fstp st(0)
        fstp st(0)
    L_007d26af:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        test byte ptr [ebx + 0x1f4], 0x4
        je short L_007d270b
        and ecx, 0x80000003
        fld dword ptr [ebx + 0x20c]
        fchs
        jns short L_007d26dd
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d26dd:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2703
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2703:
        fld dword ptr [ebx + 0x20c]
        jmp short L_007d274a
    L_007d270b:
        and ecx, 0x80000003
        jns short L_007d2718
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2718:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2744
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2744:
        fld dword ptr [mem_0099D148]
    L_007d274a:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x50]
        fld dword ptr [ebx + 0x204]
        add ecx, ebp
        fld qword ptr [esp + 0xb0]
        fmul st(1), st
        fld dword ptr [ebx + 0x208]
        faddp st(2), st
        fld1
        fld st(0)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d27aa
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short L_007d27b4
    L_007d27aa:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
    L_007d27b4:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d27c9
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d27c9:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x204]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d2806
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2806:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
        add ebp, 0x1
        jmp short L_007d2816
    L_007d2814:
        fld1
    L_007d2816:
        test byte ptr [esp + 0x64], 0x4
        je near ptr L_007d2b33
        fld dword ptr [mem_0093F8F0]
        fcomp dword ptr [esp + 0x30]
        fnstsw ax
        test ah, 0x5
        jp near ptr L_007d2b33
        push ebx
        fstp st(0)
        push edi
        push ebp
        call ext_007CE490
        add esp, 0xc
        test byte ptr [ebx + 0x1f4], 0x1
        je short L_007d28a0
        fld dword ptr [esp + 0x50]
        mov ecx, dword ptr [edi + 0x2c]
        fmul dword ptr [esp + 0x1ac]
        add ecx, ebp
        mov eax, ecx
        cdq
        fstp dword ptr [esp + 0x10]
        and edx, 0x3
        fld dword ptr [esp + 0x10]
        add eax, edx
        fld dword ptr [esp + 0x18]
        sar eax, 0x2
        and ecx, 0x80000003
        fmul qword ptr [esp + 0xb8]
        fstp dword ptr [esp + 0x10]
        fsub dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d2897
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2897:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
    L_007d28a0:
        test byte ptr [ebx + 0x1f4], 0x2
        je short L_007d28f6
        fld dword ptr [esp + 0x18]
        mov ecx, dword ptr [edi + 0x20]
        fmul dword ptr [esp + 0x9c]
        add ecx, ebp
        fld dword ptr [esp + 0x94]
        mov eax, ecx
        fmul qword ptr [esp + 0xb8]
        cdq
        and edx, 0x3
        add eax, edx
        fmul dword ptr [esp + 0x7c]
        sar eax, 0x2
        and ecx, 0x80000003
        fsubp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d28ed
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d28ed:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x1c]
        fstp dword ptr [eax + 4*edx]
    L_007d28f6:
        fld dword ptr [esp + 0x50]
        mov ecx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x58]
        mov edx, dword ptr [edi]
        fmul st, st(1)
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x5c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x5c]
        fmul dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [esp + 0x1ac]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x6c]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x70]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x74]
        fmulp st(1), st
        fsubr dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x60]
        fld dword ptr [esp + 0x58]
        fst dword ptr [ecx + edx + 0x10]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x5c]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x14]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x60]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d29ca
        mov ecx, dword ptr [edi + 0x4]
        fxch st(2)
        mov edx, dword ptr [edi]
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x30]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x34]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d29d0
    L_007d29ca:
        fstp st(2)
        fstp st(0)
        fstp st(0)
    L_007d29d0:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        test byte ptr [ebx + 0x1f4], 0x4
        je short L_007d2a2c
        and ecx, 0x80000003
        fld dword ptr [ebx + 0x20c]
        fchs
        jns short L_007d29fe
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d29fe:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2a24
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2a24:
        fld dword ptr [ebx + 0x20c]
        jmp short L_007d2a6b
    L_007d2a2c:
        and ecx, 0x80000003
        jns short L_007d2a39
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2a39:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2a65
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2a65:
        fld dword ptr [mem_0099D148]
    L_007d2a6b:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x50]
        fld dword ptr [ebx + 0x204]
        add ecx, ebp
        fld qword ptr [esp + 0xb0]
        fmul st(1), st
        fld dword ptr [ebx + 0x208]
        faddp st(2), st
        fld1
        fld st(0)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d2acb
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short L_007d2ad5
    L_007d2acb:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
    L_007d2ad5:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2aea
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2aea:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x204]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d2b27
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2b27:
        add ebp, 0x1
    L_007d2b2a:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
    L_007d2b33:
        fld qword ptr [esp + 0x38]
    L_007d2b37:
        test byte ptr [ebx + 0x1a4], 0x1
        fld dword ptr [ebx + 0x1ac]
        fmul st(0), st
        fstp dword ptr [esp + 0x40]
        fld dword ptr [ebx + 0x1c8]
        fmul st(0), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fld st(3)
        fsub st, st(1)
        fstp dword ptr [esp + 0x48]
        je short L_007d2bb1
        fld dword ptr [esp + 0x40]
        fld st(0)
        fld dword ptr [esp + 0xa4]
        fst qword ptr [esp + 0x30]
        fld st(1)
        fmul st, st(1)
        fmulp st(1), st
        fld st(6)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fmul st, st(5)
        fmul st, st(5)
        fsubp st(1), st
        fstp dword ptr [esp + 0x18]
        fldz
        fcomp dword ptr [esp + 0x18]
        fnstsw ax
        test ah, 0x5
        jp short L_007d2baf
        fstp st(1)
        mov esi, 0x2
        fstp st(2)
        fstp st(0)
        jmp short L_007d2bf3
    L_007d2baf:
        fstp st(0)
    L_007d2bb1:
        test byte ptr [ebx + 0x1b8], 0x1
        je near ptr L_007d2e9a
        fld dword ptr [esp + 0xa4]
        fst qword ptr [esp + 0x30]
        fmul st(1), st
        fmulp st(1), st
        fld dword ptr [esp + 0x48]
        fmul st, st(3)
        fmulp st(3), st
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fldz
        fcomp dword ptr [esp + 0x18]
        fnstsw ax
        test ah, 0x5
        jp near ptr L_007d2ea2
        mov esi, 0x1
    L_007d2bf3:
        fstp dword ptr [esp + 0x48]
        push ebx
        fld dword ptr [esp + 0x4c]
        push edi
        fst qword ptr [esp + 0x28]
        push ebp
        fsubp st(1), st
        fstp dword ptr [esp + 0x1c]
        call ext_007CE490
        fld dword ptr [esp + 0x1c]
        mov ecx, dword ptr [edi + 0x4]
        fld qword ptr [mem_0092C510]
        mov edx, dword ptr [edi]
        fmul st(1), st
        add ecx, ebp
        fxch st(1)
        shl ecx, 0x6
        add esp, 0xc
        fmul qword ptr [esp + 0x38]
        fld qword ptr [esp + 0x20]
        fmulp st(2), st
        fxch st(1)
        fmul qword ptr [esp + 0x30]
        fld dword ptr [esp + 0xc0]
        fmul st, st(2)
        fld dword ptr [esp + 0xcc]
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x6c]
        fldz
        fst dword ptr [ecx + edx]
        mov eax, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x6c]
        mov ecx, dword ptr [edi]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x10]
        mov edx, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0xc4]
        mov eax, dword ptr [edi]
        fmul st, st(4)
        add edx, ebp
        fld dword ptr [esp + 0xd0]
        shl edx, 0x6
        fmul st, st(4)
        fsubp st(1), st
        fstp dword ptr [esp + 0x70]
        fxch st(1)
        fst dword ptr [edx + eax + 0x4]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x70]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x14]
        mov eax, dword ptr [edi + 0x4]
        fld dword ptr [esp + 0xc8]
        mov ecx, dword ptr [edi]
        fmulp st(5), st
        add eax, ebp
        fld dword ptr [esp + 0xd4]
        shl eax, 0x6
        fmulp st(4), st
        fxch st(4)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x74]
        fxch st(1)
        fst dword ptr [eax + ecx + 0x8]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x74]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d2d50
        mov ecx, dword ptr [edi + 0x4]
        fxch st(1)
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x20]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(2)
        fchs
        add eax, ebp
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x30]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x24]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(2)
        fchs
        add ecx, ebp
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x34]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(1)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x28]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d2d56
    L_007d2d50:
        fstp st(0)
        fstp st(1)
        fstp st(1)
    L_007d2d56:
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2d73
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2d73:
        fld dword ptr [mem_0093C1A8]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2d9f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2d9f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x2c]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2dc5
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2dc5:
        cmp esi, 0x1
        fld dword ptr [esp + 0x18]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        jne near ptr L_007d2e95
        fld dword ptr [ebx + 0x1f8]
        mov ecx, dword ptr [edi + 0x50]
        fld qword ptr [esp + 0xb0]
        add ecx, ebp
        fmul st(1), st
        fld dword ptr [ebx + 0x1fc]
        faddp st(2), st
        fld1
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d2e30
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jmp short L_007d2e3a
    L_007d2e30:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
    L_007d2e3a:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d2e4f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2e4f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x1f8]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        jns short L_007d2e8c
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d2e8c:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
    L_007d2e95:
        add ebp, 0x1
        jmp short L_007d2ea6
    L_007d2e9a:
        fstp st(3)
        fstp st(2)
        fstp st(0)
        jmp short L_007d2ea4
    L_007d2ea2:
        fstp st(1)
    L_007d2ea4:
        fstp st(0)
    L_007d2ea6:
        fld dword ptr [esp + 0xa4]
        fmul st(0), st
        fadd qword ptr [esp + 0x100]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0xac]
        fld dword ptr [esp + 0xa8]
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x40]
        fld st(0)
        fld1
        fadd st(1), st
        fld st(2)
        fld qword ptr [mem_0092C510]
        fmul st(1), st
        fxch st(1)
        fmul st, st(3)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fmul st(0), st
        fstp dword ptr [esp + 0x10]
        fld st(1)
        fdivrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x30]
        fst qword ptr [esp + 0x84]
        fmulp st(2), st
        fxch st(1)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [ebx + 0x1b0]
        fld dword ptr [esp + 0x1a0]
        fld st(1)
        fadd st, st(3)
        fmul st, st(1)
        fld st(3)
        fsubrp st(3), st
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x64]
        fld dword ptr [ebx + 0x1d4]
        fld st(0)
        fadd st, st(3)
        fmul st, st(2)
        fld st(3)
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [ebx + 0x1b4]
        fld dword ptr [esp + 0x1ac]
        fld st(1)
        fadd st, st(4)
        fmul st, st(1)
        fld st(4)
        fsubrp st(3), st
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x50]
        fld dword ptr [ebx + 0x1d8]
        fld st(0)
        fadd st, st(4)
        fmul st, st(2)
        fld st(4)
        fsubrp st(2), st
        fdivrp st(1), st
        fstp dword ptr [esp + 0x7c]
        test byte ptr [ebx + 0x1a4], 0x6
        fld dword ptr [esp + 0x64]
        fmul st, st(2)
        fld dword ptr [esp + 0x50]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x18]
        fmulp st(2), st
        fmul dword ptr [esp + 0x7c]
        faddp st(1), st
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x10]
        je short L_007d3046
        fld dword ptr [esp + 0x40]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_007d3044
        fstp st(1)
        fdivp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        mov esi, 0x2
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x30]
        fld st(1)
        fmul qword ptr [esp + 0x84]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmul st, st(3)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x18]
        jmp short L_007d30bb
    L_007d3044:
        fstp st(0)
    L_007d3046:
        test byte ptr [ebx + 0x1b8], 0x6
        je near ptr L_007d340c
        fld dword ptr [esp + 0x38]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne near ptr L_007d340c
        fdivp st(1), st
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x64]
        call ext_006A7250
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        mov esi, 0x1
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x30]
        fld st(1)
        fmul qword ptr [esp + 0x84]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmul st, st(3)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x7c]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x64]
    L_007d30bb:
        fstp dword ptr [esp + 0x30]
        push ebx
        push edi
        fstp dword ptr [esp + 0x50]
        push ebp
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x3c]
        fmul st, st(2)
        fmul st, st(1)
        fstp dword ptr [esp + 0x54]
        fmul dword ptr [esp + 0x1a0]
        fxch st(2)
        fmul qword ptr [mem_00993828]
        fsubp st(2), st
        fdivp st(1), st
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x118]
        fmul st, st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x11c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x120]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x4c]
        fmul st, st(1)
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x128]
        fmul st, st(1)
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x12c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x130]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        fmul dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x138]
        fmul st, st(1)
        fadd dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x13c]
        fmul st, st(1)
        fadd dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x140]
        fadd dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x1cc]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x1c8]
        fld st(3)
        fmul st, st(3)
        fld st(2)
        fmul st, st(2)
        fsubp st(1), st
        fstp dword ptr [esp + 0x78]
        fld dword ptr [esp + 0x1c4]
        fld dword ptr [esp + 0x2c]
        fxch st(3)
        fmul st, st(1)
        fld st(3)
        fmulp st(5), st
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x7c]
        fmulp st(1), st
        fxch st(2)
        fmulp st(1), st
        fsubp st(1), st
        fstp dword ptr [esp + 0x80]
        call ext_007CE490
        add esp, 0xc
        mov ecx, dword ptr [edi + 0x4]
        fldz
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x6c]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x10]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x4]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fld dword ptr [esp + 0x70]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x14]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(1)
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x8]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0x74]
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x18]
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d32c0
        mov ecx, dword ptr [edi + 0x4]
        fxch st(1)
        mov edx, dword ptr [edi]
        add ecx, ebp
        shl ecx, 0x6
        fst dword ptr [ecx + edx + 0x20]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        fxch st(3)
        add eax, ebp
        fchs
        shl eax, 0x6
        fstp dword ptr [eax + ecx + 0x30]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(2)
        add edx, ebp
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x24]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        fxch st(1)
        add ecx, ebp
        fchs
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x34]
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add eax, ebp
        shl eax, 0x6
        fst dword ptr [eax + ecx + 0x28]
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        fxch st(1)
        add edx, ebp
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0x38]
        jmp short L_007d32c6
    L_007d32c0:
        fstp st(3)
        fstp st(1)
        fstp st(1)
    L_007d32c6:
        mov ecx, dword ptr [edi + 0x2c]
        fld dword ptr [esp + 0x10]
        add ecx, ebp
        fchs
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d32e9
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d32e9:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x28]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x38]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d330f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d330f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x44]
        add ecx, ebp
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d3335
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d3335:
        cmp esi, 0x1
        fld dword ptr [mem_0099D148]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x40]
        fstp dword ptr [eax + 4*edx]
        jne near ptr L_007d3407
        fld dword ptr [ebx + 0x1dc]
        mov ecx, dword ptr [edi + 0x50]
        fld qword ptr [esp + 0xb0]
        add ecx, ebp
        fmul st(1), st
        fld dword ptr [ebx + 0x1e0]
        faddp st(2), st
        fld1
        fdivrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x8c]
        fld qword ptr [mem_0092C508]
        fmul st, st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        cdq
        jne short L_007d33a2
        fmul qword ptr [mem_0099DE50]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        jmp short L_007d33ac
    L_007d33a2:
        fsubr st, st(1)
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
    L_007d33ac:
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d33c1
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d33c1:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x4c]
        fstp dword ptr [eax + 4*edx]
        mov ecx, dword ptr [edi + 0x14]
        add ecx, ebp
        fmulp st(1), st
        mov eax, ecx
        cdq
        and edx, 0x3
        fmul dword ptr [ebx + 0x1dc]
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        fsub dword ptr [esp + 0x90]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        jns short L_007d33fe
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d33fe:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [edi + 0x10]
        fstp dword ptr [eax + 4*edx]
    L_007d3407:
        add ebp, 0x1
        jmp short L_007d3410
    L_007d340c:
        fstp st(1)
        fstp st(0)
    L_007d3410:
        test ebp, ebp
        jne short L_007d3478
        push ebx
        push edi
        push ebp
        call ext_007CE490
        mov ecx, dword ptr [edi + 0x38]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        add esp, 0xc
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d343a
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d343a:
        mov edx, dword ptr [edi + 0x34]
        fld dword ptr [mem_0093C1A8]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
        mov ecx, dword ptr [edi + 0x44]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d3464
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d3464:
        fld dword ptr [mem_0099D148]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [edi + 0x40]
        fstp dword ptr [ecx + 4*eax]
        mov ebp, 0x1
    L_007d3478:
        push ebp
        push edi
        call ext_007CDC00
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x218
        ret
    }
}

extern "C" void ext_007DE210();

// [0x007C8AC0] sub_007C8AC0 (97 bytes)
extern "C" __declspec(naked) void __cdecl fn_007C8AC0() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0xc]
        test ecx, ecx
        je loc_7c8ad5
        xor eax, eax
        cmp ecx, dword ptr [esp + 0x4]
        sete al
        ret

    loc_7c8ad5:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x18]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_007DE210
        test eax, eax
        jl loc_7c8b1a
        cmp eax, dword ptr [esi + 0xc]
        jge loc_7c8b1a
        mov edx, dword ptr [esi + 0x10]
        mov ecx, eax
        imul ecx, ecx, 0x9c
        cmp dword ptr [ecx + edx + 0x8], eax
        jne loc_7c8b1a
        mov eax, 0x1
        movzx eax, al
        pop esi
        ret

    loc_7c8b1a:
        xor eax, eax
        movzx eax, al
        pop esi
        ret
    }
}

// [0x007C7A70] sub_007C7A70 (1732 bytes)
// Convention: this in eax; three stack args (a1 at [esp+4], a2 at [esp+8], a3 at [esp+0xc]),
// plus a4 at [esp+0x10]; caller cleans (plain ret).
extern "C" __declspec(naked) void __cdecl fn_007C7A70(void) {
    __asm {
        sub esp, 0x16c
        mov ecx, dword ptr [esp + 0x174]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x178]
        push esi
        xor esi, esi
        cmp ecx, dword ptr [esp + 0x184]
        push edi
        mov ebx, eax
        mov dword ptr [esp + 0x34], esi
        mov dword ptr [esp + 0x30], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x10], esi
        jge L7C7B02
        mov edi, dword ptr [ebx + 0x28]
        mov edx, dword ptr [ebx + 0x8]
        lea eax, [ecx + 2*ecx]
        lea eax, [edi + 4*eax]
        mov edi, dword ptr [ebx + 0x1c]
        sub edi, edx
        mov dword ptr [esp + 0x14], eax
        lea eax, [edx + 4*ecx]
        mov edx, dword ptr [esp + 0x188]
        sub edx, ecx
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [esp + 0x24], edi
        mov edx, esi
        jmp L7C7ADA
L7C7AD6:
        mov edi, dword ptr [esp + 0x24]
L7C7ADA:
        add esi, dword ptr [edi + eax]
        mov edi, dword ptr [eax]
        add dword ptr [esp + 0x28], edi
        mov edi, dword ptr [esp + 0x14]
        add edx, dword ptr [edi]
        add edi, 0xc
        add eax, 0x4
        sub dword ptr [esp + 0x1c], 0x1
        mov dword ptr [esp + 0x14], edi
        jne L7C7AD6
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x20], esi
L7C7B02:
        mov edi, dword ptr [esp + 0x188]
        sub edi, ecx
        mov ecx, esi
        shl ecx, 0x6
        lea eax, [ebp + 0x134]
        push ecx
        push eax
        mov dword ptr [esp + 0x24], edi
        call ext_007D62D0
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x30]
        push edx
        push ecx
        mov dword ptr [esp + 0x24], eax
        lea eax, [ebp + 0x19c]
        push edi
        push eax
        mov dword ptr [esp + 0x60], eax
        call ext_007D6DD0
        fld dword ptr [esp + 0x1a4]
        mov edx, dword ptr [ebp + 0x5f0]
        mov ecx, dword ptr [ebp + 0x5d0]
        add esp, 0x18
        push edx
        mov edx, dword ptr [esp + 0x18]
        push ecx
        mov edi, eax
        push edi
        push edx
        mov edx, dword ptr [esp + 0x194]
        lea eax, [ebp + 0x260]
        push eax
        lea eax, [ebp + 0x1dc]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x1a4]
        fstp dword ptr [esp]
        push ecx
        push edx
        push ebx
        mov dword ptr [esp + 0x74], edi
        call ext_007D66B0
        fld dword ptr [ebp + 0x208]
        mov ecx, dword ptr [esp + 0x1ac]
        mov edx, dword ptr [ebx + 0x14]
        add ecx, ecx
        mov dword ptr [esp + 0x54], eax
        mov eax, dword ptr [ebx + 0x18]
        add ecx, ecx
        mov ecx, dword ptr [ecx + eax]
        fstp dword ptr [ebp + 0x268]
        fld dword ptr [esp + 0x1b4]
        lea eax, [edx + 4*ecx]
        lea ecx, [ebp + 0x260]
        xor edx, edx
        fstp dword ptr [ecx]
        add esp, 0x28
        mov dword ptr [esp + 0x78], ecx
        mov dword ptr [esp + 0x50], edi
        cmp dword ptr [edi + 0x68], edx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x18], edx
        je L7C7C2E
        mov eax, dword ptr [edi + 0x64]
        mov ecx, dword ptr [edi + 0x68]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x24], ecx
        _emit 0x8d
        _emit 0x9b
        _emit 0
        _emit 0
        _emit 0
        _emit 0
L7C7BF0:
        mov ecx, dword ptr [eax]
        and ecx, 0x80000003
        jns L7C7BFF
        dec ecx
        or ecx, -4
        inc ecx
L7C7BFF:
        mov ecx, dword ptr [eax]
        je L7C7C1A
        mov eax, ecx
        and eax, 0x80000003
        jns L7C7C11
        dec eax
        or eax, -4
        inc eax
L7C7C11:
        sub ecx, eax
        mov eax, dword ptr [esp + 0x18]
        add ecx, 4
L7C7C1A:
        add eax, 4
        add edx, ecx
        sub dword ptr [esp + 0x24], 1
        mov dword ptr [esp + 0x18], eax
        jne L7C7BF0
        mov dword ptr [esp + 0x18], edx
L7C7C2E:
        mov eax, dword ptr [ebp + 0x5d0]
        test eax, eax
        jne L7C7C8C
        mov ecx, dword ptr [ebp + 0x29c]
        mov edx, dword ptr [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [edi + 0x7c]
        push esi
        push edx
        mov edx, dword ptr [edi + 0x80]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edi + 0x84]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ecx
        call ext_007DA220
        push eax
        lea edx, [ebp + 0xa8]
        push edx
        mov dword ptr [esp + 0x4c], eax
        call ext_007D62D0
        mov dword ptr [ebp + 0x288], eax
        mov eax, dword ptr [esp + 0x4c]
        add esp, 0x20
        mov dword ptr [ebp + 0x28c], eax
        jmp L7C7CBB
L7C7C8C:
        cmp eax, 1
        jne L7C7CBF
        mov ecx, dword ptr [ebp + 0x5f0]
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push eax
        push esi
        push edx
        lea ecx, [ebp + 0xc8]
        push ecx
        lea edx, [esp + 0x48]
        push edx
        lea eax, [esp + 0xdc]
        push eax
        call ext_007D71D0
        add esp, 0x1c
L7C7CBB:
        mov edx, dword ptr [esp + 0x18]
L7C7CBF:
        mov ecx, dword ptr [ebp + 0x5f0]
        push ecx
        mov ecx, dword ptr [edi + 0x74]
        push ecx
        push esi
        push edx
        mov edx, dword ptr [esp + 0x38]
        push edx
        lea eax, [ebp + 0xe8]
        push eax
        lea eax, [esp + 0x48]
        push eax
        lea ecx, [esp + 0x6c]
        push ecx
        lea edx, [esp + 0xb4]
        push edx
        call ext_007D7700
        mov eax, dword ptr [esp + 0x34]
        push esi
        push eax
        lea ecx, [esp + 0xcc]
        push ecx
        lea edx, [esp + 0x84]
        push edx
        call ext_007D6AA0
        mov eax, dword ptr [esp + 0x50]
        mov ecx, dword ptr [ebx + 0x8]
        mov edx, dword ptr [ebx + 0x4]
        push eax
        mov eax, dword ptr [esp + 0x1bc]
        add eax, eax
        add eax, eax
        add ecx, eax
        push ecx
        add edx, eax
        mov eax, dword ptr [ebx]
        push edx
        push eax
        lea ecx, [esp + 0xf0]
        push ecx
        call ext_007D6B00
        mov edx, dword ptr [esp + 0x5c]
        mov eax, dword ptr [esp + 0x58]
        add esp, 0x48
        push ecx
        mov dword ptr [edi + 0x8], esi
        mov dword ptr [edi + 0xa0], esi
        fld dword ptr [ebp + 0x260]
        fstp dword ptr [esp]
        push esi
        push edx
        push eax
        lea ecx, [esp + 0x70]
        push ecx
        lea edx, [esp + 0x80]
        push edx
        call ext_007DA2D0
        mov eax, dword ptr [esp + 0x19c]
        mov ecx, dword ptr [ebx + 0x1c]
        mov edx, dword ptr [esp + 0x68]
        add eax, eax
        add eax, eax
        add ecx, eax
        mov dword ptr [edx + 0x94], ecx
        mov eax, dword ptr [esp + 0x68]
        mov ecx, dword ptr [esp + 0x34]
        push 0
        mov dword ptr [eax + 0x98], ecx
        call ext_00493D90
        mov eax, dword ptr [ebp + 0x5d0]
        add esp, 0x1c
        test eax, eax
        jne L7C7DE9
        mov edx, dword ptr [ebp + 0x5f0]
        push edx
        lea eax, [ebp + 0x294]
        push eax
        sub esp, 0x38
        mov edi, esp
        xor eax, eax
        push eax
        mov ecx, 0xe
        lea esi, [esp + 0x94]
        rep movsd
        sub esp, 0x30
        mov ecx, 0xc
        lea esi, [esp + 0x108]
        mov edi, esp
        rep movsd
        call ext_007D7A50
        add esp, 0x74
        jmp L7C7EAE
L7C7DE9:
        cmp eax, 1
        jne L7C7EB2
        mov ecx, dword ptr [ebp + 0x5f0]
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        mov edx, dword ptr [ecx + 0xa8]
        push edx
        mov edx, dword ptr [ecx + 0x7c]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x80]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x84]
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [ecx + 0xb0]
        mov ecx, dword ptr [esp + 0x8c]
        mov edx, dword ptr [esp + 0x90]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x9c]
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0xac]
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        call ext_007D7990
        mov eax, dword ptr [ebp + 0x5f0]
        add esp, 0x28
        push eax
        lea ecx, [ebp + 0x294]
        push ecx
        sub esp, 0x38
        mov edi, esp
        mov ecx, 0xe
        lea esi, [esp + 0x90]
        rep movsd
        sub esp, 0xb8
        mov edi, esp
        mov ecx, 0x2e
        lea esi, [esp + 0x1bc]
        rep movsd
        sub esp, 0x30
        mov ecx, 0xc
        lea esi, [esp + 0x1bc]
        mov edi, esp
        rep movsd
        call ext_007D8F60
        add esp, 0x128
L7C7EAE:
        mov esi, dword ptr [esp + 0x20]
L7C7EB2:
        mov edx, dword ptr [esp + 0x6c]
        mov ecx, dword ptr [esp + 0x70]
        push esi
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x84]
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [esp + 0x20]
        push eax
        call ext_007D8EB0
        add esp, 0x14
        cmp dword ptr [ebp + 0x5c8], 0
        je L7C7F23
        mov esi, dword ptr [esp + 0x184]
        cmp esi, dword ptr [esp + 0x188]
        jge L7C7F23
        xor edi, edi
L7C7EF7:
        mov ecx, dword ptr [ebx + 0x8]
        cmp dword ptr [ecx + 4*esi], 0
        jle L7C7F17
        mov edx, dword ptr [esp + 0xb8]
        mov eax, dword ptr [edi + edx]
        push esi
        push ebp
        call ext_007C79E0
        add esp, 0x8
        add edi, 0x4
L7C7F17:
        add esi, 0x1
        cmp esi, dword ptr [esp + 0x188]
        jl L7C7EF7
L7C7F23:
        mov eax, dword ptr [esp + 0x20]
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xd
        lea esi, [ebp + 0x260]
        rep movsd
        mov edi, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x44]
        push eax
        push edi
        push ecx
        call ext_007D8E80
        add esp, 0x40
        cmp dword ptr [ebp + 0x5d0], 0
        jne L7C7F6B
        mov edx, dword ptr [ebp + 0x288]
        push edx
        lea eax, [ebp + 0xa8]
        push eax
        call ext_007D6360
        add esp, 0x8
L7C7F6B:
        cmp dword ptr [ebp + 0x5d0], 1
        jne L7C7F88
        mov ecx, dword ptr [esp + 0x34]
        push ecx
        lea edx, [ebp + 0xc8]
        push edx
        call ext_007D6360
        add esp, 0x8
L7C7F88:
        mov eax, dword ptr [esp + 0x30]
        push eax
        lea eax, [ebp + 0xe8]
        push eax
        call ext_007D6360
        mov ecx, dword ptr [esp + 0x18c]
        add esp, 0x8
        cmp ecx, dword ptr [esp + 0x188]
        mov esi, ecx
        jge L7C7FE0
        jmp L7C7FB7
L7C7FB0:
        mov ecx, dword ptr [esp + 0x184]
L7C7FB7:
        mov eax, dword ptr [ebx + 0x18]
        mov edx, dword ptr [eax + 4*esi]
        add ecx, ecx
        add ecx, ecx
        sub edx, dword ptr [eax + ecx]
        push ebx
        shl edx, 0x6
        add edx, edi
        push esi
        push edx
        call ext_007D6980
        add esi, 0x1
        add esp, 0xc
        cmp esi, dword ptr [esp + 0x188]
        jl L7C7FB0
L7C7FE0:
        lea eax, [ebp + 0x134]
        push edi
        push eax
        call ext_007D6360
        mov eax, dword ptr [esp + 0x58]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov esi, dword ptr [eax + 0x64]
        mov edi, dword ptr [esp + 0x9c]
        mov dword ptr [esp + 0x40], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esp + 0x48], ecx
        mov ecx, dword ptr [eax + 0x68]
        mov dword ptr [esp + 0x44], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x94], ecx
        mov ecx, dword ptr [esp + 0x18c]
        mov dword ptr [esp + 0x4c], edx
        mov edx, dword ptr [eax + 0x6c]
        add esp, 0x8
        cmp ecx, dword ptr [esp + 0x188]
        mov dword ptr [esp + 0x90], edx
        mov dword ptr [esp + 0x10], ecx
        jge L7C8117
        mov dword ptr [esp + 0x14], 0
        _emit 0x8d
        _emit 0x49
        _emit 0
L7C8050:
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [eax + 4*ecx], 0
        jle L7C8103
        mov edx, dword ptr [ebp + 0x5d4]
        push edx
        mov edx, dword ptr [esp + 0x90]
        push edi
        sub esp, 0xc
        mov eax, esp
        mov dword ptr [eax], esi
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0xa4]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x4c]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x60]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x68]
        push ebx
        push ecx
        mov dword ptr [eax + 0xc], edx
        call ext_007D6CF0
        mov eax, dword ptr [esp + 0x7c]
        mov ecx, dword ptr [eax + 0x88]
        mov edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [edx + ecx]
        mov edx, dword ptr [esp + 0x7c]
        mov edx, dword ptr [edx + 0x70]
        mov ecx, eax
        shl ecx, 0x6
        add dword ptr [esp + 0x64], ecx
        mov ecx, dword ptr [esp + 0x40]
        mov edx, dword ptr [ecx + edx]
        lea edi, [edi + 4*eax]
        mov eax, dword ptr [ebp + 0x248]
        add ecx, 0x4
        add esp, 0x2c
        test al, 0x3
        lea esi, [esi + 4*edx]
        mov dword ptr [esp + 0x14], ecx
        je L7C80FF
        mov ecx, dword ptr [ebp + 0x5f0]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        push eax
        push edx
        push ebx
        call ext_007C7750
        add esp, 0x10
L7C80FF:
        mov ecx, dword ptr [esp + 0x10]
L7C8103:
        add ecx, 0x1
        cmp ecx, dword ptr [esp + 0x188]
        mov dword ptr [esp + 0x10], ecx
        jl L7C8050
L7C8117:
        mov eax, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x48]
        push eax
        push ecx
        call ext_007D6360
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x16c
        ret
    }
}
