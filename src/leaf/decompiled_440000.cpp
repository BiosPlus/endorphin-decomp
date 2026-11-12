// Decompiled translation unit: src/leaf/decompiled_440000.cpp

// [0x0044C0D0] sub_0044C0D0 (27 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A663A();
extern "C" void ext_006A60D0();
extern "C" void ext_006A5E00();
extern "C" int mem_00925650;

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

// [0x0044B2C0] sub_0044B2C0 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B2C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je done
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xb8]
        call edx
        mov ecx, dword ptr [esi + 0x64]
        test eax, eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        jne notzero
        push 1
        jmp docall
notzero:
        push 0
docall:
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

// [0x0044F740] sub_0044F740 (59 bytes)
extern "C" void ext_00492520();
extern "C" void ext_006AD940();

extern "C" __declspec(naked) int __fastcall fn_0044F740(void* self) {
    __asm {
        push esi
        push edi
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov esi, eax
        push 0x0
        mov ecx, esi
        call ext_00492520
        push 0x1
        mov ecx, esi
        mov edi, eax
        call ext_00492520
        test edi, edi
        pop edi
        pop esi
        je fail_0044F740
        test eax, eax
        je fail_0044F740
        mov eax, 0x1
        ret
    fail_0044F740:
        xor eax, eax
        ret
    }
}

// [0x00440870] sub_00440870 (62 bytes)
extern "C" void __fastcall fn_00440870(void* self, int edx_unused, double a1) {
    unsigned char* p = (unsigned char*)self;
    if (p[0x8c] == 0) {
        return;
    }
    if (a1 < 0.0) {
        *(double*)(p + 0x50) = 0.0;
        return;
    }
    if (a1 > *(double*)(p + 0x58)) {
        p[0x89] = 1;
        *(double*)(p + 0x50) = *(double*)(p + 0x58);
        return;
    }
    *(double*)(p + 0x50) = a1;
}

// [0x0044BF00] sub_0044BF00 (63 bytes)
extern "C" int mem_0092561C;

extern "C" __declspec(naked) void __fastcall fn_0044BF00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        je done_0044BF00
        mov edx, dword ptr [esp + 0xc]
        test edx, edx
        jle done_0044BF00
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jle done_0044BF00
        cmp dword ptr [esi + 0x64], 0
        je done_0044BF00
        mov ecx, dword ptr [esi + 0x64]
        mov esi, dword ptr [ecx]
        push eax
        push edx
        mov edx, dword ptr [esi + 0x15c]
        call edx
    done_0044BF00:
        pop esi
        ret 0xc
    }
}

// [0x00448950] sub_00448950 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_00448950(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, ecx
        call ext_006A663A
        test esi, esi
        je short L_00448965
        mov esi, dword ptr [esi + 0x20]
L_00448965:
        lea ecx, [edi + 0x5c]
        test ecx, ecx
        jne short L_00448970
        xor eax, eax
        jmp short L_00448973
L_00448970:
        mov eax, dword ptr [ecx + 0x20]
L_00448973:
        cmp esi, eax
        jne short L_00448989
        mov eax, dword ptr [edi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
L_00448989:
        call ext_006A60D0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00444750] sub_00444750 (68 bytes)
extern "C" void ext_004564A0();
extern "C" void ext_006A5E4E();
extern "C" __declspec(naked) void __fastcall fn_00444750(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push edi
        push ebx
        push eax
        mov esi, ecx
        call ext_004564A0
        lea ecx, [esi + 0x15c]
        test ecx, ecx
        je done
        cmp dword ptr [ecx + 0x20], 0x0
        je done
        push 0x4
        add edi, -0x4
        push edi
        add ebx, -0x4
        push ebx
        push 0x2
        push 0x2
        push 0x0
        call ext_006A5E4E
done:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x0044B6B0] sub_0044B6B0 (70 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044B6B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je done
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc4]
        call edx
        mov ecx, dword ptr [esi + 0x64]
        test al, al
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        je not_set
        push 0
        jmp call_a
not_set:
        push 1
        call edx
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        push 1
call_a:
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

// [0x00444360] sub_00444360 (42 bytes)
extern "C" void ext_0041FD20();
extern "C" int mem_009241D8;
extern "C" int mem_009328A0;

extern "C" __declspec(naked) void __fastcall fn_00444360(void* self, int edx_unused, void** out) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x44], 0
        jne done
        push offset mem_009328A0
        call ext_0041FD20
        push eax
        call dword ptr [mem_009241D8]
        mov dword ptr [esi + 0x44], eax
    done:
        mov ecx, dword ptr [esi + 0x44]
        mov eax, dword ptr [esp + 8]
        mov dword ptr [eax], ecx
        pop esi
        ret 4
    }
}

// [0x0044DA40] sub_0044DA40 (76 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_0044DA40(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        xor ebx, ebx
        push ebx
        push ebx
        mov esi, ecx
        mov eax, dword ptr [esi + 0x5b8]
        push 0x188
        push eax
        call edi
        cmp eax, -1
        je fail_path
        mov ecx, dword ptr [esi + 0x5b8]
        push ebx
        push ebx
        push 0x188
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x5b8]
        push ebx
        push eax
        push 0x199
        push edx
        call edi
        pop edi
        pop esi
        pop ebx
        ret
    fail_path:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x0044DA90] sub_0044DA90 (76 bytes)
extern "C" __declspec(naked) int __fastcall fn_0044DA90(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        xor ebx, ebx
        push ebx
        push ebx
        mov esi, ecx
        mov eax, dword ptr [esi + 0x61c]
        push 0x188
        push eax
        call edi
        cmp eax, -1
        je fail_path
        mov ecx, dword ptr [esi + 0x61c]
        push ebx
        push ebx
        push 0x188
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x61c]
        push ebx
        push eax
        push 0x199
        push edx
        call edi
        pop edi
        pop esi
        pop ebx
        ret
    fail_path:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00448420] sub_00448420 (55 bytes)
extern "C" void ext_006AD1C0();
extern "C" void ext_006B0DE0();

extern "C" __declspec(naked) void __fastcall fn_00448420(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x5c]
        mov dword ptr [esi + 0xc8], eax
        call ext_006B0DE0
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006AD1C0
        mov dword ptr [esi + 0xcc], eax
        mov eax, dword ptr [eax + 0x19c]
        mov dword ptr [esi + 0xec], eax
        pop esi
        ret 0x4
    }
}

// [0x00443960] MultiTrackView::MultiTrackViewStates::MoveState::MoveState (82 bytes)
extern "C" void ext_00442960();
extern "C" int mem_009327F4;

extern "C" __declspec(naked) void* __fastcall fn_00443960(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x87ba78
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        call ext_00442960
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [esi], offset mem_009327F4
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], eax
        mov byte ptr [esi + 0x30], al
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00447DD0] sub_00447DD0 (82 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F6E();

extern "C" __declspec(naked) void __fastcall fn_00447DD0(void* self) {
    __asm {
        push -1
        push 0x0087C578
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00932E8C
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006A5DFA
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044BFB0] sub_0044BFB0 (42 bytes)
extern "C" void ext_00530C00();
extern "C" int mem_009256E0;
extern "C" __declspec(naked) void __fastcall fn_0044BFB0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0x0
        mov byte ptr [ecx + 0x78], 0x0
        je skip_call
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [ecx + 0x68]
        push edx
        push eax
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_00530C00
skip_call:
        call dword ptr [mem_009256E0]
        ret 0xc
    }
}

// [0x0044E100] sub_0044E100 (87 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_0044E100(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x768]
        push 0x18b
        push eax
        call edi
        test eax, eax
        je fail_0044E100
        mov ecx, dword ptr [esi + 0x768]
        push 0x0
        push 0x0
        push 0x190
        push ecx
        call edi
        test eax, eax
        je fail_0044E100
        mov edx, dword ptr [esi + 0x768]
        push 0x0
        push 0x0
        push 0x187
        push edx
        call edi
        neg eax
        sbb eax, eax
        pop edi
        add eax, 0x1
        pop esi
        ret
    fail_0044E100:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x0044CEC0] sub_0044CEC0 (97 bytes)
extern "C" void ext_0040FD30();
extern "C" void ext_0040FD40();
extern "C" void ext_0040FD50();
extern "C" void ext_006A7BC0();
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D0;

extern "C" __declspec(naked) void __fastcall fn_0044CEC0(void* self) {
    __asm {
        mov eax, dword ptr [mem_0093A0C4]
        push esi
        push edi
        mov edi, ecx
        lea esi, [edi + 0xc80]
        push eax
        mov ecx, esi
        call ext_0040FD30
        mov ecx, dword ptr [mem_0093A0CC]
        push ecx
        mov ecx, esi
        call ext_0040FD40
        mov edx, dword ptr [mem_0093A0C8]
        push edx
        mov ecx, esi
        call ext_006A7BC0
        mov eax, dword ptr [mem_0093A0D0]
        push eax
        mov ecx, esi
        call ext_0040FD50
        cmp byte ptr [edi + 0xa9], 0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x144]
        mov ecx, esi
        je fn_0044CEC0_zero
        push 1
        call eax
        pop edi
        pop esi
        ret
    fn_0044CEC0_zero:
        push 0
        call eax
        pop edi
        pop esi
        ret
    }
}

// [0x0044E160] sub_0044E160 (36 bytes)
extern "C" int mem_00925688;

extern "C" void __fastcall fn_0044E160(unsigned char* self, int edx_unused, unsigned char a1) {
    self[0xa9] = a1;
    fn_0044CEC0(self);
    ((void (__stdcall*)(void*, int, int))mem_00925688)(*(void**)(self + 0x20), 0, 1);
}

