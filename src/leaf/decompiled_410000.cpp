// Decompiled translation unit: src/leaf/decompiled_410000.cpp

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
