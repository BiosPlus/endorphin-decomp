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

extern "C" void ext_004543F0(); extern "C" void ext_00454560(); extern "C" void ext_004545D0(); extern "C" void ext_00454BE0(); extern "C" void ext_00455F10(); extern "C" void ext_0045BBF0(); extern "C" void ext_00468180(); extern "C" void ext_00468F30(); extern "C" void ext_0059AE20(); extern "C" void ext_006A60B8(); extern "C" int mem_0093A0C4; extern "C" int mem_0093A0CC; extern "C" int mem_0093A0D8; extern "C" int mem_0093A0D4; extern "C" int mem_0093A0E0; extern "C" int mem_0093A0DC;
extern "C" int mem_0087BFB4; extern "C" int mem_009328B8; extern "C" int mem_009328CC; extern "C" int mem_009328D4; extern "C" int mem_009328DC; extern "C" int mem_0093293C; extern "C" int mem_00932928; extern "C" int mem_00932920; extern "C" int mem_00932918; extern "C" int mem_00932908;
// [0x00447290] sub_00447290 (308 bytes)
extern "C" __declspec(naked) void __fastcall fn_00447290(void* self) {
    __asm {
        push -1
        push offset mem_0087BFB4
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov [esp+0x10], esi
        call ext_004545D0
        mov dword ptr [esi+0x144], offset mem_009328B8
        mov dword ptr [esi+0x148], offset mem_009328CC
        mov dword ptr [esi+0x14c], offset mem_009328D4
        lea edi, [esi+0x144]
        lea ebp, [esi+0x148]
        mov dword ptr [esi+0x150], offset mem_009328DC
        lea ebx, [esi+0x14c]
        lea ecx, [esi+0x154]
        mov dword ptr [esp+0x1c], 0
        mov dword ptr [esi], offset mem_0093293C
        mov dword ptr [edi], offset mem_00932928
        mov dword ptr [ebp], offset mem_00932920
        mov dword ptr [ebx], offset mem_00932918
        mov dword ptr [esi+0x150], offset mem_00932908
        call ext_006A60B8
        lea ecx, [esi+0x15c]
        mov byte ptr [esp+0x1c], 1
        call ext_0045BBF0
        mov byte ptr [esp+0x1c], 2
        mov byte ptr [esi+0x1b8], 1
        call ext_00594000
        mov ecx, [eax+0x2dc]
        push edi
        call ext_004543F0
        push ebp
        call ext_00468180
        mov ecx, eax
        call ext_00468F30
        push ebx
        call ext_00594000
        mov ecx, eax
        call ext_0059AE20
        mov eax, [mem_0093A0C4]
        push eax
        mov ecx, esi
        call ext_00455F10
        mov ecx, [mem_0093A0CC]
        push ecx
        mov ecx, esi
        call ext_00454BE0
        mov edx, [mem_0093A0C4]
        mov eax, [mem_0093A0D8]
        mov ecx, [mem_0093A0D4]
        push edx
        mov edx, [mem_0093A0E0]
        push eax
        mov eax, [mem_0093A0DC]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_00454560
        mov ecx, [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00447680] sub_00447680 (329 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A6220();

extern "C" __declspec(naked) void* __fastcall fn_00447680(void* self) {
    __asm {
        push -1
        push 0x87c2d6
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x34
        push 0
        mov esi, ecx
        push 0x209
        mov dword ptr [esp + 0x14], esi
        call ext_006A6220
        lea edi, [esi + 0x8c]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x932c8c
        mov dword ptr [esi + 0x88], 0
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xe0]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 1
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x134]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x188]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 3
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x1dc]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 4
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x230]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x284]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x2d8]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 7
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x32c]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 8
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x380]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 9
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x9287e4
        mov byte ptr [esi + 0x3d4], 0
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00441060();
extern "C" void ext_00441090();

// [0x00441AC0] sub_00441AC0 (331 bytes)
extern "C" __declspec(naked) void __fastcall fn_00441AC0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        call ext_00441020
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x48]
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esp + 0x18]
        fistp dword ptr [esp + 0xc]
        call ext_00441040
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x48]
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esp + 0x18]
        fistp dword ptr [esp + 0x10]
        call ext_00441060
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x48]
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esp + 0x18]
        fistp dword ptr [esp + 0x14]
        call ext_00441090
        mov dword ptr [esp + 0x18], eax
        fild dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x48]
        fsub qword ptr [eax + 0x110]
        fmul qword ptr [eax + 0x120]
        fadd qword ptr [eax + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x20]
        fld qword ptr [esp + 0x20]
        fistp dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx + 0x48]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, dword ptr [esp + 0xc]
        cmp edx, ecx
        mov eax, dword ptr [ebp + 0x8]
        mov ebx, dword ptr [eax + 0x8]
        mov esi, edx
        jg short loc_441bb7
        mov esi, ecx
    loc_441bb7:
        mov edi, dword ptr [esp + 0x10]
        add dword ptr [eax + 0x4], 1
        cmp ebx, edi
        mov dword ptr [eax], esi
        mov esi, ebx
        jl short loc_441bc9
        mov esi, edi
    loc_441bc9:
        add dword ptr [eax + 0xc], -1
        cmp edx, ecx
        mov dword ptr [eax + 0x8], esi
        mov esi, edx
        jg short loc_441bd8
        mov esi, ecx
    loc_441bd8:
        mov dword ptr [eax + 0x10], esi
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ecx
        mov dword ptr [eax + 0x14], edi
        jg short loc_441be8
        mov esi, ecx
    loc_441be8:
        cmp edx, ecx
        mov dword ptr [eax + 0x18], esi
        mov esi, dword ptr [esp + 0x18]
        setl cl
        cmp edi, ebx
        pop edi
        mov dword ptr [eax + 0x1c], esi
        setg dl
        pop esi
        mov byte ptr [eax + 0x20], cl
        mov byte ptr [eax + 0x21], dl
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00443AE0] sub_00443AE0 (331 bytes)
extern "C" void ext_00412CC0();
extern "C" void ext_00412EC0();
extern "C" void ext_0043B400();
extern "C" void ext_0043D620();
extern "C" void ext_004407B0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00443AE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        push edi
        add eax, 0xc
        push eax
        xor ebp, ebp
        call ext_0043D620
        mov ecx, dword ptr [esi + 8]
        mov edi, eax
        lea eax, [esp + 0x1c]
        push eax
        call ext_0043D620
        test edi, edi
        mov ebx, eax
        je L_443C1F
        test ebx, ebx
        je L_443C1F
        cmp edi, ebx
        jne L_443C1F
        mov eax, dword ptr [esi + 4]
        add eax, 0xc
        push eax
        mov ecx, edi
        call ext_00412EC0
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebx
        mov edi, eax
        call ext_00412EC0
        test edi, edi
        je L_443C1F
        test eax, eax
        je L_443C1F
        cmp edi, eax
        je L_443C1F
        mov ecx, eax
        call ext_0043B400
        mov ecx, edi
        mov ebx, eax
        call ext_0043B400
        sub ebx, eax
        je L_443C13
        lea ebp, [esi + 0xc]
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        jbe short L_443B80
        call dword ptr [mem_00925134]
    L_443B80:
        mov edi, esi
    L_443B82:
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        mov dword ptr [esp + 0x14], edi
        jbe short L_443B94
        call dword ptr [mem_00925134]
    L_443B94:
        cmp ebp, ebp
        je short L_443B9E
        call dword ptr [mem_00925134]
    L_443B9E:
        cmp edi, esi
        je short L_443C13
        cmp edi, dword ptr [ebp + 8]
        jb short L_443BAD
        call dword ptr [mem_00925134]
    L_443BAD:
        mov esi, dword ptr [edi]
        cmp byte ptr [esi + 0x8f], 0
        je short L_443C00
        mov ecx, esi
        call ext_004407B0
        mov esi, dword ptr [esi + 0x44]
        mov edi, eax
        test edi, edi
        je short L_443BFC
        test esi, esi
        je short L_443BFC
        mov ecx, esi
        call ext_0043B400
        mov esi, eax
        add esi, ebx
        jns short L_443BDD
        sub ebx, esi
        jmp short L_443BFC
    L_443BDD:
        mov ecx, edi
        call ext_00412CC0
        sub eax, 1
        cmp esi, eax
        jle short L_443BFC
        mov ecx, edi
        call ext_00412CC0
        or edx, -1
        sub edx, esi
        add edx, ebx
        lea ebx, [edx + eax]
    L_443BFC:
        mov edi, dword ptr [esp + 0x14]
    L_443C00:
        cmp edi, dword ptr [ebp + 8]
        jb short L_443C0B
        call dword ptr [mem_00925134]
    L_443C0B:
        add edi, 4
        jmp L_443B82
    L_443C13:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 8
    L_443C1F:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 8
    }
}

// [0x00448A10] sub_00448A10 (345 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();
extern "C" int mem_00925650;
extern "C" int mem_00B5D200;
extern "C" int mem_00925694;
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_0092449C;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) int __fastcall fn_00448A10(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87c90b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push edi
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0xc8]
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [edi + 0x20]
        mov ebp, dword ptr [mem_00925694]
        push -1
        push eax
        push ecx
        push edx
        call ebp
        mov eax, dword ptr [esi + 0xcc]
        test eax, eax
        je done
        mov eax, dword ptr [eax + 0x19c]
        cmp eax, dword ptr [esi + 0xec]
        jne done
        push ebx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x10]
        lea edi, [esi + 0x5c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x24], 0
        call ext_006A5F4A
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x20], 1
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x14]
        setne bl
        mov byte ptr [esp + 0x20], 0
        call dword ptr [mem_009242F4]
        test bl, bl
        pop ebx
        je skip
        mov ecx, dword ptr [esi + 0xc8]
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x1c], 2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, edi
        call ext_006A5F50
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [edi + 0x20]
        push -1
        push 0
        push 0xb1
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x20]
        push 0
        push 0
        push 0xb7
        push ecx
        call ebp
    skip:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
    done:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 8
    }
}

// [0x00449D30] sub_00449D30 (387 bytes)
extern "C" void ext_006629B0();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A608E();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;
extern "C" int mem_009244D4;

extern "C" __declspec(naked) void __fastcall fn_00449D30(void* self) {
    __asm {
        push -0x1
        push 0x87ce7b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x204
        push esi
        push edi
        push 0xad7a88
        lea eax, [esp + 0x10]
        push 0xb59374
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push 0
        push esi
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x21c], 0
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1004
        push 0
        mov ecx, 0xb59208
        call dword ptr [mem_00924FF0]
        push eax
        push 1
        lea ecx, [esp + 0x60]
        call ext_006A5F68
        push 1
        mov ecx, esi
        mov byte ptr [esp + 0x218], 1
        call ext_006A608E
        lea edi, [esi + 0x78]
        mov ecx, edi
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0xb8]
        mov dword ptr [ecx + 0x2c], eax
        lea ecx, [esp + 0x44]
        call ext_006A5F62
        cmp eax, 1
        jne loc_449E76
        push ebx
        lea edx, [esp + 0xc]
        push edx
        lea ecx, [esp + 0x4c]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x218], 2
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE4]
        push eax
        mov byte ptr [esp + 0x21c], 3
        call ext_006629B0
        add esp, 4
        lea ecx, [esp + 0x2c]
        mov bl, al
        mov byte ptr [esp + 0x218], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x218], 1
        call dword ptr [mem_009242F4]
        test bl, bl
        pop ebx
        je loc_449E76
        lea eax, [esp + 8]
        push eax
        lea ecx, [esp + 0x48]
        call ext_006A5F5C
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x218], 4
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x214], 1
        call dword ptr [mem_009242F4]
        push 0
        mov ecx, esi
        call ext_006A608E

loc_449E76:
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x214], 0
        call ext_006A5F56
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x214], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x210
        ret
    }
}

// [0x0044F9D0] sub_0044F9D0 (409 bytes)
extern "C" void ext_0040F0B0();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" void ext_006A5FFE();
extern "C" int mem_00924FE4;
extern "C" int mem_0093A0C4;
extern "C" int mem_0092407C;
extern "C" int mem_0093A0C8;

extern "C" __declspec(naked) void __fastcall fn_0044F9D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x87dfbe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x4d8
        mov dword ptr [esp+0x18], esi
        call ext_006A5FC2
        mov ecx, dword ptr [esp+0x24]
        mov dword ptr [esi+0x74], ecx
        xor ebp, ebp
        push 0x928b5d
        lea ecx, [esi+0x78]
        mov dword ptr [esp+0x20], ebp
        mov dword ptr [esi], 0x9357cc
        call dword ptr [mem_00924FE4]
        push 0x928b5d
        lea ecx, [esi+0x94]
        mov byte ptr [esp+0x20], 0x1
        call dword ptr [mem_00924FE4]
        push 0x928b5d
        lea ecx, [esi+0xb0]
        mov byte ptr [esp+0x20], 0x2
        call dword ptr [mem_00924FE4]
        lea edi, [esi+0xd4]
        mov ecx, edi
        mov byte ptr [esp+0x1c], 0x3
        mov dword ptr [esi+0xcc], ebp
        mov dword ptr [esi+0xd0], ebp
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi+0x128]
        mov ecx, edi
        mov byte ptr [esp+0x1c], 0x4
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi+0x17c]
        mov ecx, edi
        mov byte ptr [esp+0x1c], 0x5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi+0x1d0]
        mov ecx, edi
        mov byte ptr [esp+0x1c], 0x6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi+0x224]
        mov ecx, edi
        mov byte ptr [esp+0x1c], 0x7
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi+0x278]
        mov ecx, edi
        mov byte ptr [esp+0x1c], 0x8
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea ecx, [esi+0x2cc]
        mov byte ptr [esp+0x1c], 0x9
        call ext_0040F0B0
        lea ecx, [esi+0x340]
        mov byte ptr [esp+0x1c], 0xa
        call ext_0040F0B0
        lea edi, [esi+0x3b4]
        mov dword ptr [edi+0x4], ebp
        mov dword ptr [edi], 0x92a254
        lea ebx, [esi+0x3bc]
        mov dword ptr [ebx+0x4], ebp
        mov dword ptr [ebx], 0x92a254
        mov edx, dword ptr [mem_0093A0C4]
        mov ebp, dword ptr [mem_0092407C]
        push edx
        mov byte ptr [esp+0x20], 0xd
        call ebp
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov eax, dword ptr [mem_0093A0C8]
        push eax
        call ebp
        push eax
        mov ecx, ebx
        call ext_006A5FFE
        mov ecx, dword ptr [esp+0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0044A900] sub_0044A900 (410 bytes)
extern "C" void ext_0044A380();
extern "C" void ext_00493D90();
extern "C" void ext_00664840();
extern "C" void ext_0066A310();
extern "C" void ext_006A5F50();
extern "C" int mem_00925694;
extern "C" int mem_00924FE0;
extern "C" double mem_0092C518;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044A900(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x0087CF1A
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xe0], 0
        je done
        mov eax, dword ptr [esi + 0xa8]
        push 0
        push 0
        push 0x188
        push eax
        call dword ptr [mem_00925694]
        lea ecx, [8*eax]
        sub ecx, eax
        lea edx, [8*ecx + 0x00AD0F34]
        push edx
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x5c], 0
        call ext_0066A310
        mov ecx, dword ptr [esi + 0xe0]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xcc]
        lea edx, [esp + 0xc]
        push edx
        lea edx, [esp + 0x20]
        push edx
        mov byte ptr [esp + 0x64], 1
        call eax
        fld dword ptr [esp + 0x14]
        fld qword ptr [mem_0092C518]
        xor edx, edx
        fnstcw word ptr [esp + 6]
        movzx eax, word ptr [esp + 6]
        fmul st(1), st
        or eax, 0xc00
        fxch st(1)
        mov dword ptr [esp + 8], eax
        fldcw word ptr [esp + 8]
        fistp dword ptr [esp + 8]
        movzx ecx, byte ptr [esp + 8]
        mov dh, cl
        fldcw word ptr [esp + 6]
        fld dword ptr [esp + 0x10]
        fnstcw word ptr [esp + 6]
        fmul st, st(1)
        movzx eax, word ptr [esp + 6]
        or eax, 0xc00
        mov dword ptr [esp + 8], eax
        fldcw word ptr [esp + 8]
        fistp dword ptr [esp + 8]
        mov al, byte ptr [esp + 8]
        mov dl, al
        fldcw word ptr [esp + 6]
        shl edx, 8
        fmul dword ptr [esp + 0xc]
        fnstcw word ptr [esp + 6]
        movzx eax, word ptr [esp + 6]
        or eax, 0xc00
        mov dword ptr [esp + 8], eax
        fldcw word ptr [esp + 8]
        fistp dword ptr [esp + 8]
        movzx ecx, byte ptr [esp + 8]
        movzx eax, cl
        fldcw word ptr [esp + 6]
        lea ecx, [esp + 0xc]
        or edx, eax
        push ecx
        lea ecx, [esi + 0x19c]
        mov dword ptr [esi + 0xf0], edx
        call ext_0044A380
        fld dword ptr [esp + 0x18]
        push ecx
        lea edx, [esp + 0x3c]
        fstp dword ptr [esp]
        push edx
        call ext_00664840
        add esp, 8
        mov ecx, eax
        mov byte ptr [esp + 0x5c], 2
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xf4]
        call ext_006A5F50
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x5c], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x5c], 0
        call ext_00493D90
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call dword ptr [mem_00924FF4]
    done:
        mov ecx, dword ptr [esp + 0x54]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret
    }
}

// [0x0044AF00] sub_0044AF00 (38 bytes)
extern "C" void ext_0044A900();
extern "C" int mem_00925694;

extern "C" void __fastcall fn_0044AF00(void* self) {
    ext_0044A900();
    unsigned char* p = (unsigned char*)self;
    int hwnd = *(int*)(p + 0xa8);
    int r = ((int (__stdcall*)(int, unsigned int, unsigned int, int))mem_00925694)(hwnd, 0x188, 0, 0);
    *(int*)(p + 0xdc) = r;
}

