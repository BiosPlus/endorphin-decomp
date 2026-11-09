// Decompiled translation unit: src/leaf/decompiled_600000.cpp

// [0x00609730] sub_00609730 (14 bytes)
extern "C" __declspec(naked) void __fastcall fn_00609730(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x0C // mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x04 // mov eax, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x50 __asm _emit 0x24 // mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}

extern "C" void ext_00602F20();

// [0x00602F40] sub_00602F40 (9 bytes)
extern "C" __declspec(naked) float __cdecl fn_00602F40() {
    __asm {
        call ext_00602F20
        fld dword ptr [eax + 0x8]
        ret
    }
}

extern "C" void ext_00602810();
extern "C" void ext_00620BC0();
extern "C" void ext_0062E120();

// [0x00602D50] sub_00602D50 (15 bytes)
extern "C" void __cdecl fn_00602D50() {
    ext_00602810();
    ext_00620BC0();
    ext_0062E120();
}

// [0x0060E860] sub_0060E860 (33 bytes)
extern "C" int __fastcall fn_0060E860(void* self) {
    int begin = *(int*)((char*)self + 0x4);
    if (begin == 0) {
        return 0;
    }
    int diff = *(int*)((char*)self + 0x8) - begin;
    return diff / 56;
}

extern "C" int mem_00B478D8;
extern "C" int mem_00B478D4;

// [0x0060A520] sub_0060A520 (35 bytes)
extern "C" int* __cdecl fn_0060A520() {
    if (!(mem_00B478D8 & 1)) {
        mem_00B478D8 |= 1;
        mem_00B478D4 = 0x971f90;
    }
    return &mem_00B478D4;
}
