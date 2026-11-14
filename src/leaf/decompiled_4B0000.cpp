// Decompiled translation unit: src/leaf/decompiled_4B0000.cpp

#include <string>

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

extern "C" int mem_00925134;

// [0x004B4CD0] sub_004B4CD0 (84 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B4CD0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0xc]
        cmp esi, dword ptr [ecx + 0x10]
        push edi
        lea edi, [ecx + 0x8]
        jbe L_a
        call ebp
    L_a:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_b
        call ebp
    L_b:
        cmp edi, edi
        je L_c
        call ebp
    L_c:
        cmp esi, ebx
        je L_end
        cmp esi, dword ptr [edi + 0x8]
        jb L_d
        call ebp
    L_d:
        cmp esi, dword ptr [edi + 0x8]
        mov eax, dword ptr [esi]
        mov bl, byte ptr [eax + 0x2]
        jb L_e
        call ebp
    L_e:
        mov ecx, dword ptr [esi]
        mov byte ptr [ecx + 0x1], bl
        cmp esi, dword ptr [edi + 0x8]
        jb L_f
        call ebp
    L_f:
        add esi, 0x4
        jmp L_a
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" int mem_00924EF4;

// [0x004BA340] sub_004BA340 (85 bytes)
extern "C" __declspec(naked) void* __cdecl fn_004BA340(void* first, void* last, const void* value) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub edi, ebx
        sar edi, 0x2
        test edi, edi
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        mov eax, edi
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        mov eax, dword ptr [ebx + 4 * esi]
        push ebp
        push eax
        call dword ptr [mem_00924EF4]
        add esp, 8
        test al, al
        je not_less
        or eax, -1
        sub eax, esi
        lea ebx, [ebx + 4 * esi + 4]
        add edi, eax
        jmp next
    not_less:
        mov edi, esi
    next:
        test edi, edi
        jg loop_top
        pop esi
        pop ebp
    done:
        pop edi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x004B1880] sub_004B1880 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0CEC;
extern "C" int mem_00AE0CE8;

extern "C" __declspec(naked) void* __fastcall fn_004B1880(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88998e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE0CEC], al
        jne L_done
        or dword ptr [mem_00AE0CEC], eax
        mov ecx, offset mem_00AE0CE8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE0CE8], 0x942074
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE0CE8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004B4770] sub_004B4770 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D54;
extern "C" int mem_00AE0D50;

extern "C" __declspec(naked) void* __fastcall fn_004B4770(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x889aee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE0D54], al
        jne L_done
        or dword ptr [mem_00AE0D54], eax
        mov ecx, offset mem_00AE0D50
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE0D50], 0x9421bc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE0D50
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004B4BA0] sub_004B4BA0 (30 bytes)
extern "C" void ext_004B4770();

extern "C" __declspec(naked) void __fastcall fn_004B4BA0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004B4770
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004B47D0] sub_004B47D0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D5C;
extern "C" int mem_00AE0D58;

extern "C" __declspec(naked) void* __fastcall fn_004B47D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x889b0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE0D5C], al
        jne L_done
        or dword ptr [mem_00AE0D5C], eax
        mov ecx, offset mem_00AE0D58
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE0D58], 0x94236c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE0D58
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004B4830] sub_004B4830 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D64;
extern "C" int mem_00AE0D60;

extern "C" __declspec(naked) void* __fastcall fn_004B4830(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x889b2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE0D64], al
        jne L_done
        or dword ptr [mem_00AE0D64], eax
        mov ecx, offset mem_00AE0D60
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE0D60], 0x94251c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE0D60
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004B4BC0] sub_004B4BC0 (30 bytes)
extern "C" void ext_004B47D0();

extern "C" __declspec(naked) void __fastcall fn_004B4BC0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004B47D0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004B4BE0] sub_004B4BE0 (30 bytes)
extern "C" void ext_004B4830();

extern "C" __declspec(naked) void __fastcall fn_004B4BE0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004B4830
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004B7920] sub_004B7920 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1660;
extern "C" int mem_00AE165C;

extern "C" __declspec(naked) void* __fastcall fn_004B7920(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88a20e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE1660], al
        jne L_done
        or dword ptr [mem_00AE1660], eax
        mov ecx, offset mem_00AE165C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE165C], 0x9433f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE165C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004B99B0] sub_004B99B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE1698;
extern "C" int mem_00AE1694;

extern "C" __declspec(naked) void* __fastcall fn_004B99B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88a2ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE1698], al
        jne L_done
        or dword ptr [mem_00AE1698], eax
        mov ecx, offset mem_00AE1694
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE1694], 0x94376c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE1694
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004BA270] sub_004BA270 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE16B0;
extern "C" int mem_00AE16AC;

extern "C" __declspec(naked) void* __fastcall fn_004BA270(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88a2ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE16B0], al
        jne L_done
        or dword ptr [mem_00AE16B0], eax
        mov ecx, offset mem_00AE16AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE16AC], 0x943694
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE16AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004BA740] sub_004BA740 (87 bytes)
extern "C" void ext_004BA270();
extern "C" int mem_00B599BC;

// Two stack args (out ptr at [esp+4], value at [esp+8] on entry), cdecl, returns out ptr in eax.
// Installs an SEH frame (handler 0x887089), stores zero/global into *out, calls ext_004BA270, then stores result.
extern "C" __declspec(naked) void* __cdecl fn_004BA740(void* out, int val) {
    __asm {
        push -1
        push 0x887089
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        mov dword ptr [esp], eax
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x4], 0x1
        call ext_004BA270
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B4D30] sub_004B4D30 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B4D30(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0xc]
        cmp esi, dword ptr [ecx + 0x10]
        push edi
        lea edi, [ecx + 0x8]
        jbe L_a
        call ebp
    L_a:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_b
        call ebp
    L_b:
        cmp edi, edi
        je L_c
        call ebp
    L_c:
        cmp esi, ebx
        je L_end
        cmp esi, dword ptr [edi + 0x8]
        jb L_d
        call ebp
    L_d:
        cmp esi, dword ptr [edi + 0x8]
        mov eax, dword ptr [esi]
        mov bl, byte ptr [eax + 0x2]
        jb L_e
        call ebp
    L_e:
        mov edx, dword ptr [esi]
        test bl, bl
        sete cl
        mov byte ptr [edx + 0x1], cl
        cmp esi, dword ptr [edi + 0x8]
        jb L_f
        call ebp
    L_f:
        add esi, 4
        jmp L_a
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x004B7340] sub_004B7340 (90 bytes)
extern "C" int mem_00AE1D18;
extern "C" int mem_00AE1D1C;
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_004B7340(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [mem_00AE1D18]
        test esi, esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ebx, ecx
        je invalid_path
        mov ecx, dword ptr [mem_00AE1D1C]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb in_range
    invalid_path:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [mem_00AE1D18]
    in_range:
        lea eax, [edi*8]
        sub eax, edi
        lea ecx, [esi + eax*4]
        push ecx
        lea ecx, [ebx + 0x58]
        call dword ptr [mem_00924FDC]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_00924FF4;

// [0x004B79B0] sub_004B79B0 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B79B0(void* self) {
    __asm {
        push -1
        push 0x881709
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x4]
        add esp, 4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0xffffffff
        call dword ptr [mem_00924FF4]
        fld dword ptr [esp]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B6680] sub_004B6680 (94 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6680(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_head_004B6680:
        test esi, esi
        je L_inv1_004B6680
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_004B6680
    L_inv1_004B6680:
        call ebp
    L_ok1_004B6680:
        cmp edi, dword ptr [esp + 0x20]
        je L_done_004B6680
        test esi, esi
        mov ebx, edi
        jne L_ok2_004B6680
        call ebp
    L_ok2_004B6680:
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok3_004B6680
        call ebp
    L_ok3_004B6680:
        add edi, 0x4
        test esi, esi
        jne L_ok4_004B6680
        call ebp
    L_ok4_004B6680:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_ok5_004B6680
        call ebp
    L_ok5_004B6680:
        mov ecx, dword ptr [ebx]
        test ecx, ecx
        je L_head_004B6680
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x234]
        push 0x1
        call edx
        jmp L_head_004B6680
    L_done_004B6680:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004BA170] sub_004BA170 (94 bytes)
extern "C" void ext_00665810();

extern "C" __declspec(naked) void __fastcall fn_004BA170(void* self) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        mov esi, dword ptr [edi + 0x18]
        test esi, esi
        mov dword ptr [esp + 0x14], 0
        je L_base
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_base:
        mov ecx, edi
        mov dword ptr [esp + 0x14], -1
        call ext_00665810
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B5030] sub_004B5030 (95 bytes)
extern "C" void ext_00665810();

extern "C" __declspec(naked) void __fastcall fn_004B5030(void* self) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        mov esi, dword ptr [edi + 0x18]
        test esi, esi
        mov dword ptr [esp + 0x14], 0
        je L_base
        lea ecx, [esi + 0x4]
        call dword ptr [mem_00924FF4]
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_base:
        mov ecx, edi
        mov dword ptr [esp + 0x14], -1
        call ext_00665810
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BA060] sub_004BA060 (99 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BA060(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f60a0_top:
        test esi, esi
        je f60a0_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f60a0_after1
    f60a0_call1:
        call ebp
    f60a0_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f60a0_ret
        test esi, esi
        mov edi, ebx
        jne f60a0_a
        call ebp
    f60a0_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f60a0_b
        call ebp
    f60a0_b:
        add ebx, 0x4
        test esi, esi
        jne f60a0_c
        call ebp
    f60a0_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f60a0_d
        call ebp
    f60a0_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f60a0_top
        mov ecx, edi
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f60a0_top
    f60a0_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004B72D0] sub_004B72D0 (100 bytes)
extern "C" int mem_00AE1D18;
extern "C" int mem_00AE1D1C;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) int __fastcall fn_004B72D0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        xor ebx, ebx
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_top:
        mov esi, dword ptr [mem_00AE1D18]
        test esi, esi
        je not_found
        mov ecx, dword ptr [mem_00AE1D1C]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae not_found
        lea ecx, [ebp + 0x58]
        lea eax, [ebx + esi]
        push ecx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne found
        add edi, 0x1
        add ebx, 0x1c
        jmp loop_top
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
not_found:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x004B4930] sub_004B4930 (100 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B4930(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
    f4b4930_top:
        test esi, esi
        je f4b4930_call1
        cmp esi, dword ptr [esp + 0x1c]
        je f4b4930_after1
    f4b4930_call1:
        call ebp
    f4b4930_after1:
        cmp ebx, dword ptr [esp + 0x20]
        je f4b4930_ret
        test esi, esi
        mov edi, ebx
        jne f4b4930_a
        call ebp
    f4b4930_a:
        cmp ebx, dword ptr [esi + 0x8]
        jb f4b4930_b
        call ebp
    f4b4930_b:
        add ebx, 0x4
        test esi, esi
        jne f4b4930_c
        call ebp
    f4b4930_c:
        cmp edi, dword ptr [esi + 0x8]
        jb f4b4930_d
        call ebp
    f4b4930_d:
        mov edi, dword ptr [edi]
        test edi, edi
        je f4b4930_top
        lea ecx, [edi + 0x4]
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp f4b4930_top
    f4b4930_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x004B51F0] sub_004B51F0 (90 bytes)
extern "C" void ext_004B4930();
extern "C" void ext_00596660();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004B51F0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m4b51f0_ok1
        call ebp
    m4b51f0_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m4b51f0_ok2
        call ebp
    m4b51f0_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004B4930
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe m4b51f0_ok3
        call ebp
    m4b51f0_ok3:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m4b51f0_ok4
        call ebp
    m4b51f0_ok4:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004B64C0] sub_004B64C0 (102 bytes)
extern "C" void ext_004B4BA0();
extern "C" void ext_004B4BC0();
extern "C" void ext_004B4BE0();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_004B64C0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x386
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je short L_4BA0
        sub eax, 0x1
        je short L_4BC0
        sub eax, 0x1
        je short L_4BE0
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_4BE0:
        push ecx
        push esi
        call ext_004B4BE0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_4BC0:
        push ecx
        push esi
        call ext_004B4BC0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_4BA0:
        push ecx
        push esi
        call ext_004B4BA0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004BA2D0] sub_004BA2D0 (103 bytes)
