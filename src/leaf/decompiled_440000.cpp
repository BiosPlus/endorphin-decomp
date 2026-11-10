// Decompiled translation unit: src/leaf/decompiled_440000.cpp

// [0x0044C0D0] sub_0044C0D0 (27 bytes)
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __fastcall fn_0044C0D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je skip_call
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        call edx
    skip_call:
        mov ecx, esi
        pop esi
        jmp ext_006A5EA8
    }
}

// [0x00441060] sub_00441060 (33 bytes)
extern "C" double mem_0092BD70;

extern "C" __declspec(naked) int __fastcall fn_00441060(void* self) {
    __asm {
        sub esp, 0xc
        fld qword ptr [ecx + 0x90]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp]
        mov eax, dword ptr [esp]
        add esp, 0xc
        ret
    }
}

// [0x00441090] sub_00441090 (33 bytes)
extern "C" __declspec(naked) int __fastcall fn_00441090(void* self) {
    __asm {
        sub esp, 0xc
        fld qword ptr [ecx + 0x98]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp]
        mov eax, dword ptr [esp]
        add esp, 0xc
        ret
    }
}

// [0x004489E0] sub_004489E0 (33 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_004489E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        mov eax, dword ptr [ecx + 0x58]
        mov ecx, dword ptr [eax + 0x20]
        push edx
        push 0x46f
        push ecx
        call dword ptr [mem_00925694]
        xor eax, eax
        ret 0x8
    }
}

// [0x0044C910] sub_0044C910 (8 bytes)
extern "C" void ext_0044C790();

extern "C" __declspec(naked) void __cdecl fn_0044C910() {
    __asm {
        push 0
        call ext_0044C790
        ret
    }
}

// [0x0044C920] sub_0044C920 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C920() {
    __asm {
        push 1
        call ext_0044C790
        ret
    }
}

// [0x0044C930] sub_0044C930 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C930() {
    __asm {
        push 2
        call ext_0044C790
        ret
    }
}

// [0x0044C940] sub_0044C940 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C940() {
    __asm {
        push 3
        call ext_0044C790
        ret
    }
}

// [0x0044C950] sub_0044C950 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C950() {
    __asm {
        push 4
        call ext_0044C790
        ret
    }
}

// [0x0044C960] sub_0044C960 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C960() {
    __asm {
        push 5
        call ext_0044C790
        ret
    }
}

// [0x0044C970] sub_0044C970 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C970() {
    __asm {
        push 6
        call ext_0044C790
        ret
    }
}

// [0x0044C980] sub_0044C980 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C980() {
    __asm {
        push 7
        call ext_0044C790
        ret
    }
}

// [0x0044C990] sub_0044C990 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C990() {
    __asm {
        push 8
        call ext_0044C790
        ret
    }
}

// [0x0044C9A0] sub_0044C9A0 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C9A0() {
    __asm {
        push 9
        call ext_0044C790
        ret
    }
}

// [0x004409D0] sub_004409D0 (10 bytes)
extern "C" void ext_0043BFF0();

extern "C" __declspec(naked) void __fastcall fn_004409D0(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx + 0x44]
        call ext_0043BFF0
        ret
    }
}

// [0x004409E0] sub_004409E0 (10 bytes)
extern "C" void ext_0043C0F0();

extern "C" __declspec(naked) void __fastcall fn_004409E0(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx + 0x44]
        call ext_0043C0F0
        ret
    }
}

// [0x0044B100] sub_0044B100 (11 bytes)
extern "C" void ext_00530D80();
extern "C" __declspec(naked) void __fastcall fn_0044B100(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x3
        call ext_00530D80
        ret
    }
}

// [0x0044B110] sub_0044B110 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B110(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x4
        call ext_00530D80
        ret
    }
}

// [0x0044B120] sub_0044B120 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B120(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x2
        call ext_00530D80
        ret
    }
}

// [0x0044B130] sub_0044B130 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B130(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x5
        call ext_00530D80
        ret
    }
}

// [0x0044B140] sub_0044B140 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B140(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x7
        call ext_00530D80
        ret
    }
}

// [0x0044B150] sub_0044B150 (11 bytes)
extern "C" void ext_00530D80();
extern "C" __declspec(naked) void __fastcall fn_0044B150(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x6
        call ext_00530D80
        ret
    }
}

