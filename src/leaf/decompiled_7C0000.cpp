// Decompiled translation unit: src/leaf/decompiled_7C0000.cpp

extern "C" float mem_0099D148;
extern "C" int mem_009552D0;
extern "C" void ext_007DD130();

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