extern "C" int mem_00924EF4;
typedef bool (__cdecl *LessStr_004BA2D0)(const void*, const void*);
extern "C" void* __cdecl fn_004BA2D0(char* first, char* last, const void* val) {
    int count = (int)((last - first) / 28);
    while (count > 0) {
        int half = count / 2;
        char* mid = first + half * 28;
        if (((LessStr_004BA2D0)mem_00924EF4)(mid, val)) {
            first = mid + 28;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}

// [0x004BE680] sub_004BE680 (105 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004BE680(void* self) {
    __asm {
        push -1
        push 0x0088A870
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x58]
        mov dword ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x3C]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BBB00] sub_004BBB00 (108 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void __fastcall fn_004BBB00(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        jne short L_ok1
        call ebx
L_ok1:
        mov esi, dword ptr [esp + 0x1c]
        cmp esi, dword ptr [ebp + 8]
        jb short L_ok2
        call ebx
L_ok2:
        mov ebx, dword ptr [esi]
        test ebx, ebx
        je short L_skip
        mov ecx, ebx
        call dword ptr [mem_00924FF4]
        push ebx
        call ext_006A5C5C
        add esp, 4
L_skip:
        mov eax, dword ptr [edi + 8]
        lea ecx, [esi + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jle short L_noshift
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
L_noshift:
        mov eax, dword ptr [esp + 0x14]
        add dword ptr [edi + 8], -4
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        pop ebx
        ret 0xc
    }
}

extern "C" int mem_00AE1D18;
extern "C" int mem_00AE1D1C;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;

// [0x004B73A0] sub_004B73A0 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B73A0(void* self, int edx_unused, void* out, unsigned int idx) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [mem_00AE1D18]
        test edi, edi
        mov dword ptr [esp + 0x8], 0
        je empty
        mov ecx, dword ptr [mem_00AE1D1C]
        mov esi, dword ptr [esp + 0x14]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jae empty
        lea eax, [esi*8]
        sub eax, esi
        mov esi, dword ptr [esp + 0x10]
        lea ecx, [edi + eax*4]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    empty:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004B5180] sub_004B5180 (109 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void __fastcall fn_004B5180(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        jne short L_ok1
        call ebx
L_ok1:
        mov esi, dword ptr [esp + 0x1c]
        cmp esi, dword ptr [ebp + 8]
        jb short L_ok2
        call ebx
L_ok2:
        mov ebx, dword ptr [esi]
        test ebx, ebx
        je short L_skip
        lea ecx, [ebx + 4]
        call dword ptr [mem_00924FF4]
        push ebx
        call ext_006A5C5C
        add esp, 4
L_skip:
        mov eax, dword ptr [edi + 8]
        lea ecx, [esi + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jle short L_noshift
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
L_noshift:
        mov eax, dword ptr [esp + 0x14]
        add dword ptr [edi + 8], -4
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        pop ebx
        ret 0xc
    }
}

// [0x004BBB70] sub_004BBB70 (117 bytes)
extern "C" void ext_004BA2D0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) int __cdecl fn_004BBB70(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) {
    __asm {
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push 0
        push ecx
        push ebp
        push ebx
        push eax
        mov dword ptr [esp + 0x2c], eax
        call ext_004BA2D0
        add esp, 0x14
        test esi, esi
        mov edi, eax
        je L_004BBBA6
        cmp esi, dword ptr [esp + 0x1c]
        je L_004BBBAC
    L_004BBBA6:
        call dword ptr [mem_00925134]
    L_004BBBAC:
        cmp edi, ebx
        je L_004BBBDE
        test esi, esi
        jne L_004BBBBA
        call dword ptr [mem_00925134]
    L_004BBBBA:
        cmp edi, dword ptr [esi + 0x8]
        jb L_004BBBC5
        call dword ptr [mem_00925134]
    L_004BBBC5:
        push edi
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_004BBBDE
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    L_004BBBDE:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x004B75A0] sub_004B75A0 (120 bytes)
extern "C" void ext_006657F0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_004B75A0(void* self) {
    __asm {
        push -1
        push 8911a4h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0
        mov [esp+8], esi
        call ext_006657F0
        mov eax, [esp+18h]
        mov [esi+10h], eax
        mov eax, [esp+20h]
        push eax
        lea ecx, [esi+18h]
        mov dword ptr [esp+14h], 0
        mov dword ptr [esi], 9435d8h
        mov [esi+14h], eax
        call dword ptr [mem_00924FE0]
        mov ecx, [esp+24h]
        push ecx
        lea ecx, [esi+34h]
        mov byte ptr [esp+14h], 1
        call dword ptr [mem_00924FE0]
        mov edx, [esp+1ch]
        mov ecx, [esp+8]
        mov [esi+8], edx
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret 10h
    }
}

// [0x004B5270] sub_004B5270 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B5270(void* self) {
    __asm {
        push -0x1
        push 0x8882e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe f4b5270_chk1
        call dword ptr [mem_00925134]
    f4b5270_chk1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe f4b5270_chk2
        call dword ptr [mem_00925134]
    f4b5270_chk2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004B4930
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je f4b5270_nofree
        push eax
        call ext_006A5C5C
        add esp, 0x4
    f4b5270_nofree:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B66E0] sub_004B66E0 (121 bytes)
extern "C" void ext_004B6680();
extern "C" __declspec(naked) void __fastcall fn_004B66E0(void* self) {
    __asm {
        push -0x1
        push 0x8882e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe f4b66e0_chk1
        call dword ptr [mem_00925134]
    f4b66e0_chk1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe f4b66e0_chk2
        call dword ptr [mem_00925134]
    f4b66e0_chk2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004B6680
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je f4b66e0_nofree
        push eax
        call ext_006A5C5C
        add esp, 0x4
    f4b66e0_nofree:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B5610] sub_004B5610 (89 bytes)
extern "C" void ext_004B5270();
extern "C" void ext_0065F440();
extern "C" __declspec(naked) void __fastcall fn_004B5610(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9432fc
        mov dword ptr [esi + 0x4], 0x9432f0
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], 0
        call ext_004B5270
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B6760] sub_004B6760 (92 bytes)
extern "C" void ext_004B66E0();

extern "C" __declspec(naked) void __fastcall fn_004B6760(void* self) {
    __asm {
        push -1
        push 0x889e3b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x943394
        xor edi, edi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x14], edi
        call ext_004B66E0
        mov eax, dword ptr [esi + 0x14]
        cmp eax, edi
        je L_skip
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x14], edi
        mov dword ptr [esi + 0x18], edi
        mov dword ptr [esi + 0x1c], edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BEB00] sub_004BEB00 (76 bytes)
extern "C" void ext_006246B0();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_004BEB00(void* self) {
    __asm {
        push -1
        push 0x00891E68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006246B0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BBC90] sub_004BBC90 (121 bytes)
extern "C" void ext_004BA060();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004BBC90(void* self) {
    __asm {
        push -0x1
        push 0x8882e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe f4bbc90_chk1
        call dword ptr [mem_00925134]
    f4bbc90_chk1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe f4bbc90_chk2
        call dword ptr [mem_00925134]
    f4bbc90_chk2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004BA060
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je f4bbc90_nofree
        push eax
        call ext_006A5C5C
        add esp, 0x4
    f4bbc90_nofree:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BC430] sub_004BC430 (108 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_004BBC90();
extern "C" void ext_006246B0();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_004BC430(void* self) {
    __asm {
        push -1
        push 0x0088A3DE
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009441E4
        lea ecx, [esi + 0x70]
        mov dword ptr [esp + 0x10], 0x2
        call ext_006246B0
        lea ecx, [esi + 0x60]
        mov byte ptr [esp + 0x10], 0x1
        call ext_004BBC90
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x10], 0x0
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B5820] sub_004B5820 (122 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00943350;

extern "C" __declspec(naked) void __fastcall fn_004B5820(void* self) {
    __asm {
        push -1
        push 0x891e68
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00661980
        fld dword ptr [mem_00943350]
        mov dword ptr [esi + 0x4], 0x942064
        xor eax, eax
        mov dword ptr [esi], 0x9432fc
        mov dword ptr [esi + 0x4], 0x9432f0
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        fst dword ptr [esi + 0x2c]
        fldz
        mov cl, 0x1
        fst dword ptr [esi + 0x1c]
        mov byte ptr [esi + 0x18], cl
        fstp dword ptr [esi + 0x24]
        mov byte ptr [esi + 0x19], cl
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x30], eax
        fstp dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x34], 0x3e8
        fld1
        mov eax, esi
        fstp dword ptr [esi + 0x28]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004B7740] sub_004B7740 (127 bytes)
extern "C" void ext_006657F0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_004B7740(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -0x1
        push 0x8911a4
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x0
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi], 0x943678
        mov dword ptr [esi + 0x14], ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        mov dword ptr [esp + 0x10], 0x0
        call eax
        push eax
        lea ecx, [esi + 0x18]
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x8], edx
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004BEB50] sub_004BEB50 (130 bytes)
extern "C" void ext_006246B0();
extern "C" void ext_0065C660();
extern "C" void ext_0065F440();
extern "C" __declspec(naked) void __fastcall fn_004BEB50(void* self) {
    __asm {
        push -1
        push 0x0088A8E2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        lea ecx, [esi + 0x24]
        mov dword ptr [esp + 0x1c], 0x2
        call ext_006246B0
        lea edi, [esi + 0x10]
        mov dword ptr [esp + 0x10], edi
        lea ecx, [edi + 0x4]
        mov byte ptr [esp + 0x1c], 0x3
        call ext_006246B0
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        call ext_0065F440
        xor ecx, ecx
        cmp esi, ecx
        mov byte ptr [esp + 0x1c], cl
        je skip_lea
        lea ecx, [esi + 0x4]
    skip_lea:
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x1c], -1
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F9B0;
extern "C" int mem_00A9F608;

// [0x004B7060] sub_004B7060 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B7060(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F9B0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9F608]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 0x4
        push esi
        call ext_0053F5F0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F7BC;
extern "C" int mem_00A9F7C0;
extern "C" int mem_00A9F6F8;

// [0x004B6EC0] sub_004B6EC0 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6EC0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F7BC]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x20]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F7C0]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea edx, [esi + 0x3c]
        push edx
        call ext_004275E0
        mov eax, dword ptr [mem_00A9F6F8]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        add esi, 0x58
        push esi
        call ext_004275E0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004BF6A0] sub_004BF6A0 (99 bytes)
extern "C" void ext_00661E80();
extern "C" int mem_00925134;
extern "C" __declspec(naked) bool __fastcall fn_004BF6A0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        cmp dword ptr [esi + 0x70], edi
        mov bl, 0x1
        jbe L_4BF6C5
        __asm _emit 0x8b
        __asm _emit 0xff
    L_4BF6B0:
        test bl, bl
        je L_4BF6C5
        mov ecx, dword ptr [esi]
        call ext_00661E80
        add edi, 0x1
        cmp edi, dword ptr [esi + 0x70]
        mov bl, al
        jb L_4BF6B0
    L_4BF6C5:
        mov edi, dword ptr [esi]
        add edi, 0x8
        cmp dword ptr [edi], 0x0
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jne L_4BF6D8
        call ebp
    L_4BF6D8:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [edi + 0x4]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_4BF6E4
        call ebp
    L_4BF6E4:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x8]
        cmp eax, dword ptr [esi + 0x6c]
        pop ebp
        jg L_4BF6FD
        test bl, bl
        je L_4BF6FD
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    L_4BF6FD:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x004B0F80] sub_004B0F80 (144 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F628;
extern "C" int mem_00A9F578;
extern "C" int mem_00A9F704;
extern "C" int mem_00A9F464;

extern "C" __declspec(naked) void __fastcall fn_004B0F80(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F628]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 0x4]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F578]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x20]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [mem_00A9F704]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi + 0x1]
        push ecx
        call ext_00427640
        mov edx, dword ptr [mem_00A9F464]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add esi, 0x2
        push esi
        call ext_00427640
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004B49A0] sub_004B49A0 (146 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_004B49A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa38288
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x943298
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004B76A0] sub_004B76A0 (146 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B76A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa38b38
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x943660
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004BA0D0] sub_004BA0D0 (146 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BA0D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x88a1e8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        push 0
        mov dword ptr [esp + 0xc], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x20]
        push 0
        push 0xa392e8
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esi], 0x944188
        mov dword ptr [esi + 0x10], eax
        call ext_006A6E9E
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], 0
        add esp, 0x14
        cmp dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], edx
        mov eax, esi
        jne L_skip
        mov dword ptr [esi + 0x8], edi
    L_skip:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004B53E0] sub_004B53E0 (150 bytes)
extern "C" void ext_004B5180();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004B53E0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe short L1
        call dword ptr [mem_00925134]
    L1:
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        jbe short L2
        call dword ptr [mem_00925134]
    L2:
        cmp esi, edi
        mov dword ptr [esp + 0x10], esi
        je short L_found
        mov eax, dword ptr [esp + 0x18]
        mov eax, dword ptr [eax]
    L_loop:
        cmp dword ptr [esi], eax
        je short L_found
        add esi, 4
        cmp esi, edi
        jne short L_loop
    L_found:
        push ebp
        mov ebp, dword ptr [ebx + 4]
        cmp ebp, dword ptr [ebx + 8]
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        test ebx, ebx
        je short L4
        cmp ebx, ebx
        je short L5
    L4:
        call dword ptr [mem_00925134]
    L5:
        mov edi, esi
        sub edi, ebp
        sar edi, 2
        test ebx, ebx
        pop ebp
        jne short L6
        call dword ptr [mem_00925134]
    L6:
        cmp esi, dword ptr [ebx + 8]
        jb short L7
        call dword ptr [mem_00925134]
    L7:
        push esi
        push ebx
        lea ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, ebx
        mov dword ptr [esi], 0
        call ext_004B5180
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

extern "C" void ext_004BBB00();