// [0x0044A630] sub_0044A630 (463 bytes)
extern "C" void ext_0041D830();
extern "C" void ext_0041D850();
extern "C" void ext_0041D860();
extern "C" void ext_0041D870();
extern "C" void ext_0041D880();
extern "C" void ext_00503A00();
extern "C" void ext_0052ADA0();
extern "C" void ext_0066A180();
extern "C" int mem_00AED9D0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925688;
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_0044A630(void* self) {
    __asm {
        push    -1
        push    0x8aee4d
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [mem_00AED9D0]
        mov     esi, ecx
        push    0x92f9c8
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x50], 0
        call    ext_0052ADA0
        mov     ecx, eax
        call    ext_0066A180
        mov     ecx, dword ptr [esi + 0xec]
        push    eax
        call    ext_0041D830
        or      ebx, -1
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x4c], ebx
        call    dword ptr [mem_00924FF4]
        push    0x92f9bc
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x50], 1
        call    ext_0052ADA0
        mov     ecx, eax
        call    ext_0066A180
        mov     ecx, dword ptr [esi + 0xec]
        push    eax
        call    ext_0041D860
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x4c], ebx
        call    dword ptr [mem_00924FF4]
        push    0x92f9ac
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x50], 2
        call    ext_0052ADA0
        mov     ecx, eax
        call    ext_0066A180
        mov     ecx, dword ptr [esi + 0xec]
        push    eax
        call    ext_0041D850
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x4c], ebx
        call    dword ptr [mem_00924FF4]
        push    0x92f994
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x50], 3
        call    ext_0052ADA0
        mov     ecx, eax
        call    ext_0066A180
        mov     ecx, dword ptr [esi + 0xec]
        push    eax
        call    ext_0041D870
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x4c], ebx
        call    dword ptr [mem_00924FF4]
        push    0x92f980
        lea     ecx, [esp + 0x2c]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x4c], 4
        push    ecx
        mov     ecx, edi
        call    ext_0052ADA0
        mov     ecx, eax
        call    ext_0066A180
        mov     ecx, dword ptr [esi + 0xec]
        push    eax
        call    ext_0041D880
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x4c], ebx
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esi + 0xec]
        call    ext_00503A00
        test    eax, eax
        je      L_done
        cmp     dword ptr [eax + 0x20], 0
        je      L_done
        mov     ecx, dword ptr [esi + 0xec]
        call    ext_00503A00
        mov     edx, dword ptr [eax + 0x20]
        push    1
        push    0
        push    edx
        call    dword ptr [mem_00925688]
        mov     ecx, dword ptr [esi + 0xec]
        call    ext_00503A00
        mov     eax, dword ptr [eax + 0x20]
        push    eax
        call    dword ptr [mem_0092568C]
    L_done:
        mov     ecx, dword ptr [esp + 0x44]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}

// [0x0044AAA0] sub_0044AAA0 (225 bytes)
extern "C" void ext_00444660();
extern "C" void ext_0044A2D0();
extern "C" void ext_0044A380();
extern "C" void ext_0044A630();
extern "C" int mem_00925688;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0044AAA0(void* self) {
    __asm {
        push -1
        push 8B56F9h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 2Ch
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0A8h]
        push 188h
        push eax
        call dword ptr [mem_00925694]
        lea ecx, [eax*8]
        sub ecx, eax
        lea edx, [ecx*8 + 0AD0F34h]
        push edx
        lea ecx, [esp + 18h]
        call dword ptr [mem_00924FE0]
        fldz
        fst dword ptr [esp + 10h]
        lea eax, [esp + 4]
        fst dword ptr [esp + 0Ch]
        push eax
        fst dword ptr [esp + 0Ch]
        mov ecx, esi
        fstp dword ptr [esp + 8]
        mov dword ptr [esp + 3Ch], 0
        call ext_0044A2D0
        lea ecx, [esp + 4]
        push ecx
        lea ecx, [esi + 19Ch]
        call ext_0044A380
        mov ecx, dword ptr [esi + 0E0h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 34h]
        lea eax, [esp + 4]
        push eax
        lea eax, [esp + 18h]
        push eax
        call edx
        mov eax, dword ptr [esi + 0E4h]
        mov eax, dword ptr [eax + 20h]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi + 0E8h]
        call ext_00444660
        mov ecx, esi
        call ext_0044A630
        lea ecx, [esp + 14h]
        mov dword ptr [esp + 38h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 30h]
        pop esi
        mov fs:[0], ecx
        add esp, 38h
        ret
    }
}

// [0x0044ABD0] sub_0044ABD0 (270 bytes)
extern "C" void ext_0044AAA0();
extern "C" void ext_00664840();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" int mem_00925694;
extern "C" double mem_0092C518;
extern "C" int mem_009242FC;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0044ABD0(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push -1
        push 087cf42h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        mov eax, dword ptr [esp + 30h]
        push ebp
        push esi
        push edi
        push 0
        push 0
        mov ebp, ecx
        mov ecx, dword ptr [eax + 20h]
        push 400h
        push ecx
        call dword ptr [mem_00925694]
        mov dword ptr [esp + 0ch], eax
        fild dword ptr [esp + 0ch]
        lea ecx, [esp + 3ch]
        fdiv qword ptr [mem_0092C518]
        fstp dword ptr [esp + 0ch]
        call dword ptr [mem_009242FC]
        mov edi, dword ptr [esp + 40h]
        lea edx, [esp + 3ch]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 38h], 0
        call ext_006A5F4A
        fld dword ptr [esp + 0ch]
        push ecx
        lea eax, [esp + 14h]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 8
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 34h], 1
        call dword ptr [mem_00924FF0]
        lea ecx, [esp + 3ch]
        mov esi, eax
        call dword ptr [mem_00924300]
    cmp_loop_0044ABD0:
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [esi]
        jne cmp_diff_0044ABD0
        test cl, cl
        je cmp_eq_0044ABD0
        mov cl, byte ptr [eax + 1]
        cmp cl, byte ptr [esi + 1]
        jne cmp_diff_0044ABD0
        add eax, 2
        add esi, 2
        test cl, cl
        jne cmp_loop_0044ABD0
    cmp_eq_0044ABD0:
        xor eax, eax
        jmp cmp_done_0044ABD0
    cmp_diff_0044ABD0:
        sbb eax, eax
        sbb eax, -1
    cmp_done_0044ABD0:
        test eax, eax
        je skip_sub_0044ABD0
        lea ecx, [esp + 10h]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006A5F50
    skip_sub_0044ABD0:
        cmp dword ptr [esp + 44h], 8
        jne skip_call_0044ABD0
        mov ecx, ebp
        call ext_0044AAA0
    skip_call_0044ABD0:
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 34h], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 3ch]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 2ch]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 2ch
        ret 0ch
    }
}

// [0x0044ACE0] sub_0044ACE0 (66 bytes)
extern "C" void* __cdecl ext_006A6E9E(void* p, int vf_delta, void* src_type, void* target_type, int is_reference);
extern "C" void __fastcall fn_0044ABD0(void* self, int edx_unused, void* a1, int a2, int a3);
extern "C" __declspec(naked) void __fastcall fn_0044ACE0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        push 0
        push 0xa2ff24
        push 0xa2ffb8
        mov esi, ecx
        push 0
        push eax
        lea edi, [esi + 0x148]
        call ext_006A6E9E
        add esp, 0x14
        cmp edi, eax
        jne done
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        lea edx, [esi + 0xf4]
        push edx
        push edi
        mov ecx, esi
        call fn_0044ABD0
    done:
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0044AD30] sub_0044AD30 (321 bytes)
extern "C" void ext_0044A2D0();
extern "C" void ext_0044AAA0();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A665E();
extern "C" void ext_006A666A();

extern "C" __declspec(naked) void __fastcall fn_0044AD30(void* self) {
    __asm {
        push -1
        push 0x87cf5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xb0
        fldz
        push esi
        fst dword ptr [esp + 0x14]
        lea eax, [esp + 0xc]
        fst dword ptr [esp + 0x10]
        push eax
        fstp dword ptr [esp + 0x10]
        mov esi, ecx
        call ext_0044A2D0
        push 0
        push 0
        push 0
        lea ecx, [esp + 0x28]
        call ext_006A665E
        mov dword ptr [esp + 0x1c], 0x93412c
        fld dword ptr [esp + 0x14]
        fld qword ptr [mem_0092C518]
        xor edx, edx
        fnstcw word ptr [esp + 0x6]
        or dword ptr [esp + 0xa4], 3
        movzx eax, word ptr [esp + 0x6]
        fmul st(1), st
        or eax, 0xc00
        fxch st(1)
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0xbc], 0
        fldcw word ptr [esp + 0x8]
        fistp dword ptr [esp + 0x8]
        movzx ecx, byte ptr [esp + 0x8]
        mov dh, cl
        fldcw word ptr [esp + 0x6]
        fld dword ptr [esp + 0x10]
        fnstcw word ptr [esp + 0x6]
        fmul st, st(1)
        movzx eax, word ptr [esp + 0x6]
        or eax, 0xc00
        mov dword ptr [esp + 0x8], eax
        fldcw word ptr [esp + 0x8]
        fistp dword ptr [esp + 0x8]
        mov al, byte ptr [esp + 0x8]
        mov dl, al
        fldcw word ptr [esp + 0x6]
        shl edx, 8
        fmul dword ptr [esp + 0xc]
        fnstcw word ptr [esp + 0x6]
        movzx eax, word ptr [esp + 0x6]
        or eax, 0xc00
        mov dword ptr [esp + 0x8], eax
        fldcw word ptr [esp + 0x8]
        fistp dword ptr [esp + 0x8]
        movzx ecx, byte ptr [esp + 0x8]
        movzx eax, cl
        fldcw word ptr [esp + 0x6]
        or edx, eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x9c], edx
        call ext_006A666A
        cmp eax, 1
        jne skip_store
        mov ecx, dword ptr [esp + 0x9c]
        mov dword ptr [esi + 0xf0], ecx
        mov ecx, esi
        call ext_0044AAA0
    skip_store:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xbc], 0xffffffff
        call ext_006A5F6E
        mov ecx, dword ptr [esp + 0xb4]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xbc
        ret
    }
}

// [0x004478C0] sub_004478C0 (524 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_00925694;
extern "C" int mem_009251F0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004478C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x877289
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x3d4], 0
        je L_end_4478C0
        push edi
        lea ecx, [esp + 8]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 8]
        push eax
        lea ecx, [esi + 0x8c]
        mov dword ptr [esp + 0x1c], 0
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        mov edi, dword ptr [mem_009251E4]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        add esp, 4
        push eax
        mov eax, dword ptr [edx + 0x54]
        call eax
        lea ecx, [esp + 8]
        push ecx
        lea ecx, [esi + 0xe0]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        add esp, 4
        push eax
        mov eax, dword ptr [edx + 0x58]
        call eax
        lea ecx, [esp + 8]
        push ecx
        lea ecx, [esi + 0x134]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        add esp, 4
        push eax
        mov eax, dword ptr [edx + 0x5c]
        call eax
        lea ecx, [esp + 8]
        push ecx
        lea ecx, [esi + 0x188]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        add esp, 4
        push eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        mov ecx, dword ptr [esi + 0x1fc]
        push 0
        push 0
        push 0xf0
        push ecx
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x64]
        cmp eax, 1
        sete al
        push eax
        call edx
        lea eax, [esp + 8]
        push eax
        lea ecx, [esi + 0x230]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x88]
        fld dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx]
        fstp dword ptr [esp]
        mov eax, dword ptr [edx + 0x68]
        call eax
        lea ecx, [esp + 8]
        push ecx
        lea ecx, [esi + 0x32c]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x88]
        fld dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx]
        fstp dword ptr [esp]
        mov eax, dword ptr [edx + 0x6c]
        call eax
        lea ecx, [esp + 8]
        push ecx
        lea ecx, [esi + 0x284]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        add esp, 4
        push eax
        mov eax, dword ptr [edx + 0x70]
        call eax
        lea ecx, [esp + 8]
        push ecx
        lea ecx, [esi + 0x2d8]
        call ext_006A5F4A
        lea ecx, [esp + 8]
        call dword ptr [mem_00924300]
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x88]
        mov edx, dword ptr [ecx]
        add esp, 4
        push eax
        mov eax, dword ptr [edx + 0x74]
        call eax
        lea ecx, [esp + 8]
        call dword ptr [mem_009242F4]
        pop edi
    L_end_4478C0:
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0044C190] sub_0044C190 (32 bytes)
extern "C" void ext_005317D0();
extern "C" __declspec(naked) void __fastcall fn_0044C190(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0
        je skip_0044C190
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [ecx + 0x68]
        push edx
        push eax
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_005317D0
skip_0044C190:
        ret 0xc
    }
}

// [0x0044C070] sub_0044C070 (42 bytes)
extern "C" void ext_00531400();
extern "C" int mem_009256E0;
extern "C" __declspec(naked) void __fastcall fn_0044C070(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x64], 0x0
        mov byte ptr [ecx + 0x76], 0x0
        je skip_call
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [ecx + 0x68]
        push edx
        push eax
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_00531400
skip_call:
        call dword ptr [mem_009256E0]
        ret 0xc
    }
}

// [0x0044F780] sub_0044F780 (578 bytes)
extern "C" void ext_0044F740();
extern "C" void ext_006A5E72();
extern "C" void ext_006A60D0();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0044F780(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xd14]
        push 0x130b
        push eax
        call edi
        mov ecx, dword ptr [esi + 0xd14]
        push 0
        push 0
        push 0x130b
        test eax, eax
        push ecx
        sete bl
        call edi
        cmp eax, 1
        sete al
        neg bl
        mov byte ptr [esp + 0x13], al
        push 5
        lea ecx, [esi + 0xcf4]
        sbb ebx, ebx
        and ebx, 5
        neg al
        mov ebp, ebx
        sbb eax, eax
        and eax, 5
        mov edi, eax
        call ext_006A5E72
        push 5
        lea ecx, [esi + 0xac]
        call ext_006A5E72
        push ebp
        lea ecx, [esi + 0x100]
        call ext_006A5E72
        lea ebx, [esi + 0x598]
        push ebp
        mov ecx, ebx
        call ext_006A5E72
        push ebp
        lea ecx, [esi + 0x154]
        call ext_006A5E72
        push ebp
        lea ecx, [esi + 0x5fc]
        call ext_006A5E72
        push ebp
        lea ecx, [esi + 0x660]
        call ext_006A5E72
        push ebp
        lea ecx, [esi + 0x6d4]
        call ext_006A5E72
        test ebp, ebp
        je L_44F84E
        mov ecx, esi
        call ext_0044F740
        test al, al
        je L_44F84E
        mov eax, 1
        jmp L_44F850
    L_44F84E:
        xor eax, eax
    L_44F850:
        push eax
        lea ecx, [esi + 0xc80]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x1a8]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x1fc]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x250]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x2a4]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x2f8]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x34c]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x3a0]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x3f4]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x448]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x49c]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x4f0]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x544]
        call ext_006A5E72
        lea ecx, [esi + 0x748]
        push edi
        mov dword ptr [esp + 0x18], ecx
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x79c]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x810]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x884]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x8f8]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x96c]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0x9c0]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xa14]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xa68]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xabc]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xb10]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xb64]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xbb8]
        call ext_006A5E72
        push edi
        lea ecx, [esi + 0xc0c]
        call ext_006A5E72
        pop edi
        pop esi
        test ebp, ebp
        pop ebp
        je L_44F9AA
        mov ecx, ebx
        pop ebx
        add esp, 8
        jmp ext_006A60D0
    L_44F9AA:
        cmp byte ptr [esp + 7], 0
        pop ebx
        je L_44F9BE
        mov ecx, dword ptr [esp + 4]
        add esp, 8
        jmp ext_006A60D0
    L_44F9BE:
        add esp, 8
        ret
    }
}

// [0x0044DD70] sub_0044DD70 (680 bytes)
extern "C" void ext_006A5C68();
extern "C" void ext_006A5EC6();
extern "C" void ext_006A60E8();
extern "C" void ext_006A61B4();
extern "C" void ext_006A61BA();
extern "C" void ext_006A6C99();
extern "C" void ext_006A6D5C();
extern "C" void ext_006A6DE0();
extern "C" int mem_00925694;
extern "C" int mem_009242F4;
extern "C" int mem_009242FC;
extern "C" int mem_009242F8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924930;
extern "C" int mem_0092431C;
extern "C" int mem_0092492C;
extern "C" int mem_009244D4;
extern "C" int mem_009244EC;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009357B0;

extern "C" __declspec(naked) void __fastcall fn_0044DD70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x87debe
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push ebx
        push ebp
        push esi
        push edi
        push ecx
        lea ecx, [esp + 0x3c]
        call ext_006A61BA
        mov ebx, dword ptr [esp + 0x5c]
        mov eax, dword ptr [ebx + 0x20]
        mov edi, dword ptr [mem_00925694]
        xor ebp, ebp
        push ebp
        push ebp
        push 0x31
        push eax
        mov dword ptr [esp + 0x64], ebp
        call edi
        push eax
        call ext_006A5C68
        push eax
        lea ecx, [esp + 0x3c]
        call ext_006A5EC6
        mov ecx, dword ptr [mem_009242F4]
        mov edx, dword ptr [mem_009242FC]
        push ecx
        push edx
        push 2
        push 4
        lea eax, [esp + 0x30]
        push eax
        call ext_006A6C99
        mov ecx, dword ptr [ebx + 0x20]
        push ebp
        push ebp
        push 0x18b
        xor esi, esi
        push ecx
        mov byte ptr [esp + 0x64], 1
        mov dword ptr [esp + 0x38], esi
        mov dword ptr [esp + 0x3c], ebp
        mov dword ptr [esp + 0x20], ebp
        call edi
        test eax, eax
        jle L_44DF8F
        jmp L_44DE10
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_44DE10:
        lea esi, [esp + 0x20]
        mov edi, 2
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_44DE20:
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_009242F8]
        add esi, 4
        sub edi, 1
        jne L_44DE20
        mov eax, dword ptr [esp + 0x10]
        lea edx, [esp + 0x20]
        push edx
        push eax
        mov ecx, ebx
        call ext_006A60E8
        cmp byte ptr [esp + 0x60], 0
        je L_44DF05
        lea ecx, [esp + 0x5c]
        push ecx
        mov ecx, 0xad2868
        mov dword ptr [esp + 0x60], ebp
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924930]
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x20]
        call dword ptr [mem_0092431C]
        add eax, 1
        cmp dword ptr [esp + 0x5c], eax
        je L_44DF05
        lea ecx, [esp + 0x20]
        call dword ptr [mem_0092431C]
        sub eax, dword ptr [esp + 0x5c]
        lea ecx, [esp + 0x20]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call dword ptr [mem_0092492C]
        push eax
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x58], 2
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x54], 1
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x5c]
        add ecx, -1
        push ecx
        lea edx, [esp + 0x20]
        push edx
        lea ecx, [esp + 0x28]
        call dword ptr [mem_009244EC]
        push eax
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x58], 3
        call dword ptr [mem_009244D4]
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x54], 1
        call dword ptr [mem_009242F4]
    L_44DF05:
        xor edi, edi
        jmp L_44DF10
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_44DF10:
        lea ebp, [esp + edi + 0x20]
        mov ecx, ebp
        call dword ptr [mem_00924300]
        lea edx, [eax + 1]
        nop
    L_44DF20:
        mov cl, byte ptr [eax]
        add eax, 1
        test cl, cl
        jne L_44DF20
        sub eax, edx
        mov ecx, ebp
        mov esi, eax
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esp + 0x40]
        lea ecx, [esp + 0x30]
        push ecx
        push esi
        push eax
        push edx
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esp + 0x30]
        cmp eax, dword ptr [esp + edi + 0x28]
        jle L_44DF55
        mov dword ptr [esp + edi + 0x28], eax
    L_44DF55:
        add edi, 4
        cmp edi, 4
        jle L_44DF10
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx + 0x20]
        push 0
        push 0
        push 0x18b
        add esi, 1
        push eax
        mov dword ptr [esp + 0x20], esi
        call dword ptr [mem_00925694]
        xor ebp, ebp
        cmp esi, eax
        jl L_44DE10
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [mem_00925694]
    L_44DF8F:
        cmp byte ptr [esp + 0x60], 0
        mov edx, dword ptr [ebx + 0x20]
        push ebp
        je L_44DFD0
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [ecx + esi + 5]
        push eax
        push 0x194
        push edx
        call edi
        fild dword ptr [esp + 0x28]
        fmul qword ptr [mem_009357B0]
        call ext_006A6DE0
        mov ecx, dword ptr [ebx + 0x20]
        mov dword ptr [esp + 0x60], eax
        lea eax, [esp + 0x60]
        push eax
        push 1
        push 0x192
        push ecx
        jmp L_44DFD7
    L_44DFD0:
        push esi
        push 0x194
        push edx
    L_44DFD7:
        call edi
        mov eax, dword ptr [mem_009242F4]
        push eax
        push 2
        push 4
        lea ecx, [esp + 0x2c]
        push ecx
        mov byte ptr [esp + 0x64], 0
        call ext_006A6D5C
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x54], -1
        call ext_006A61B4
        mov ecx, dword ptr [esp + 0x4c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 8
    }
}

