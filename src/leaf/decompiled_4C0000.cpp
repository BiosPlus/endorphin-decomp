// Decompiled translation unit: src/leaf/decompiled_4C0000.cpp

// [0x004CEA30] sub_004CEA30 (13 bytes)
extern "C" void __stdcall ext_004CE810(int value);

extern "C" void __fastcall fn_004CEA30(void* self) {
    ext_004CE810(*reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x180));
}

// [0x004C4E80] sub_004C4E80 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004C4E80(void* self, int edx_unused, float value) {
    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x180) = value;
    ext_004C0340();
}

// [0x004CCC60] sub_004CCC60 (22 bytes)
extern "C" void ext_004CC9E0();
extern "C" void ext_0050BE20();

extern "C" __declspec(naked) void __fastcall fn_004CCC60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x14], 0
        je skip_004CCC60
        call ext_004CC9E0
    skip_004CCC60:
        mov ecx, esi
        pop esi
        jmp ext_0050BE20
    }
}

// [0x004CA1A0] sub_004CA1A0 (23 bytes)
extern "C" void ext_004C98C0(void* p, int a, int b);

extern "C" void __cdecl fn_004CA1A0(void* self) {
    ext_004C98C0(reinterpret_cast<char*>(self) + 0x180, 0, 1);
}

// [0x004CEA10] sub_004CEA10 (23 bytes)
extern "C" int __stdcall ext_004CE7B0(int value);

extern "C" void __fastcall fn_004CEA10(void* self, int edx_unused, int a1) {
    *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x180) = ext_004CE7B0(a1);
}

// [0x004CCDC0] sub_004CCDC0 (25 bytes)
extern "C" void ext_0046AC30();
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004CCDC0(void* self) {
    void* esi = *reinterpret_cast<void**>(self);
    if (esi != 0) {
        reinterpret_cast<void (__fastcall*)(void*)>(ext_0046AC30)(esi);
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(esi);
    }
}

// [0x004CFFE0] sub_004CFFE0 (34 bytes)
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_004CFFE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x947ac0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004C1BF0] sub_004C1BF0 (35 bytes)
extern "C" int mem_00AE3050;
extern "C" int mem_00AE304C;

extern "C" void* __cdecl fn_004C1BF0() {
    if ((mem_00AE3050 & 1) == 0) {
        mem_00AE3050 |= 1;
        mem_00AE304C = 0x944708;
    }
    return &mem_00AE304C;
}

// [0x004C5FE0] sub_004C5FE0 (35 bytes)
extern "C" int mem_00AE370C;
extern "C" int mem_00AE3708;

extern "C" void* __cdecl fn_004C5FE0() {
    if ((mem_00AE370C & 1) == 0) {
        mem_00AE370C |= 1;
        mem_00AE3708 = 0x9453e4;
    }
    return &mem_00AE3708;
}

extern "C" void ext_004C0340();

// [0x004C1AC0] sub_004C1AC0 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1AC0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx + 0x15c]
        cmp edx, eax
        mov dword ptr [ecx + 0x160], edx
        jg L_004C1ADD
        add eax, 0x1
        mov dword ptr [ecx + 0x160], eax
L_004C1ADD:
        call ext_004C0340
        ret 0x4
    }
}

// [0x004C4D80] sub_004C4D80 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C4D80(void* self, int edx_unused, float* out, float s) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fldz
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        fld dword ptr [ecx]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fmul st, st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        ret 0x8
    }
}