// [0x004BBEB0] sub_004BBEB0 (150 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BBEB0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe short L1
        call dword ptr [mem_00925134]
    L1:
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        jbe short L2
        call dword ptr [mem_00925134]
    L2:
        cmp esi, edi
        mov dword ptr [esp + 0x10], esi
        je short L_found
        mov eax, dword ptr [esp + 0x18]
        mov eax, dword ptr [eax]
    L_loop:
        cmp dword ptr [esi], eax
        je short L_found
        add esi, 4
        cmp esi, edi
        jne short L_loop
    L_found:
        push ebp
        mov ebp, dword ptr [ebx + 4]
        cmp ebp, dword ptr [ebx + 8]
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        test ebx, ebx
        je short L4
        cmp ebx, ebx
        je short L5
    L4:
        call dword ptr [mem_00925134]
    L5:
        mov edi, esi
        sub edi, ebp
        sar edi, 2
        test ebx, ebx
        pop ebp
        jne short L6
        call dword ptr [mem_00925134]
    L6:
        cmp esi, dword ptr [ebx + 8]
        jb short L7
        call dword ptr [mem_00925134]
    L7:
        push esi
        push ebx
        lea ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, ebx
        mov dword ptr [esi], 0
        call ext_004BBB00
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004B7210] sub_004B7210 (187 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_004B7210(void* self) {
    __asm {
        push -1
        push 0x88a168
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00661980
        lea edi, [esi + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        mov dword ptr [esi], 0x93c034
        call dword ptr [mem_00924FE8]
        lea ebx, [esi + 0x20]
        mov ecx, ebx
        mov byte ptr [esp + 0x1c], 1
        call dword ptr [mem_00924FE8]
        lea ebp, [esi + 0x3c]
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 2
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x58]
        mov byte ptr [esp + 0x1c], 3
        call dword ptr [mem_00924FE8]
        push 0x928b5d
        mov ecx, edi
        mov byte ptr [esp + 0x20], 4
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        mov ecx, ebx
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        lea ecx, [esi + 0x58]
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BB160] sub_004BB160 (200 bytes)
extern "C" void ext_004BA340();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004BB160(void* self, int edx_unused, void* out, void* val) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_004BB17C
        call dword ptr [mem_00925134]
    L_004BB17C:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_004BB18A
        call dword ptr [mem_00925134]
    L_004BB18A:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_004BA340
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_004BB1B4
        call dword ptr [mem_00925134]
    L_004BB1B4:
        test esi, esi
        je L_004BB1BC
        cmp esi, esi
        je L_004BB1C2
    L_004BB1BC:
        call dword ptr [mem_00925134]
    L_004BB1C2:
        cmp ebx, edi
        je L_004BB1FF
        test esi, esi
        jne L_004BB1D0
        call dword ptr [mem_00925134]
    L_004BB1D0:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_004BB1DB
        call dword ptr [mem_00925134]
    L_004BB1DB:
        mov eax, dword ptr [ebx]
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_004BB1FF
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_004BB1FF:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_004BB217
        call dword ptr [mem_00925134]
    L_004BB217:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x004BBC20] sub_004BBC20 (101 bytes)
extern "C" void ext_004BB160();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004BBC20(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_004BB160
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_004BBC4A
        call ebp
    L_004BBC4A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_004BBC56
        cmp edi, esi
        je L_004BBC58
    L_004BBC56:
        call ebp
    L_004BBC58:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_004BBC79
        test edi, edi
        jne L_004BBC66
        call ebp
    L_004BBC66:
        cmp esi, dword ptr [edi + 8]
        jb L_004BBC6D
        call ebp
    L_004BBC6D:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_004BBC79:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004BEC60] sub_004BEC60 (196 bytes)
extern "C" void ext_004FDC60();
extern "C" void ext_00507E40();
extern "C" void ext_0050D1E0();
extern "C" void ext_0050E3F0();
extern "C" void ext_00661980();

extern "C" __declspec(naked) void* __fastcall fn_004BEC60(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88a944
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov byte ptr [esi + 0x4], 0x1
        mov dword ptr [esi], 0x93c08c
        lea edi, [esi + 0x8]
        xor ebp, ebp
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebp
        call ext_00661980
        lea ecx, [esi + 0xc]
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi], 0x944314
        mov dword ptr [edi], 0x9442bc
        call ext_004FDC60
        lea ecx, [esi + 0x2c]
        mov byte ptr [esp + 0x18], 0x2
        call ext_0050E3F0
        lea ecx, [esi + 0xa4]
        mov byte ptr [esp + 0x18], 0x3
        call ext_0050D1E0
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x18], 0x4
        call ext_00507E40
        lea ecx, [esi + 0x110]
        mov byte ptr [esp + 0x18], 0x5
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x130], ebp
        mov dword ptr [esi + 0x134], ebp
        mov dword ptr [esi + 0x138], ebp
        mov dword ptr [esi + 0x13c], ebp
        mov dword ptr [esi + 0x140], ebp
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004BB230] sub_004BB230 (207 bytes)
extern "C" void ext_00500340();

extern "C" __declspec(naked) void* __fastcall fn_004BB230(void* self, int edx_unused, void* out, void* val) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_004BB24C
        call dword ptr [mem_00925134]
    L_004BB24C:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_004BB25A
        call dword ptr [mem_00925134]
    L_004BB25A:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_00500340
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_004BB284
        call dword ptr [mem_00925134]
    L_004BB284:
        test esi, esi
        je L_004BB28C
        cmp esi, esi
        je L_004BB292
    L_004BB28C:
        call dword ptr [mem_00925134]
    L_004BB292:
        cmp ebx, edi
        je L_004BB2D6
        test esi, esi
        jne L_004BB2A0
        call dword ptr [mem_00925134]
    L_004BB2A0:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_004BB2AB
        call dword ptr [mem_00925134]
    L_004BB2AB:
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        push eax
        push ebp
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne L_004BB2D6
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_004BB2D6:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_004BB2EE
        call dword ptr [mem_00925134]
    L_004BB2EE:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x004BC800] sub_004BC800 (220 bytes)
extern "C" void ext_004B7030();
extern "C" void ext_00661980();
extern "C" int mem_00944240;
extern "C" int mem_0094423C;
extern "C" int mem_00944238;

extern "C" __declspec(naked) void __fastcall fn_004BC800(void* self) {
    __asm {
        push -1
        push 0x88a3de
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00661980
        fldz
        mov dword ptr [esi], 0x9441e4
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x8]
        xor edx, edx
        fst dword ptr [esi + 0x4]
        lea eax, [esi + 0x10]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax]
        mov dword ptr [esi + 0x28], edx
        mov dword ptr [esi + 0x2c], edx
        mov dword ptr [esi + 0x30], edx
        mov dword ptr [esi + 0x34], edx
        mov dword ptr [esi + 0x38], edx
        mov dword ptr [esi + 0x3c], edx
        mov dword ptr [esi + 0x54], edx
        mov dword ptr [esi + 0x58], edx
        mov dword ptr [esi + 0x5c], edx
        mov dword ptr [esi + 0x64], edx
        mov dword ptr [esi + 0x68], edx
        mov dword ptr [esi + 0x6c], edx
        fst dword ptr [esi + 0x4]
        fld dword ptr [mem_00944240]
        mov dword ptr [esi + 0x74], edx
        fstp dword ptr [esi + 0x8]
        mov dword ptr [esi + 0x78], edx
        mov dword ptr [esi + 0x7c], edx
        fstp dword ptr [esi + 0xc]
        push eax
        fld dword ptr [mem_0094423C]
        mov ecx, esi
        fstp dword ptr [esi + 0x1c]
        mov byte ptr [esi + 0x80], dl
        fld dword ptr [mem_00944238]
        mov byte ptr [esi + 0x81], dl
        fstp dword ptr [esi + 0x20]
        fld1
        fstp dword ptr [esi + 0x24]
        call ext_004B7030
        fld1
        mov ecx, dword ptr [esp + 0x8]
        fst dword ptr [esi + 0x44]
        fstp dword ptr [esi + 0x48]
        mov byte ptr [esi + 0x82], dl
        mov byte ptr [esi + 0x83], dl
        mov byte ptr [esi + 0x84], dl
        mov dword ptr [esi + 0x4c], 0x2710
        mov byte ptr [esi + 0x40], dl
        mov byte ptr [esi + 0x41], dl
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00528BB0();
extern "C" void ext_00528C70();
extern "C" void ext_00584C00();

// [0x004B0DD0] sub_004B0DD0 (223 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B0DD0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        push edi
        jbe short L_de8
        call ebx
    L_de8:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe short L_df2
        call ebx
    L_df2:
        cmp esi, edi
        je L_ea8
        cmp esi, dword ptr [ebp + 0x8]
        jb short L_e01
        call ebx
    L_e01:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [eax + 0x17c]
        xor bl, bl
        test edi, edi
        je short L_e29
        mov ecx, edi
        call ext_00584C00
        mov edx, dword ptr [edi + 0xc]
        mov edx, dword ptr [edx + 0x20]
        mov bl, al
        test bl, bl
        sete al
        lea ecx, [edi + 0xc]
        push eax
        call edx
    L_e29:
        cmp esi, dword ptr [ebp + 0x8]
        mov edi, dword ptr [mem_00925134]
        jb short L_e36
        call edi
    L_e36:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x180]
        test eax, eax
        je short L_e66
        test bl, bl
        sete cl
        lea edi, [eax + 0xc]
        push ecx
        push 0x20000
        mov ecx, edi
        call ext_00528BB0
        mov ecx, edi
        call ext_00528C70
        mov edi, dword ptr [mem_00925134]
        jmp short L_e93
    L_e66:
        cmp esi, dword ptr [ebp + 0x8]
        jb short L_e6d
        call edi
    L_e6d:
        mov ecx, dword ptr [esi]
        test bl, bl
        sete dl
        add ecx, 0xc
        push edx
        push 0x20000
        call ext_00528BB0
        cmp esi, dword ptr [ebp + 0x8]
        jb short L_e89
        call edi
    L_e89:
        mov ecx, dword ptr [esi]
        add ecx, 0xc
        call ext_00528C70
    L_e93:
        cmp esi, dword ptr [ebp + 0x8]
        jb short L_e9a
        call edi
    L_e9a:
        mov ebx, dword ptr [mem_00925134]
        add esi, 0x4
        jmp L_de8
    L_ea8:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0067EE80();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F8FC;
extern "C" int mem_00A9F4DC;
extern "C" int mem_00A9F690;
extern "C" int mem_00A9F490;
extern "C" int mem_00A9F8B4;
extern "C" int mem_00A9F4D0;
extern "C" int mem_00A9F958;
extern "C" int mem_00A9F4E0;
extern "C" int mem_00A9F7C4;
extern "C" int mem_00A9F4B4;
extern "C" int mem_00A9F994;
extern "C" int mem_00A9F4E8;

// [0x004B6D20] sub_004B6D20 (173 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6D20(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        push esi
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F8FC]
        mov edx, dword ptr [mem_00A9F4DC]
        push ecx
        push edx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x1c]
        mov eax, dword ptr [mem_00A9F690]
        mov ecx, dword ptr [mem_00A9F490]
        push eax
        push ecx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x20]
        mov edx, dword ptr [mem_00A9F8B4]
        mov eax, dword ptr [mem_00A9F4D0]
        push edx
        push eax
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x24]
        mov ecx, dword ptr [mem_00A9F958]
        mov edx, dword ptr [mem_00A9F4E0]
        push ecx
        push edx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x28]
        mov eax, dword ptr [mem_00A9F7C4]
        mov ecx, dword ptr [mem_00A9F4B4]
        push eax
        push ecx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x2c]
        mov edx, dword ptr [mem_00A9F994]
        mov eax, dword ptr [mem_00A9F4E8]
        add esp, 0x44
        push edx
        push eax
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x30]
        add esp, 0xc
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004BB300] sub_004BB300 (264 bytes)
extern "C" void ext_004BB160();
extern "C" int mem_00924EC4;
extern "C" int mem_00924EC8;
extern "C" int mem_00925120;
extern "C" int mem_009251E0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004BB300(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b29e2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ebx
        mov ebx, dword ptr [esp + 0x78]
        push ebp
        push esi
        push edi
        push ecx
        push 0x92e3bc
        mov ecx, ebx
        call dword ptr [mem_00924EC8]
        add eax, 1
        push eax
        xor ebp, ebp
        push ebp
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebx
        call dword ptr [mem_00925120]
        mov esi, dword ptr [esp + 0x80]
        mov dword ptr [esp + 0x78], ebp
    L_loop:
        add ebp, 1
        push ebp
        push 0x92e3b4
        lea eax, [esp + 0x58]
        push 0x1e
        push eax
        call dword ptr [mem_009251E0]
        lea ecx, [esp + 0x60]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        lea eax, [esp + 0x4c]
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0x1c
        push eax
        mov ecx, ebx
        mov byte ptr [esp + 0x7c], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x78], 0
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe L_a
        call dword ptr [mem_00925134]
    L_a:
        push ebx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004BB160
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp + 0x84], eax
        je L_b
        cmp ecx, esi
        je L_c
    L_b:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x84]
    L_c:
        cmp dword ptr [eax + 4], edi
        jne L_loop
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x78], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 8
    }
}

// [0x004BB410] sub_004BB410 (264 bytes)
extern "C" void ext_004BB230();

extern "C" __declspec(naked) void __fastcall fn_004BB410(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b29e2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ebx
        mov ebx, dword ptr [esp + 0x78]
        push ebp
        push esi
        push edi
        push ecx
        push 0x92e3bc
        mov ecx, ebx
        call dword ptr [mem_00924EC8]
        add eax, 1
        push eax
        xor ebp, ebp
        push ebp
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebx
        call dword ptr [mem_00925120]
        mov esi, dword ptr [esp + 0x80]
        mov dword ptr [esp + 0x78], ebp
    L_loop:
        add ebp, 1
        push ebp
        push 0x92e3b4
        lea eax, [esp + 0x58]
        push 0x1e
        push eax
        call dword ptr [mem_009251E0]
        lea ecx, [esp + 0x60]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        lea eax, [esp + 0x4c]
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0x1c
        push eax
        mov ecx, ebx
        mov byte ptr [esp + 0x7c], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x78], 0
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe L_a
        call dword ptr [mem_00925134]
    L_a:
        push ebx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004BB230
        mov ecx, dword ptr [eax]
        test ecx, ecx
        mov dword ptr [esp + 0x84], eax
        je L_b
        cmp ecx, esi
        je L_c
    L_b:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x84]
    L_c:
        cmp dword ptr [eax + 4], edi
        jne L_loop
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x78], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 8
    }
}

// [0x004B01F0] sub_004B01F0 (245 bytes)
extern "C" void ext_004E7F30();
extern "C" __declspec(naked) void __fastcall fn_004B01F0(void* self) {
    __asm {
        push -1
        push 0x889433
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 8]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi], 0941fdch
        mov dword ptr [esi + 4], ebx
        call ext_004E7F30
        lea ecx, [esi + 104h]
        mov dword ptr [esp + 20h], ebx
        call ext_004E7F30
        mov dword ptr [esi + 204h], ebx
        mov dword ptr [esi + 208h], ebx
        mov dword ptr [esi + 20Ch], ebx
        mov dword ptr [esi + 218h], ebx
        mov dword ptr [esi + 21Ch], ebx
        mov dword ptr [esi + 220h], ebx
        mov dword ptr [esi + 210h], 093c4f8h
        mov dword ptr [esi + 228h], ebx
        mov dword ptr [esi + 22Ch], ebx
        mov dword ptr [esi + 230h], ebx
        mov dword ptr [esi + 234h], edi
        mov dword ptr [esi + 238h], ebx
        mov dword ptr [esi + 244h], ebx
        mov dword ptr [esi + 248h], ebx
        mov dword ptr [esi + 24Ch], ebx
        mov dword ptr [esi + 23Ch], 0941fc8h
        mov dword ptr [esi + 254h], ebx
        mov dword ptr [esi + 258h], ebx
        mov dword ptr [esi + 25Ch], ebx
        mov dword ptr [esi + 260h], ebx
        lea ecx, [esi + 264h]
        mov byte ptr [esp + 20h], 6
        call ext_004E7F30
        mov ecx, dword ptr [esp + 18h]
        mov byte ptr [esi + 360h], bl
        mov byte ptr [esi + 361h], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret
    }
}

