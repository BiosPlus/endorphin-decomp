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

// [0x004BA200] sub_004BA200 (35 bytes)
extern "C" int mem_00AE16A8;
extern "C" int mem_00AE16A4;

extern "C" void* __cdecl fn_004BA200() {
    if (!(mem_00AE16A8 & 1)) {
        mem_00AE16A8 |= 1;
        mem_00AE16A4 = 0x943628;
    }
    return &mem_00AE16A4;
}

// [0x004B0F50] sub_004B0F50 (37 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004B0F50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov al, 1
        lea ecx, [esi + 4]
        mov byte ptr [esi], al
        mov byte ptr [esi + 1], al
        mov byte ptr [esi + 2], al
        mov byte ptr [esi + 3], 0
        call dword ptr [mem_00924FE8]
        mov dword ptr [esi + 0x20], 0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x004B4740] sub_004B4740 (37 bytes)
extern "C" void ext_004B18E0();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void* __cdecl fn_004B4740(void* a, int b) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0x8], 0x0
        call ext_004B18E0
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004B4C00] sub_004B4C00 (35 bytes)
extern "C" void ext_004B4740();

extern "C" __declspec(naked) void* __fastcall fn_004B4C00(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_004B4740
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004BA230] sub_004BA230 (37 bytes)
extern "C" void ext_004B7980();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void* __cdecl fn_004BA230(void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        push eax
        mov dword ptr [esp + 0x8], 0x0
        call ext_004B7980
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004BA920] sub_004BA920 (35 bytes)
extern "C" void ext_004BA230();

extern "C" __declspec(naked) void* __fastcall fn_004BA920(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_004BA230
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004B0ED0] sub_004B0ED0 (59 bytes)
extern "C" void __fastcall fn_004B0ED0(void* self, int edx_unused, const float* bounds) {
    if (bounds[0] < bounds[1] && bounds[2] < bounds[3]) {
        *(float*)((char*)self + 0x1c) = bounds[0];
        *(float*)((char*)self + 0x20) = bounds[1];
        *(float*)((char*)self + 0x24) = bounds[2];
        *(float*)((char*)self + 0x28) = bounds[3];
    }
}

// [0x004B10A0] sub_004B10A0 (46 bytes)
extern "C" void ext_004B0ED0();

extern "C" __declspec(naked) void __fastcall fn_004B10A0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x10
        fld dword ptr [esp + 0x14]
        lea eax, [esp]
        fstp dword ptr [esp]
        push eax
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0x28]
        fstp dword ptr [esp + 0x10]
        call ext_004B0ED0
        add esp, 0x10
        ret 0x4
    }
}

// [0x004B10D0] sub_004B10D0 (46 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B10D0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x10
        fld dword ptr [ecx + 0x1c]
        lea eax, [esp]
        fstp dword ptr [esp]
        push eax
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0x28]
        fstp dword ptr [esp + 0x10]
        call ext_004B0ED0
        add esp, 0x10
        ret 0x4
    }
}

// [0x004B1100] sub_004B1100 (46 bytes)
extern "C" void ext_004B0ED0();

extern "C" __declspec(naked) void __fastcall fn_004B1100(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 10h
        fld dword ptr [ecx + 1ch]
        lea eax, [esp]
        fstp dword ptr [esp]
        push eax
        fld dword ptr [ecx + 20h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 18h]
        fstp dword ptr [esp + 0ch]
        fld dword ptr [ecx + 28h]
        fstp dword ptr [esp + 10h]
        call ext_004B0ED0
        add esp, 10h
        ret 4
    }
}

// [0x004B1130] sub_004B1130 (46 bytes)
extern "C" void ext_004B0ED0();

extern "C" __declspec(naked) void __fastcall fn_004B1130(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 10h
        fld dword ptr [ecx + 1ch]
        lea eax, [esp]
        fstp dword ptr [esp]
        push eax
        fld dword ptr [ecx + 20h]
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 24h]
        fstp dword ptr [esp + 0ch]
        fld dword ptr [esp + 18h]
        fstp dword ptr [esp + 10h]
        call ext_004B0ED0
        add esp, 10h
        ret 4
    }
}

extern "C" int mem_00924FD4;
extern "C" int mem_00924FDC;
extern "C" int mem_009433A0;
extern "C" int mem_00AE173C;
extern "C" int mem_0093C18C;

// [0x004B6FF0] sub_004B6FF0 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6FF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push offset mem_009433A0
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FD4]
        push offset mem_00AE173C
        lea ecx, [esi + 0x20]
        call dword ptr [mem_00924FDC]
        push offset mem_00AE173C
        lea ecx, [esi + 0x3c]
        call dword ptr [mem_00924FDC]
        push offset mem_0093C18C
        lea ecx, [esi + 0x58]
        call dword ptr [mem_00924FD4]
        pop esi
        ret
    }
}