// [0x0044D560] sub_0044D560 (730 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_0040FD00();
extern "C" void ext_00415EF0();
extern "C" void ext_0042EC80();
extern "C" void ext_00495AB0();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A64A2();

extern "C" __declspec(naked) void __fastcall fn_0044D560(void* self) {
    __asm {
        push -1
        push 0x87de37
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x935644
        lea ecx, [esi + 0xd74]
        mov dword ptr [esp + 0x10], 0x27
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0xd6c]
        mov byte ptr [esp + 0x10], 0x26
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0xd64]
        mov byte ptr [esp + 0x10], 0x25
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0xd5c]
        mov byte ptr [esp + 0x10], 0x24
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0xcf4]
        mov byte ptr [esp + 0x10], 0x23
        call ext_00415EF0
        lea ecx, [esi + 0xc80]
        mov byte ptr [esp + 0x10], 0x22
        call ext_0040FD00
        lea ecx, [esi + 0xc0c]
        mov byte ptr [esp + 0x10], 0x21
        call ext_0040EF90
        lea ecx, [esi + 0xbb8]
        mov byte ptr [esp + 0x10], 0x20
        call ext_006A5F38
        lea ecx, [esi + 0xb64]
        mov byte ptr [esp + 0x10], 0x1f
        call ext_006A5F38
        lea ecx, [esi + 0xb10]
        mov byte ptr [esp + 0x10], 0x1e
        call ext_006A5F38
        lea ecx, [esi + 0xabc]
        mov byte ptr [esp + 0x10], 0x1d
        call ext_006A5F38
        lea ecx, [esi + 0xa68]
        mov byte ptr [esp + 0x10], 0x1c
        call ext_006A5F38
        lea ecx, [esi + 0xa14]
        mov byte ptr [esp + 0x10], 0x1b
        call ext_006A5F38
        lea ecx, [esi + 0x9c0]
        mov byte ptr [esp + 0x10], 0x1a
        call ext_006A5F2C
        lea ecx, [esi + 0x96c]
        mov byte ptr [esp + 0x10], 0x19
        call ext_006A64A2
        lea ecx, [esi + 0x8f8]
        mov byte ptr [esp + 0x10], 0x18
        call ext_0040EF90
        lea ecx, [esi + 0x884]
        mov byte ptr [esp + 0x10], 0x17
        call ext_0040EF90
        lea ecx, [esi + 0x810]
        mov byte ptr [esp + 0x10], 0x16
        call ext_0040EF90
        lea ecx, [esi + 0x79c]
        mov byte ptr [esp + 0x10], 0x15
        call ext_0040EF90
        lea ecx, [esi + 0x748]
        mov byte ptr [esp + 0x10], 0x14
        call ext_006A64A2
        lea ecx, [esi + 0x6d4]
        mov byte ptr [esp + 0x10], 0x13
        call ext_0040EF90
        lea ecx, [esi + 0x660]
        mov byte ptr [esp + 0x10], 0x12
        call ext_0040EF90
        lea ecx, [esi + 0x5fc]
        mov byte ptr [esp + 0x10], 0x11
        call ext_0042EC80
        lea ecx, [esi + 0x598]
        mov byte ptr [esp + 0x10], 0x10
        call ext_0042EC80
        lea ecx, [esi + 0x544]
        mov byte ptr [esp + 0x10], 0xf
        call ext_006A5EFC
        lea ecx, [esi + 0x4f0]
        mov byte ptr [esp + 0x10], 0xe
        call ext_006A5EFC
        lea ecx, [esi + 0x49c]
        mov byte ptr [esp + 0x10], 0xd
        call ext_006A5EFC
        lea ecx, [esi + 0x448]
        mov byte ptr [esp + 0x10], 0xc
        call ext_006A5EFC
        lea ecx, [esi + 0x3f4]
        mov byte ptr [esp + 0x10], 0xb
        call ext_006A5EFC
        lea ecx, [esi + 0x3a0]
        mov byte ptr [esp + 0x10], 0xa
        call ext_006A5EFC
        lea ecx, [esi + 0x34c]
        mov byte ptr [esp + 0x10], 0x9
        call ext_006A5EFC
        lea ecx, [esi + 0x2f8]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006A5EFC
        lea ecx, [esi + 0x2a4]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006A5EFC
        lea ecx, [esi + 0x250]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006A5EFC
        lea ecx, [esi + 0x1fc]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006A5EFC
        lea ecx, [esi + 0x1a8]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006A5EFC
        lea ecx, [esi + 0x154]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5EFC
        lea ecx, [esi + 0x100]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5EFC
        lea ecx, [esi + 0xac]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F2C
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00495AB0
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

// [0x0044D190] sub_0044D190 (962 bytes)
extern "C" void ext_0040F0B0();
extern "C" void ext_0040FDC0();
extern "C" void ext_00415ED0();
extern "C" void ext_0042EE90();
extern "C" void ext_00495A60();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6742();
extern "C" int mem_0093A0C4;
extern "C" int mem_0092407C;
extern "C" int mem_0093A0C8;

extern "C" __declspec(naked) void __fastcall fn_0044D190(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87dc05
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_006A6742
        xor ebx, ebx
        lea ecx, [esi + 0x78]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi], 0x935644
        mov dword ptr [esi + 0x74], ebx
        call ext_00495A60
        mov al, 1
        lea edi, [esi + 0xac]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], al
        mov dword ptr [esi + 0xa4], 0xffffffff
        mov byte ptr [esi + 0xa8], bl
        mov byte ptr [esi + 0xa9], al
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0x100]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x154]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x3
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x1a8]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x4
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x1fc]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x250]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x2a4]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x7
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x2f8]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x8
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x34c]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x9
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x3a0]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xa
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        mov byte ptr [esp + 0x1c], 0xb
        lea edi, [esi + 0x3f4]
        mov ecx, edi
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x448]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xc
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x49c]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xd
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x4f0]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xe
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi + 0x544]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0xf
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea ecx, [esi + 0x598]
        mov byte ptr [esp + 0x1c], 0x10
        call ext_0042EE90
        lea ecx, [esi + 0x5fc]
        mov byte ptr [esp + 0x1c], 0x11
        call ext_0042EE90
        lea ecx, [esi + 0x660]
        mov byte ptr [esp + 0x1c], 0x12
        call ext_0040F0B0
        lea ecx, [esi + 0x6d4]
        mov byte ptr [esp + 0x1c], 0x13
        call ext_0040F0B0
        lea edi, [esi + 0x748]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x14
        call ext_006A5C6E
        mov dword ptr [edi], 0x92f3bc
        lea ecx, [esi + 0x79c]
        mov byte ptr [esp + 0x1c], 0x15
        call ext_0040F0B0
        lea ecx, [esi + 0x810]
        mov byte ptr [esp + 0x1c], 0x16
        call ext_0040F0B0
        lea ecx, [esi + 0x884]
        mov byte ptr [esp + 0x1c], 0x17
        call ext_0040F0B0
        lea ecx, [esi + 0x8f8]
        mov byte ptr [esp + 0x1c], 0x18
        call ext_0040F0B0
        lea edi, [esi + 0x96c]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x19
        call ext_006A5C6E
        mov dword ptr [edi], 0x92f3bc
        lea edi, [esi + 0x9c0]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1a
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0xa14]
        mov byte ptr [esp + 0x1c], 0x1b
        mov ecx, edi
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xa68]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1c
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xabc]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1d
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xb10]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1e
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xb64]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1f
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0xbb8]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x20
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea ecx, [esi + 0xc0c]
        mov byte ptr [esp + 0x1c], 0x21
        call ext_0040F0B0
        lea ecx, [esi + 0xc80]
        mov byte ptr [esp + 0x1c], 0x22
        call ext_0040FDC0
        lea ecx, [esi + 0xcf4]
        mov byte ptr [esp + 0x1c], 0x23
        call ext_00415ED0
        lea edi, [esi + 0xd5c]
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi], 0x92a254
        lea ebp, [esi + 0xd64]
        mov dword ptr [ebp + 4], ebx
        mov dword ptr [ebp], 0x92a254
        mov eax, 0x92a5d4
        mov dword ptr [esi + 0xd70], ebx
        mov dword ptr [esi + 0xd6c], eax
        mov dword ptr [esi + 0xd78], ebx
        mov dword ptr [esi + 0xd74], eax
        mov eax, dword ptr [mem_0093A0C4]
        mov ebx, dword ptr [mem_0092407C]
        push eax
        mov byte ptr [esp + 0x20], 0x28
        call ebx
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [mem_0093A0C8]
        push ecx
        call ebx
        push eax
        mov ecx, ebp
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00440B00] sub_00440B00 (976 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00669E60();
extern "C" void ext_00669F60();
extern "C" void ext_0066A310();
extern "C" void ext_0066A330();
extern "C" void ext_0066A3F0();
extern "C" int mem_0093247C;
extern "C" int mem_00932478;
extern "C" int mem_00932470;
extern "C" int mem_00932468;

extern "C" __declspec(naked) void __fastcall fn_00440B00(void* self) {
    __asm {
        push -1
        push 0x87b8fb
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x8c
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x3c]
        call ext_0066A310
        mov eax, dword ptr [edi + 0x70]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0xa4], 0
        call ext_00669E60
        cmp byte ptr [edi + 0x88], 0
        je loc_440B5B
        mov edx, dword ptr [edi + 0x74]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00669E60
    loc_440B5B:
        cmp byte ptr [edi + 0x8b], 0
        jne loc_440B6E
        fld dword ptr [mem_0093247C]
        fstp dword ptr [esp + 0x48]
    loc_440B6E:
        mov esi, dword ptr [esp + 0xa8]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esi + 0x24]
        lea ebp, [esi + 0x24]
        fld dword ptr [esp + 0x40]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [ebp + 0x8]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [ebp + 0xc]
        call ext_0066A310
        mov ecx, dword ptr [edi + 0x70]
        mov edx, dword ptr [ecx]
        push edx
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0xa4], 1
        call ext_00669E60
        cmp byte ptr [edi + 0x88], 0
        je loc_440BCC
        mov eax, dword ptr [edi + 0x74]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_00669E60
    loc_440BCC:
        cmp byte ptr [edi + 0x8b], 0
        fld dword ptr [mem_0093247C]
        fstp dword ptr [esp + 0x28]
        jne loc_440BE9
        fld dword ptr [mem_00932478]
        fstp dword ptr [esp + 0x28]
    loc_440BE9:
        fld dword ptr [esp + 0x1c]
        sub esp, 0x10
        fstp dword ptr [esi + 0x34]
        lea ecx, [esp + 0x98]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esi + 0x40]
        fld1
        fstp dword ptr [esp + 0xc]
        fldz
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        cmp byte ptr [edi + 0xa2], 0
        mov byte ptr [esp + 0xa0], 2
        jne loc_440CD3
        mov edx, dword ptr [edi + 0x48]
        mov eax, dword ptr [edx + 0xd8]
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x58]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x5c]
        lea eax, [esp + 0x64]
        push eax
        lea ecx, [esp + 0x64]
        push ecx
        lea edx, [esp + 0x54]
        push edx
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xac], 3
        call ext_00669F60
        fld dword ptr [esp + 0x64]
        fsub qword ptr [mem_00932470]
        sub esp, 0xc
        lea ecx, [esp + 0x5c]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esp]
        call ext_0066A3F0
        lea eax, [esp + 0x50]
        push eax
        lea ecx, [esp + 0x8c]
        call ext_00669E60
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xa0], 2
        call ext_00493D90
    loc_440CD3:
        fld dword ptr [esp + 0x88]
        lea ecx, [esp + 0x14]
        fstp dword ptr [esi + 0x44]
        push ecx
        fld dword ptr [esp + 0x90]
        lea edx, [esp + 0x14]
        fstp dword ptr [esi + 0x48]
        push edx
        fld dword ptr [esp + 0x98]
        lea eax, [esp + 0x20]
        fstp dword ptr [esi + 0x4c]
        push eax
        fld dword ptr [esp + 0xa0]
        mov ecx, ebp
        fstp dword ptr [esi + 0x50]
        call ext_00669F60
        lea ecx, [esp + 0x78]
        call ext_0066A310
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xa0], 4
        call ext_0066A310
        fld dword ptr [esp + 0x14]
        fadd qword ptr [mem_00932468]
        sub esp, 0xc
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xac], 5
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call ext_0066A3F0
        fld dword ptr [esp + 0x14]
        sub esp, 0xc
        fsub qword ptr [mem_00932468]
        lea ecx, [esp + 0x74]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        call ext_0066A3F0
        fld dword ptr [esp + 0x78]
        lea ecx, [esp + 0x2c]
        fstp dword ptr [esi + 0x54]
        fld dword ptr [esp + 0x7c]
        fstp dword ptr [esi + 0x58]
        fld dword ptr [esp + 0x80]
        fstp dword ptr [esi + 0x5c]
        fld dword ptr [esp + 0x84]
        fstp dword ptr [esi + 0x60]
        fld dword ptr [esp + 0x68]
        fstp dword ptr [esi + 0x64]
        fld dword ptr [esp + 0x6c]
        fstp dword ptr [esi + 0x68]
        fld dword ptr [esp + 0x70]
        fstp dword ptr [esi + 0x6c]
        fld dword ptr [esp + 0x74]
        fstp dword ptr [esi + 0x70]
        call ext_0066A310
        cmp byte ptr [edi + 0x88], 0
        mov byte ptr [esp + 0xa0], 6
        jne loc_440E18
        cmp byte ptr [edi + 0x8b], 0
        jne loc_440E04
        mov edx, dword ptr [edi + 0x48]
        mov eax, dword ptr [edx + 0xd8]
        jmp loc_440E21
    loc_440E04:
        cmp byte ptr [edi + 0xa2], 0
        jne loc_440E18
        mov eax, dword ptr [edi + 0x48]
        mov eax, dword ptr [eax + 0xd4]
        jmp loc_440E21
    loc_440E18:
        mov ecx, dword ptr [edi + 0x48]
        mov eax, dword ptr [ecx + 0xd4]
    loc_440E21:
        push eax
        lea ecx, [esp + 0x30]
        call ext_00669E60
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esi + 0x74]
        lea ecx, [esp + 0x2c]
        fld dword ptr [esp + 0x30]
        mov byte ptr [esp + 0xa0], 5
        fstp dword ptr [esi + 0x78]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esi + 0x7c]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esi + 0x80]
        call ext_00493D90
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xa0], 4
        call ext_00493D90
        lea ecx, [esp + 0x78]
        mov byte ptr [esp + 0xa0], 2
        call ext_00493D90
        lea ecx, [esp + 0x88]
        mov byte ptr [esp + 0xa0], 1
        call ext_00493D90
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0xa0], 0
        call ext_00493D90
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0xa0], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x98]
        pop edi
        pop esi
        pop ebp
        mov fs:[0], ecx
        add esp, 0x98
        ret 4
    }
}

// [0x00441E30] sub_00441E30 (1322 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00414260();
extern "C" void ext_00440770();
extern "C" void ext_00441A60();
extern "C" void ext_0066A180();
extern "C" void ext_006A6DE0();
extern "C" int mem_00924FF0;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC8;
extern "C" int mem_0092511C;
extern "C" int mem_00925134;
extern "C" int mem_00924E44;
extern "C" int mem_00924FB8;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FD4;
extern "C" int mem_009324A8;