// [0x004B4A40] sub_004B4A40 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE0D8C;
extern "C" int mem_00AE0D70;
extern "C" __declspec(naked) void __fastcall fn_004B4A40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x00889b4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE0D8C], al
        jne done
        or dword ptr [mem_00AE0D8C], eax
        push 0x00a37440
        push offset mem_00AE0D70
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x009182d0
        call ext_006A6C87
        add esp, 0Ch
    done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE0D70
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x004B74E0] sub_004B74E0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE1638;
extern "C" int mem_00AE161C;
extern "C" __declspec(naked) void __fastcall fn_004B74E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0088a1ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1638], al
        jne done
        or dword ptr [mem_00AE1638], eax
        push 0x00a38930
        push offset mem_00AE161C
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x009184c0
        call ext_006A6C87
        add esp, 0Ch
    done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE161C
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

extern "C" void ext_004B4A40();
extern "C" int mem_00924FE0;

// [0x004B4AA0] sub_004B4AA0 (33 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B4AA0(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 4], 0
        call ext_004B4A40
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004B7540] sub_004B7540 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE1658;
extern "C" int mem_00AE163C;
extern "C" __declspec(naked) void __fastcall fn_004B7540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0088a1ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1658], al
        jne done
        or dword ptr [mem_00AE1658], eax
        push 0x00a328d4
        push offset mem_00AE163C
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x009184b0
        call ext_006A6C87
        add esp, 0Ch
    done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE163C
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x004BEAA0] sub_004BEAA0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE1D40;
extern "C" int mem_00AE1D24;
extern "C" __declspec(naked) void __fastcall fn_004BEAA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0088a88e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1D40], al
        jne done
        or dword ptr [mem_00AE1D40], eax
        push 0x00a395e8
        push offset mem_00AE1D24
        mov dword ptr [esp + 0x10], 0
        call ext_0066AD10
        push 0x009185d0
        call ext_006A6C87
        add esp, 0Ch
    done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE1D24
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x004BE7C0] sub_004BE7C0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004BE7C0(void* self) {
    __asm {
        push ecx
        push esi
        push 0xb5ce94
        mov ecx, 0xa328b0
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x004BBF60] sub_004BBF60 (111 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_004BBF50();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A9F070;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_004BBF60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_004BBF50
        test eax, eax
        jne L_004BBFBD
        mov eax, dword ptr [mem_00A9F070]
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        push esi
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x74], 0x0
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x24]
        push edx
        call ext_006A6DD2
    L_004BBFBD:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x004B4EE0] sub_004B4EE0 (326 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004B4EE0(void* self) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa38288
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x9432d8
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne l1
        mov [esi+8], edi
    l1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je l5
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe l2
        call dword ptr [mem_00925134]
    l2:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe l3
        call dword ptr [mem_00925134]
    l3:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe l4
        call dword ptr [mem_00925134]
    l4:
        cmp edi, ebp
        mov [esp+0x14], edi
        je l8
    lp:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je l8
        add edi, 4
        cmp edi, ebp
        jne lp
    l8:
        test ebx, ebx
        je l9
        cmp ebx, [esp+0x28]
        je la
    l9:
        call dword ptr [mem_00925134]
    la:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp l6
    l5:
        test ecx, ecx
        jne l5b
        xor eax, eax
        jmp l5c
    l5b:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    l5c:
        mov [esi+0x20], eax
    l6:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne m1
        xor eax, eax
        jmp m2
    m1:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m2:
        cmp [esi+0x20], eax
        jbe m5
        test edx, edx
        jne m3
        xor eax, eax
        jmp m4
    m3:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    m4:
        mov [esi+0x20], eax
    m5:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x004BB6C0] sub_004BB6C0 (326 bytes)
extern "C" void ext_006657F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004BB6C0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa392e8
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x9441b0
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne short L1
        mov [esi+8], edi
    L1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je short L2
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe short L4
        call dword ptr [mem_00925134]
    L4:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe short L5
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebp
        mov [esp+0x14], edi
        je short L6
    L7:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je short L6
        add edi, 4
        cmp edi, ebp
        jne short L7
    L6:
        test ebx, ebx
        je short L8
        cmp ebx, [esp+0x28]
        je short L9
    L8:
        call dword ptr [mem_00925134]
    L9:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp short L10
    L2:
        test ecx, ecx
        jne short L11
        xor eax, eax
        jmp short L12
    L11:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    L12:
        mov [esi+0x20], eax
    L10:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne short L13
        xor eax, eax
        jmp short L14
    L13:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L14:
        cmp [esi+0x20], eax
        jbe short L15
        test edx, edx
        jne short L16
        xor eax, eax
        jmp short L17
    L16:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L17:
        mov [esi+0x20], eax
    L15:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x004BB8E0] sub_004BB8E0 (326 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BB8E0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push -1
        push 0x8929f8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        push 0
        mov [esp+0xc], esi
        call ext_006657F0
        mov eax, [esp+0x20]
        mov edi, [esp+0x24]
        push 0
        push 0xa38b38
        push 0xa2f4f4
        push 0
        push edi
        mov dword ptr [esp+0x2c], 0
        mov dword ptr [esi], 0x9441c8
        mov [esi+0x10], eax
        call ext_006A6E9E
        mov ecx, [esp+0x44]
        mov [esi+0x14], eax
        mov eax, [esp+0x3c]
        mov [esi+0x18], eax
        add esp, 0x14
        cmp dword ptr [esi+0x14], 0
        mov [esi+0x1c], eax
        mov [esi+0x24], ecx
        jne short L1
        mov [esi+8], edi
    L1:
        cmp dword ptr [esp+0x2c], 0
        mov eax, [esi+0x10]
        mov ecx, [eax+4]
        je short L2
        cmp ecx, [eax+8]
        mov [esp+0x20], eax
        mov [esp+0x24], ecx
        jbe short L3
        call dword ptr [mem_00925134]
    L3:
        mov eax, [esi+0x10]
        push ebx
        push ebp
        mov ebp, [eax+8]
        cmp [eax+4], ebp
        jbe short L4
        call dword ptr [mem_00925134]
    L4:
        mov ebx, [esi+0x10]
        mov edi, [ebx+4]
        cmp edi, [ebx+8]
        jbe short L5
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebp
        mov [esp+0x14], edi
        je short L6
    L7:
        mov edx, [esp+0x34]
        cmp [edi], edx
        je short L6
        add edi, 4
        cmp edi, ebp
        jne short L7
    L6:
        test ebx, ebx
        je short L8
        cmp ebx, [esp+0x28]
        je short L9
    L8:
        call dword ptr [mem_00925134]
    L9:
        sub edi, [esp+0x2c]
        pop ebp
        sar edi, 2
        add edi, 1
        mov [esi+0x20], edi
        pop ebx
        jmp short L10
    L2:
        test ecx, ecx
        jne short L11
        xor eax, eax
        jmp short L12
    L11:
        mov eax, [eax+8]
        sub eax, ecx
        sar eax, 2
    L12:
        mov [esi+0x20], eax
    L10:
        mov ecx, [esi+0x10]
        mov edx, [ecx+4]
        test edx, edx
        jne short L13
        xor eax, eax
        jmp short L14
    L13:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L14:
        cmp [esi+0x20], eax
        jbe short L15
        test edx, edx
        jne short L16
        xor eax, eax
        jmp short L17
    L16:
        mov eax, [ecx+8]
        sub eax, edx
        sar eax, 2
    L17:
        mov [esi+0x20], eax
    L15:
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x004BEE70] sub_004BEE70 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_004BE7C0();
extern "C" void ext_004BEC60();
extern "C" void ext_00501B40();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_004BEE70(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa39650
        push 0xa328b0
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x148
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_004BEC60
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_004BE7C0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x148
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_00501B40
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x004B0A80] sub_004B0A80 (433 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B0A80(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x10]
        mov eax, esi
        and al, 0x1
        cmp al, 0x1
        mov al, byte ptr [esp + 0x8]
        sete dl
        cmp dl, al
        je loc_4b0a9b
        xor esi, 0x1
        mov dword ptr [ecx + 0x10], esi

    loc_4b0a9b:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x2
        cmp dl, 0x2
        sete dl
        cmp dl, al
        je loc_4b0ab3
        xor esi, 0x2
        mov dword ptr [ecx + 0x10], esi

    loc_4b0ab3:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x4000
        cmp edx, 0x4000
        sete dl
        cmp dl, al
        je loc_4b0ad4
        xor esi, 0x4000
        mov dword ptr [ecx + 0x10], esi

    loc_4b0ad4:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x4
        cmp dl, 0x4
        sete dl
        cmp dl, al
        je loc_4b0aec
        xor esi, 0x4
        mov dword ptr [ecx + 0x10], esi

    loc_4b0aec:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x8
        cmp dl, 0x8
        sete dl
        cmp dl, al
        je loc_4b0b04
        xor esi, 0x8
        mov dword ptr [ecx + 0x10], esi

    loc_4b0b04:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x10
        cmp dl, 0x10
        sete dl
        cmp dl, al
        je loc_4b0b1c
        xor esi, 0x10
        mov dword ptr [ecx + 0x10], esi

    loc_4b0b1c:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x20
        cmp dl, 0x20
        sete dl
        cmp dl, al
        je loc_4b0b34
        xor esi, 0x20
        mov dword ptr [ecx + 0x10], esi

    loc_4b0b34:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x40
        cmp dl, 0x40
        sete dl
        cmp dl, al
        je loc_4b0b4c
        xor esi, 0x40
        mov dword ptr [ecx + 0x10], esi

    loc_4b0b4c:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and dl, 0x80
        cmp dl, 0x80
        sete dl
        cmp dl, al
        je loc_4b0b67
        __asm _emit 0x81
        __asm _emit 0xf6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 0x10], esi

    loc_4b0b67:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x100
        cmp edx, 0x100
        sete dl
        cmp dl, al
        je loc_4b0b88
        xor esi, 0x100
        mov dword ptr [ecx + 0x10], esi

    loc_4b0b88:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x400
        cmp edx, 0x400
        sete dl
        cmp dl, al
        je loc_4b0ba9
        xor esi, 0x400
        mov dword ptr [ecx + 0x10], esi

    loc_4b0ba9:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x200
        cmp edx, 0x200
        sete dl
        cmp dl, al
        je loc_4b0bca
        xor esi, 0x200
        mov dword ptr [ecx + 0x10], esi

    loc_4b0bca:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x800
        cmp edx, 0x800
        sete dl
        cmp dl, al
        je loc_4b0beb
        xor esi, 0x800
        mov dword ptr [ecx + 0x10], esi

    loc_4b0beb:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x1000
        cmp edx, 0x1000
        sete dl
        cmp dl, al
        je loc_4b0c0c
        xor esi, 0x1000
        mov dword ptr [ecx + 0x10], esi

    loc_4b0c0c:
        mov esi, dword ptr [ecx + 0x10]
        mov edx, esi
        and edx, 0x2000
        cmp edx, 0x2000
        sete dl
        cmp dl, al
        je loc_4b0c2d
        xor esi, 0x2000
        mov dword ptr [ecx + 0x10], esi

    loc_4b0c2d:
        pop esi
        ret 0x4
    }
}

// [0x004BA5A0] sub_004BA5A0 (193 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_004B74E0();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" __declspec(naked) void __fastcall fn_004BA5A0(void* self) {
    __asm {
        push -1
        push 0x0088533c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push 1
        push 2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esp + 0x9c]
        push 0x0092f140
        push eax
        push 0x0092f144
        mov dword ptr [esp + 0x9c], 1
        call ext_004B74E0
        mov esi, dword ptr [mem_00924E94]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        mov esi, dword ptr [esp + 0xa0]
        add esp, 8
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x90], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret
    }
}

// [0x004BA670] sub_004BA670 (200 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_004B7540();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" __declspec(naked) void __fastcall fn_004BA670(void* self) {
    __asm {
        push -1
        push 0x88533c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push 1
        push 2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov ecx, dword ptr [esp + 0x9c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push 0x92f140
        mov dword ptr [esp + 0x94], 1
        call edx
        push eax
        push 0x92f144
        call ext_004B7540
        mov esi, dword ptr [mem_00924E94]
        push eax
        lea eax, [esp + 0x18]
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call ext_00435D00
        mov esi, dword ptr [esp + 0xa0]
        add esp, 8
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 1
        mov byte ptr [esp + 0x90], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret
    }
}

extern "C" void ext_0052F540();

// [0x004B08A0] sub_004B08A0 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B08A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_0052F540
        mov ecx, dword ptr [esi + 0x10]
        and ecx, eax
        add esp, 4
        xor edx, edx
        cmp ecx, eax
        sete dl
        mov al, dl
        pop esi
        ret 4
    }
}

// [0x004BF650] sub_004BF650 (37 bytes)
extern "C" void ext_0068F7C0();
extern "C" void ext_004BE6F0();
extern "C" void ext_004BF600();
extern "C" void ext_004BE740();
extern "C" unsigned char mem_00AE1D6C;
extern "C" void __cdecl fn_004BF650() {
    if (mem_00AE1D6C == 0) {
        mem_00AE1D6C = 1;
        ext_0068F7C0();
        ext_004BE6F0();
        ext_004BF600();
        ext_004BE740();
    }
}

