// Decompiled translation unit: src/leaf/decompiled_7C0000.cpp

extern "C" float mem_0099D148;
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