extern "C" __declspec(naked) void __fastcall fn_00441E30(void* self) {
    __asm {
        push -1
        push 0x87ba03
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xe0
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xfc]
        push esi
        push edi
        push ebp
        lea eax, [esp + 0x6c]
        push eax
        mov ebx, ecx
        call ext_00441A60
        mov esi, dword ptr [esp + 0x100]
        mov edi, dword ptr [esi]
        lea ecx, [ebp + 0x74]
        add edi, 0x38
        call ext_0066A180
        mov edx, dword ptr [edi]
        push eax
        mov ecx, esi
        call edx
        mov ecx, ebx
        call ext_00441020
        push eax
        lea eax, [esp + 0xb4]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, ebx
        mov dword ptr [esp + 0xf8], 0
        call ext_00441040
        push eax
        lea ecx, [esp + 0x98]
        push ecx
        call ext_00404F00
        add esp, 8
        lea ecx, [esp + 0xb0]
        mov byte ptr [esp + 0xf8], 1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edi, dword ptr [mem_00924080]
        push eax
        mov eax, dword ptr [esi + 8]
        push eax
        call edi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x94]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x28]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 8]
        push eax
        push edx
        call edi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x28]
        lea ecx, [edx + eax + 0x12]
        mov eax, dword ptr [ebp + 0x10]
        mov ebp, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x14], ecx
        sub ebp, eax
        cmp ebp, ecx
        mov dword ptr [esp + 0x1c], ebp
        jl L_442045
        mov ecx, dword ptr [esp + 0x6c]
        lea edi, [eax + 6]
        mov eax, dword ptr [ebx + 0x48]
        add ecx, 2
        cmp edi, dword ptr [eax + 0xfc]
        mov dword ptr [esp + 0x20], ecx
        jl L_441FDC
        mov ecx, dword ptr [esp + 0x104]
        add edx, edi
        cmp edx, dword ptr [ecx + 8]
        jge L_441FDC
        lea ecx, [esp + 0xb0]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        mov eax, dword ptr [esp + 0x20]
        lea edx, [esp + 0x10]
        push edx
        push eax
        push edi
        mov ecx, esi
        mov byte ptr [esp + 0x104], 2
        call ext_00414260
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xf8], 1
        call dword ptr [mem_009242F4]
    L_441FDC:
        mov ecx, dword ptr [esp + 0x104]
        mov edi, dword ptr [ecx + 0x14]
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [ebx + 0x48]
        sub edi, eax
        sub edi, 6
        cmp edi, dword ptr [edx + 0xfc]
        jl L_442045
        add eax, edi
        cmp eax, dword ptr [ecx + 8]
        jge L_442045
        lea ecx, [esp + 0x94]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        mov eax, dword ptr [esp + 0x20]
        lea edx, [esp + 0x10]
        push edx
        push eax
        push edi
        mov ecx, esi
        mov byte ptr [esp + 0x104], 3
        call ext_00414260
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xf8], 1
        call dword ptr [mem_009242F4]
    L_442045:
        cmp byte ptr [ebx + 0xa0], 0
        je L_442312
        mov ecx, ebx
        call ext_00440770
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE0]
        mov edi, ebp
        sub edi, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xf8], 4
        sub edi, 6
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 8]
        push eax
        push edx
        call dword ptr [mem_00924080]
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x24], ecx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x20], eax
        call dword ptr [mem_009242F4]
        cmp dword ptr [esp + 0x14], edi
        jle L_442273
        lea edx, [esp + 0x30]
        push edx
        lea ecx, [esp + 0x50]
        call dword ptr [mem_00924FE0]
        lea eax, [esp + 0x30]
        push eax
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0xfc], 5
        call dword ptr [mem_00924FE0]
        mov byte ptr [esp + 0xf8], 6
    L_442101:
        lea ecx, [esp + 0x4c]
        push 0x928b5d
        push ecx
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        je L_44221A
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092511C]
        mov eax, dword ptr [esp + 0x14]
        cmp eax, -2
        je L_442154
        test eax, eax
        jne L_44213E
        call dword ptr [mem_00925134]
    L_44213E:
        mov ecx, dword ptr [esp + 0x14]
        call dword ptr [mem_00924E44]
        cmp dword ptr [esp + 0x18], eax
        ja L_442154
        call dword ptr [mem_00925134]
    L_442154:
        mov eax, dword ptr [esp + 0x18]
        sub eax, 1
        push eax
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        lea ecx, [esp + 0xd4]
        push ecx
        lea ecx, [esp + 0x58]
        call dword ptr [mem_00924FB8]
        push 0x92f680
        lea edx, [esp + 0x50]
        push edx
        lea eax, [esp + 0xdc]
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0xfc], 7
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0xd4]
        mov byte ptr [esp + 0xf8], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x78]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F0]
        lea ecx, [esp + 0x28]
        push ecx
        lea ecx, [esp + 0x14]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [esi + 8]
        push eax
        push edx
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esp + 0x2c]
        mov ebp, dword ptr [esp + 0x28]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x24], eax
        call dword ptr [mem_009242F4]
        cmp ebp, edi
        mov ebp, dword ptr [esp + 0x1c]
        jg L_442101
    L_44221A:
        push 0x928b5d
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0x4c]
        push 0x928b5d
        push ecx
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        je L_44224F
        lea edx, [esp + 0x78]
        push edx
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FDC]
    L_44224F:
        lea ecx, [esp + 0x78]
        mov byte ptr [esp + 0xf8], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xf8], 4
        call dword ptr [mem_00924FF4]
    L_442273:
        lea eax, [esp + 0x30]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        je L_442300
        sub ebp, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x14], ebp
        fild dword ptr [esp + 0x14]
        fmul qword ptr [mem_009324A8]
        call ext_006A6DE0
        mov ecx, dword ptr [esp + 0x104]
        mov ebp, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x6c]
        mov edx, dword ptr [ebx + 0x48]
        sub ebp, eax
        add edi, 2
        cmp ebp, dword ptr [edx + 0xfc]
        jl L_442300
        mov eax, dword ptr [esp + 0x20]
        lea edx, [eax + ebp]
        cmp edx, dword ptr [ecx + 8]
        jge L_442300
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x1c]
        push eax
        push edi
        push ebp
        mov ecx, esi
        mov byte ptr [esp + 0x104], 8
        call ext_00414260
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F4]
    L_442300:
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xf8], 1
        call dword ptr [mem_00924FF4]
    L_442312:
        lea ecx, [esp + 0x94]
        mov byte ptr [esp + 0xf8], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb0]
        mov dword ptr [esp + 0xf8], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0xf0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xec
        ret 8
    }
}

// [0x0044AE80] sub_0044AE80 (124 bytes)
extern "C" void ext_0045D270();
extern "C" __declspec(naked) void __fastcall fn_0044AE80(void* self) {
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1b4]
        push    edi
        call    edx
        mov     ecx, dword ptr [esi + 0xe4]
        call    ext_0045D270
        mov     eax, dword ptr [esi + 0xe4]
        mov     ecx, dword ptr [eax + 0x20]
        mov     edi, dword ptr [mem_00925688]
        push    1
        push    0
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0xe4]
        mov     eax, dword ptr [edx + 0x20]
        mov     ebx, dword ptr [mem_0092568C]
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0xe8]
        mov     edx, dword ptr [ecx + 0x20]
        push    1
        push    0
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0xe8]
        mov     ecx, dword ptr [eax + 0x20]
        push    ecx
        call    ebx
        call    ext_00468180
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     eax, dword ptr [edx + 4]
        call    eax
        pop     edi
        mov     ecx, esi
        pop     esi
        pop     ebx
        jmp     ext_0044A900
    }
}

// [0x0044E600] sub_0044E600 (4414 bytes)
extern "C" void ext_006A5E5A();
extern "C" void ext_006A6DE0();
extern "C" int mem_0092566C;
extern "C" int mem_009357C0;
extern "C" int mem_00993CA0;
extern "C" int mem_00993828;
extern "C" int mem_00925694;
extern "C" int mem_00925640;
extern "C" int mem_0092564C;

extern "C" __declspec(naked) void __fastcall fn_0044E600(void* self) {
    __asm {
        __asm _emit 0x81 __asm _emit 0xEC __asm _emit 0xF0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub esp, 0x1f0
        __asm _emit 0x53 // push ebx
        __asm _emit 0x55 // push ebp
        __asm _emit 0x56 // push esi
        mov esi, dword ptr [mem_0092566C]
        __asm _emit 0x57 // push edi
        __asm _emit 0x8B __asm _emit 0xF9 // mov edi, ecx
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0xcc]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xA8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xa8]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x1C __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x21c]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x88]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x68 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x768]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x118]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0xBC __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0x7bc]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xC8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xc8]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x30 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x830]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x98 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x198]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0xA4 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x8a4]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x1b8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x18 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0x918]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xA8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x1a8]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0xC8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x1c8]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x98]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x8C __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x98c]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x1c8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x70 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0x270]
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x74 // lea eax, [esp + 0x74]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0xC4 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x2c4]
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x34 // lea edx, [esp + 0x34]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0xE0 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x9e0]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x68 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x168]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x18 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0x318]
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x44 // lea eax, [esp + 0x44]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x6C __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x36c]
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // lea edx, [esp + 0x18]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0xC0 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x3c0]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x38 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x138]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x14 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0x414]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x88 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x188]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x68 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x468]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x58 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x158]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0xBC __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x4bc]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x78 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x178]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x10 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0x510]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xE8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xe8]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x64 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x564]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xF8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0xf8]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x34 __asm _emit 0x0A __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0xa34]
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x64 // lea ecx, [esp + 0x64]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x88 __asm _emit 0x0A __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0xa88]
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x54 // lea eax, [esp + 0x54]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0xDC __asm _emit 0x0A __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0xadc]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xB8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0xb8]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x30 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0xb30]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xd8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8F __asm _emit 0x84 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [edi + 0xb84]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x108]
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0xD8 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0xbd8]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x128]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x2C __asm _emit 0x0C __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0xc2c]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x48 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x148]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x70 // mov ebx, dword ptr [esp + 0x70]
        __asm _emit 0x8B __asm _emit 0x6C __asm _emit 0x24 __asm _emit 0x60 // mov ebp, dword ptr [esp + 0x60]
        __asm _emit 0x8B __asm _emit 0xB4 __asm _emit 0x24 __asm _emit 0xE4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov esi, dword ptr [esp + 0xe4]
        __asm _emit 0xB8 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, 0x2
        __asm _emit 0x01 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add dword ptr [esp + 0xc4], eax
        __asm _emit 0x01 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // add dword ptr [esp + 0x114], eax
        __asm _emit 0x01 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x34 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // add dword ptr [esp + 0x134], eax
        __asm _emit 0x03 __asm _emit 0xD8 // add ebx, eax
        __asm _emit 0x03 __asm _emit 0xE8 // add ebp, eax
        __asm _emit 0x03 __asm _emit 0xF0 // add esi, eax
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xb4]
        __asm _emit 0x2B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub eax, dword ptr [esp + 0xac]
        __asm _emit 0x89 __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x70 // mov dword ptr [esp + 0x70], ebx
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 // mov dword ptr [esp + 0x30], eax
        __asm _emit 0xDB __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 // fild dword ptr [esp + 0x30]
        __asm _emit 0x89 __asm _emit 0x6C __asm _emit 0x24 __asm _emit 0x60 // mov dword ptr [esp + 0x60], ebp
        __asm _emit 0x89 __asm _emit 0xB4 __asm _emit 0x24 __asm _emit 0xE4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp + 0xe4], esi
        fmul qword ptr [mem_009357C0]
        call ext_006A6DE0
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x4C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x14c]
        __asm _emit 0x89 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xDC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp + 0x1dc], eax
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x154]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x208]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x40 // sub ecx, dword ptr [esp + 0x40]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xc4]
        __asm _emit 0x2B __asm _emit 0xCD // sub ecx, ebp
        __asm _emit 0x2B __asm _emit 0xCB // sub ecx, ebx
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x50 // sub ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B __asm _emit 0x9C __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // mov ebx, dword ptr [esp + 0x204]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x80]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xa4]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xd4]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x94]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xb4]
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x03 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x48 // add ecx, dword ptr [esp + 0x48]
        __asm _emit 0x03 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x38 // add ecx, dword ptr [esp + 0x38]
        __asm _emit 0x03 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x78 // add ecx, dword ptr [esp + 0x78]
        __asm _emit 0x03 __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x9C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, dword ptr [esp + 0x9c]
        __asm _emit 0x03 __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, dword ptr [esp + 0xcc]
        __asm _emit 0x03 __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x8C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x03 __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, dword ptr [esp + 0xac]
        __asm _emit 0x03 __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xBC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // add ecx, dword ptr [esp + 0xbc]
        __asm _emit 0x03 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x58 // add ecx, dword ptr [esp + 0x58]
        __asm _emit 0x03 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x68 // add ecx, dword ptr [esp + 0x68]
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x11 __asm _emit 0xA4 // lea eax, [ecx + edx - 0x5c]
        __asm _emit 0x8D __asm _emit 0x4B __asm _emit 0xEC // lea ecx, [ebx - 0x14]
        __asm _emit 0x89 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x14 // mov dword ptr [esp + 0x14], ecx
        __asm _emit 0xDB __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // fild dword ptr [esp + 0x14]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 // mov dword ptr [esp + 0x30], eax
        fmul qword ptr [mem_00993CA0]
        call ext_006A6DE0
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // sub edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B __asm _emit 0xE8 // mov ebp, eax
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x53 __asm _emit 0xE8 // lea eax, [ebx + 2*edx - 0x18]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // mov dword ptr [esp + 0x14], eax
        __asm _emit 0xDB __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // fild dword ptr [esp + 0x14]
        fmul qword ptr [mem_00993828]
        call ext_006A6DE0
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x34 // mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x3C // sub ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x204]
        __asm _emit 0x2B __asm _emit 0xB4 __asm _emit 0x24 __asm _emit 0xDC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub esi, dword ptr [esp + 0xdc]
        __asm _emit 0x8B __asm _emit 0xD8 // mov ebx, eax
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x11 __asm _emit 0xF0 // lea eax, [ecx + edx - 0x10]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xE0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x1e0]
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x89 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xE0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp + 0x1e0], eax
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x68 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x768]
        __asm _emit 0x8D __asm _emit 0x0C __asm _emit 0x76 // lea ecx, [esi + 2*esi]
        mov esi, dword ptr [mem_00925694]
        __asm _emit 0x68 __asm _emit 0x98 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // push 0x198
        __asm _emit 0x50 // push eax
        __asm _emit 0x89 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x3C // mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x8C __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x98c]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xF0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x1f0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x68 __asm _emit 0x98 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // push 0x198
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xFC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1fc]
        __asm _emit 0x2B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xF4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub eax, dword ptr [esp + 0x1f4]
        __asm _emit 0x8B __asm _emit 0xB4 __asm _emit 0x24 __asm _emit 0xEC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov esi, dword ptr [esp + 0x1ec]
        __asm _emit 0x2B __asm _emit 0xB4 __asm _emit 0x24 __asm _emit 0xE4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub esi, dword ptr [esp + 0x1e4]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x01 // add eax, 0x1
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 // mov dword ptr [esp + 0x30], eax
        __asm _emit 0x8B __asm _emit 0x87 __asm _emit 0x68 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [edi + 0x768]
        __asm _emit 0x68 __asm _emit 0x8B __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // push 0x18b
        __asm _emit 0x50 // push eax
        __asm _emit 0x83 __asm _emit 0xC6 __asm _emit 0x01 // add esi, 0x1
        call dword ptr [mem_00925694]
        __asm _emit 0x0F __asm _emit 0xAF __asm _emit 0xC6 // imul eax, esi
        __asm _emit 0x8B __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x2C // mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // mov dword ptr [esp + 0x14], eax
        __asm _emit 0x3B __asm _emit 0xC6 // cmp eax, esi
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x2C // lea eax, [esp + 0x2c]
        __asm _emit 0x7C __asm _emit 0x04 // jl 0x44e9ae
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // lea eax, [esp + 0x14]
        __asm _emit 0x8B __asm _emit 0x97 __asm _emit 0x8C __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [edi + 0x98c]
        __asm _emit 0x8B __asm _emit 0x08 // mov ecx, dword ptr [eax]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x68 __asm _emit 0x8B __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // push 0x18b
        __asm _emit 0x52 // push edx
        __asm _emit 0x89 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x24 // mov dword ptr [esp + 0x24], ecx
        call dword ptr [mem_00925694]
        __asm _emit 0x0F __asm _emit 0xAF __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // imul eax, dword ptr [esp + 0x28]
        __asm _emit 0x3B __asm _emit 0xC6 // cmp eax, esi
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 // mov dword ptr [esp + 0x10], eax
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x2C // lea ecx, [esp + 0x2c]
        __asm _emit 0x7C __asm _emit 0x04 // jl 0x44e9df
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x10 // lea ecx, [esp + 0x10]
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B __asm _emit 0x09 // mov ecx, dword ptr [ecx]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // mov dword ptr [esp + 0x28], eax
        __asm _emit 0x03 __asm _emit 0xC1 // add eax, ecx
        __asm _emit 0x85 __asm _emit 0xC0 // test eax, eax
        __asm _emit 0x89 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x10 // mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp + 0x84], eax
        __asm _emit 0x0F __asm _emit 0x8E __asm _emit 0x8F __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jle 0x44ea8d
        __asm _emit 0xDB __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 // fild dword ptr [esp + 0x30]
        __asm _emit 0xDA __asm _emit 0xB4 __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // fidiv dword ptr [esp + 0x84]
        __asm _emit 0xD9 __asm _emit 0xE8 // fld1
        __asm _emit 0xD8 __asm _emit 0xD1 // fcom st(1)
        __asm _emit 0xDF __asm _emit 0xE0 // fnstsw ax
        __asm _emit 0xF6 __asm _emit 0xC4 __asm _emit 0x41 // test ah, 0x41
        __asm _emit 0x75 __asm _emit 0x29 // jne 0x44ea3d
        __asm _emit 0xDB __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 // fild dword ptr [esp + 0x14]
        __asm _emit 0xDE __asm _emit 0xCA // fmulp st(2), st
        __asm _emit 0xD9 __asm _emit 0xC9 // fxch st(1)
        call ext_006A6DE0
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // mov dword ptr [esp + 0x28], eax
        __asm _emit 0x3B __asm _emit 0xC6 // cmp eax, esi
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x2C // lea eax, [esp + 0x2c]
        __asm _emit 0x7C __asm _emit 0x04 // jl 0x44ea31
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // lea eax, [esp + 0x28]
        __asm _emit 0x8B __asm _emit 0x00 // mov eax, dword ptr [eax]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x10 // mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // mov dword ptr [esp + 0x28], eax
        __asm _emit 0xEB __asm _emit 0x02 // jmp 0x44ea3f
        __asm _emit 0xDD __asm _emit 0xD9 // fstp st(1)
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x7E __asm _emit 0x48 // jle 0x44ea8b
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 // mov eax, dword ptr [esp + 0x30]
        __asm _emit 0xDB __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 // fild dword ptr [esp + 0x10]
        __asm _emit 0x2B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // sub eax, dword ptr [esp + 0x28]
        __asm _emit 0x89 __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr [esp + 0x84], eax
        __asm _emit 0xDB __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // fild dword ptr [esp + 0x84]
        __asm _emit 0xD8 __asm _emit 0xF1 // fdiv st, st(1)
        __asm _emit 0xD8 __asm _emit 0xD2 // fcom st(2)
        __asm _emit 0xDF __asm _emit 0xE0 // fnstsw ax
        __asm _emit 0xDD __asm _emit 0xDA // fstp st(2)
        __asm _emit 0xF6 __asm _emit 0xC4 __asm _emit 0x05 // test ah, 0x5
        __asm _emit 0x7A __asm _emit 0x1F // jp 0x44ea89
        __asm _emit 0xDE __asm _emit 0xC9 // fmulp st(1), st
        call ext_006A6DE0
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 // mov dword ptr [esp + 0x10], eax
        __asm _emit 0x3B __asm _emit 0xC6 // cmp eax, esi
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x2C // lea eax, [esp + 0x2c]
        __asm _emit 0x7C __asm _emit 0x04 // jl 0x44ea81
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 // lea eax, [esp + 0x10]
        __asm _emit 0x8B __asm _emit 0x08 // mov ecx, dword ptr [eax]
        __asm _emit 0x89 __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x10 // mov dword ptr [esp + 0x10], ecx
        __asm _emit 0xEB __asm _emit 0x04 // jmp 0x44ea8d
        __asm _emit 0xDD __asm _emit 0xD8 // fstp st(0)
        __asm _emit 0xDD __asm _emit 0xD8 // fstp st(0)
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xb4]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0xac]
        mov esi, dword ptr [mem_00925640]
        __asm _emit 0x52 // push edx
        __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0xAD __asm _emit 0x0C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [4*ebp + 0xc]
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xB8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xb8]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x94]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x8C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x90]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x88]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x98]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x28 // mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0xAD __asm _emit 0x0C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [4*ebp + 0xc]
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x128]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xD4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xd4]
        __asm _emit 0x2B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub eax, dword ptr [esp + 0xcc]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xc8]
        __asm _emit 0x50 // push eax
        __asm _emit 0x55 // push ebp
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xA4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x1a4]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x9C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x19c]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x98 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x198]
        __asm _emit 0x52 // push edx
        __asm _emit 0x55 // push ebp
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1c4]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xBC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x1bc]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xB8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x1b8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x55 // push ebp
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1b4]
        __asm _emit 0x2B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xAC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub eax, dword ptr [esp + 0x1ac]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x1a8]
        __asm _emit 0x50 // push eax
        __asm _emit 0x55 // push ebp
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xA4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xa4]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x9C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x9c]
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xa0]
        __asm _emit 0x2B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub eax, dword ptr [esp + 0x98]
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xa8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 // mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x52 // push edx
        __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0xAD __asm _emit 0x0C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [4*ebp + 0xc]
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xD8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x1d8]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x78 // sub ecx, dword ptr [esp + 0x78]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x7C // mov edx, dword ptr [esp + 0x7c]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x74 // sub edx, dword ptr [esp + 0x74]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x84]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x40 // mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x38 // sub ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x3C // mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x34 // sub edx, dword ptr [esp + 0x34]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x44 // lea eax, [esp + 0x44]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x174]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x6C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x16c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x1d8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x78 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x178]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x50 // mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x48 // sub ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x4C // mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x44 // sub edx, dword ptr [esp + 0x44]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x54 // lea eax, [esp + 0x54]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x24 // mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x1C // sub ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x28 // lea eax, [esp + 0x28]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x44 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x144]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x3C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x13c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x140]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x38 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x138]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x48 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x148]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x194]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x8C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x18c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x190]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x88 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x188]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x98 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x198]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x64 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x164]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x5C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x15c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x160]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x58 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x158]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x68 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x168]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x184]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x7C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x17c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x180]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x78 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x178]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x88 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x188]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xF4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xf4]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xEC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xec]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xF0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xf0]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xE8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0xe8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xF8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xf8]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xFC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xfc]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x100]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xF8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0xf8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x108]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x70 // mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x68 // sub ecx, dword ptr [esp + 0x68]
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x64 // lea edx, [esp + 0x64]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x53 // push ebx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x60 // mov eax, dword ptr [esp + 0x60]
        __asm _emit 0x2B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x58 // sub eax, dword ptr [esp + 0x58]
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x54 // lea ecx, [esp + 0x54]
        __asm _emit 0x50 // push eax
        __asm _emit 0x53 // push ebx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xc4]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xBC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0xbc]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xB8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xb8]
        __asm _emit 0x52 // push edx
        __asm _emit 0x53 // push ebx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xE4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xe4]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xDC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0xdc]
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0xd8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x53 // push ebx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x114]
        __asm _emit 0x2B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x0C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub eax, dword ptr [esp + 0x10c]
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x108]
        __asm _emit 0x50 // push eax
        __asm _emit 0x53 // push ebx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x34 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x134]
        __asm _emit 0x2B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x2C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub edx, dword ptr [esp + 0x12c]
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x128]
        __asm _emit 0x52 // push edx
        __asm _emit 0x53 // push ebx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x154]
        __asm _emit 0x2B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x4C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // sub ecx, dword ptr [esp + 0x14c]
        __asm _emit 0x8D __asm _emit 0x04 __asm _emit 0xAD __asm _emit 0x0C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [4*ebp + 0xc]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x58 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x158]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        mov esi, dword ptr [mem_0092564C]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xb0]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x90]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x120]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xd0]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x4D __asm _emit 0x08 // lea ecx, [ebp + 0x8]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x1a0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x2D __asm _emit 0x0C // lea eax, [ebp + ebp + 0xc]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x1b0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x6D __asm _emit 0x10 // lea edx, [ebp + 2*ebp + 0x10]
        __asm _emit 0x52 // push edx
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x1c0]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xa0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x1d0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x7C // lea eax, [esp + 0x7c]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x3C // lea ecx, [esp + 0x3c]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x3C // mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x34 // sub edx, dword ptr [esp + 0x34]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x08 // add edx, 0x8
        __asm _emit 0x52 // push edx
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x70 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x170]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x4C // lea ecx, [esp + 0x4c]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // lea edx, [esp + 0x20]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x140]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x190]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x08 // add edx, 0x8
        __asm _emit 0x52 // push edx
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x6C // lea eax, [esp + 0x6c]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x20 // mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x18 // sub ecx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x5C // lea edx, [esp + 0x5c]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x20 // mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18 // sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x08 // add eax, 0x8
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xc0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x1A __asm _emit 0x10 // lea eax, [edx + ebx + 0x10]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x160]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x1A __asm _emit 0x10 // lea eax, [edx + ebx + 0x10]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x180]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x1A __asm _emit 0x10 // lea eax, [edx + ebx + 0x10]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xF0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xf0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x1A __asm _emit 0x10 // lea eax, [edx + ebx + 0x10]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x100]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x53 __asm _emit 0x14 // lea eax, [ebx + 2*edx + 0x14]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xE0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xe0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x53 __asm _emit 0x14 // lea eax, [ebx + 2*edx + 0x14]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x110]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 // sub edx, dword ptr [esp + 0x18]
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x53 __asm _emit 0x14 // lea eax, [ebx + 2*edx + 0x14]
        __asm _emit 0x50 // push eax
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x130]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x6A __asm _emit 0x04 // push 0x4
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x150]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xDC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1dc]
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xb0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xb4]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x08 // add edx, 0x8
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x90]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x94]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x120]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x124]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x04 // add eax, 0x4
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0xd0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x124]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x04 // add edx, 0x4
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x1a0]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x124]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x1c0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x124]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x04 // add eax, 0x4
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x1b0]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xd4]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x08 // add edx, 0x8
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0xa0]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xa4]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x1d0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xD4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1d4]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x08 // add eax, 0x8
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x7C // lea ecx, [esp + 0x7c]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x80]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x0C // add edx, 0xc
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x3C // lea eax, [esp + 0x3c]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x70 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x170]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x174]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x08 // add eax, 0x8
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x4C // lea ecx, [esp + 0x4c]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x174]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x08 // add edx, 0x8
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x160]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x50 // mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x0C // add ecx, 0xc
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // lea edx, [esp + 0x20]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x50 // mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x08 // add eax, 0x8
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x6C // lea ecx, [esp + 0x6c]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x50 // mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x0C // add edx, 0xc
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x180]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x50 // mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xE0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0xe0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x70 // mov eax, dword ptr [esp + 0x70]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x08 // add eax, 0x8
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x140]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x70 // mov edx, dword ptr [esp + 0x70]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x04 // add edx, 0x4
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x5C // lea eax, [esp + 0x5c]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x70 // mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x08 // add ecx, 0x8
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xF0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0xf0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x70 // mov eax, dword ptr [esp + 0x70]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x04 // add eax, 0x4
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x110]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x60 // mov edx, dword ptr [esp + 0x60]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x08 // add edx, 0x8
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x190]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x60 // mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0xc0]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x60 // mov eax, dword ptr [esp + 0x60]
        __asm _emit 0x83 __asm _emit 0xC0 __asm _emit 0x08 // add eax, 0x8
        __asm _emit 0x50 // push eax
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [esp + 0x100]
        __asm _emit 0x51 // push ecx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x60 // mov edx, dword ptr [esp + 0x60]
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x04 // add edx, 0x4
        __asm _emit 0x52 // push edx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea eax, [esp + 0x130]
        __asm _emit 0x50 // push eax
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xc4]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x0C // add ecx, 0xc
        __asm _emit 0x51 // push ecx
        __asm _emit 0x6A __asm _emit 0x00 // push 0x0
        __asm _emit 0x8D __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea edx, [esp + 0x150]
        __asm _emit 0x52 // push edx
        __asm _emit 0xFF __asm _emit 0xD6 // call esi
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xac]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xb4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xb0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xb0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xAC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xac]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x94]
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x8C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x8c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x94]
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x90]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xFC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x1fc]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x1C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x11c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x124]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x120]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x120]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x48 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x748]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xCC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xcc]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xd4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xd0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xd0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x9C __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x79c]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x9C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x19c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1a4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x1a0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1a0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x10 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x810]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xBC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1bc]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1c4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x1c0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1c0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x84 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x884]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xAC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1ac]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1b4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x1b0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xB0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1b0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xF8 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x8f8]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xa4]
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x9C __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x9c]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xa0]
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xA0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xa0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xA8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x1a8]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xCC __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x1cc]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD4 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1d4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x1d0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xD0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x1d0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x6C __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x96c]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x78 // mov eax, dword ptr [esp + 0x78]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x7C // mov edx, dword ptr [esp + 0x7c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x7C // mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x50 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x250]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x38 // mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x40 // mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x3C // mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x3C // mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xA4 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x2a4]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x6C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x16c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x174]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x70 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x170]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x70 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x170]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xC0 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x9c0]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x48 // mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x50 // mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x4C // mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x4C // mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xF8 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x2f8]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x1C // mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x24 // mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x20 // mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x20 // mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x4C __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x34c]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x3C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x13c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x44 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x144]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x140]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x40 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x140]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xA0 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x3a0]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x8C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x18c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x94 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x194]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x190]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x90 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x190]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xF4 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x3f4]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x5C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x15c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x64 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x164]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x160]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x60 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x160]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x448]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x7C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x17c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x84 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x184]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x180]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x80 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x180]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x9C __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x49c]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xEC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xec]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xF4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xf4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xF0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xf0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xF0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xf0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xF0 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x4f0]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xFC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xfc]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x100]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x44 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0x544]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x68 // mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x70 // mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x6C // mov edx, dword ptr [esp + 0x6c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x6C // mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x14 __asm _emit 0x0A __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xa14]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x58 // mov eax, dword ptr [esp + 0x58]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x60 // mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x5C // mov edx, dword ptr [esp + 0x5c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x5C // mov ecx, dword ptr [esp + 0x5c]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x68 __asm _emit 0x0A __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xa68]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xBC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xbc]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xc4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xc0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xC0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xc0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xBC __asm _emit 0x0A __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xabc]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0xDC __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0xdc]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xE4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xe4]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0xE0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0xe0]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0xE0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0xe0]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x10 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xb10]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x0C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x10c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x114]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x110]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x110]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x64 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xb64]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x2C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x12c]
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x34 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x134]
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x130]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x130]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0xB8 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xbb8]
        call ext_006A5E5A
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x154]
        __asm _emit 0x8B __asm _emit 0x84 __asm _emit 0x24 __asm _emit 0x4C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr [esp + 0x14c]
        __asm _emit 0x6A __asm _emit 0x01 // push 0x1
        __asm _emit 0x8B __asm _emit 0x94 __asm _emit 0x24 __asm _emit 0x54 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [esp + 0x154]
        __asm _emit 0x2B __asm _emit 0xC8 // sub ecx, eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8B __asm _emit 0x8C __asm _emit 0x24 __asm _emit 0x50 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x2B __asm _emit 0xD1 // sub edx, ecx
        __asm _emit 0x52 // push edx
        __asm _emit 0x50 // push eax
        __asm _emit 0x51 // push ecx
        __asm _emit 0x8D __asm _emit 0x8F __asm _emit 0x0C __asm _emit 0x0C __asm _emit 0x00 __asm _emit 0x00 // lea ecx, [edi + 0xc0c]
        call ext_006A5E5A
        __asm _emit 0x5F // pop edi
        __asm _emit 0x5E // pop esi
        __asm _emit 0x5D // pop ebp
        __asm _emit 0x5B // pop ebx
        __asm _emit 0x81 __asm _emit 0xC4 __asm _emit 0xF0 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // add esp, 0x1f0
        __asm _emit 0xC2 __asm _emit 0x08 __asm _emit 0x00 // ret 0x8
    }
}