// [0x004406C0] sub_004406C0 (98 bytes)
extern "C" void ext_00493D90();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004406C0(void* self) {
    __asm {
        push -1
        push 0x0087B8A8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0093240C
        lea ecx, [esi + 0x78]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00493D90
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044C460] sub_0044C460 (99 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0044C460(void* self) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        je L_0044C473
        cmp ebp, dword ptr [esp + 0x1c]
        je L_0044C479
    L_0044C473:
        call dword ptr [mem_00925134]
    L_0044C479:
        mov esi, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x20]
        cmp esi, eax
        je L_0044C4B4
        mov ecx, dword ptr [edi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 0x2
        cmp eax, ecx
        push ebx
        lea ebx, [esi + edx*4]
        je L_0044C4B0
        mov edx, esi
        sub edx, eax
        jmp L_0044C4A0
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00
    L_0044C4A0:
        mov ebp, dword ptr [eax]
        mov dword ptr [edx + eax], ebp
        add eax, 0x4
        cmp eax, ecx
        jne L_0044C4A0
        mov ebp, dword ptr [esp + 0x18]
    L_0044C4B0:
        mov dword ptr [edi + 0x8], ebx
        pop ebx
    L_0044C4B4:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        ret 0x14
    }
}

// [0x0044C500] sub_0044C500 (59 bytes)
extern "C" void ext_0044C460();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0044C500(void* self) {
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
        jbe m44c500_ok1
        call ebp
    m44c500_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe m44c500_ok2
        call ebp
    m44c500_ok2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0044C460
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00447E30] sub_00447E30 (103 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" __declspec(naked) void __fastcall fn_00447E30(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87c578
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x315
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FC2
        lea edi, [esi + 0x74]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x932e8c
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x9287e4
        mov byte ptr [esi + 0xc8], 1
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00447F20] sub_00447F20 (105 bytes)
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A6622();
extern "C" __declspec(naked) void __fastcall fn_00447F20(void* self) {
    __asm {
        push -1
        push 0x0087C5A3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00933064
        mov dword ptr [esi + 0x74], 0x0093304C
        lea ecx, [esi + 0xcc]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006A5EFC
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A6622
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004490F0] sub_004490F0 (106 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;

extern "C" __declspec(naked) int __fastcall fn_004490F0(void* self) {
    __asm {
        push -0x1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x78]
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        lea ecx, [esp + 0x4]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00449220] sub_00449220 (74 bytes)
extern "C" int __fastcall ext_004490F0(void* self);

extern "C" void __fastcall fn_00449220(void* self, int edx_unused, int* out) {
    char* p = (char*)self;
    if (*out <= ext_004490F0(self)) {
        *out = ext_004490F0(self) + 1;
    }
    if (p[0x140] != 0) {
        int hi = *(int*)(p + 0x134);
        int lo = *(int*)(p + 0x13c);
        int cur = *out;
        if (cur < lo) {
            *out = lo;
        } else if (cur > hi) {
            *out = hi;
        }
    }
}

// [0x00449160] sub_00449160 (109 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) int __fastcall fn_00449160(void* self) {
    __asm {
        push -0x1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0xd0]
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        lea ecx, [esp + 0x4]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004491D0] sub_004491D0 (74 bytes)
extern "C" int __fastcall ext_00449160(void* self);

extern "C" void __fastcall fn_004491D0(void* self, int edx_unused, int* out) {
    char* p = (char*)self;
    if (*out >= ext_00449160(self)) {
        *out = ext_00449160(self) - 1;
    }
    if (p[0x140] != 0) {
        int hi = *(int*)(p + 0x130);
        int lo = *(int*)(p + 0x138);
        int cur = *out;
        if (cur < lo) {
            *out = lo;
        } else if (cur > hi) {
            *out = hi;
        }
    }
}

// [0x00449C90] sub_00449C90 (111 bytes)
extern "C" int mem_009242F0;
extern "C" int mem_00928B5D;
extern "C" __declspec(naked) void __fastcall fn_00449C90(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87ce34
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov esi, ecx
        push 0x316
        mov dword ptr [esp + 0xc], esi
        call ext_006A5FC2
        push offset mem_00928B5D
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x933a64
        call dword ptr [mem_009242F0]
        push offset mem_00928B5D
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x14], 1
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0044B4E0] sub_0044B4E0 (113 bytes)
extern "C" void ext_004339B0();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5ECC();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __fastcall fn_0044B4E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87d718
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00ACDB40]
        test ecx, ecx
        je skip_first
        push esi
        call ext_004339B0
    skip_first:
        push esi
        lea ecx, [esp + 8]
        call ext_006A5ECC
        cmp dword ptr [esi + 0x64], 0
        mov dword ptr [esp + 0x60], 0
        je skip_virt
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
    skip_virt:
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x60], -1
        call ext_006A5EBA
        mov ecx, dword ptr [esp + 0x58]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret
    }
}

// [0x0044B5E0] sub_0044B5E0 (122 bytes)
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_0044B5E0(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x64]
        test ecx, ecx
        je L_44B64A
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push esi
        call edx
        mov esi, eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], esi
        call ext_0065C640
        mov ecx, dword ptr [edi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x160]
        mov dword ptr [esp + 0x14], 0
        call edx
        mov ecx, dword ptr [edi + 0x64]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_0065C650
        pop esi
    L_44B64A:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044DCF0] sub_0044DCF0 (126 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00928B5D;
extern "C" __declspec(naked) void* __fastcall fn_0044DCF0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x98c]
        push 0x18b
        push eax
        mov dword ptr [esp + 0x18], 0
        call edi
        test eax, eax
        jne short L_has_count
    L_empty:
        mov esi, dword ptr [esp + 0x10]
        push offset mem_00928B5D
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_has_count:
        mov eax, dword ptr [esp + 0x14]
        cmp eax, -1
        je short L_empty
        mov ecx, dword ptr [esi + 0x98c]
        push 0
        push eax
        push 0x199
        push ecx
        call edi
        test eax, eax
        je short L_empty
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x004442E0] sub_004442E0 (127 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004442E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_NULL
        call edi
SKIP_NULL:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 0C1h], 0
        je HAS_NODE
        call edi
        pop edi
        pop esi
        ret
HAS_NODE:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 0C1h], 0
        jne RIGHT_NIL
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0C1h], 0
        jne STORE_RIGHT
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
LEFTMOST:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0C1h], 0
        je LEFTMOST
STORE_RIGHT:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
RIGHT_NIL:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 0C1h], 0
        jne STORE_PARENT
        _emit 0x90
UP_LOOP:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne STORE_PARENT
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 0C1h], 0
        je UP_LOOP
STORE_PARENT:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x004486A0] sub_004486A0 (129 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006AD1C0();
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void* __fastcall fn_004486A0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc8]
        push edi
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D30
        mov ecx, dword ptr [esi + 0xc8]
        mov ebx, eax
        call ext_006AD1C0
        mov ecx, eax
        call ext_006A7D50
        mov edi, dword ptr [esp + 0x14]
        mov ebp, eax
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x34]
        push ebx
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, edi
        call edx
        add esi, 0xd0
        je skip_wait_86a0
        cmp dword ptr [esi + 0x4], 0x0
        je skip_wait_86a0
        mov ecx, esi
        call ext_006A5FF2
    skip_wait_86a0:
        push ebx
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, esi
        call ext_006A5FFE
        test esi, esi
        jne has_obj_86a0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xc
    has_obj_86a0:
        mov eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}

// [0x0044A2D0] sub_0044A2D0 (130 bytes)
extern "C" int mem_00925694;
extern "C" double mem_0092C518;

extern "C" __declspec(naked) void __fastcall fn_0044A2D0(void* self, int edx_unused, float* out) {
    __asm {
        sub esp, 0x10
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x168]
        push 0x400
        push eax
        call dword ptr [mem_00925694]
        movzx ecx, byte ptr [esi + 0xf1]
        mov dword ptr [esp + 0x4], ecx
        movzx edx, byte ptr [esi + 0xf2]
        fild dword ptr [esp + 0x4]
        fld qword ptr [mem_0092C518]
        mov dword ptr [esp + 0x4], edx
        mov dword ptr [esp + 0x10], eax
        fdiv st(1), st
        movzx eax, byte ptr [esi + 0xf0]
        pop esi
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fild dword ptr [esp]
        mov dword ptr [esp], eax
        mov eax, dword ptr [esp + 0x14]
        fdiv st, st(1)
        fstp dword ptr [esp + 0x8]
        fild dword ptr [esp]
        fdiv st, st(1)
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fidivr dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0xc]
        add esp, 0x10
        ret 0x4
    }
}

// [0x004407E0] sub_004407E0 (132 bytes)
extern "C" void __fastcall fn_004407E0(void* self, int edx_unused, double a1) {
    char* p = (char*)self;
    if (*(p + 0x8c) == 0 && *(p + 0x8d) == 0) {
        double v = (a1 < 0.0) ? 0.0 : a1;
        *(double*)(p + 0x58) = v;
        *(double*)(p + 0x50) = v;
        *(double*)(p + 0x98) = v;
        *(double*)(p + 0x90) = v;
        return;
    }
    double v = (a1 < 0.0) ? 0.0 : a1;
    *(double*)(p + 0x58) = *(double*)(p + 0x58) - *(double*)(p + 0x50) + v;
    *(double*)(p + 0x90) = *(double*)(p + 0x90) - *(double*)(p + 0x50) + v;
    *(double*)(p + 0x98) = *(double*)(p + 0x98) - *(double*)(p + 0x50) + v;
    *(double*)(p + 0x50) = v;
}