// [0x004BE950] sub_004BE950 (329 bytes)
extern "C" void ext_00403560();
extern "C" void ext_004BE7C0();
extern "C" void ext_00507E40();
extern "C" void ext_005082B0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_004BE950(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa395c8
        push 0xa328b0
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x30
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_005082B0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_004BE7C0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x30
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_2
        mov ecx, eax
        call ext_00507E40
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0_2:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x004B07E0] sub_004B07E0 (57 bytes)
extern "C" void ext_004B05A0();
extern "C" void ext_004B0630();
extern "C" __declspec(naked) void __fastcall fn_004B07E0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        jne L_have_arg2
        mov eax, dword ptr [ecx + 0x238]
    L_have_arg2:
        cmp dword ptr [ecx + 0x4], 0
        mov edx, dword ptr [esp + 0x10]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push eax
        push edx
        jne L_alt
        call ext_004B05A0
        ret 0x14
    L_alt:
        call ext_004B0630
        ret 0x14
    }
}

extern "C" void ext_005A6650();
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

// [0x004B6120] sub_004B6120 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6120(void* self) {
    __asm {
        push -1
        push 0x8b56c4
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp + 0x4], esi
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 1
        call ext_005A6650
        lea ecx, [esi + 0x8]
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065F440
        mov ecx, [esp + 0x8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_004B4650();
extern "C" void ext_00640110();
extern "C" void ext_00640A80();
extern "C" void ext_00640A50();
extern "C" void ext_00427550();
extern "C" void ext_0067EF60();
extern "C" int mem_00A9FA88;
extern "C" int mem_00A9EF68;
extern "C" int mem_00A9EF64;

// [0x004B4890] sub_004B4890 (67 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004B4890(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr [mem_00A9FA88]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x19]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9EF68]
        mov eax, dword ptr [mem_00A9EF64]
        push 0
        push edx
        push eax
        push edi
        add esi, 8
        push esi
        call ext_004B4650
        add esp, 0x1c
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x004B0300] sub_004B0300 (355 bytes)
extern "C" void ext_004AFF30();

extern "C" __declspec(naked) void __fastcall fn_004B0300(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        mov     esi, ecx
        je      loc_4b0313
        lea     ebp, [edi + 0x4]
        jmp     loc_4b0315
loc_4b0313:
        xor     ebp, ebp
loc_4b0315:
        lea     ebx, [esi + 0x4]
        push    ebp
        mov     ecx, ebx
        call    ext_004AFF30
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [ebx + 0x10], eax
        mov     ecx, dword ptr [ebp + 0x14]
        mov     dword ptr [ebx + 0x14], ecx
        mov     edx, dword ptr [ebp + 0x18]
        mov     dword ptr [ebx + 0x18], edx
        movzx   eax, byte ptr [ebp + 0x1c]
        mov     byte ptr [ebx + 0x1c], al
        lea     ebx, [edi + 0x24]
        lea     ebp, [esi + 0x24]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        lea     ebx, [edi + 0x38]
        lea     ebp, [esi + 0x38]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   edx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], dl
        lea     ebx, [edi + 0x4c]
        lea     ebp, [esi + 0x4c]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        lea     ebx, [edi + 0x60]
        lea     ebp, [esi + 0x60]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        lea     ebx, [edi + 0x74]
        lea     ebp, [esi + 0x74]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   edx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], dl
        lea     ebx, [edi + 0x88]
        lea     ebp, [esi + 0x88]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        lea     ebx, [edi + 0x9c]
        lea     ebp, [esi + 0x9c]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        lea     ebx, [edi + 0xb0]
        lea     ebp, [esi + 0xb0]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   edx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], dl
        lea     ebx, [edi + 0xc4]
        lea     ebp, [esi + 0xc4]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   eax, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], al
        lea     ebx, [edi + 0xd8]
        lea     ebp, [esi + 0xd8]
        push    ebx
        mov     ecx, ebp
        call    ext_004AFF30
        movzx   ecx, byte ptr [ebx + 0x10]
        mov     byte ptr [ebp + 0x10], cl
        fld     dword ptr [edi + 0xec]
        fstp    dword ptr [esi + 0xec]
        mov     eax, esi
        fld     dword ptr [edi + 0xf0]
        fstp    dword ptr [esi + 0xf0]
        fld     dword ptr [edi + 0xf4]
        fstp    dword ptr [esi + 0xf4]
        movzx   edx, byte ptr [edi + 0xf8]
        pop     edi
        mov     byte ptr [esi + 0xf8], dl
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}

// [0x004BE6F0] sub_004BE6F0 (75 bytes)
extern "C" void ext_00671F20();
extern "C" void ext_004EF030();
extern "C" void ext_0059D080();
extern "C" void ext_00609590();
extern "C" void ext_00602DF0();
extern "C" void ext_00645400();
extern "C" void ext_005A9D50();
extern "C" void ext_005C2D80();
extern "C" void ext_005F3570();
extern "C" void ext_005CE2F0();
extern "C" void ext_005039A0();
extern "C" void ext_004921E0();
extern "C" void ext_00504930();
extern "C" void ext_004C3F40();
extern "C" void ext_005FBF40();

extern "C" void __cdecl fn_004BE6F0() {
    ext_00671F20();
    ext_004EF030();
    ext_0059D080();
    ext_00609590();
    ext_00602DF0();
    ext_00645400();
    ext_005A9D50();
    ext_005C2D80();
    ext_005F3570();
    ext_005CE2F0();
    ext_005039A0();
    ext_004921E0();
    ext_00504930();
    ext_004C3F40();
    ext_005FBF40();
}

// [0x004BF600] sub_004BF600 (75 bytes)
extern "C" void ext_00602D50();
extern "C" void ext_00609370();
extern "C" void ext_00647980();
extern "C" void ext_00504900();
extern "C" void ext_00507CC0();
extern "C" void ext_00511190();
extern "C" void ext_0055C220();
extern "C" void ext_00589B90();
extern "C" void ext_00610390();
extern "C" void ext_005F27C0();
extern "C" void ext_005CE210();
extern "C" void ext_0060E400();
extern "C" void ext_0051DC40();
extern "C" void ext_004BFBD0();
extern "C" void ext_004BF570();

extern "C" void __cdecl fn_004BF600() {
    ext_00602D50();
    ext_00609370();
    ext_00647980();
    ext_00504900();
    ext_00507CC0();
    ext_00511190();
    ext_0055C220();
    ext_00589B90();
    ext_00610390();
    ext_005F27C0();
    ext_005CE210();
    ext_0060E400();
    ext_0051DC40();
    ext_004BFBD0();
    ext_004BF570();
}

// [0x004BF710] sub_004BF710 (77 bytes)
extern "C" void ext_00466870();
extern "C" void ext_006619D0();
extern "C" __declspec(naked) void __fastcall fn_004BF710(void* self) {
    __asm {
        push -1
        push 0x88ac0b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov dword ptr [esp + 4], ecx
        lea esi, [ecx + 4]
        mov ecx, dword ptr [ecx]
        push esi
        mov dword ptr [esp + 0x14], 0
        call ext_006619D0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00466870
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004BEFC0] sub_004BEFC0 (90 bytes)
extern "C" void ext_004BEBE0();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE1D68;
extern "C" __declspec(naked) void __fastcall fn_004BEFC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88a95e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE1D68], al
        jne done_004BEFC0
        or dword ptr [mem_00AE1D68], eax
        mov ecx, 0xae1d44
        mov dword ptr [esp + 8], 0
        call ext_004BEBE0
        push 0x9185e0
        call ext_006A6C87
        add esp, 4
    done_004BEFC0:
        mov ecx, dword ptr [esp]
        mov eax, 0xae1d44
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x004BE620] sub_004BE620 (94 bytes)
extern "C" void ext_004BE090();
extern "C" void ext_004BE140();
extern "C" void ext_004BE1F0();
extern "C" void ext_004BE2A0();
extern "C" void ext_004BE350();
extern "C" void ext_004BE500();
extern "C" int mem_00A9F688;
extern "C" int mem_00A9FA80;
extern "C" int mem_00A9FA84;
extern "C" __declspec(naked) void __fastcall fn_004BE620(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004BE500
        mov     ecx, dword ptr [mem_00A9F688]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004BE090
        push    0x93be8c
        lea     ecx, [esp + 0x4]
        call    ext_004BE140
        push    0x944268
        lea     ecx, [esp + 0x4]
        call    ext_004BE1F0
        mov     edx, dword ptr [mem_00A9FA80]
        push    edx
        lea     ecx, [esp + 0x4]
        call    ext_004BE2A0
        mov     eax, dword ptr [mem_00A9FA84]
        push    eax
        lea     ecx, [esp + 0x4]
        call    ext_004BE350
        pop     ecx
        ret
    }
}

extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// [0x004BE400] sub_004BE400 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BE400(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x34], 0x0
        call ext_00475960
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x004BF760] sub_004BF760 (158 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00466F00();
extern "C" void ext_006619D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004BF760(void* self, int edx_unused, int* arg) {
    __asm {
        push -1
        push 0x88ac0b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+0ch], esi
        call ext_00594000
        add eax, 1c8h
        lea edi, [esi+4]
        push eax
        mov ecx, edi
        mov dword ptr [esi], eax
        call ext_00466F00
        mov ecx, dword ptr [esp+20h]
        mov eax, dword ptr [ecx]
        mov dword ptr [esi+64h], eax
        mov dword ptr [esi+70h], eax
        mov byte ptr [esi+74h], 1
        mov eax, dword ptr [ecx+4]
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, edi
        mov dword ptr [esp+1ch], 0
        mov dword ptr [esi+68h], eax
        call ext_006619D0
        mov edi, dword ptr [esi]
        mov ebx, dword ptr [mem_00925134]
        add edi, 8
        cmp dword ptr [edi], 0
        jne short L_nz1
        call ebx
    L_nz1:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edi+4]
        cmp eax, dword ptr [edx+4]
        jne short L_nz2
        call ebx
    L_nz2:
        mov ecx, dword ptr [edi+4]
        mov edx, dword ptr [ecx+8]
        add edx, dword ptr [esi+68h]
        mov ecx, dword ptr [esp+10h]
        pop edi
        mov dword ptr [esi+6ch], edx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x004B56D0] sub_004B56D0 (327 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00427A60();
extern "C" void ext_004B0F50();
extern "C" void ext_004B0F80();
extern "C" void ext_004B51F0();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_004B56D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 08921ABh
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 18h
        cmp byte ptr [esp+34h], 0
        je short loc_4B56F8
        mov ecx, dword ptr [esp+2Ch]
        call ext_004B51F0
loc_4B56F8:
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+34h]
        add esi, 24h
        push edi
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        jbe short loc_4B5711
        call dword ptr [mem_00925134]
loc_4B5711:
        lea ecx, [esp+10h]
        mov dword ptr [esp+10h], esi
        mov dword ptr [esp+14h], esi
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        mov edi, dword ptr [esi+8]
        cmp dword ptr [esi+4], edi
        jbe short loc_4B5734
        call dword ptr [mem_00925134]
loc_4B5734:
        lea ecx, [esp+1Ch]
        mov dword ptr [esp+1Ch], esi
        mov dword ptr [esp+20h], esi
        mov dword ptr [esp+24h], edi
        call ext_00427A60
        mov ebx, dword ptr [esp+40h]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loc_4B5750:
        mov ebp, dword ptr [esp+14h]
        test ebp, ebp
        je short loc_4B575E
        cmp ebp, dword ptr [esp+20h]
        je short loc_4B5768
loc_4B575E:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp short loc_4B576E
loc_4B5768:
        mov esi, dword ptr [mem_00925134]
loc_4B576E:
        mov edi, dword ptr [esp+18h]
        cmp edi, dword ptr [esp+24h]
        jae loc_4B5804
        test ebp, ebp
        jne short loc_4B5782
        call esi
loc_4B5782:
        cmp edi, dword ptr [ebp+8]
        jb short loc_4B5789
        call esi
loc_4B5789:
        mov esi, dword ptr [edi]
        lea eax, [esi+4]
        push ebx
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je short loc_4B57E4
        push 24h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+44h], eax
        test eax, eax
        mov dword ptr [esp+30h], 0
        je short loc_4B57C0
        mov ecx, eax
        call ext_004B0F50
        jmp short loc_4B57C2
loc_4B57C0:
        xor eax, eax
loc_4B57C2:
        push esi
        mov ecx, eax
        mov dword ptr [esp+34h], 0FFFFFFFFh
        mov dword ptr [esp+48h], eax
        call ext_004B0F80
        mov ecx, dword ptr [esp+3Ch]
        lea eax, [esp+44h]
        push eax
        call ext_0041A920
loc_4B57E4:
        cmp edi, dword ptr [ebp+8]
        jb short loc_4B57EF
        call dword ptr [mem_00925134]
loc_4B57EF:
        add edi, 4
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], edi
        call ext_00427A60
        jmp loc_4B5750
loc_4B5804:
        mov ecx, dword ptr [esp+28h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 24h
        ret
    }
}

// [0x004B1010] sub_004B1010 (133 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B1010(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F628]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F578]
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x20]
        push edx
        push eax
        call ext_00640A50
        mov eax, dword ptr [mem_00A9F704]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x1]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F464]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x2]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004B58C0] sub_004B58C0 (126 bytes)
extern "C" void ext_0063F530();
extern "C" void ext_004B56D0();
extern "C" __declspec(naked) void __fastcall fn_004B58C0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9FA88]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0x19]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00427640
        mov eax, dword ptr [mem_00A9EF64]
        add esp, 0x8
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_4B58C0_set
        cmp eax, 0xb53b30
        je short L_4B58C0_set
        cmp eax, 0xb53ab0
        je short L_4B58C0_set
        cmp eax, 0xb53a70
        je short L_4B58C0_set
        cmp eax, 0xb53af0
        jne short L_4B58C0_call
L_4B58C0_set:
        mov eax, 0xb53b30
