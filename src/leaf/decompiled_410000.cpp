// Decompiled translation unit: src/leaf/decompiled_410000.cpp

#include <iostream>

// [0x0041D830] sub_0041D830 (19 bytes)
extern "C" void ext_006A7CA0();

struct TailTarget {
    void tail(int a1);
};
typedef void (TailTarget::*TailFn)(int);

extern "C" void __fastcall fn_0041D830(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    *(int*)(p + 0x30) = a1;
    TailTarget* next = *(TailTarget**)(p + 0xc);
    TailFn f;
    *(void**)&f = (void*)ext_006A7CA0;
    (next->*f)(a1);
}

// [0x004137F0] sub_004137F0 (23 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_004137F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x00415F97] sub_00415F97 (28 bytes)
extern "C" int mem_00925680;

// Both conditional branches leave the 28-byte body (targets 0x415FBA / 0x415FB3),
// so they are emitted as fixed short-jump encodings to keep the rel8 bytes exact.
extern "C" __declspec(naked) void __fastcall fn_00415F97(void* self) {
    __asm {
        test eax, eax
        _emit 0x74
        _emit 0x1f
        mov ecx, dword ptr [ecx + 0x54]
        cmp ecx, -1
        _emit 0x75
        _emit 0x10
        pop esi
        pop ebx
        mov dword ptr [esp + 4], 0xf
        jmp dword ptr [mem_00925680]
    }
}

// [0x0041CCA0] sub_0041CCA0 (29 bytes)
extern "C" int mem_009242F4;
extern "C" void ext_00454BA0();

extern "C" __declspec(naked) void __fastcall fn_0041CCA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x12c]
        mov dword ptr [esi], 0x0092DD84
        call dword ptr [mem_009242F4]
        mov ecx, esi
        pop esi
        jmp ext_00454BA0
    }
}

// [0x0041FEF0] sub_0041FEF0 (31 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0041FEF0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x20]
        push 0x0
        push eax
        push 0x1017
        push ecx
        call dword ptr [mem_00925694]
        mov dword ptr [esp + 0x4], eax
        jmp ext_006A5E00
    }
}

// [0x0041FD10] sub_0041FD10 (10 bytes)
extern "C" void ext_006A608E();

extern "C" __declspec(naked) void __fastcall fn_0041FD10(void* self) {
    __asm {
        push 0x0
        call ext_006A608E
        ret 0x8
    }
}

// [0x00418CD0] sub_00418CD0 (10 bytes)
extern "C" void ext_00418BE0();

extern "C" __declspec(naked) void __cdecl fn_00418CD0(void) {
    __asm {
        push 0x1
        push 0x0
        call ext_00418BE0
        ret
    }
}

// [0x00415420] sub_00415420 (11 bytes)
// Calls thunk_MFC80_ord_1903 (ext_006A5EA8), then ORs eax with 0x80 and returns.
// eax is the value left by the callee, so the body is written in naked asm to preserve it.
extern "C" void ext_006A5EA8();

extern "C" __declspec(naked) void __cdecl fn_00415420() {
    __asm {
        call ext_006A5EA8
        or eax, 0x80
        ret
    }
}

extern "C" void ext_0041D7B0();

// [0x0041D850] sub_0041D850 (15 bytes)
extern "C" void __fastcall fn_0041D850(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x34) = a1;
    ext_0041D7B0();
}

// [0x0041D860] sub_0041D860 (15 bytes)
extern "C" void __fastcall fn_0041D860(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x38) = a1;
    ext_0041D7B0();
}

// [0x0041D870] sub_0041D870 (15 bytes)
extern "C" void __fastcall fn_0041D870(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x3C) = a1;
    ext_0041D7B0();
}

// [0x0041D880] sub_0041D880 (15 bytes)
extern "C" void __fastcall fn_0041D880(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x40) = a1;
    ext_0041D7B0();
}

extern "C" void ext_006A5C6E();

// [0x004153E0] sub_004153E0 (18 bytes)
extern "C" void* __fastcall fn_004153E0(void* self) {
    ext_006A5C6E();
    *(unsigned int*)self = 0x0092C5ACu;
    return self;
}

// [0x00415ED0] sub_00415ED0 (20 bytes)
extern "C" void ext_00404BE0();

extern "C" __declspec(naked) void __fastcall fn_00415ED0(void* self) {
    __asm {
        push esi
        push 0
        mov esi, ecx
        call ext_00404BE0
        mov dword ptr [esi], 0x92c764
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0041CE20] sub_0041CE20 (22 bytes)
extern "C" void ext_00672080();

extern "C" void* __fastcall fn_0041CE20(void* self, int edx_unused, float a1) {
    typedef void (__thiscall *Fn)(void*, float);
    Fn f = (Fn)ext_00672080;
    f(self, a1);
    return self;
}

// [0x004151B0] sub_004151B0 (25 bytes)
extern "C" void ext_00401C60();

extern "C" void* __fastcall fn_004151B0(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x92c4c4;
    return self;
}

// [0x0041FF10] sub_0041FF10 (26 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_0041FF10(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x20]
        push 0
        push 0
        push 0x1018
        push eax
        call dword ptr [mem_00925694]
        push eax
        call ext_006A5E00
        ret
    }
}

// [0x0041CBD0] sub_0041CBD0 (27 bytes)
extern "C" void ext_006AD180();

extern "C" __declspec(naked) void __fastcall fn_0041CBD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        call ext_006AD180
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        pop esi
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}

// [0x0041DE10] sub_0041DE10 (27 bytes)
extern "C" void ext_0041DD40();

extern "C" __declspec(naked) void __fastcall fn_0041DE10(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0041DD40
        add esp, 0x10
        ret 0x8
    }
}

// [0x004135A0] sub_004135A0 (28 bytes)
extern "C" int mem_009244D4;
extern "C" void ext_004133F0();

extern "C" void __fastcall fn_004135A0(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *MfcFn)(void*, int);
    MfcFn f = (MfcFn)mem_009244D4;
    f((char*)self + 0x18, a1);
    ((void (__thiscall *)(void*))ext_004133F0)(self);
}

// [0x00419990] sub_00419990 (28 bytes)
extern "C" void ext_00419960();
extern "C" __declspec(naked) int __stdcall fn_00419990(int a1, int a2, int a3, int* a4) {
    __asm {
        cmp dword ptr [esp + 0x8], 0x1
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        jne short L_00419990_done
        call ext_00419960
L_00419990_done:
        xor eax, eax
        ret 0x10
    }
}

// [0x0041CA90] sub_0041CA90 (32 bytes)
extern "C" void ext_006AD180();

extern "C" void __fastcall fn_0041CA90(void* self, int edx_unused, void* a1, void* a2) {
    typedef void* (__fastcall *CalleeFn)(void*);
    typedef void (__thiscall *VFn)(void*, void*, void*);
    void* r = ((CalleeFn)ext_006AD180)(a1);
    void* p = *(void**)((char*)self + 4);
    void** vt = *(void***)p;
    ((VFn)vt[2])(p, r, a2);
}

// [0x0041DCF0] sub_0041DCF0 (34 bytes)
extern "C" void __fastcall fn_0041DCF0(void* self) {
    unsigned char* p = (unsigned char*)self;
    unsigned int zero = 0;
    *(unsigned int*)(p + 0x30) = 0x8f8f8f;
    *(unsigned int*)(p + 0x34) = 0xafafaf;
    *(unsigned int*)(p + 0x38) = zero;
    *(unsigned int*)(p + 0x3c) = 0x6f6f6f;
    *(unsigned int*)(p + 0x40) = zero;
    ext_0041D7B0();
}

// [0x00419960] sub_00419960 (35 bytes)
extern "C" int mem_00924300;
extern "C" int mem_00925694;
extern "C" void __fastcall fn_00419960(void* self) {
    int* s = (int*)self;
    if (s[1] != 0) {
        int r = ((int (__cdecl*)())mem_00924300)();
        ((int (__stdcall*)(int, int, int, int))mem_00925694)(s[1], 0x466, 1, r);
    }
}

// [0x00419DF0] sub_00419DF0 (35 bytes)
extern "C" int mem_00924300;
extern "C" int mem_00925694;
extern "C" void __fastcall fn_00419DF0(void* self, int edx_unused, int a1) {
    typedef int (__fastcall *FnOrd876)(int);
    typedef int (__stdcall *FnSendMessageA)(int, unsigned int, unsigned int, int);
    int v = ((FnOrd876)mem_00924300)(a1);
    int hwnd = *(int*)((char*)self + 0x20);
    ((FnSendMessageA)mem_00925694)(hwnd, 0x466, 1, v);
}

// [0x0041A070] sub_0041A070 (35 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_0041A070(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je short L_0041A082
        cmp eax, dword ptr [edi]
        je short L_0041A088
L_0041A082:
        call dword ptr [mem_00925134]
L_0041A088:
        mov eax, dword ptr [esi + 0x4]
        sub eax, dword ptr [edi + 0x4]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0041CEB0] sub_0041CEB0 (35 bytes)
extern "C" __declspec(naked) int __fastcall fn_0041CEB0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov eax, dword ptr [edx + 0x10]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00414880] sub_00414880 (38 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00414880(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je short L_00414892
        cmp eax, dword ptr [edi]
        je short L_00414898
L_00414892:
        call dword ptr [mem_00925134]
L_00414898:
        mov eax, dword ptr [esi + 0x4]
        sub eax, dword ptr [edi + 0x4]
        pop edi
        sar eax, 3
        pop esi
        ret 0x4
    }
}

// [0x0041A160] sub_0041A160 (38 bytes)
// __cdecl(first, last, dest): n = last - first; dest -= n; if (n > 0) memmove_s(dest, n, first, n); return dest.
// Naked: the body calls the MSVCR80!memmove_s IAT slot directly, and the original stack/register layout is kept.
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void* __cdecl fn_0041A160(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        sub eax, ecx
        sub esi, eax
        test eax, eax
        jle done
        push eax
        push ecx
        push eax
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    done:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00416AF0] sub_00416AF0 (39 bytes)
extern "C" int mem_00925694;

extern "C" void __fastcall fn_00416AF0(void* self) {
    typedef int (__stdcall *FnSendMessageA)(int, unsigned int, unsigned int, int);
    unsigned char* p = (unsigned char*)self;
    int r = ((FnSendMessageA)mem_00925694)(*(int*)(p + 0x150), 0x147, 0, 0);
    unsigned char* q = *(unsigned char**)(p + 0x184);
    *(int*)(q + 0x180) = r;
}

// [0x0041C570] sub_0041C570 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C570(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x8], 0
        je zero_path
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x10]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        call eax
        ret 0xc
zero_path:
        xor al, al
        ret 0xc
    }
}

// [0x0041C5A0] sub_0041C5A0 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C5A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x8], 0
        je zero_path
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        call eax
        ret 0xc
zero_path:
        xor al, al
        ret 0xc
    }
}

// [0x0041C600] sub_0041C600 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C600(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x8], 0
        je zero_path
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        call eax
        ret 0xc
zero_path:
        xor al, al
        ret 0xc
    }
}

// [0x00413990] sub_00413990 (40 bytes)
extern "C" int mem_009242E4;
extern "C" int mem_00924F9C;
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00413990(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x44]
        push eax
        mov dword ptr [esi], 0x92c1f4
        call dword ptr [mem_009242E4]
        mov ecx, dword ptr [esi + 0x3c]
        push ecx
        call ext_006A5C5C
        add esp, 4
        mov ecx, esi
        pop esi
        jmp dword ptr [mem_00924F9C]
    }
}

// [0x00413C40] sub_00413C40 (40 bytes)
extern "C" int mem_00924F48;
extern "C" __declspec(naked) void __fastcall fn_00413C40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x44]
        push eax
        mov dword ptr [esi], 0x92c230
        call dword ptr [mem_009242E4]
        mov ecx, dword ptr [esi + 0x3c]
        push ecx
        call ext_006A5C5C
        add esp, 4
        mov ecx, esi
        pop esi
        jmp dword ptr [mem_00924F48]
    }
}

// [0x0041FEC0] sub_0041FEC0 (41 bytes)
extern "C" int mem_00925694;
extern "C" __declspec(naked) int __fastcall fn_0041FEC0(void* self, int edx_unused, int* a1) {
    __asm {
        mov eax, dword ptr [ecx + 20h]
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, dword ptr [edi]
        push 2
        sub esi, 1
        push esi
        push 100ch
        push eax
        call dword ptr [mem_00925694]
        add eax, 1
        mov dword ptr [edi], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00410D10] sub_00410D10 (42 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int* __fastcall fn_00410D10(void* self, int edx_unused, int* out) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [edi], 0x0
        jbe short L_ok_00410D10
        call dword ptr [mem_00925134]
L_ok_00410D10:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x004148F0] sub_004148F0 (43 bytes)
struct Pair8 {
    int a;
    int b;
};

extern "C" Pair8* __cdecl fn_004148F0(Pair8* first, Pair8* last, Pair8* dest) {
    while (first != last) {
        if (dest) {
            dest->a = first->a;
            dest->b = first->b;
        }
        ++first;
        ++dest;
    }
    return dest;
}

// [0x00414EC0] sub_00414EC0 (41 bytes)
extern "C" void ext_004148F0();

extern "C" __declspec(naked) void __fastcall fn_00414EC0(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x18]
        mov byte ptr [esp], 0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        push edx
        call ext_004148F0
        add esp, 0x1c
        ret 0x14
    }
}

// [0x00416AC0] sub_00416AC0 (45 bytes)
extern "C" int mem_00925694;

extern "C" void __fastcall fn_00416AC0(void* self) {
    typedef int (__stdcall *FnSendMessageA)(int, unsigned int, unsigned int, int);
    unsigned char* p = (unsigned char*)self;
    int r = ((FnSendMessageA)mem_00925694)(*(int*)(p + 0xa8), 0xF0, 0, 0);
    unsigned char* q = *(unsigned char**)(p + 0x184);
    *(unsigned char*)(q + 0x178) = (r == 1) ? 1 : 0;
}

// [0x0041C540] sub_0041C540 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C540(void* self, int edx_unused, int s0, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0xc], eax
        mov dword ptr [ecx + 0x10], edx
        mov ecx, dword ptr [ecx + 0x8]
        test ecx, ecx
        je null_child
        push esi
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esi + 0xc]
        push eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        call edx
        pop esi
        ret 0xc
null_child:
        xor al, al
        ret 0xc
    }
}

// [0x0041C5D0] sub_0041C5D0 (45 bytes)
extern "C" __declspec(naked) int __fastcall fn_0041C5D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0xc], eax
        mov dword ptr [ecx + 0x10], edx
        mov ecx, dword ptr [ecx + 0x8]
        test ecx, ecx
        je zero
        push esi
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esi + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        call edx
        pop esi
        ret 0xc
zero:
        xor al, al
        ret 0xc
    }
}

// [0x0041C630] sub_0041C630 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C630(void* self, int edx_unused, int a0, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x14], eax
        mov dword ptr [ecx + 0x18], edx
        mov ecx, dword ptr [ecx + 0x8]
        test ecx, ecx
        je null_child
        push esi
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esi + 0x30]
        push eax
        mov eax, dword ptr [esp + 0x10]
        push eax
        call edx
        pop esi
        ret 0xc
null_child:
        xor al, al
        ret 0xc
    }
}

// [0x00419BF0] sub_00419BF0 (46 bytes)
extern "C" int mem_0092553C;
extern "C" void ext_006A6304();

extern "C" __declspec(naked) void __stdcall fn_00419BF0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jne L_419BFB
        ret 4
    L_419BFB:
        lea ecx, [esp + 4]
        push ecx
        push 0
        push 0
        push eax
        push 0
        call dword ptr [mem_0092553C]
        test eax, eax
        jge L_419C17
        push eax
        call ext_006A6304
    L_419C17:
        mov eax, dword ptr [esp + 4]
        ret 4
    }
}

// [0x004152D0] sub_004152D0 (48 bytes)
extern "C" int mem_009241E4;
extern "C" int mem_009241E0;

extern "C" __declspec(naked) void __fastcall fn_004152D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x24], 0
        je done
        mov eax, dword ptr [esi + 0x2c]
        push edi
        push eax
        call dword ptr [mem_009241E4]
        mov ecx, dword ptr [esi + 0x28]
        mov edi, dword ptr [mem_009241E0]
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x24]
        push edx
        call edi
        mov dword ptr [esi + 0x24], 0
        pop edi
done:
        pop esi
        ret
    }
}

// [0x0041DDA0] sub_0041DDA0 (50 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0041DDA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        je short L_skip_41DDA0
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip_41DDA0:
        mov dword ptr [esi + 0x24], 0
        mov dword ptr [esi + 0x28], 0
        mov dword ptr [esi + 0x2c], 0
        lea ecx, [esi + 4]
        pop esi
        jmp dword ptr [mem_00924FF4]
    }
}

// [0x00416F70] sub_00416F70 (51 bytes)
extern "C" void ext_00416E00();
extern "C" int mem_00925694;

extern "C" void __fastcall fn_00416F70(void* self) {
    unsigned char* p = (unsigned char*)self;
    typedef int (__stdcall *SendMessageFn)(void*, unsigned int, unsigned int, long);
    int r = ((SendMessageFn)mem_00925694)(*(void**)(p + 0x154), 0xf0, 0, 0);
    unsigned char* edx = *(unsigned char**)(p + 0x88);
    edx[0x165] = (unsigned char)(r == 1);
    typedef void (__fastcall *TailFn)(void*);
    ((TailFn)ext_00416E00)(self);
}

// [0x00414260] sub_00414260 (52 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;

extern "C" __declspec(naked) int __fastcall fn_00414260(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi]
        mov ecx, ebx
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [edi + 0x64]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x004142A0] sub_004142A0 (52 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;

extern "C" __declspec(naked) void __fastcall fn_004142A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924300]
        mov edx, dword ptr [edi + 0x70]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x0041CB40] sub_0041CB40 (52 bytes)
// Ignores ecx-this; takes one stack arg (a1 at [esp+4]). If a1 is null, returns 0.
// Otherwise calls 0x006AD180(a1) with ecx=a1, calls 0x006616C0 on (result + 0x10),
// then returns __RTDynamicCast(result, 0, 0xA2E2D8, 0xA2EFEC, 0) (ret 4).
extern "C" void ext_006AD180();
extern "C" void ext_006616C0();
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __fastcall fn_0041CB40(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        je L_null
        call ext_006AD180
        lea ecx, [eax + 10h]
        call ext_006616C0
        push 0
        push 0A2EFECh
        push 0A2E2D8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    L_null:
        xor eax, eax
        ret 4
    }
}

// [0x00414DC0] sub_00414DC0 (54 bytes)
struct Pair8_00414DC0 { unsigned int lo; unsigned int hi; };
extern "C" void* __cdecl fn_00414DC0(void* a1, void* first, void* a3, void* last, void* dest) {
    Pair8_00414DC0* f = (Pair8_00414DC0*)first;
    Pair8_00414DC0* l = (Pair8_00414DC0*)last;
    Pair8_00414DC0* d = (Pair8_00414DC0*)dest;
    Pair8_00414DC0* end = d + (l - f);
    while (f != l) {
        *d++ = *f++;
    }
    return end;
}

// [0x00411590] sub_00411590 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00413480();

extern "C" __declspec(naked) void __fastcall fn_00411590(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x0092BE30
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je short skip_call
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_call:
        mov dword ptr [esi + 0x58], 0
        mov dword ptr [esi + 0x5c], 0
        mov dword ptr [esi + 0x60], 0
        mov ecx, esi
        pop esi
        jmp ext_00413480
    }
}

// [0x0041B540] sub_0041B540 (54 bytes)
extern "C" void ext_006A6010();
extern "C" int mem_0093A0E4;

extern "C" __declspec(naked) int __fastcall fn_0041B540(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0E4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi + 0x114]
        test eax, eax
        pop edi
        pop esi
        jne short L_nonzero
        ret 0xc
    L_nonzero:
        mov eax, dword ptr [eax + 0x4]
        ret 0xc
    }
}

// [0x004148B0] sub_004148B0 (56 bytes)
extern "C" int mem_00925134;

extern "C" void __cdecl fn_004148B0(unsigned int* c, int n) {
    void (*invalid)() = (void (*)())mem_00925134;
    if (c[0] == 0) {
        invalid();
    }
    unsigned int* r = (unsigned int*)c[0];
    unsigned int step = (unsigned int)n << 3;
    unsigned int e = c[1] + step;
    if (e > r[2] || e < r[1]) {
        invalid();
    }
    c[1] += step;
}

// [0x00410290] sub_00410290 (57 bytes)
extern "C" __declspec(naked) int __fastcall fn_00410290(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, [edi + 0x54]
        test eax, eax
        jne short L_nonnull
        xor ebx, ebx
        jmp short L_loaded
    L_nonnull:
        mov ebx, dword ptr [eax + 0x4]
    L_loaded:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi + 0x5c]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x34]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [edi + 0x60]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x8
    }
}