// Suggested externs
extern "C" void ext_00444390();
extern "C" void ext_00444660();
extern "C" void ext_00455C80();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A63D6();
extern "C" void ext_006A6400();
extern "C" void ext_006A6412();
extern "C" void ext_006A6616();
extern "C" void ext_006A661C();
extern "C" int mem_00A9F414;
extern "C" int mem_009256D4;
extern "C" int mem_00924068;
extern "C" int mem_00925694;

// [0x00444830] sub_00444830 (5442 bytes)
extern "C" __declspec(naked) void __fastcall fn_00444830(void* self) {
    __asm {
        push	ebp
        mov	ebp, esp
        and	esp, -0x8
        mov	eax, dword ptr fs:[0x0]
        push	-0x1
        push	0x87bf4c
        push	eax
        mov	eax, dword ptr [ebp + 0x8]
        mov	dword ptr fs:[0x0], esp
        sub	esp, 0x198
        push	ebx
        push	esi
        push	edi
        push	eax
        mov	esi, ecx
        call ext_00455C80
        cmp	eax, -0x1
        jne loc_0044487d
        or	eax, eax
        mov	ecx, dword ptr [esp + 0x1a4]
        mov	dword ptr fs:[0x0], ecx
        pop	edi
        pop	esi
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret	0x4
    loc_0044487d:
        push	0x42c
        push	esi
        lea	ecx, [esp + 0x198]
        xor	ebx, ebx
        push	ecx
        lea	edi, [esi + 0x15c]
        push	0x50000213
        mov	ecx, edi
        mov	dword ptr [esp + 0x1a0], ebx
        mov	dword ptr [esp + 0x1a4], ebx
        mov	dword ptr [esp + 0x1a8], ebx
        mov	dword ptr [esp + 0x1ac], ebx
        call ext_006A661C
        mov	edx, dword ptr [mem_00A9F414]
        push	0xffff0002
        push	ebx
        push	ebx
        push	ebx
        push	ebx
        push	ebx
        push	ebx
        push	edx
        push	0x1
        mov	ecx, edi
        call ext_006A6616
        cmp	esi, ebx
        je loc_004448e2
        lea	eax, [esi + 0x150]
        jmp loc_004448e4
    loc_004448e2:
        xor	eax, eax
    loc_004448e4:
        mov	ecx, esi
        mov	dword ptr [esi + 0x1b0], eax
        call ext_00444660
        mov	eax, 0x92c4ac
        mov	dword ptr [esp + 0x184], ebx
        mov	dword ptr [esp + 0x180], eax
        mov	dword ptr [esp + 0x1ac], ebx
        mov	dword ptr [esp + 0x174], ebx
        mov	dword ptr [esp + 0x170], eax
        mov	dword ptr [esp + 0x164], ebx
        mov	dword ptr [esp + 0x160], eax
        mov	dword ptr [esp + 0x154], ebx
        mov	dword ptr [esp + 0x150], eax
        mov	dword ptr [esp + 0x144], ebx
        mov	dword ptr [esp + 0x140], eax
        mov	dword ptr [esp + 0x134], ebx
        mov	dword ptr [esp + 0x130], eax
        mov	dword ptr [esp + 0x124], ebx
        mov	dword ptr [esp + 0x120], eax
        mov	dword ptr [esp + 0x114], ebx
        mov	dword ptr [esp + 0x110], eax
        mov	dword ptr [esp + 0x104], ebx
        mov	dword ptr [esp + 0x100], eax
        mov	dword ptr [esp + 0xf4], ebx
        mov	dword ptr [esp + 0xf0], eax
        mov	dword ptr [esp + 0xe4], ebx
        mov	dword ptr [esp + 0xe0], eax
        mov	dword ptr [esp + 0xd4], ebx
        mov	dword ptr [esp + 0xd0], eax
        mov	dword ptr [esp + 0xc4], ebx
        mov	dword ptr [esp + 0xc0], eax
        mov	dword ptr [esp + 0xb4], ebx
        mov	dword ptr [esp + 0xb0], eax
        mov	dword ptr [esp + 0xa4], ebx
        mov	dword ptr [esp + 0xa0], eax
        mov	dword ptr [esp + 0x94], ebx
        mov	dword ptr [esp + 0x90], eax
        mov	dword ptr [esp + 0x84], ebx
        mov	dword ptr [esp + 0x80], eax
        mov	dword ptr [esp + 0x74], ebx
        mov	dword ptr [esp + 0x70], eax
        mov	dword ptr [esp + 0x64], ebx
        mov	dword ptr [esp + 0x60], eax
        mov	dword ptr [esp + 0x54], ebx
        mov	dword ptr [esp + 0x50], eax
        mov	dword ptr [esp + 0x44], ebx
        mov	dword ptr [esp + 0x40], eax
        mov	dword ptr [esp + 0x34], ebx
        mov	dword ptr [esp + 0x30], eax
        mov	dword ptr [esp + 0x24], ebx
        mov	dword ptr [esp + 0x20], eax
        mov	dword ptr [esp + 0x14], ebx
        mov	dword ptr [esp + 0x10], eax
        mov	dword ptr [esp + 0x17c], ebx
        mov	dword ptr [esp + 0x178], eax
        mov	dword ptr [esp + 0xcc], ebx
        mov	dword ptr [esp + 0xc8], eax
        mov	dword ptr [esp + 0x12c], ebx
        mov	dword ptr [esp + 0x128], eax
        mov	dword ptr [esp + 0xbc], ebx
        mov	dword ptr [esp + 0xb8], eax
        mov	dword ptr [esp + 0x15c], ebx
        mov	dword ptr [esp + 0x158], eax
        mov	dword ptr [esp + 0xac], ebx
        mov	dword ptr [esp + 0xa8], eax
        mov	dword ptr [esp + 0x11c], ebx
        mov	dword ptr [esp + 0x118], eax
        mov	dword ptr [esp + 0x9c], ebx
        mov	dword ptr [esp + 0x98], eax
        mov	dword ptr [esp + 0x18c], ebx
        mov	dword ptr [esp + 0x188], eax
        mov	dword ptr [esp + 0x8c], ebx
        mov	dword ptr [esp + 0x88], eax
        mov	dword ptr [esp + 0x10c], ebx
        mov	dword ptr [esp + 0x108], eax
        mov	dword ptr [esp + 0x7c], ebx
        mov	dword ptr [esp + 0x78], eax
        mov	dword ptr [esp + 0x14c], ebx
        mov	dword ptr [esp + 0x148], eax
        mov	dword ptr [esp + 0x6c], ebx
        mov	dword ptr [esp + 0x68], eax
        mov	dword ptr [esp + 0xfc], ebx
        mov	dword ptr [esp + 0xf8], eax
        mov	dword ptr [esp + 0x5c], ebx
        mov	dword ptr [esp + 0x58], eax
        mov	dword ptr [esp + 0x16c], ebx
        mov	dword ptr [esp + 0x168], eax
        mov	dword ptr [esp + 0x4c], ebx
        mov	dword ptr [esp + 0x48], eax
        mov	dword ptr [esp + 0xec], ebx
        mov	dword ptr [esp + 0xe8], eax
        mov	dword ptr [esp + 0x3c], ebx
        mov	dword ptr [esp + 0x38], eax
        mov	dword ptr [esp + 0x13c], ebx
        mov	dword ptr [esp + 0x138], eax
        mov	dword ptr [esp + 0x2c], ebx
        mov	dword ptr [esp + 0x28], eax
        mov	dword ptr [esp + 0xdc], ebx
        mov	dword ptr [esp + 0xd8], eax
        mov	dword ptr [esp + 0x1c], ebx
        mov	dword ptr [esp + 0x18], eax
        push	0x2ec
        push	0x2
        push	0x2ec
        mov	byte ptr [esp + 0x1b8], 0x2f
        call ext_006A63D6
        mov	edi, dword ptr [mem_009256D4]
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x184]
        call ext_006A5FFE
        push	0x2ed
        push	0x2
        push	0x2ed
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x174]
        call ext_006A5FFE
        push	0x2ee
        push	0x2
        push	0x2ee
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x164]
        call ext_006A5FFE
        push	0x2ef
        push	0x2
        push	0x2ef
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x154]
        call ext_006A5FFE
        push	0x2f0
        push	0x2
        push	0x2f0
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x144]
        call ext_006A5FFE
        push	0x2f1
        push	0x2
        push	0x2f1
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x134]
        call ext_006A5FFE
        push	0x2f2
        push	0x2
        push	0x2f2
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x124]
        call ext_006A5FFE
        push	0x341
        push	0x2
        push	0x341
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x114]
        call ext_006A5FFE
        push	0x2f3
        push	0x2
        push	0x2f3
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x104]
        call ext_006A5FFE
        push	0x2f4
        push	0x2
        push	0x2f4
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xf4]
        call ext_006A5FFE
        push	0x2f5
        push	0x2
        push	0x2f5
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xe4]
        call ext_006A5FFE
        push	0x318
        push	0x2
        push	0x318
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xd4]
        call ext_006A5FFE
        push	0x2f6
        push	0x2
        push	0x2f6
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xc4]
        call ext_006A5FFE
        push	0x2f7
        push	0x2
        push	0x2f7
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xb4]
        call ext_006A5FFE
        push	0x2f8
        push	0x2
        push	0x2f8
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xa4]
        call ext_006A5FFE
        push	0x2f9
        push	0x2
        push	0x2f9
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x94]
        call ext_006A5FFE
        push	0x2fa
        push	0x2
        push	0x2fa
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x84]
        call ext_006A5FFE
        push	0x2fb
        push	0x2
        push	0x2fb
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x74]
        call ext_006A5FFE
        push	0x2fc
        push	0x2
        push	0x2fc
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x64]
        call ext_006A5FFE
        push	0x345
        push	0x2
        push	0x345
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x54]
        call ext_006A5FFE
        push	0x2fd
        push	0x2
        push	0x2fd
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x44]
        call ext_006A5FFE
        push	0x2fe
        push	0x2
        push	0x2fe
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x34]
        call ext_006A5FFE
        push	0x2ff
        push	0x2
        push	0x2ff
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x24]
        call ext_006A5FFE
        push	0x319
        push	0x2
        push	0x319
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x14]
        call ext_006A5FFE
        push	0x300
        push	0x2
        push	0x300
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x17c]
        call ext_006A5FFE
        push	0x301
        push	0x2
        push	0x301
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xcc]
        call ext_006A5FFE
        push	0x302
        push	0x2
        push	0x302
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x12c]
        call ext_006A5FFE
        push	0x303
        push	0x2
        push	0x303
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xbc]
        call ext_006A5FFE
        push	0x304
        push	0x2
        push	0x304
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x15c]
        call ext_006A5FFE
        push	0x305
        push	0x2
        push	0x305
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xac]
        call ext_006A5FFE
        push	0x306
        push	0x2
        push	0x306
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x11c]
        call ext_006A5FFE
        push	0x343
        push	0x2
        push	0x343
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x9c]
        call ext_006A5FFE
        push	0x307
        push	0x2
        push	0x307
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x18c]
        call ext_006A5FFE
        push	0x308
        push	0x2
        push	0x308
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x8c]
        call ext_006A5FFE
        push	0x309
        push	0x2
        push	0x309
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x10c]
        call ext_006A5FFE
        push	0x31a
        push	0x2
        push	0x31a
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x7c]
        call ext_006A5FFE
        push	0x30a
        push	0x2
        push	0x30a
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x14c]
        call ext_006A5FFE
        push	0x30b
        push	0x2
        push	0x30b
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x6c]
        call ext_006A5FFE
        push	0x30c
        push	0x2
        push	0x30c
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xfc]
        call ext_006A5FFE
        push	0x30d
        push	0x2
        push	0x30d
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x5c]
        call ext_006A5FFE
        push	0x30e
        push	0x2
        push	0x30e
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x16c]
        call ext_006A5FFE
        push	0x30f
        push	0x2
        push	0x30f
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x4c]
        call ext_006A5FFE
        push	0x310
        push	0x2
        push	0x310
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xec]
        call ext_006A5FFE
        push	0x344
        push	0x2
        push	0x344
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x3c]
        call ext_006A5FFE
        push	0x311
        push	0x2
        push	0x311
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x13c]
        call ext_006A5FFE
        push	0x312
        push	0x2
        push	0x312
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x2c]
        call ext_006A5FFE
        push	0x313
        push	0x2
        push	0x313
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0xdc]
        call ext_006A5FFE
        push	0x31b
        push	0x2
        push	0x31b
        call ext_006A63D6
        push	eax
        call	edi
        push	eax
        lea	ecx, [esp + 0x1c]
        call ext_006A5FFE
        push	0x1
        push	0x8
        push	0x9
        push	0x10
        push	0x10
        call	dword ptr [mem_00924068]
        lea	edi, [esi + 0x154]
        push	eax
        mov	ecx, edi
        call ext_006A6412
        mov	ecx, dword ptr [esp + 0x184]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x174]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x164]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x154]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x144]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x134]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	eax, dword ptr [esi + 0x158]
        mov	ecx, dword ptr [esp + 0x124]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x114]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x104]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xf4]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xe4]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xd4]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xc4]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xb4]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xa4]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	eax, dword ptr [esi + 0x158]
        mov	ecx, dword ptr [esp + 0x94]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x84]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x74]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x64]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x54]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x44]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x34]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x24]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x14]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	eax, dword ptr [esi + 0x158]
        mov	ecx, dword ptr [esp + 0x17c]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xcc]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x12c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xbc]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x15c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xac]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x11c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x9c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x18c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	eax, dword ptr [esi + 0x158]
        mov	ecx, dword ptr [esp + 0x8c]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x10c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x7c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x14c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x6c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xfc]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x5c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x16c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x4c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	eax, dword ptr [esi + 0x158]
        mov	ecx, dword ptr [esp + 0xec]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x3c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x13c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x2c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0xdc]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        mov	ecx, dword ptr [esp + 0x1c]
        mov	eax, dword ptr [esi + 0x158]
        push	0x756662
        push	ecx
        push	eax
        call ext_006A5EDE
        mov	edx, dword ptr [eax + 0x94]
        mov	ecx, dword ptr [edx]
        call ext_00444390
        cmp	edi, ebx
        jne loc_00445879
        xor	edi, edi
        jmp loc_0044587c
    loc_00445879:
        mov	edi, dword ptr [edi + 0x4]
    loc_0044587c:
        mov	eax, dword ptr [esi + 0x17c]
        push	edi
        push	ebx
        push	0x1109
        push	eax
        call	dword ptr [mem_00925694]
        push	eax
        call ext_006A6400
        mov	esi, 0x92a23c
        lea	ecx, [esp + 0x18]
        mov	byte ptr [esp + 0x1ac], 0x2e
        mov	dword ptr [esp + 0x18], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xd8]
        mov	byte ptr [esp + 0x1ac], 0x2d
        mov	dword ptr [esp + 0xd8], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x28]
        mov	byte ptr [esp + 0x1ac], 0x2c
        mov	dword ptr [esp + 0x28], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x138]
        mov	byte ptr [esp + 0x1ac], 0x2b
        mov	dword ptr [esp + 0x138], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x38]
        mov	byte ptr [esp + 0x1ac], 0x2a
        mov	dword ptr [esp + 0x38], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xe8]
        mov	byte ptr [esp + 0x1ac], 0x29
        mov	dword ptr [esp + 0xe8], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x48]
        mov	byte ptr [esp + 0x1ac], 0x28
        mov	dword ptr [esp + 0x48], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x168]
        mov	byte ptr [esp + 0x1ac], 0x27
        mov	dword ptr [esp + 0x168], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x58]
        mov	byte ptr [esp + 0x1ac], 0x26
        mov	dword ptr [esp + 0x58], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xf8]
        mov	byte ptr [esp + 0x1ac], 0x25
        mov	dword ptr [esp + 0xf8], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x68]
        mov	byte ptr [esp + 0x1ac], 0x24
        mov	dword ptr [esp + 0x68], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x148]
        mov	byte ptr [esp + 0x1ac], 0x23
        mov	dword ptr [esp + 0x148], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x78]
        mov	byte ptr [esp + 0x1ac], 0x22
        mov	dword ptr [esp + 0x78], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x108]
        mov	byte ptr [esp + 0x1ac], 0x21
        mov	dword ptr [esp + 0x108], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x88]
        mov	byte ptr [esp + 0x1ac], 0x20
        mov	dword ptr [esp + 0x88], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x188]
        mov	byte ptr [esp + 0x1ac], 0x1f
        mov	dword ptr [esp + 0x188], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x98]
        mov	byte ptr [esp + 0x1ac], 0x1e
        mov	dword ptr [esp + 0x98], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x118]
        mov	byte ptr [esp + 0x1ac], 0x1d
        mov	dword ptr [esp + 0x118], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xa8]
        mov	byte ptr [esp + 0x1ac], 0x1c
        mov	dword ptr [esp + 0xa8], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x158]
        mov	byte ptr [esp + 0x1ac], 0x1b
        mov	dword ptr [esp + 0x158], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xb8]
        mov	byte ptr [esp + 0x1ac], 0x1a
        mov	dword ptr [esp + 0xb8], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x128]
        mov	byte ptr [esp + 0x1ac], 0x19
        mov	dword ptr [esp + 0x128], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xc8]
        mov	byte ptr [esp + 0x1ac], 0x18
        mov	dword ptr [esp + 0xc8], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x178]
        mov	byte ptr [esp + 0x1ac], 0x17
        mov	dword ptr [esp + 0x178], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x10]
        mov	byte ptr [esp + 0x1ac], 0x16
        mov	dword ptr [esp + 0x10], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x20]
        mov	byte ptr [esp + 0x1ac], 0x15
        mov	dword ptr [esp + 0x20], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x30]
        mov	byte ptr [esp + 0x1ac], 0x14
        mov	dword ptr [esp + 0x30], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x40]
        mov	byte ptr [esp + 0x1ac], 0x13
        mov	dword ptr [esp + 0x40], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x50]
        mov	byte ptr [esp + 0x1ac], 0x12
        mov	dword ptr [esp + 0x50], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x60]
        mov	byte ptr [esp + 0x1ac], 0x11
        mov	dword ptr [esp + 0x60], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x70]
        mov	byte ptr [esp + 0x1ac], 0x10
        mov	dword ptr [esp + 0x70], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x80]
        mov	byte ptr [esp + 0x1ac], 0xf
        mov	dword ptr [esp + 0x80], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x90]
        mov	byte ptr [esp + 0x1ac], 0xe
        mov	dword ptr [esp + 0x90], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xa0]
        mov	byte ptr [esp + 0x1ac], 0xd
        mov	dword ptr [esp + 0xa0], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xb0]
        mov	byte ptr [esp + 0x1ac], 0xc
        mov	dword ptr [esp + 0xb0], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xc0]
        mov	byte ptr [esp + 0x1ac], 0xb
        mov	dword ptr [esp + 0xc0], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xd0]
        mov	byte ptr [esp + 0x1ac], 0xa
        mov	dword ptr [esp + 0xd0], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0xe0]
        mov	byte ptr [esp + 0x1ac], 0x9
        mov	dword ptr [esp + 0xe0], esi
        call ext_006A5FF2
        mov	byte ptr [esp + 0x1ac], 0x8
        lea	ecx, [esp + 0xf0]
        mov	dword ptr [esp + 0xf0], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x100]
        mov	byte ptr [esp + 0x1ac], 0x7
        mov	dword ptr [esp + 0x100], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x110]
        mov	byte ptr [esp + 0x1ac], 0x6
        mov	dword ptr [esp + 0x110], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x120]
        mov	byte ptr [esp + 0x1ac], 0x5
        mov	dword ptr [esp + 0x120], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x130]
        mov	byte ptr [esp + 0x1ac], 0x4
        mov	dword ptr [esp + 0x130], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x140]
        mov	byte ptr [esp + 0x1ac], 0x3
        mov	dword ptr [esp + 0x140], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x150]
        mov	byte ptr [esp + 0x1ac], 0x2
        mov	dword ptr [esp + 0x150], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x160]
        mov	byte ptr [esp + 0x1ac], 0x1
        mov	dword ptr [esp + 0x160], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x170]
        mov	byte ptr [esp + 0x1ac], bl
        mov	dword ptr [esp + 0x170], esi
        call ext_006A5FF2
        lea	ecx, [esp + 0x180]
        mov	dword ptr [esp + 0x1ac], 0xffffffff
        mov	dword ptr [esp + 0x180], esi
        call ext_006A5FF2
        mov	ecx, dword ptr [esp + 0x1a4]
        pop	edi
        pop	esi
        xor	eax, eax
        mov	dword ptr fs:[0x0], ecx
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret	0x4
    }
}