// [0x004481F0] sub_004481F0 (134 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004481F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x0087c5a3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x16a
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FC2
        mov dword ptr [esi + 0x74], 0x0093331c
        lea edi, [esi + 0x78]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x00933064
        mov dword ptr [esi + 0x74], 0x0093304c
        call ext_006A5C6E
        mov dword ptr [edi], 0x009331d4
        lea edi, [esi + 0xcc]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 0x1
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x00929b6c
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

extern "C" void ext_00465B30();
extern "C" void ext_004691A0();
extern "C" void ext_0046A320();

// [0x0044BD20] sub_0044BD20 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_0044BD20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        je L_0044BD2C
        lea eax, [esi + 0x5c]
        jmp L_0044BD2E
L_0044BD2C:
        xor eax, eax
L_0044BD2E:
        push eax
        call ext_00465B30
        mov ecx, eax
        call ext_0046A320
        test esi, esi
        je L_0044BD51
        lea eax, [esi + 0x60]
        push eax
        call ext_00465B30
        mov ecx, eax
        call ext_004691A0
        pop esi
        ret
L_0044BD51:
        xor eax, eax
        push eax
        call ext_00465B30
        mov ecx, eax
        call ext_004691A0
        pop esi
        ret
    }
}

// [0x0044B080] sub_0044B080 (127 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_004691A0();
extern "C" void ext_0046A320();
extern "C" void ext_006A6688();

extern "C" __declspec(naked) void __fastcall fn_0044B080(void* self) {
    __asm {
        push -1
        push 0x87d6f8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea eax, [esi + 0x5c]
        lea edi, [esi + 0x60]
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x934c14
        mov dword ptr [esi + 0x58], 0x934c0c
        mov dword ptr [eax], 0x934c04
        mov dword ptr [edi], 0x934bfc
        push eax
        mov dword ptr [esp + 0x18], 0x0
        call ext_00465B30
        mov ecx, eax
        call ext_0046A320
        push edi
        call ext_00465B30
        mov ecx, eax
        call ext_004691A0
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006A6688
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044BC60] sub_0044BC60 (142 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0044BC60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x12345678
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x64], 0
        je L_done
        push 0x12345678
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        cmp byte ptr [esi + 0x74], 0
        mov dword ptr [esp + 0x28], 0
        je L_check75
        push 0x12345678
        jmp L_assign
L_check75:
        cmp byte ptr [esi + 0x75], 0
        je L_vcall
        push 0x12345678
L_assign:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FDC]
L_vcall:
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xa8]
        lea edx, [esp + 0x4]
        push edx
        call eax
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
L_done:
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x004447E0] sub_004447E0 (73 bytes)
extern "C" void ext_0045BE30();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004447E0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x17c]
        push 0
        push 0x110a
        push eax
        mov byte ptr [esi + 0x1b8], 0
        call edi
        mov ecx, dword ptr [esi + 0x17c]
        push eax
        push 2
        push 0x1102
        push ecx
        call edi
        lea ecx, [esi + 0x15c]
        call ext_0045BE30
        pop edi
        mov byte ptr [esi + 0x1b8], 1
        pop esi
        ret
    }
}

// [0x00441C10] sub_00441C10 (110 bytes)
extern "C" void ext_00441A60();
extern "C" void ext_00441A90();
extern "C" void ext_0066A180();
extern "C" void ext_006A6172();

extern "C" __declspec(naked) void __fastcall fn_00441C10(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xa1], 0
        push edi
        mov edi, dword ptr [esp + 0x34]
        je short loc_00441C53
        push edi
        lea eax, [esp + 0x10]
        push eax
        call ext_00441A90
        mov ecx, dword ptr [esp + 0xc]
        cmp ecx, dword ptr [esp + 0x14]
        jge short loc_00441C53
        lea ecx, [edi + 0x34]
        call ext_0066A180
        push eax
        lea edx, [esp + 0x10]
        push edx
        mov ecx, ebx
        call ext_006A6172
    loc_00441C53:
        push edi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00441A60
        lea ecx, [edi + 0x24]
        call ext_0066A180
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebx
        call ext_006A6172
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 8
    }
}

// [0x00448BF0] sub_00448BF0 (145 bytes)
extern "C" void ext_00678170();
extern "C" void ext_006AD180();
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __fastcall fn_00448BF0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xc8]
        call ext_006AD180
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx + 0xfc]
        add ecx, 0xf8
        cmp eax, 1
        je short loc_448c2c
        cmp eax, 2
        jne short loc_448c32
        fldz
        fld qword ptr [esp + 0x4]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp short loc_448c2a
        fmul qword ptr [ecx + 0x30]
        ret 8
    loc_448c2a:
        fstp st(0)
    loc_448c2c:
        fld qword ptr [ecx + 0x30]
        ret 8
    loc_448c32:
        cmp eax, 3
        jne short loc_448c61
        fld qword ptr [ecx + 0x30]
        fstp qword ptr [esp + 0x4]
        call ext_00594000
        fld qword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp + 0x8]
        lea ecx, [eax + 0x2e0]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call ext_00678170
        ret 8
    loc_448c61:
        cmp byte ptr [ecx + 3], 0
        je short loc_448c7c
        cmp byte ptr [ecx + 2], 0
        je short loc_448c7c
        fld qword ptr [ecx + 0x18]
        fsub qword ptr [ecx + 0x10]
        fdiv qword ptr [mem_009334D8]
        ret 8
    loc_448c7c:
        fld1
        ret 8
    }
}

// [0x00448600] sub_00448600 (149 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6184();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00448600(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_006A5EA8
        cmp eax, -1
        jne L_448619
        or eax, eax
        pop esi
        add esp, 0x10
        ret 4
    L_448619:
        push edi
        push 1
        push esi
        lea eax, [esp + 0x10]
        xor edi, edi
        push eax
        push 0x50000000
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], edi
        call ext_006A6184
        lea eax, [esi + 0xd8]
        cmp eax, edi
        jne L_44864F
        xor eax, eax
        jmp L_448652
    L_44864F:
        mov eax, dword ptr [eax + 0x4]
    L_448652:
        mov ecx, dword ptr [esi + 0x7c]
        push 1
        push eax
        push 0x30
        push ecx
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esi + 0x58]
        push 2
        push esi
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], edi
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x13c]
        push eax
        push 0x50000020
        call edx
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x0044A000] sub_0044A000 (149 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F38();
extern "C" void ext_006A61D2();
extern "C" void ext_006A64A2();
extern "C" void ext_006A6640();

extern "C" __declspec(naked) void __fastcall fn_0044A000(void* self) {
    __asm {
        push -1
        push 0x87ced0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x933cfc
        lea ecx, [esi + 0x1f8]
        mov dword ptr [esp + 0x10], 0x4
        call ext_006A5DFA
        lea ecx, [esi + 0x19c]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5DFA
        lea ecx, [esi + 0x148]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A6640
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x88]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A64A2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A61D2
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004493C0] sub_004493C0 (153 bytes)
extern "C" __declspec(naked) void __fastcall fn_004493C0(void* self) {
    __asm {
        push -1
        push 0x87ccbf
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x93363c
        mov dword ptr [esi + 0x74], 0x93362c
        mov ecx, dword ptr [esi + 0x124]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 3
        je skip_124
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
skip_124:
        lea ecx, [esi + 0xd0]
        mov byte ptr [esp + 0x10], 2
        call ext_006A5F38
        mov ecx, dword ptr [esi + 0xcc]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 1
        je skip_cc
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
skip_cc:
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x10], 0
        call ext_006A5F38
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044D840] sub_0044D840 (157 bytes)
extern "C" int mem_00925694;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044D840(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push esi
        push edi
        push 0
        push 0
        mov edi, ecx
        mov eax, dword ptr [edi + 0x9e0]
        push 0x14b
        push eax
        call ebx
        mov esi, 0x00ad2590
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        push esi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [edi + 0x9e0]
        push eax
        push 0
        push 0x143
        push ecx
        call ebx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], -1
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, 0x00ad2654
        jl loop_top
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00440730] sub_00440730 (49 bytes)
extern "C" void ext_0043BCA0();
extern "C" void __fastcall fn_00440730(void* self) {
    char* s = (char*)self;
    typedef void (__thiscall *FnCallee)(void*, void*);
    if (*(void**)(s + 0x44)) {
        ((FnCallee)ext_0043BCA0)(*(void**)(s + 0x44), self);
    }
    char* owner = *(char**)(s + 0x48);
    if (*(void**)(owner + 0xa0) == self) {
        *(void**)(owner + 0xa0) = 0;
    }
    void* vtbl = *(void**)self;
    void* slot = *(void**)vtbl;
    typedef void (__thiscall *FnVirt)(void*, int);
    ((FnVirt)slot)(self, 1);
}

// [0x0044C0A0] sub_0044C0A0 (39 bytes)
extern "C" void ext_00530370();
extern "C" __declspec(naked) int __fastcall fn_0044C0A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0x0
        je done
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [ecx + 0x68]
        push edx
        mov edx, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        push edx
        call ext_00530370
    done:
        xor eax, eax
        ret 0x10
    }
}

// [0x0044BF70] sub_0044BF70 (61 bytes)
extern "C" void ext_00530940();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" int mem_009256D8;

extern "C" __declspec(naked) void __fastcall fn_0044BF70(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x78], 0x1
        call ext_006A60D0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        cmp dword ptr [esi + 0x64], 0x0
        je done_0044BF70
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        call ext_00530940
    done_0044BF70:
        pop esi
        ret 0xc
    }
}

// [0x004468D0] sub_004468D0 (181 bytes)
extern "C" void ext_00454BA0();
extern "C" void ext_0045B6B0();
extern "C" void ext_006A60B2();