// [0x00412E20] sub_00412E20 (57 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00412E20(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je L_zero
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
        jne L_nonempty
    L_zero:
        xor eax, eax
        pop esi
        pop ecx
        ret
    L_nonempty:
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, eax
        cmp edi, dword ptr [esi + 0xc]
        jbe L_chk2
        call ebx
        cmp edi, dword ptr [esi + 0xc]
    L_chk2:
        jb L_load
        call ebx
    L_load:
        mov eax, dword ptr [edi]
        pop edi
        pop ebx
        pop esi
        pop ecx
        ret
    }
}

// [0x0041CDE0] sub_0041CDE0 (57 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_0041CDE0(const void* first, const void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je short L_eq_0041CDE0
        push edi
        mov edi, dword ptr [esp + 0x18]
        L_loop_0041CDE0:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 0x1c]
        mov dword ptr [edi + 0x1c], eax
        add esi, 0x20
        add edi, 0x20
        cmp esi, ebx
        jne short L_loop_0041CDE0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
        L_eq_0041CDE0:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00416B20] sub_00416B20 (59 bytes)
extern "C" int mem_00925694;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_00416B20(void* self) {
    __asm {
        push esi
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x1a8]
        push 0x147
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esi + 0x184]
        mov dword ptr [ecx + 0x188], eax
        mov edx, dword ptr [esi + 0x184]
        mov eax, dword ptr [edx + 0x20]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
        pop esi
        ret
    }
}

// [0x004155A0] sub_004155A0 (60 bytes)
extern "C" int mem_009241F8;

extern "C" __declspec(naked) void* __cdecl fn_004155A0(const unsigned short* src, char* dst) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, edx
        push esi
        lea esi, [eax + 0x2]
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loop_len:
        mov cx, word ptr [eax]
        add eax, 0x2
        test cx, cx
        jne loop_len
        push 0x0
        sub eax, esi
        mov esi, dword ptr [esp + 0x10]
        push 0x0
        __asm _emit 0xd1 __asm _emit 0xf8
        add eax, 0x1
        push eax
        push esi
        push eax
        push edx
        push 0x0
        push 0x0
        call dword ptr [mem_009241F8]
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00413810] sub_00413810 (60 bytes)
extern "C" void ext_006A6178();
extern "C" int mem_00924FA0;
extern "C" int mem_00924FA4;
extern "C" int mem_00924FA8;
extern "C" int mem_00924FAC;

extern "C" __declspec(naked) void __fastcall fn_00413810(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A6178
        mov eax, dword ptr [esi + 0x1ac]
        push eax
        mov eax, dword ptr [mem_00924FA0]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0x4]
        add ecx, eax
        call dword ptr [mem_00924FA4]
        mov eax, dword ptr [mem_00924FA8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x1b0]
        mov ecx, dword ptr [ecx + 0x4]
        push edx
        add ecx, eax
        call dword ptr [mem_00924FAC]
        pop esi
        ret
    }
}

// [0x00418830] sub_00418830 (62 bytes)
extern "C" void ext_006A5FDA();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00418830(void* self) {
    __asm {
        push esi
        push edi
        push 0x0
        push 0x0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8d0]
        push 0xf0
        push eax
        call dword ptr [mem_00925694]
        cmp eax, 0x1
        sete al
        movzx edi, al
        push edi
        lea ecx, [esi + 0x808]
        call ext_006A5FDA
        push edi
        lea ecx, [esi + 0x85c]
        call ext_006A5FDA
        pop edi
        pop esi
        ret
    }
}

// [0x004102D0] sub_004102D0 (62 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" int mem_0092407C;
extern "C" int mem_00925668;

extern "C" void __fastcall fn_004102D0(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    void* field = p + 0x54;
    *(int*)(p + 0x5c) = a1;
    ((void (__thiscall*)(void*))ext_006A5FF2)(field);
    void* brush = ((void* (__stdcall*)(int))mem_0092407C)(a1);
    ((void (__thiscall*)(void*, void*))ext_006A5FFE)(field, brush);
    int hwnd = *(int*)(p + 0x20);
    ((int (__stdcall*)(int, int, int, int))mem_00925668)(hwnd, 0, 0, 0x105);
}

// [0x0041CB00] sub_0041CB00 (64 bytes)
extern "C" void ext_006AD180();
extern "C" __declspec(naked) int __fastcall fn_0041CB00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push edi
        call ext_006AD180
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov edi, eax
        je short L_zero_0041CB00
        call ext_006AD180
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x10]
        push edi
        call eax
        pop edi
        pop esi
        ret 0x8
L_zero_0041CB00:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 0x10]
        push edi
        call eax
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x004180E0] sub_004180E0 (66 bytes)
extern "C" void ext_006A617E();
extern "C" void ext_00417340();
extern "C" int mem_0093A0C0;
extern "C" int mem_0093A0B0;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004180E0(void* self) {
    __asm {
        mov eax, dword ptr [mem_0093A0C0]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [mem_0093A0B0]
        push 0
        push eax
        lea esi, [edi + 0x368]
        push ecx
        mov ecx, esi
        call ext_006A617E
        test esi, esi
        je skip_load
        mov esi, dword ptr [esi + 4]
    skip_load:
        mov edx, dword ptr [edi + 0x390]
        push 1
        push esi
        push 0x30
        push edx
        call dword ptr [mem_00925694]
        mov ecx, edi
        pop edi
        pop esi
        jmp ext_00417340
    }
}

// [0x0041C660] sub_0041C660 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C660(void* self, int edx_unused, int a1, short a2, int a3, int a4) {
    __asm {
        cmp dword ptr [ecx + 0x8], 0x0
        je short L_null_0041C660
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [ecx + 0x8]
        push esi
        movsx esi, word ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [ecx]
        push eax
        push edx
        mov eax, 0x88888889
        imul esi
        add edx, esi
        sar edx, 0x6
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [edi + 0x34]
        push edx
        call eax
        pop edi
        pop esi
        ret 0x10
L_null_0041C660:
        xor al, al
        ret 0x10
    }
}

// [0x0041CAB0] sub_0041CAB0 (68 bytes)
extern "C" void ext_006AD180();

extern "C" __declspec(naked) void __fastcall fn_0041CAB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push edi
        mov byte ptr [esi + 0x2c], 0x1
        call ext_006AD180
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        mov edi, eax
        je L_null_0041CAB0
        call ext_006AD180
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        push edi
        call eax
        pop edi
        pop esi
        ret 0x8
L_null_0041CAB0:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        xor eax, eax
        push eax
        mov eax, dword ptr [edx + 0xc]
        push edi
        call eax
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x0041CCC0] sub_0041CCC0 (69 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0041CCC0(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_bad
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [8*edi]
        sub eax, edi
        pop edi
        lea eax, [ecx + 4*eax]
        pop esi
        ret 0x4
    }
}

// [0x0041CD10] sub_0041CD10 (69 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0041CD10(void* self, int edx_unused, unsigned int index) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        je L_bad
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [8*edi]
        sub eax, edi
        pop edi
        lea eax, [ecx + 8*eax]
        pop esi
        ret 0x4
    }
}

// [0x004141D0] sub_004141D0 (70 bytes)
extern "C" void ext_006A6010();
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C4;

extern "C" __declspec(naked) int __fastcall fn_004141D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi + 0x1b4]
        test eax, eax
        pop edi
        pop esi
        jne short L_nonzero
        ret 0xc
    L_nonzero:
        mov eax, dword ptr [eax + 0x4]
        ret 0xc
    }
}

// [0x0041FD20] sub_0041FD20 (72 bytes)
extern "C" int mem_009245A8;
extern "C" int mem_00924208;
extern "C" int mem_009241D4;
extern "C" __declspec(naked) void* __fastcall fn_0041FD20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x4], 0
        jne have
        push edi
        lea edi, [esi + 0xc]
        mov ecx, edi
        call dword ptr [mem_009245A8]
        push eax
        call dword ptr [mem_00924208]
        test eax, eax
        mov dword ptr [esi + 0x4], eax
        jne done
        mov ecx, edi
        call dword ptr [mem_009245A8]
        push eax
        call dword ptr [mem_009241D4]
        test eax, eax
        mov dword ptr [esi + 0x4], eax
        setne al
        mov byte ptr [esi + 0x8], al
        mov eax, dword ptr [esi + 0x4]
done:
        pop edi
        pop esi
        ret
have:
        mov eax, dword ptr [esi + 0x4]
        pop esi
        ret
    }
}

// [0x0041FD70] sub_0041FD70 (42 bytes)
// Lazily resolves GetProcAddress(ext_0041FD20(self), 0x92E180) into [self+0x2c], then stores it to *out.
extern "C" void ext_0041FD20();
extern "C" int mem_009241D8;

extern "C" __declspec(naked) void __fastcall fn_0041FD70(void* self, int edx_unused, void** out) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x2c], 0x0
        jne short L_0041FD8D
        push 0x92e180
        call ext_0041FD20
        push eax
        call dword ptr [mem_009241D8]
        mov dword ptr [esi + 0x2c], eax
    L_0041FD8D:
        mov ecx, dword ptr [esi + 0x2c]
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        pop esi
        ret 0x4
    }
}

// [0x0041CF00] sub_0041CF00 (76 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0041CF00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        cmp dword ptr [esi + 4], 0
        push edi
        mov edi, ecx
        je L_zero_41CF00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x10]
        push edx
        call eax
        mov ecx, dword ptr [eax]
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [edi + 4], edx
        mov eax, edi
        pop edi
        pop esi
        ret 4
L_zero_41CF00:
        lea eax, [esp + 0xc]
        mov dword ptr [esp + 0xc], 0
        mov ecx, dword ptr [eax]
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esi + 4]
        mov dword ptr [edi + 4], edx
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x00419B90] sub_00419B90 (81 bytes)
extern "C" void ext_006A6304();
extern "C" int mem_00925540;

extern "C" __declspec(naked) void __fastcall fn_00419B90(void* self) {
    __asm {
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x60], 0
        je L_done_00419B90
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor bl, bl
        test esi, esi
        jne L_call_00419B90
        lea eax, [esp + 0x10]
        push eax
        mov bl, 1
        call dword ptr [mem_00925540]
        test eax, eax
        jge L_call_00419B90
        push eax
        call ext_006A6304
L_call_00419B90:
        mov edx, dword ptr [edi + 0x60]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x14]
        push edx
        push esi
        call eax
        test bl, bl
        je L_skip_00419B90
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 0x8]
        push esi
        call edx
L_skip_00419B90:
        pop esi
        mov dword ptr [edi + 0x60], 0
        pop ebx
L_done_00419B90:
        pop edi
        ret 4
    }
}

// [0x0041A0A0] sub_0041A0A0 (82 bytes)
extern "C" void __fastcall fn_0041A0A0(void* self, int edx_unused, void* a1) {
    char* node = (char*)a1;
    char* eax = *(char**)node;
    char* esi = *(char**)(eax + 8);
    *(char**)node = esi;
    esi = *(char**)(eax + 8);
    if (*(unsigned char*)(esi + 0x15) == 0) {
        *(char**)(esi + 4) = node;
    }
    esi = *(char**)(node + 4);
    *(char**)(eax + 4) = esi;
    char* ecx = *(char**)((char*)self + 4);
    if (node == *(char**)(ecx + 4)) {
        *(char**)(ecx + 4) = eax;
        *(char**)(eax + 8) = node;
        *(char**)(node + 4) = eax;
        return;
    }
    ecx = *(char**)(node + 4);
    if (node == *(char**)(ecx + 8)) {
        *(char**)(ecx + 8) = eax;
        *(char**)(eax + 8) = node;
        *(char**)(node + 4) = eax;
        return;
    }
    *(char**)ecx = eax;
    *(char**)(eax + 8) = node;
    *(char**)(node + 4) = eax;
}

// [0x0041CF50] sub_0041CF50 (85 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0041CF50(void* self, int edx_unused, void* other) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        cmp esi, edi
        je done_0041CF50
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip_release_0041CF50
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        push esi
        call edx
skip_release_0041CF50:
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], eax
        cmp dword ptr [edi + 0x4], 0
        lea eax, [esp + 0xc]
        je zero_0041CF50
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push edi
        push eax
        call edx
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
        pop edi
        mov eax, esi
        pop esi
        ret 4
zero_0041CF50:
        mov dword ptr [esp + 0xc], 0
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
done_0041CF50:
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0041C820] sub_0041C820 (86 bytes)
// Constructor with an SEH frame (try level -1, handler 0x8a7a5b): stores the vtable
// 0x92db90 at this+0, zeroes this+8, allocates 0x10 bytes via ext_006A5C62 (cdecl
// operator new), zeroes the first three dwords of the block (NULL if allocation failed),
// stores the block at this+4, restores the previous SEH link and returns this in eax.
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void* __fastcall fn_0041C820(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push 0x10
        mov dword ptr [esi], 0x92db90
        mov dword ptr [esi + 0x8], edi
        call ext_006A5C62
        add esp, 0x4
        cmp eax, edi
        je null_block
        mov dword ptr [eax + 0x4], edi
        mov dword ptr [eax + 0x8], edi
        mov dword ptr [eax + 0xc], edi
        jmp store_block
    null_block:
        xor eax, eax
    store_block:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00414D30] sub_00414D30 (88 bytes)
extern "C" __declspec(naked) float* __fastcall fn_00414D30(float* self, int edx_unused, float a0, float a1, float a2, float a3) {
    __asm {
        fld dword ptr [esp + 0x4]
        fst dword ptr [ecx]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0xc]
        fst dword ptr [ecx + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp short L_noswap02
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [ecx]
        fstp dword ptr [ecx + 0x8]
        jmp short L_cmp13
L_noswap02:
        fstp st(0)
L_cmp13:
        fld dword ptr [ecx + 0x4]
        fld dword ptr [ecx + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x5
        mov eax, ecx
        jp short L_ret
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [ecx + 0xc]
L_ret:
        ret 0x10
    }
}

// [0x00410230] sub_00410230 (88 bytes)
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5FF2();

extern "C" __declspec(naked) void __fastcall fn_00410230(void* self) {
    __asm {
        push -1
        push 0x00874FB8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0092BBCC
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A5EFC
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00410390] sub_00410390 (89 bytes)
extern "C" int mem_00924FC0;
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) int __fastcall fn_00410390(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        push edi
        call edx
        test al, al
        jne ret_zero
        add esi, 0x458
        push 0x928b5d
        push esi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        jne ret_one
        mov edi, dword ptr [mem_00924FC4]
        push 0xb41b9c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne ret_one
        push 0xb41b80
        push esi
        call edi
        add esp, 0x8
        test al, al
        je ret_zero
ret_one:
        pop edi
        mov eax, 0x1
        pop esi
        ret
ret_zero:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00410420] sub_00410420 (36 bytes)
extern "C" void ext_00410390();

extern "C" __declspec(naked) void __fastcall fn_00410420(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne short L_fail
        mov ecx, esi
        call ext_00410390
        test al, al
        jne short L_fail
        mov eax, 0x1
        pop esi
        ret
    L_fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x004103F0] sub_004103F0 (47 bytes)
extern "C" __declspec(naked) int __fastcall fn_004103F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne short L_second
        mov ecx, esi
        call ext_00410390
        test al, al
        je short L_one
    L_second:
        mov ecx, esi
        call ext_00410390
        test al, al
        jne short L_one
        xor eax, eax
        pop esi
        ret
    L_one:
        mov eax, 1
        pop esi
        ret
    }
}

// [0x00412E60] sub_00412E60 (93 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00412E60(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        test ebx, ebx
        push esi
        mov esi, ecx
        jl L_fail
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        jne L_nz
        xor eax, eax
        jmp L_sz
    L_nz:
        mov eax, dword ptr [esi + 0xc]
        sub eax, ecx
        sar eax, 0x2
    L_sz:
        add eax, -0x1
        cmp ebx, eax
        jg L_fail
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        mov edi, ecx
        cmp edi, dword ptr [esi + 0xc]
        jbe L_c1
        call ebp
    L_c1:
        lea edi, [edi + 4*ebx]
        cmp edi, dword ptr [esi + 0xc]
        ja L_c2
        cmp edi, dword ptr [esi + 0x8]
        jae L_c3
    L_c2:
        call ebp
    L_c3:
        cmp edi, dword ptr [esi + 0xc]
        jb L_c4
        call ebp
    L_c4:
        mov eax, dword ptr [edi]
        pop edi
        pop ebp
        pop esi
        pop ebx
        ret 0x4
    L_fail:
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x0041DD40] sub_0041DD40 (96 bytes)
// __cdecl(first, last): SEH-framed (state -1/0) loop over 0x38-byte elements, destroying the
// std::string at +0x1c then the one at +0 via the MSVCP80 ~basic_string import.
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0041DD40(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
loop_top:
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        add esi, 0x38
        cmp esi, edi
        mov dword ptr [esp + 0x18], esi
        jne loop_top
done:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0041E070] sub_0041E070 (96 bytes)
extern "C" void ext_0041DCF0();

extern "C" __declspec(naked) void __fastcall fn_0041E070(void* self) {
    __asm {
        push -1
        push 0x00877691
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        xor eax, eax
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], 0x0092DF58
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov byte ptr [esp + 0x10], 0x2
        mov byte ptr [esi + 0x2c], al
        call ext_0041DCF0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00415430] sub_00415430 (100 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A5EC0();
extern "C" int mem_00925650;
extern "C" int mem_0092561C;
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_00415430(void* self) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        push edi
        jne short L_415448
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
    L_415448:
        push eax
        call ext_006A5E00
        mov edi, eax
        test edi, edi
        je short L_41548E
        mov ecx, dword ptr [edi + 0x20]
        push ecx
        call dword ptr [mem_0092561C]
        test eax, eax
        je short L_41548E
        mov edx, dword ptr [esi + 0x20]
        mov ecx, esi
        mov dword ptr [esp + 0x8], edx
        call ext_006A5EC0
        mov edx, dword ptr [edi + 0x20]
        lea ecx, [esp + 0x8]
        push ecx
        push eax
        push 0x4e
        push edx
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], 0xfffffffc
        call dword ptr [mem_00925694]
    L_41548E:
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00415540] sub_00415540 (61 bytes)
extern "C" void ext_006A5EA8();
extern "C" __declspec(naked) void __fastcall fn_00415540(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov eax, dword ptr [esi + 0x20]
        mov edi, dword ptr [mem_00925694]
        push 0x0
        push 0x0
        push 0xb8
        push eax
        call edi
        test eax, eax
        je short L_415578
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        push 0x0
        push 0xb9
        push ecx
        call edi
        mov ecx, esi
        call fn_00415430
    L_415578:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x004155E0] sub_004155E0 (103 bytes)
extern "C" void ext_00458E10();
extern "C" void ext_00458FE0();
extern "C" int mem_009242E4;
extern "C" int mem_00924EF0;

extern "C" __declspec(naked) void __fastcall fn_004155E0(void* self) {
    __asm {
        push -1
        push 0x00875C24
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0092C744
        mov dword ptr [esp + 0x10], 0x1
        call ext_00458E10
        lea eax, [esi + 0x2C]
        push eax
        call dword ptr [mem_009242E4]
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924EF0]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00458FE0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0041DA50] sub_0041DA50 (71 bytes)
extern "C" void ext_00660280();
extern "C" void ext_00465B30();
extern "C" void ext_00469170();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_0041DA50(void* self) {
    __asm {
        push edi
        xor edi, edi
        call ext_00660280
        test eax, eax
        je ret_edi_0041DA50
        push esi
        call ext_00465B30
        mov ecx, eax
        call ext_00469170
        mov esi, eax
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je pop_ret_0041DA50
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        je pop_ret_0041DA50
        test eax, eax
        ja ok_0041DA50
        call dword ptr [mem_00925134]
ok_0041DA50:
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax]
        pop esi
        pop edi
        ret
ret_edi_0041DA50:
        mov eax, edi
        pop edi
        ret
pop_ret_0041DA50:
        pop esi
        mov eax, edi
        pop edi
        ret
    }
}

// [0x0041A190] sub_0041A190 (105 bytes)
struct TreeNode_0041A190 {
    TreeNode_0041A190* left;
    TreeNode_0041A190* parent;
    TreeNode_0041A190* right;
    unsigned int key;
    unsigned char pad[4];
    unsigned char color;
    unsigned char isnil;
};

struct TreePair_0041A190 {
    void* first;
    TreeNode_0041A190* second;
};

