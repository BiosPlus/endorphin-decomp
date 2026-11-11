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