extern "C" __declspec(naked) void __fastcall fn_004468D0(void* self) {
    __asm {
        push -1
        push 0x87bfb4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x144]
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 0x93293c
        mov dword ptr [edi], 0x932928
        mov dword ptr [esi + 0x148], 0x932920
        mov dword ptr [esi + 0x14c], 0x932918
        mov dword ptr [esi + 0x150], 0x932908
        mov dword ptr [esp + 0x14], 2
        call ext_00594000
        mov eax, dword ptr [eax + 0x2dc]
        push edi
        mov ecx, eax
        call ext_00451AE0
        lea ecx, [esi + 0x15c]
        mov byte ptr [esp + 0x14], 1
        call ext_0045B6B0
        lea ecx, [esi + 0x154]
        mov byte ptr [esp + 0x14], 0
        call ext_006A60B2
        lea ecx, [esi + 0x12c]
        mov dword ptr [esp + 0x14], 0xffffffff
        call dword ptr [mem_009242F4]
        mov ecx, esi
        call ext_00454BA0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00448540] sub_00448540 (185 bytes)
extern "C" void ext_006A6310();
extern "C" void ext_006B0CD0();

extern "C" __declspec(naked) void __fastcall fn_00448540(void* self) {
    __asm {
        push -1
        push 0x87c8dd
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x933394
        mov dword ptr [esi + 0x54], 0x933384
        mov ecx, dword ptr [esi + 0x58]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x4
        je skip_del
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
skip_del:
        cmp dword ptr [esi + 0xe8], 0x0
        lea eax, [esi + 0xe4]
        mov byte ptr [esp + 0x10], 0x3
        je skip_vf
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
skip_vf:
        lea ecx, [esi + 0xd8]
        mov byte ptr [esp + 0x10], 0x2
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0xd0]
        mov byte ptr [esp + 0x10], 0x1
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B0CD0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A6310
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044FF40] sub_0044FF40 (191 bytes)
extern "C" void ext_006A617E();
extern "C" void ext_006A5F3E();
extern "C" void ext_004046E0();
extern "C" void ext_00404700();
extern "C" void ext_00404720();
extern "C" void ext_00404770();
extern "C" void ext_004160A0();
extern "C" void ext_0044F780();
extern "C" int mem_0093A0BC;
extern "C" int mem_0093A0B0;
extern "C" int mem_0093A0C0;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_00924300;

extern "C" __declspec(naked) void __fastcall fn_0044FF40(void* self) {
    __asm {
        mov eax, dword ptr [mem_0093A0BC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [mem_0093A0B0]
        push 0
        push eax
        lea ebx, [edi + 0xd6c]
        push ecx
        mov ecx, ebx
        call ext_006A617E
        mov edx, dword ptr [mem_0093A0C0]
        mov eax, dword ptr [mem_0093A0B0]
        push 0
        push edx
        lea ebp, [edi + 0xd74]
        push eax
        mov ecx, ebp
        call ext_006A617E
        push ebp
        lea esi, [edi + 0xcf4]
        push ebx
        mov ecx, esi
        call ext_00404770
        push 2
        mov ecx, esi
        call ext_00404720
        push 0x13
        push 1
        call ext_004160A0
        mov ecx, dword ptr [mem_0093A0CC]
        add esp, 8
        push ecx
        mov ecx, esi
        call ext_00404700
        mov edx, dword ptr [mem_0093A0C8]
        push edx
        mov ecx, esi
        call ext_004046E0
        mov ecx, 0xad29a8
        call dword ptr [mem_00924300]
        push 0
        push 0
        push eax
        push 0
        push 1
        mov ecx, esi
        call ext_006A5F3E
        mov ecx, 0xad29ac
        call dword ptr [mem_00924300]
        push 0
        push 0
        push eax
        push 1
        push 1
        mov ecx, esi
        call ext_006A5F3E
        mov ecx, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        jmp ext_0044F780
    }
}

// [0x00449B40] sub_00449B40 (196 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A624A();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00449B40(void* self) {
    __asm {
        push -1
        push 0x0087CE0E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x93386C
        mov dword ptr [esi + 0x74], 0x933840
        lea ecx, [esi + 0x270]
        mov dword ptr [esp + 0x10], 0x6
        call ext_0040EF90
        lea ecx, [esi + 0x1FC]
        mov byte ptr [esp + 0x10], 0x5
        call ext_0040EF90
        lea ecx, [esi + 0x1E0]
        mov byte ptr [esp + 0x10], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x1C4]
        mov byte ptr [esp + 0x10], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x170]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5F38
        lea ecx, [esi + 0x11C]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x92A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call ext_006A624A
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00443A10] sub_00443A10 (208 bytes)
extern "C" void ext_0043CDD0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00443A10(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x14
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        add edi, 0xc
        call ext_0043CDD0
        fstp qword ptr [esp + 0x18]
        mov ecx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        call ext_0043CDD0
        fsubr qword ptr [esp + 0x18]
        mov edi, dword ptr [esi + 0x10]
        add esi, 0xc
        cmp edi, dword ptr [esi + 0x8]
        fstp qword ptr [esp + 0x18]
        fldz
        fstp qword ptr [esp + 0x10]
        jbe short L_443A60
        call dword ptr [mem_00925134]
        mov edi, edi
    L_443A60:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_443A6E
        call dword ptr [mem_00925134]
    L_443A6E:
        cmp esi, esi
        je short L_443A78
        call dword ptr [mem_00925134]
    L_443A78:
        cmp edi, ebx
        je short L_443AB3
        cmp edi, dword ptr [esi + 0x8]
        jb short L_443A87
        call dword ptr [mem_00925134]
    L_443A87:
        mov edx, dword ptr [edi]
        fld qword ptr [edx + 0x50]
        fadd qword ptr [esp + 0x18]
        fcom qword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x41
        je short L_443AA1
        fstp qword ptr [esp + 0x10]
        jmp short L_443AA3
    L_443AA1:
        fstp st(0)
    L_443AA3:
        cmp edi, dword ptr [esi + 0x8]
        jb short L_443AAE
        call dword ptr [mem_00925134]
    L_443AAE:
        add edi, 0x4
        jmp short L_443A60
    L_443AB3:
        fldz
        fld qword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp short L_443AD1
        fsubr qword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    L_443AD1:
        pop edi
        fstp st(0)
        fld qword ptr [esp + 0x14]
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x0044E020] sub_0044E020 (211 bytes)
extern "C" void ext_006A6238();
extern "C" int mem_00925694;
extern "C" int mem_009242F0;
extern "C" int mem_00A34654;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0044E020(void* self) {
    __asm {
        push -0x1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xcc]
        push 0x146
        push eax
        call edi
        test eax, eax
        je fn_0044E020_fail
        mov ecx, dword ptr [esi + 0xcc]
        push 0x0
        push 0x0
        push 0x147
        push ecx
        call edi
        cmp eax, -0x1
        je fn_0044E020_fail
        push ebx
        push 0x928b5d
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F0]
        mov eax, dword ptr [esi + 0xcc]
        lea edx, [esp + 0xc]
        push edx
        push 0x0
        push 0x0
        push 0x147
        push eax
        mov dword ptr [esp + 0x2c], 0x0
        call edi
        push eax
        lea ecx, [esi + 0xac]
        call ext_006A6238
        mov ecx, dword ptr [mem_00A34654]
        push ecx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0xc]
        setne bl
        call dword ptr [mem_009242F4]
        mov al, bl
        pop ebx
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    fn_0044E020_fail:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044C830] sub_0044C830 (212 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00530690();
extern "C" void ext_00530720();
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) void __fastcall fn_0044C830(void* self) {
    __asm {
        push -0x1
        push 0x8a1908
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push esi
        xor esi, esi
        push edi
        mov ebx, ecx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
        mov ecx, dword ptr [ebx + 0x68]
        lea eax, [esp + 0xc]
        push eax
        mov dword ptr [esp + 0x28], esi
        call ext_00530720
        mov edi, dword ptr [esp + 0x10]
        cmp edi, esi
        je loc_0044C8DD
        mov ecx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x2c]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jae loc_0044C8DD
        lea ecx, [8*esi]
        sub ecx, esi
        lea eax, [edi + 4*ecx]
        mov ecx, dword ptr [ebx + 0x68]
        push eax
        call ext_00530690
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        lea ecx, [esp + 0xc]
        mov bl, al
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_004026E0
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    loc_0044C8DD:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x004473F0] sub_004473F0 (213 bytes)
extern "C" int mem_009241D4;
extern "C" int mem_009241D8;
extern "C" int mem_009241DC;

extern "C" __declspec(naked) void* __fastcall fn_004473F0(void* self) {
    __asm {
        push ebx
        push esi
        push 0x932c14
        mov esi, ecx
        call dword ptr [mem_009241D4]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esi + 0x20], eax
        je L_4474A0
        push edi
        mov edi, dword ptr [mem_009241D8]
        push 0x932c0c
        push eax
        call edi
        mov dword ptr [esi], eax
        mov eax, dword ptr [esi + 0x20]
        push 0x932c04
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push 0x932bf8
        push ecx
        mov dword ptr [esi + 0x4], eax
        call edi
        mov edx, dword ptr [esi + 0x20]
        push 0x932bf0
        push edx
        mov dword ptr [esi + 0x8], eax
        call edi
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [esi + 0x20]
        push 0x932be4
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push 0x932bd4
        push ecx
        mov dword ptr [esi + 0x10], eax
        call edi
        mov edx, dword ptr [esi + 0x20]
        push 0x932bc0
        push edx
        mov dword ptr [esi + 0x14], eax
        call edi
        cmp dword ptr [esi], ebx
        mov dword ptr [esi + 0x18], eax
        pop edi
        je L_447493
        cmp dword ptr [esi + 0x4], ebx
        je L_447493
        cmp dword ptr [esi + 0x8], ebx
        je L_447493
        cmp dword ptr [esi + 0xc], ebx
        je L_447493
        cmp dword ptr [esi + 0x10], ebx
        je L_447493
        cmp dword ptr [esi + 0x14], ebx
        je L_447493
        cmp eax, ebx
        jne L_4474A0
    L_447493:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009241DC]
        mov dword ptr [esi + 0x20], ebx
    L_4474A0:
        cmp dword ptr [esi + 0x20], ebx
        mov byte ptr [esi + 0x1c], 1
        mov eax, esi
        jne L_4474C2
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        mov dword ptr [esi + 0x14], ebx
        mov dword ptr [esi + 0x18], ebx
        mov byte ptr [esi + 0x1c], bl
    L_4474C2:
        pop esi
        pop ebx
        ret
    }
}