extern "C" __declspec(naked) void __fastcall fn_0041A190(void* self, int edx_unused, TreePair_0041A190* ret, const unsigned int* key) {
    __asm {
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx + 0x4]
        sub esp, 0x10
        cmp byte ptr [eax + 0x15], 0x0
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        jne L_1bb_0041A190
        mov esi, dword ptr [edi]
    L_1a7_0041A190:
        cmp dword ptr [eax + 0xc], esi
        jae L_1b1_0041A190
        mov eax, dword ptr [eax + 0x8]
        jmp L_1b5_0041A190
    L_1b1_0041A190:
        mov edx, eax
        mov eax, dword ptr [eax]
    L_1b5_0041A190:
        cmp byte ptr [eax + 0x15], 0x0
        je L_1a7_0041A190
    L_1bb_0041A190:
        mov eax, dword ptr [ecx + 0x4]
        cmp edx, eax
        mov dword ptr [esp + 0xc], edx
        mov dword ptr [esp + 0x8], ecx
        je L_1d7_0041A190
        mov esi, dword ptr [edi]
        cmp esi, dword ptr [edx + 0xc]
        jb L_1d7_0041A190
        lea ecx, [esp + 0x8]
        jmp L_1e3_0041A190
    L_1d7_0041A190:
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], eax
        lea ecx, [esp + 0x10]
    L_1e3_0041A190:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

// [0x0041A4F0] sub_0041A4F0 (60 bytes)
extern "C" void ext_0048EF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041A4F0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x54]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_skip1
        call ebp
    L_skip1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_skip2
        call ebp
    L_skip2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_0048EF80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00416C30] sub_00416C30 (107 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) int __fastcall fn_00416C30(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        lea ecx, [esp + 4]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esp + 0x18]
        lea eax, [esp + 4]
        push eax
        mov dword ptr [esp + 0x14], 0
        call ext_006A5F4A
        lea ecx, [esp + 4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        add esp, 4
        lea ecx, [esp + 4]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00419F50] sub_00419F50 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00419F50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_00419F50
        call edi
    L_skip_call_00419F50:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        je L_not_nil_00419F50
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_00419F50:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x15], 0x0
        jne L_right_nil_00419F50
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x15], 0x0
        jne L_store_left_00419F50
    L_leftmost_loop_00419F50:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0x15], 0x0
        je L_leftmost_loop_00419F50
    L_store_left_00419F50:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_right_nil_00419F50:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        jne L_store_parent_00419F50
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_up_loop_00419F50:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x8]
        jne L_store_parent_00419F50
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        je L_up_loop_00419F50
    L_store_parent_00419F50:
        pop edi
        mov dword ptr [esi + 0x4], eax
        pop esi
        ret
    }
}

// [0x0041A200] sub_0041A200 (87 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041A200(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_top_0041A200:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_0041A200
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_0041A200
    L_inv1_0041A200:
        call ebx
    L_ok1_0041A200:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_0041A200
        lea ecx, [esp + 0x14]
        call fn_00419F50
        test esi, esi
        jne L_s1_0041A200
        call ebx
    L_s1_0041A200:
        cmp edi, dword ptr [esi + 0x4]
        jne L_s2_0041A200
        call ebx
    L_s2_0041A200:
        mov ecx, dword ptr [edi + 0x10]
        test ecx, ecx
        je L_top_0041A200
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 1
        call edx
        jmp L_top_0041A200
    L_done_0041A200:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x00414E60] sub_00414E60 (94 bytes)
extern "C" void ext_004153A0();
extern "C" void ext_00419F50();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00414E60(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_loop_00414E60:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_00414E60
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_00414E60
    L_inv1_00414E60:
        call ebx
    L_ok1_00414E60:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_00414E60
        lea ecx, [esp + 0x14]
        call ext_00419F50
        test esi, esi
        jne L_skip2_00414E60
        call ebx
    L_skip2_00414E60:
        cmp edi, dword ptr [esi + 0x4]
        jne L_skip3_00414E60
        call ebx
    L_skip3_00414E60:
        mov edi, dword ptr [edi + 0x10]
        test edi, edi
        je L_loop_00414E60
        mov ecx, edi
        call ext_004153A0
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp L_loop_00414E60
    L_done_00414E60:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x00414E00] sub_00414E00 (94 bytes)
extern "C" void ext_004153A0();
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00414E00(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, edi
    L_loop_00414E00:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_inv1_00414E00
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_00414E00
    L_inv1_00414E00:
        call ebx
    L_ok1_00414E00:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, ebp
        je L_done_00414E00
        lea ecx, [esp + 0x14]
        call ext_00673C20
        test esi, esi
        jne L_skip2_00414E00
        call ebx
    L_skip2_00414E00:
        cmp edi, dword ptr [esi + 0x4]
        jne L_skip3_00414E00
        call ebx
    L_skip3_00414E00:
        mov edi, dword ptr [edi + 0x28]
        test edi, edi
        je L_loop_00414E00
        mov ecx, edi
        call ext_004153A0
        push edi
        call ext_006A5C5C
        add esp, 0x4
        jmp L_loop_00414E00
    L_done_00414E00:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x0041A530] sub_0041A530 (110 bytes)
extern "C" void ext_0041A190();

extern "C" __declspec(naked) int __fastcall fn_0041A530(void* self, int edx_unused, unsigned int key) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        jne L_0041A545
        xor eax, eax
        pop esi
        add esp, 0x8
        ret 0x4
    L_0041A545:
        push ebx
        push ebp
        push edi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0041A190
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        mov ebp, dword ptr [mem_00925134]
        je L_0041A56E
        cmp edi, esi
        je L_0041A570
    L_0041A56E:
        call ebp
    L_0041A570:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_0041A592
        test edi, edi
        jne L_0041A57E
        call ebp
    L_0041A57E:
        cmp esi, dword ptr [edi + 0x4]
        jne L_0041A585
        call ebp
    L_0041A585:
        mov eax, dword ptr [esi + 0x10]
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x8
        ret 0x4
    L_0041A592:
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00419840] sub_00419840 (114 bytes)
extern "C" void ext_0040EF90();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A624A();

extern "C" __declspec(naked) void __fastcall fn_00419840(void* self) {
    __asm {
        push -1
        push 0x876856
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x92d1d4
        mov dword ptr [esi + 0x74], 0x92d1a4
        lea ecx, [esi + 0x11c]
        mov dword ptr [esp + 0x10], 0x1
        call ext_0040EF90
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A624A
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004167A0] sub_004167A0 (117 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004167A0(void* self) {
    __asm {
        push -1
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
        lea ecx, [esi + 0xdc]
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        mov ecx, dword ptr [esi + 0x184]
        mov dword ptr [ecx + 0x17c], eax
        add esp, 0x4
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0041BA60] sub_0041BA60 (119 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0041BA60(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x134]
        mov dword ptr [esp + 0x14], 0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        mov ecx, dword ptr [esi + 0x1ec]
        mov edx, dword ptr [ecx]
        add esp, 0x4
        push eax
        mov eax, dword ptr [edx + 0x48]
        call eax
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0041BAE0] sub_0041BAE0 (119 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_0041BAE0(void* self) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x188]
        mov dword ptr [esp + 0x14], 0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251E4]
        mov ecx, dword ptr [esi + 0x1ec]
        mov edx, dword ptr [ecx]
        add esp, 0x4
        push eax
        mov eax, dword ptr [edx + 0x44]
        call eax
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004101B0] sub_004101B0 (122 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FFE();
extern "C" int mem_00925680;
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void __fastcall fn_004101B0(void* self) {
    __asm {
        push -1
        push 0x00874FA3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_006A5C6E
        lea edi, [esi + 0x54]
        mov dword ptr [esi], 0x0092BBCC
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [edi + 0x4], 0x0
        mov dword ptr [edi], 0x0092A254
        push 0xf
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00925680]
        push eax
        mov dword ptr [esi + 0x5c], eax
        mov dword ptr [esi + 0x60], 0x0
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00412C20] sub_00412C20 (127 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00594620();
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00412C20(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xf9
        _emit 0x56
        _emit 0x8b
        _emit 0x00
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        lea ecx, [esi + 0x18]
        mov edi, eax
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 8]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call ext_00594620
        test eax, eax
        je short L_done_00412C20
        cmp byte ptr [esi + 0x37], 0
        sete cl
        mov byte ptr [eax + 0x4e6], cl
    L_done_00412C20:
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x004188C0] sub_004188C0 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_004188C0(void* self) {
    __asm {
        push ebx
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x3e4]
        push 0xf0
        push eax
        call dword ptr [mem_00925694]
        cmp eax, 1
        sete bl
        test bl, bl
        je L_no1
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x90]
        call eax
        test al, al
        je L_no1
        mov eax, 1
        jmp L_end1
    L_no1:
        xor eax, eax
    L_end1:
        push eax
        lea ecx, [esi + 0x418]
        call ext_006A5FDA
        test bl, bl
        je L_no2
        mov ecx, dword ptr [esi + 0x74]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x90]
        call eax
        test al, al
        je L_no2
        mov eax, 1
        jmp L_end2
    L_no2:
        xor eax, eax
    L_end2:
        push eax
        lea ecx, [esi + 0x46c]
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x78]
        pop esi
        mov byte ptr [ecx + 0xa8], bl
        pop ebx
        ret
    }
}

// [0x0041B960] sub_0041B960 (128 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251F0;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0041B960(void* self) {
    __asm {
        push -0x1
        push 0x877289
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x8c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x1ec]
        fld dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        fstp dword ptr [esp]
        mov eax, dword ptr [edx + 0x40]
        call eax
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0041B9E0] sub_0041B9E0 (128 bytes)
extern "C" void ext_006A5F4A();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251F0;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_0041B9E0(void* self) {
    __asm {
        push -0x1
        push 0x877289
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242FC]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0xe0]
        mov dword ptr [esp + 0x18], 0x0
        call ext_006A5F4A
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x1ec]
        fld dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        fstp dword ptr [esp]
        mov eax, dword ptr [edx + 0x3c]
        call eax
        lea ecx, [esp + 0x4]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00412EC0] sub_00412EC0 (129 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00925628;

extern "C" __declspec(naked) void* __fastcall fn_00412EC0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        lea ebx, [ecx + 0x4]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        jbe chk_ok1
        call dword ptr [mem_00925134]
    chk_ok1:
        mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_head:
        mov edi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], edi
        jbe chk_ok2
        call dword ptr [mem_00925134]
    chk_ok2:
        cmp ebx, ebx
        je chk_ok3
        call dword ptr [mem_00925134]
    chk_ok3:
        cmp esi, edi
        je not_found
        cmp esi, dword ptr [ebx + 0x8]
        jb chk_ok4
        call dword ptr [mem_00925134]
    chk_ok4:
        mov eax, dword ptr [ebp + 0x4]
        mov edi, dword ptr [esi]
        mov ecx, dword ptr [ebp]
        push eax
        push ecx
        lea edx, [edi + 0x30]
        push edx
        call dword ptr [mem_00925628]
        test eax, eax
        jne found
        cmp esi, dword ptr [ebx + 0x8]
        jb chk_ok5
        call dword ptr [mem_00925134]
    chk_ok5:
        add esi, 0x4
        jmp loop_head
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    not_found:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x00412F50] sub_00412F50 (46 bytes)
extern "C" void ext_00412EC0();
extern "C" void ext_0043B400();

extern "C" __declspec(naked) int __fastcall fn_00412F50(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_00412EC0
        test eax, eax
        je L_zero_00412F50
        mov ecx, eax
        call ext_0043B400
        test eax, eax
        jne L_zero_00412F50
        cmp dword ptr [esi], 0xf
        jge L_zero_00412F50
        mov eax, 1
        pop esi
        ret 4
L_zero_00412F50:
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x0041B480] sub_0041B480 (130 bytes)
extern "C" void ext_0040FD00();

extern "C" __declspec(naked) void __fastcall fn_0041B480(void* self) {
    __asm {
        push -1
        push 0x876a84
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x92d5c4
        mov dword ptr [esi + 0x74], 0x92d594
        lea ecx, [esi + 0x194]
        mov dword ptr [esp + 0x10], 0x2
        call ext_0040EF90
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x10], 0x1
        call ext_0040FD00
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A624A
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00416710] sub_00416710 (133 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F38();
extern "C" void ext_006A61D2();

extern "C" __declspec(naked) void __fastcall fn_00416710(void* self) {
    __asm {
        push -1
        push 0x00875C82
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0092C92C
        lea ecx, [esi + 0x188]
        mov dword ptr [esp + 0x10], 0x3
        call ext_006A5F2C
        lea ecx, [esi + 0x130]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5F2C
        lea ecx, [esi + 0xdc]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, [esi + 0x88]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5DFA
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A61D2
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00410D40] sub_00410D40 (136 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009244D4;
extern "C" __declspec(naked) void __fastcall fn_00410D40(void* self) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 0x8]
        cmp esi, dword ptr [ecx + 0xc]
        push edi
        lea edi, [ecx + 0x4]
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], esi
        jbe L_00410D62
        call ebp
    L_00410D62:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        mov dword ptr [esp + 0x18], ebx
        jbe L_00410D70
        call ebp
    L_00410D70:
        test edi, edi
        je L_00410D78
        cmp edi, edi
        je L_00410D7A
    L_00410D78:
        call ebp
    L_00410D7A:
        cmp esi, ebx
        je L_00410DC0
        test edi, edi
        jne L_00410D84
        call ebp
    L_00410D84:
        cmp esi, dword ptr [edi + 0x8]
        jb L_00410D8B
        call ebp
    L_00410D8B:
        cmp edi, edi
        mov ebx, dword ptr [esi]
        je L_00410D99
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_00410D99:
        cmp esi, dword ptr [esp + 0x10]
        jne L_00410DB0
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x1c
        push eax
        lea ecx, [ebx + 0x0c]
        call dword ptr [mem_009244D4]
    L_00410DB0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_00410DB7
        call ebp
    L_00410DB7:
        mov ebx, dword ptr [esp + 0x18]
        add esi, 0x4
        jmp L_00410D70
    L_00410DC0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret
    }
}

// [0x00412CE0] sub_00412CE0 (139 bytes)
// SEH-framed (state -1/0): calls sub_00594000 for an object, builds a temporary std::string from a
// MFC80 ord_876 C-string, passes it to sub_00594620; on success stores a derived count at +0x4e8.
extern "C" void ext_00594000();
extern "C" void ext_00594620();
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00412CE0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        lea ecx, [esi + 0x18]
        mov edi, eax
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x0c]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x08]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call ext_00594620
        test eax, eax
        je skip
        mov edx, dword ptr [esi + 0x08]
        test edx, edx
        jne nonzero
        xor ecx, ecx
        jmp store
nonzero:
        mov ecx, dword ptr [esi + 0x0c]
        sub ecx, edx
        sar ecx, 2
store:
        mov dword ptr [eax + 0x4e8], ecx
skip:
        lea ecx, [esp + 0x08]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00413850] sub_00413850 (142 bytes)
extern "C" void ext_006A611E();
extern "C" int mem_00924F94;
extern "C" int mem_00924F98;
extern "C" int mem_009241C0;

// SEH-framed constructor (try level -1, handler 0x875729): calls the base streambuf ctor,
// stores the vtable 0x92c1f4 and the arg at this+0x40, allocates 0x200 bytes via the MFC
// cdecl helper, calls setbuf(buf, 0x200), fills the get/put pointer slots and calls
// InitializeCriticalSection on this+0x44. Returns this, restores the SEH link, ret 4.
extern "C" __declspec(naked) void* __fastcall fn_00413850(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x875729
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call dword ptr [mem_00924F94]
        mov eax, dword ptr [esp + 0x18]
        push 0x200
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x92c1f4
        mov dword ptr [esi + 0x40], eax
        call ext_006A611E
        add esp, 0x4
        push 0x200
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0x3c], eax
        call dword ptr [mem_00924F98]
        mov eax, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [edx], eax
        mov edx, dword ptr [esi + 0x24]
        lea ecx, [eax + 0x1fe]
        sub ecx, eax
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 0x34]
        mov dword ptr [eax], ecx
        lea ecx, [esi + 0x44]
        push ecx
        call dword ptr [mem_009241C0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00413AF0] sub_00413AF0 (144 bytes)
extern "C" int mem_00924F40;
extern "C" int mem_00924F44;
extern "C" __declspec(naked) void* __fastcall fn_00413AF0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x875749
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call dword ptr [mem_00924F40]
        mov eax, dword ptr [esp + 0x18]
        push 0x400
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x92c230
        mov dword ptr [esi + 0x40], eax
        call ext_006A611E
        add esp, 0x4
        push 0x200
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0x3c], eax
        call dword ptr [mem_00924F44]
        mov eax, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [edx], eax
        mov edx, dword ptr [esi + 0x24]
        lea ecx, [eax + 0x3fc]
        sub ecx, eax
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 0x34]
        sar ecx, 1
        mov dword ptr [eax], ecx
        lea ecx, [esi + 0x44]
        push ecx
        call dword ptr [mem_009241C0]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00415300] sub_00415300 (145 bytes)
extern "C" void ext_004152D0();
extern "C" void ext_006A6118();
extern "C" int mem_009241EC;
extern "C" int mem_009241E8;
extern "C" int mem_00924090;

extern "C" void __fastcall fn_00415300(void* self) {
    int* p = (int*)self;
    ((void (__fastcall *)(void*))ext_004152D0)(self);
    if (p[5] == 1) {
        ((void (__cdecl *)(int))ext_006A6118)(p[3]);
    } else if (p[5] == 2) {
        ((void (__stdcall *)(int))mem_009241EC)(p[4]);
        ((void (__stdcall *)(int))mem_009241E8)(p[4]);
    }
    if (p[6] == 1) {
        ((void (__cdecl *)(int))ext_006A6118)(p[2]);
    }
    int zero = 0;
    int (__stdcall *delobj)(int) = (int (__stdcall *)(int))mem_00924090;
    if (p[12] != zero) {
        delobj(p[12]);
    }
    if (p[1] != zero) {
        delobj(p[1]);
    }
    p[6] = zero;
    p[5] = zero;
    p[4] = zero;
    p[3] = zero;
    p[2] = zero;
    p[0] = zero;
    p[8] = zero;
    p[7] = zero;
    p[11] = zero;
    p[10] = zero;
    p[9] = zero;
    p[1] = zero;
    p[12] = zero;
}

// [0x004197A0] sub_004197A0 (147 bytes)
extern "C" void ext_0040F0B0();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6250();
extern "C" int mem_0093A0E8;
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void __fastcall fn_004197A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x876834
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push eax
        push 0x330
        mov esi, ecx
        push 0x31c
        mov dword ptr [esp + 0x14], esi
        call ext_006A6250
        xor eax, eax
        lea edi, [esi + 0x114]
        mov dword ptr [esi], 0x92d1d4
        mov dword ptr [esi + 0x74], 0x92d1a4
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi], 0x92a254
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x14], 1
        call ext_0040F0B0
        mov ecx, dword ptr [mem_0093A0E8]
        push ecx
        mov byte ptr [esp + 0x18], 2
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004198C0] sub_004198C0 (91 bytes)
extern "C" void ext_004197A0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004198C0(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x190
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        push 0
        mov ecx, eax
        call ext_004197A0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0041FC70] sub_0041FC70 (147 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A60B2();
extern "C" void ext_006A63C4();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0041FC70(void* self) {
    __asm {
        push -1
        push 0x00877bdd
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x0092e01c
        lea ecx, [esi + 0x17c]
        mov dword ptr [esp + 0x10], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x128]
        mov byte ptr [esp + 0x10], 3
        call ext_006A5DFA
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x10], 2
        call ext_006A60B2
        lea ecx, [esi + 0xcc]
        mov byte ptr [esp + 0x10], 1
        call ext_006A63C4
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x10], 0
        call ext_006A63C4
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

// [0x00416B90] sub_00416B90 (149 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5F38();
extern "C" void ext_006A61D2();

