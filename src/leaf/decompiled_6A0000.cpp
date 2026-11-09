// Decompiled translation unit: src/leaf/decompiled_6A0000.cpp

// [0x006AD920] sub_006AD920 (18 bytes)
extern "C" void ext_0053A700();

typedef void (__fastcall *SetterFn006AD920)(void* self, int edx_unused, void* a1);

extern "C" void __fastcall fn_006AD920(char* self, int edx_unused, int a1) {
    *(int*)(self + 0x30) = a1;
    return ((SetterFn006AD920)ext_0053A700)((void*)a1, edx_unused, (void*)self);
}

// [0x006A7C20] sub_006A7C20 (12 bytes)
extern "C" void ext_006AD120();

typedef void (__fastcall *CalleeFn006A7C20)(void* self, int edx_unused);

extern "C" void __fastcall fn_006A7C20(void* self, int edx_unused, void* a1) {
    return ((CalleeFn006A7C20)ext_006AD120)(a1, edx_unused);
}

// [0x006A7C30] sub_006A7C30 (12 bytes)
extern "C" void ext_006AD110();

typedef void (__thiscall *CalleeFn006A7C30)(void* self);

extern "C" void __stdcall fn_006A7C30(void* a1) {
    return ((CalleeFn006A7C30)ext_006AD110)(a1);
}

// [0x006A0790] sub_006A0790 (13 bytes)
extern "C" void ext_006A06E0();

typedef void (__stdcall *CalleeFn006A0790)(void* p);

extern "C" void __stdcall fn_006A0790(void* a1) {
    return ((CalleeFn006A0790)ext_006A06E0)((void*)&a1);
}

// [0x006A3F90] sub_006A3F90 (13 bytes)
extern "C" void __stdcall ext_00804CA0(void* arg);

extern "C" void __fastcall fn_006A3F90(void* self) {
    void* p = *(void**)self;
    if (p) {
        ext_00804CA0(p);
    }
}

// [0x006AD0A0] sub_006AD0A0 (17 bytes)
extern "C" void ext_006AD950();

extern "C" __declspec(naked) void __fastcall fn_006AD0A0(void* self, int edx_unused, int value) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x44], ecx
        call ext_006AD950
        ret 0x4
    }
}

// [0x006A3FF0] sub_006A3FF0 (20 bytes)
extern "C" void ext_006A3FA0();

typedef void (__stdcall *CalleeFn006A3FF0)(int a1);

extern "C" void* __fastcall fn_006A3FF0(void* self) {
    *(int*)self = 0;
    ((CalleeFn006A3FF0)ext_006A3FA0)(0);
    return self;
}

// [0x006AD150] sub_006AD150 (21 bytes)
extern "C" void ext_006ACFD0();

extern "C" __declspec(naked) int __fastcall fn_006AD150(void* self) {
    __asm {
        __asm _emit 0x33 __asm _emit 0xD2 // xor edx, edx
    L_006AD152:
        call ext_006ACFD0
        __asm _emit 0x8B __asm _emit 0xC8 // mov ecx, eax
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x74 __asm _emit 0x05 // je L_006AD162
        __asm _emit 0x83 __asm _emit 0xC2 __asm _emit 0x01 // add edx, 1
        __asm _emit 0xEB __asm _emit 0xF0 // jmp L_006AD152
    L_006AD162:
        __asm _emit 0x8B __asm _emit 0xC2 // mov eax, edx
        __asm _emit 0xC3                  // ret
    }
}

// [0x006ACE20] sub_006ACE20 (21 bytes)
extern "C" void ext_006AAA10();

extern "C" __declspec(naked) void* __fastcall fn_006ACE20(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [ecx + 0x14]
        push esi
        call ext_006AAA10
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006ACFE0] sub_006ACFE0 (22 bytes)
extern "C" void ext_006A7D50();

extern "C" __declspec(naked) void __fastcall fn_006ACFE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x14], ecx
        call ext_006A7D50
        mov dword ptr [esi + 0x48], eax
        pop esi
        ret 0x4
    }
}

// [0x006A34B0] sub_006A34B0 (25 bytes)
extern "C" void ext_00403560();

typedef void (__stdcall *CalleeFn006A34B0)(int);

extern "C" void* __fastcall fn_006A34B0(void* self, int edx_unused, int a1) {
    ((CalleeFn006A34B0)ext_00403560)(a1);
    *(int*)self = 0x009904B4;
    return self;
}

// [0x006A34E0] sub_006A34E0 (25 bytes)
extern "C" void ext_00401C60();

typedef void (__stdcall *CalleeFn006A34E0)(int);

extern "C" void* __fastcall fn_006A34E0(void* self, int edx_unused, int a1) {
    ((CalleeFn006A34E0)ext_00401C60)(a1);
    *(int*)self = 0x009904B4;
    return self;
}

// [0x006A9340] sub_006A9340 (26 bytes)
extern "C" void ext_006A6796();

extern "C" __declspec(naked) void __fastcall fn_006A9340(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xa4]
        add ecx, 0x9c
        push eax
        push edx
        call ext_006A6796
        ret 0x4
    }
}

// [0x006AD130] sub_006AD130 (29 bytes)
extern "C" __declspec(naked) int __fastcall fn_006AD130(void* self, int edx_unused, int a1) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 // mov edx, dword ptr [esp + 0x4]
        call ext_006ACFD0
        __asm _emit 0x8B __asm _emit 0xC8 // mov ecx, eax
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x74 __asm _emit 0x04 // je L_006AD143
        __asm _emit 0x3B __asm _emit 0xD1 // cmp edx, ecx
        __asm _emit 0x75 __asm _emit 0xF1 // jne L_006AD134
        __asm _emit 0x33 __asm _emit 0xC0 // xor eax, eax
        __asm _emit 0x3B __asm _emit 0xD1 // cmp edx, ecx
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC0 // sete al
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
    }
}