// [0x0044C9B0] sub_0044C9B0 (31 bytes)
extern "C" void ext_0044C830();

struct Target_0044C9B0 {
    virtual void func0();
    virtual void func1(unsigned int);
};

extern "C" void __fastcall fn_0044C9B0(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 0));
}

// [0x0044C9D0] sub_0044C9D0 (31 bytes)
extern "C" void __fastcall fn_0044C9D0(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 1));
}

// [0x0044C9F0] sub_0044C9F0 (31 bytes)
extern "C" void __fastcall fn_0044C9F0(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 2));
}

// [0x0044CA10] sub_0044CA10 (31 bytes)
extern "C" void __fastcall fn_0044CA10(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 3));
}

// [0x0044CA30] sub_0044CA30 (31 bytes)
extern "C" void __fastcall fn_0044CA30(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 4));
}

// [0x0044CA50] sub_0044CA50 (31 bytes)
extern "C" void __fastcall fn_0044CA50(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 5));
}

// [0x0044CA70] sub_0044CA70 (31 bytes)
extern "C" void __fastcall fn_0044CA70(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 6));
}

// [0x0044CA90] sub_0044CA90 (31 bytes)
extern "C" void __fastcall fn_0044CA90(void* self, int edx_unused, Target_0044C9B0* target) {
    target->func1(((bool (__thiscall *)(void*, int))ext_0044C830)(self, 7));
}

// [0x0044CAB0] sub_0044CAB0 (31 bytes)
extern "C" void __stdcall fn_0044CAB0(Target_0044C9B0* target) {
    target->func1(((bool (__stdcall *)(int))ext_0044C830)(8));
}

// [0x0044CAD0] sub_0044CAD0 (31 bytes)
extern "C" void __stdcall fn_0044CAD0(Target_0044C9B0* target) {
    target->func1(((bool (__stdcall *)(int))ext_0044C830)(9));
}

// [0x00447550] sub_00447550 (48 bytes)
extern "C" void __fastcall ext_004473F0(void* self);
extern "C" void ext_006A6C87(void* arg);
extern "C" int mem_00ACF5F8;
extern "C" int mem_00ACF5D4;
extern "C" int mem_00915500;

extern "C" void* __fastcall fn_00447550(void* self) {
    if (!(mem_00ACF5F8 & 1)) {
        mem_00ACF5F8 |= 1;
        ext_004473F0(&mem_00ACF5D4);
        ext_006A6C87(&mem_00915500);
    }
    return &mem_00ACF5D4;
}

// [0x0044A820] sub_0044A820 (216 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A6220();
extern "C" void ext_0044A360();
extern "C" __declspec(naked) void __fastcall fn_0044A820(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87ced0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x34
        push 0
        mov esi, ecx
        push 0x251
        mov dword ptr [esp + 0x14], esi
        call ext_006A6220
        lea edi, [esi + 0x88]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x933cfc
        call ext_006A5C6E
        mov dword ptr [edi], 0x92f3bc
        lea edi, [esi + 0xf4]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi + 0xe0], 0
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x148]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x933e8c
        lea ecx, [esi + 0x19c]
        mov byte ptr [esp + 0x14], 3
        call ext_0044A360
        lea edi, [esi + 0x1f8]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 4
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x9287e4
        mov dword ptr [esi + 0xdc], -1
        mov dword ptr [esi + 0xf0], 0
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00440A20] sub_00440A20 (219 bytes)
extern "C" void* __fastcall fn_00440A20(void* self, int edx_unused, const void* src) {
    struct Rec {
        int d[8];
        unsigned char c[2];
        unsigned char pad[2];
        float f[24];
    };
    Rec* dst = (Rec*)self;
    const Rec* s = (const Rec*)src;
    dst->d[0] = s->d[0];
    dst->d[1] = s->d[1];
    dst->d[2] = s->d[2];
    dst->d[3] = s->d[3];
    dst->d[4] = s->d[4];
    dst->d[5] = s->d[5];
    dst->d[6] = s->d[6];
    dst->d[7] = s->d[7];
    dst->c[0] = s->c[0];
    dst->c[1] = s->c[1];
    dst->f[0] = s->f[0];
    dst->f[1] = s->f[1];
    dst->f[2] = s->f[2];
    dst->f[3] = s->f[3];
    dst->f[4] = s->f[4];
    dst->f[5] = s->f[5];
    dst->f[6] = s->f[6];
    dst->f[7] = s->f[7];
    dst->f[8] = s->f[8];
    dst->f[9] = s->f[9];
    dst->f[10] = s->f[10];
    dst->f[11] = s->f[11];
    dst->f[12] = s->f[12];
    dst->f[13] = s->f[13];
    dst->f[14] = s->f[14];
    dst->f[15] = s->f[15];
    dst->f[16] = s->f[16];
    dst->f[17] = s->f[17];
    dst->f[18] = s->f[18];
    dst->f[19] = s->f[19];
    dst->f[20] = s->f[20];
    dst->f[21] = s->f[21];
    dst->f[22] = s->f[22];
    dst->f[23] = s->f[23];
    return self;
}

// [0x00448730] sub_00448730 (219 bytes)
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6004();
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_00448730(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esi + 0x7c]
        mov ebx, dword ptr [esp + 0x24]
        push eax
        lea ebp, [ebx - 0x10]
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov edi, eax
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [esi + 0xd8]
        push eax
        mov ecx, edi
        call edx
        push 0x9334d0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x28]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x24]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x30]
        push eax
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esi + 0x7c]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        mov edi, dword ptr [esp + 0x28]
        mov eax, edi
        sub eax, dword ptr [esp + 0x18]
        push 0x0
        sub eax, 0x1
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 0x1
        mov edx, edi
        sub edx, eax
        push edx
        lea ecx, [ebp - 0x1]
        push ecx
        push eax
        push 0x1
        lea ecx, [esi + 0x5c]
        call ext_006A5E5A
        mov ecx, dword ptr [esi + 0x58]
        push 0x0
        push edi
        sub ebx, ebp
        push ebx
        push 0x0
        push ebp
        call ext_006A5E5A
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}

// [0x00444390] sub_00444390 (223 bytes)
extern "C" void ext_00444360();
extern "C" void ext_00444439();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60EE();
extern "C" void ext_006A63CA();
extern "C" void ext_006A63D0();
extern "C" int mem_00924204;
extern "C" int mem_0092420C;

// [0x00444390] sub_00444390 (223 bytes)
extern "C" __declspec(naked) int __fastcall fn_00444390(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x9d7f88
        push 0x6a6ef2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        mov dword ptr [ebp-0x20], ebx
        lea eax, [ebp-0x20]
        push eax
        call ext_006A5EDE
        mov ecx, dword ptr [eax+0x9c]
        push ecx
        call ext_006A63D0
        mov edi, eax
        mov dword ptr [ebp-0x24], edi
        or eax, -1
        mov dword ptr [ebp-0x1c], eax
        cmp edi, ebx
        je L_epilog
        mov dword ptr [ebp-0x4], ebx
        lea edx, [ebp-0x28]
        push edx
        mov ecx, esi
        call ext_00444360
        mov esi, dword ptr [esi+0x44]
        xor eax, eax
        cmp esi, ebx
        setne al
        cmp eax, ebx
        jne L_have_fn
        call ext_006A60EE
    L_have_fn:
        mov eax, dword ptr [ebp+0x10]
        push eax
        mov ecx, dword ptr [ebp+0xc]
        push ecx
        mov edx, dword ptr [ebp+0x8]
        push edx
        call esi
        mov ebx, eax
        mov dword ptr [ebp-0x1c], ebx
        mov dword ptr [ebp-0x4], -1
        call L_cleanup
        mov eax, ebx
    L_epilog:
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    L_cleanup:
        mov edi, dword ptr [ebp-0x24]
        mov ebx, dword ptr [ebp-0x1c]
        cmp edi, 2
        je L_cleanup_ret
        xor eax, eax
        cmp ebx, -1
        sete al
        mov esi, eax
        test esi, esi
        je L_no_gle
        call dword ptr [mem_00924204]
        mov edi, eax
        jmp L_cleanup_call
    L_no_gle:
        xor edi, edi
    L_cleanup_call:
        mov ecx, dword ptr [ebp-0x20]
        push ecx
        push 0
        call ext_006A63CA
        test esi, esi
        je L_cleanup_ret
        push edi
        call dword ptr [mem_0092420C]
    L_cleanup_ret:
        ret
    }
}

// [0x0044A380] sub_0044A380 (227 bytes)
extern "C" int mem_00925688;
extern "C" void __fastcall fn_0044A380(void* self, int edx_unused, const float* color) {
    unsigned int r = (unsigned int)(color[0] * 255.0);
    unsigned int g = (unsigned int)(color[1] * 255.0);
    unsigned int b = (unsigned int)(color[2] * 255.0);
    *(unsigned int*)((char*)self + 0x54) = (r & 0xff) | ((g & 0xff) << 8) | ((b & 0xff) << 16);
    unsigned int inv = (b < 0x7f ? 0xff : 0);
    inv = (inv << 8) | (g < 0x7f ? 0xff : 0);
    inv = (inv << 8) | (r < 0x7f ? 0xff : 0);
    *(unsigned int*)((char*)self + 0x58) = inv;
    ((void (__stdcall*)(void*, void*, int))mem_00925688)(*(void**)((char*)self + 0x20), 0, 1);
}