// [0x0044B160] sub_0044B160 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B160(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x9
        call ext_00530D80
        ret
    }
}

// [0x0044B170] sub_0044B170 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B170(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0xa
        call ext_00530D80
        ret
    }
}

// [0x0044B180] sub_0044B180 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B180(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0xb
        call ext_00530D80
        ret
    }
}

// [0x0044B190] sub_0044B190 (11 bytes)
extern "C" void ext_00530D80();
extern "C" __declspec(naked) void __fastcall fn_0044B190(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0xc
        call ext_00530D80
        ret
    }
}

// [0x0044B1A0] sub_0044B1A0 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B1A0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0xd
        call ext_00530D80
        ret
    }
}

// [0x0044B1B0] sub_0044B1B0 (11 bytes)
extern "C" void ext_00530D80();
extern "C" __declspec(naked) void __fastcall fn_0044B1B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0xe
        call ext_00530D80
        ret
    }
}

// [0x0044B1C0] sub_0044B1C0 (11 bytes)
extern "C" void ext_00530D80();
extern "C" __declspec(naked) void __fastcall fn_0044B1C0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0xf
        call ext_00530D80
        ret
    }
}

// [0x0044B1D0] sub_0044B1D0 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B1D0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x68]
        push 0x10
        call ext_00530D80
        ret
    }
}

// [0x0044B1E0] sub_0044B1E0 (11 bytes)
extern "C" void ext_00530D80();
extern "C" void __fastcall fn_0044B1E0(void* self) {
    void* inner = *(void**)((char*)self + 0x68);
    ((void (__thiscall*)(void*, int))ext_00530D80)(inner, 0x13);
}

// [0x0044CF30] sub_0044CF30 (13 bytes)
extern "C" void ext_00494300();

extern "C" __declspec(naked) void __fastcall fn_0044CF30(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x74]
        push eax
        add ecx, 0x78
        call ext_00494300
        ret
    }
}

// [0x004410C0] sub_004410C0 (17 bytes)
extern "C" int ext_00441020();
extern "C" int ext_00441040();

extern "C" __declspec(naked) int __cdecl fn_004410C0() {
    __asm {
        call ext_00441040
        mov edx, eax
        call ext_00441020
        sub edx, eax
        mov eax, edx
        ret
    }
}

// [0x00444490] sub_00444490 (18 bytes)
extern "C" void ext_0045C820();
extern "C" int mem_00A9F414;
extern "C" void __fastcall fn_00444490(void* self) {
    typedef void (__thiscall *FnT)(void*, int);
    ((FnT)ext_0045C820)((char*)self + 0x15c, mem_00A9F414);
}

// [0x00447D80] sub_00447D80 (19 bytes)
extern "C" void ext_004478C0();
extern "C" void ext_00468180();

extern "C" void __fastcall fn_00447D80(void* self) {
    ext_004478C0();
    void* p = ((void* (*)())ext_00468180)();
    void** vt = *(void***)p;
    typedef void (__fastcall *Fn)(void*);
    ((Fn)vt[1])(p);
}

// [0x00440920] sub_00440920 (21 bytes)
extern "C" void ext_004407E0();

extern "C" void __fastcall fn_00440920(void* self, int edx_unused, double a1) {
    double sum = *(double*)((char*)self + 0x50) + a1;
    ((void (__stdcall*)(double))ext_004407E0)(sum);
}

// [0x00448280] sub_00448280 (25 bytes)
extern "C" void ext_006B0C40();
extern "C" __declspec(naked) void* __fastcall fn_00448280(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_006B0C40
        mov dword ptr [esi], 0x93333c
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00440690] sub_00440690 (25 bytes)
extern "C" void ext_0043DC90();
extern "C" void ext_004405B0();

extern "C" __declspec(naked) void __fastcall fn_00440690(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push -1
        mov byte ptr [esi + 0x166], 0
        call ext_0043DC90
        mov ecx, esi
        pop esi
        jmp ext_004405B0
    }
}

// [0x004444C0] sub_004444C0 (28 bytes)
extern "C" void ext_00584C20();

extern "C" __declspec(naked) void __stdcall fn_004444C0(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00584C20
        test al, al
        sete al
        mov byte ptr [esi + 069h], al
    done:
        pop esi
        ret 4
    }
}