// [0x006AD010] sub_006AD010 (33 bytes)
extern "C" int mem_00924494;

extern "C" __declspec(naked) void* __fastcall fn_006AD010(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+12]
        add ecx, 8
        push ecx
        mov ecx, esi
        mov dword ptr [esp+8], 0
        call dword ptr [mem_00924494]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006A7A90] sub_006A7A90 (36 bytes)
extern "C" int mem_009255F4;

extern "C" __declspec(naked) int __cdecl fn_006A7A90() {
    __asm {
        push esi
        mov esi, dword ptr [mem_009255F4]
        push 1Bh
        call esi
        test ax, ax
        js ret0_006A7A90
        push 9
        call esi
        test ax, ax
        js ret0_006A7A90
        mov eax, 4
        pop esi
        ret
ret0_006A7A90:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006A9590] sub_006A9590 (36 bytes)
extern "C" int mem_00925668;

typedef int (__stdcall *RedrawWindowFn006A9590)(void* hwnd, const void* rect, void* rgn, unsigned int flags);

extern "C" void __fastcall fn_006A9590(char* self, int edx_unused, unsigned char a1) {
    *(unsigned char*)(self + 0x180) = a1;
    void* hwnd = *(void**)(self + 0x20);
    if (hwnd) {
        ((RedrawWindowFn006A9590)mem_00925668)(hwnd, 0, 0, 0x105);
    }
}

// [0x006A88A0] sub_006A88A0 (36 bytes)
extern "C" void ext_006A7C10();
extern "C" void ext_006A7C20();

extern "C" __declspec(naked) int __fastcall fn_006A88A0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        call ext_006A7C10
        test eax, eax
        je L_done
        nop
    L_loop:
        push eax
        mov ecx, esi
        add edi, 1
        call ext_006A7C20
        test eax, eax
        jne L_loop
    L_done:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006A8980] sub_006A8980 (38 bytes)
extern "C" void ext_006A5E72();

typedef void (__thiscall *CalleeFn006A8980)(void* self, int a1);

extern "C" void __fastcall fn_006A8980(char* self) {
    void* p = *(void**)(self + 0x100);
    if (p && *(int*)((char*)p + 0x20) != 0) {
        ((CalleeFn006A8980)ext_006A5E72)(p, 0);
        *(void**)(self + 0x100) = 0;
    }
}

// [0x006A9510] sub_006A9510 (39 bytes)
extern "C" int mem_00925688;

typedef int (__stdcall *InvalidateRectFn006A9510)(void* hwnd, void* rect, int erase);

extern "C" void __fastcall fn_006A9510(char* self, int edx_unused, char a1) {
    if (*(self + 0x179) == a1) return;
    *(self + 0x179) = a1;
    void* hwnd = *(void**)(self + 0x20);
    if (hwnd == 0) return;
    ((InvalidateRectFn006A9510)mem_00925688)(hwnd, 0, 1);
}

// [0x006A7C70] sub_006A7C70 (41 bytes)
extern "C" int ext_006ACFB0();

typedef int (__fastcall *CalleeFn006A7C70)(void* p);
typedef int (__thiscall *VCalleeFn006A7C70)(void* self, int a1, int a2);

extern "C" int __fastcall fn_006A7C70(char* self, int edx_unused, int a1, int a2) {
    if (*(void**)(self + 0x54) != 0) {
        void* vtbl = *(void**)self;
        int r = ((CalleeFn006A7C70)ext_006ACFB0)(*(void**)(self + 0x54));
        ((VCalleeFn006A7C70)*(void**)((char*)vtbl + 0x150))(self, a1, r);
    }
    return 0;
}

// [0x006AF8E0] sub_006AF8E0 (41 bytes)
extern "C" void ext_006A60EE();

extern "C" __declspec(naked) int __fastcall fn_006AF8E0(void* self, int edx_unused, int idx) {
    __asm {
        call ext_006A7C10
        mov edx, dword ptr [esp + 4]
        cmp edx, eax
        jge L_zero
        test edx, edx
        jl L_err
        cmp edx, dword ptr [ecx + 0x58]
        jge L_err
        mov eax, dword ptr [ecx + 0x54]
        mov eax, dword ptr [eax + 4*edx]
        ret 4
    L_err:
        call ext_006A60EE
    L_zero:
        xor eax, eax
        ret 4
    }
}

// [0x006A04B0] sub_006A04B0 (43 bytes)
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" __declspec(naked) void __fastcall fn_006A04B0(void* self) {
    __asm {
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [mem_00924FA0]
        push ecx
        add edx, 0xc
        push edx
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x6a049f
        ret
    }
}

// [0x006A0530] sub_006A0530 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A0530(void* self) {
    __asm {
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [mem_00924FA0]
        push ecx
        add edx, 0xc
        push edx
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 0x6a051f
        ret
    }
}

// [0x006A4B20] sub_006A4B20 (46 bytes)
extern "C" void __cdecl fn_006A4B20(unsigned int* p) {
    p[1] = 0;
    p[0] = 0;
    p[2] = 0x67452301;
    p[3] = 0xefcdab89;
    p[4] = 0x98badcfe;
    p[5] = 0x10325476;
}