L_4B58C0_call:
        mov ecx, dword ptr [mem_00A9EF68]
        push 0x1
        push ecx
        add edi, 0x8
        push edi
        push eax
        call ext_004B56D0
        add esp, 0x10
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004B6F40] sub_004B6F40 (161 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F7BC;
extern "C" int mem_00A9F7C0;
extern "C" int mem_00A9F6F8;

extern "C" __declspec(naked) void __fastcall fn_004B6F40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F7BC]
        push ecx
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov edx, dword ptr [mem_00A9F7C0]
        push edx
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F6F8]
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x58]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004B4650] sub_004B4650 (184 bytes)
extern "C" void ext_004B1010();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_004B4650() {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_4B4666
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     loc_4B466D
    loc_4B4666:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_4B466D:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_4B4686
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_4B468A
    loc_4B4686:
        mov     ebp, dword ptr [esp + 0x18]
    loc_4B468A:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_4B4698
        call    dword ptr [mem_00925134]
    loc_4B4698:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_4B46AA
        call    dword ptr [mem_00925134]
    loc_4B46AA:
        mov     ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0xff
    loc_4B46B0:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_4B4701
        test    ebx, ebx
        je      loc_4B46D0
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4B46C5
        call    dword ptr [mem_00925134]
    loc_4B46C5:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_4B46DC
    loc_4B46D0:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4B46DB
        call    dword ptr [mem_00925134]
    loc_4B46DB:
        push    ebp
    loc_4B46DC:
        mov     ecx, dword ptr [esi]
        call    ext_004B1010
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      loc_4B46F1
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        call    eax
    loc_4B46F1:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4B46FC
        call    dword ptr [mem_00925134]
    loc_4B46FC:
        add     esi, 0x4
        jmp     loc_4B46B0
    loc_4B4701:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

// [0x004BA860] sub_004BA860 (184 bytes)
extern "C" void ext_004B6F40();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_004BA860() {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_4BA876
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     loc_4BA87D
    loc_4BA876:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_4BA87D:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_4BA896
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_4BA89A
    loc_4BA896:
        mov     ebp, dword ptr [esp + 0x18]
    loc_4BA89A:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_4BA8A8
        call    dword ptr [mem_00925134]
    loc_4BA8A8:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_4BA8BA
        call    dword ptr [mem_00925134]
    loc_4BA8BA:
        mov     ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0xff
    loc_4BA8C0:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_4BA911
        test    ebx, ebx
        je      loc_4BA8E0
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4BA8D5
        call    dword ptr [mem_00925134]
    loc_4BA8D5:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_4BA8EC
    loc_4BA8E0:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4BA8EB
        call    dword ptr [mem_00925134]
    loc_4BA8EB:
        push    ebp
    loc_4BA8EC:
        mov     ecx, dword ptr [esi]
        call    ext_004B6F40
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      loc_4BA901
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        call    eax
    loc_4BA901:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4BA90C
        call    dword ptr [mem_00925134]
    loc_4BA90C:
        add     esi, 0x4
        jmp     loc_4BA8C0
    loc_4BA911:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

// [0x004B6DD0] sub_004B6DD0 (226 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004B6DD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9F838]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0ch]
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640110
        mov     ecx, esi
        mov     dword ptr [esp + 0ch], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 10h]
        call    ext_00427550
        fld     dword ptr [esi + 1ch]
        mov     ecx, dword ptr [mem_00A9F8FC]
        mov     edx, dword ptr [mem_00A9F4DC]
        push    ecx
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        call    ext_0067EF60
        fld     dword ptr [esi + 20h]
        mov     eax, dword ptr [mem_00A9F690]
        mov     ecx, dword ptr [mem_00A9F490]
        add     esp, 10h
        push    eax
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        call    ext_0067EF60
        fld     dword ptr [esi + 24h]
        mov     edx, dword ptr [mem_00A9F8B4]
        mov     eax, dword ptr [mem_00A9F4D0]
        add     esp, 10h
        push    edx
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        call    ext_0067EF60
        fld     dword ptr [esi + 28h]
        mov     ecx, dword ptr [mem_00A9F958]
        mov     edx, dword ptr [mem_00A9F4E0]
        add     esp, 10h
        push    ecx
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        call    ext_0067EF60
        fld     dword ptr [esi + 2ch]
        mov     eax, dword ptr [mem_00A9F7C4]
        mov     ecx, dword ptr [mem_00A9F4B4]
        add     esp, 10h
        push    eax
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        call    ext_0067EF60
        fld     dword ptr [esi + 30h]
        mov     edx, dword ptr [mem_00A9F994]
        mov     eax, dword ptr [mem_00A9F4E8]
        add     esp, 10h
        push    edx
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        call    ext_0067EF60
        add     esp, 10h
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}

// [0x004BA7A0] sub_004BA7A0 (184 bytes)
extern "C" void ext_004B6DD0();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __cdecl fn_004BA7A0() {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_4BA7B6
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     loc_4BA7BD
    loc_4BA7B6:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_4BA7BD:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_4BA7D6
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_4BA7DA
    loc_4BA7D6:
        mov     ebp, dword ptr [esp + 0x18]
    loc_4BA7DA:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_4BA7E8
        call    dword ptr [mem_00925134]
    loc_4BA7E8:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_4BA7FA
        call    dword ptr [mem_00925134]
    loc_4BA7FA:
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, edi
    loc_4BA800:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_4BA851
        test    ebx, ebx
        je      loc_4BA820
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4BA815
        call    dword ptr [mem_00925134]
    loc_4BA815:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_4BA82C
    loc_4BA820:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4BA82B
        call    dword ptr [mem_00925134]
    loc_4BA82B:
        push    ebp
    loc_4BA82C:
        mov     ecx, dword ptr [esi]
        call    ext_004B6DD0
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        je      loc_4BA841
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        call    eax
    loc_4BA841:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_4BA84C
        call    dword ptr [mem_00925134]
    loc_4BA84C:
        add     esi, 0x4
        jmp     loc_4BA800
    loc_4BA851:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

extern "C" void ext_004BA7A0();
extern "C" void ext_004BA860();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" void ext_00640BC0();
extern "C" void ext_0067EF60();
extern "C" void ext_0067F040();
extern "C" int mem_00A9F8A8;
extern "C" int mem_00A9F4CC;
extern "C" int mem_00A9F980;
extern "C" int mem_00A9F4E4;
extern "C" int mem_00A9EF7C;
extern "C" int mem_00A9F290;
extern "C" int mem_00A9F3D4;
extern "C" int mem_00A9F9B0;
extern "C" int mem_00A9F608;
extern "C" int mem_00A9F194;
extern "C" int mem_00A9F234;
extern "C" int mem_00A9F84C;
extern "C" int mem_00A9F600;
extern "C" int mem_00A9FA80;
extern "C" int mem_00A9FA84;
extern "C" int mem_00A9F078;
extern "C" int mem_00925134;
extern "C" int mem_00A9F084;
extern "C" int mem_00A9F06C;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F070;
extern "C" int mem_00A9F074;
extern "C" int mem_00A9F07C;
extern "C" int mem_00A9F080;

// [0x004BAC60] sub_004BAC60 (811 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BAC60(void* self) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8B56F9
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [mem_00A9F8A8]
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x48]
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9F4CC]
        fld dword ptr [esi + 0x1C]
        push eax
        push ecx
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x20]
        mov edx, dword ptr [mem_00A9F980]
        mov eax, dword ptr [mem_00A9F4E4]
        add esp, 0x10
        push edx
        push eax
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        mov edx, dword ptr [mem_00A9EF7C]
        add esp, 0x10
        lea ecx, [esi + 0x4]
        push ecx
        push 0
        push edx
        mov ecx, edi
        call ext_00640390
        push eax
        call ext_0067F040
        mov ecx, dword ptr [mem_00A9F290]
        add esp, 0x8
        lea eax, [esi + 0x10]
        push eax
        push 0
        push ecx
        mov ecx, edi
        call ext_00640390
        push eax
        call ext_0067F040
        mov edx, dword ptr [mem_00A9F3D4]
        add esp, 0x8
        push 0
        push edx
        mov ecx, edi
        call ext_00640390
        mov ebx, eax
        mov eax, dword ptr [mem_00A9F9B0]
        push eax
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 0x28]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F608]
        add esp, 0x8
        push edx
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 0x2C]
        push ecx
        push eax
        call ext_00640A50
        add esp, 0x8
        cmp byte ptr [esi + 0x40], 0
        je loc_4BAD8A
        mov edx, dword ptr [mem_00A9F194]
        push 0
        push edx
        mov ecx, edi
        call ext_00640390
        mov ebx, eax
        mov eax, dword ptr [mem_00A9F9B0]
        push eax
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 0x38]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F608]
        add esp, 0x8
        push edx
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 0x3C]
        push ecx
        push eax
        call ext_00640A50
        add esp, 0x8
    loc_4BAD8A:
        cmp byte ptr [esi + 0x41], 0
        je loc_4BADD7
        mov edx, dword ptr [mem_00A9F234]
        push 0
        push edx
        mov ecx, edi
        call ext_00640390
        mov ebx, eax
        mov eax, dword ptr [mem_00A9F9B0]
        push eax
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 0x30]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F608]
        add esp, 0x8
        push edx
        mov ecx, ebx
        call ext_00640110
        mov ecx, dword ptr [esi + 0x34]
        push ecx
        push eax
        call ext_00640A50
        add esp, 0x8
    loc_4BADD7:
        mov edx, dword ptr [mem_00A9F84C]
        push edx
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 0x4C]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F600]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x83]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9FA80]
        add esp, 0x8
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x44]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9FA84]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x48]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F078]
        add esp, 0x8
        push 0
        push ecx
        mov ecx, edi
        call ext_00640390
        mov ebp, dword ptr [esi + 0x54]
        cmp ebp, dword ptr [esi + 0x58]
        lea ebx, [esi + 0x50]
        mov dword ptr [esp + 0x48], eax
        jbe loc_4BAE71
        call dword ptr [mem_00925134]
    loc_4BAE71:
        mov dword ptr [esp + 0x18], ebp
    loc_4BAE75:
        mov ebp, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], ebp
        jbe loc_4BAE83
        call dword ptr [mem_00925134]
    loc_4BAE83:
        cmp ebx, ebx
        je loc_4BAE8D
        call dword ptr [mem_00925134]
    loc_4BAE8D:
        mov eax, dword ptr [esp + 0x18]
        cmp eax, ebp
        je loc_4BAF37
        cmp eax, dword ptr [ebx + 0x8]
        jb loc_4BAEA4
        call dword ptr [mem_00925134]
    loc_4BAEA4:
        mov edx, dword ptr [mem_00A9F084]
        mov ecx, dword ptr [esp + 0x48]
        push 0
        push edx
        call ext_00640390
        mov ecx, dword ptr [mem_00A9F06C]
        mov ebp, dword ptr [mem_00A9F838]
        push ecx
        mov ecx, eax
        call ext_006404E0
        push ebp
        mov ecx, eax
        call ext_00640110
        mov ecx, dword ptr [esp + 0x18]
        mov ebp, eax
        call dword ptr [mem_00924FF0]
        mov ecx, ebp
        mov dword ptr [esp + 0x10], eax
        call ext_0063F8D0
        mov edx, dword ptr [esp + 0x10]
        push edx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x1C]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x44], 0
        call ext_00640270
        lea ecx, [esp + 0x1C]
        mov dword ptr [esp + 0x40], 0xFFFFFFFF
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x18]
        cmp ecx, dword ptr [ebx + 0x8]
        jb loc_4BAF2D
        call dword ptr [mem_00925134]
    loc_4BAF2D:
        add dword ptr [esp + 0x18], 0x1C
        jmp loc_4BAE75
    loc_4BAF37:
        mov edx, dword ptr [mem_00A9F070]
        mov eax, dword ptr [mem_00A9F074]
        mov ecx, dword ptr [esp + 0x48]
        push 0
        push edx
        push eax
        push ecx
        lea edx, [esi + 0x60]
        push edx
        call ext_004BA7A0
        mov eax, dword ptr [mem_00A9F07C]
        mov ecx, dword ptr [mem_00A9F080]
        mov edx, dword ptr [esp + 0x5C]
        push 0
        push eax
        push ecx
        push edx
        add esi, 0x70
        push esi
        call ext_004BA860
        mov ecx, dword ptr [esp + 0x60]
        add esp, 0x28
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}

// [0x004B5540] sub_004B5540 (111 bytes)
extern "C" void ext_004B0F50();
extern "C" void ext_004B5360();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004B5540(void* self) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x24
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je label_null
        mov ecx, eax
        call ext_004B0F50
        jmp label_continue
    label_null:
        xor eax, eax
    label_continue:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_004B5360
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004B6A60] sub_004B6A60 (112 bytes)
extern "C" void ext_004B6680();
extern "C" void ext_004B69A0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004B6A60(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_tail_004B6A60
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        mov eax, ebx
        sub eax, ecx
        sar eax, 0x2
        cmp ebp, eax
        jae L_pop_ebx_004B6A60
        cmp ecx, ebx
        jbe L_chk1_004B6A60
        call dword ptr [mem_00925134]
    L_chk1_004B6A60:
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk2_004B6A60
        call dword ptr [mem_00925134]
    L_chk2_004B6A60:
        mov dword ptr [esp + 0x14], edi
        lea edi, [edi + 4*ebp]
        cmp edi, dword ptr [esi + 0x8]
        ja L_chk3_004B6A60
        cmp edi, dword ptr [esi + 0x4]
        jae L_call_004B6A60
    L_chk3_004B6A60:
        call dword ptr [mem_00925134]
    L_call_004B6A60:
        push ebx
        push esi
        push edi
        push esi
        mov ecx, esi
        call ext_004B6680
        pop edi
    L_pop_ebx_004B6A60:
        pop ebx
    L_tail_004B6A60:
        push 0
        push ebp
        mov ecx, esi
        call ext_004B69A0
        pop esi
        pop ebp
        add esp, 8
        ret 4
    }
}