// [0x0044A0D0] sub_0044A0D0 (28 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00469AC0();
extern "C" __declspec(naked) void __fastcall fn_0044A0D0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx+0e0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax+1b8h]
        jmp edx
        call ext_00468180
        mov ecx, eax
        jmp ext_00469AC0
    }
}

// [0x00442960] sub_00442960 (32 bytes)
extern "C" int mem_009324DC;
extern "C" void ext_0041C750();
extern "C" __declspec(naked) void* __fastcall fn_00442960(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_0041C750
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], offset mem_009324DC
        mov dword ptr [esi + 0x8], ecx
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00442B60] sub_00442B60 (32 bytes)
extern "C" int mem_0093258C;
extern "C" void ext_00442960();
extern "C" __declspec(naked) void* __fastcall fn_00442B60(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov dword ptr [esi], offset mem_0093258C
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00442B80] sub_00442B80 (32 bytes)
extern "C" int mem_009325E4;
extern "C" __declspec(naked) void* __fastcall fn_00442B80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov dword ptr [esi], offset mem_009325E4
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00442BB0] sub_00442BB0 (32 bytes)
extern "C" int mem_0093263C;
extern "C" void ext_00442960();
extern "C" __declspec(naked) void* __fastcall fn_00442BB0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov dword ptr [esi], offset mem_0093263C
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00442BD0] sub_00442BD0 (32 bytes)
extern "C" int mem_00932694;
extern "C" void ext_00442960();
extern "C" __declspec(naked) void* __fastcall fn_00442BD0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov dword ptr [esi], offset mem_00932694
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00442C40] sub_00442C40 (32 bytes)
extern "C" int mem_009326EC;
extern "C" void ext_00442960();
extern "C" __declspec(naked) void* __fastcall fn_00442C40(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov dword ptr [esi], offset mem_009326EC
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x004436B0] sub_004436B0 (32 bytes)
extern "C" int mem_00932744;
extern "C" void ext_00442960();
extern "C" __declspec(naked) void* __fastcall fn_004436B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov dword ptr [esi], offset mem_00932744
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00443700] sub_00443700 (32 bytes)
extern "C" void ext_004436B0();
extern "C" __declspec(naked) void* __fastcall fn_00443700(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_004436B0
        mov dword ptr [esi], 0x93279c
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x0044A360] sub_0044A360 (32 bytes)
extern "C" void ext_006A5C6E();

extern "C" void* __fastcall fn_0044A360(void* self) {
    unsigned int* p = (unsigned int*)self;
    ext_006A5C6E();
    p[0] = 0x933fdc;
    p[0x54 / 4] = 0;
    p[0x58 / 4] = 0xffffff;
    return self;
}

// [0x0044CF90] sub_0044CF90 (32 bytes)
extern "C" void ext_006A5E4E();

extern "C" void __fastcall fn_0044CF90(void* self, int edx_unused, int a1, int a2) {
    typedef void (__thiscall *Callee)(void*, int, int, int, int, int, int);
    Callee f = (Callee)ext_006A5E4E;
    f((char*)self + 0xcf4, 0, 0, 0, a1, a2, 4);
}

// [0x00440770] sub_00440770 (34 bytes)
extern "C" int mem_00924FC8;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void* __fastcall fn_00440770(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x28]
        push offset mem_00928B5D
        push edi
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        mov eax, edi
        jne skip
        lea eax, [esi + 0xc]
    skip:
        pop edi
        pop esi
        ret
    }
}

// [0x00449D00] sub_00449D00 (35 bytes)
extern "C" int mem_00933A64;
extern "C" int mem_009242F4;
extern "C" void ext_006A5F6E();
extern "C" __declspec(naked) void __fastcall fn_00449D00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x78]
        mov dword ptr [esi], offset mem_00933A64
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x74]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_006A5F6E
    }
}

// [0x0044B300] sub_0044B300 (35 bytes)
extern "C" void __fastcall fn_0044B300(void* self) {
    typedef void (__thiscall *VF)(void* ecx);
    if (*(void**)((char*)self + 0x64) != 0) {
        ((VF)(*(void***)*(void**)((char*)self + 0x64))[0x1c / 4])(*(void**)((char*)self + 0x64));
        ((VF)(*(void***)*(void**)((char*)self + 0x64))[0x154 / 4])(*(void**)((char*)self + 0x64));
    }
}