// [0x00447590] sub_00447590 (229 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F38();
extern "C" void ext_006A61D2();

extern "C" __declspec(naked) void __fastcall fn_00447590(void* self) {
    __asm {
        push -1
        push 0x87c2d6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x932c8c
        lea ecx, [esi + 0x380]
        mov dword ptr [esp + 0x10], 0x9
        call ext_006A5DFA
        lea ecx, [esi + 0x32c]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006A5F38
        lea ecx, [esi + 0x2d8]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006A5F38
        lea ecx, [esi + 0x284]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006A5F38
        lea ecx, [esi + 0x230]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006A5F38
        lea ecx, [esi + 0x1dc]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006A5DFA
        lea ecx, [esi + 0x188]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5F38
        lea ecx, [esi + 0x134]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5F38
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5F38
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A61D2
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0044B7E0] sub_0044B7E0 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFD4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044B7E0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFD4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044B850] sub_0044B850 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFD8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044B850(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFD8]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044B8C0] sub_0044B8C0 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFDC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044B8C0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFDC]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044B930] sub_0044B930 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044B930(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFE0]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044BA60] sub_0044BA60 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFE4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044BA60(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFE4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044BAD0] sub_0044BAD0 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044BAD0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFE8]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044BB40] sub_0044BB40 (98 bytes)
extern "C" void ext_005306A0();
extern "C" int mem_00A2FFEC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044BB40(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [mem_00A2FFEC]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x2c], 0
        call ext_005306A0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0044C790] sub_0044C790 (159 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_005306A0();
extern "C" void ext_00530720();

extern "C" __declspec(naked) void __fastcall fn_0044C790(void* self, int edx_unused, unsigned int idx) {
    __asm {
        push -1
        push 0x8a1908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        xor esi, esi
        push edi
        mov ebx, ecx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], esi
        mov ecx, dword ptr [ebx + 0x68]
        lea eax, [esp + 0xc]
        push eax
        mov dword ptr [esp + 0x28], esi
        call ext_00530720
        mov edi, dword ptr [esp + 0x10]
        cmp edi, esi
        je skip_call
        mov ecx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x2c]
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, eax
        jae skip_call
        lea ecx, [esi*8]
        sub ecx, esi
        lea edx, [edi + ecx*4]
        mov ecx, dword ptr [ebx + 0x68]
        push edx
        call ext_005306A0
skip_call:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_004026E0
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x0044A1E0] sub_0044A1E0 (235 bytes)
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251F0;
extern "C" int mem_00933FD0;
extern "C" double mem_0092C518;
extern "C" int mem_00993828;
extern "C" int mem_00925694;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0044A1E0(void* self) {
    __asm {
        push -0x1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        mov esi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fld1
        fcom st(1)
        add esp, 0x4
        fnstsw ax
        test ah, 0x5
        jp short loc_44A24A
        fstp st(1)
        push 0x92f17c
        mov ecx, esi
        fstp st(0)
        call ext_006A5F50
        jmp short loc_44A2AF
    loc_44A24A:
        fld qword ptr [mem_00933FD0]
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne short loc_44A26B
        fstp st(1)
        push 0x92a0d0
        mov ecx, esi
        fstp st(0)
        call ext_006A5F50
        jmp short loc_44A2AF
    loc_44A26B:
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp short loc_44A278
        fstp st(1)
        jmp short loc_44A27A
    loc_44A278:
        fstp st(0)
    loc_44A27A:
        fmul qword ptr [mem_0092C518]
        sub esp, 0x8
        fadd qword ptr [mem_00993828]
        fstp qword ptr [esp]
        call ext_006A6E92
        add esp, 0x8
        call ext_006A6DE0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [ecx + 0x20]
        push eax
        push 0x1
        push 0x405
        push edx
        call dword ptr [mem_00925694]
    loc_44A2AF:
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0044AB90] sub_0044AB90 (57 bytes)
extern "C" void ext_0044A1E0();
extern "C" void ext_0044AAA0();
extern "C" void* (__stdcall *mem_00925654)();

struct Class_0044AB90 {
    char pad_0[0xf4];
    int m_f4;
    char pad_f8[0x114 - 0xf8];
    void* m_114;
    char pad_118[0x148 - 0x118];
    int m_148;

    void test() {
        typedef void (__thiscall *fn1_t)(Class_0044AB90*, void*, void*);
        ((fn1_t)ext_0044A1E0)(this, &m_f4, &m_148);
        typedef void* (__stdcall *pfnFromHandle)(void*);
        void* wnd = ((pfnFromHandle)ext_006A5E00)(mem_00925654());
        if (*(void**)((char*)wnd + 0x20) == m_114) {
            typedef void (__thiscall *fn2_t)(Class_0044AB90*);
            ((fn2_t)ext_0044AAA0)(this);
        }
    }
};

extern "C" void __fastcall fn_0044AB90(void* self) {
    reinterpret_cast<Class_0044AB90*>(self)->test();
}

// [0x0044BFE0] sub_0044BFE0 (68 bytes)
extern "C" void ext_0044BCF0();
extern "C" void ext_00530B00();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" int mem_009256D8;

extern "C" __declspec(naked) void __fastcall fn_0044BFE0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x76], 0x1
        call ext_006A60D0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        mov ecx, esi
        call ext_0044BCF0
        cmp dword ptr [esi + 0x64], 0x0
        je done_0044BFE0
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        call ext_00530B00
    done_0044BFE0:
        pop esi
        ret 0xc
    }
}

// [0x00444660] sub_00444660 (238 bytes)
extern "C" void ext_0052ADA0();
extern "C" void ext_0066A180();
extern "C" int mem_00AED9D0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00444660(void* self) {
    __asm {
        push -1
        push 0x877622
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00AED9D0]
        mov esi, ecx
        push 0x9328f8
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x54], 0
        call ext_0052ADA0
        lea ecx, [esp + 0x10]
        mov ebx, eax
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, ebx
        call ext_0066A180
        mov ecx, dword ptr [esi + 0x17c]
        mov ebp, dword ptr [mem_00925694]
        mov ebx, eax
        push ebx
        push 0
        push 0x111e
        push ecx
        call ebp
        mov edx, dword ptr [esi + 0x17c]
        push ebx
        push 0
        push 0x1128
        push edx
        call ebp
        push 0x9328e8
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x54], 1
        call ext_0052ADA0
        lea ecx, [esp + 0x2c]
        mov edi, eax
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, edi
        call ext_0066A180
        mov ecx, dword ptr [esi + 0x17c]
        push eax
        push 0
        push 0x111d
        push ecx
        call ebp
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0044DBF0] sub_0044DBF0 (248 bytes)
extern "C" void ext_006649D0();
extern "C" void ext_006A60E8();
extern "C" int mem_00925694;
extern "C" int mem_00A34650;
extern "C" int mem_00924FE4;
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0044DBF0(void* self) {
    __asm {
        push -1
        push 0x87de7c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        push 0
        push 0
        mov esi, ecx
        mov dword ptr [esp+0x10], 0
        mov eax, dword ptr [esi+0x768]
        push 0x18b
        push eax
        call dword ptr [mem_00925694]
        test eax, eax
        jne L54
        mov ecx, dword ptr [mem_00A34650]
        mov esi, dword ptr [esp+0x38]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp+0x24]
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 8
    L54:
        lea ecx, [esp+4]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esp+0x3c]
        lea edx, [esp+4]
        push edx
        push eax
        lea ecx, [esi+0x748]
        mov dword ptr [esp+0x38], 1
        call ext_006A60E8
        lea ecx, [esp+4]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp+0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp+0xc]
        push ecx
        mov byte ptr [esp+0x34], 2
        call ext_006649D0
        mov esi, dword ptr [esp+0x3c]
        add esp, 4
        lea edx, [esp+0xc]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp+0xc]
        mov dword ptr [esp+8], 1
        mov byte ptr [esp+0x30], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp+4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp+0x28]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 8
    }
}

// [0x00449A30] sub_00449A30 (257 bytes)
extern "C" void ext_0040F0B0();
extern "C" void ext_006A6250();
extern "C" int mem_0093A0E8;

extern "C" __declspec(naked) void* __fastcall fn_00449A30(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87cd9c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push esi
        push edi
        push eax
        push 0x32c
        mov esi, ecx
        push 0x31d
        mov dword ptr [esp + 0x18], esi
        call ext_006A6250
        xor eax, eax
        lea edi, [esi + 0x114]
        mov dword ptr [esi], 0x93386c
        mov dword ptr [esi + 0x74], 0x933840
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi], 0x92a254
        lea ebx, [esi + 0x11c]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 1
        call ext_006A5C6E
        mov dword ptr [ebx], 0x929e0c
        lea ebx, [esi + 0x170]
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 2
        call ext_006A5C6E
        mov dword ptr [ebx], 0x929e0c
        push 0x928b5d
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x1c], 3
        call dword ptr [mem_00924FE4]
        push 0x928b5d
        lea ecx, [esi + 0x1e0]
        mov byte ptr [esp + 0x1c], 4
        call dword ptr [mem_00924FE4]
        lea ecx, [esi + 0x1fc]
        mov byte ptr [esp + 0x18], 5
        call ext_0040F0B0
        lea ecx, [esi + 0x270]
        mov byte ptr [esp + 0x18], 6
        call ext_0040F0B0
        mov ecx, dword ptr [mem_0093A0E8]
        push ecx
        mov byte ptr [esp + 0x1c], 7
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0044E190] sub_0044E190 (259 bytes)
extern "C" void ext_00492590();
extern "C" void ext_00584A10();
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F50();
extern "C" void ext_006AD940();
extern "C" int mem_00924FE0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00925650;
extern "C" int mem_00924FF0;
extern "C" int mem_0087DEEB;
extern "C" int mem_00AD2574;
extern "C" int mem_009357B8;

