// Decompiled translation unit: src/UtilityGraphics/BallLocator.cpp
#include <math.h>

extern "C" {
    extern double mem_00932468;
    extern double mem_00955090;
    extern double mem_00955088;
    __declspec(dllimport) void __stdcall mem_009254A4(float, float, float);
    __declspec(dllimport) void __stdcall mem_00925490(unsigned int);
    __declspec(dllimport) void __stdcall mem_0092548C(float, float, float);
    __declspec(dllimport) void __stdcall mem_00925488();
}

// [0x00538B00] UtilityGraphics::BallLocator::vfunc_22 (456 bytes)
extern "C" void __fastcall fn_00538B00(void* self, int edx_unused, int arg0) {
    float r = (float)(*(float*)((char*)self + 0x14) * mem_00932468);
    if (*((unsigned char*)self + 0x18) != 0) {
        mem_009254A4(1.0f, 0.0f, 0.0f);
    }

    mem_00925490(2);
    for (int i = 0; i < 16; ++i) {
        float a = (float)(i * mem_00955090 * mem_00955088);
        mem_0092548C(r * cosf(a), r * sinf(a), 0.0f);
    }
    mem_00925488();

    mem_00925490(2);
    for (int i = 0; i < 16; ++i) {
        float a = (float)(i * mem_00955090 * mem_00955088);
        mem_0092548C(0.0f, r * sinf(a), r * cosf(a));
    }
    mem_00925488();

    mem_00925490(2);
    for (int i = 0; i < 16; ++i) {
        float a = (float)(i * mem_00955090 * mem_00955088);
        mem_0092548C(r * cosf(a), 0.0f, r * sinf(a));
    }
    mem_00925488();
}