// [0x0044B360] sub_0044B360 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B360(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je done
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        call edx
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x0044B730] sub_0044B730 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B730(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je done
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x30]
        call edx
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x0044CFE0] sub_0044CFE0 (36 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0044CFE0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0xb0
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x0044B1F0] sub_0044B1F0 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B1F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 64h], 0
        je no_child
        mov ecx, dword ptr [esi + 64h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 24h]
        push 1
        call edx
        mov ecx, dword ptr [esi + 64h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 154h]
        pop esi
        jmp edx
    no_child:
        pop esi
        ret
    }
}

// [0x0044B260] sub_0044B260 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B260(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je done
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        push 0
        call edx
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x0044B700] sub_0044B700 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B700(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0x0
        je done
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        push 0x0
        call edx
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        pop esi
        jmp edx
done:
        pop esi
        ret
    }
}

// [0x0044C2A0] sub_0044C2A0 (37 bytes)
extern "C" __declspec(naked) void __cdecl fn_0044C2A0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        cmp ecx, edx
        mov eax, dword ptr [esp + 0xc]
        je done
        push esi
    loop_top:
        test eax, eax
        je skip_store
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
    skip_store:
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne loop_top
        pop esi
    done:
        ret
    }
}

// [0x0044C330] sub_0044C330 (37 bytes)
extern "C" void __cdecl fn_0044C330(unsigned int* dst, unsigned int count, const unsigned int* src) {
    if (count > 0) {
        do {
            if (dst) {
                unsigned int v = *src;
                *dst = v;
            }
            --count;
            ++dst;
        } while (count > 0);
    }
}

// [0x0044BCF0] sub_0044BCF0 (38 bytes)
extern "C" int mem_00925704;
extern "C" int mem_0092571C;

extern "C" void __fastcall fn_0044BCF0(void* self) {
    unsigned char* p = (unsigned char*)self;
    if (p[0x74] != 0) {
        ((int (__stdcall*)(void*))mem_00925704)(*(void**)(p + 0x70));
        return;
    }
    void* cursor = ((void* (__stdcall*)(void*, const char*))mem_0092571C)(0, (const char*)0x7f00);
    ((int (__stdcall*)(void*))mem_00925704)(cursor);
}

// [0x0044C230] sub_0044C230 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044C230(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esp], eax
        mov eax, dword ptr [ecx + 0x58]
        mov eax, dword ptr [eax]
        add ecx, 0x58
        mov dword ptr [esp + 0x4], edx
        lea edx, [esp]
        push edx
        call eax
        add esp, 0x8
        ret 0xc
    }
}

// [0x004499D0] sub_004499D0 (41 bytes)
extern "C" int mem_00924EB8;

extern "C" __declspec(naked) void __fastcall fn_004499D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        lea eax, [esi + 0x1c4]
        push eax
        call dword ptr [mem_00924EB8]
        mov ecx, dword ptr [esp + 0xc]
        add esi, 0x1e0
        push esi
        call dword ptr [mem_00924EB8]
        pop esi
        ret 0x8
    }
}

// [0x0044B330] sub_0044B330 (41 bytes)
extern "C" void* ext_0052EE00();

extern "C" void __fastcall fn_0044B330(void* self_unused, int edx_unused, void* a1) {
    void* obj = ext_0052EE00();
    void** vt = *(void***)obj;
    void** vt1 = *(void***)a1;
    typedef unsigned char (__thiscall *GetFlagFn)(void*);
    unsigned char flag = ((GetFlagFn)vt[0xbc / 4])(obj);
    typedef void (__thiscall *ApplyFn)(void*, int);
    ApplyFn apply = (ApplyFn)vt1[1];
    apply(a1, (int)(unsigned int)flag);
}

// [0x0044C4D0] sub_0044C4D0 (41 bytes)
extern "C" void ext_0044C2A0();

extern "C" __declspec(naked) void __fastcall fn_0044C4D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edx
        call ext_0044C2A0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x004429C0] sub_004429C0 (42 bytes)
extern "C" void ext_0043CD60();
extern "C" void ext_0043CD80();
extern "C" void ext_0043CDA0();
extern "C" __declspec(naked) void __fastcall fn_004429C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x0
        call ext_0043CDA0
        mov ecx, dword ptr [esi + 0x8]
        mov byte ptr [esi + 0xd], 0x0
        call ext_0043CD80
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0x168]
        push eax
        call ext_0043CD60
        pop esi
        ret
    }
}

