// Decompiled translation unit: src/leaf/decompiled_4F0000.cpp

// [0x004FD810] sub_004FD810 (17 bytes)
extern "C" void ext_0050E9F0();
extern "C" float __fastcall fn_004FD810(void* self) {
    volatile float tmp;
    tmp = ((float (__fastcall*)(void*))ext_0050E9F0)((char*)self + 0x44);
    return tmp;
}

// [0x004FD830] sub_004FD830 (17 bytes)
extern "C" void ext_0050EA00();
extern "C" float __fastcall fn_004FD830(void* self) {
    volatile float tmp;
    tmp = ((float (__fastcall*)(void*))ext_0050EA00)((char*)self + 0x44);
    return tmp;
}

// [0x004FD850] sub_004FD850 (17 bytes)
extern "C" void ext_0050EA10();
extern "C" float __fastcall fn_004FD850(void* self) {
    volatile float tmp;
    tmp = ((float (__fastcall*)(void*))ext_0050EA10)((char*)self + 0x44);
    return tmp;
}

// [0x004F4D90] sub_004F4D90 (19 bytes)
#include <math.h>
extern "C" float __fastcall fn_004F4D90(void* self) {
    volatile float tmp;
    float* p = (float*)self;
    tmp = (float)atan2((double)p[2], (double)p[0]);
    return tmp;
}

// [0x004F4DB0] sub_004F4DB0 (20 bytes)
extern "C" void ext_004F4D90();
extern "C" double mem_0094CE70;
extern "C" float __fastcall fn_004F4DB0(void* self) {
    volatile float tmp;
    tmp = (float)((double)((float (__fastcall*)(void*))ext_004F4D90)(self) * mem_0094CE70);
    return tmp;
}

// [0x004F4F00] sub_004F4F00 (20 bytes)
extern "C" void ext_004F4ED0();
extern "C" double mem_0094CE70;
extern "C" float __fastcall fn_004F4F00(void* self) {
    volatile float tmp;
    tmp = (float)((double)((float (__fastcall*)(void*))ext_004F4ED0)(self) * mem_0094CE70);
    return tmp;
}

// [0x004F28C0] sub_004F28C0 (25 bytes)
extern "C" void ext_0065C650();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004F28C0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, dword ptr [esi]
        call ext_0065C650
        push esi
        call ext_006A5C5C
        add esp, 4
done:
        pop esi
        ret
    }
}

// [0x004FDC60] sub_004FDC60 (25 bytes)
extern "C" void ext_00661980();
extern "C" void ext_004FD870();
extern "C" void* __fastcall fn_004FDC60(void* self) {
    ((void (__fastcall*)(void*))ext_00661980)(self);
    *(void**)self = (void*)0x0094EBE4;
    ((void (__fastcall*)(void*))ext_004FD870)(self);
    return self;
}