extern "C" __declspec(naked) void __fastcall fn_00416B90(void* self) {
    __asm {
        push -1
        push 0x00875f60
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x0092cbcc
        lea ecx, [esi + 0x1dc]
        mov dword ptr [esp + 0x10], 4
        call ext_006A5F38
        lea ecx, [esi + 0x188]
        mov byte ptr [esp + 0x10], 3
        call ext_006A5F38
        lea ecx, [esi + 0x134]
        mov byte ptr [esp + 0x10], 2
        call ext_006A5DFA
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 1
        call ext_006A5F38
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x10], 0
        call ext_006A5F38
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006A61D2
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0041AD60] sub_0041AD60 (151 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5FF2();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __stdcall fn_0041AD60(void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_0041AD70:
        test ebx, ebx
        je L_0041AD7A
        cmp ebx, dword ptr [esp + 0x1c]
        je L_0041AD80
    L_0041AD7A:
        call dword ptr [mem_00925134]
    L_0041AD80:
        cmp ebp, dword ptr [esp + 0x20]
        je L_0041ADF0
        test ebx, ebx
        mov esi, ebx
        mov edi, ebp
        jne L_0041AD94
        call dword ptr [mem_00925134]
    L_0041AD94:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_0041AD9F
        call dword ptr [mem_00925134]
    L_0041AD9F:
        add ebp, 0x4
        test esi, esi
        jne L_0041ADAC
        call dword ptr [mem_00925134]
    L_0041ADAC:
        cmp edi, dword ptr [esi + 0x8]
        jb L_0041ADB7
        call dword ptr [mem_00925134]
    L_0041ADB7:
        mov esi, dword ptr [edi]
        test esi, esi
        je L_0041AD70
        mov eax, dword ptr [esi + 0xc]
        xor edi, edi
        cmp eax, edi
        je L_0041ADCF
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0041ADCF:
        mov dword ptr [esi + 0xc], edi
        mov dword ptr [esi + 0x10], edi
        mov dword ptr [esi + 0x14], edi
        mov ecx, esi
        mov dword ptr [esi], 0x0092a23c
        call ext_006A5FF2
        push esi
        call ext_006A5C5C
        add esp, 0x4
        jmp L_0041AD70
    L_0041ADF0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x0041AFF0] sub_0041AFF0 (121 bytes)
extern "C" void ext_0041AD60();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041AFF0(void* self) {
    __asm {
        push -1
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
        jbe f41aff0_chk1
        call dword ptr [mem_00925134]
    f41aff0_chk1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe f41aff0_chk2
        call dword ptr [mem_00925134]
    f41aff0_chk2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_0041AD60
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je f41aff0_nofree
        push eax
        call ext_006A5C5C
        add esp, 0x4
    f41aff0_nofree:
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

// [0x0041DE30] sub_0041DE30 (151 bytes)
extern "C" void ext_006A7BF0();

extern "C" __declspec(naked) void __fastcall fn_0041DE30(void* self) {
    __asm {
        push -1
        push 0x00877691
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x0092DF58
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x14], 0x2
        call ext_006A7BF0
        xor ebx, ebx
        cmp eax, ebx
        je short L_41de71
        mov ecx, eax
        call ext_006A5FF2
    L_41de71:
        mov eax, dword ptr [esi + 0x20]
        cmp eax, ebx
        je short L_41de81
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_41de81:
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, ebx
        mov byte ptr [esp + 0x14], bl
        je short L_41de9e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_41de9e:
        mov ecx, dword ptr [esi + 0x8]
        pop esi
        cmp ecx, ebx
        mov dword ptr [esp + 0x10], 0xffffffff
        pop ebx
        je short L_41deb8
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_41deb8:
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00412F80] sub_00412F80 (152 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00412F80(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        push esi
        lea esi, [ecx + 4]
        je loc_412f96
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        sar ecx, 2
        jne loc_412f9b
loc_412f96:
        xor eax, eax
        pop esi
        pop ecx
        ret
loc_412f9b:
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        mov edi, eax
        cmp edi, dword ptr [esi + 8]
        jbe loc_412fb0
        call ebp
        cmp edi, dword ptr [esi + 8]
loc_412fb0:
        jb loc_412fb4
        call ebp
loc_412fb4:
        mov ebx, dword ptr [edi]
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe loc_412fc0
        call ebp
loc_412fc0:
        mov ebp, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebp
        jbe loc_412fd0
        call dword ptr [mem_00925134]
        mov edi, edi
loc_412fd0:
        cmp esi, esi
        je loc_412fda
        call dword ptr [mem_00925134]
loc_412fda:
        cmp edi, ebp
        je loc_413010
        cmp edi, dword ptr [esi + 8]
        jb loc_412fe9
        call dword ptr [mem_00925134]
loc_412fe9:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x28]
        cmp eax, dword ptr [ebx + 0x28]
        jle loc_413000
        cmp edi, dword ptr [esi + 8]
        jb loc_412ffe
        call dword ptr [mem_00925134]
loc_412ffe:
        mov ebx, dword ptr [edi]
loc_413000:
        cmp edi, dword ptr [esi + 8]
        jb loc_41300b
        call dword ptr [mem_00925134]
loc_41300b:
        add edi, 4
        jmp loc_412fd0
loc_413010:
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        pop ecx
        ret
    }
}

// [0x00419E30] sub_00419E30 (152 bytes)
extern "C" void ext_00419B90();
extern "C" void ext_006A6304();
extern "C" void ext_006A6310();
extern "C" int mem_00925540;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00419E30(void* self) {
    __asm {
        push -1
        push 0x8768ac
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x92d39c
        lea eax, [esp + 0x4]
        push eax
        mov dword ptr [esp + 0x18], 0x3
        call dword ptr [mem_00925540]
        test eax, eax
        jge L_ok
        push eax
        call ext_006A6304
L_ok:
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x6c]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 0x14]
        call eax
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        mov ecx, esi
        call ext_00419B90
        lea ecx, [esi + 0x68]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x5c]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x54]
        call dword ptr [mem_009242F4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006A6310
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00413230] sub_00413230 (153 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00412F80();
extern "C" __declspec(naked) void __fastcall fn_00413230(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push edi
        lea edi, [ebx + 0x4]
        mov dword ptr [ebx + 0x4c], 0x0
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_004132C5
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        je L_004132C5
        cmp byte ptr [ebx + 0x37], 0x0
        je L_00413267
        mov ecx, ebx
        call ext_00412F80
        mov edx, dword ptr [eax + 0x28]
        pop edi
        mov dword ptr [ebx + 0x4c], edx
        pop ebx
        pop ecx
        ret
    L_00413267:
        push esi
        mov esi, eax
        cmp esi, dword ptr [edi + 0x8]
        jbe L_00413275
        call dword ptr [mem_00925134]
    L_00413275:
        push ebp
        mov ebp, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebp
        jbe L_00413284
        call dword ptr [mem_00925134]
    L_00413284:
        test edi, edi
        je L_0041328C
        cmp edi, edi
        je L_00413292
    L_0041328C:
        call dword ptr [mem_00925134]
    L_00413292:
        cmp esi, ebp
        je L_004132C3
        test edi, edi
        jne L_004132A0
        call dword ptr [mem_00925134]
    L_004132A0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_004132AB
        call dword ptr [mem_00925134]
    L_004132AB:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x28]
        add dword ptr [ebx + 0x4c], ecx
        cmp esi, dword ptr [edi + 0x8]
        jb L_004132BE
        call dword ptr [mem_00925134]
    L_004132BE:
        add esi, 0x4
        jmp L_00413284
    L_004132C3:
        pop ebp
        pop esi
    L_004132C5:
        pop edi
        pop ebx
        pop ecx
        ret
    }
}

// [0x004160F0] sub_004160F0 (154 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924558;
extern "C" int mem_00925608;
extern "C" int mem_00924554;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" __declspec(naked) void __fastcall fn_004160F0(void* self) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x28]
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        push esi
        push edi
        xor edi, edi
        cmp ebx, edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], 0x14
        je L_0041611B
        mov edi, dword ptr [ebx + 0x4]
    L_0041611B:
        mov esi, dword ptr [esp + 0x2c]
        push 0x18420
        lea ecx, [esp + 0x18]
        push ecx
        push -1
        mov ecx, esi
        call dword ptr [mem_0092431C]
        add eax, 0x4
        push eax
        mov ecx, esi
        call dword ptr [mem_00924558]
        push eax
        push edi
        call dword ptr [mem_00925608]
        push -1
        mov ecx, esi
        call dword ptr [mem_00924554]
        lea edx, [esp + 0xc]
        push edx
        mov ecx, esi
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [ebx + 0x8]
        push eax
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x0041DDE0] sub_0041DDE0 (41 bytes)
extern "C" void ext_00472870();

extern "C" __declspec(naked) void __fastcall fn_0041DDE0(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_00472870
        add esp, 0x1c
        ret 0xc
    }
}

// [0x004132D0] sub_004132D0 (126 bytes)
extern "C" void ext_00412C20();
extern "C" void ext_00413230();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004132D0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        mov al, byte ptr [esp + 8]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 4]
        mov byte ptr [ecx + 0x37], al
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        mov dword ptr [esp + 0x10], ecx
        jbe L_top_4132D0
        call ebp
    L_top_4132D0:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_chk1_4132D0
        call ebp
    L_chk1_4132D0:
        test esi, esi
        je L_call1_4132D0
        cmp esi, esi
        je L_chk2_4132D0
    L_call1_4132D0:
        call ebp
    L_chk2_4132D0:
        cmp edi, ebx
        je L_done_4132D0
        test esi, esi
        jne L_chk3_4132D0
        call ebp
    L_chk3_4132D0:
        cmp edi, dword ptr [esi + 8]
        jb L_chk4_4132D0
        call ebp
    L_chk4_4132D0:
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 8]
        jbe L_chk5_4132D0
        call ebp
    L_chk5_4132D0:
        cmp esi, esi
        je L_chk6_4132D0
        call ebp
    L_chk6_4132D0:
        cmp edi, dword ptr [esi + 8]
        jb L_inc_4132D0
        call ebp
    L_inc_4132D0:
        add edi, 4
        jmp L_top_4132D0
    L_done_4132D0:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call ext_00412C20
        mov ecx, esi
        call ext_00413230
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x004133F0] sub_004133F0 (132 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00594620();
extern "C" void ext_004132D0();
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004133F0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        lea ecx, [esi + 0x18]
        mov edi, eax
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call ext_00594620
        test eax, eax
        je done
        cmp byte ptr [eax + 0x4e6], 0
        sete cl
        push ecx
        mov ecx, esi
        call ext_004132D0
    done:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00413350] sub_00413350 (154 bytes)
extern "C" void ext_00412CE0();
extern "C" void ext_00413230();
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_00413350(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        push ebp
        push esi
        mov ebp, ecx
        lea esi, [ebp + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short L_00413369
        call dword ptr [mem_00925134]
    L_00413369:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x14], edi
        lea edi, [edi + eax*4]
        cmp edi, dword ptr [esi + 0x8]
        ja short L_0041337E
        cmp edi, dword ptr [esi + 0x4]
        jae short L_00413384
    L_0041337E:
        call dword ptr [mem_00925134]
    L_00413384:
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe short L_00413393
        call dword ptr [mem_00925134]
    L_00413393:
        cmp esi, esi
        je short L_0041339D
        call dword ptr [mem_00925134]
    L_0041339D:
        cmp edi, ebx
        pop ebx
        je short L_004133DF
        mov eax, dword ptr [esi + 0x8]
        lea ecx, [edi + 0x4]
        sub eax, ecx
        sar eax, 0x2
        test eax, eax
        jle short L_004133C2
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    L_004133C2:
        add dword ptr [esi + 0x8], -0x4
        mov ecx, ebp
        call ext_00413230
        mov ecx, ebp
        call ext_00412CE0
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0xc
        ret 0x4
    L_004133DF:
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0xc
        ret 0x4
    }
}

// [0x00415E30] sub_00415E30 (156 bytes)
extern "C" void ext_006A6DE0();

extern "C" __declspec(naked) unsigned int __cdecl fn_00415E30(unsigned int packed, float scale) {
    __asm {
        push ecx
        fld1
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je short scale_gt_one
        fstp st(0)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        jmp short scale_done
scale_gt_one:
        fstp st(1)
scale_done:
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, eax
        movzx eax, al
        mov dword ptr [esp + 0x10], eax
        shr ebx, 0x10
        fild dword ptr [esp + 0x10]
        fmul st, st(1)
        call ext_006A6DE0
        cmp eax, 0xff
        mov byte ptr [esp + 0x10], al
        jl short r_done
        mov byte ptr [esp + 0x10], -1
r_done:
        movzx ecx, bl
        mov dword ptr [esp + 0x4], ecx
        fild dword ptr [esp + 0x4]
        fmul st, st(1)
        call ext_006A6DE0
        cmp eax, 0xff
        jge short b_sat
        mov bl, al
        jmp short b_done
b_sat:
        or bl, -1
b_done:
        movzx edx, byte ptr [esp + 0xd]
        mov dword ptr [esp + 0xc], edx
        fild dword ptr [esp + 0xc]
        fmulp st(1), st
        call ext_006A6DE0
        cmp eax, 0xff
        jl short g_done
        or al, -1
g_done:
        movzx edx, byte ptr [esp + 0x10]
        xor ecx, ecx
        mov ch, bl
        pop ebx
        mov cl, al
        shl ecx, 0x8
        or ecx, edx
        mov eax, ecx
        pop ecx
        ret
    }
}

// [0x0041C8E0] sub_0041C8E0 (157 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C8E0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr [esi + 0x4]
        mov dword ptr [esi], 0x92db90
        mov ebx, dword ptr [ebp + 0x4]
        cmp ebx, dword ptr [ebp + 0x8]
        push edi
        mov dword ptr [esp + 0x10], esi
        jbe short loop_top
        call dword ptr [mem_00925134]
loop_top:
        mov esi, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe short chk_end
        call dword ptr [mem_00925134]
chk_end:
        cmp ebp, esi
        mov esi, dword ptr [mem_00925134]
        je short ptr_ok
        call esi
ptr_ok:
        cmp ebx, edi
        je short clear_part
        cmp ebx, dword ptr [ebp + 0x8]
        jb short elem_ok
        call esi
elem_ok:
        mov ecx, dword ptr [ebx]
        test ecx, ecx
        je short elem_null
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
elem_null:
        cmp ebx, dword ptr [ebp + 0x8]
        jb short next_ok
        call esi
next_ok:
        mov esi, dword ptr [esp + 0x10]
        add ebx, 0x4
        jmp loop_top
clear_part:
        mov eax, dword ptr [esp + 0x10]
        mov esi, dword ptr [eax + 0x4]
        xor edi, edi
        cmp esi, edi
        je short done
        mov eax, dword ptr [esi + 0x4]
        cmp eax, edi
        je short free_node
        push eax
        call ext_006A5C5C
        add esp, 0x4
free_node:
        push esi
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        call ext_006A5C5C
        add esp, 0x4
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00416FB0] sub_00416FB0 (158 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00416C30();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00416FB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x8c]
        push edi
        call ext_00416C30
        test eax, eax
        jle short loc_416ff9
        mov ecx, dword ptr [esi + 0x88]
        pop edi
        mov dword ptr [ecx + 0x168], eax
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    loc_416ff9:
        mov edx, dword ptr [esi + 0x88]
        mov eax, dword ptr [edx + 0x168]
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00417050] sub_00417050 (158 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00416C30();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00417050(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0xe0]
        push edi
        call ext_00416C30
        test eax, eax
        jle short loc_417099
        mov ecx, dword ptr [esi + 0x88]
        pop edi
        mov dword ptr [ecx + 0x16c], eax
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    loc_417099:
        mov edx, dword ptr [esi + 0x88]
        mov eax, dword ptr [edx + 0x16c]
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x004170F0] sub_004170F0 (158 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00416C30();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004170F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x188]
        push edi
        call ext_00416C30
        test eax, eax
        jle short loc_417139
        mov ecx, dword ptr [esi + 0x88]
        pop edi
        mov dword ptr [ecx + 0x170], eax
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    loc_417139:
        mov edx, dword ptr [esi + 0x88]
        mov eax, dword ptr [edx + 0x170]
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00417190] sub_00417190 (158 bytes)
extern "C" __declspec(naked) void __fastcall fn_00417190(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi + 0x1dc]
        push edi
        call ext_00416C30
        test eax, eax
        jl short loc_4171d9
        mov ecx, dword ptr [esi + 0x88]
        pop edi
        mov dword ptr [ecx + 0x174], eax
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    loc_4171d9:
        mov edx, dword ptr [esi + 0x88]
        mov eax, dword ptr [edx + 0x174]
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00419C20] sub_00419C20 (163 bytes)
extern "C" void ext_00419BF0();
extern "C" void ext_006A5C6E();
extern "C" int mem_009242FC;
extern "C" int mem_00924494;

extern "C" __declspec(naked) void __fastcall fn_00419C20(void* self) {
    __asm {
        push -1
        push 0x8768ac
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_006A5C6E
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x92d39c
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        push ecx
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi + 0x58], eax
        call dword ptr [mem_00924494]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push eax
        lea ecx, [esi + 0x68]
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi + 0x60], 0
        mov dword ptr [esi + 0x64], edx
        call dword ptr [mem_00924494]
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x14], 3
        mov dword ptr [esi + 0x6c], 0
        call ext_00419BF0
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x6c], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x14
    }
}

// [0x00412D70] sub_00412D70 (164 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00412D70(void* self, int edx_unused, void* item) {
    __asm {
        sub esp, 8
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        test ebp, ebp
        jne L_00412D85
        xor eax, eax
        pop ebp
        add esp, 8
        ret 4
    L_00412D85:
        push ebx
        mov ebx, dword ptr [ecx + 0xc]
        cmp dword ptr [ecx + 8], ebx
        push esi
        lea esi, [ecx + 4]
        jbe L_00412D98
        call dword ptr [mem_00925134]
    L_00412D98:
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_00412DA7
        call dword ptr [mem_00925134]
    L_00412DA7:
        cmp edi, ebx
        mov dword ptr [esp + 0x14], edi
        je L_00412DBB
        nop
    L_00412DB0:
        cmp dword ptr [edi], ebp
        je L_00412DBB
        add edi, 4
        cmp edi, ebx
        jne L_00412DB0
    L_00412DBB:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_00412DC9
        call dword ptr [mem_00925134]
    L_00412DC9:
        test esi, esi
        je L_00412DD1
        cmp esi, esi
        je L_00412DD7
    L_00412DD1:
        call dword ptr [mem_00925134]
    L_00412DD7:
        cmp edi, ebx
        jne L_00412DE7
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        add esp, 8
        ret 4
    L_00412DE7:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe L_00412DF5
        call dword ptr [mem_00925134]
    L_00412DF5:
        test esi, esi
        je L_00412DFD
        cmp esi, esi
        je L_00412E03
    L_00412DFD:
        call dword ptr [mem_00925134]
    L_00412E03:
        mov eax, edi
        pop edi
        pop esi
        sub eax, ebx
        pop ebx
        sar eax, 2
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x00419FC0] sub_00419FC0 (168 bytes)
extern "C" int mem_00924E38;

extern "C" __declspec(naked) void __stdcall fn_00419FC0(int* a1, long* rc, unsigned long c1, unsigned long c2) {
    __asm {
        sub esp, 0x28
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [esp + 0xc], edx
        xor edx, edx
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esp + 0x34]
        mov dh, al
        mov dword ptr [esp + 0x4], 0x1
        mov word ptr [esp + 0x10], dx
        xor edx, edx
        mov dh, ah
        shr eax, 0x10
        mov word ptr [esp + 0x12], dx
        xor edx, edx
        mov dh, al
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [esp + 0x1c], ecx
        xor ecx, ecx
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esp + 0x38]
        mov ch, al
        mov word ptr [esp + 0x14], dx
        xor edx, edx
        mov word ptr [esp + 0x16], dx
        mov word ptr [esp + 0x26], dx
        mov dword ptr [esp], edx
        mov word ptr [esp + 0x20], cx
        xor ecx, ecx
        mov ch, ah
        shr eax, 0x10
        mov word ptr [esp + 0x22], cx
        xor ecx, ecx
        mov ch, al
        mov eax, dword ptr [esp + 0x2c]
        cmp eax, edx
        mov word ptr [esp + 0x24], cx
        jne short L_has_dc_00419FC0
        xor eax, eax
        jmp short L_call_00419FC0
L_has_dc_00419FC0:
        mov eax, dword ptr [eax + 0x4]
L_call_00419FC0:
        push edx
        push 0x1
        lea edx, [esp + 0x8]
        push edx
        push 0x2
        lea ecx, [esp + 0x18]
        push ecx
        push eax
        call dword ptr [mem_00924E38]
        add esp, 0x28
        ret 0x10
    }
}

// [0x00416820] sub_00416820 (168 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A6220();
extern "C" __declspec(naked) void* __fastcall fn_00416820(void* self) {
    __asm {
        push -1
        push 0x875c82
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x34
        push 0
        mov esi, ecx
        push 0x210
        mov dword ptr [esp + 0x14], esi
        call ext_006A6220
        lea edi, [esi + 0x88]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x92c92c
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0xdc]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 1
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x130]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 2
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi + 0x188]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 3
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x929cb4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00410540] sub_00410540 (168 bytes)
extern "C" void ext_00468660();
extern "C" void ext_00594000();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" int mem_00993828;

extern "C" void __fastcall fn_00410540(void* self, int edx_unused, void* a1, void* a2) {
    float f = *(float*)((char*)((void*(*)())ext_00594000)() + 0x234);
    void* sub = (char*)a2 + 4;
    typedef float (__thiscall *GetValFn)(void*);
    double d = ((GetValFn)(*(void***)sub)[0xe0 / 4])(sub) * f;
    float fl = (float)((double (*)(double))ext_006A6E92)((float)(d + *(double*)&mem_00993828));
    int rounded = (int)fl;
    void* obj1 = ((void* (__fastcall*)(void*))ext_00468660)(a1);
    typedef void* (__thiscall *FuncE4)(void*, void*, int, int, int, int, int);
    void* res1 = ((FuncE4)(*(void***)obj1)[0xe4 / 4])(obj1, a2, 0, 0, 0, 0, 0);
    typedef void (__thiscall *Func138)(void*, int);
    ((Func138)(*(void***)res1)[0x138 / 4])(res1, 0);
    void* obj2 = ((void* (__fastcall*)(void*))ext_00468660)(a1);
    ((FuncE4)(*(void***)obj2)[0xe4 / 4])(obj2, a2, 0, rounded, 0, 0, 0);
}

