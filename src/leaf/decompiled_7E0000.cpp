// Decompiled translation unit: src/leaf/decompiled_7E0000.cpp

#include <math.h>

extern "C" void ext_007C8A50();

// [0x007E4690] sub_007E4690 (21 bytes)
extern "C" void __cdecl fn_007E4690(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 5, 0x007E41C0);
}

// [0x007E8EE0] sub_007E8EE0 (21 bytes)
extern "C" void __cdecl fn_007E8EE0(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 4, 0x007E8A00);
}

// [0x007EF8D0] sub_007EF8D0 (21 bytes)
extern "C" void __cdecl fn_007EF8D0(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 1, 0x007EF3A0);
}

// [0x007EF8F0] sub_007EF8F0 (21 bytes)
extern "C" void __cdecl fn_007EF8F0(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 3, 0x007EF6F0);
}

// [0x007EFB20] sub_007EFB20 (21 bytes)
extern "C" void __cdecl fn_007EFB20(int a1) {
    ((void (__cdecl*)(int, int, int))ext_007C8A50)(a1, 2, 0x007EF910);
}

// [0x007EFF40] sub_007EFF40 (28 bytes)
extern "C" void ext_007CA710();
extern "C" void ext_007CAEF0();
extern "C" void ext_007CC590();

extern "C" void __cdecl fn_007EFF40(int a1) {
    ((void (__cdecl*)(int))ext_007CA710)(a1);
    ((void (__cdecl*)(int))ext_007CAEF0)(a1);
    ((void (__cdecl*)(int))ext_007CC590)(a1);
}

// [0x007E4740] sub_007E4740 (44 bytes)
extern "C" void ext_006A7250();

extern "C" float __fastcall fn_007E4740(float* self) {
    float s = self[1] * self[1] + self[0] * self[0] + self[2] * self[2];
    return (float)sqrt(s);
}
