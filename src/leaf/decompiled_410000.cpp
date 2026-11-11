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