extern "C" void ext_004667A0();
extern "C" void ext_004B6A60();
extern "C" void ext_004F27E0();
extern "C" void ext_004F2870();
extern "C" void ext_004F2DE0();
extern "C" void ext_004F4D20();
extern "C" void ext_006A5C62();
// [0x004B6AD0] sub_004B6AD0 (433 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B6AD0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x889e8f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [edi + 0x14], ebp
        mov dword ptr [edi + 0x18], ebp
        mov dword ptr [edi + 0x1c], ebp
        lea esi, [edi + 0x20]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        mov dword ptr [edi + 0x4], -1
        mov dword ptr [edi + 0xc], ebp
        push 4
        mov ecx, esi
        mov dword ptr [esp + 0x24], 1
        mov dword ptr [edi], 0x94339c
        call ext_004B6A60
        push 0xc
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebp
        mov byte ptr [esp + 0x20], 2
        je L_b1
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push edi
        mov ecx, eax
        call ext_004F4D20
        mov ebx, eax
        jmp L_c1
L_b1:
        xor ebx, ebx
L_c1:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        mov byte ptr [esp + 0x20], 1
        je L_b2
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 2
        jne L_c2
L_b2:
        call dword ptr [mem_00925134]
L_c2:
        mov eax, dword ptr [esi + 0x4]
        push 0xc
        mov dword ptr [eax], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebp
        mov byte ptr [esp + 0x20], 3
        je L_b3
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push edi
        mov ecx, eax
        call ext_004F2DE0
        mov ebx, eax
        jmp L_c3
L_b3:
        xor ebx, ebx
L_c3:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, ebp
        mov byte ptr [esp + 0x20], 1
        je L_b4
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        ja L_c4
L_b4:
        call dword ptr [mem_00925134]
L_c4:
        mov edx, dword ptr [esi + 0x4]
        push 0xc
        mov dword ptr [edx + 0x4], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebp
        mov byte ptr [esp + 0x20], 4
        je L_b5
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push edi
        mov ecx, eax
        call ext_004F2870
        mov ebx, eax
        jmp L_c5
L_b5:
        xor ebx, ebx
L_c5:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, ebp
        mov byte ptr [esp + 0x20], 1
        je L_b6
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        ja L_c6
L_b6:
        call dword ptr [mem_00925134]
L_c6:
        mov edx, dword ptr [esi + 0x4]
        push 0xc
        mov dword ptr [edx + 0x8], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebp
        mov byte ptr [esp + 0x20], 5
        je L_b7
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        push edi
        mov ecx, eax
        call ext_004F27E0
        mov ebx, eax
        jmp L_c7
L_b7:
        xor ebx, ebx
L_c7:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, ebp
        mov byte ptr [esp + 0x20], 1
        je L_b8
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 2
        cmp eax, 3
        ja L_c8
L_b8:
        call dword ptr [mem_00925134]
L_c8:
        mov edx, dword ptr [esi + 0x4]
        push ebp
        mov ecx, edi
        mov dword ptr [edx + 0xc], ebx
        call ext_004667A0
        mov ecx, dword ptr [esp + 0x18]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 4
    }
}

// [0x004B60A0] sub_004B60A0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_004B1880();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004B60A0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004B1880
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x004BE010] sub_004BE010 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_004B7920();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004BE010(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_004B7920
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

extern "C" void ext_004E82C0();

// [0x004B0060] sub_004B0060 (123 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B0060(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8893d3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x0
        mov dword ptr [esp + 0x8], esi
        call ext_006657F0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x10], eax
        add eax, 0x8
        push eax
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x941fb0
        call ext_004E82C0
        mov eax, dword ptr [esi + 0x10]
        add eax, 0x264
        push eax
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x14], 0x1
        call ext_004E82C0
        mov ecx, dword ptr [esi + 0x10]
        add ecx, 0x210
        mov dword ptr [esi + 0x8], ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004B4E60] sub_004B4E60 (117 bytes)
extern "C" void ext_004B49A0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004B4E60(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_004B4E60
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_004B49A0
        jmp L_DONE_004B4E60
L_NULL_004B4E60:
        xor eax, eax
L_DONE_004B4E60:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004B7620] sub_004B7620 (117 bytes)
extern "C" void ext_004B75A0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004B7620(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x50
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_004B7620
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_004B75A0
        jmp L_DONE_004B7620
L_NULL_004B7620:
        xor eax, eax
L_DONE_004B7620:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004B77E0] sub_004B77E0 (117 bytes)
extern "C" void ext_004B76A0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004B77E0(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_004B77E0
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_004B76A0
        jmp L_DONE_004B77E0
L_NULL_004B77E0:
        xor eax, eax
L_DONE_004B77E0:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004B7860] sub_004B7860 (117 bytes)
extern "C" void ext_004B7740();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004B7860(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x50
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_004B7860
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_004B7740
        jmp L_DONE_004B7860
L_NULL_004B7860:
        xor eax, eax
L_DONE_004B7860:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004BA440] sub_004BA440 (117 bytes)
extern "C" void ext_004BA0D0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004BA440(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_NULL_004BA440
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call ext_004BA0D0
        jmp L_DONE_004BA440
L_NULL_004BA440:
        xor eax, eax
L_DONE_004BA440:
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x004B5360] sub_004B5360 (126 bytes)
extern "C" void ext_004B4EE0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004B5360(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], 0
        je short L_4B53B2
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_004B4EE0
        jmp short L_4B53B4
L_4B53B2:
        xor eax, eax
L_4B53B4:
        push eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004BBDB0] sub_004BBDB0 (126 bytes)
extern "C" void ext_004BB6C0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004BBDB0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], 0
        je short L_4BBE02
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_004BB6C0
        jmp short L_4BBE04
L_4BBE02:
        xor eax, eax
L_4BBE04:
        push eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004BBE30] sub_004BBE30 (126 bytes)
extern "C" void ext_004BB8E0();
extern "C" void ext_00665870();
extern "C" void ext_00666670();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_004BBE30(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], 0
        je short L_4BBE82
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_004BB8E0
        jmp short L_4BBE84
    L_4BBE82:
        xor eax, eax
    L_4BBE84:
        push eax
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00665870
        mov ecx, eax
        call ext_00666670
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x004BC2B0] sub_004BC2B0 (358 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00664F50();
extern "C" void ext_00665570();
extern "C" __declspec(naked) void __fastcall fn_004BC2B0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x88a374
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr [esp + 0x8], ebx
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebx
        push 0x9441dc
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x4c], 0x1
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        add esi, 0x4
        push esi
        mov byte ptr [esp + 0x54], 0x2
        call ext_00665570
        add esp, 0xc
        lea ecx, [esp + 0x24]
        mov edi, eax
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF4]
        cmp edi, 0x2
        jne L_BC3DE
        mov esi, dword ptr [esp + 0x18]
        cmp esi, ebx
        je L_BC34E
        mov ecx, dword ptr [esp + 0x1c]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_BC358
    L_BC34E:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x18]
    L_BC358:
        push 0x92f150
        push esi
        call ext_00664F50
        add esp, 0x4
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        mov edi, eax
        mov esi, dword ptr [esp + 0x18]
        cmp esi, ebx
        mov byte ptr [esp + 0x48], 0x3
        je L_BC3A2
        mov ecx, dword ptr [esp + 0x1c]
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja L_BC3AC
    L_BC3A2:
        call dword ptr [mem_00925134]
        mov esi, dword ptr [esp + 0x18]
    L_BC3AC:
        lea eax, [esi + 0x1c]
        push eax
        call ext_00664F50
        mov esi, dword ptr [esp + 0x54]
        push eax
        push edi
        push esi
        call dword ptr [mem_00924FD0]
        add esp, 0x10
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0xc], 0x1
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF4]
        jmp L_BC3F3
    L_BC3DE:
        push esi
        mov esi, dword ptr [esp + 0x54]
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0xc], 0x1
    L_BC3F3:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x48], bl
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 0x4
    }
}

extern "C" void ext_004B0A80();
extern "C" void ext_0052F540();

// [0x004B0D50] sub_004B0D50 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_004B0D50(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b4838
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov eax, dword ptr [esp + 0x20]
        xor ebx, ebx
        lea ecx, [esi + 0xc]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], 0x94200c
        mov dword ptr [ecx], 0x93a444
        mov dword ptr [ecx + 0x4], ebx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 0x18], ebx
        mov byte ptr [esi + 0x8], bl
        mov byte ptr [esi + 0x9], bl
        call eax
        push 1
        mov ecx, esi
        call ext_004B0A80
        xor edi, edi
    loop_0d50:
        push edi
        call ext_0052F540
        add edi, 1
        add esp, 4
        cmp edi, 0xf
        jl loop_0d50
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_004764C0();
extern "C" void ext_00493D90();
extern "C" void ext_0049A9C0();
extern "C" void ext_004A1A10();
extern "C" void ext_004A5770();
extern "C" void ext_004B65F0();
extern "C" void ext_004BE590();
extern "C" void ext_004BE620();
extern "C" void ext_004C4100();
extern "C" void ext_00503970();
extern "C" void ext_005220B0();
extern "C" void ext_0058A080();
extern "C" void ext_005CE450();
extern "C" void ext_0060B890();
extern "C" void ext_00675660();
extern "C" void ext_00678D40();
extern "C" void ext_00687060();
extern "C" void ext_0068ED60();
extern "C" void ext_0068F790();

// [0x004BE740] sub_004BE740 (124 bytes)
extern "C" void __cdecl fn_004BE740() {
    int s = ((int (__cdecl*)())ext_00675660)();
    ((void (__cdecl*)(int))ext_00687060)(s);
    ((void (__cdecl*)(int))ext_00503970)(s);
    ((void (__cdecl*)(int))ext_004A5770)(s);
    ((void (__cdecl*)(int))ext_004A1A10)(s);
    ((void (__cdecl*)(int))ext_0049A9C0)(s);
    ((void (__cdecl*)(int))ext_004B65F0)(s);
    ((void (__cdecl*)(int))ext_004BE620)(s);
    ((void (__cdecl*)(int))ext_004764C0)(s);
    ((void (__cdecl*)(int))ext_0058A080)(s);
    ((void (__cdecl*)(int))ext_004C4100)(s);
    ((void (__cdecl*)(int))ext_0060B890)(s);
    ((void (__cdecl*)(int))ext_0068F790)(s);
    ((void (__cdecl*)(int))ext_0068ED60)(s);
    ((void (__cdecl*)(int))ext_00493D90)(s);
    ((void (__cdecl*)(int))ext_005CE450)(s);
    ((void (__cdecl*)(int))ext_004BE590)(s);
    ((void (__cdecl*)(int))ext_00678D40)(s);
    ((void (__cdecl*)(int))ext_005220B0)(s);
}

// [0x004BEBE0] sub_004BEBE0 (128 bytes)
extern "C" void ext_0040ECB0();
extern "C" void ext_004BE7C0();
extern "C" int mem_00924FF4;
extern "C" int mem_009442B4;
extern "C" int mem_00B5962C;
extern "C" int mem_0087ACB7;

extern "C" __declspec(naked) void* __fastcall fn_004BEBE0(void* self) {
    __asm {
        push -1
        push offset mem_0087ACB7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        mov dword ptr [esi], offset mem_009442B4
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        lea eax, [esp + 0x8]
        push eax
        mov byte ptr [esp + 0x30], 0x2
        call ext_004BE7C0
        add esp, 0x4
        push eax
        mov ecx, offset mem_00B5962C
        mov byte ptr [esp + 0x30], 0x3
        call ext_0040ECB0
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x004BF570] sub_004BF570 (133 bytes)
extern "C" void ext_004BEFC0();
extern "C" void ext_004BF020();
extern "C" void ext_004BF120();
extern "C" void ext_004BF220();
extern "C" void ext_004BF470();
extern "C" int mem_00A9F2B8;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F23C;
extern "C" int mem_00A9EEA0;
extern "C" int mem_00A9EFC0;
extern "C" __declspec(naked) void __fastcall fn_004BF570(void* self) {
    __asm {
        push ecx
        call ext_004BEFC0
        mov eax, dword ptr [mem_00A9F2B8]
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        call ext_004BF470
        mov edx, dword ptr [mem_00A9F23C]
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push edx
        call dword ptr [mem_00924FE4]
        call ext_004BF020
        mov eax, dword ptr [mem_00A9EEA0]
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        call ext_004BF120
        mov edx, dword ptr [mem_00A9EFC0]
        add esp, 0x20
        push 0
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push edx
        call dword ptr [mem_00924FE4]
        call ext_004BF220
        add esp, 0x24
        ret
    }
}

// [0x004B65F0] sub_004B65F0 (133 bytes)
extern "C" void ext_004B5BD0();
extern "C" void ext_004B5C80();
extern "C" void ext_004B5D30();
extern "C" void ext_004B5DE0();
extern "C" void ext_004B5E90();
extern "C" void ext_004B5F40();
extern "C" void ext_004B5FF0();
extern "C" void ext_004B60A0();
extern "C" void ext_004B6560();
extern "C" __declspec(naked) void __fastcall fn_004B65F0(void* self) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004B6560
        push    0x93e8e4
        lea     ecx, [esp + 0x4]
        call    ext_004B5BD0
        push    0x93e8dc
        lea     ecx, [esp + 0x4]
        call    ext_004B5C80
        push    0x93e8d4
        lea     ecx, [esp + 0x4]
        call    ext_004B5D30
        push    0x93e8cc
        lea     ecx, [esp + 0x4]
        call    ext_004B5DE0
        push    0x943378
        lea     ecx, [esp + 0x4]
        call    ext_004B5E90
        push    0x943368
        lea     ecx, [esp + 0x4]
        call    ext_004B5F40
        push    0x943354
        lea     ecx, [esp + 0x4]
        call    ext_004B5FF0
        mov     ecx, dword ptr [mem_00A9FA88]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004B60A0
        pop     ecx
        ret
    }
}