// [0x0041B3D0] sub_0041B3D0 (170 bytes)
extern "C" void ext_0040FDC0();
extern "C" void ext_006A6250();
extern "C" int mem_0093A0E8;
extern "C" int mem_0092407C;

extern "C" __declspec(naked) void __fastcall fn_0041B3D0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x876a52
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push eax
        push 0x9e
        mov esi, ecx
        push 0x320
        mov dword ptr [esp + 0x14], esi
        call ext_006A6250
        xor eax, eax
        lea edi, [esi + 0x114]
        mov dword ptr [esi], 0x92d5c4
        mov dword ptr [esi + 0x74], 0x92d594
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi], 0x92a254
        mov al, 0x1
        lea ecx, [esi + 0x120]
        mov byte ptr [esp + 0x14], al
        mov byte ptr [esi + 0x11c], al
        call ext_0040FDC0
        lea ecx, [esi + 0x194]
        mov byte ptr [esp + 0x14], 0x2
        call ext_0040F0B0
        mov ecx, dword ptr [mem_0093A0E8]
        push ecx
        mov byte ptr [esp + 0x18], 0x3
        call dword ptr [mem_0092407C]
        push eax
        mov ecx, edi
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x0041B610] sub_0041B610 (91 bytes)
extern "C" void ext_0041B3D0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0041B610(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x208
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        push 0
        mov ecx, eax
        call ext_0041B3D0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00415720] sub_00415720 (174 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A611E();
extern "C" void ext_006A6EC0();
extern "C" int mem_009241FC;

extern "C" __declspec(naked) void __fastcall fn_00415720(void* self, int edx_unused, const char* s, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0x8]
        test eax, eax
        push ebx
        push esi
        push edi
        mov ebx, ecx
        je done
        lea edx, [eax + 0x1]
strlen_loop:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne strlen_loop
        sub eax, edx
        lea esi, [eax + 0x1]
        cmp esi, 0x400
        jg heap_path
        lea eax, [esi + esi]
        call ext_006A6EC0
        mov eax, dword ptr [ebp + 0x8]
        mov edi, esp
        push esi
        push edi
        push esi
        push eax
        push 0x1
        push 0x0
        call dword ptr [mem_009241FC]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0xc]
        push eax
        push edi
        mov ecx, ebx
        call edx
        lea esp, [ebp - 0xc]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0x8
heap_path:
        xor ecx, ecx
        mov eax, esi
        mov edx, 0x2
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        call ext_006A611E
        add esp, 0x4
        push esi
        mov edi, eax
        mov eax, dword ptr [ebp + 0x8]
        push edi
        push esi
        push eax
        push 0x1
        push 0x0
        call dword ptr [mem_009241FC]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebx]
        mov edx, dword ptr [edx + 0xc]
        push eax
        push edi
        mov ecx, ebx
        call edx
        push edi
        call ext_006A5C5C
        add esp, 0x4
done:
        lea esp, [ebp - 0xc]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0x8
    }
}

// [0x0041A430] sub_0041A430 (181 bytes)
extern "C" void ext_0048EF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0041A430(void* self) {
    __asm {
        sub esp, 0x14
        push ebx
        push ebp
        lea ebp, [ecx + 0x44]
        push esi
        mov esi, dword ptr [ebp + 0x4]
        cmp esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [mem_00925134]
        jbe a430_l1
        call edi
a430_l1:
        mov ebx, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], ebx
        mov dword ptr [esp + 0x18], ebx
        jbe a430_l2
        call edi
a430_l2:
        cmp ebp, ebp
        je a430_l3
        call edi
a430_l3:
        cmp esi, ebx
        je a430_end
        cmp esi, dword ptr [ebp + 0x8]
        jb a430_l4
        call edi
a430_l4:
        mov ebx, dword ptr [esi]
        mov eax, dword ptr [ebx + 0x10]
        add ebx, 0x8
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x10], eax
        jbe a430_l5
        call edi
a430_l5:
        cmp esi, dword ptr [ebp + 0x8]
        jb a430_l6
        call edi
a430_l6:
        mov edi, dword ptr [esi]
        mov eax, dword ptr [edi + 0xc]
        add edi, 0x8
        cmp eax, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x14], eax
        jbe a430_l7
        call dword ptr [mem_00925134]
a430_l7:
        cmp esi, dword ptr [ebp + 0x8]
        jb a430_l8
        call dword ptr [mem_00925134]
a430_l8:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ebx
        push ecx
        mov ecx, dword ptr [esi]
        push edi
        lea edx, [esp + 0x2c]
        push edx
        add ecx, 0x8
        call ext_0048EF80
        cmp esi, dword ptr [ebp + 0x8]
        jb a430_l9
        call dword ptr [mem_00925134]
a430_l9:
        mov edi, dword ptr [mem_00925134]
        mov ebx, dword ptr [esp + 0x18]
        add esi, 0x4
        jmp a430_l2
a430_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x0041B860] sub_0041B860 (193 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" int mem_009240F8;

extern "C" __declspec(naked) void __fastcall fn_0041B860(void* self) {
    __asm {
        push -1
        push 0x876fe3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x92d814
        xor ebx, ebx
        cmp dword ptr [esi + 0x30], ebx
        mov dword ptr [esp + 0x14], 0x1
        je no_bitmap
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [esi + 0x2c]
        mov ebx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x28]
        push ebp
        mov ebp, dword ptr [esi + 0x1c]
        push edi
        mov edi, dword ptr [esi + 0x20]
        push 0xcc0020
        push edx
        push edi
        push ebx
        sub eax, edx
        push eax
        mov eax, dword ptr [ebp + 0x4]
        sub ecx, edi
        push ecx
        push edx
        push edi
        push eax
        call dword ptr [mem_009240F8]
        mov eax, dword ptr [esi + 0x18]
        xor ebx, ebx
        cmp eax, ebx
        pop edi
        pop ebp
        jne has_src
        mov ecx, dword ptr [esi + 0x4]
        xor eax, eax
        push eax
        push ecx
        call ext_006A6196
        jmp after_src
has_src:
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        push ecx
        call ext_006A6196
        jmp after_src
no_bitmap:
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0x4], ebx
after_src:
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x14], bl
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006A619C
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00416CA0] sub_00416CA0 (195 bytes)
extern "C" void ext_006A5C6E();
extern "C" void ext_006A6220();

extern "C" __declspec(naked) void __fastcall fn_00416CA0(void* self) {
    __asm {
        push -1
        push 0x875f60
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x34
        xor edi, edi
        push edi
        mov esi, ecx
        push 0x20c
        mov dword ptr [esp + 0x14], esi
        call ext_006A6220
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x88], edi
        lea edi, [esi + 0x8c]
        mov ecx, edi
        mov dword ptr [esi], 0x92cbcc
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
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi + 0x188]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 3
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi + 0x1dc]
        mov ecx, edi
        mov byte ptr [esp + 0x14], 4
        call ext_006A5C6E
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi], 0x929e0c
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0041B070] sub_0041B070 (204 bytes)
extern "C" void ext_0043D780();
extern "C" __declspec(naked) void __fastcall fn_0041B070(void* self) {
    __asm {
        push -1
        push 0x87697f
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
        call ext_0043D780
        mov dword ptr [esi + 0x4], eax
        mov bl, 1
        mov byte ptr [eax + 0x15], bl
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        xor edi, edi
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [esi + 0x8], edi
        lea ebp, [esi + 0xc]
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], edi
        call ext_0043D780
        mov dword ptr [ebp + 0x4], eax
        mov byte ptr [eax + 0x15], bl
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [ebp + 0x8], edi
        lea ebp, [esi + 0x18]
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], bl
        call ext_0043D780
        mov dword ptr [ebp + 0x4], eax
        mov byte ptr [eax + 0x15], bl
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [ebp + 0x8], edi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x38], edi
        mov dword ptr [esi + 0x3c], edi
        mov dword ptr [esi + 0x40], edi
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x4c], edi
        mov dword ptr [esi + 0x50], edi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x58], edi
        mov dword ptr [esi + 0x5c], edi
        mov dword ptr [esi + 0x60], edi
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

// [0x00413F90] sub_00413F90 (210 bytes)
extern "C" void ext_00454BA0();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5FF2();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00413F90(void* self) {
    __asm {
        push -1
        push 0x0087583E
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0092C26C
        lea ecx, [esi + 0x1b4]
        mov dword ptr [esp + 0x10], 0x5
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        mov ecx, dword ptr [esi + 0x1a8]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x4
        je skip_1a8
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip_1a8:
        mov ecx, dword ptr [esi + 0x1a4]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x3
        je skip_1a4
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip_1a4:
        mov ecx, dword ptr [esi + 0x1a0]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x2
        je skip_1a0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip_1a0:
        lea ecx, [esi + 0x198]
        mov byte ptr [esp + 0x10], 0x1
        mov dword ptr [ecx], 0x0092A23C
        call ext_006A5FF2
        lea ecx, [esi + 0x144]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5F38
        lea ecx, [esi + 0x12c]
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call dword ptr [mem_009242F4]
        mov ecx, esi
        call ext_00454BA0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004199B0] sub_004199B0 (222 bytes)
extern "C" void ext_006A62FE();
extern "C" int mem_00925540;
extern "C" int mem_00925544;
extern "C" int mem_00925548;
extern "C" int mem_009242F8;

extern "C" __declspec(naked) void __fastcall fn_004199B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x128
        push esi
        push edi
        lea eax, [esp + 0x8]
        push eax
        mov edi, ecx
        call dword ptr [mem_00925540]
        test eax, eax
        jne L_fail_004199B0
        call ext_006A62FE
        test eax, eax
        je L_null_004199B0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x7c]
        call eax
        test eax, eax
        jne L_have_004199B0
L_null_004199B0:
        mov dword ptr [esp + 0xc], 0x0
        jmp L_setup_004199B0
L_have_004199B0:
        mov ecx, dword ptr [eax + 0x20]
        mov dword ptr [esp + 0xc], ecx
L_setup_004199B0:
        mov eax, dword ptr [esp + 0x134]
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0x2c]
        push ecx
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], 0x41
        mov dword ptr [esp + 0x24], 0x419990
        mov dword ptr [esp + 0x28], edi
        call dword ptr [mem_00925544]
        mov esi, eax
        test esi, esi
        je L_done_004199B0
        lea edx, [esp + 0x2c]
        push edx
        push esi
        call dword ptr [mem_00925548]
        test eax, eax
        je L_nopath_004199B0
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        call dword ptr [mem_009242F8]
L_nopath_004199B0:
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x14]
        push esi
        push eax
        call edx
L_done_004199B0:
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x8]
        push eax
        call edx
        test esi, esi
        pop edi
        setne al
        pop esi
        add esp, 0x128
        ret 0x4
L_fail_004199B0:
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        pop edi
        setne al
        pop esi
        add esp, 0x128
        ret 0x4
    }
}

// [0x0041FDA0] sub_0041FDA0 (223 bytes)
extern "C" void ext_0041FD70();
extern "C" void ext_0041FE49();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60EE();
extern "C" void ext_006A63CA();
extern "C" void ext_006A63D0();
extern "C" int mem_00924204;
extern "C" int mem_0092420C;

// [0x0041FDA0] sub_0041FDA0 (223 bytes)
// SEH-framed (fs:[0] chain, scope 0x9d3588, handler 0x6a6ef2). Calls thunk ord_1084(&local),
// reads [ret+0x9c] -> ord_6752; if non-zero, calls [self+0x2c] (lazily resolved via sub_0041FD70)
// with three stack args and then runs a local cleanup block (GetLastError/SetLastError bracketing ord_6754).
extern "C" __declspec(naked) int __fastcall fn_0041FDA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x9d3588
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
        call ext_0041FD70
        mov esi, dword ptr [esi+0x2c]
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

// [0x00415D50] sub_00415D50 (224 bytes)
extern "C" __declspec(naked) void __cdecl fn_00415D50(void) {
    __asm {
        fld1
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_00415D6B
        fstp st(0)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        jmp L_00415D86
    L_00415D6B:
        fstp st(1)
        fldz
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_00415D84
        fstp st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        jmp L_00415D86
    L_00415D84:
        fstp st(0)
    L_00415D86:
        mov ecx, dword ptr [esp + 0x4]
        mov eax, ecx
        shr eax, 0x10
        movzx edx, al
        mov dword ptr [esp + 0x8], edx
        xor edx, edx
        fild dword ptr [esp + 0x8]
        fnstcw word ptr [esp + 0x8]
        movzx eax, word ptr [esp + 0x8]
        fmul st, st(1)
        or eax, 0xc00
        mov dword ptr [esp + 0x4], eax
        fldcw word ptr [esp + 0x4]
        fistp dword ptr [esp + 0x4]
        movzx eax, byte ptr [esp + 0x4]
        mov dh, al
        movzx eax, ch
        fldcw word ptr [esp + 0x8]
        mov dword ptr [esp + 0x8], eax
        movzx ecx, cl
        fild dword ptr [esp + 0x8]
        fnstcw word ptr [esp + 0x8]
        fmul st, st(1)
        movzx eax, word ptr [esp + 0x8]
        or eax, 0xc00
        mov dword ptr [esp + 0x4], eax
        fldcw word ptr [esp + 0x4]
        fistp dword ptr [esp + 0x4]
        movzx eax, byte ptr [esp + 0x4]
        mov dl, al
        fldcw word ptr [esp + 0x8]
        mov dword ptr [esp + 0x8], ecx
        fild dword ptr [esp + 0x8]
        shl edx, 0x8
        fnstcw word ptr [esp + 0x8]
        fmulp st(1), st
        movzx eax, word ptr [esp + 0x8]
        or eax, 0xc00
        mov dword ptr [esp + 0x4], eax
        fldcw word ptr [esp + 0x4]
        fistp dword ptr [esp + 0x4]
        movzx eax, byte ptr [esp + 0x4]
        movzx ecx, al
        fldcw word ptr [esp + 0x8]
        or edx, ecx
        mov eax, edx
        ret
    }
}

// [0x00415FB3] sub_00415FB3 (67 bytes)
extern "C" int mem_0092C8BC;
extern "C" void ext_00415D50();

// Body is a shared tail: the self-loop jne (0x415FE4 -> 0x415FB3) and the je out to
// 0x415FF6 are emitted as fixed rel8 encodings so the bytes match exactly.
extern "C" __declspec(naked) void __fastcall fn_00415FB3(void* self, int edx_unused, int a1) {
    __asm {
        pop esi
        mov eax, ecx
        pop ebx
        ret 0x4
        fld dword ptr [mem_0092C8BC]
        push ecx
        fstp dword ptr [esp]
        push 0xf
        call dword ptr [mem_00925680]
        push eax
        call ext_00415D50
        add esp, 0x8
        pop esi
        pop ebx
        ret 0x4
        test eax, eax
        _emit 0x74
        _emit 0x18
        mov ecx, dword ptr [ecx + 0x54]
        cmp ecx, -1
        _emit 0x75
        _emit 0xcd
        pop esi
        pop ebx
        mov dword ptr [esp + 4], 0xf
        jmp dword ptr [mem_00925680]
    }
}

extern "C" int mem_0092C8C4;
// [0x0041604C] sub_0041604C (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041604C(void* self, int edx_unused, int a1) {
    __asm {
        test edx, edx
        jne short L_416072
        test eax, eax
        jne short L_416072
        fld dword ptr [mem_0092C8C4]
        push ecx
        fstp dword ptr [esp]
        push 0xf
        call dword ptr [mem_00925680]
        push eax
        call ext_00415D50
        add esp, 0x8
        ret 0x4
    L_416072:
        mov eax, dword ptr [ecx + 0x58]
        cmp eax, -0x1
        jne short L_416082
        push 0xf
        call dword ptr [mem_00925680]
    L_416082:
        fld dword ptr [mem_0092C8C4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00415D50
        add esp, 0x8
        ret 0x4
    }
}

// [0x0041BE00] sub_0041BE00 (239 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041BE00(void* self) {
    __asm {
        push -0x1
        push 0x8773ba
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x92d904
        mov dword ptr [esi + 0x88], 0x92d8f4
        mov ecx, dword ptr [esi + 0x1e8]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x7
        je short L_41BE48
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_41BE48:
        mov ecx, dword ptr [esi + 0x1e4]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x6
        je short L_41BE60
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_41BE60:
        mov ecx, dword ptr [esi + 0x1e0]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x5
        je short L_41BE78
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_41BE78:
        mov ecx, dword ptr [esi + 0x1dc]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x4
        je short L_41BE90
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 0x1
        call edx
    L_41BE90:
        lea ecx, dword ptr [esi + 0x188]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006A5F38
        lea ecx, dword ptr [esi + 0x134]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006A5F38
        lea ecx, dword ptr [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006A5F38
        lea ecx, dword ptr [esi + 0x8c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006A5F38
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006A61D2
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_006A6304();
extern "C" void ext_006A630A();
extern "C" int mem_00924204;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;

// [0x00419A90] sub_00419A90 (243 bytes)
extern "C" __declspec(naked) void __fastcall fn_00419A90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x876869
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x20]
        cmp dword ptr [esi + 0x20], 0x0
        jne short L_419AE2
        mov eax, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_006A630A
        test eax, eax
        jne short L_419AE2
        mov esi, dword ptr [mem_00924204]
        call esi
        test eax, eax
        jg short L_419AD0
        call esi
        jmp short L_419ADC
    L_419AD0:
        call esi
        and eax, 0xffff
        or eax, 0x80070000
    L_419ADC:
        push eax
        call ext_006A6304
    L_419AE2:
        mov eax, dword ptr [esp + 0x18]
        sub eax, 0x1
        je short L_419B63
        sub eax, 0x1
        je short L_419B3E
        sub eax, 0x1
        jne short L_419B6F
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        lea ecx, dword ptr [esp + 0x20]
        call dword ptr [mem_009242F0]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x144]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        call eax
        lea ecx, dword ptr [esp + 0x1c]
        mov esi, eax
        call dword ptr [mem_009242F4]
        xor eax, eax
        test esi, esi
        sete al
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x10
    L_419B3E:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edx + 0x140]
        push eax
        mov ecx, esi
        call edx
        xor eax, eax
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x10
    L_419B63:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x13c]
        mov ecx, esi
        call edx
    L_419B6F:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

// [0x00414410] sub_00414410 (248 bytes)
extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00414410(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8758cc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x74
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x92c4e0
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_00924FE4]
        mov edi, eax
        push 0x92c4f4
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x8c], 0
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [mem_00924FD0]
        push eax
        mov eax, dword ptr [esp + 0x94]
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        mov byte ptr [esp + 0x94], 1
        call ebx
        push edi
        push eax
        lea edx, [esp + 0x24]
        push edx
        mov byte ptr [esp + 0xa0], 2
        call ebx
        add esp, 0x18
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x8c], 3
        call ext_00403560
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x88], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x88], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x88], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0x88], 8
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x80]
        pop edi
        mov dword ptr [esi], 0x92c4c4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x80
        ret 8
    }
}

// [0x00417650] sub_00417650 (255 bytes)
extern "C" void ext_00410390();
extern "C" void ext_00594000();
extern "C" void ext_00594630();
extern "C" void ext_00664840();
extern "C" void ext_006A5F50();
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00417650(void* self, int edx_unused, bool a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x877622
        push eax
        mov dword ptr fs:[0], esp
        fld1
        sub esp, 0x38
        cmp byte ptr [esp + 0x48], 0
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x78]
        fstp dword ptr [eax + 0x10]
        je L_00417650_tail
        push edi
        lea ecx, [esi + 0x84]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push eax
        mov dword ptr [esp + 0x4c], 0
        call ext_00594000
        mov ecx, eax
        call ext_00594630
        lea ecx, [esp + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x48], -1
        call dword ptr [mem_00924FF4]
        test edi, edi
        je L_00417650_pop
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x28]
        mov ecx, edi
        call edx
        test al, al
        jne L_00417650_pop
        mov ecx, edi
        call ext_00410390
        test al, al
        jne L_00417650_pop
        fld dword ptr [edi + 0x4f0]
        mov eax, dword ptr [esi + 0x78]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x50]
        fld1
        fdivrp st(1), st
        fstp dword ptr [eax + 0x24]
    L_00417650_pop:
        pop edi
    L_00417650_tail:
        mov eax, dword ptr [esi + 0x78]
        fld dword ptr [eax + 0x10]
        push ecx
        fstp dword ptr [esp + 0x50]
        lea ecx, [esp + 0x24]
        fld dword ptr [esp + 0x50]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x44], 1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x218]
        call ext_006A5F50
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret 0x4
    }
}

// [0x00419CD0] sub_00419CD0 (279 bytes)
extern "C" void ext_00419A90();
extern "C" void ext_00419B90();
extern "C" void ext_006A6304();
extern "C" int mem_00925540;
extern "C" int mem_0092464C;
extern "C" int mem_00924300;
extern "C" int mem_00925544;
extern "C" int mem_00924554;
extern "C" int mem_00925548;