// [0x0044BD70] sub_0044BD70 (199 bytes)
extern "C" void ext_00469180();
extern "C" void ext_0046BE90();
extern "C" void ext_006A671E();
extern "C" __declspec(naked) void __fastcall fn_0044BD70(void* self) {
    __asm {
        push -1
        push 0x87d6f8
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
        call ext_006A671E
        mov dword ptr [esi + 0x58], 0x934be4
        mov dword ptr [esi + 0x5c], 0x934bec
        lea edi, [esi + 0x5c]
        mov dword ptr [esi + 0x60], 0x934bf4
        lea ebp, [esi + 0x60]
        xor ebx, ebx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi], 0x934c14
        mov dword ptr [esi + 0x58], 0x934c0c
        mov dword ptr [edi], 0x934c04
        mov dword ptr [ebp], 0x934bfc
        call ext_006A5EDE
        push 0x24a
        push 0xc
        push 0x24a
        call ext_006A63D6
        push eax
        call dword ptr [mem_0092571C]
        push edi
        mov dword ptr [esi + 0x70], eax
        mov byte ptr [esi + 0x74], bl
        mov byte ptr [esi + 0x75], bl
        mov dword ptr [esi + 0x64], ebx
        mov dword ptr [esi + 0x68], ebx
        mov byte ptr [esi + 0x6c], bl
        mov byte ptr [esi + 0x76], bl
        mov byte ptr [esi + 0x77], bl
        mov byte ptr [esi + 0x78], bl
        call ext_00465B30
        mov ecx, eax
        call ext_0046BE90
        push ebp
        call ext_00465B30
        mov ecx, eax
        call ext_00469180
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

// [0x00445EA0] sub_00445EA0 (209 bytes)
extern "C" void ext_006AD940();
extern "C" void ext_00492550();
extern "C" void ext_0045D240();
extern "C" int mem_00925134;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00445EA0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00594000
        mov edi, eax
        mov esi, dword ptr [edi + 80h]
        add edi, 7Ch
        cmp esi, dword ptr [edi + 8]
        jbe L_top
        call dword ptr [mem_00925134]
L_top:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        cmp esi, ebx
        je L_done
        cmp esi, dword ptr [edi + 8]
        jb L_ok2
        call dword ptr [mem_00925134]
L_ok2:
        mov eax, dword ptr [esi]
        push 0
        push 0A2FB54h
        push 0A2E2BCh
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        test eax, eax
        je L_next
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 28h]
        call eax
        test al, al
        je L_send
        call ext_00594000
        mov ecx, dword ptr [eax + 26Ch]
        call ext_006AD940
        mov ecx, eax
        call ext_00492550
        test al, al
        jne L_next
L_send:
        mov ecx, dword ptr [ebp + 17Ch]
        push 0
        push 0
        push 110Ah
        push ecx
        call dword ptr [mem_00925694]
        cmp esi, dword ptr [edi + 8]
        mov ebx, eax
        jb L_ok3
        call dword ptr [mem_00925134]
L_ok3:
        mov edx, dword ptr [esi]
        push ebx
        push edx
        lea ecx, [ebp + 15Ch]
        call ext_0045D240
L_next:
        cmp esi, dword ptr [edi + 8]
        jb L_ok4
        call dword ptr [mem_00925134]
L_ok4:
        add esi, 4
        jmp L_top
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0044C2D0] sub_0044C2D0 (86 bytes)
extern "C" void ext_0044BD70();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0044C2D0(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x7c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0044BD70
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00442CF0] sub_00442CF0 (193 bytes)
extern "C" void ext_00419F20();
extern "C" void ext_0043E090();

extern "C" __declspec(naked) void __fastcall fn_00442CF0(void* self) {
    __asm {
        sub esp, 0x10
        fld qword ptr [esp + 0x1c]
        push esi
        fadd qword ptr [mem_0092BD70]
        fst qword ptr [esp + 0xc]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp + 0x20]
        fild dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x1c]
        fsub qword ptr [esi + 0x110]
        fmul qword ptr [esi + 0x120]
        fadd qword ptr [esi + 0x118]
        fadd qword ptr [mem_0092BD70]
        fstp qword ptr [esp + 0x4]
        fld qword ptr [esp + 0x4]
        fistp dword ptr [esp + 0x20]
        fld qword ptr [esp + 0xc]
        fstp qword ptr [esp + 0xc]
        fld qword ptr [esp + 0xc]
        fistp dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_0043E090
        cmp byte ptr [esi + 0x178], 0x0
        je L_ret
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esi + 0x180]
        mov ecx, dword ptr [esi + 0xf8]
        push edx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esi + 0x17c]
        push eax
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, dword ptr [esi + 0xdc]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        lea edx, [esp + 0x2c]
        push edx
        lea eax, [esp + 0x14]
        push eax
        push ecx
        lea ecx, [esi + 0x1b4]
        mov dword ptr [esp + 0x20], 0x0
        call ext_00419F20
    L_ret:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00445D80] sub_00445D80 (281 bytes)
extern "C" void* __fastcall ext_00594000(void* self);
extern "C" void ext_006AD940();
extern "C" void ext_00492550();
extern "C" void ext_0045D240();
extern "C" int mem_00925134;
extern "C" int mem_00925694;
extern "C" int mem_00A2FC74;
extern "C" int mem_00A2E2BC;

