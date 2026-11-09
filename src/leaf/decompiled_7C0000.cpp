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