extern "C" __declspec(naked) void __fastcall fn_00419CD0(void* self) {
    __asm {
        sub esp, 0x24
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call dword ptr [mem_00925540]
        test eax, eax
        jge short L_419CEB
        push eax
        call ext_006A6304
    L_419CEB:
        xor eax, eax
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [esi + 0x64]
        test eax, eax
        jne short L_419D1A
        mov dword ptr [esp + 0x8], eax
        jmp short L_419D21
    L_419D1A:
        mov ecx, dword ptr [eax + 0x20]
        mov dword ptr [esp + 0x8], ecx
    L_419D21:
        mov edx, dword ptr [esi + 0x6c]
        push ebx
        lea ebx, [esi + 0x54]
        push 0x104
        mov ecx, ebx
        mov dword ptr [esp + 0x14], edx
        call dword ptr [mem_0092464C]
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_00924300]
        cmp dword ptr [esi + 0x60], 0x0
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0x58]
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x20], offset ext_00419A90
        mov dword ptr [esp + 0x24], esi
        je short L_419D6C
        push 0x0
        mov ecx, esi
        call ext_00419B90
    L_419D6C:
        lea ecx, [esp + 0xc]
        push ecx
        call dword ptr [mem_00925544]
        test eax, eax
        mov dword ptr [esi + 0x60], eax
        jne short L_419D9F
        push -0x1
        mov ecx, ebx
        call dword ptr [mem_00924554]
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        pop ebx
        mov eax, 0x2
        pop esi
        add esp, 0x24
        ret
    L_419D9F:
        push edi
        lea edi, [esi + 0x68]
        push 0x104
        mov ecx, edi
        call dword ptr [mem_0092464C]
        mov ecx, dword ptr [esi + 0x60]
        push eax
        push ecx
        call dword ptr [mem_00925548]
        push -0x1
        mov ecx, edi
        call dword ptr [mem_00924554]
        push -0x1
        mov ecx, ebx
        call dword ptr [mem_00924554]
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        pop edi
        pop ebx
        mov eax, 0x1
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x00413480] sub_00413480 (282 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void __fastcall fn_00413480(void* self) {
    __asm {
        push -1
        push 0x87542e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [ebx], 0x92c1b4
        mov esi, dword ptr [ebx + 8]
        cmp esi, dword ptr [ebx + 0xc]
        lea ebp, [ebx + 4]
        mov dword ptr [esp + 0x20], 3
        mov dword ptr [esp + 0x10], ebp
        jbe L_a
        call dword ptr [mem_00925134]
L_a:
        mov edi, ebp
L_loop:
        mov ebp, dword ptr [ebp + 8]
        mov eax, edi
        cmp dword ptr [eax + 4], ebp
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        test edi, edi
        je L_c
        _emit 0x3b
        _emit 0xff
        je L_d
L_c:
        call dword ptr [mem_00925134]
L_d:
        cmp esi, ebp
        je L_e
        test edi, edi
        mov ebp, dword ptr [mem_00925134]
        jne L_f
        call ebp
L_f:
        cmp esi, dword ptr [edi + 8]
        jb L_g
        call ebp
L_g:
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_h
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
L_h:
        cmp esi, dword ptr [edi + 8]
        jb L_i
        call ebp
L_i:
        add esi, 4
        mov ebp, edi
        jmp L_loop
L_e:
        mov esi, dword ptr [ebx + 0x24]
        test esi, esi
        mov byte ptr [esp + 0x20], 2
        je L_k
        mov edi, dword ptr [ebx + 0x28]
        cmp esi, edi
        je L_m
        jmp L_n
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_n:
        mov ecx, esi
        call dword ptr [mem_009242F4]
        add esi, 0x1c
        cmp esi, edi
        jne L_n
L_m:
        mov ecx, dword ptr [ebx + 0x24]
        push ecx
        call ext_006A5C5C
        add esp, 4
L_k:
        xor eax, eax
        lea ecx, [ebx + 0x1c]
        mov dword ptr [ebx + 0x24], eax
        mov dword ptr [ebx + 0x28], eax
        mov dword ptr [ebx + 0x2c], eax
        call dword ptr [mem_009242F4]
        lea ecx, [ebx + 0x18]
        call dword ptr [mem_009242F4]
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 4]
        xor edi, edi
        cmp eax, edi
        je L_p
        push eax
        call ext_006A5C5C
        add esp, 4
L_p:
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0xc], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0041D980] sub_0041D980 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00ACC540;
extern "C" int mem_00ACC524;
extern "C" __declspec(naked) void* __fastcall fn_0041D980(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x87763e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00ACC540], al
        jne done_41D980
        or dword ptr [mem_00ACC540], eax
        push 0xa2f0cc
        push offset mem_00ACC524
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x914bb0
        call ext_006A6C87
        add esp, 0xc
done_41D980:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00ACC524
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0041CDA0] sub_0041CDA0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0041CDA0(void* self) {
    __asm {
        push ecx
        push esi
        push 0xb5ce94
        mov ecx, 0xa2e2f8
        mov dword ptr [esp + 0x8], 0x0
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

extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;

// [0x004142E0] sub_004142E0 (302 bytes)
extern "C" __declspec(naked) void __fastcall fn_004142E0(void* self) {
    __asm {
        push -1
        push 0x87588b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x92c4e0
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_00924FE4]
        mov ebx, eax
        push 0x92c4cc
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0xa8], 0
        call dword ptr [mem_00924FE4]
        mov edi, dword ptr [mem_00924FD0]
        push eax
        mov eax, dword ptr [esp + 0xb0]
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        mov byte ptr [esp + 0xb0], 1
        call edi
        mov edx, dword ptr [esp + 0xbc]
        push edx
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov byte ptr [esp + 0xbc], 2
        call edi
        push ebx
        push eax
        lea ecx, [esp + 0x84]
        push ecx
        mov byte ptr [esp + 0xc8], 3
        call edi
        add esp, 0x24
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xa8], 4
        call ext_00403560
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0xa4], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xa4], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0xa4], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xa4], 9
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0xa4], 0xa
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x9c]
        pop edi
        mov dword ptr [esi], 0x92c4c4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 8
    }
}

// [0x0041FF30] sub_0041FF30 (314 bytes)
// __thiscall (ret 0x8): SEH-framed (state -1/0) builds several std::string temporaries via
// MSVCP80 ctor/concat imports, calls sub_00403560 with the result, destroys the temporaries,
// and finally constructs a std::string copy at this+0x28 with vtable 0x92e2e0 at this+0.
extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0041FF30(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x87588b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0x92e2e8
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x14], esi
        call dword ptr [mem_00924FE4]
        mov ebx, eax
        push 0x92c4cc
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xac], 0
        call dword ptr [mem_00924FE4]
        mov edi, dword ptr [mem_00924FD0]
        push eax
        mov eax, dword ptr [esp + 0xb4]
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        mov byte ptr [esp + 0xb4], 1
        call edi
        mov ebp, dword ptr [esp + 0xc0]
        push ebp
        push eax
        lea edx, [esp + 0x28]
        push edx
        mov byte ptr [esp + 0xc0], 2
        call edi
        push ebx
        push eax
        lea eax, [esp + 0x88]
        push eax
        mov byte ptr [esp + 0xcc], 3
        call edi
        add esp, 0x24
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xac], 4
        call ext_00403560
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xa8], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xa8], 7
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xa8], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xa8], 9
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x84]
        mov byte ptr [esp + 0xa8], 0xa
        call dword ptr [mem_00924FF4]
        push ebp
        lea ecx, [esi + 0x28]
        mov dword ptr [esi], 0x92e2e0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 0x8
    }
}

// [0x004174F0] sub_004174F0 (319 bytes)
extern "C" void ext_006629B0();
extern "C" void ext_006A5FDA();

extern "C" __declspec(naked) void __fastcall fn_004174F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x94]
        call edx
        test al, al
        je L_fail_004174F0
        mov eax, dword ptr [esi + 0x78]
        cmp byte ptr [eax + 0x4e], 0
        jne L_fail_004174F0
        push ebx
        push 1
        lea ecx, [esi + 0x610]
        call ext_006A5FDA
        lea ecx, [esi + 0xac]
        push ecx
        call ext_006629B0
        mov edx, dword ptr [esi + 0x78]
        mov bl, al
        movzx eax, byte ptr [edx + 0xb8]
        add esp, 4
        push eax
        lea ecx, [esi + 0x664]
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x78]
        movzx edx, byte ptr [ecx + 0xb8]
        push edx
        lea ecx, [esi + 0x6b8]
        call ext_006A5FDA
        mov eax, dword ptr [esi + 0x78]
        cmp byte ptr [eax + 0xb8], 0
        je short L_a_004174F0
        test bl, bl
        je short L_a_004174F0
        mov eax, 1
        jmp short L_b_004174F0
    L_a_004174F0:
        xor eax, eax
    L_b_004174F0:
        push eax
        lea ecx, [esi + 0x70c]
        call ext_006A5FDA
        mov ecx, dword ptr [esi + 0x78]
        cmp byte ptr [ecx + 0xb8], 0
        je short L_c_004174F0
        test bl, bl
        je short L_c_004174F0
        mov eax, 1
        jmp short L_d_004174F0
    L_c_004174F0:
        xor eax, eax
    L_d_004174F0:
        push eax
        lea ecx, [esi + 0x760]
        call ext_006A5FDA
        mov edx, dword ptr [esi + 0x78]
        cmp byte ptr [edx + 0xb8], 0
        je short L_e_004174F0
        test bl, bl
        je short L_e_004174F0
        mov eax, 1
        push eax
        lea ecx, [esi + 0x7b4]
        call ext_006A5FDA
        pop ebx
        pop esi
        ret
    L_e_004174F0:
        xor eax, eax
        push eax
        lea ecx, [esi + 0x7b4]
        call ext_006A5FDA
        pop ebx
        pop esi
        ret
    L_fail_004174F0:
        push 0
        lea ecx, [esi + 0x610]
        call ext_006A5FDA
        push 0
        lea ecx, [esi + 0x664]
        call ext_006A5FDA
        push 0
        lea ecx, [esi + 0x6b8]
        call ext_006A5FDA
        push 0
        lea ecx, [esi + 0x70c]
        call ext_006A5FDA
        push 0
        lea ecx, [esi + 0x760]
        call ext_006A5FDA
        push 0
        lea ecx, [esi + 0x7b4]
        call ext_006A5FDA
        pop esi
        ret
    }
}

// [0x00418870] sub_00418870 (67 bytes)
extern "C" void ext_004174F0();
extern "C" void ext_00417650();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_00418870(void* self) {
    __asm {
        push ecx
        push esi
        push 0
        push 0
        mov esi, ecx
        mov eax, dword ptr [esi + 0x630]
        push 0xf0
        push eax
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esi + 0x78]
        cmp eax, 1
        sete al
        mov byte ptr [ecx + 0xb8], al
        mov ecx, esi
        mov byte ptr [esp + 4], al
        call ext_004174F0
        mov edx, dword ptr [esp + 4]
        push edx
        mov ecx, esi
        call ext_00417650
        pop esi
        pop ecx
        ret
    }
}

// [0x0041D890] sub_0041D890 (161 bytes)
extern "C" void ext_004545D0();
extern "C" void ext_00455F10();
extern "C" void ext_00454BE0();
extern "C" void ext_00454560();
extern "C" void ext_006A63B2();
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D8;
extern "C" int mem_0093A0D4;
extern "C" int mem_0093A0E0;
extern "C" int mem_0093A0DC;

extern "C" __declspec(naked) void __fastcall fn_0041D890(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87b328
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_004545D0
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi], 0x0092DD84
        mov dword ptr [esi + 0x144], eax
        mov ecx, dword ptr [mem_0093A0C4]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_00455F10
        mov edx, dword ptr [mem_0093A0CC]
        push edx
        mov ecx, esi
        call ext_00454BE0
        mov eax, dword ptr [mem_0093A0C4]
        mov ecx, dword ptr [mem_0093A0D8]
        mov edx, dword ptr [mem_0093A0D4]
        push eax
        mov eax, dword ptr [mem_0093A0E0]
        push ecx
        mov ecx, dword ptr [mem_0093A0DC]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call ext_00454560
        push 0xf
        push 0xf
        push 0xf
        push 0xf
        mov ecx, esi
        call ext_006A63B2
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00414070] sub_00414070 (352 bytes)
extern "C" void ext_00401080();
extern "C" void ext_00454560();
extern "C" void ext_00454BE0();
extern "C" void ext_00455C80();
extern "C" void ext_00455F10();
extern "C" void ext_006A617E();
extern "C" void ext_006A6184();
extern "C" int mem_0093A0BC;
extern "C" int mem_0093A0B0;
extern "C" int mem_00925694;
extern "C" int mem_00924FA0;
extern "C" int mem_00924FA4;
extern "C" int mem_00924FA8;
extern "C" int mem_00924FAC;
extern "C" int mem_0093A0C4;
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0D8;
extern "C" int mem_0093A0D4;
extern "C" int mem_0093A0E0;
extern "C" int mem_0093A0DC;

extern "C" __declspec(naked) int __fastcall fn_00414070(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x10
        push esi
        push eax
        mov esi, ecx
        call ext_00455C80
        cmp eax, -1
        jne L414070_pos
        or eax, eax
        pop esi
        add esp, 0x10
        ret 4
    L414070_pos:
        mov ecx, dword ptr [esi + 0x94]
        push ebp
        push edi
        push 0x7b
        and ecx, -0x10
        push esi
        or ecx, 0x20
        lea edx, [esp + 0x14]
        xor ebp, ebp
        push edx
        mov dword ptr [esi + 0x94], ecx
        lea edi, [esi + 0x144]
        push 0x50201044
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebp
        call ext_006A6184
        test eax, eax
        jne L414070_ok1
        pop edi
        pop ebp
        or eax, -1
        pop esi
        add esp, 0x10
        ret 4
    L414070_ok1:
        mov eax, dword ptr [mem_0093A0BC]
        mov ecx, dword ptr [mem_0093A0B0]
        push ebx
        push ebp
        push eax
        lea ebx, [esi + 0x198]
        push ecx
        mov ecx, ebx
        call ext_006A617E
        test eax, eax
        jne L414070_ok2
        pop ebx
        pop edi
        pop ebp
        or eax, -1
        pop esi
        add esp, 0x10
        ret 4
    L414070_ok2:
        push 1
        push ebx
        mov ecx, edi
        call ext_00401080
        mov edx, dword ptr [esi + 0x164]
        push ebp
        push 1
        push 0xcf
        push edx
        call dword ptr [mem_00925694]
        cmp edi, ebp
        mov ecx, dword ptr [esi + 0x1a0]
        jne L414070_a
        xor edi, edi
        jmp L414070_b
    L414070_a:
        mov edi, dword ptr [edi + 0x20]
    L414070_b:
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        push edi
        call edx
        mov eax, dword ptr [esi + 0x1a4]
        push eax
        mov eax, dword ptr [mem_00924FA0]
        mov ecx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 4]
        add ecx, eax
        call dword ptr [mem_00924FA4]
        mov dword ptr [esi + 0x1ac], eax
        mov eax, dword ptr [esi + 0x1a8]
        push eax
        mov eax, dword ptr [mem_00924FA8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        call dword ptr [mem_00924FAC]
        mov dword ptr [esi + 0x1b0], eax
        mov eax, dword ptr [mem_0093A0C4]
        push eax
        mov ecx, esi
        call ext_00455F10
        mov ecx, dword ptr [mem_0093A0CC]
        push ecx
        mov ecx, esi
        call ext_00454BE0
        mov edx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [mem_0093A0D8]
        mov ecx, dword ptr [mem_0093A0D4]
        push edx
        mov edx, dword ptr [mem_0093A0E0]
        push eax
        mov eax, dword ptr [mem_0093A0DC]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_00454560
        pop ebx
        pop edi
        pop ebp
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x00416E00] sub_00416E00 (364 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FDA();
extern "C" int mem_00925694;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00416E00(void* self) {
    __asm {
        push -1
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x2d
        __asm _emit 0x8b
        __asm _emit 0x00
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x88]
        mov al, byte ptr [eax + 0x165]
        mov edx, dword ptr [esi + 0x154]
        push edi
        push 0
        movzx ecx, al
        push ecx
        push 0xf1
        push edx
        call dword ptr [mem_00925694]
        mov eax, dword ptr [esi + 0x88]
        mov eax, dword ptr [eax + 0x168]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x50], 0
        lea edi, [esi + 0x8c]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call ext_006A5F50
        or ebp, -1
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x50], ebp
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi + 0x88]
        mov eax, dword ptr [edx + 0x16c]
        push eax
        lea eax, [esp + 0x14]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x50], 1
        lea ebx, [esi + 0xe0]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebx
        call ext_006A5F50
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x50], ebp
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx + 0x174]
        push eax
        lea edx, [esp + 0x30]
        push edx
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x50], 2
        lea ebp, [esi + 0x1dc]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call ext_006A5F50
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x88]
        cmp byte ptr [eax + 0x165], 0
        mov ecx, edi
        je L1
        push 1
        call ext_006A5FDA
        push 1
        mov ecx, ebx
        call ext_006A5FDA
        push 1
        jmp L2
    L1:
        push 0
        call ext_006A5FDA
        push 0
        mov ecx, ebx
        call ext_006A5FDA
        push 0
    L2:
        mov ecx, ebp
        call ext_006A5FDA
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

// [0x0041D7B0] sub_0041D7B0 (127 bytes)
extern "C" void ext_0041D330();
extern "C" void ext_00503A00();
extern "C" void ext_006A7CA0();
extern "C" void ext_006A7D00();
extern "C" void ext_006A7D20();
extern "C" void ext_006A7D40();
extern "C" void ext_006A7D60();
extern "C" int mem_00925688;
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_0041D7B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0041D330
        test al, al
        je loc_41D82D
        mov eax, dword ptr [esi + 0x30]
        mov ecx, dword ptr [esi + 0x0c]
        push eax
        call ext_006A7CA0
        mov ecx, dword ptr [esi + 0x34]
        push ecx
        mov ecx, dword ptr [esi + 0x0c]
        call ext_006A7D20
        mov edx, dword ptr [esi + 0x38]
        mov ecx, dword ptr [esi + 0x0c]
        push edx
        call ext_006A7D40
        mov eax, dword ptr [esi + 0x3c]
        mov ecx, dword ptr [esi + 0x0c]
        push eax
        call ext_006A7D00
        mov ecx, dword ptr [esi + 0x40]
        push ecx
        mov ecx, dword ptr [esi + 0x0c]
        call ext_006A7D60
        mov ecx, esi
        call ext_00503A00
        test eax, eax
        je loc_41D82D
        cmp dword ptr [eax + 0x20], 0
        je loc_41D82D
        push 1
        push 0
        call ext_00503A00
        mov edx, dword ptr [eax + 0x20]
        push edx
        call dword ptr [mem_00925688]
        mov ecx, esi
        call ext_00503A00
        mov eax, dword ptr [eax + 0x20]
        push eax
        call dword ptr [mem_0092568C]
    loc_41D82D:
        pop esi
        ret
    }
}

// [0x00417420] sub_00417420 (193 bytes)
extern "C" void ext_006639E0();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FC8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00417420(void* self) {
    __asm {
        push -1
        push 0x8848f2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x78]
        add eax, 0x8c
        push 0x928b5d
        push eax
        mov dword ptr [esp + 0x4c], 0
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_skip
        mov ecx, dword ptr [esi + 0x78]
        add ecx, 0x8c
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x24]
        push eax
        call ext_006639E0
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x44], 0x0
        call dword ptr [mem_00924FF4]
    L_skip:
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x418]
        call ext_006A5F50
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x00417340] sub_00417340 (215 bytes)
extern "C" void ext_006639E0();
extern "C" void ext_006A5F50();
extern "C" int mem_00924300;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00417340(void* self) {
    __asm {
        push -1
        push 0x87621b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x80]
        call dword ptr [mem_00924300]
        push eax
        lea eax, [esp + 0x8]
        push eax
        call ext_006639E0
        add esp, 0x8
        mov ecx, dword ptr [esi + 0x78]
        cmp byte ptr [ecx + 0x88], 0
        mov dword ptr [esp + 0x44], 0
        je L_else
        lea edx, [esp + 0x4]
        push edx
        lea eax, [esp + 0x24]
        push 0xacafcc
        push eax
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        mov byte ptr [esp + 0x44], 1
        jmp L_assign
    L_else:
        lea ecx, [esp + 0x4]
        push ecx
        lea edx, [esp + 0x24]
        push 0xacafb0
        push edx
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        mov byte ptr [esp + 0x44], 2
    L_assign:
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x44], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x370]
        call ext_006A5F50
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x004145C0] sub_004145C0 (501 bytes)
extern "C" int mem_0092C518;
extern "C" int mem_00924E38;