extern "C" __declspec(naked) void __fastcall fn_0044E190(void* self) {
    __asm {
        push -1
        push offset mem_0087DEEB
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 54h
        push esi
        mov esi, ecx
        push offset mem_00AD2574
        lea ecx, [esp + 8]
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 60h], 0
        call ext_00594000
        mov ecx, dword ptr [eax + 26Ch]
        call ext_006AD940
        mov ecx, eax
        call ext_00492590
        test al, al
        jne skip_block
        cmp dword ptr [esi + 74h], 0
        je skip_block
        push edi
        push offset mem_009357B8
        lea eax, [esp + 44h]
        push offset mem_00AD2574
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0Ch
        mov edi, eax
        mov eax, dword ptr [esi + 74h]
        lea ecx, [eax + 4]
        mov byte ptr [esp + 64h], 1
        call ext_00584A10
        push eax
        lea ecx, [esp + 28h]
        push edi
        push ecx
        call dword ptr [mem_00924FD0]
        add esp, 0Ch
        push eax
        lea ecx, [esp + 0Ch]
        mov byte ptr [esp + 68h], 2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 24h]
        mov byte ptr [esp + 64h], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 40h]
        mov byte ptr [esp + 64h], 0
        call dword ptr [mem_00924FF4]
        pop edi
    skip_block:
        mov edx, dword ptr [esi + 20h]
        push edx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        lea ecx, [esp + 4]
        mov esi, eax
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call ext_006A5F50
        lea ecx, [esp + 4]
        mov dword ptr [esp + 60h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 58h]
        pop esi
        mov fs:[0], ecx
        add esp, 60h
        ret
    }
}

// [0x0044C0F0] sub_0044C0F0 (61 bytes)
extern "C" void ext_005309F0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" int mem_009256D8;

extern "C" __declspec(naked) void __fastcall fn_0044C0F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x77], 0x1
        call ext_006A60D0
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        cmp dword ptr [esi + 0x64], 0x0
        je done_0044C0F0
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        call ext_005309F0
    done_0044C0F0:
        pop esi
        ret 0xc
    }
}

// [0x0044DAE0] sub_0044DAE0 (267 bytes)
extern "C" void ext_006649D0();
extern "C" void ext_006A6238();
extern "C" int mem_00925694;
extern "C" int mem_00A3464C;
extern "C" int mem_00924FE4;
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) int __fastcall fn_0044DAE0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87de7c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov dword ptr [esp + 0x14], 0
        mov eax, dword ptr [esi + 0xcc]
        mov edi, dword ptr [mem_00925694]
        push 0x146
        push eax
        call edi
        test eax, eax
        jne L_nonzero
        mov ecx, dword ptr [mem_00A3464C]
        mov esi, dword ptr [esp + 0x3c]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    L_nonzero:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esi + 0xcc]
        lea edx, [esp + 0x8]
        push edx
        push 0
        push 0
        push 0x147
        push eax
        mov dword ptr [esp + 0x48], 1
        call edi
        push eax
        lea ecx, [esi + 0xac]
        call ext_006A6238
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x10]
        push ecx
        mov byte ptr [esp + 0x38], 2
        call ext_006649D0
        mov esi, dword ptr [esp + 0x40]
        add esp, 4
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 1
        mov byte ptr [esp + 0x34], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x00448810] sub_00448810 (271 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" void ext_006B4440();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_00448810(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 08b7bfbh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push edi
        mov edi, ecx
        call ext_006A5EA8
        cmp dword ptr [esp+18h], 0
        je L_done
        push ebx
        push esi
        lea ecx, [esp+20h]
        call dword ptr [mem_009242FC]
        lea eax, [esp+20h]
        lea esi, [edi+5ch]
        push eax
        mov ecx, esi
        mov dword ptr [esp+1ch], 0
        call ext_006A5F4A
        mov ecx, dword ptr [edi+0c8h]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx+8]
        lea ecx, [esp+0ch]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp+18h], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp+24h]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp+0ch]
        setne bl
        mov byte ptr [esp+18h], 0
        call dword ptr [mem_009242F4]
        test bl, bl
        je L_cleanup
        mov ecx, dword ptr [edi+0c8h]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx+8]
        lea ecx, [esp+0ch]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp+18h], 2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A5F50
        lea ecx, [esp+0ch]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi+20h]
        mov edi, dword ptr [mem_00925694]
        push -1
        push 0
        push 0b1h
        push eax
        call edi
        mov ecx, dword ptr [esi+20h]
        push 0
        push 0
        push 0b7h
        push ecx
        call edi
L_cleanup:
        lea ecx, [esp+20h]
        call dword ptr [mem_009242F4]
        pop esi
        pop ebx
L_done:
        mov ecx, dword ptr [esp+8]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 8
    }
}

// [0x00440EE0] sub_00440EE0 (273 bytes)
extern "C" void ext_00493D90();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_00440EE0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    __asm {
        push -1
        push 0x87b924
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov eax, dword ptr [esp + 0x1c]
        xor ebx, ebx
        push 0x932498
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi], 0x93240c
        mov dword ptr [esi + 0x8], eax
        call dword ptr [mem_00924FE4]
        push 0x928b5d
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FE4]
        fldz
        mov ecx, dword ptr [esp + 0x20]
        fst qword ptr [esi + 0x50]
        mov edx, dword ptr [esp + 0x24]
        fst qword ptr [esi + 0x58]
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x30]
        mov dword ptr [esi + 0x44], ecx
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [esi + 0x74], ecx
        mov dword ptr [esi + 0x48], edx
        mov dword ptr [esi + 0x70], eax
        fstp dword ptr [esi + 0x78]
        fld dword ptr [esp + 0x34]
        lea ecx, [esp + 0x30]
        fstp dword ptr [esi + 0x7c]
        mov dword ptr [esp + 0x14], 0xffffffff
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esi + 0x80]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esi + 0x84]
        mov byte ptr [esi + 0x88], bl
        mov byte ptr [esi + 0x89], bl
        fst qword ptr [esi + 0x90]
        mov byte ptr [esi + 0x8a], 0x1
        fstp qword ptr [esi + 0x98]
        mov byte ptr [esi + 0x8b], 0x1
        mov byte ptr [esi + 0x8c], bl
        mov byte ptr [esi + 0x8d], bl
        mov byte ptr [esi + 0x8e], 0x1
        mov byte ptr [esi + 0x8f], bl
        mov byte ptr [esi + 0xa0], 0x1
        mov byte ptr [esi + 0xa1], bl
        mov byte ptr [esi + 0xa2], 0x1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x24
    }
}

// [0x00441330] sub_00441330 (144 bytes)
extern "C" void ext_00440EE0();
extern "C" void ext_00493D90();

extern "C" __declspec(naked) void __fastcall fn_00441330(void* self) {
    __asm {
        push 0FFFFFFFFh
        push 87B938h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esp+2Ch]
        mov ecx, dword ptr [esp+24h]
        mov edx, dword ptr [esp+20h]
        sub esp, 10h
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp+14h], esp
        fld dword ptr [esp+40h]
        mov dword ptr [esp+20h], 0
        fstp dword ptr [eax+4]
        fld dword ptr [esp+44h]
        fstp dword ptr [eax+8]
        fld dword ptr [esp+48h]
        fstp dword ptr [eax+0Ch]
        mov eax, dword ptr [esp+38h]
        push eax
        mov eax, dword ptr [esp+30h]
        push ecx
        mov ecx, dword ptr [esp+30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00440EE0
        lea ecx, [esp+2Ch]
        mov dword ptr [esi], 932424h
        mov dword ptr [esp+10h], 0FFFFFFFFh
        call ext_00493D90
        mov ecx, dword ptr [esp+8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret 24h
    }
}

// [0x00441630] sub_00441630 (144 bytes)
extern "C" void ext_00440EE0();
extern "C" void ext_00493D90();

extern "C" __declspec(naked) void __fastcall fn_00441630(void* self) {
    __asm {
        push 0FFFFFFFFh
        push 87B938h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esp+2Ch]
        mov ecx, dword ptr [esp+24h]
        mov edx, dword ptr [esp+20h]
        sub esp, 10h
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp+14h], esp
        fld dword ptr [esp+40h]
        mov dword ptr [esp+20h], 0
        fstp dword ptr [eax+4]
        fld dword ptr [esp+44h]
        fstp dword ptr [eax+8]
        fld dword ptr [esp+48h]
        fstp dword ptr [eax+0Ch]
        mov eax, dword ptr [esp+38h]
        push eax
        mov eax, dword ptr [esp+30h]
        push ecx
        mov ecx, dword ptr [esp+30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00440EE0
        lea ecx, [esp+2Ch]
        mov dword ptr [esi], 93243Ch
        mov dword ptr [esp+10h], 0FFFFFFFFh
        call ext_00493D90
        mov ecx, dword ptr [esp+8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret 24h
    }
}

