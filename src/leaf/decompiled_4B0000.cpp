// Decompiled translation unit: src/leaf/decompiled_4B0000.cpp

extern "C" int mem_00924FE8;

// [0x004B6CC0] sub_004B6CC0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6CC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call dword ptr [mem_00924FE8]
        fldz
        fst dword ptr [esi + 0x1c]
        mov eax, esi
        fst dword ptr [esi + 0x20]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x2c]
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}

extern "C" int mem_00940694;
extern "C" int mem_00943350;

// [0x004B6CF0] sub_004B6CF0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6CF0(void* self) {
    __asm {
        fld dword ptr [mem_00940694]
        fstp dword ptr [ecx + 0x1c]
        fld dword ptr [mem_00943350]
        fstp dword ptr [ecx + 0x20]
        fldz
        fst dword ptr [ecx + 0x24]
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x2c]
        fstp dword ptr [ecx + 0x30]
        ret
    }
}

extern "C" int mem_00A3849C;
extern "C" int mem_00A384A0;
extern "C" int mem_00A384A4;

// [0x004B7030] sub_004B7030 (33 bytes)
extern "C" __declspec(naked) void __stdcall fn_004B7030(void* out) {
    __asm {
        fld dword ptr [mem_00A3849C]
        mov eax, dword ptr [esp + 0x4]
        fstp dword ptr [eax]
        fld dword ptr [mem_00A384A0]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [mem_00A384A4]
        fstp dword ptr [eax + 0x8]
        ret 0x4
    }
}

// [0x004BA040] sub_004BA040 (26 bytes)
extern "C" void ext_006A5C5C(void* p);
extern "C" int mem_00924FF4;

extern "C" void __fastcall fn_004BA040(void* self) {
    void* p = *(void**)self;
    if (p) {
        ((void (__fastcall*)(void*))mem_00924FF4)(p);
        ext_006A5C5C(p);
    }
}

// [0x004B01C0] sub_004B01C0 (27 bytes)
extern "C" void ext_00451670();

extern "C" __declspec(naked) void __fastcall fn_004B01C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x250
        mov dword ptr [esp + 0x8], eax
        call ext_00451670
        ret 0x4
    }
}

extern "C" void ext_005A6300();

// [0x004B0820] sub_004B0820 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B0820(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x250
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x004B5250] sub_004B5250 (27 bytes)
extern "C" void ext_004B4CD0();
extern "C" void ext_004B4D30();
extern "C" void __fastcall fn_004B5250(void* self, int edx_unused, unsigned char flag) {
    ((unsigned char*)self)[0x18] = flag;
    if (flag) {
        ext_004B4CD0();
    } else {
        ext_004B4D30();
    }
}

// [0x004B6C90] sub_004B6C90 (34 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0x8).
// Constructs the std::string in the hidden buffer from a literal C string via the
// imported basic_string(const char*) ctor, then returns the buffer in eax.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004B6C90(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x9433e0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004B18E0] sub_004B18E0 (35 bytes)
extern "C" int mem_00AE0CF4;
extern "C" int mem_00AE0CF0;

extern "C" int* __cdecl fn_004B18E0() {
    if (!(mem_00AE0CF4 & 1)) {
        mem_00AE0CF4 |= 1;
        mem_00AE0CF0 = 0x942180;
    }
    return &mem_00AE0CF0;
}

// [0x004B4710] sub_004B4710 (35 bytes)
extern "C" int mem_00AE0D4C;
extern "C" int mem_00AE0D48;
extern "C" void* __cdecl fn_004B4710() {
    if (!(mem_00AE0D4C & 1)) {
        mem_00AE0D4C |= 1;
        mem_00AE0D48 = 0x942148;
    }
    return &mem_00AE0D48;
}

// [0x004B7980] sub_004B7980 (35 bytes)
extern "C" int mem_00AE1668;
extern "C" int mem_00AE1664;
extern "C" int* __cdecl fn_004B7980() {
    if (!(mem_00AE1668 & 1)) {
        mem_00AE1668 |= 1;
        mem_00AE1664 = 0x009435f0;
    }
    return &mem_00AE1664;
}

// [0x004BA1D0] sub_004BA1D0 (35 bytes)
extern "C" int mem_00AE16A0;
extern "C" int mem_00AE169C;

extern "C" int* __cdecl fn_004BA1D0() {
    if (!(mem_00AE16A0 & 1)) {
        mem_00AE16A0 |= 1;
        mem_00AE169C = 0x009435A0;
    }
    return &mem_00AE169C;
}
