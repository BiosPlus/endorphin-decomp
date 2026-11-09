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
