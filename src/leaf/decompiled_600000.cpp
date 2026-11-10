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

// [0x00602EC0] sub_00602EC0 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_00602EC0(void* self) {
    __asm {
        fldz
        mov eax, ecx
        mov dword ptr [eax], 0x0096F81C
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x10], ecx
        fst dword ptr [eax + 0x1C]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fst dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x20]
        ret
    }
}

// [0x0060B050] sub_0060B050 (46 bytes)
extern "C" void* __stdcall fn_0060B050(void* dst, unsigned int count, const void* src) {
    unsigned int n = count;
    unsigned int* p = (unsigned int*)dst;
    if (n > 0) {
        do {
            *p = *(const unsigned int*)src;
            n = n - 1;
            p = p + 1;
        } while (n > 0);
    }
    return (char*)dst + count * 4;
}

extern "C" int mem_009251E0;
extern "C" int mem_00924FE4;

// [0x0060B8D0] sub_0060B8D0 (62 bytes)
// Formats into a local buffer via _snprintf, then constructs the std::string at a1 from it; returns a1.
extern "C" __declspec(naked) void* __cdecl fn_0060B8D0(void* a1, int a2) {
    __asm {
        sub esp, 0x38
        mov eax, dword ptr [esp + 0x40]
        push esi
        push eax
        push 0x9720e8
        lea ecx, [esp + 0x10]
        push 0x32
        push ecx
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_009251E0]
        mov esi, dword ptr [esp + 0x50]
        add esp, 0x10
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    }
}

// [0x0060C4C0] sub_0060C4C0 (77 bytes)
extern "C" void ext_0060BCC0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0060C4C0(void* self) {
    __asm {
        push -1
        push 0x008A8748
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x60]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0060BCC0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