// [0x004419A0] sub_004419A0 (158 bytes)
extern "C" void ext_00440EE0();
extern "C" void ext_00493D90();
extern "C" int mem_00932454;
extern "C" __declspec(naked) void __fastcall fn_004419A0(void* self, int edx_unused, int a0, int a1, int a2, int a3, int a4, float a5, float a6, float a7, float a8) {
    __asm {
        push -1
        push 0x87b938
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esp+2Ch]
        mov ecx, dword ptr [esp+24h]
        mov edx, dword ptr [esp+20h]
        sub esp, 10h
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp+14h], esp
        fld dword ptr [esp+40h]
        mov dword ptr [esp+20h], 0
        fstp dword ptr [eax+4]
        fld dword ptr [esp+44h]
        fstp dword ptr [eax+8]
        fld dword ptr [esp+48h]
        fstp dword ptr [eax+0Ch]
        mov eax, dword ptr [esp+38h]
        push eax
        mov eax, dword ptr [esp+30h]
        push ecx
        mov ecx, dword ptr [esp+30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00440EE0
        mov al, 1
        lea ecx, [esp+2Ch]
        mov dword ptr [esi], offset mem_00932454
        mov byte ptr [esi+8Ch], al
        mov byte ptr [esi+8Dh], al
        mov dword ptr [esp+10h], 0FFFFFFFFh
        call ext_00493D90
        mov ecx, dword ptr [esp+8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret 24h
    }
}

// [0x00441C80] sub_00441C80 (158 bytes)
extern "C" int mem_00932484;
extern "C" __declspec(naked) void __fastcall fn_00441C80(void* self, int edx_unused, int a0, int a1, int a2, int a3, int a4, float a5, float a6, float a7, float a8) {
    __asm {
        push -1
        push 0x87b938
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esp+2Ch]
        mov ecx, dword ptr [esp+24h]
        mov edx, dword ptr [esp+20h]
        sub esp, 10h
        mov eax, esp
        fstp dword ptr [eax]
        mov dword ptr [esp+14h], esp
        fld dword ptr [esp+40h]
        mov dword ptr [esp+20h], 0
        fstp dword ptr [eax+4]
        fld dword ptr [esp+44h]
        fstp dword ptr [eax+8]
        fld dword ptr [esp+48h]
        fstp dword ptr [eax+0Ch]
        mov eax, dword ptr [esp+38h]
        push eax
        mov eax, dword ptr [esp+30h]
        push ecx
        mov ecx, dword ptr [esp+30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00440EE0
        mov al, 1
        lea ecx, [esp+2Ch]
        mov dword ptr [esi], offset mem_00932484
        mov byte ptr [esi+8Ch], al
        mov byte ptr [esi+8Dh], al
        mov dword ptr [esp+10h], 0FFFFFFFFh
        call ext_00493D90
        mov ecx, dword ptr [esp+8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret 24h
    }
}

// [0x0044B3C0] sub_0044B3C0 (286 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_0052EDF0();
extern "C" void ext_0066A330();
extern "C" void ext_006A6712();
extern "C" int mem_00925680;
extern "C" double mem_0092C518;

extern "C" __declspec(naked) void __fastcall fn_0044B3C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87ba58
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push esi
        push eax
        mov esi, ecx
        call ext_006A6712
        cmp eax, -1
        jne L_44b3fe
        or eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 4

    L_44b3fe:
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call ext_0052EDF0
        mov dword ptr [esi + 0x64], eax
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xb4]
        add esp, 4
        call eax
        lea ecx, [esi + 0x58]
        mov dword ptr [esi + 0x68], eax
        push 0xf
        mov dword ptr [eax + 0x78], ecx
        call dword ptr [mem_00925680]
        fld1
        mov ecx, eax
        shr ecx, 0x10
        movzx edx, cl
        sub esp, 0x10
        mov dword ptr [esp + 0x34], edx
        movzx ecx, ah
        fstp dword ptr [esp + 0xc]
        fild dword ptr [esp + 0x34]
        fld qword ptr [mem_0092C518]
        movzx edx, al
        fdiv st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x8]
        mov dword ptr [esp + 0x34], ecx
        fild dword ptr [esp + 0x34]
        lea ecx, [esp + 0x14]
        fdiv st, st(1)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x4]
        mov dword ptr [esp + 0x34], edx
        fild dword ptr [esp + 0x34]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call ext_0066A330
        mov ecx, dword ptr [esi + 0x64]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x18]
        lea edx, [esp + 0x4]
        push edx
        mov dword ptr [esp + 0x20], 0
        call eax
        mov ecx, dword ptr [esi + 0x64]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xac]
        push 1
        call eax
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x1c], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x14]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 4
    }
}

// [0x0044C030] sub_0044C030 (53 bytes)
extern "C" void ext_0044BCF0();
extern "C" void ext_00530820();

extern "C" __declspec(naked) void __fastcall fn_0044C030(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0044BCF0
        cmp byte ptr [esi + 0x76], 0
        jne do_call
        cmp byte ptr [esi + 0x77], 0
        jne do_call
        cmp byte ptr [esi + 0x78], 0
        je done
    do_call:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        push eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_00530820
    done:
        pop esi
        ret 0xc
    }
}

// [0x0044FB70] sub_0044FB70 (289 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A5FF2();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044FB70(void* self) {
    __asm {
        push -0x1
        push 0x87e080
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9357cc
        lea ecx, [esi + 0x3bc]
        mov dword ptr [esp + 0x10], 0xc
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x3b4]
        mov byte ptr [esp + 0x10], 0xb
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x340]
        mov byte ptr [esp + 0x10], 0xa
        call ext_0040EF90
        lea ecx, [esi + 0x2cc]
        mov byte ptr [esp + 0x10], 0x9
        call ext_0040EF90
        lea ecx, [esi + 0x278]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006A5F38
        lea ecx, [esi + 0x224]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006A5EFC
        lea ecx, [esi + 0x1d0]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006A5EFC
        lea ecx, [esi + 0x17c]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006A5EFC
        lea ecx, [esi + 0x128]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006A5EFC
        lea ecx, [esi + 0xd4]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5EFC
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x10], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x94]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00448DD0] sub_00448DD0 (294 bytes)
extern "C" void ext_00448BF0();
extern "C" void ext_006647A0();
extern "C" void ext_006A5F50();
extern "C" void ext_006B4440();
extern "C" int mem_00924300;
extern "C" int mem_00925224;
extern "C" int mem_00924FF0;
extern "C" int mem_009242F8;
extern "C" int mem_00924FF4;
extern "C" int mem_00924494;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00448DD0(void* self, int edx_unused, bool negate) {
    __asm {
        push -1
        push 0x87c96b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc8]
        push edi
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, eax
        call edx
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x40], 0
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_00925224]
        fst qword ptr [esp + 0x18]
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00448BF0
        cmp byte ptr [esp + 0x44], 0
        je short loc_448e3a
        fchs
loc_448e3a:
        fadd qword ptr [esp + 0x10]
        sub esp, 0x8
        lea ecx, [esp + 0x20]
        fstp qword ptr [esp]
        push ecx
        call ext_006647A0
        add esp, 0xc
        mov ecx, eax
        mov byte ptr [esp + 0x3c], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F8]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x3c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006B4440
        push ecx
        lea edx, [esp + 0xc]
        mov ecx, esp
        mov dword ptr [esp + 0x48], esp
        push edx
        mov edi, eax
        call dword ptr [mem_00924494]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x44]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x3c], 0x2
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x5c]
        call ext_006A5F50
        lea ecx, [esp + 0x44]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x38
        ret 0x4
    }
}

// [0x00448C90] sub_00448C90 (312 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00448BF0();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6DE0();
extern "C" void ext_006B4440();
extern "C" int mem_00924300;
extern "C" int mem_00925220;
extern "C" int mem_00924FF0;
extern "C" int mem_009242F8;
extern "C" int mem_00924FF4;
extern "C" int mem_00924494;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00448C90(void* self, int edx_unused, bool negate) {
    __asm {
        push -1
        push 0x87c93b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc8]
        push edi
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, eax
        call edx
        push 0xa
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x40], 0
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_00925220]
        mov edi, eax
        mov dword ptr [esp + 0x18], edi
        fild dword ptr [esp + 0x18]
        add esp, 0x4
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00448BF0
        call ext_006A6DE0
        test eax, eax
        jne L_nonzero_00448C90
        mov eax, 0x1
    L_nonzero_00448C90:
        cmp byte ptr [esp + 0x40], 0
        je L_noneg_00448C90
        neg eax
    L_noneg_00448C90:
        add edi, eax
        lea ecx, [esp + 0x14]
        push edi
        push ecx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov byte ptr [esp + 0x38], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F8]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x38], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006B4440
        push ecx
        lea edx, [esp + 0xc]
        mov ecx, esp
        mov dword ptr [esp + 0x44], esp
        push edx
        mov edi, eax
        call dword ptr [mem_00924494]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x38], 0x2
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x5c]
        call ext_006A5F50
        lea ecx, [esp + 0x40]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x34
        ret 0x4
    }
}

// [0x0044C130] sub_0044C130 (42 bytes)
extern "C" void ext_00530C40();
extern "C" int mem_009256E0;
extern "C" __declspec(naked) void __fastcall fn_0044C130(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0x0
        mov byte ptr [ecx + 0x77], 0x0
        je skip_call
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [ecx + 0x68]
        push edx
        push eax
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_00530C40
skip_call:
        call dword ptr [mem_009256E0]
        ret 0xc
    }
}

// [0x0044C160] sub_0044C160 (43 bytes)
extern "C" void ext_0044C0F0();
extern "C" void ext_0044C130();
extern "C" __declspec(naked) void __fastcall fn_0044C160(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0Ch]
        push ebp
        mov ebp, dword ptr [esp + 0Ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 1Ch]
        push edi
        push ebx
        push ebp
        mov esi, ecx
        call ext_0044C0F0
        push edi
        push ebx
        push ebp
        mov ecx, esi
        call ext_0044C130
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0Ch
    }
}