extern "C" __declspec(naked) void __cdecl fn_004145C0() {
    __asm {
        sub esp, 0x28
        mov ecx, dword ptr [esp + 0x34]
        fnstcw word ptr [esp + 0x34]
        movzx eax, word ptr [esp + 0x34]
        fld dword ptr [ecx]
        fmul dword ptr [ecx + 0xc]
        or eax, 0xc00
        fld qword ptr [mem_0092C518]
        mov dword ptr [esp], eax
        fmul st(1), st(0)
        xor edx, edx
        fldcw word ptr [esp]
        mov dword ptr [esp + 0x8], 0x0
        mov dword ptr [esp + 0xc], 0x0
        fxch st(1)
        fistp dword ptr [esp]
        movzx eax, word ptr [esp]
        mov dh, al
        fldcw word ptr [esp + 0x34]
        mov word ptr [esp + 0x10], dx
        fld dword ptr [ecx + 0x4]
        xor edx, edx
        fmul dword ptr [ecx + 0xc]
        fnstcw word ptr [esp + 0x34]
        fmul st(0), st(1)
        movzx eax, word ptr [esp + 0x34]
        or eax, 0xc00
        mov dword ptr [esp], eax
        fldcw word ptr [esp]
        fistp dword ptr [esp]
        movzx eax, word ptr [esp]
        mov dh, al
        fldcw word ptr [esp + 0x34]
        mov word ptr [esp + 0x12], dx
        fld dword ptr [ecx + 0x8]
        xor edx, edx
        fmul dword ptr [ecx + 0xc]
        fnstcw word ptr [esp + 0x34]
        fmul st(0), st(1)
        movzx eax, word ptr [esp + 0x34]
        or eax, 0xc00
        mov dword ptr [esp], eax
        fldcw word ptr [esp]
        fistp dword ptr [esp]
        movzx eax, word ptr [esp]
        mov dh, al
        fldcw word ptr [esp + 0x34]
        mov word ptr [esp + 0x14], dx
        fld dword ptr [ecx + 0xc]
        fnstcw word ptr [esp + 0x34]
        xor ecx, ecx
        fmul st(0), st(1)
        movzx eax, word ptr [esp + 0x34]
        or eax, 0xc00
        mov dword ptr [esp], eax
        fldcw word ptr [esp]
        fistp dword ptr [esp]
        movzx eax, word ptr [esp]
        mov ch, al
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [eax + 0x8]
        fldcw word ptr [esp + 0x34]
        sub edx, dword ptr [eax]
        mov dword ptr [esp + 0x18], edx
        mov word ptr [esp + 0x16], cx
        mov ecx, dword ptr [eax + 0xc]
        fnstcw word ptr [esp + 0x34]
        sub ecx, dword ptr [eax + 0x4]
        movzx eax, word ptr [esp + 0x34]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [esp + 0x38]
        or eax, 0xc00
        mov dword ptr [esp + 0x30], eax
        fld dword ptr [ecx + 0xc]
        xor eax, eax
        fmul dword ptr [ecx]
        fmul st(0), st(1)
        fldcw word ptr [esp + 0x30]
        fistp dword ptr [esp + 0x30]
        movzx edx, word ptr [esp + 0x30]
        mov ah, dl
        fldcw word ptr [esp + 0x34]
        fld dword ptr [ecx + 0x4]
        mov word ptr [esp + 0x20], ax
        fmul dword ptr [ecx + 0xc]
        mov dword ptr [esp], 0x0
        fnstcw word ptr [esp + 0x34]
        mov dword ptr [esp + 0x4], 0x1
        movzx eax, word ptr [esp + 0x34]
        fmul st(0), st(1)
        or eax, 0xc00
        mov dword ptr [esp + 0x30], eax
        xor eax, eax
        fldcw word ptr [esp + 0x30]
        fistp dword ptr [esp + 0x30]
        movzx edx, word ptr [esp + 0x30]
        mov ah, dl
        fldcw word ptr [esp + 0x34]
        fld dword ptr [ecx + 0x8]
        mov word ptr [esp + 0x22], ax
        fmul dword ptr [ecx + 0xc]
        fnstcw word ptr [esp + 0x34]
        fmul st(0), st(1)
        movzx eax, word ptr [esp + 0x34]
        or eax, 0xc00
        mov dword ptr [esp + 0x30], eax
        xor eax, eax
        fldcw word ptr [esp + 0x30]
        fistp dword ptr [esp + 0x30]
        movzx edx, word ptr [esp + 0x30]
        mov ah, dl
        xor edx, edx
        fldcw word ptr [esp + 0x34]
        fmul dword ptr [ecx + 0xc]
        mov word ptr [esp + 0x24], ax
        fnstcw word ptr [esp + 0x34]
        movzx eax, word ptr [esp + 0x34]
        or eax, 0xc00
        mov dword ptr [esp + 0x30], eax
        mov eax, dword ptr [esp + 0x2c]
        test eax, eax
        fldcw word ptr [esp + 0x30]
        fistp dword ptr [esp + 0x30]
        mov cx, word ptr [esp + 0x30]
        mov dh, cl
        fldcw word ptr [esp + 0x34]
        mov word ptr [esp + 0x26], dx
        je L_skip
        mov eax, dword ptr [eax + 0x4]
    L_skip:
        push 0x0
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        push 0x2
        lea edx, [esp + 0x18]
        push edx
        push eax
        call dword ptr [mem_00924E38]
        add esp, 0x28
        ret
    }
}

// [0x00418130] sub_00418130 (542 bytes)
extern "C" void ext_006629B0();
extern "C" void ext_00663580();
extern "C" int mem_00924FD4;
extern "C" int mem_0092449C;
extern "C" int mem_00924FE8;
extern "C" int mem_00924300;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00418130(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8764a4
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xe0
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xac]
        push 0x928b5d
        mov ecx, edi
        call dword ptr [mem_00924FD4]
        lea ebp, [esi + 0x90]
        push 0x928b5d
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
        add esi, 0x88
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_0092449C]
        test eax, eax
        je loc_418336
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0xf4], 0x0
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xf4], 0x1
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0xf4], 0x2
        call dword ptr [mem_00924FE8]
        lea eax, [esp + 0x7c]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        lea eax, [esp + 0x34]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x104], 0x3
        call dword ptr [mem_00924300]
        push eax
        call ext_00663580
        mov esi, dword ptr [mem_00924FD0]
        lea ecx, [esp + 0x58]
        push ecx
        lea edx, [esp + 0x40]
        push edx
        lea eax, [esp + 0xec]
        push eax
        call esi
        lea ecx, [esp + 0x2c]
        push ecx
        push eax
        lea edx, [esp + 0xc0]
        push edx
        mov byte ptr [esp + 0x120], 0x4
        call esi
        push 0xacaf94
        push eax
        lea eax, [esp + 0xe8]
        push eax
        mov byte ptr [esp + 0x12c], 0x5
        call esi
        push 0xb59208
        push eax
        lea ecx, [esp + 0xa0]
        push ecx
        mov byte ptr [esp + 0x138], 0x6
        call esi
        add esp, 0x44
        lea ecx, [esp + 0xb4]
        mov byte ptr [esp + 0xf4], 0x8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0xf4], 0x9
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xd0]
        mov byte ptr [esp + 0xf4], 0xa
        call dword ptr [mem_00924FF4]
        lea edx, [esp + 0x60]
        push edx
        call ext_006629B0
        add esp, 0x4
        test al, al
        je loc_4182d9
        lea ecx, [esp + 0x60]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FD4]
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, ebp
        call dword ptr [mem_00924FD4]
    loc_4182d9:
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xf4], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0xf4], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xf4], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0xf4], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xf4], 0xffffffff
        call dword ptr [mem_00924FF4]
    loc_418336:
        mov ecx, dword ptr [esp + 0xec]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0xec
        ret
    }
}

// [0x0041A5A0] sub_0041A5A0 (172 bytes)
extern "C" void ext_00414410();
extern "C" void ext_0041A530();
extern "C" void ext_0045E770();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A2EDD4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0041A5A0(void* self) {
    __asm {
        push    -1
        push    0x8768d1
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x78]
        mov     esi, ecx
        mov     dword ptr [esp + 0x78], edi
        mov     ebx, dword ptr [esp + 0x74]
        push    ebx
        mov     dword ptr [esp + 0x70], 0
        call    ext_0041A530
        test    eax, eax
        je      L_41a612
        mov     eax, dword ptr [mem_00A2EDD4]
        push    eax
        lea     ecx, [esp + 0x24]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x78]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x44]
        mov     byte ptr [esp + 0x74], 1
        call    ext_00414410
        push    0x9d1278
        lea     eax, [esp + 0x40]
        push    eax
        call    ext_006A6DD2
    L_41a612:
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x80], 0
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], edi
        call    ext_0045E770
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret     8
    }
}

extern "C" void ext_0041A5A0();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();

// [0x0041A790] sub_0041A790 (157 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041A790(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8768ea
        push    eax
        mov     dword ptr fs:[0], esp
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        shl     esi, 0x18
        or      esi, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esp + 0x2c]
        or      esi, edi
        push    esi
        mov     ebp, ecx
        call    ext_0041A530
        mov     ebx, eax
        test    ebx, ebx
        jne     loc_41a80e
        push    8
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x2c], eax
        test    eax, eax
        mov     dword ptr [esp + 0x18], ebx
        je      loc_41a7f9
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        neg     edi
        push    ecx
        sbb     edi, edi
        push    edx
        and     edi, 2
        push    edi
        mov     ecx, eax
        call    ext_006A6148
        jmp     loc_41a7fb
    loc_41a7f9:
        xor     eax, eax
    loc_41a7fb:
        push    eax
        push    esi
        mov     ecx, ebp
        mov     dword ptr [esp + 0x20], 0xffffffff
        mov     ebx, eax
        call    ext_0041A5A0
    loc_41a80e:
        mov     ecx, dword ptr [esp + 0x20]
        push    ebx
        call    ext_006A610C
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}

// [0x0041A650] sub_0041A650 (172 bytes)
extern "C" void ext_00414410();
extern "C" void ext_0041A530();
extern "C" void ext_0045E770();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A2EDD8;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0041A650(void* self) {
    __asm {
        push    -1
        push    0x8768d1
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x78]
        mov     esi, ecx
        mov     dword ptr [esp + 0x78], edi
        mov     ebx, dword ptr [esp + 0x74]
        push    ebx
        mov     dword ptr [esp + 0x70], 0
        call    ext_0041A530
        test    eax, eax
        je      L_41a6c2
        mov     eax, dword ptr [mem_00A2EDD8]
        push    eax
        lea     ecx, [esp + 0x24]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x78]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x44]
        mov     byte ptr [esp + 0x74], 1
        call    ext_00414410
        push    0x9d1278
        lea     eax, [esp + 0x40]
        push    eax
        call    ext_006A6DD2
    L_41a6c2:
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x80], 0
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], edi
        call    ext_0045E770
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret     0x8
    }
}

extern "C" void ext_0041A650();
extern "C" void ext_006A61A8();
extern "C" void ext_006A61AE();

// [0x0041A830] sub_0041A830 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041A830(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x87690a
        push    eax
        mov     dword ptr fs:[0], esp
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    esi
        push    edi
        lea     edi, [ecx + 0x18]
        push    ebx
        mov     ecx, edi
        call    ext_0041A530
        mov     esi, eax
        test    esi, esi
        jne     L_done_alloc
        push    8
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], esi
        je      L_null
        push    ebx
        mov     ecx, eax
        call    ext_006A61AE
        jmp     L_after_ctor
    L_null:
        xor     eax, eax
    L_after_ctor:
        push    eax
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], 0xffffffff
        mov     esi, eax
        call    ext_0041A650
    L_done_alloc:
        mov     ecx, dword ptr [esp + 0x1c]
        push    esi
        call    ext_006A61A8
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}

// [0x00417CD0] sub_00417CD0 (561 bytes)
extern "C" void ext_006A5DFA();
extern "C" void ext_006A5EFC();
extern "C" void ext_006A5F2C();
extern "C" void ext_006A5F38();
extern "C" void ext_006A5F6E();
extern "C" void ext_006A5FF2();
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_00417CD0(void* self) {
    __asm {
        push -1
        push 0x876441
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x92ce5c
        lea ecx, [esi + 0x8b0]
        mov dword ptr [esp + 0x10], 0x1e
        call ext_006A5DFA
        lea ecx, [esi + 0x85c]
        mov byte ptr [esp + 0x10], 0x1d
        call ext_006A5F38
        lea ecx, [esi + 0x808]
        mov byte ptr [esp + 0x10], 0x1c
        call ext_006A5F38
        lea ecx, [esi + 0x7b4]
        mov byte ptr [esp + 0x10], 0x1b
        call ext_006A5F2C
        lea ecx, [esi + 0x760]
        mov byte ptr [esp + 0x10], 0x1a
        call ext_006A5F2C
        lea ecx, [esi + 0x70c]
        mov byte ptr [esp + 0x10], 0x19
        call ext_006A5F2C
        lea ecx, [esi + 0x6b8]
        mov byte ptr [esp + 0x10], 0x18
        call ext_006A5DFA
        lea ecx, [esi + 0x664]
        mov byte ptr [esp + 0x10], 0x17
        call ext_006A5F38
        lea ecx, [esi + 0x610]
        mov byte ptr [esp + 0x10], 0x16
        call ext_006A5DFA
        lea ecx, [esi + 0x5bc]
        mov byte ptr [esp + 0x10], 0x15
        call ext_006A5F2C
        lea ecx, [esi + 0x568]
        mov byte ptr [esp + 0x10], 0x14
        call ext_006A5F38
        lea ecx, [esi + 0x514]
        mov byte ptr [esp + 0x10], 0x13
        call ext_006A5F38
        lea ecx, [esi + 0x4c0]
        mov byte ptr [esp + 0x10], 0x12
        call ext_006A5F38
        lea ecx, [esi + 0x46c]
        mov byte ptr [esp + 0x10], 0x11
        call ext_006A5DFA
        lea ecx, [esi + 0x418]
        mov byte ptr [esp + 0x10], 0x10
        call ext_006A5F38
        mov byte ptr [esp + 0x10], 0xf
        lea ecx, [esi + 0x3c4]
        call ext_006A5DFA
        lea ecx, [esi + 0x370]
        mov byte ptr [esp + 0x10], 0xe
        call ext_006A5EFC
        lea ecx, [esi + 0x368]
        mov byte ptr [esp + 0x10], 0xd
        mov dword ptr [ecx], 0x92a23c
        call ext_006A5FF2
        lea ecx, [esi + 0x314]
        mov byte ptr [esp + 0x10], 0xc
        call ext_006A5DFA
        lea ecx, [esi + 0x2c0]
        mov byte ptr [esp + 0x10], 0xb
        call ext_006A5DFA
        lea ecx, [esi + 0x26c]
        mov byte ptr [esp + 0x10], 0xa
        call ext_006A5DFA
        lea ecx, [esi + 0x218]
        mov byte ptr [esp + 0x10], 0x9
        call ext_006A5F38
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006A5F2C
        lea ecx, [esi + 0x170]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006A5F2C
        lea ecx, [esi + 0x11c]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006A5F2C
        lea ecx, [esi + 0xc8]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006A5F2C
        lea ecx, [esi + 0xac]
        mov byte ptr [esp + 0x10], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x90]
        mov byte ptr [esp + 0x10], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x88]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x84]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x80]
        call dword ptr [mem_009242F4]
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

// [0x00417750] sub_00417750 (573 bytes)
extern "C" void ext_00417340();
extern "C" void ext_00417420();
extern "C" void ext_00664ED0();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006A6232();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00417750(void* self) {
    __asm {
        push -1
        push 0x876283
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x240
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE4]
        push 0x928b5d
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x250], 0
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x44]
        mov byte ptr [esp + 0x24c], 1
        call edx
        test al, al
        je L_chk48
        push 0xad7bbc
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FDC]
        push 0x92ce50
        jmp L_common
    L_chk48:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x48]
        call edx
        test al, al
        je L_chk4c
        push 0xad7c48
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FDC]
        push 0x92ce4c
        jmp L_common
    L_chk4c:
        mov ecx, dword ptr [esi + 0x74]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4c]
        call edx
        test al, al
        je L_after_assign
        push 0xad7adc
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FDC]
        push 0x92ce48
    L_common:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FD4]
    L_after_assign:
        push 0
        push esi
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FF0]
        push eax
        push 0x1000
        push 0
        push 0x928b5d
        push 1
        lea ecx, [esp + 0x98]
        call ext_006A5F68
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0x24c], 2
        call ext_006A5F62
        cmp eax, 1
        lea ecx, [esp + 0x7c]
        jne L_skip_block
        lea eax, [esp + 8]
        push eax
        call ext_006A6232
        mov ecx, eax
        mov byte ptr [esp + 0x24c], 3
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x24c], 5
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0xc]
        push ecx
        call ext_00664ED0
        lea edx, [esp + 0x48]
        push edx
        call ext_00664ED0
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x50]
        push ecx
        call dword ptr [mem_00924FC4]
        add esp, 0x10
        test al, al
        je L_skip_inner
        lea edx, [esp + 4]
        push edx
        lea ecx, [esp + 0x80]
        call ext_006A5F5C
        mov ecx, eax
        mov byte ptr [esp + 0x24c], 6
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x64]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 4]
        mov byte ptr [esp + 0x24c], 8
        call dword ptr [mem_009242F4]
        mov eax, dword ptr [esi + 0x78]
        lea ecx, [esp + 0x60]
        push ecx
        lea ecx, [eax + 0x8c]
        call dword ptr [mem_00924FDC]
        mov ecx, esi
        call ext_00417420
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x24c], 5
        call dword ptr [mem_00924FF4]
    L_skip_inner:
        mov ecx, esi
        call ext_00417340
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x24c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x7c]
    L_skip_block:
        mov byte ptr [esp + 0x24c], 1
        call ext_006A5F56
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x24c], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x24c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x244]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x24c
        ret
    }
}

// [0x0041D090] sub_0041D090 (660 bytes)
extern "C" void ext_00419940();
extern "C" void ext_004199B0();
extern "C" void ext_00662B20();
extern "C" void ext_00665010();
extern "C" void ext_006A5F56();
extern "C" void ext_006A5F5C();
extern "C" void ext_006A5F62();
extern "C" void ext_006A5F68();
extern "C" void ext_006AD180();
extern "C" void ext_006B4440();
extern "C" int mem_00924300;
extern "C" int mem_00924FE4;
extern "C" int mem_009242F4;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_009242F0;
extern "C" int mem_00924494;

extern "C" __declspec(naked) void __fastcall fn_0041D090(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8775a2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x21c
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x238]
        push edi
        mov ecx, esi
        call ext_006AD180
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edi + 0x48]
        cmp eax, 0xd
        jl loc_0041D307
        cmp eax, 0xe
        jle loc_0041D21B
        cmp eax, 0xf
        jne loc_0041D307
        mov ecx, esi
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov dword ptr [esp + 0x234], 0x0
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x234], 0x2
        call dword ptr [mem_009242F4]
        lea eax, [esp + 0x2c]
        push eax
        call ext_00665010
        add esp, 0x4
        mov ecx, esi
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x238], 0x3
        call ext_00419940
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x234], 0x5
        call dword ptr [mem_009242F4]
        push 0x929f50
        lea ecx, [esp + 0x18]
        call ext_004199B0
        test al, al
        lea ecx, [esp + 0x14]
        je loc_0041D1FB
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FD4]
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        call ext_00662B20
        add esp, 0x8
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_006B4440
        lea ecx, [esp + 0x2c]
        mov esi, eax
        call dword ptr [mem_00924FF0]
        push ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_009242F0]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x234], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov al, 0x1
        jmp loc_0041D309
    loc_0041D1FB:
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x234], 0xffffffff
        call dword ptr [mem_00924FF4]
        jmp loc_0041D307
    loc_0041D21B:
        sub eax, 0xd
        neg eax
        sbb eax, eax
        and eax, 0xffffeffa
        add eax, 0x2006
        mov ecx, esi
        mov ebx, eax
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, eax
        call edx
        mov ebp, eax
        push 0x0
        push 0x0
        lea ecx, [edi + 0xd8]
        mov dword ptr [esp + 0x23c], 0x6
        call dword ptr [mem_00924FF0]
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr [mem_00924300]
        push eax
        push 0x0
        push 0x1
        lea ecx, [esp + 0x80]
        call ext_006A5F68
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x234], 0x8
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x64]
        call ext_006A5F62
        cmp eax, 0x1
        lea ecx, [esp + 0x64]
        jne loc_0041D2F7
        lea eax, [esp + 0x10]
        push eax
        call ext_006A5F5C
        mov ecx, esi
        mov byte ptr [esp + 0x234], 0x9
        call ext_006B4440
        push ecx
        lea edx, [esp + 0x14]
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push edx
        mov esi, eax
        call dword ptr [mem_00924494]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        lea ecx, [esp + 0x64]
        mov dword ptr [esp + 0x234], 0xffffffff
        call ext_006A5F56
        mov al, 0x1
        jmp loc_0041D309
    loc_0041D2F7:
        mov dword ptr [esp + 0x234], 0xffffffff
        call ext_006A5F56
    loc_0041D307:
        xor al, al
    loc_0041D309:
        mov ecx, dword ptr [esp + 0x22c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x228
        ret 0x4
    }
}