extern "C" __declspec(naked) void __fastcall fn_00445D80(void* self) {
    __asm {
        sub esp, 0x18
        mov dword ptr [esp], ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        call ext_00492550
        test al, al
        jne L_epilogue
        push ebp
        push esi
        call ext_00594000
        mov ebp, eax
        mov esi, dword ptr [ebp + 0x84]
        add ebp, 0x7c
        cmp dword ptr [ebp + 4], esi
        jbe L_a
        call dword ptr [mem_00925134]
    L_a:
        push edi
        mov edi, ebp
        push ebx
    L_loop:
        mov ebx, dword ptr [ebp + 4]
        cmp ebx, dword ptr [ebp + 8]
        jbe L_b
        call dword ptr [mem_00925134]
    L_b:
        test edi, edi
        je L_c
        cmp edi, ebp
        je L_d
    L_c:
        call dword ptr [mem_00925134]
    L_d:
        cmp esi, ebx
        je L_done
        test edi, edi
        mov dword ptr [esp + 0x1c], esi
        jne L_e
        call dword ptr [mem_00925134]
    L_e:
        cmp esi, dword ptr [edi + 4]
        ja L_f
        call dword ptr [mem_00925134]
    L_f:
        lea ebx, [esi - 4]
        cmp ebx, dword ptr [edi + 8]
        jb L_g
        call dword ptr [mem_00925134]
    L_g:
        mov eax, dword ptr [ebx]
        push 0
        push offset mem_00A2FC74
        push offset mem_00A2E2BC
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_h
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx + 0x17c]
        push 0
        push 0
        push 0x110a
        push edx
        call dword ptr [mem_00925694]
        cmp esi, dword ptr [edi + 4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x24], esi
        ja L_i
        call dword ptr [mem_00925134]
        mov ebp, edi
    L_i:
        cmp ebx, dword ptr [edi + 8]
        jb L_j
        call dword ptr [mem_00925134]
    L_j:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ebx]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        add ecx, 0x15c
        call ext_0045D240
    L_h:
        cmp esi, dword ptr [edi + 4]
        ja L_k
        call dword ptr [mem_00925134]
    L_k:
        mov esi, ebx
        jmp L_loop
    L_done:
        pop ebx
        pop edi
        pop esi
        pop ebp
    L_epilogue:
        add esp, 0x18
        ret
    }
}

// [0x00446710] sub_00446710 (44 bytes)
extern "C" void ext_004447A0();
extern "C" void ext_00444490();
extern "C" void ext_00445D80();
extern "C" void ext_00445EA0();
extern "C" void ext_004444B0();
extern "C" void ext_004447E0();

extern "C" __declspec(naked) void __fastcall fn_00446710(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004447A0
        mov ecx, esi
        call ext_00444490
        mov ecx, esi
        call ext_00445D80
        mov ecx, esi
        call ext_00445EA0
        mov ecx, esi
        call ext_004444B0
        mov ecx, esi
        pop esi
        jmp ext_004447E0
    }
}

// [0x004447A0] sub_004447A0 (49 bytes)
extern "C" void ext_0045C3E0();
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_004447A0(void* self) {
    __asm {
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x17c]
        push 0x110a
        push eax
        call dword ptr [mem_00925694]
        mov edi, eax
        call ext_00594000
        push eax
        push edi
        lea ecx, [esi + 0x15c]
        call ext_0045C3E0
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_0040F230();
typedef void (__thiscall *fn_0040F230_t)(void*, int, int, int, int);

// [0x0044D030] sub_0044D030 (69 bytes)
extern "C" void __fastcall fn_0044D030(void* self) {
    fn_0040F230_t f = (fn_0040F230_t)ext_0040F230;
    f((char*)self + 0x2cc, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f((char*)self + 0x340, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
}

// [0x00440620] sub_00440620 (90 bytes)
extern "C" void ext_0043FA70();
extern "C" void ext_006A61B4();
extern "C" void ext_006A61BA();

extern "C" __declspec(naked) void __fastcall fn_00440620(void* self) {
    __asm {
        push -1
        push 0x0087B5E8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        push esi
        mov esi, ecx
        push esi
        lea ecx, [esp + 0x8]
        call ext_006A61BA
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0x0
        call ext_0043FA70
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x20], -1
        call ext_006A61B4
        mov ecx, dword ptr [esp + 0x18]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret
    }
}

// [0x004405B0] sub_004405B0 (99 bytes)
extern "C" void ext_0043FA70();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5ECC();

extern "C" __declspec(naked) void __fastcall fn_004405B0(void* self) {
    __asm {
        push -1
        push 0x87d718
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        push esi
        mov esi, ecx
        push esi
        lea ecx, [esp + 8]
        call ext_006A5ECC
        cmp byte ptr [esi + 0x166], 0
        mov dword ptr [esp + 0x60], 0
        jne skip_call
        lea eax, [esp + 4]
        push eax
        mov ecx, esi
        call ext_0043FA70
    skip_call:
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

extern "C" void ext_0041A920();
extern "C" int mem_00925134;
extern "C" int mem_00925708;

// [0x00442360] sub_00442360 (196 bytes)
extern "C" __declspec(naked) void __fastcall fn_00442360(void* self, int edx_unused, const void* lprcSrc2, void* outVec) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x44]
        add esi, 0x14
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], ecx
        jbe L_44237f
        call dword ptr [mem_00925134]
    L_44237f:
        mov ebp, esi
        mov ebx, edi
    L_442383:
        mov eax, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax + 0x44]
        mov edi, dword ptr [esi + 0x1c]
        add esi, 0x14
        cmp dword ptr [esi + 0x4], edi
        jbe L_44239b
        call dword ptr [mem_00925134]
    L_44239b:
        test ebp, ebp
        je L_4423a3
        cmp ebp, esi
        je L_4423ad
    L_4423a3:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp L_4423b3
    L_4423ad:
        mov esi, dword ptr [mem_00925134]
    L_4423b3:
        cmp ebx, edi
        je L_44241a
        test ebp, ebp
        jne L_4423bd
        call esi
    L_4423bd:
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_4423c4
        call esi
    L_4423c4:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [eax + 0x60]
        mov dword ptr [esp + 0x18], ecx
        mov edx, dword ptr [eax + 0x64]
        mov dword ptr [esp + 0x1c], edx
        mov ecx, dword ptr [eax + 0x68]
        mov dword ptr [esp + 0x20], ecx
        mov edx, dword ptr [eax + 0x6c]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x28], edx
        push ecx
        mov edx, ecx
        push edx
        call dword ptr [mem_00925708]
        test eax, eax
        je L_44240b
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [esp + 0x14]
        push eax
        call ext_0041A920
    L_44240b:
        cmp ebx, dword ptr [ebp + 0x8]
        jb L_442412
        call esi
    L_442412:
        add ebx, 0x4
        jmp L_442383
    L_44241a:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x8
    }
}

// [0x00442430] sub_00442430 (172 bytes)
extern "C" void ext_00442360();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00442430(void* self) {
    __asm {
        push -1
        push 87ba98h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp+14h], ebx
        mov dword ptr [esp+18h], ebx
        mov dword ptr [esp+1ch], ebx
        lea eax, [esp+10h]
        push eax
        lea ecx, [esi+60h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp+30h], ebx
        call ext_00442360
        mov eax, dword ptr [esp+14h]
        cmp eax, dword ptr [esp+18h]
        mov ebp, dword ptr [mem_00925134]
        mov edi, eax
        jbe L1
        call ebp
        mov eax, dword ptr [esp+14h]
L1:
        cmp edi, dword ptr [esp+18h]
        jb L2
        call ebp
        mov eax, dword ptr [esp+14h]
L2:
        cmp dword ptr [edi], esi
        jne L3
        cmp eax, ebx
        je L4
        push eax
        call ext_006A5C5C
        add esp, 4
L4:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp+10h]
        mov dword ptr fs:[0], ecx
        add esp, 1ch
        ret
L3:
        cmp eax, ebx
        je L5
        push eax
        call ext_006A5C5C
        add esp, 4
L5:
        mov ecx, dword ptr [esp+20h]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 1ch
        ret
    }
}

// [0x004424E0] sub_004424E0 (212 bytes)
extern "C" void ext_00442360();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004424E0(void* self) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebp
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [edi + 0x60]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x34], ebp
        call ext_00442360
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        cmp edx, eax
        mov esi, eax
        jbe L1
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
    L1:
        lea ecx, [esp + 0x14]
        push ebx
        mov ebx, ecx
        lea ecx, [esi - 0x4]
        cmp ecx, eax
        mov dword ptr [esp + 0x14], esi
        ja L2
        cmp ecx, edx
        jae L3
    L2:
        call dword ptr [mem_00925134]
        mov edx, dword ptr [esp + 0x1c]
    L3:
        add esi, -0x4
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L4
        call dword ptr [mem_00925134]
        mov edx, dword ptr [esp + 0x18]
    L4:
        cmp dword ptr [esi], edi
        je L6
        cmp edx, ebp
        je L5
        push edx
        call ext_006A5C5C
        add esp, 0x4
    L5:
        pop edi
        pop esi
        mov al, 1
        pop ebp
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr fs:[0], ecx
        add esp, 0x24
        ret
    L6:
        cmp edx, ebp
        je L7
        push edx
        call ext_006A5C5C
        add esp, 0x4
    L7:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        xor al, al
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x24
        ret
    }
}

// [0x00448460] sub_00448460 (215 bytes)
extern "C" void ext_00458C00();
extern "C" void ext_006A5C62();
extern "C" void ext_006A5C6E();
extern "C" void ext_006B0CA0();
extern "C" int mem_00B599BC;
extern "C" __declspec(naked) void __fastcall fn_00448460(void* self) {
    __asm {
        push -1
        push 0x87c887
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_006A5C6E
        lea edi, [esi + 0x54]
        mov dword ptr [edi], 0x92a224
        xor ebx, ebx
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi], 0x933394
        mov dword ptr [edi], 0x933384
        call ext_006B0CA0
        mov dword ptr [esi + 0xc8], ebx
        mov dword ptr [esi + 0xcc], ebx
        mov dword ptr [esi + 0xd4], ebx
        mov dword ptr [esi + 0xd0], 0x92a254
        mov dword ptr [esi + 0xdc], ebx
        mov dword ptr [esi + 0xd8], 0x92a5d4
        mov dword ptr [esi + 0xe4], ebx
        mov eax, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0xe8], eax
        push 0x58
        mov byte ptr [esp + 0x20], 0x4
        mov dword ptr [esi + 0xec], ebx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x1c], 0x5
        je L_null
        push edi
        mov ecx, eax
        call ext_00458C00
        jmp L_done
    L_null:
        xor eax, eax
    L_done:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x58], eax
        mov byte ptr [esi + 0xe0], bl
        mov byte ptr [esi + 0xf0], bl
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00449270] sub_00449270 (336 bytes)
extern "C" void ext_00458C00();
extern "C" void ext_006A5C62();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" __declspec(naked) void __fastcall fn_00449270(void* self) {
    __asm {
        push -1
        push 0x87cc81
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x1c]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x20d
        mov dword ptr [esp + 0x18], esi
        call ext_006A5FC2
        lea ebp, [esi + 0x74]
        mov dword ptr [ebp], 0x92a224
        lea edi, [esi + 0x78]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi], 0x93363c
        mov dword ptr [ebp], 0x93362c
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        mov dword ptr [esi + 0xcc], ebx
        lea edi, [esi + 0xd0]
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        mov dword ptr [esi + 0x124], ebx
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x28]
        push 0x58
        mov byte ptr [esp + 0x20], 4
        mov dword ptr [esi + 0x128], ecx
        mov dword ptr [esi + 0x12c], edx
        mov byte ptr [esi + 0x140], bl
        mov dword ptr [esi + 0x144], ebx
        mov dword ptr [esi + 0x148], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x2c], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x1c], 5
        je L1
        push ebp
        mov ecx, eax
        call ext_00458C00
        mov edi, eax
        jmp L2
    L1:
        xor edi, edi
    L2:
        mov ecx, dword ptr [esi + 0xcc]
        cmp edi, ecx
        mov byte ptr [esp + 0x1c], 4
        je L3
        cmp ecx, ebx
        je L3
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
    L3:
        push 0x58
        mov dword ptr [esi + 0xcc], edi
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x2c], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x1c], 6
        je L4
        push ebp
        mov ecx, eax
        call ext_00458C00
        mov edi, eax
        jmp L5
    L4:
        xor edi, edi
    L5:
        mov ecx, dword ptr [esi + 0x124]
        cmp edi, ecx
        mov byte ptr [esp + 0x1c], 4
        je L6
        cmp ecx, ebx
        je L6
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
    L6:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x124], edi
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00446080] sub_00446080 (297 bytes)
extern "C" void ext_004447E0();
extern "C" void ext_0045BBE0();
extern "C" void ext_0045C1C0();
extern "C" void ext_0045C980();
extern "C" void ext_0045CA40();
extern "C" void ext_0045CB50();
extern "C" void* __cdecl ext_006A6E9E(void* p, int vf_delta, void* src_type, void* target_type, int is_reference);
extern "C" int mem_009256CC;
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00446080(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 8
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 20h]
        push eax
        mov dword ptr [esp + 0Ch], edi
        call dword ptr [mem_009256CC]
        test eax, eax
        je L_ret
        push ebx
        push ebp
        lea ebp, [edi + 15Ch]
        push esi
        mov ecx, ebp
        mov byte ptr [edi + 1B8h], 0
        call ext_0045BBE0
        test eax, eax
        jne L_a
        mov ecx, ebp
        call ext_0045C1C0
L_a:
        mov ebx, dword ptr [esp + 1Ch]
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        mov dword ptr [esp + 10h], 0
        je L_empty
        mov eax, dword ptr [ebx + 8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        je L_empty
        cmp esi, eax
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        mov edi, esi
L_top:
        mov esi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], esi
        jbe L_c
        call dword ptr [mem_00925134]
L_c:
        cmp edi, esi
        je L_done
        cmp edi, dword ptr [ebx + 8]
        jb L_d
        call dword ptr [mem_00925134]
L_d:
        mov edx, dword ptr [edi]
        push 0
        push 0A2E2BCh
        push 0A2E2D8h
        push 0
        push edx
        call ext_006A6E9E
        mov esi, eax
        add esp, 14h
        test esi, esi
        je L_skip
        mov ecx, ebp
        call ext_0045BBE0
        test eax, eax
        mov ecx, ebp
        jne L_alt
        push esi
        call ext_0045CA40
        jmp L_set
L_alt:
        call ext_0045BBE0
        cmp eax, 1
        jne L_set
        push esi
        mov ecx, ebp
        call ext_0045CB50
L_set:
        mov dword ptr [esp + 10h], esi
L_skip:
        cmp edi, dword ptr [ebx + 8]
        jb L_e
        call dword ptr [mem_00925134]
L_e:
        add edi, 4
        jmp L_top
L_done:
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        je L_nores
        push eax
        mov ecx, ebp
        call ext_0045C980
        mov edi, dword ptr [esp + 14h]
        pop esi
        pop ebp
        pop ebx
        mov byte ptr [edi + 1B8h], 1
        pop edi
        add esp, 8
        ret 4
L_nores:
        mov edi, dword ptr [esp + 14h]
L_empty:
        mov ecx, edi
        call ext_004447E0
        pop esi
        pop ebp
        mov byte ptr [edi + 1B8h], 1
        pop ebx
L_ret:
        pop edi
        add esp, 8
        ret 4
    }
}

// [0x00447130] sub_00447130 (352 bytes)
extern "C" void ext_00446080();
extern "C" void ext_0045BBE0();
extern "C" void ext_0045BE30();
extern "C" void ext_0045BED0();
extern "C" void ext_0045C1C0();
extern "C" void ext_00468180();
extern "C" void ext_00468F30();
extern "C" void ext_00468F40();
extern "C" void ext_00469000();
extern "C" void ext_00469040();
extern "C" void ext_005A6300();
extern "C" void ext_00660A50();
extern "C" void ext_006A5C5C();
extern "C" int mem_00A9F414;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00447130(void* self) {
    __asm {
        mov     eax, fs:[0]
        push    -1
        push    0x89ee91
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x34
        push    ebx
        push    ebp
        mov     ebp, ecx
        xor     ebx, ebx
        cmp     byte ptr [ebp + 0x1b8], bl
        je      loc_44727d
        push    esi
        push    edi
        call    ext_00468180
        mov     esi, eax
        lea     eax, [ebp + 0x148]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], eax
        call    ext_00468F40
        lea     eax, [esp + 0x28]
        lea     edi, [ebp + 0x15c]
        push    eax
        mov     ecx, edi
        call    ext_0045BED0
        mov     ecx, dword ptr [mem_00A9F414]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        mov     dword ptr [esp + 0x54], ebx
        call    dword ptr [mem_00924FC0]
        add     esp, 8
        test    al, al
        je      loc_4471ca
        mov     ecx, esi
        call    ext_00469040
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    ext_00468F30
        mov     ecx, edi
        call    ext_0045C1C0
        mov     ecx, edi
        call    ext_0045BE30
        jmp     loc_447269
    loc_4471ca:
        call    ext_00660A50
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x18]
        push    ebx
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, eax
        call    edx
        push    ebx
        push    0xa2e2d8
        push    0xa2e2f8
        push    ebx
        push    eax
        call    ext_006A6E9E
        add     esp, 0x14
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], eax
        je      loc_44725d
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esp + 0x50], 1
        call    ext_005A6300
        mov     ecx, edi
        call    ext_0045BBE0
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    ext_00469000
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, ebp
        call    ext_00446080
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        mov     byte ptr [esp + 0x4c], bl
        je      loc_447251
        push    eax
        call    ext_006A5C5C
        add     esp, 4
    loc_447251:
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebx
    loc_44725d:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    ext_00468F30
    loc_447269:
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x4c], -1
        call    dword ptr [mem_00924FF4]
        pop     edi
        pop     esi
    loc_44727d:
        mov     ecx, dword ptr [esp + 0x3c]
        pop     ebp
        pop     ebx
        mov     fs:[0], ecx
        add     esp, 0x40
        ret     8
    }
}

// [0x0044CB90] sub_0044CB90 (131 bytes)
extern "C" void ext_0044CAF0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0044CB90(void* self, int edx_unused, void* val) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        test edx, edx
        push edi
        jne L_44cba2
        xor ecx, ecx
        jmp L_44cbaa
    L_44cba2:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edx
        sar ecx, 0x2
    L_44cbaa:
        test edx, edx
        je L_44cbeb
        mov eax, dword ptr [esi + 0xc]
        sub eax, edx
        sar eax, 0x2
        cmp ecx, eax
        jae L_44cbeb
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 0x1
        push edi
        call ext_0044C330
        add esp, 0x18
        add edi, 0x4
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    L_44cbeb:
        mov edi, dword ptr [esi + 0x8]
        cmp edx, edi
        jbe L_44cbf8
        call dword ptr [mem_00925134]
    L_44cbf8:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0044CAF0
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x0044CC30] sub_0044CC30 (142 bytes)
extern "C" void ext_00430370();
extern "C" void ext_00430380();
extern "C" void ext_0044C500();
extern "C" void ext_0044CB90();
extern "C" int mem_00ACDB40;

extern "C" void __fastcall fn_0044CC30(void* self) {
    if (!*(void**)((char*)self + 0x64)) {
        return;
    }
    typedef void* (__thiscall *VFn)(void*);
    void* res = (*(VFn**)(*(void**)((char*)self + 0x64)))[0xb4 / 4](*(void**)((char*)self + 0x64));
    if (!res) {
        return;
    }
    void* arr = (char*)res + 0x54;
    ((void (__thiscall*)(void*))ext_0044C500)(arr);
    int val;
    if (((bool (__thiscall*)(int))ext_00430370)(mem_00ACDB40)) {
        val = 2;
    } else if (((bool (__thiscall*)(int))ext_00430380)(mem_00ACDB40)) {
        val = 9;
    } else {
        return;
    }
    typedef void (__thiscall *PushFn)(void*, int*);
    ((PushFn)ext_0044CB90)(arr, &val);
    val = 3;
    ((PushFn)ext_0044CB90)(arr, &val);
    val = 4;
    ((PushFn)ext_0044CB90)(arr, &val);
}