// [0x0044B390] sub_0044B390 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B390(void* self, int edx_unused, void* a1) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0
        je done
        mov ecx, dword ptr [ecx + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc0]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        call edx
        mov edx, dword ptr [edi + 0x4]
        movzx eax, al
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
    done:
        ret 4
    }
}

// [0x00441A60] sub_00441A60 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_00441A60(void* self, int edx_unused, void* out, void* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [ecx]
        push edi
        lea edi, [edx - 0x2]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x4], edi
        lea edx, [ecx + edx + 0x1]
        pop edi
        mov dword ptr [eax + 0x8], esi
        mov dword ptr [eax + 0xc], edx
        pop esi
        ret 0x8
    }
}

// [0x004408B0] sub_004408B0 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_004408B0(void* self, int edx_unused, double a1) {
    __asm {
        cmp byte ptr [ecx + 0x8d], 0
        je done
        fld qword ptr [ecx + 0x50]
        fld qword ptr [esp + 4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5
        jp store_arg
        fstp st(0)
        mov byte ptr [ecx + 0x89], 0
        fld qword ptr [ecx + 0x50]
    store_arg:
        fstp qword ptr [ecx + 0x58]
    done:
        ret 8
    }
}

// [0x00441A90] sub_00441A90 (45 bytes)
extern "C" __declspec(naked) void __stdcall fn_00441A90(void* out, void* in) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x18]
        push edi
        lea edi, [edx - 0x2]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 0x1c]
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x4], edi
        lea edx, [ecx + edx + 0x1]
        pop edi
        mov dword ptr [eax + 0x8], esi
        mov dword ptr [eax + 0xc], edx
        pop esi
        ret 0x8
    }
}

// [0x0044CE90] sub_0044CE90 (45 bytes)
extern "C" void ext_006A673C();
extern "C" __declspec(naked) void __fastcall fn_0044CE90(void* self) {
    __asm {
        push esi
        push 0x20
        mov esi, ecx
        push 0
        push 0x20201
        lea ecx, [esi + 0xac]
        call ext_006A673C
        push 0x20
        push 0
        push 0x20201
        lea ecx, [esi + 0x9c0]
        call ext_006A673C
        pop esi
        ret
    }
}

// [0x0044B290] sub_0044B290 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B290(void* self, int edx_unused, void* a1) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0
        je done
        mov ecx, dword ptr [ecx + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        call edx
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
    done:
        ret 0x4
    }
}

// [0x00442990] sub_00442990 (47 bytes)
extern "C" void ext_00442960();

extern "C" void* __fastcall fn_00442990(void* self, int edx_unused, int a1, int a2) {
    typedef void (__thiscall *InitFn)(void*, int, int);
    reinterpret_cast<InitFn>(ext_00442960)(self, a1, a2);
    unsigned char* p = reinterpret_cast<unsigned char*>(self);
    p[0x0c] = 0;
    p[0x0d] = 0;
    *reinterpret_cast<void**>(self) = reinterpret_cast<void*>(0x932534);
    *reinterpret_cast<int*>(p + 0x10) = -2;
    return self;
}

// [0x0044BA30] sub_0044BA30 (48 bytes)
extern "C" void ext_00530690();
extern "C" int mem_00A2FFE0;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0044BA30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A2FFE0]
        mov ecx, [ecx + 0x68]
        push esi
        mov esi, [esp + 8]
        push edi
        mov edi, [esi]
        push eax
        call ext_00530690
        push eax
        call dword ptr [mem_00924FC0]
        mov edx, [edi + 4]
        movzx ecx, al
        add esp, 8
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0044BBB0] sub_0044BBB0 (48 bytes)
extern "C" int mem_00A2FFE4;