// [0x00417990] sub_00417990 (818 bytes)
extern "C" void ext_00417630();
extern "C" void ext_006A5C6E();
extern "C" void ext_006A5FC2();
extern "C" int mem_00924494;
extern "C" int mem_009242F0;
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_00417990(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x876441
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, [esp+0x1c]
        push ebx
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x121
        mov [esp+0x14], esi
        call ext_006A5FC2
        mov ecx, [esp+0x24]
        xor ebx, ebx
        push ecx
        lea ecx, [esi+0x80]
        mov [esp+0x1c], ebx
        mov dword ptr [esi], 0x92ce5c
        mov [esi+0x74], ebx
        mov [esi+0x78], ebx
        mov [esi+0x7c], bl
        call dword ptr [mem_00924494]
        push 0x928b5d
        lea ecx, [esi+0x84]
        mov byte ptr [esp+0x1c], 1
        call dword ptr [mem_009242F0]
        push 0x928b5d
        lea ecx, [esi+0x88]
        mov byte ptr [esp+0x1c], 2
        call dword ptr [mem_009242F0]
        lea ecx, [esi+0x90]
        mov byte ptr [esp+0x18], 3
        mov [esi+0x8c], ebx
        call dword ptr [mem_00924FE8]
        lea ecx, [esi+0xac]
        mov byte ptr [esp+0x18], 4
        call dword ptr [mem_00924FE8]
        lea edi, [esi+0xc8]
        mov ecx, edi
        mov byte ptr [esp+0x18], 5
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x11c]
        mov ecx, edi
        mov byte ptr [esp+0x18], 6
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x170]
        mov ecx, edi
        mov byte ptr [esp+0x18], 7
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x1c4]
        mov ecx, edi
        mov byte ptr [esp+0x18], 8
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x218]
        mov ecx, edi
        mov byte ptr [esp+0x18], 9
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x26c]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0xa
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi+0x2c0]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0xb
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi+0x314]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0xc
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        mov [esi+0x36c], ebx
        mov dword ptr [esi+0x368], 0x92a5d4
        lea edi, [esi+0x370]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0xe
        call ext_006A5C6E
        mov dword ptr [edi], 0x929b6c
        lea edi, [esi+0x3c4]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0xf
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi+0x418]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x10
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x46c]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x11
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi+0x4c0]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x12
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x514]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x13
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x568]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x14
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x5bc]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x15
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x610]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x16
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi+0x664]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x17
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x6b8]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x18
        call ext_006A5C6E
        mov dword ptr [edi], 0x9287e4
        lea edi, [esi+0x70c]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x19
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x760]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x1a
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x7b4]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x1b
        call ext_006A5C6E
        mov dword ptr [edi], 0x929cb4
        lea edi, [esi+0x808]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x1c
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x85c]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x1d
        call ext_006A5C6E
        mov dword ptr [edi], 0x929e0c
        lea edi, [esi+0x8b0]
        mov ecx, edi
        mov byte ptr [esp+0x18], 0x1e
        call ext_006A5C6E
        mov edx, [esp+0x20]
        push edx
        mov ecx, esi
        mov dword ptr [edi], 0x9287e4
        call ext_00417630
        mov ecx, [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00415820] sub_00415820 (936 bytes)
extern "C" void ext_004155A0();
extern "C" void ext_006A6EC0();
extern "C" int mem_00924ED4;
extern "C" int mem_009242E0;
extern "C" int mem_00924ED8;
extern "C" int mem_009241BC;
extern "C" int mem_00925694;
extern "C" int mem_0092560C;
extern "C" int mem_00AC9CD4;
extern "C" int mem_00924EDC;
extern "C" int mem_00925610;
extern "C" int mem_00925614;
extern "C" int mem_00924EE0;
extern "C" int mem_00924EF0;

extern "C" __declspec(naked) void __fastcall fn_00415820(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x875bf9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea ecx, [ebp - 0x4c]
        mov byte ptr [ebp - 0xd], 0
        call dword ptr [mem_00924ED4]
        mov esi, dword ptr [ebx + 0x1c]
        lea edi, [ebx + 0x2c]
        push edi
        mov dword ptr [ebp - 0x4], 0
        mov dword ptr [ebp - 0x20], edi
        call dword ptr [mem_009242E0]
        lea eax, [ebx + 0x48]
        push eax
        lea ecx, [ebp - 0x4c]
        mov dword ptr [ebp - 0x28], eax
        call dword ptr [mem_00924ED8]
        push edi
        mov byte ptr [ebx + 0x44], 0
        call dword ptr [mem_009241BC]
        mov eax, dword ptr [ebp - 0x38]
        mov edi, dword ptr [mem_00925694]
        lea ecx, [ebp - 0x14]
        push ecx
        lea edx, [ebp - 0x18]
        push edx
        push 0xb0
        push esi
        mov dword ptr [ebp - 0x24], eax
        call edi
        push 0
        push 0
        push 0xe
        push esi
        call edi
        cmp dword ptr [ebp - 0x18], eax
        mov dword ptr [ebp - 0x1c], eax
        jne loc_415A45
        cmp eax, dword ptr [ebp - 0x14]
        jne loc_415A45
        mov eax, dword ptr [ebx + 0x1c]
        lea ecx, [ebp - 0x68]
        push ecx
        push 1
        push eax
        mov dword ptr [ebp - 0x68], 0x1c
        mov dword ptr [ebp - 0x64], 0x17
        call dword ptr [mem_0092560C]
        mov edx, dword ptr [ebp - 0x5c]
        sub edx, dword ptr [ebp - 0x58]
        add edx, 1
        cmp dword ptr [ebp - 0x54], edx
        jl loc_41597D
        mov eax, dword ptr [ebp - 0x1c]
        push eax
        push eax
        push 0xb1
        push esi
        call edi
        cmp byte ptr [mem_00AC9CD4], 0
        lea ecx, [ebp - 0x4c]
        je short loc_41591C
        call dword ptr [mem_00924EDC]
        push eax
        push 0
        push 0xc2
        push esi
        call dword ptr [mem_00925610]
        jmp loc_415B7B

loc_41591C:
        call dword ptr [mem_00924EDC]
        test eax, eax
        jne short loc_415935
        push eax
        push eax
        push 0xc2
        push esi
        call edi
        jmp loc_415B7B

loc_415935:
        lea ecx, [ebp - 0x4c]
        call dword ptr [mem_00924EDC]
        lea edx, [eax + 2]

loc_415941:
        mov cx, word ptr [eax]
        add eax, 2
        test cx, cx
        jne short loc_415941
        sub eax, edx
        _emit 0xd1
        _emit 0xf8
        add eax, 1
        call ext_006A6EC0
        mov eax, esp
        push eax
        lea ecx, [ebp - 0x4c]
        call dword ptr [mem_00924EDC]
        push eax
        call ext_004155A0
        add esp, 8
        push eax
        push 0
        push 0xc2
        push esi
        call edi
        jmp loc_415B7B

loc_41597D:
        cmp byte ptr [ebp + 0x8], 0
        je loc_415B9F
        push 0
        push 0
        push 0xce
        push esi
        mov byte ptr [ebx + 0x28], 1
        call edi
        mov dword ptr [ebp + 0x8], eax
        mov eax, dword ptr [ebp - 0x1c]
        push eax
        push eax
        push 0xb1
        push esi
        call edi
        cmp byte ptr [mem_00AC9CD4], 0
        lea ecx, [ebp - 0x4c]
        je short loc_4159CA
        call dword ptr [mem_00924EDC]
        push eax
        push 0
        push 0xc2
        push esi
        call dword ptr [mem_00925610]
        jmp short loc_415A17

loc_4159CA:
        call dword ptr [mem_00924EDC]
        test eax, eax
        je short loc_415A0C
        lea ecx, [ebp - 0x4c]
        call dword ptr [mem_00924EDC]
        lea edx, [eax + 2]

loc_4159E0:
        mov cx, word ptr [eax]
        add eax, 2
        test cx, cx
        jne short loc_4159E0
        sub eax, edx
        _emit 0xd1
        _emit 0xf8
        add eax, 1
        call ext_006A6EC0
        mov eax, esp
        push eax
        lea ecx, [ebp - 0x4c]
        call dword ptr [mem_00924EDC]
        push eax
        call ext_004155A0
        add esp, 8

loc_415A0C:
        push eax
        push 0
        push 0xc2
        push esi
        call edi

loc_415A17:
        mov eax, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ebp - 0x18]
        push eax
        push ecx
        push 0xb1
        push esi
        call edi
        push 0
        push 0
        push 0xce
        push esi
        call edi
        mov ecx, dword ptr [ebp + 0x8]
        sub ecx, eax
        push ecx
        push 0
        push 0xb6
        jmp loc_415B74

loc_415A45:
        cmp byte ptr [ebp + 0x8], 0
        je loc_415B9F
        push 0
        push 0
        push 0xce
        push esi
        mov byte ptr [ebx + 0x28], 1
        call edi
        mov edx, dword ptr [ebp - 0x18]
        cmp edx, dword ptr [ebp - 0x14]
        je loc_415AF5
        lea eax, [ebp - 0x30]
        push eax
        call dword ptr [mem_00925614]
        movzx ecx, word ptr [ebp - 0x2c]
        movzx edx, word ptr [ebp - 0x30]
        shl ecx, 0x10
        or ecx, edx
        push ecx
        push 0
        push 0xd7
        push esi
        call edi
        mov ecx, dword ptr [ebp - 0x18]
        movzx eax, ax
        mov dword ptr [ebp + 0x8], eax
        mov eax, 0x80008001
        imul ecx
        add edx, ecx
        sar edx, 0xf
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        imul edx, edx, 0xffff
        mov eax, ecx
        sub eax, edx
        sub eax, dword ptr [ebp + 0x8]
        cdq
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, 0x80008001
        imul dword ptr [ebp - 0x14]
        add edx, dword ptr [ebp - 0x14]
        sar edx, 0xf
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov eax, dword ptr [ebp - 0x14]
        imul edx, edx, 0xffff
        sub eax, edx
        sub eax, dword ptr [ebp + 0x8]
        cdq
        xor eax, edx
        sub eax, edx
        cmp ecx, eax
        jge short loc_415AF5
        mov eax, dword ptr [ebp - 0x18]
        mov ecx, dword ptr [ebp - 0x14]
        mov dword ptr [ebp - 0x18], ecx
        mov dword ptr [ebp - 0x14], eax

loc_415AF5:
        mov eax, dword ptr [ebp - 0x1c]
        push eax
        push eax
        push 0xb1
        push esi
        call edi
        cmp byte ptr [mem_00AC9CD4], 0
        lea ecx, [ebp - 0x4c]
        je short loc_415B25
        call dword ptr [mem_00924EDC]
        push eax
        push 0
        push 0xc2
        push esi
        call dword ptr [mem_00925610]
        jmp short loc_415B77

loc_415B25:
        call dword ptr [mem_00924EDC]
        test eax, eax
        je short loc_415B6C
        lea ecx, [ebp - 0x4c]
        call dword ptr [mem_00924EDC]
        lea edx, [eax + 2]
        jmp short loc_415B40

        _emit 0x8d
        _emit 0x49
        _emit 0x00

loc_415B40:
        mov cx, word ptr [eax]
        add eax, 2
        test cx, cx
        jne short loc_415B40
        sub eax, edx
        _emit 0xd1
        _emit 0xf8
        add eax, 1
        call ext_006A6EC0
        mov eax, esp
        push eax
        lea ecx, [ebp - 0x4c]
        call dword ptr [mem_00924EDC]
        push eax
        call ext_004155A0
        add esp, 8

loc_415B6C:
        push eax
        push 0
        push 0xc2

loc_415B74:
        push esi
        call edi

loc_415B77:
        mov byte ptr [ebx + 0x28], 0

loc_415B7B:
        mov esi, dword ptr [ebp - 0x20]
        push esi
        mov byte ptr [ebp - 0xd], 1
        call dword ptr [mem_009242E0]
        mov edx, dword ptr [ebp - 0x24]
        mov ecx, dword ptr [ebp - 0x28]
        push edx
        push 0
        call dword ptr [mem_00924EE0]
        push esi
        call dword ptr [mem_009241BC]

loc_415B9F:
        lea ecx, [ebp - 0x4c]
        mov dword ptr [ebp - 0x4], -1
        call dword ptr [mem_00924EF0]
        mov al, byte ptr [ebp - 0xd]
        lea esp, [ebp - 0x74]
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00415C70] sub_00415C70 (48 bytes)
extern "C" void ext_00415820();
extern "C" int mem_00925660;

extern "C" void __fastcall fn_00415C70(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    if (a1 != *(int*)(p + 0x20)) {
        return;
    }
    if (((char (__stdcall*)(int))ext_00415820)(1) == 0) {
        return;
    }
    (*(int (__stdcall**)(int, int))&mem_00925660)(*(int*)(p + 0x1c), *(int*)(p + 0x20));
    *(int*)(p + 0x20) = 0;
}

// [0x0041CE40] sub_0041CE40 (100 bytes)
extern "C" void ext_006720E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0041CE40(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xf9
        _emit 0x56
        _emit 0x8b
        _emit 0x00
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_006720E0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        pop esi
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x28
        ret 4
    }
}

// [0x0041D410] sub_0041D410 (505 bytes)
extern "C" int mem_00B599BC;
extern "C" int mem_00991074;
extern "C" int mem_00991070;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_00991078;
extern "C" int mem_00991080;
extern "C" void ext_00401CC0();
extern "C" void ext_0041CE20();
extern "C" void ext_0041CE40();
extern "C" void ext_0041CF00();
extern "C" void ext_0041CF50();
extern "C" void ext_006720A0();
extern "C" void ext_006720C0();
extern "C" void ext_006AD180();
extern "C" void ext_006AD970();
extern "C" void ext_006B4440();

extern "C" __declspec(naked) void __fastcall fn_0041D410(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8775fa
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x14
        mov dword ptr [esp], 0
        mov eax, dword ptr [mem_00B599BC]
        push esi
        mov dword ptr [esp + 0x8], 0
        mov dword ptr [esp + 0xc], eax
        mov esi, dword ptr [esp + 0x2c]
        mov ecx, esi
        mov dword ptr [esp + 0x20], 1
        call ext_006B4440
        test eax, eax
        jne L_41D469
        mov esi, dword ptr [esp + 0x28]
        push eax
        mov ecx, esi
        call ext_006720A0
        jmp L_41D5D4
    L_41D469:
        push edi
        mov ecx, esi
        call ext_006AD180
        mov ecx, esi
        mov edi, eax
        call ext_006B4440
        mov ecx, eax
        call ext_006AD970
        cmp eax, dword ptr [mem_00991074]
        jne L_41D4D3
        mov al, byte ptr [edi + 0x58]
        mov byte ptr [esp + 0x30], al
        mov ecx, dword ptr [esp + 0x30]
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006720A0
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x28], 2
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov byte ptr [esp + 0x24], 1
        je L_41D5C3
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x14]
        push edx
        call eax
        jmp L_41D5C3
    L_41D4D3:
        cmp eax, dword ptr [mem_00991070]
        jne L_41D543
        mov ecx, esi
        call ext_006B4440
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, eax
        mov byte ptr [esp + 0x24], 3
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x18]
        call ext_0041CE40
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x28], 4
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov byte ptr [esp + 0x24], 3
        je L_41D52F
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x14]
        push edx
        call eax
    L_41D52F:
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x24], 1
        call dword ptr [mem_009242F4]
        jmp L_41D5C3
    L_41D543:
        cmp eax, dword ptr [mem_00991078]
        jne L_41D586
        mov edi, dword ptr [edi + 0x58]
        push edi
        lea ecx, [esp + 0x18]
        call ext_006720C0
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x28], 5
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov byte ptr [esp + 0x24], 1
        je L_41D5C3
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x14]
        push eax
        call edx
        jmp L_41D5C3
    L_41D586:
        cmp eax, dword ptr [mem_00991080]
        jne L_41D5C3
        fld qword ptr [edi + 0x58]
        push ecx
        fstp dword ptr [esp + 0x34]
        lea ecx, [esp + 0x18]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call ext_0041CE20
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x28], 6
        call ext_0041CF50
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x24], 1
        call ext_00401CC0
    L_41D5C3:
        mov esi, dword ptr [esp + 0x2c]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0041CF00
        pop edi
    L_41D5D4:
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov byte ptr [esp + 0x20], 0
        mov dword ptr [esp + 0x4], 1
        je L_41D5F5
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    L_41D5F5:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x20
        ret 0x8
    }
}

// [0x0041C9F0] sub_0041C9F0 (114 bytes)
extern "C" void ext_006A9510();
extern "C" void ext_006A9590();
extern "C" void ext_006A95E0();
extern "C" void ext_006AC1D0();
extern "C" void ext_006AC230();
extern "C" __declspec(naked) void __fastcall fn_0041C9F0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x877538
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_006A95E0
        mov eax, dword ptr [esp + 0x18]
        push 0x1
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x92dbe4
        mov dword ptr [esi + 0x1a0], eax
        call ext_006A9510
        push 0x1
        mov ecx, esi
        call ext_006A9590
        push 0x1
        mov ecx, esi
        call ext_006AC1D0
        push 0x32
        mov ecx, esi
        call ext_006AC230
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0041DBC0] sub_0041DBC0 (297 bytes)
extern "C" void ext_0041C9F0();
extern "C" void ext_0041D7B0();
extern "C" void ext_00448280();
extern "C" void ext_006A5C62();
extern "C" void ext_006A617E();
extern "C" void ext_006A63B8();
extern "C" void ext_006A7BF0();
extern "C" int mem_0093A0BC;
extern "C" int mem_0093A0B0;
extern "C" int mem_00877664;
extern "C" int mem_0092DF48;
extern "C" int mem_0092DF38;

extern "C" __declspec(naked) void __fastcall fn_0041DBC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    -1
        push    offset mem_00877664
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        push    0x1a4
        mov     esi, ecx
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0
        je      L_41DC03
        push    esi
        mov     ecx, eax
        call    ext_0041C9F0
        mov     edi, eax
        jmp     L_41DC05
    L_41DC03:
        xor     edi, edi
    L_41DC05:
        mov     ecx, dword ptr [esi + 0xc]
        cmp     edi, ecx
        mov     dword ptr [esp + 0x14], -1
        je      L_41DC21
        test    ecx, ecx
        je      L_41DC21
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 4]
        push    1
        call    edx
    L_41DC21:
        mov     edx, dword ptr [esp + 0x1c]
        push    0
        push    0x494
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    edx
        push    0x50000000
        push    offset mem_0092DF48
        mov     ecx, edi
        mov     dword ptr [esi + 0xc], edi
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x60]
        push    offset mem_0092DF38
        push    0x200
        call    eax
        push    0x10
        mov     dword ptr [esi + 0x10], 0
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x1c], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 1
        je      L_41DC82
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, eax
        call    ext_00448280
        mov     edi, eax
        jmp     L_41DC84
    L_41DC82:
        xor     edi, edi
    L_41DC84:
        mov     ecx, dword ptr [esi + 8]
        cmp     edi, ecx
        mov     dword ptr [esp + 0x14], -1
        je      L_41DCA0
        test    ecx, ecx
        je      L_41DCA0
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 4]
        push    1
        call    eax
    L_41DCA0:
        mov     dword ptr [esi + 8], edi
        mov     ecx, dword ptr [esi + 0xc]
        call    ext_006A7BF0
        mov     edi, eax
        test    edi, edi
        je      L_41DCCF
        mov     ecx, edi
        call    ext_006A63B8
        mov     ecx, dword ptr [mem_0093A0BC]
        mov     edx, dword ptr [mem_0093A0B0]
        push    0
        push    ecx
        push    edx
        mov     ecx, edi
        call    ext_006A617E
    L_41DCCF:
        mov     ecx, esi
        call    ext_0041D7B0
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     8
    }
}

extern "C" int __cdecl ext_00414950(int a1, int a2, int a3, int a4, int a5, int a6);

// [0x00414D90] sub_00414D90 (35 bytes)
extern "C" int __cdecl fn_00414D90(int a1, int a2, int a3, int a4, int a5) {
    return ext_00414950(a1, a2, a3, a3, a4, a5);
}

// [0x00419EF0] sub_00419EF0 (36 bytes)
extern "C" int __cdecl ext_00414D90(int, int, int, int, int);
extern "C" int __fastcall fn_00419EF0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    return ext_00414D90(a1, a2, a3, a4, a5);
}