// [0x0044CAF0] sub_0044CAF0 (141 bytes)
extern "C" void ext_0044C540();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0044CAF0(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        test    edi, edi
        je      L_0044CB0E
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        sub     ecx, edi
        sar     ecx, 2
        jne     L_0044CB12
    L_0044CB0E:
        xor     ebx, ebx
        jmp     L_0044CB33
    L_0044CB12:
        cmp     edi, eax
        jbe     L_0044CB1C
        call    dword ptr [mem_00925134]
    L_0044CB1C:
        test    ebp, ebp
        je      L_0044CB24
        cmp     ebp, esi
        je      L_0044CB2A
    L_0044CB24:
        call    dword ptr [mem_00925134]
    L_0044CB2A:
        mov     ebx, dword ptr [esp + 0x20]
        sub     ebx, edi
        sar     ebx, 2
    L_0044CB33:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    1
        push    eax
        push    ebp
        mov     ecx, esi
        call    ext_0044C540
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_0044CB55
        call    dword ptr [mem_00925134]
    L_0044CB55:
        mov     dword ptr [esp + 0x20], edi
        lea     edi, [edi + 4*ebx]
        cmp     edi, dword ptr [esi + 0x8]
        ja      L_0044CB66
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_0044CB6C
    L_0044CB66:
        call    dword ptr [mem_00925134]
    L_0044CB6C:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], edi
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}

// [0x004425C0] sub_004425C0 (283 bytes)
extern "C" void ext_0041AEE0();
extern "C" void ext_00412690();

extern "C" __declspec(naked) void __fastcall fn_004425C0(void* self) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x8b], 0x0
        je done
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x38]
        push edi
        lea eax, [esp + 0x24]
        push eax
        call ext_00441A60
        mov esi, dword ptr [esi + 0x48]
        mov ebp, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x24]
        push 0x0
        push 0x1
        lea ecx, [edi + 0x44]
        add esi, 0x1b4
        call ext_0066A180
        push eax
        mov ecx, esi
        call ext_0041AEE0
        cmp byte ptr [edi + 0x20], 0x0
        mov esi, eax
        jne skip1
        mov ecx, dword ptr [esp + 0x2c]
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x14], ecx
        lea ecx, [esi + 0x8]
        push edx
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x14], ebp
        call ext_00412690
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esi + 0x8]
        call ext_00412690
    skip1:
        mov ecx, dword ptr [esp + 0x28]
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x10], ecx
        add esi, 0x8
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebx
        call ext_00412690
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_00412690
        cmp byte ptr [edi + 0x21], 0x0
        mov edi, dword ptr [esp + 0x2c]
        jne skip2
        mov eax, dword ptr [esp + 0x28]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], ebx
        call ext_00412690
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_00412690
    skip2:
        mov eax, dword ptr [esp + 0x28]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], ebp
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], edi
        call ext_00412690
        lea edx, [esp + 0x10]
        push edx
        mov ecx, esi
        call ext_00412690
        pop edi
        pop ebp
        pop ebx
    done:
        pop esi
        add esp, 0x20
        ret 0x8
    }
}

extern "C" void ext_00412690();
extern "C" void ext_0041AEE0();
extern "C" void ext_00441A60();
extern "C" void ext_0066A180();

// [0x004426E0] sub_004426E0 (373 bytes)
extern "C" __declspec(naked) void __fastcall fn_004426E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        cmp byte ptr [ebx + 0x8b], 0x0
        je done
        cmp byte ptr [ebx + 0xa2], 0x0
        je done
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x3c]
        push edi
        push esi
        lea eax, [esp + 0x2c]
        push eax
        call ext_00441A60
        mov ecx, dword ptr [esp + 0x2c]
        mov edi, dword ptr [ebx + 0x48]
        mov ebp, dword ptr [esp + 0x34]
        add ecx, 0x1
        push 0x0
        mov dword ptr [esp + 0x44], ecx
        push 0x1
        lea ecx, [esi + 0x54]
        add ebp, -0x1
        add edi, 0x1b4
        call ext_0066A180
        push eax
        mov ecx, edi
        call ext_0041AEE0
        mov edi, dword ptr [ebx + 0x48]
        push 0x0
        push 0x1
        lea ecx, [esi + 0x64]
        mov dword ptr [esp + 0x18], eax
        add edi, 0x1b4
        call ext_0066A180
        push eax
        mov ecx, edi
        call ext_0041AEE0
        cmp byte ptr [esi + 0x20], 0x0
        mov edi, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x14], eax
        jne skip_first
        mov ebx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x28]
        add eax, 0x1
        lea edx, [esp + 0x18]
        add ebx, 0x8
        push edx
        mov ecx, ebx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], ebp
        call ext_00412690
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_00412690
    skip_first:
        mov eax, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x24], edi
        mov dword ptr [esp + 0x1c], edi
        mov edi, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x20]
        add eax, 0x1
        add edi, 0x8
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x24], eax
        call ext_00412690
        lea edx, [esp + 0x18]
        push edx
        mov ecx, edi
        call ext_00412690
        mov eax, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x14]
        add eax, 0x2
        mov dword ptr [esp + 0x20], eax
        lea eax, [esp + 0x20]
        add edi, 0x8
        add ebx, -0x1
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x28], ebp
        call ext_00412690
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_00412690
        cmp byte ptr [esi + 0x21], 0x0
        jne done_pop
        mov edx, dword ptr [esp + 0x40]
        lea eax, [esp + 0x20]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebp
        call ext_00412690
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_00412690
    done_pop:
        pop edi
        pop esi
        pop ebp
    done:
        pop ebx
        add esp, 0x28
        ret 0x8
    }
}

// [0x004461B0] sub_004461B0 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_004461B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fb54
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je chk3
        call ebp
chk3:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb loop_body
        call ebp
loop_body:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call fn_004461B0
        cmp edi, dword ptr [esi + 0x8]
        jb next
        call ebp
next:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00446240] sub_00446240 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_00446240(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fb78
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je chk3
        call ebp
chk3:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb loop_body
        call ebp
loop_body:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call fn_00446240
        cmp edi, dword ptr [esi + 0x8]
        jb next
        call ebp
next:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x004462D0] sub_004462D0 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_004462D0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je chk3
        call ebp
chk3:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb loop_body
        call ebp
loop_body:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call fn_004462D0
        cmp edi, dword ptr [esi + 0x8]
        jb next
        call ebp
next:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x004464D0] sub_004464D0 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_004464D0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fc0c
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je chk3
        call ebp
chk3:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb loop_body
        call ebp
loop_body:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call fn_004464D0
        cmp edi, dword ptr [esi + 0x8]
        jb next
        call ebp
next:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00446560] sub_00446560 (144 bytes)
extern "C" void ext_00446560();
extern "C" __declspec(naked) void __fastcall fn_00446560(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fbe4
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je loop_start
        call ebp
loop_start:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb ok1
        call ebp
ok1:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call ext_00446560
        cmp edi, dword ptr [esi + 0x8]
        jb ok2
        call ebp
ok2:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x004465F0] sub_004465F0 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_004465F0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fc34
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je chk3
        call ebp
chk3:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb chk4
        call ebp
chk4:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call fn_004465F0
        cmp edi, dword ptr [esi + 0x8]
        jb chk5
        call ebp
chk5:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00446680] sub_00446680 (144 bytes)
extern "C" void ext_00446680();
extern "C" __declspec(naked) void __fastcall fn_00446680(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        push 0x0
        push 0xa2fc50
        push 0xa2e2bc
        push 0x0
        push esi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x20]
        push edx
        call eax
skip_cast:
        mov edi, dword ptr [esi + 0x80]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x7c
        cmp edi, dword ptr [esi + 0x8]
        jbe chk1
        call ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk2
        call ebp
chk2:
        cmp esi, esi
        je loop_start
        call ebp
loop_start:
        cmp edi, ebx
        je done
        cmp edi, dword ptr [esi + 0x8]
        jb call_rec
        call ebp
call_rec:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call ext_00446680
        cmp edi, dword ptr [esi + 0x8]
        jb next_iter
        call ebp
next_iter:
        add edi, 0x4
        jmp chk1
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00446430] sub_00446430 (150 bytes)
extern "C" void ext_00446430();
extern "C" void ext_00528BB0();
extern "C" void ext_00528C70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00446430(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push 0
        push 0A2FBBCh
        push 0A2E2BCh
        push 0
        push edi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je skip_cast_00446430
        lea esi, [eax + 0xc]
        mov eax, dword ptr [esp + 0x1c]
        push eax
        push 80000h
        mov ecx, esi
        call ext_00528BB0
        mov ecx, esi
        call ext_00528C70
    skip_cast_00446430:
        mov ebp, dword ptr [mem_00925134]
        lea esi, [edi + 7Ch]
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe chk1_00446430
        call ebp
    chk1_00446430:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe chk2_00446430
        call ebp
    chk2_00446430:
        cmp esi, esi
        je chk3_00446430
        call ebp
    chk3_00446430:
        cmp edi, ebx
        je done_00446430
        cmp edi, dword ptr [esi + 8]
        jb body_00446430
        call ebp
    body_00446430:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        call ext_00446430
        cmp edi, dword ptr [esi + 8]
        jb inc_00446430
        call ebp
    inc_00446430:
        add edi, 4
        jmp chk1_00446430
    done_00446430:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x0044B9A0] sub_0044B9A0 (48 bytes)
extern "C" void ext_00530690();
extern "C" int mem_00A2FFD4;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_0044B9A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A2FFD4]
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

// [0x0044BA00] sub_0044BA00 (48 bytes)
extern "C" void ext_00530690();
extern "C" int mem_00A2FFDC;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_0044BA00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A2FFDC]
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

// [0x0044B9D0] sub_0044B9D0 (48 bytes)
extern "C" void ext_00530690();
extern "C" int mem_00A2FFD8;
extern "C" int mem_00924FC0;

extern "C" __declspec(naked) void __fastcall fn_0044B9D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, [mem_00A2FFD8]
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

// [0x00446360] sub_00446360 (208 bytes)
extern "C" int mem_00a2e2bc;
extern "C" int mem_00a2fbbc;
extern "C" __declspec(naked) void __fastcall fn_00446360(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push 0x0
        push offset mem_00a2fbbc
        push offset mem_00a2e2bc
        push 0x0
        push edi
        mov dword ptr [esp + 0x24], ecx
        call ext_006A6E9E
        mov ebp, dword ptr [esp + 0x30]
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_sub_done
        mov eax, dword ptr [esi + 0x17c]
        test eax, eax
        je L_sub_180
        lea ecx, [eax + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        push ebp
        call edx
    L_sub_180:
        mov eax, dword ptr [esi + 0x180]
        test eax, eax
        push ebp
        je L_sub_null
        lea esi, [eax + 0xc]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x20]
        mov ecx, esi
        call edx
        push ebp
        jmp L_sub_call
    L_sub_null:
        add esi, 0xc
    L_sub_call:
        push 0x20000
        mov ecx, esi
        call ext_00528BB0
        mov ecx, esi
        call ext_00528C70
    L_sub_done:
        lea esi, [edi + 0x7c]
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop_top
        call dword ptr [mem_00925134]
    L_loop_top:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp edi, ebx
        je L_ret
        cmp edi, dword ptr [esi + 0x8]
        jb L_body
        call dword ptr [mem_00925134]
    L_body:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        push eax
        call fn_00446360
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call dword ptr [mem_00925134]
    L_inc:
        add edi, 0x4
        jmp L_loop_top
    L_ret:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x0044CD80] sub_0044CD80 (261 bytes)
extern "C" void ext_0040F230();
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D0;

extern "C" void __fastcall fn_0044CD80(void* self) {
    char* p = (char*)self;
    typedef void (__thiscall *Fn)(void*, int, int, int, int);
    Fn f = (Fn)ext_0040F230;
    f(p + 0xc0c, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x79c, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x810, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x884, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x8f8, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x8f8, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x660, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
    f(p + 0x6d4, mem_0093A0CC, mem_0093A0C8, mem_0093A0D0, mem_0093A0C8);
}

// [0x0044D8E0] sub_0044D8E0 (342 bytes)
extern "C" void ext_00494830();
extern "C" void ext_00494860();
extern "C" void ext_004948C0();
extern "C" void ext_00495B20();
extern "C" int mem_00925694;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00A3464C;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0044D8E0(void* self) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x877622
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0xcc]
        push 0x14b
        push eax
        call dword ptr [mem_00925694]
        lea ebx, [esi + 0x78]
        mov ecx, ebx
        call ext_00495B20
        mov ecx, ebx
        call ext_00494830
        lea ebp, [eax - 0x1]
        xor edi, edi
        test ebp, ebp
        jl loc_44d97d
        mov edi, edi
    loc_44d930:
        push edi
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, ebx
        call ext_00494860
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi + 0xcc]
        push eax
        push 0x0
        push 0x143
        push edx
        call dword ptr [mem_00925694]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        add edi, 0x1
        cmp edi, ebp
        jle loc_44d930
    loc_44d97d:
        mov eax, dword ptr [esi + 0xcc]
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        push 0x146
        push eax
        call edi
        test eax, eax
        jle loc_44da02
        cmp dword ptr [esi + 0x74], 0x0
        je loc_44da02
        or ebp, -0x1
        cmp dword ptr [esi + 0xa4], ebp
        je loc_44d9c7
        mov ecx, dword ptr [esi + 0xcc]
        push 0x0
        push 0x0
        push 0x146
        push ecx
        call edi
        add eax, -0x1
        cmp dword ptr [esi + 0xa4], eax
        jle loc_44da0c
    loc_44d9c7:
        mov edx, dword ptr [mem_00A3464C]
        push edx
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x54], 0x1
        call ext_004948C0
        lea ecx, [esp + 0x2c]
        mov dword ptr [esi + 0xa4], eax
        mov dword ptr [esp + 0x50], ebp
        call dword ptr [mem_00924FF4]
        jmp loc_44da0c
    loc_44da02:
        mov dword ptr [esi + 0xa4], 0xffffffff
    loc_44da0c:
        mov ecx, dword ptr [esi + 0xa4]
        mov edx, dword ptr [esi + 0xcc]
        push 0x0
        push ecx
        push 0x14e
        push edx
        call edi
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0044C540] sub_0044C540 (579 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_0044C2A0();
extern "C" void ext_0044C360();
extern "C" void ext_0044C420();
extern "C" void ext_0044C4D0();
extern "C" void ext_00469C90();
extern "C" void ext_004A59A0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_0087D730;

extern "C" __declspec(naked) void __fastcall fn_0044C540(void* self, int edx_unused, void* ret_slot, void* pos, int count, const void* value) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push offset mem_0087D730
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 14h]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 14h], ecx
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        push edi
        mov dword ptr [ebp - 10h], esp
        jne L_576
        xor edi, edi
        jmp L_57E
L_576:
        mov edi, dword ptr [esi + 0ch]
        sub edi, ecx
        sar edi, 2
L_57E:
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        je L_770
        test ecx, ecx
        jne L_591
        xor eax, eax
        jmp L_599
L_591:
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
L_599:
        mov ebx, 3fffffffh
        sub ebx, eax
        cmp ebx, edx
        jae L_5A9
        call ext_00405FB0
L_5A9:
        test ecx, ecx
        jne L_5B1
        xor eax, eax
        jmp L_5B9
L_5B1:
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
L_5B9:
        add eax, edx
        cmp edi, eax
        jae L_6BE
        mov eax, edi
        shr eax, 1
        mov ebx, 3fffffffh
        sub ebx, eax
        cmp ebx, edi
        jae L_5D6
        xor edi, edi
        jmp L_5D8
L_5D6:
        add edi, eax
L_5D8:
        test ecx, ecx
        jne L_5E0
        xor eax, eax
        jmp L_5E8
L_5E0:
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
L_5E8:
        add eax, edx
        cmp edi, eax
        jae L_601
        test ecx, ecx
        jne L_5F6
        xor eax, eax
        jmp L_5FE
L_5F6:
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
L_5FE:
        lea edi, [eax + edx]
L_601:
        push 0
        push edi
        call ext_004A59A0
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov edx, dword ptr [ebp + 0ch]
        push ecx
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        push esi
        push ebx
        push edx
        push eax
        mov dword ptr [ebp - 18h], ebx
        mov dword ptr [ebp - 4], 0
        call ext_0044C2A0
        mov edx, dword ptr [ebp + 10h]
        add esp, 20h
        lea ecx, [ebp + 14h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_0044C420
        mov ecx, dword ptr [esi + 8]
        mov byte ptr [ebp + 14h], 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push esi
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push ecx
        push eax
        call ext_0044C2A0
        mov ecx, dword ptr [esi + 4]
        add esp, 18h
        test ecx, ecx
        jne L_66C
        xor eax, eax
        jmp L_674
L_66C:
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
L_674:
        add dword ptr [ebp + 10h], eax
        test ecx, ecx
        je L_684
        push ecx
        call ext_006A5C5C
        add esp, 4
L_684:
        mov edx, dword ptr [ebp + 10h]
        lea ecx, [ebx + edi*4]
        lea eax, [ebx + edx*4]
        mov dword ptr [esi + 0ch], ecx
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], ebx
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 10h
        // EH cleanup funclet (0x44C6A9)
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        call ext_006A5C5C
        add esp, 4
        push 0
        push 0
        call ext_006A6DD2
L_6BE:
        mov ebx, dword ptr [esi + 8]
        mov edi, dword ptr [ebp + 0ch]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cmp eax, edx
        jae L_734
        lea eax, [edx*4]
        mov dword ptr [ebp + 0ch], eax
        add eax, edi
        push eax
        push ebx
        push edi
        mov ecx, esi
        call ext_0044C4D0
        mov eax, dword ptr [esi + 8]
        mov edx, eax
        lea ecx, [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        sub edx, edi
        sar edx, 2
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 4], 2
        call ext_0044C420
        mov eax, dword ptr [ebp + 0ch]
        add dword ptr [esi + 8], eax
        mov esi, dword ptr [esi + 8]
        lea ecx, [ebp + 14h]
        push ecx
        sub esi, eax
        push esi
        push edi
        call ext_00469C90
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 10h
L_734:
        lea ecx, [edx*4]
        push ebx
        mov eax, ebx
        sub eax, ecx
        push ebx
        mov dword ptr [ebp + 0ch], ecx
        push eax
        mov ecx, esi
        mov dword ptr [ebp + 10h], eax
        call ext_0044C4D0
        mov edx, dword ptr [ebp + 10h]
        push ebx
        push edx
        push edi
        mov dword ptr [esi + 8], eax
        call ext_0044C360
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [ebp + 14h]
        push eax
        add ecx, edi
        push ecx
        push edi
        call ext_00469C90
        add esp, 18h
L_770:
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 10h
    }
}