extern "C" __declspec(naked) void __fastcall fn_0044BBB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A2FFE4]
        mov ecx, dword ptr [ecx + 0x68]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        push eax
        call ext_00530690
        push eax
        call dword ptr [mem_00924FC0]
        mov edx, dword ptr [edi + 0x4]
        movzx ecx, al
        add esp, 0x8
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0044BBE0] sub_0044BBE0 (48 bytes)
extern "C" void ext_00530690();
extern "C" int mem_00A2FFE8;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0044BBE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A2FFE8]
        mov ecx, [ecx + 0x68]
        push esi
        mov esi, [esp + 8]
        push edi
        mov edi, [esi]
        push eax
        call ext_00530690
        push eax
        call dword ptr [mem_00924FC0]
        mov edx, [edi + 4]
        movzx ecx, al
        add esp, 8
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0044BC10] sub_0044BC10 (48 bytes)
extern "C" void ext_00530690();
extern "C" int mem_00A2FFEC;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0044BC10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A2FFEC]
        mov ecx, [ecx + 0x68]
        push esi
        mov esi, [esp + 8]
        push edi
        mov edi, [esi]
        push eax
        call ext_00530690
        push eax
        call dword ptr [mem_00924FC0]
        mov edx, [edi + 4]
        movzx ecx, al
        add esp, 8
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x0044B220] sub_0044B220 (50 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B220(void* self, int edx_unused, void* a1) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0x0
        je done
        mov ecx, dword ptr [ecx + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esi]
        call edx
        sub eax, 0x1
        neg eax
        sbb eax, eax
        add eax, 0x1
        push eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
done:
        ret 0x4
    }
}

// [0x0044CCF0] sub_0044CCF0 (50 bytes)
extern "C" int mem_00B41B80;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) bool __fastcall fn_0044CCF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne L_false
        push offset mem_00B41B80
        add esi, 0x458
        push esi
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L_false
        mov eax, 1
        pop esi
        ret
L_false:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x0044B560] sub_0044B560 (50 bytes)
extern "C" void ext_004339B0();
extern "C" void ext_006A6718();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __fastcall fn_0044B560(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00ACDB40]
        test ecx, ecx
        je skip_first
        push 0
        call ext_004339B0
    skip_first:
        mov ecx, esi
        call ext_006A6718
        mov ecx, dword ptr [esi + 0x64]
        test ecx, ecx
        je skip_call
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        call edx
    skip_call:
        mov dword ptr [esi + 0x64], 0
        pop esi
        ret
    }
}

// [0x004489A0] sub_004489A0 (51 bytes)
extern "C" int mem_00925618;

extern "C" __declspec(naked) void __fastcall fn_004489A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0xd
        je done
        cmp eax, 0x9
        je done
        movzx edx, word ptr [esp + 0xc]
        push esi
        movzx esi, word ptr [esp + 0xc]
        shl edx, 0x10
        or edx, esi
        push edx
        push eax
        mov eax, dword ptr [ecx + 0x7c]
        push 0x100
        push eax
        call dword ptr [mem_00925618]
        pop esi
    done:
        ret 0xc
    }
}

// [0x0044C420] sub_0044C420 (51 bytes)
extern "C" void ext_0044C330();

extern "C" __declspec(naked) unsigned int* __fastcall fn_0044C420(void* self, int edx_unused, unsigned int* a1, unsigned int a2, unsigned int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0044C330
        add esp, 0x18
        lea eax, [edi + 4*esi]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x004470D0] sub_004470D0 (51 bytes)
extern "C" void* __fastcall ext_00594000(void* self);
extern "C" void __fastcall ext_00451AE0(void* self, int edx_unused, void* a1);

extern "C" __declspec(naked) void __fastcall fn_004470D0(void* self) {
    __asm {
        test ecx, ecx
        push esi
        je null_path
        lea esi, [ecx + 0x144]
        call ext_00594000
        mov ecx, dword ptr [eax + 0x2dc]
        push esi
        call ext_00451AE0
        pop esi
        ret
null_path:
        xor esi, esi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x2dc]
        push esi
        call ext_00451AE0
        pop esi
        ret
    }
}

// [0x0044C360] sub_0044C360 (53 bytes)
extern "C" __declspec(naked) char* __cdecl fn_0044C360(char* first, char* last, char* dest_end) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        sub eax, edx
        sar eax, 0x2
        add eax, eax
        add eax, eax
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, eax
        mov eax, esi
        sub eax, edi
        cmp edx, ecx
        je done_copy
        sub esi, ecx
    copy_loop:
        mov edi, dword ptr [ecx - 0x4]
        sub ecx, 0x4
        cmp ecx, edx
        mov dword ptr [esi + ecx], edi
        jne copy_loop
    done_copy:
        pop edi
        pop esi
        ret
    }
}