// [0x004B6180] sub_004B6180 (345 bytes)
extern "C" void ext_0048B4C0();
extern "C" void ext_004919B0();
extern "C" void ext_006601E0();
extern "C" void ext_006609B0();
extern "C" void ext_00680F90();
extern "C" void ext_006870D0();
extern "C" void ext_00687150();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6C87();
extern "C" int mem_00924FDC;
extern "C" int mem_00AE0E00;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00AE0DF8;

extern "C" __declspec(naked) void __fastcall fn_004B6180(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x889d33
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x90
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 0x10], esp
        push eax
        lea ecx, [edi + 0x4]
        mov dword ptr [ebp - 0x14], edi
        call dword ptr [mem_00924FDC]
        xor ebx, ebx
        test byte ptr [mem_00AE0E00], 0x1
        mov dword ptr [ebp - 0x4], ebx
        jne L_check_df8
        or dword ptr [mem_00AE0E00], 0x1
        push 0x928b5d
        lea ecx, [ebp - 0x34]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FE4]
        lea ecx, [ebp - 0x34]
        push ecx
        mov ecx, 0xae0dc8
        mov byte ptr [ebp - 0x4], 0x2
        call ext_00687150
        lea ecx, [ebp - 0x34]
        mov byte ptr [ebp - 0x4], 0x1
        call dword ptr [mem_00924FF4]
        push 0x9182e0
        call ext_006A6C87
        add esp, 0x4
        mov byte ptr [ebp - 0x4], bl
    L_check_df8:
        cmp dword ptr [mem_00AE0DF8], ebx
        jne L_common
        push 0x68
        call ext_006A5C62
        mov ecx, eax
        add esp, 0x4
        mov dword ptr [ebp - 0x18], ecx
        cmp ecx, ebx
        mov byte ptr [ebp - 0x4], 0x3
        je L_zero_obj
        push ebx
        call ext_004919B0
        jmp L_after_obj
    L_zero_obj:
        xor eax, eax
    L_after_obj:
        cmp eax, ebx
        mov byte ptr [ebp - 0x4], bl
        je L_esi_zero
        lea esi, [eax + 0x10]
        jmp L_push_str
    L_esi_zero:
        xor esi, esi
    L_push_str:
        push 0x93a708
        lea ecx, [ebp - 0x34]
        call dword ptr [mem_00924FE4]
        push esi
        lea edx, [ebp - 0x34]
        push edx
        mov ecx, 0xae0dc8
        mov byte ptr [ebp - 0x4], 0x4
        call ext_006870D0
        lea ecx, [ebp - 0x34]
        mov byte ptr [ebp - 0x4], bl
        call dword ptr [mem_00924FF4]
    L_common:
        push 0xae0dc8
        lea ecx, [ebp - 0x40]
        call ext_006609B0
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push 0x1
        push ebx
        push eax
        lea ecx, [ebp - 0x9c]
        mov byte ptr [ebp - 0x4], 0x5
        call ext_00680F90
        lea ecx, [ebp - 0x9c]
        mov byte ptr [edi + 0x3], 0x1
        mov byte ptr [edi + 0x2], bl
        call ext_0048B4C0
        lea ecx, [ebp - 0x40]
        mov byte ptr [ebp - 0x4], bl
        call ext_006601E0
        jmp L_end
    L_handler:
        mov ecx, dword ptr [ebp - 0x14]
        mov byte ptr [ecx + 0x3], 0x0
        mov eax, 0x4b62c0
        ret
        mov edi, dword ptr [ebp - 0x14]
    L_end:
        mov ecx, dword ptr [ebp - 0xc]
        mov byte ptr [edi], 0x1
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x004B6560] sub_004B6560 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_004B6560(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        lea eax, [esp + 0x4]
        push 0xa383f4
        push eax
        mov esi, ecx
        call ext_00662610
        add esp, 0x8
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        mov dword ptr [esp + 0x28], 0x0
        je L_4B65B3
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esi + 0x18]
        call ext_00474F00
        mov ecx, eax
        call dword ptr [mem_00924FD4]
L_4B65B3:
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esi + 0x8]
        call ext_00476360
        mov esi, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x4]
        mov dword ptr [esi], eax
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x004BE470] sub_004BE470 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004BE470(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa39568
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4BE4C3
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4BE4C3:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x004BE590] sub_004BE590 (141 bytes)
extern "C" void ext_004BE010();
extern "C" void ext_004BE400();
extern "C" void ext_004BE470();
extern "C" void ext_0067A670();
extern "C" int mem_00AE16E0;
extern "C" int mem_00AE16DC;
extern "C" int mem_0088A5AE;
extern "C" int mem_009440B4;
extern "C" int mem_00944258;
extern "C" int mem_00944244;

extern "C" __declspec(naked) void __fastcall fn_004BE590(void* self) {
    __asm {
        push    -0x1
        push    offset mem_0088A5AE
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    0x0
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004BE470
        mov     eax, 0x1
        test    byte ptr [mem_00AE16E0], al
        jne     L_4BE5ED
        or      dword ptr [mem_00AE16E0], eax
        mov     ecx, offset mem_00AE16DC
        mov     dword ptr [esp + 0xc], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE16DC], offset mem_009440B4
        mov     dword ptr [esp + 0xc], 0xffffffff
    L_4BE5ED:
        push    offset mem_00AE16DC
        push    offset mem_00944258
        lea     ecx, [esp + 0x8]
        call    ext_004BE400
        push    offset mem_00944244
        lea     ecx, [esp + 0x4]
        call    ext_004BE010
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x004BE500] sub_004BE500 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BE500(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa3958c
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_4BE553
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_4BE553:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

extern "C" void ext_004142E0();
extern "C" void ext_004B74E0();
extern "C" void ext_004B7540();
extern "C" void ext_004BA340();
extern "C" void ext_00500340();
extern "C" void ext_0059A140();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_0088A388;
extern "C" int mem_0088A3A8;
extern "C" int mem_009D1278;

// [0x004BC4B0] sub_004BC4B0 (253 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004BC4B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push offset mem_0088A388
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push ebx
        mov ebx, dword ptr [esp + 0x4c]
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x58], ebx
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x50], 0
        jbe L1
        call dword ptr [mem_00925134]
    L1:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        mov eax, dword ptr [esp + 0x58]
        push 0
        push eax
        push ebx
        push ebp
        push edi
        mov dword ptr [esp + 0x28], edi
        call ext_004BA340
        mov ebp, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], ebp
        mov edi, eax
        jbe L3
        call dword ptr [mem_00925134]
    L3:
        test esi, esi
        je L4
        cmp esi, esi
        je L5
    L4:
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebp
        je L8
        test esi, esi
        jne L6
        call dword ptr [mem_00925134]
    L6:
        cmp edi, dword ptr [esi + 0x8]
        jb L7
        call dword ptr [mem_00925134]
    L7:
        mov eax, dword ptr [edi]
        push ebx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L8
        push ebx
        call ext_004B74E0
        push eax
        lea ecx, [esp + 0x28]
        call ext_004142E0
        push offset mem_009D1278
        lea ecx, [esp + 0x24]
        push ecx
        call ext_006A6DD2
    L8:
        lea edx, [esp + 0x10]
        push edx
        push edi
        push esi
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x20], ebx
        call ext_0059A140
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov fs:[0], ecx
        add esp, 0x44
        ret 0x8
    }
}

// [0x004BC5B0] sub_004BC5B0 (282 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004BC5B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push offset mem_0088A3A8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x4c]
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x10], ebp
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, ebp
        mov dword ptr [esp + 0x4c], 0
        call edx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov dword ptr [esp + 0x54], eax
        jbe L1
        call dword ptr [mem_00925134]
    L1:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L2
        call dword ptr [mem_00925134]
    L2:
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [esp + 0x54]
        push 0
        push eax
        push ecx
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_00500340
        mov ebx, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], ebx
        mov edi, eax
        jbe L3
        call dword ptr [mem_00925134]
    L3:
        test esi, esi
        je L4
        cmp esi, esi
        je L5
    L4:
        call dword ptr [mem_00925134]
    L5:
        cmp edi, ebx
        je L8
        test esi, esi
        jne L6
        call dword ptr [mem_00925134]
    L6:
        cmp edi, dword ptr [esi + 0x8]
        jb L7
        call dword ptr [mem_00925134]
    L7:
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [ecx]
        mov ebx, dword ptr [esp + 0x54]
        mov eax, dword ptr [edx + 0x24]
        push ebx
        call eax
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L8
        push ebx
        call ext_004B7540
        push eax
        lea ecx, [esp + 0x24]
        call ext_004142E0
        push offset mem_009D1278
        lea ecx, [esp + 0x20]
        push ecx
        call ext_006A6DD2
    L8:
        lea edx, [esp + 0x54]
        push edx
        push edi
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        mov dword ptr [esp + 0x64], ebp
        call ext_0059A140
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x40
        ret 0x8
    }
}

// [0x004B62E0] sub_004B62E0 (327 bytes)
extern "C" void ext_004B0F50();
extern "C" void ext_004B6180();
extern "C" void ext_0059A140();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void __fastcall fn_004B62E0(void* self, int edx_unused, void* arg0) {
    __asm {
        push -0x1
        push 0x88f49b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x8]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], ecx
        jbe loc_004B6313
        call ebp
    loc_004B6313:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe loc_004B6323
        call ebp
        mov ebp, dword ptr [mem_00925134]
    loc_004B6323:
        test esi, esi
        je loc_004B632B
        cmp esi, esi
        je loc_004B6333
    loc_004B632B:
        call ebp
        mov ebp, dword ptr [mem_00925134]
    loc_004B6333:
        cmp edi, ebx
        je loc_004B636C
        test esi, esi
        jne loc_004B633D
        call ebp
    loc_004B633D:
        cmp edi, dword ptr [esi + 0x8]
        jb loc_004B6344
        call ebp
    loc_004B6344:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esp + 0x30]
        add eax, 0x4
        push ecx
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne loc_004B6412
        cmp edi, dword ptr [esi + 0x8]
        jb loc_004B6367
        call ebp
    loc_004B6367:
        add edi, 0x4
        jmp loc_004B6313
    loc_004B636C:
        push 0x24
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        mov dword ptr [esp + 0x28], 0x0
        je loc_004B6391
        mov ecx, eax
        call ext_004B0F50
        mov edi, eax
        jmp loc_004B6393
    loc_004B6391:
        xor edi, edi
    loc_004B6393:
        mov edx, dword ptr [esp + 0x30]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x2c], 0xffffffff
        mov dword ptr [esp + 0x18], edi
        call ext_004B6180
        mov eax, dword ptr [esp + 0x10]
        mov cl, byte ptr [eax + 0x18]
        mov byte ptr [edi + 0x2], cl
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne loc_004B63C0
        xor edx, edx
        jmp loc_004B63C8
    loc_004B63C0:
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 0x2
    loc_004B63C8:
        test eax, eax
        je loc_004B63E5
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
        cmp edx, ecx
        jae loc_004B63E5
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], edi
        add eax, 0x4
        mov dword ptr [esi + 0x8], eax
        jmp loc_004B6401
    loc_004B63E5:
        mov ebx, dword ptr [esi + 0x8]
        cmp eax, ebx
        jbe loc_004B63EE
        call ebp
    loc_004B63EE:
        lea edx, [esp + 0x14]
        push edx
        push ebx
        push esi
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_0059A140
    loc_004B6401:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx]
        add ecx, 0x4
        push 0x0
        push edi
        call eax
    loc_004B6412:
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x004BED90] sub_004BED90 (211 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_004276B0();
extern "C" void ext_004BEAA0();
extern "C" void ext_005CD120();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004BED90(void* self) {
    __asm {
        push -0x1
        push 0x878f31
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x64
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x80]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x84]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x44], ecx
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x7c], 0x0
        call ext_005CD120
        lea ecx, [esp + 0x28]
        mov bl, al
        mov dword ptr [esp + 0x78], 0xffffffff
        call dword ptr [mem_00924FF4]
        test bl, bl
        je loc_4bee0e
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x70
        ret 0xc

    loc_4bee0e:
        cmp byte ptr [esp + 0x88], 0x0
        je loc_4bee4d
        lea eax, [esp + 0xc]
        push edi
        push eax
        call ext_004276B0
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x7c], 0x1
        call ext_004BEAA0
        push eax
        lea ecx, [esp + 0x50]
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x4c]
        push ecx
        call ext_006A6DD2

    loc_4bee4d:
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x70
        ret 0xc
    }
}

// [0x004B5BD0] sub_004B5BD0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D94;
extern "C" int mem_00AE0D90;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004B5BD0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x889bc7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE0D94], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE0D94], 0x1
        mov     ecx, offset mem_00AE0D90
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE0D90], 0x9426cc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE0D90
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004B5C80] sub_004B5C80 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE0D9C;
extern "C" int mem_00AE0D98;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004B5C80(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x889bf7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE0D9C], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE0D9C], 0x1
        mov     ecx, offset mem_00AE0D98
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE0D98], 0x94287c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE0D98
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004B5D30] sub_004B5D30 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE0DA4;
extern "C" int mem_00AE0DA0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004B5D30(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x889c27
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE0DA4], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE0DA4], 0x1
        mov     ecx, offset mem_00AE0DA0
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE0DA0], 0x942a2c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE0DA0
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004B5DE0] sub_004B5DE0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE0DAC;
extern "C" int mem_00AE0DA8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004B5DE0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x889c57
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE0DAC], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE0DAC], 0x1
        mov     ecx, offset mem_00AE0DA8
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE0DA8], 0x942bdc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE0DA8
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x004B5E90] sub_004B5E90 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00AE0DB4;
extern "C" int mem_00AE0DB0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004B5E90(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x889c87
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00AE0DB4], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00AE0DB4], 0x1
        mov     ecx, offset mem_00AE0DB0
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00AE0DB0], 0x942d8c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00AE0DB0
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}
