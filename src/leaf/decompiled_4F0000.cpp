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

// [0x004F02A0] sub_004F02A0 (29 bytes)
extern "C" void ext_004EFDF0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004F02A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004EFDF0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        mov dword ptr [esi + 0x4], 0x0
        pop esi
        ret
    }
}

// [0x004F27E0] sub_004F27E0 (32 bytes)
extern "C" int mem_0094C42C;
extern "C" void ext_004F4D20();

extern "C" __declspec(naked) void* __fastcall fn_004F27E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_004F4D20
        mov dword ptr [esi], offset mem_0094C42C
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x004F2870] sub_004F2870 (32 bytes)
extern "C" void ext_004F9800();

typedef void* (__thiscall *Init8Fn)(void*, void*, void*);

extern "C" void* __fastcall fn_004F2870(void* self, int edx_unused, void* a1, void* a2) {
    ((Init8Fn)ext_004F9800)(self, a1, a2);
    *(void**)self = (void*)0x94c69c;
    return self;
}

// [0x004F2DE0] sub_004F2DE0 (32 bytes)
extern "C" void* __fastcall fn_004F2DE0(void* self, int edx_unused, void* a1, void* a2) {
    ((Init8Fn)ext_004F9800)(self, a1, a2);
    *(void**)self = (void*)0x94c99c;
    return self;
}
