// Decompiled translation unit: src/leaf/decompiled_4D0000.cpp

extern "C" int mem_00924FF0;

// [0x004DDE10] sub_004DDE10 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004DDE10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov edi, dword ptr [esi]
        push 0
        push 0
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [edi + 0x8]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004DE440] sub_004DE440 (12 bytes)
extern "C" void ext_004DE160();

extern "C" __declspec(naked) void __fastcall fn_004DE440(void* self) {
    __asm {
        call ext_004DE160
        add eax, dword ptr [ecx + 0x9d0]
        ret
    }
}

// [0x004D0E00] sub_004D0E00 (16 bytes)
extern "C" void ext_004D0B60();

extern "C" __declspec(naked) void __fastcall fn_004D0E00(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x188]
        push eax
        call ext_004D0B60
        add esp, 0x4
        ret
    }
}

// [0x004D3B30] sub_004D3B30 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004D3B30(unsigned char* self, int edx_unused, unsigned char a1) {
    self[0x192] = a1;
    ext_004C0340();
}

// [0x004D3B50] sub_004D3B50 (18 bytes)
extern "C" void __fastcall fn_004D3B50(void* self, int edx_unused, int a1) {
    *(unsigned char*)((char*)self + 0x193) = (unsigned char)a1;
    ext_004C0340();
}

// [0x004D3B70] sub_004D3B70 (18 bytes)
extern "C" void __fastcall fn_004D3B70(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x344) = a1;
    ext_004C0340();
}

// [0x004D3B90] sub_004D3B90 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004D3B90(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x340) = a1;
    ext_004C0340();
}

// [0x004D3BB0] sub_004D3BB0 (18 bytes)
extern "C" void ext_004C0340();
extern "C" void __fastcall fn_004D3BB0(void* self, int edx_unused, int value) {
    (void)edx_unused;
    *(int*)((char*)self + 0x394) = value;
    ext_004C0340();
}

// [0x004D3BD0] sub_004D3BD0 (18 bytes)
extern "C" void __fastcall fn_004D3BD0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x194) = a1;
    ext_004C0340();
}

// [0x004D3BF0] sub_004D3BF0 (18 bytes)
extern "C" void __fastcall fn_004D3BF0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x195) = a1;
    ext_004C0340();
}

// [0x004D3910] sub_004D3910 (24 bytes)
extern "C" void ext_004D3880();
extern "C" void ext_006798D0();

extern "C" __declspec(naked) void __fastcall fn_004D3910(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x93e1b8
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_004D3880
        pop ecx
        ret
    }
}

// [0x004D2C70] sub_004D2C70 (25 bytes)
extern "C" void ext_004D2B40();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004D2C70(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_004D2B40
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        pop esi
        ret
    }
}

// [0x004DA800] sub_004DA800 (25 bytes)
extern "C" void ext_004DA2B0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_004DA800(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done_004DA800
        mov ecx, esi
        call ext_004DA2B0
        push esi
        call ext_006A5C5C
        add esp, 4
    done_004DA800:
        pop esi
        ret
    }
}

// [0x004D0DE0] sub_004D0DE0 (26 bytes)
extern "C" int __cdecl ext_004D0B20(int);

extern "C" void __fastcall fn_004D0DE0(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x188) = ext_004D0B20(a1);
}

// [0x004DE130] sub_004DE130 (35 bytes)
extern "C" void ext_004C1AC0();
extern "C" void ext_0047C480();
extern "C" int mem_00AE29D0;

extern "C" __declspec(naked) void __fastcall fn_004DE130(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004C1AC0
        mov ecx, dword ptr [esi + 0x168]
        pop esi
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047C480
    }
}

// [0x004D4160] sub_004D4160 (39 bytes)
extern "C" int __fastcall fn_004D4160(void* self) {
    struct Elem28 { char d[28]; };
    Elem28* begin = *(Elem28**)((char*)self + 0x448);
    if (!begin) return 0;
    Elem28* end = *(Elem28**)((char*)self + 0x44C);
    return (int)(end - begin);
}

// [0x004D4190] sub_004D4190 (39 bytes)
extern "C" int __fastcall fn_004D4190(void* self) {
    struct Elem28 { char d[28]; };
    Elem28* begin = *(Elem28**)((char*)self + 0x458);
    if (!begin) return 0;
    Elem28* end = *(Elem28**)((char*)self + 0x45C);
    return (int)(end - begin);
}

// [0x004D0DB0] sub_004D0DB0 (45 bytes)
extern "C" int mem_00AE5598;
extern "C" int mem_00AE558C;
extern "C" int mem_00AE5590;
extern "C" int mem_00AE5594;

extern "C" void* __cdecl fn_004D0DB0() {
    if (!(mem_00AE5598 & 1)) {
        float zero = 0.0f;
        mem_00AE5598 |= 1;
        *(float*)&mem_00AE558C = zero;
        *(float*)&mem_00AE5590 = zero;
        *(float*)&mem_00AE5594 = zero;
    }
    return &mem_00AE558C;
}

// [0x004D0010] sub_004D0010 (57 bytes)
extern "C" int mem_00924FE8;

extern "C" void* __fastcall fn_004D0010(void* self) {
    typedef void (__fastcall *ctor_t)(void*);
    ctor_t ctor = (ctor_t)mem_00924FE8;
    ctor(self);
    float zero = 0.0f;
    char* p = (char*)self;
    *(float*)(p + 0x24) = zero;
    *(float*)(p + 0x20) = zero;
    *(float*)(p + 0x1c) = zero;
    *(float*)(p + 0x34) = zero;
    *(float*)(p + 0x30) = zero;
    *(float*)(p + 0x2c) = zero;
    *(float*)(p + 0x28) = zero;
    *(float*)(p + 0x44) = zero;
    *(float*)(p + 0x40) = zero;
    *(float*)(p + 0x3c) = zero;
    *(float*)(p + 0x38) = zero;
    *(float*)(p + 0x50) = zero;
    *(float*)(p + 0x4c) = zero;
    *(float*)(p + 0x48) = zero;
    return self;
}

// [0x004D3DE0] sub_004D3DE0 (57 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00642680();
extern "C" __declspec(naked) void __fastcall fn_004D3DE0(void* self, int edx_unused, int a1) {
    __asm {
        cmp byte ptr [esp + 0x4], 0
        push edi
        mov edi, ecx
        je L_end
        push ebx
        push esi
        call ext_00594000
        mov ebx, dword ptr [eax + 0xf8]
        xor esi, esi
        cmp dword ptr [edi + 0x1ec], esi
        jle L_pop
    L_loop:
        mov ecx, ebx
        call ext_00642680
        add esi, 1
        cmp esi, dword ptr [edi + 0x1ec]
        jl L_loop
    L_pop:
        pop esi
        pop ebx
    L_end:
        pop edi
        ret 4
    }
}

// [0x004D0B20] sub_004D0B20 (63 bytes)
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) int __cdecl fn_004D0B20(int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0x00AE5C10
    loop_004D0B20:
        push esi
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne found_004D0B20
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0x00AE5C64
        jl loop_004D0B20
        pop edi
        pop esi
        pop ebp
        mov eax, 0x4
        pop ebx
        ret
    found_004D0B20:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
