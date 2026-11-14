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

// [0x006A8800] sub_006A8800 (54 bytes)
extern "C" void ext_006B0C30();
extern "C" void ext_00872754();

extern "C" __declspec(naked) void __fastcall fn_006A8800(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x16c]
        push edi
        mov edi, dword ptr [esp + 0x10]
        lea ecx, [eax + 0x1]
        mov dword ptr [esi + 0x16c], ecx
        push eax
        mov ecx, edi
        call ext_006B0C30
        mov edx, dword ptr [esp + 0xc]
        push edx
        lea ecx, [esi + 0xb0]
        call ext_00872754
        mov dword ptr [eax], edi
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x006A9360] sub_006A9360 (60 bytes)
extern "C" void ext_006A8980();
extern "C" int mem_009256BC;
extern "C" int mem_00925688;

extern "C" __declspec(naked) int __fastcall fn_006A9360(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        cmp eax, esi
        je L_006A9360_done
        test eax, eax
        je L_006A9360_nullarg
        mov eax, dword ptr [eax + 0x20]
    L_006A9360_nullarg:
        push eax
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256BC]
        test eax, eax
        jne L_006A9360_done
        mov ecx, esi
        call ext_006A8980
        mov ecx, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push ecx
        call dword ptr [mem_00925688]
    L_006A9360_done:
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x006AF840] sub_006AF840 (66 bytes)
extern "C" void ext_006AD090();
extern "C" void ext_006A60EE();

extern "C" __declspec(naked) bool __fastcall fn_006AF840(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        cmp dword ptr [edi + 0x58], esi
        jle short L_006AF873
        jmp short L_006AF850
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_006AF850:
        test esi, esi
        jl short L_006AF87D
        cmp esi, dword ptr [edi + 0x58]
        jge short L_006AF87D
        mov eax, dword ptr [edi + 0x54]
        mov ecx, dword ptr [eax + 4*esi]
        lea eax, [eax + 4*esi]
        call ext_006AD090
        test al, al
        jne short L_006AF878
        add esi, 1
        cmp esi, dword ptr [edi + 0x58]
        jl short L_006AF850
L_006AF873:
        pop edi
        xor al, al
        pop esi
        ret
L_006AF878:
        pop edi
        mov al, 1
        pop esi
        ret
L_006AF87D:
        jmp ext_006A60EE
    }
}

// [0x006A8610] sub_006A8610 (67 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_009256E0;

typedef void (__stdcall *ReleaseCaptureFn006A8610)();
typedef void (__fastcall *CallFn006A8610)(void* self);

extern "C" void __fastcall fn_006A8610(char* self, int edx_unused, int a1, int a2, int a3) {
    if (self[0x15c] != 0) {
        self[0x15c] = 0;
        ((ReleaseCaptureFn006A8610)mem_009256E0)();
        ((CallFn006A8610)ext_006A5EA8)(self);
        return;
    }
    if (self[0xf4] != 0) {
        self[0xf4] = 0;
        ((ReleaseCaptureFn006A8610)mem_009256E0)();
    }
    ((CallFn006A8610)ext_006A5EA8)(self);
}

// [0x006ACE40] sub_006ACE40 (67 bytes)
extern "C" void ext_00626440();
extern "C" void ext_006A7C40();

extern "C" __declspec(naked) void __fastcall fn_006ACE40(void* self, int edx_unused, int* a1, const int* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esi + 0x8], ecx
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0xc], edx
        call ext_00626440
        mov ecx, dword ptr [edi + 0x14]
        add eax, 0x1
        add dword ptr [esi], eax
        call ext_006A7C40
        add eax, dword ptr [esi]
        pop edi
        mov dword ptr [esi + 0x8], eax
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x006ACF10] sub_006ACF10 (68 bytes)
extern "C" void ext_00626440();
extern "C" void ext_006A7C40();

extern "C" __declspec(naked) int* __fastcall fn_006ACF10(void* self, int edx_unused, int* out, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x4], ecx
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], eax
        call ext_00626440
        mov ecx, dword ptr [edi + 0x14]
        mov ebx, eax
        call ext_006A7C40
        lea ecx, [ebx + eax + 0x2]
        add dword ptr [esi], ecx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x006A7FF0] sub_006A7FF0 (42 bytes)
// Lazily resolves GetProcAddress(ext_0041FD20(self), 0x990980) into [self+0x3c], then stores it to *out.
extern "C" void ext_0041FD20();
extern "C" int mem_009241D8;

extern "C" __declspec(naked) void __fastcall fn_006A7FF0(void* self, int edx_unused, void** out) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x3c], 0x0
        jne short L_006A800D
        push 0x990980
        call ext_0041FD20
        push eax
        call dword ptr [mem_009241D8]
        mov dword ptr [esi + 0x3c], eax
    L_006A800D:
        mov ecx, dword ptr [esi + 0x3c]
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        pop esi
        ret 0x4
    }
}

// [0x006ACE90] sub_006ACE90 (74 bytes)
extern "C" int mem_0092563C;
extern "C" __declspec(naked) void* __stdcall fn_006ACE90(void* dst, const void* src) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov dword ptr [esi], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], edx
        mov edx, dword ptr [eax + 0xc]
        push edi
        mov edi, dword ptr [mem_0092563C]
        mov dword ptr [esi + 0x8], ecx
        mov dword ptr [esi + 0xc], edx
        add dword ptr [esi + 0x4], 0x1
        add dword ptr [esi + 0x8], -0x4
        push 0x47
        call edi
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        push 0x48
        mov dword ptr [esi], ecx
        call edi
        add eax, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [esi + 0xc], eax
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x006AD290] sub_006AD290 (75 bytes)
extern "C" int mem_009242FC;

extern "C" __declspec(naked) void* __fastcall fn_006AD290(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esi], 0x99103c
        call dword ptr [mem_009242FC]
        lea ecx, [esi + 0xc]
        call dword ptr [mem_009242FC]
        xor eax, eax
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esi + 0x34], eax
        mov byte ptr [esi + 0x38], al
        mov dword ptr [esi + 0x3c], eax
        mov byte ptr [esi + 0x40], al
        mov byte ptr [esi + 0x41], al
        mov dword ptr [esi + 0x44], eax
        mov dword ptr [esi + 0x4c], eax
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_006A5EA8();
extern "C" void ext_006AD0D0();
extern "C" void ext_006A8980();
extern "C" int mem_009256BC;
extern "C" int mem_00925688;

// [0x006A92F0] sub_006A92F0 (75 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A92F0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A5EA8
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        je L_done
        call ext_006AD0D0
        test al, al
        jne L_done
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        je L_push
        mov eax, dword ptr [eax + 0x20]
    L_push:
        push eax
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256BC]
        test eax, eax
        jne L_done
        mov ecx, esi
        call ext_006A8980
        mov ecx, dword ptr [esi + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
    L_done:
        pop esi
        ret 4
    }
}

// [0x006A9290] sub_006A9290 (88 bytes)
extern "C" __declspec(naked) int __fastcall fn_006A9290(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_006A5EA8
        cmp eax, -1
        jne short L_006A92A9
        or eax, eax
        pop esi
        add esp, 0x10
        ret 4
    L_006A92A9:
        xor eax, eax
        push 0x3e8
        push esi
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0x108]
        mov eax, dword ptr [eax + 0x13c]
        lea ecx, [esi + 0x108]
        lea edx, [esp + 0xc]
        push edx
        push 0x40000005
        call eax
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x006A0680] sub_006A0680 (90 bytes)
extern "C" void ext_006A0670();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5CA84;

extern "C" __declspec(naked) void __fastcall fn_006A0680(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b6c1e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5CA84], al
        jne done
        or dword ptr [mem_00B5CA84], eax
        mov ecx, 0xb5ca74
        mov dword ptr [esp + 0x8], 0x0
        call ext_006A0670
        push 0x922030
        call ext_006A6C87
        add esp, 0x4
    done:
        mov ecx, dword ptr [esp]
        mov eax, 0xb5ca74
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006A8840] sub_006A8840 (96 bytes)
extern "C" void ext_0087274E();
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006A8840(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x87cee9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        xor eax, eax
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x4], eax
        call dword ptr [mem_00924300]
        lea ecx, [esp + 0x4]
        push ecx
        push eax
        lea ecx, [esi + 0xb0]
        call ext_0087274E
        mov esi, dword ptr [esp + 0x4]
        lea ecx, [esp + 0x18]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006AD3C0] sub_006AD3C0 (114 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006AD960();
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006AD3C0(void* self) {
    __asm {
        push -0x1
        push 0x8b73f8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x99103c
        mov ecx, dword ptr [esi + 0x44]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x1
        je skip_960
        call ext_006AD960
    skip_960:
        mov eax, dword ptr [esi + 0x4]
        add dword ptr [eax + 0x8], -0x1
        mov eax, dword ptr [esi + 0x4]
        cmp dword ptr [eax + 0x8], 0x0
        jne skip_5c5c
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip_5c5c:
        lea ecx, [esi + 0xc]
        call dword ptr [mem_009242F4]
        lea ecx, [esi + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006A9210] sub_006A9210 (119 bytes)
extern "C" int mem_0092566C;
extern "C" int mem_009256CC;
extern "C" int mem_0092563C;
extern "C" int mem_00925678;

extern "C" __declspec(naked) void __fastcall fn_006A9210(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push edi
        push eax
        call dword ptr [mem_0092566C]
        cmp byte ptr [esi + 0xfc], 0x0
        je L_skip1
        add dword ptr [edi + 0x4], 0x1c
    L_skip1:
        cmp byte ptr [esi + 0xf6], 0x0
        je L_skip2
        mov ecx, dword ptr [esi + 0xf8]
        sub dword ptr [edi + 0xc], ecx
    L_skip2:
        lea eax, [esi + 0x108]
        test eax, eax
        je L_skip3
        cmp dword ptr [eax + 0x20], 0x0
        je L_skip3
        mov edx, dword ptr [esi + 0x128]
        push edx
        call dword ptr [mem_009256CC]
        test eax, eax
        je L_skip3
        push 0x2
        call dword ptr [mem_0092563C]
        sub dword ptr [edi + 0x8], eax
    L_skip3:
        cmp byte ptr [esi + 0x179], 0x0
        je L_done
        push -0x1
        push -0x1
        push edi
        call dword ptr [mem_00925678]
    L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006A9190] sub_006A9190 (119 bytes)
extern "C" void ext_006A5E5A();
extern "C" int mem_0092566C;
extern "C" int mem_0092563C;

struct Dec6A9190Rect { long left; long top; long right; long bottom; };

extern "C" __declspec(naked) void __fastcall fn_006A9190(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x128], 0x0
        je L_done
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        cmp byte ptr [esi + 0xfc], 0x0
        je L_skip_top
        add dword ptr [esp + 0x8], 0x1c
L_skip_top:
        cmp byte ptr [esi + 0xf6], 0x0
        je L_skip_bottom
        mov edx, dword ptr [esi + 0xf8]
        sub dword ptr [esp + 0x10], edx
L_skip_bottom:
        push edi
        push 0x2
        call dword ptr [mem_0092563C]
        mov edx, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x14]
        mov ecx, edx
        sub ecx, eax
        mov eax, dword ptr [esp + 0xc]
        push 0x1
        sub edi, eax
        push edi
        sub edx, ecx
        push edx
        push eax
        mov dword ptr [esp + 0x18], ecx
        push ecx
        lea ecx, [esi + 0x108]
        call ext_006A5E5A
        pop edi
L_done:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x006A7D80] sub_006A7D80 (120 bytes)
extern "C" void ext_006A63BE();
extern "C" void ext_006A7C10();
extern "C" void ext_006AD090();
extern "C" void ext_006AEC60();
extern "C" void ext_006AEC90();
extern "C" void ext_006AF8E0();

extern "C" __declspec(naked) void* __fastcall fn_006A7D80(void* self, int edx_unused, void* a1, unsigned char a2) {
    __asm {
        push ebx
        mov bl, byte ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_top:
        mov ecx, ebp
        call ext_006AEC90
        test al, al
        jne short L_check
        test bl, bl
        je short L_ret_ebp
    L_check:
        mov ecx, ebp
        call ext_006A7C10
        test eax, eax
        je short L_ret_ebp
        mov ecx, ebp
        call ext_006A7C10
        mov esi, eax
    L_dec:
        sub esi, 1
        test esi, esi
        jl short L_ret_ebp
        push esi
        mov ecx, ebp
        call ext_006AF8E0
        mov edi, eax
        mov ecx, edi
        call ext_006AD090
        test al, al
        je short L_dec
        call ext_006AEC60
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        je short L_ret_edi
        xor bl, bl
        mov ebp, edi
        jmp short L_top
    L_ret_edi:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    L_ret_ebp:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006AD580] sub_006AD580 (127 bytes)
extern "C" void ext_006ACE90();
extern "C" void ext_006ACFC0();
extern "C" int mem_009256C8;

extern "C" __declspec(naked) void __fastcall fn_006AD580(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x38], 0x0
        je L_006AD5F8
        push edi
        call ext_006ACFD0
        mov edi, eax
        mov eax, dword ptr [esp + 0x20]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006ACE90
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [edx + 0x4], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [edx + 0x8], ecx
        mov eax, dword ptr [eax + 0xc]
        mov ecx, edi
        mov dword ptr [edx + 0xc], eax
        call ext_006ACFC0
        mov ecx, dword ptr [esi + 0x3c]
        mov cl, byte ptr [ecx]
        neg al
        sbb eax, eax
        and eax, 0xffffff00
        add eax, 0x100
        neg cl
        sbb ecx, ecx
        and ecx, 0x400
        or eax, ecx
        push eax
        push 0x4
        push edx
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [edx + 0x4]
        push eax
        call dword ptr [mem_009256C8]
        pop edi
    L_006AD5F8:
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

// [0x006AA890] sub_006AA890 (129 bytes)
extern "C" void ext_006A8980();
extern "C" void ext_006A6790();
extern "C" void ext_006A60EE();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006AA890(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        add dword ptr [esi + 0x19c], 0x1
        push edi
        call ext_006A8980
        xor ebx, ebx
        xor edi, edi
        cmp dword ptr [esi + 0x7c], ebx
        jle short L_006AA890_after_loop
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_006AA890_loop:
        cmp edi, ebx
        jl short L_006AA890_tail
        cmp edi, dword ptr [esi + 0x7c]
        jge short L_006AA890_tail
        mov eax, dword ptr [esi + 0x78]
        mov ecx, dword ptr [eax + 4*edi]
        cmp ecx, ebx
        je short L_006AA890_next
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push 0x1
        call eax
L_006AA890_next:
        add edi, 0x1
        cmp edi, dword ptr [esi + 0x7c]
        jl short L_006AA890_loop
L_006AA890_after_loop:
        push -0x1
        push ebx
        lea ecx, [esi + 0x74]
        call ext_006A6790
        mov dword ptr [esi + 0x68], ebx
        mov dword ptr [esi + 0x60], ebx
        mov dword ptr [esi + 0x64], ebx
        mov dword ptr [esi + 0x58], ebx
        mov dword ptr [esi + 0x5c], ebx
        mov dword ptr [esi + 0x100], ebx
        mov dword ptr [esi + 0x54], ebx
        mov esi, dword ptr [esi + 0x20]
        cmp esi, ebx
        je short L_006AA890_ret
        push 0x1
        push ebx
        push esi
        call dword ptr [mem_00925688]
L_006AA890_ret:
        pop edi
        pop esi
        pop ebx
        ret
L_006AA890_tail:
        jmp ext_006A60EE
    }
}

// [0x006AD440] sub_006AD440 (131 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D10();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;

extern "C" __declspec(naked) void __fastcall fn_006AD440(void* self, int edx_unused, int* a1, int* a2, int* a3) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7C00
        cmp eax, esi
        jne else_branch_6AD440
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [esi + 0x14]
        cmp eax, ecx
        je inside_6AD440
        test eax, eax
        je null_focus_6AD440
        mov eax, dword ptr [eax + 0x20]
null_focus_6AD440:
        push eax
        mov eax, dword ptr [ecx + 0x20]
        push eax
        call dword ptr [mem_009256BC]
        test eax, eax
        jne inside_6AD440
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7D50
        jmp store_a2_6AD440
inside_6AD440:
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7D70
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7D10
        jmp store_a1_6AD440
else_branch_6AD440:
        mov eax, dword ptr [esi + 0x48]
store_a2_6AD440:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7D30
store_a1_6AD440:
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [esi + 0x14]
        call ext_006A7D50
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx], eax
        pop esi
        ret 0xc
    }
}

// [0x006A02B0] sub_006A02B0 (138 bytes)
extern "C" void ext_00665810();

extern "C" __declspec(naked) void __fastcall fn_006A02B0(void* self) {
    __asm {
        push -1
        push 8b6b4eh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        cmp dword ptr [esi + 24h], 0
        lea eax, [esi + 20h]
        mov dword ptr [esp + 10h], 2
        je SHORT skip_a_6A02B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 78h]
        call eax
skip_a_6A02B0:
        cmp dword ptr [esi + 1ch], 0
        lea eax, [esi + 18h]
        mov byte ptr [esp + 10h], 1
        je SHORT skip_b_6A02B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 78h]
        call eax
skip_b_6A02B0:
        cmp dword ptr [esi + 14h], 0
        lea eax, [esi + 10h]
        mov byte ptr [esp + 10h], 0
        je SHORT skip_c_6A02B0
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 78h]
        call eax
skip_c_6A02B0:
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        call ext_00665810
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x006AD890] sub_006AD890 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AD890(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je L_006AD918
        mov edi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x3c]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, edi
        call edx
        cmp dword ptr [esi + 0x30], 0x0
        mov eax, dword ptr [esp + 0x1c]
        push eax
        je L_006AD8EA
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0x30]
        mov esi, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [edx]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [edx + 0x4]
        mov dword ptr [eax + 0x4], ebx
        mov ebx, dword ptr [edx + 0x8]
        mov edx, dword ptr [edx + 0xc]
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax + 0xc], edx
        mov eax, dword ptr [esi + 0x4]
        push edi
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x10
    L_006AD8EA:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x4]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [ecx]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], ebx
        mov ebx, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax + 0xc], ecx
        push edi
        mov ecx, esi
        call edx
    L_006AD918:
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x006AA500] sub_006AA500 (142 bytes)
extern "C" void ext_006A9210();
extern "C" void ext_006A7C20();
extern "C" int mem_0092564C;

extern "C" __declspec(naked) int __fastcall fn_006AA500(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov esi, ecx
        xor ebx, ebx
        call ext_006A9210
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x28]
        mov edi, dword ptr [esi + 0x68]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0xe8]
        mov dword ptr [esp + 0xc], ecx
        mov ecx, dword ptr [esp + 0x20]
        add eax, ecx
        test edi, edi
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x18], eax
        je L_early
        push ebp
        mov ebp, dword ptr [mem_0092564C]
        jmp L_cmp
    L_loop:
        mov eax, dword ptr [esp + 0x1c]
    L_cmp:
        cmp eax, dword ptr [esp + 0x2c]
        jg L_exit
        push edi
        mov ecx, esi
        add ebx, 1
        call ext_006A7C20
        mov ecx, dword ptr [esi + 0xe8]
        push ecx
        push 0
        lea edx, [esp + 0x18]
        push edx
        mov edi, eax
        call ebp
        test edi, edi
        jne L_loop
    L_exit:
        pop ebp
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x20
        ret
    L_early:
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x20
        ret
    }
}

// [0x006ADBF0] sub_006ADBF0 (144 bytes)
extern "C" void ext_0059F5C0();
extern "C" void ext_006A6778();
extern "C" __declspec(naked) void __fastcall fn_006ADBF0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -0x1
        push 0x8b743b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xc]
        mov ecx, edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x9910bc
        mov dword ptr [esi + 0x4], eax
        call ext_0059F5C0
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x2d], 0x1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        xor ebx, ebx
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebx
        lea edi, [esi + 0x18]
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        call ext_006A6778
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x9910a4
        mov dword ptr [esi + 0x2c], ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x30], ebx
        mov byte ptr [esi + 0x34], bl
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x3c], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006A84D0] sub_006A84D0 (144 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A631C();
extern "C" void ext_006A6724();
extern "C" int mem_009256C4;
extern "C" int mem_009255BC;
extern "C" int mem_0092571C;

struct WndClassA006A84D0 {
    unsigned int style;
    void* lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    void* hInstance;
    void* hIcon;
    void* hCursor;
    void* hbrBackground;
    const char* lpszMenuName;
    const char* lpszClassName;
};

extern "C" __declspec(naked) int __fastcall fn_006A84D0(void* self) {
    __asm {
        sub esp, 0x28
        push edi
        call ext_006A5EDE
        mov edi, dword ptr [eax + 0x8]
        lea eax, [esp + 0x4]
        push eax
        push 0x92df38
        push edi
        call dword ptr [mem_009256C4]
        test eax, eax
        jne ret_true_006A84D0
        mov ecx, dword ptr [mem_009255BC]
        push esi
        xor esi, esi
        mov dword ptr [esp + 0x8], 0x848
        mov dword ptr [esp + 0xc], ecx
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], esi
        call ext_006A5EDE
        push 0x7f00
        push esi
        call dword ptr [mem_0092571C]
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x30], 0x92df38
        call ext_006A6724
        test eax, eax
        pop esi
        jne ret_true_006A84D0
        call ext_006A631C
        xor eax, eax
        pop edi
        add esp, 0x28
        ret
    ret_true_006A84D0:
        mov eax, 1
        pop edi
        add esp, 0x28
        ret
    }
}

// [0x006AF490] sub_006AF490 (156 bytes)
extern "C" void ext_006A6784();
extern "C" void ext_006AD3C0();
extern "C" void ext_006A60EE();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006AF490(void* self) {
    __asm {
        push -1
        push 0x8b762f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x991124
        mov eax, dword ptr [esi + 0x58]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x14], 2
        jle short L_006AF4EC
    L_006AF4C5:
        test edi, edi
        jl short L_006AF527
        cmp edi, dword ptr [esi + 0x58]
        jge short L_006AF527
        mov eax, dword ptr [esi + 0x54]
        mov ecx, dword ptr [eax + edi*4]
        test ecx, ecx
        lea eax, [eax + edi*4]
        je short L_006AF4E4
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 1
        call eax
    L_006AF4E4:
        add edi, 1
        cmp edi, dword ptr [esi + 0x58]
        jl short L_006AF4C5
    L_006AF4EC:
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x14], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x14], 0
        call ext_006A6784
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006AD3C0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_006AF527:
        jmp ext_006A60EE
    }
}

// [0x006AA1B0] sub_006AA1B0 (163 bytes)
extern "C" void ext_006A9210();
extern "C" void ext_006A7C20();
extern "C" void ext_006ACE20();
extern "C" int mem_00925628;

extern "C" __declspec(naked) int __fastcall fn_006AA1B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x24
        push ebx
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov ebx, ecx
        mov dword ptr [esp + 0xc], 0
        call ext_006A9210
        mov edi, dword ptr [esp + 0x30]
        mov eax, dword ptr [edi + 0x4]
        cmp eax, dword ptr [esp + 0x28]
        jg L_fail
        cmp eax, dword ptr [esp + 0x20]
        jl L_fail
        push esi
        mov esi, dword ptr [ebx + 0x68]
        test esi, esi
        je L_done_zero
        push ebp
        mov ebp, dword ptr [mem_00925628]
        jmp L_top
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_top:
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_006ACE20
        mov edx, dword ptr [edi + 0x4]
        mov eax, 1
        add dword ptr [esp + 0x1c], eax
        add dword ptr [esp + 0x20], eax
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        call ebp
        test eax, eax
        jne L_hit
        push esi
        mov ecx, ebx
        call ext_006A7C20
        mov esi, eax
        test esi, esi
        jne L_top
        mov eax, dword ptr [esp + 0x10]
        pop ebp
        pop esi
        pop edi
        pop ebx
        add esp, 0x24
        ret 4
    L_hit:
        mov dword ptr [esp + 0x10], esi
        pop ebp
    L_done_zero:
        mov eax, dword ptr [esp + 0xc]
        pop esi
        pop edi
        pop ebx
        add esp, 0x24
        ret 4
    L_fail:
        pop edi
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 4
    }
}

// [0x006AF3E0] sub_006AF3E0 (167 bytes)
extern "C" void ext_006AD150();
extern "C" void ext_00626440();
extern "C" int mem_00925678;
extern "C" int mem_0092564C;
extern "C" __declspec(naked) void* __fastcall fn_006AF3E0(void* self, int edx_unused, int* a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_006AD150
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        mov ebp, eax
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], eax
        mov ecx, dword ptr [edi + 0x14]
        call ext_00626440
        mov ebx, dword ptr [mem_00925678]
        push -4
        push -4
        push esi
        mov dword ptr [esi + 0x8], eax
        call ebx
        push -1
        push 0
        push esi
        call dword ptr [mem_0092564C]
        mov eax, 1
        add dword ptr [esi + 0x8], eax
        add dword ptr [esi + 0xc], eax
        mov eax, dword ptr [esi]
        sub eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0xc]
        sub eax, ecx
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        je skip_offset_a
        neg eax
        push eax
        push 0
        push esi
        call ebx
skip_offset_a:
        test ebp, ebp
        jle done_b
        mov ebx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [edi + 0x14]
        sub ebx, dword ptr [esi]
        call ext_00626440
        add ebx, 3
        add ebp, -1
        imul ebx, ebp
        push 0
        add eax, ebx
        push eax
        push esi
        call dword ptr [mem_0092564C]
done_b:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
    }
}

// [0x006AD4D0] sub_006AD4D0 (167 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A7BA0();
extern "C" int mem_008B7418;
extern "C" int mem_0092A23C;

extern "C" __declspec(naked) void __fastcall fn_006AD4D0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push offset mem_008B7418
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov ecx, dword ptr [ecx + 0x14]
        push ebx
        push esi
        push edi
        call ext_006A7BA0
        push eax
        push 1
        push 0
        lea ecx, [esp + 0x18]
        call ext_006A6148
        mov esi, dword ptr [esp + 0x2c]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x28], 0
        call ext_006A610C
        mov edi, dword ptr [esp + 0x34]
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi + 0x8]
        push ecx
        mov ebx, eax
        push edx
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_006A6106
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [edi + 0x8]
        push ecx
        push edx
        mov ecx, esi
        call ext_006A6100
        push ebx
        mov ecx, esi
        call ext_006A610C
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], -1
        mov dword ptr [esp + 0xc], offset mem_0092A23C
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0xc
    }
}

// [0x006A88D0] sub_006A88D0 (168 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_00925694;
extern "C" int mem_0092570C;
extern "C" int mem_00925618;

typedef int (__stdcall *FnSendMessageA_006A88D0)(void*, unsigned int, unsigned int, long);
typedef int (__stdcall *FnScreenToClient_006A88D0)(void*, void*);
typedef int (__stdcall *FnPostMessageA_006A88D0)(void*, unsigned int, unsigned int, long);
typedef int (__fastcall *FnDefault_006A88D0)(void*);

struct Point_006A88D0 {
    int x;
    int y;
};

extern "C" int __fastcall fn_006A88D0(void* self, int edx_unused, unsigned int nFlags, short zDelta, Point_006A88D0 pt) {
    short d = zDelta;
    void* s = self;
    int count = d / 120;

    if (d > 0) {
        if (count > 0) {
            FnSendMessageA_006A88D0 sendMsg = *(FnSendMessageA_006A88D0*)&mem_00925694;
            int n = count;
            do {
                sendMsg(*(void**)((char*)s + 0x20), 0x115, 0, 0);
            } while (--n);
        }
    } else if (d < 0) {
        count = -count;
        if (count > 0) {
            FnSendMessageA_006A88D0 sendMsg = *(FnSendMessageA_006A88D0*)&mem_00925694;
            int n = count;
            do {
                sendMsg(*(void**)((char*)s + 0x20), 0x115, 1, 0);
            } while (--n);
        }
    }

    ((FnScreenToClient_006A88D0)mem_0092570C)(*(void**)((char*)s + 0x20), &pt);
    unsigned int lParam = ((unsigned short)pt.x) | (((unsigned int)(unsigned short)pt.y) << 16);
    ((FnPostMessageA_006A88D0)mem_00925618)(*(void**)((char*)s + 0x20), 0x200, 0, lParam);
    return ((FnDefault_006A88D0)ext_006A5EA8)(s);
}

// [0x006ADC80] sub_006ADC80 (168 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A6796();
extern "C" void ext_006ADBF0();
extern "C" __declspec(naked) void __fastcall fn_006ADC80(void* self) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push edi
        mov edi, dword ptr [esp + 0x24]
        test edi, edi
        mov dword ptr [esp + 0x4], 0x0
        je short loc_6ADD18
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x24]
        push esi
        add ebp, 0x18
        lea ebx, [esp + 0x30]
loc_6ADCB7:
        push 0x40
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x20], esi
        je short loc_6ADCE7
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        push edx
        mov ecx, eax
        call ext_006ADBF0
        add dword ptr [esp + 0x10], 0x1
        mov esi, eax
loc_6ADCE7:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        test edi, edi
        sete cl
        mov dword ptr [esp + 0x20], 0xffffffff
        push ecx
        push edi
        mov ecx, esi
        call edx
        mov eax, dword ptr [ebp + 0x8]
        push esi
        push eax
        mov ecx, ebp
        call ext_006A6796
        mov edi, dword ptr [ebx + 0x4]
        add ebx, 0x4
        test edi, edi
        jne short loc_6ADCB7
        pop esi
        pop ebp
        pop ebx
loc_6ADD18:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x006A8560] sub_006A8560 (172 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6004();
extern "C" int mem_00925658;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_006A8560(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0xc
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0xe8], -1
        jne skip
        mov eax, dword ptr [edi + 0x20]
        push ebx
        push esi
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov esi, eax
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x30]
        lea eax, [edi + 0xdc]
        push eax
        mov ecx, esi
        call edx
        push 0x990ad4
        lea ecx, [esp + 0x10]
        mov ebx, eax
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esp + 0x14]
        add edx, 0x3
        mov dword ptr [edi + 0xe8], edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push ebx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        pop esi
        pop ebx
skip:
        mov ecx, edi
        call ext_006A5EA8
        pop edi
        add esp, 0xc
        ret 0x8
    }
}

// [0x006AD1D0] sub_006AD1D0 (184 bytes)
extern "C" int mem_00925680;

extern "C" __declspec(naked) void* __fastcall fn_006AD1D0(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x8b73f8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x99103c
        call dword ptr [mem_009242FC]
        xor ebx, ebx
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x14], ebx
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esp + 0x1c]
        push 0xc
        mov byte ptr [esp + 0x18], 0x1
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebx
        mov byte ptr [esi + 0x38], bl
        mov dword ptr [esi + 0x3c], ebx
        mov byte ptr [esi + 0x40], bl
        mov byte ptr [esi + 0x41], bl
        mov dword ptr [esi + 0x44], ebx
        mov dword ptr [esi + 0x4c], ebx
        call ext_006A5C62
        mov dword ptr [esi + 0x4], eax
        mov byte ptr [eax + 0x4], 0x1
        mov ecx, dword ptr [esi + 0x4]
        mov byte ptr [ecx + 0x5], bl
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [edx + 0x8], 0x1
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x4
        push 0x8
        mov dword ptr [eax], ebx
        call dword ptr [mem_00925680]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x48], eax
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006AECD0] sub_006AECD0 (145 bytes)
extern "C" void ext_006A6778();
extern "C" void ext_006AD000();
extern "C" void ext_006AD1D0();
extern "C" void ext_006AECC0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_006AECD0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -0x1
        push 0x8b762f
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call ext_006AD1D0
        lea edi, [esi + 0x50]
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x991124
        call ext_006A6778
        mov dword ptr [edi], 0x99093c
        mov ecx, dword ptr [esp + 0x24]
        mov al, 1
        mov dword ptr [esi + 0x68], ecx
        lea ecx, [esi + 0x6c]
        mov byte ptr [esp + 0x14], al
        mov byte ptr [esi + 0x64], al
        call dword ptr [mem_00924FE8]
        mov edx, dword ptr [esp + 0x20]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x18], 2
        call ext_006AD000
        push 0x92ab78
        mov ecx, esi
        call ext_006AECC0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x006AAA10] sub_006AAA10 (190 bytes)
extern "C" void ext_006A7BB0();
extern "C" void ext_006A7BD0();

extern "C" __declspec(naked) void* __fastcall fn_006AAA10(void* self, int edx_unused, int* a1, int a2) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        call ext_006A7BB0
        mov edi, eax
        lea eax, [esp + 0x10]
        push eax
        call ext_006A9210
        mov esi, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 0x4], edx
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x8], eax
        mov ecx, ebx
        mov dword ptr [esi + 0xc], edx
        call ext_006A7BD0
        add eax, dword ptr [esi + 0x4]
        test edi, edi
        mov dword ptr [esi + 0xc], eax
        je L_fill2
        mov ebp, dword ptr [mem_0092564C]
    L_loop:
        cmp edi, dword ptr [esp + 0x28]
        je L_eq
        cmp dword ptr [esi + 0x4], edx
        jge L_fill
        mov ecx, edi
        call ext_006AD120
        mov ecx, ebx
        mov edi, eax
        call ext_006A7BD0
        push eax
        push 0x0
        push esi
        call ebp
        test edi, edi
        je L_fill2
        mov edx, dword ptr [esp + 0x1c]
        jmp L_loop
    L_eq:
        cmp dword ptr [esi + 0x4], edx
        jl L_done
    L_fill:
        or eax, -1
        or ecx, -1
        mov dword ptr [esi], eax
        or edx, -1
        mov dword ptr [esi + 0x4], ecx
        or ebx, -1
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], ebx
    L_done:
        test edi, edi
        jne L_ret
    L_fill2:
        or eax, -1
        or ecx, -1
        mov dword ptr [esi], eax
        or edx, -1
        mov dword ptr [esi + 0x4], ecx
        or edi, -1
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], edi
    L_ret:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006AF310] sub_006AF310 (197 bytes)
extern "C" void ext_006A7B90();
extern "C" void ext_006AD150();
extern "C" void ext_00626440();
extern "C" int mem_0092564C;

extern "C" __declspec(naked) int __fastcall fn_006AF310(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [ebx + 0x14]
        call ext_006A7B90
        test al, al
        jne L_006AF32B
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 0x10
L_006AF32B:
        push edi
        mov ecx, ebx
        call ext_006AD150
        mov edi, eax
        test edi, edi
        jne L_006AF341
        pop edi
        pop ebx
        add esp, 0x10
        ret 0x10
L_006AF341:
        mov ecx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x1c]
        push ebp
        mov ebp, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x18], ecx
        mov ecx, dword ptr [ebx + 0x14]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x1c], ebp
        call ext_00626440
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [eax + edx - 0x3]
        lea eax, [ecx - 0x9]
        mov dword ptr [esp + 0x10], eax
        mov eax, ebp
        sub eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        lea esi, [eax + esi - 0x4]
        mov dword ptr [esp + 0x18], ecx
        sub ecx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], esi
        add esi, 0x9
        mov dword ptr [esp + 0x1c], esi
        mov esi, ecx
        mov ecx, dword ptr [ebx + 0x14]
        call ext_00626440
        lea ecx, [edi - 0x1]
        add esi, 0x3
        imul esi, ecx
        push 0
        add eax, esi
        push eax
        lea edx, [esp + 0x18]
        push edx
        call dword ptr [mem_0092564C]
        mov eax, dword ptr [esp + 0x18]
        sub eax, dword ptr [esp + 0x10]
        pop esi
        add eax, 0x3
        pop ebp
        imul eax, edi
        pop edi
        pop ebx
        add esp, 0x10
        ret 0x10
    }
}

// [0x006A7944] sub_006A7944 (205 bytes)
extern "C" void ext_006A745E();
extern "C" int mem_00AA7E40;
extern "C" int mem_00924150;
extern "C" int mem_00924154;
extern "C" int mem_00924158;
extern "C" int mem_0092414C;
extern "C" int mem_00924220;
extern "C" int mem_00AA7E58;

extern "C" __declspec(naked) void __fastcall fn_006A7944(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xc
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        push esi
        xor esi, esi
        call dword ptr [mem_00924150]
        push 7
        lea ecx, [ebp - 0xc]
        push ecx
        push 0x1004
        push eax
        call dword ptr [mem_00924154]
        test eax, eax
        je short loc_006A7992
        mov cl, byte ptr [ebp - 0xc]
        test cl, cl
        lea eax, [ebp - 0xc]
        je short loc_006A7992
loc_006A797D:
        imul esi, esi, 0xa
        movsx ecx, cl
        inc eax
        lea esi, [esi + ecx - 0x30]
        mov cl, byte ptr [eax]
        test cl, cl
        jne short loc_006A797D
        test esi, esi
        jne short loc_006A799A
loc_006A7992:
        call dword ptr [mem_00924158]
        mov esi, eax
loc_006A799A:
        mov ecx, dword ptr [ebp - 0x4]
        mov eax, esi
        xor ecx, ebp
        pop esi
        call ext_006A745E
        leave
        ret

loc_006A79A9:
        push 3
        pop eax
        ret

loc_006A79AD:
        push ebp
        mov ebp, esp
        sub esp, 0x98
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        lea eax, [ebp - 0x98]
        push eax
        mov dword ptr [ebp - 0x98], 0x94
        call dword ptr [mem_0092414C]
        cmp dword ptr [ebp - 0x88], 2
        jne short loc_006A79EE
        cmp dword ptr [ebp - 0x94], 5
        mov eax, 0x006A79A9
        jae short loc_006A79F3
loc_006A79EE:
        mov eax, 0x006A7944
loc_006A79F3:
        push eax
        push offset mem_00AA7E58
        call dword ptr [mem_00924220]
        call dword ptr [mem_00AA7E58]
        mov ecx, dword ptr [ebp - 0x4]
        xor ecx, ebp
        call ext_006A745E
        leave
        ret
    }
}

// [0x006AD2E0] sub_006AD2E0 (215 bytes)
extern "C" int mem_009244D4;

extern "C" __declspec(naked) void* __fastcall fn_006AD2E0(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8b73f8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, [esi + 0x8]
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0x99103c
        call dword ptr [mem_009242FC]
        xor ebx, ebx
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x1c], ebx
        call dword ptr [mem_009242FC]
        mov edi, dword ptr [esp + 0x24]
        mov eax, dword ptr [edi + 0x48]
        mov dword ptr [esi + 0x48], eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, 0x1
        mov byte ptr [esp + 0x1c], cl
        mov dword ptr [esi + 0x4], eax
        add dword ptr [eax + 0x8], ecx
        lea ecx, [edi + 0x8]
        push ecx
        mov ecx, ebp
        call dword ptr [mem_009244D4]
        lea edx, [edi + 0xc]
        push edx
        lea ecx, [esi + 0xc]
        call dword ptr [mem_009244D4]
        mov eax, dword ptr [edi + 0x10]
        mov dword ptr [esi + 0x10], eax
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0x14], ecx
        mov edx, dword ptr [edi + 0x18]
        mov dword ptr [esi + 0x18], edx
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], ebx
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x34], ebx
        mov dword ptr [esi + 0x30], ebx
        mov cl, byte ptr [edi + 0x38]
        mov byte ptr [esi + 0x38], cl
        mov edx, dword ptr [edi + 0x3c]
        mov dword ptr [esi + 0x3c], edx
        mov byte ptr [esi + 0x40], bl
        mov byte ptr [esi + 0x41], bl
        mov ecx, dword ptr [edi + 0x44]
        cmp ecx, ebx
        mov dword ptr [esi + 0x44], ecx
        je L_006AD3A0
        call ext_006AD950
    L_006AD3A0:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006A3340] sub_006A3340 (233 bytes)
extern "C" unsigned char mem_00990400[256];

extern "C" __declspec(naked) void __cdecl fn_006A3340(const unsigned char* src, unsigned char* dst, unsigned int* len) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebx]
        push edi
        xor eax, eax
        xor edi, edi
        test edx, edx
        jbe d6a_zero
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x14]
        jmp short d6a_top
d6a_reload:
        mov ebx, dword ptr [esp + 0x1c]
d6a_top:
        cmp eax, edx
        jae short d6a_done
d6a_read:
        mov cl, byte ptr [eax + esi]
        cmp cl, 0x0d
        je short d6a_skip
        cmp cl, 0x0a
        jne short d6a_group
d6a_skip:
        add eax, 1
        cmp eax, edx
        jb short d6a_read
d6a_done:
        pop esi
        pop ebp
        mov dword ptr [ebx], edi
        pop edi
        pop ebx
        ret
d6a_group:
        cmp eax, edx
        jae short d6a_done
        test ebp, ebp
        je short d6a_g1
        movzx ecx, byte ptr [eax + esi + 1]
        movzx ebx, byte ptr [eax + esi]
        mov cl, byte ptr [ecx + mem_00990400]
        mov bl, byte ptr [ebx + mem_00990400]
        sar cl, 4
        add bl, bl
        and cl, 3
        add bl, bl
        xor cl, bl
        mov byte ptr [edi + ebp], cl
d6a_g1:
        mov cl, byte ptr [eax + esi + 2]
        add edi, 1
        cmp cl, 0x4f
        je short d6a_g2
        test ebp, ebp
        je short d6a_g1b
        movzx ebx, byte ptr [eax + esi + 1]
        mov bl, byte ptr [ebx + mem_00990400]
        movzx ecx, cl
        mov cl, byte ptr [ecx + mem_00990400]
        sar cl, 2
        and cl, 0x0f
        shl bl, 4
        xor cl, bl
        mov byte ptr [edi + ebp], cl
d6a_g1b:
        add edi, 1
d6a_g2:
        mov cl, byte ptr [eax + esi + 3]
        cmp cl, 0x4f
        je short d6a_g3
        test ebp, ebp
        je short d6a_g2b
        movzx ebx, byte ptr [eax + esi + 2]
        mov bl, byte ptr [ebx + mem_00990400]
        movzx ecx, cl
        shl bl, 6
        add bl, byte ptr [ecx + mem_00990400]
        mov byte ptr [edi + ebp], bl
d6a_g2b:
        add edi, 1
d6a_g3:
        add eax, 4
        cmp eax, edx
        jb d6a_reload
        mov edx, dword ptr [esp + 0x1c]
        pop esi
        pop ebp
        mov dword ptr [edx], edi
        pop edi
        pop ebx
        ret
d6a_zero:
        mov dword ptr [ebx], edi
        pop edi
        pop ebx
        ret
    }
}

extern "C" int mem_00AA6D90;
extern "C" int mem_00AA7190;
extern "C" int mem_00AA7590;
extern "C" int mem_00AA7990;

// [0x006A4EC0] sub_006A4EC0 (237 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A4EC0(void* self) {
    __asm {
        mov edx, 1
        cmp dword ptr [ecx + 0x1c], edx
        jbe loc_ret
        push esi
        lea eax, [ecx + 0x32]
        push edi
        jmp short loc_loop
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
loc_loop:
        movzx esi, byte ptr [eax + 0x1]
        mov esi, dword ptr [mem_00AA7990 + esi*4]
        movzx edi, byte ptr [eax - 0x1]
        xor esi, dword ptr [mem_00AA7190 + edi*4]
        movzx edi, byte ptr [eax]
        xor esi, dword ptr [mem_00AA7590 + edi*4]
        movzx edi, byte ptr [eax - 0x2]
        xor esi, dword ptr [mem_00AA6D90 + edi*4]
        add edx, 1
        mov dword ptr [eax - 0x2], esi
        movzx esi, byte ptr [eax + 0x5]
        mov esi, dword ptr [mem_00AA7990 + esi*4]
        movzx edi, byte ptr [eax + 0x4]
        xor esi, dword ptr [mem_00AA7590 + edi*4]
        movzx edi, byte ptr [eax + 0x3]
        xor esi, dword ptr [mem_00AA7190 + edi*4]
        movzx edi, byte ptr [eax + 0x2]
        xor esi, dword ptr [mem_00AA6D90 + edi*4]
        add eax, 0x10
        mov dword ptr [eax - 0xe], esi
        movzx esi, byte ptr [eax - 0x7]
        mov esi, dword ptr [mem_00AA7990 + esi*4]
        movzx edi, byte ptr [eax - 0x8]
        xor esi, dword ptr [mem_00AA7590 + edi*4]
        movzx edi, byte ptr [eax - 0x9]
        xor esi, dword ptr [mem_00AA7190 + edi*4]
        movzx edi, byte ptr [eax - 0xa]
        xor esi, dword ptr [mem_00AA6D90 + edi*4]
        mov dword ptr [eax - 0xa], esi
        movzx esi, byte ptr [eax - 0x3]
        movzx edi, byte ptr [eax - 0x4]
        mov esi, dword ptr [mem_00AA7990 + esi*4]
        xor esi, dword ptr [mem_00AA7590 + edi*4]
        movzx edi, byte ptr [eax - 0x5]
        xor esi, dword ptr [mem_00AA7190 + edi*4]
        movzx edi, byte ptr [eax - 0x6]
        xor esi, dword ptr [mem_00AA6D90 + edi*4]
        mov dword ptr [eax - 0x6], esi
        cmp edx, dword ptr [ecx + 0x1c]
        jb loc_loop
        pop edi
        pop esi
loc_ret:
        ret
    }
}

extern "C" void ext_004ECB40();
extern "C" void ext_0041CF50();

// [0x006A1490] sub_006A1490 (102 bytes)
// SEH-guarded temp (same shape as fn_00699260): out-param call via ext_004ECB40 on arg1,
// feed result into ext_0041CF50 on self, then dispatch vtable slot 0x78 on the returned object.
extern "C" __declspec(naked) void __fastcall fn_006A1490(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x008b33b8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        lea eax, [esp + 0x4]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        call ext_004ECB40
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        pop esi
        je done_006A1490
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp]
        push eax
        call edx
done_006A1490:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x4
    }
}

// [0x006A8660] sub_006A8660 (247 bytes)
extern "C" void ext_006AEC60();
extern "C" void ext_006A63BE();
extern "C" void ext_006A7C10();
extern "C" void ext_006AD060();
extern "C" void ext_006AD0E0();
extern "C" void ext_006AD0F0();
extern "C" void ext_006AD100();
extern "C" void ext_006AF8E0();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006A8660(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [ebx + 0x1c], ebp
        call ext_006AEC60
        push eax
        mov ecx, ebx
        call ext_006A63BE
        test eax, eax
        jne L_skip_sel
        mov eax, dword ptr [esi + 0x104]
        push eax
        mov ecx, ebx
        call ext_006AD060
L_skip_sel:
        push edi
        xor esi, esi
        mov edi, ebp
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop_top:
        mov ecx, edi
        call ext_006A7C10
        test eax, eax
        jle L_after_loop
        mov ecx, edi
        call ext_006A7C10
        sub eax, 1
        push eax
        mov ecx, edi
        call ext_006AF8E0
        mov esi, eax
        test esi, esi
        mov edi, esi
        je L_else
        call ext_006AEC60
        push eax
        mov ecx, esi
        call ext_006A63BE
        test eax, eax
        jne L_loop_top
L_after_loop:
        test esi, esi
        je L_else
        mov ecx, esi
        call ext_006AD100
        push ebx
        mov ecx, esi
        mov edi, eax
        call ext_006AD0E0
        push ebx
        mov ecx, edi
        call ext_006AD0F0
        push esi
        mov ecx, ebx
        call ext_006AD0F0
        push edi
        mov ecx, ebx
        call ext_006AD0E0
        jmp L_fin
L_else:
        mov ecx, ebp
        call ext_006AD100
        push ebx
        mov ecx, ebp
        mov edi, eax
        call ext_006AD0E0
        push ebx
        mov ecx, edi
        call ext_006AD0F0
        push edi
        mov ecx, ebx
        call ext_006AD0E0
        push ebp
        mov ecx, ebx
        call ext_006AD0F0
L_fin:
        test edi, edi
        pop edi
        jne L_nofin
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x64], ebx
L_nofin:
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [edx + 0x20]
        test eax, eax
        pop esi
        pop ebp
        pop ebx
        je L_ret
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
L_ret:
        pop ecx
        ret 8
    }
}

// [0x006A8020] sub_006A8020 (252 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A60EE();
extern "C" void ext_006A63CA();
extern "C" void ext_006A63D0();
extern "C" void ext_006A7FF0();
extern "C" int mem_00924204;
extern "C" int mem_0092420C;

// [0x006A8020] sub_006A8020 (252 bytes)
// SEH-framed (fs:[0] chain, scope 0xa1b760, handler 0x6a6ef2). 6 stack args, ret 0x18.
extern "C" __declspec(naked) int __fastcall fn_006A8020(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0xa1b760
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
        mov dword ptr [ebp-0x1c], ebx
        cmp edi, ebx
        jne L_have_work
        xor eax, eax
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
    L_have_work:
        mov dword ptr [ebp-0x4], ebx
        lea edx, [ebp-0x28]
        push edx
        mov ecx, esi
        call ext_006A7FF0
        mov esi, dword ptr [esi+0x3c]
        xor eax, eax
        cmp esi, ebx
        setne al
        cmp eax, ebx
        jne L_have_fn
        call ext_006A60EE
    L_have_fn:
        mov eax, dword ptr [ebp+0x1c]
        push eax
        mov ecx, dword ptr [ebp+0x18]
        push ecx
        mov edx, dword ptr [ebp+0x14]
        push edx
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
        mov ecx, dword ptr [ebp-0x10]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x18
    L_unwind:
        mov edi, dword ptr [ebp-0x24]
        mov ebx, dword ptr [ebp-0x1c]
    L_cleanup:
        cmp edi, 2
        je L_cleanup_ret
        xor eax, eax
        test ebx, ebx
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

// [0x006A9540] sub_006A9540 (79 bytes)
extern "C" int __fastcall ext_006A8020(void* self);

extern "C" __declspec(naked) void __fastcall fn_006A9540(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x17c]
        test eax, eax
        jne L_body_6A9540
        xor al, al
        ret 0x10
    L_body_6A9540:
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        je L_skip_6A9540
        mov ecx, dword ptr [ecx + 0x4]
    L_skip_6A9540:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x4]
        push 0x0
        push edx
        mov edx, dword ptr [esp + 0x14]
        push edx
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push eax
        call ext_006A5EDE
        mov edx, dword ptr [eax + 0x94]
        mov ecx, dword ptr [edx]
        call ext_006A8020
        sub eax, 0x1
        neg eax
        sbb eax, eax
        add eax, 0x1
        ret 0x10
    }
}

// [0x006A0360] sub_006A0360 (256 bytes)
extern "C" void ext_004ECB40();
extern "C" void ext_006657F0();

extern "C" __declspec(naked) void __fastcall fn_006A0360(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8b6b96
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], esi
        push 0
        mov dword ptr [esp + 0x18], 2
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x20]
        test ecx, ecx
        mov byte ptr [esp + 0x14], 3
        mov dword ptr [esi], 0x98fcb4
        je l_null
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        lea edx, [esp + 0x1c]
        push edx
        lea edx, [esp + 0x8]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x20]
        jmp l_join
l_null:
        mov dword ptr [esp + 0x4], 0
        lea eax, [esp + 0x4]
l_join:
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 0x10], edx
        mov dword ptr [esi + 0x14], ecx
        lea eax, [esi + 0x18]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x18], 4
        call ext_004ECB40
        lea ecx, [esi + 0x20]
        push ecx
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x18], 5
        call ext_004ECB40
        mov ecx, dword ptr [esp + 0x20]
        test ecx, ecx
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], eax
        mov byte ptr [esp + 0x14], 1
        je l_s1
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x1c]
        push eax
        call edx
l_s1:
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        mov byte ptr [esp + 0x14], 0
        je l_s2
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x2c]
        push edx
        call eax
l_s2:
        mov ecx, dword ptr [esp + 0x38]
        test ecx, ecx
        mov dword ptr [esp + 0x14], -1
        je l_s3
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x34]
        push eax
        call edx
l_s3:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x20
    }
}

// [0x006A3200] sub_006A3200 (312 bytes)
extern "C" int mem_00924FD4;
extern "C" int mem_00924ED0;
extern "C" int mem_00AA4B54;
extern "C" int mem_00924EC0;
extern "C" int mem_00928B5D;
extern "C" int mem_00941F08;

extern "C" __declspec(naked) void __fastcall fn_006A3200(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        xor esi, esi
        push offset mem_00928B5D
        mov ecx, edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FD4]
        cmp dword ptr [esp + 0x14], esi
        jbe loc_006A3334
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loc_006A3230:
        mov ebx, dword ptr [esp + 0x1c]
        sub ebx, esi
        cmp byte ptr [esp + 0x24], 0
        je loc_006A326B
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        je loc_006A326B
        mov eax, 0xaf286bcb
        mul ecx
        mov eax, ecx
        sub eax, edx
        shr eax, 1
        add eax, edx
        shr eax, 6
        imul eax, eax, 0x4c
        sub ecx, eax
        jne loc_006A326B
        push offset mem_00941F08
        mov ecx, edi
        call dword ptr [mem_00924ED0]
loc_006A326B:
        movzx ecx, byte ptr [esi + ebp]
        mov edx, dword ptr [mem_00AA4B54]
        shr ecx, 2
        movzx eax, byte ptr [ecx + edx]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        movzx ecx, byte ptr [esi + ebp]
        and ecx, 3
        shl ecx, 4
        sub ebx, 1
        je loc_006A32F9
        movzx edx, byte ptr [esi + ebp + 1]
        add ecx, dword ptr [mem_00AA4B54]
        shr edx, 4
        movzx eax, byte ptr [edx + ecx]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        movzx ecx, byte ptr [esi + ebp + 1]
        and ecx, 0xf
        sub ebx, 1
        je loc_006A32EC
        movzx edx, byte ptr [esi + ebp + 2]
        shr edx, 6
        add edx, dword ptr [mem_00AA4B54]
        movzx eax, byte ptr [edx + ecx*4]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        movzx ecx, byte ptr [esi + ebp + 2]
        mov edx, dword ptr [mem_00AA4B54]
        and ecx, 0x3f
        movzx eax, byte ptr [ecx + edx]
        push eax
        jmp loc_006A3318
loc_006A32EC:
        mov edx, dword ptr [mem_00AA4B54]
        movzx eax, byte ptr [edx + ecx*4]
        push eax
        jmp loc_006A330E
loc_006A32F9:
        mov edx, dword ptr [mem_00AA4B54]
        movzx eax, byte ptr [ecx + edx]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        push 0x4f
loc_006A330E:
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        push 0x4f
loc_006A3318:
        mov ecx, edi
        call dword ptr [mem_00924EC0]
        add dword ptr [esp + 0x10], 4
        add esi, 3
        cmp esi, dword ptr [esp + 0x1c]
        jb loc_006A3230
        pop ebp
        pop ebx
loc_006A3334:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006AAAD0] sub_006AAAD0 (333 bytes)
extern "C" void ext_006A7BB0();
extern "C" void ext_006A7BD0();
extern "C" void ext_006A9210();
extern "C" void ext_006AD110();
extern "C" void ext_006AD120();
extern "C" int mem_0092564C;

extern "C" __declspec(naked) void __fastcall fn_006AAAD0(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A7BB0
        mov edi, eax
        lea eax, [esp + 0x20]
        push eax
        call ext_006A9210
        mov ecx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x18], eax
        call ext_006A7BD0
        mov ebp, dword ptr [esp + 0x38]
        mov ebx, dword ptr [mem_0092564C]
        add eax, edx
        test edi, edi
        mov dword ptr [esp + 0x1c], eax
        je L_006AAAD0_after1
L_006AAAD0_cmp1:
        cmp edi, ebp
        je L_006AAAD0_firsteq
        mov ecx, edi
        call ext_006AD110
        mov ecx, esi
        mov edi, eax
        call ext_006A7BD0
        neg eax
        push eax
        push 0
        lea edx, [esp + 0x18]
        push edx
        call ebx
        test edi, edi
        jne L_006AAAD0_cmp1
L_006AAAD0_mid:
        mov edx, dword ptr [esp + 0x24]
L_006AAAD0_after1:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x18], ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_006A7BD0
        add eax, edx
        mov dword ptr [esp + 0x1c], eax
        call ext_006A7BB0
        mov edi, eax
        test edi, edi
        je L_006AAAD0_end
L_006AAAD0_loop2:
        cmp edi, ebp
        je L_006AAAD0_eq2
        mov ecx, edi
        call ext_006AD120
        mov ecx, esi
        mov edi, eax
        call ext_006A7BD0
        push eax
        push 0
        lea ecx, [esp + 0x18]
        push ecx
        call ebx
        test edi, edi
        jne L_006AAAD0_loop2
L_006AAAD0_end:
        mov eax, dword ptr [esp + 0x34]
        pop edi
        or ecx, -1
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0xc], ecx
        pop ebx
        add esp, 0x20
        ret 8
L_006AAAD0_firsteq:
        test edi, edi
        je L_006AAAD0_mid
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 0x18]
        pop esi
        pop ebp
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0xc], edx
        pop ebx
        add esp, 0x20
        ret 8
L_006AAAD0_eq2:
        test edi, edi
        je L_006AAAD0_end
        mov eax, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax], edx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 0x18]
        pop esi
        pop ebp
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0xc], ecx
        pop ebx
        add esp, 0x20
        ret 8
    }
}

// [0x006A93A0] sub_006A93A0 (368 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A5EDE();
extern "C" void ext_006B16A0();
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006A93A0(void* self, int edx_unused, unsigned char a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b714a
        push eax
        mov dword ptr fs:[0x0], esp
        mov al, byte ptr [esp + 0x10]
        sub esp, 0x2c
        test al, al
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x178], al
        je loc_6A94E1
        cmp dword ptr [esi + 0x174], 0
        jne loc_6A94FE
        push 0x78
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x40], eax
        test eax, eax
        mov dword ptr [esp + 0x38], 0
        je loc_6A93FE
        push esi
        mov ecx, eax
        call ext_006B16A0
        jmp loc_6A9400
    loc_6A93FE:
        xor eax, eax
    loc_6A9400:
        mov dword ptr [esi + 0x174], eax
        mov edx, dword ptr [eax]
        push 0
        mov ecx, eax
        mov eax, dword ptr [edx + 0x13c]
        push esi
        mov dword ptr [esp + 0x40], -1
        call eax
        mov ecx, dword ptr [esi + 0x174]
        lea eax, [esi + 0xdc]
        test eax, eax
        je loc_6A9430
        mov eax, dword ptr [eax + 4]
    loc_6A9430:
        mov ecx, dword ptr [ecx + 0x20]
        push edi
        mov edi, dword ptr [mem_00925694]
        push 0
        push eax
        push 0x30
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x174]
        mov eax, dword ptr [edx + 0x20]
        push 0x7fff
        push 0
        push 0x418
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x174]
        mov edx, dword ptr [ecx + 0x20]
        push 0x7fff
        push 2
        push 0x403
        push edx
        call edi
        mov eax, dword ptr [esi + 0x174]
        mov ecx, dword ptr [eax + 0x20]
        push 0
        push 3
        push 0x403
        push ecx
        call edi
        mov eax, dword ptr [esi + 0x20]
        mov dword ptr [esp + 8], 0x2c
        mov dword ptr [esp + 0xc], 0xa1
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], eax
        call ext_006A5EDE
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 0x174]
        lea eax, [esp + 8]
        push eax
        push 0
        mov dword ptr [esp + 0x30], edx
        mov dword ptr [esp + 0x34], 0
        mov edx, dword ptr [ecx + 0x20]
        push 0x404
        push edx
        call edi
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x38
        ret 4
    loc_6A94E1:
        mov ecx, dword ptr [esi + 0x174]
        test ecx, ecx
        je loc_6A94FE
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        call edx
        mov dword ptr [esi + 0x174], 0
    loc_6A94FE:
        mov ecx, dword ptr [esp + 0x30]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x38
        ret 4
    }
}

// [0x006A7CA0] sub_006A7CA0 (83 bytes)
extern "C" void ext_006B1510();
extern "C" void ext_006B13F0();
extern "C" __declspec(naked) void __fastcall fn_006A7CA0(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x3c
        push esi
        lea eax, [esp + 0x28]
        push eax
        mov eax, dword ptr [ebp + 0x8]
        mov esi, ecx
        lea ecx, [esp + 0x34]
        push ecx
        lea edx, [esp + 0x40]
        push edx
        push eax
        call ext_006B1510
        fld qword ptr [esp + 0x38]
        fstp qword ptr [esp + 0x8]
        sub esp, 0x8
        fld qword ptr [esp + 0x48]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x50]
        fstp qword ptr [esp]
        call ext_006B13F0
        add esp, 0x18
        mov dword ptr [esi + 0x184], eax
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x006A2940] sub_006A2940 (453 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" void ext_008B6D58();
extern "C" int mem_00990384;
extern "C" int mem_00990380;
extern "C" int mem_00990374;
extern "C" int mem_00990370;

extern "C" __declspec(naked) void __cdecl fn_006A2940() {
    __asm {
        push -1
        push offset ext_008B6D58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc8
        push esi
        mov esi, dword ptr [esp + 0xe0]
        test esi, esi
        mov dword ptr [esp + 4], 0
        jne lbl_9b
        mov esi, dword ptr [esp + 0xdc]
        push offset mem_00990384
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0xc8]
        mov dword ptr fs:[0], ecx
        add esp, 0xd4
        ret
    lbl_9b:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ebp
        push edi
        lea ecx, [esp + 0xb8]
        push ecx
        mov ecx, esi
        call edx
        mov edi, eax
        push offset mem_00990380
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0xe0], 1
        call dword ptr [mem_00924FE4]
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x20]
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0xe0], 2
        call edx
        mov esi, eax
        push offset mem_00990374
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xe0], 3
        call dword ptr [mem_00924FE4]
        push esi
        mov esi, dword ptr [mem_00924FD0]
        push eax
        lea eax, [esp + 0x18]
        push eax
        mov byte ptr [esp + 0xe8], 4
        call esi
        push ebp
        push eax
        lea ecx, [esp + 0xb0]
        push ecx
        mov byte ptr [esp + 0xf4], 5
        call esi
        push edi
        push eax
        lea edx, [esp + 0x84]
        push edx
        mov byte ptr [esp + 0x100], 6
        call esi
        mov esi, dword ptr [esp + 0x108]
        push offset mem_00990370
        push eax
        push esi
        mov byte ptr [esp + 0x10c], 7
        call dword ptr [mem_00924ECC]
        add esp, 0x30
        lea ecx, [esp + 0x64]
        mov dword ptr [esp + 0xc], 1
        mov byte ptr [esp + 0xdc], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x9c]
        mov byte ptr [esp + 0xdc], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xdc], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0xdc], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xdc], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0xdc], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb8]
        mov byte ptr [esp + 0xdc], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0xd4]
        pop edi
        pop ebp
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xd4
        ret
    }
}

// [0x006A4CE0] sub_006A4CE0 (468 bytes)
extern "C" int mem_00AA7D90;
extern "C" int mem_00AA4B90;
extern "C" __declspec(naked) void __fastcall fn_006A4CE0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr [ebp + 0x1c]
        sub edx, 0x6
        xor eax, eax
        cmp edx, eax
        push esi
        push edi
        jle L_6a4d01
        mov esi, dword ptr [esp + 0x38]
        mov ecx, edx
        lea edi, [esp + 0x14]
        rep movsd
    L_6a4d01:
        xor ecx, ecx
        cmp edx, eax
        mov dword ptr [esp + 0x38], eax
        jle L_6a4d4d
        mov esi, 0x8
    L_6a4d10:
        mov edi, dword ptr [esp + 0x38]
        cmp edi, dword ptr [ebp + 0x1c]
        ja L_6a4d4d
        cmp ecx, edx
        jge L_6a4d3a
        __emit 0x8d
        __emit 0x49
        __emit 0x00
    L_6a4d20:
        cmp eax, 0x4
        jge L_6a4d3d
        mov ebx, dword ptr [esp + 4*ecx + 0x14]
        lea edi, [esi + eax]
        add ecx, 0x1
        add eax, 0x1
        cmp ecx, edx
        mov dword ptr [ebp + 4*edi], ebx
        jl L_6a4d20
    L_6a4d3a:
        cmp eax, 0x4
    L_6a4d3d:
        jne L_6a4d49
        add dword ptr [esp + 0x38], 0x1
        add esi, 0x4
        xor eax, eax
    L_6a4d49:
        cmp ecx, edx
        jl L_6a4d10
    L_6a4d4d:
        mov ecx, dword ptr [esp + 0x38]
        cmp ecx, dword ptr [ebp + 0x1c]
        ja L_6a4eaa
        mov esi, offset mem_00AA7D90
        jmp L_6a4d65
    L_6a4d61:
        mov esi, dword ptr [esp + 0x10]
    L_6a4d65:
        movzx edi, byte ptr [esp + 4*edx + 0x11]
        mov cl, byte ptr [esp + 0x14]
        xor cl, byte ptr mem_00AA4B90[edi]
        add esi, 0x4
        mov byte ptr [esp + 0x14], cl
        movzx edi, byte ptr [esp + 4*edx + 0x12]
        movzx ebx, byte ptr mem_00AA4B90[edi]
        xor byte ptr [esp + 0x15], bl
        movzx edi, byte ptr [esp + 4*edx + 0x13]
        movzx ebx, byte ptr mem_00AA4B90[edi]
        xor byte ptr [esp + 0x16], bl
        movzx edi, byte ptr [esp + 4*edx + 0x10]
        xor cl, byte ptr [esi - 0x4]
        movzx ebx, byte ptr mem_00AA4B90[edi]
        xor byte ptr [esp + 0x17], bl
        cmp edx, 0x8
        mov byte ptr [esp + 0x14], cl
        mov dword ptr [esp + 0x10], esi
        mov ecx, 0x1
        je L_6a4de1
        cmp edx, ecx
        jle L_6a4e50
        jmp L_6a4dd0
        __emit 0x8d
        __emit 0x9b
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_6a4dd0:
        mov esi, dword ptr [esp + 4*ecx + 0x10]
        xor dword ptr [esp + 4*ecx + 0x14], esi
        add ecx, 0x1
        cmp ecx, edx
        jl L_6a4dd0
        jmp L_6a4e50
    L_6a4de1:
        mov esi, dword ptr [esp + 4*ecx + 0x10]
        xor dword ptr [esp + 4*ecx + 0x14], esi
        add ecx, 0x1
        cmp ecx, 0x4
        jl L_6a4de1
        movzx ecx, byte ptr [esp + 0x20]
        movzx ecx, byte ptr mem_00AA4B90[ecx]
        xor byte ptr [esp + 0x24], cl
        movzx ecx, byte ptr [esp + 0x21]
        movzx ecx, byte ptr mem_00AA4B90[ecx]
        xor byte ptr [esp + 0x25], cl
        movzx ecx, byte ptr [esp + 0x22]
        movzx ecx, byte ptr mem_00AA4B90[ecx]
        xor byte ptr [esp + 0x26], cl
        movzx ecx, byte ptr [esp + 0x23]
        movzx ecx, byte ptr mem_00AA4B90[ecx]
        xor byte ptr [esp + 0x27], cl
        mov ecx, 0x5
        jmp L_6a4e40
        __emit 0x8d
        __emit 0xa4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        nop
    L_6a4e40:
        mov esi, dword ptr [esp + 4*ecx + 0x10]
        xor dword ptr [esp + 4*ecx + 0x14], esi
        add ecx, 0x1
        cmp ecx, 0x8
        jl L_6a4e40
    L_6a4e50:
        xor ecx, ecx
        test edx, edx
        jle L_6a4e9d
        mov esi, dword ptr [esp + 0x38]
        lea esi, [4*esi + 0x8]
    L_6a4e61:
        mov edi, dword ptr [esp + 0x38]
        cmp edi, dword ptr [ebp + 0x1c]
        ja L_6a4e9d
        cmp ecx, edx
        jge L_6a4e8a
        mov edi, edi
    L_6a4e70:
        cmp eax, 0x4
        jge L_6a4e8d
        mov ebx, dword ptr [esp + 4*ecx + 0x14]
        lea edi, [esi + eax]
        add ecx, 0x1
        add eax, 0x1
        cmp ecx, edx
        mov dword ptr [ebp + 4*edi], ebx
        jl L_6a4e70
    L_6a4e8a:
        cmp eax, 0x4
    L_6a4e8d:
        jne L_6a4e99
        add dword ptr [esp + 0x38], 0x1
        add esi, 0x4
        xor eax, eax
    L_6a4e99:
        cmp ecx, edx
        jl L_6a4e61
    L_6a4e9d:
        mov ecx, dword ptr [esp + 0x38]
        cmp ecx, dword ptr [ebp + 0x1c]
        jbe L_6a4d61
    L_6a4eaa:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x4
    }
}

// [0x006A5740] sub_006A5740 (287 bytes)
extern "C" void ext_006A4CE0();
extern "C" void ext_006A4EC0();

extern "C" __declspec(naked) void __fastcall fn_006A5740(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x20
        cmp eax, 0x1
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x1
        je L_store
        test eax, eax
        je L_store
        cmp eax, 0x2
        je L_store
        or eax, -0x1
        pop esi
        add esp, 0x20
        ret 0x14
    L_store:
        mov dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esp + 0x2c]
        test eax, eax
        je L_chk2_ok
        cmp eax, 0x1
        je L_chk2_ok
        mov eax, 0xfffffffe
        pop esi
        add esp, 0x20
        ret 0x14
    L_chk2_ok:
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr [esi + 0x8], eax
        xor eax, eax
        test ecx, ecx
        je L_zero16
    L_copy16:
        mov dl, byte ptr [eax + ecx]
        mov byte ptr [esi + eax + 0xc], dl
        add eax, 0x1
        cmp eax, 0x10
        jl L_copy16
        jmp L_switch
    L_zero16:
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x18], eax
    L_switch:
        mov eax, dword ptr [esp + 0x34]
        sub eax, 0x0
        je L_mode0
        sub eax, 0x1
        je L_mode1
        sub eax, 0x1
        je L_mode2
        mov eax, 0xfffffffd
        pop esi
        add esp, 0x20
        ret 0x14
    L_mode2:
        mov ecx, 0x20
        mov dword ptr [esi + 0x1c], 0xe
        jmp L_have_ptr
    L_mode1:
        mov ecx, 0x18
        mov dword ptr [esi + 0x1c], 0xc
        jmp L_have_ptr
    L_mode0:
        mov ecx, 0x10
        mov dword ptr [esi + 0x1c], 0xa
    L_have_ptr:
        push edi
        mov edi, dword ptr [esp + 0x34]
        test edi, edi
        jne L_copy_buf
        pop edi
        mov eax, 0xfffffffc
        pop esi
        add esp, 0x20
        ret 0x14
    L_copy_buf:
        xor eax, eax
        test ecx, ecx
        jbe L_call1
        push ebx
    L_cpy_loop:
        mov ebx, eax
        mov edx, eax
        and ebx, 0x3
        mov dword ptr [esp + 0x30], ecx
        mov cl, byte ptr [eax + edi]
        shr edx, 0x2
        lea ebx, [esp + ebx + 0xc]
        mov byte ptr [ebx + 4 * edx], cl
        mov ecx, dword ptr [esp + 0x30]
        add eax, 0x1
        cmp eax, ecx
        jb L_cpy_loop
        pop ebx
    L_call1:
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_006A4CE0
        cmp dword ptr [esi + 0x8], 0x1
        jne L_done
        mov ecx, esi
        call ext_006A4EC0
    L_done:
        pop edi
        mov dword ptr [esi], 0x0
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 0x14
    }
}

// [0x006A2D90] sub_006A2D90 (469 bytes)
extern "C" void ext_006A2940();
extern "C" void ext_006A2B10();
extern "C" int mem_009251C4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006A2D90(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push    -0x1
        push    0x8b6e7e
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0xc8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        call    dword ptr [mem_009251C4]
        lea     edi, [esi + 0xc]
        mov     ecx, edi
        mov     dword ptr [esp + 0xe0], 0x0
        mov     dword ptr [esi], 0x928ef0
        call    dword ptr [mem_00924FE8]
        lea     ecx, [esi + 0x28]
        mov     dword ptr [esp + 0xe0], 0x1
        mov     dword ptr [esi], 0x98cc20
        call    dword ptr [mem_00924FE8]
        push    0x98cc00
        lea     ecx, [esp + 0xc0]
        mov     byte ptr [esp + 0xe4], 0x2
        call    dword ptr [mem_00924FE4]
        mov     ebx, eax
        push    0x9903b4
        lea     ecx, [esp + 0x88]
        mov     byte ptr [esp + 0xe4], 0x3
        call    dword ptr [mem_00924FE4]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0xf0]
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     byte ptr [esp + 0xe8], 0x4
        call    ext_006A2940
        push    ebp
        mov     ebp, dword ptr [mem_00924FD0]
        push    eax
        lea     edx, [esp + 0x40]
        push    edx
        mov     byte ptr [esp + 0xf4], 0x5
        call    ebp
        mov     ecx, dword ptr [esp + 0x100]
        push    ecx
        push    eax
        lea     edx, [esp + 0x30]
        push    edx
        mov     byte ptr [esp + 0x100], 0x6
        call    ebp
        push    ebx
        push    eax
        lea     eax, [esp + 0xc8]
        push    eax
        mov     byte ptr [esp + 0x10c], 0x7
        call    ebp
        mov     ecx, eax
        mov     edx, dword ptr [esp + 0x114]
        mov     bl, 0x8
        push    edx
        mov     byte ptr [esp + 0x110], bl
        call    ext_006A2B10
        push    eax
        push    ecx
        lea     eax, [esp + 0xa0]
        push    eax
        call    dword ptr [mem_00924ECC]
        add     esp, 0x3c
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0xe4], 0x9
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0xe0], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xa0]
        mov     byte ptr [esp + 0xe0], 0x7
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0xe0], 0x6
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0xe0], 0x5
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x4c]
        mov     byte ptr [esp + 0xe0], 0x4
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x84]
        mov     byte ptr [esp + 0xe0], 0x3
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0xbc]
        mov     byte ptr [esp + 0xe0], 0x2
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0xd8]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0xd4
        ret     0xc
    }
}

extern "C" void ext_006A5FF2();
extern "C" void ext_006A6310();
extern "C" void ext_006A63B8();
extern "C" void ext_006A6784();
extern "C" void ext_006A6790();
extern "C" void ext_006AA890();
extern "C" void ext_0087273C();
extern "C" void ext_0087275A();
extern "C" void ext_0087276C();
extern "C" void ext_0087278A();
extern "C" void ext_006A60EE();
extern "C" int mem_009242FC;
extern "C" int mem_009242F4;

// [0x006AB200] sub_006AB200 (521 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AB200(void* self) {
    __asm {
        push    -0x1
        push    0x8b739e
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esi], 0x990bb4
        mov     ecx, dword ptr [esi + 0x174]
        test    ecx, ecx
        mov     dword ptr [esp + 0x28], 0x8
        je      loc_6AB243
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x4]
        push    0x1
        call    edx
loc_6AB243:
        lea     ecx, [esi + 0xdc]
        call    ext_006A63B8
        mov     ecx, esi
        call    ext_006AA890
        mov     eax, dword ptr [esi + 0xbc]
        neg     eax
        sbb     eax, eax
        mov     dword ptr [esp + 0x14], eax
        je      loc_6AB2BB
        lea     edi, [esi + 0xb0]
        mov     bl, 0x9
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
loc_6AB270:
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242FC]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x34], bl
        call    ext_0087275A
        mov     ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        je      loc_6AB2A5
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x4]
        push    0x1
        call    edx
loc_6AB2A5:
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x28], 0x8
        call    dword ptr [mem_009242F4]
        cmp     dword ptr [esp + 0x14], 0x0
        jne     loc_6AB270
loc_6AB2BB:
        lea     ebp, [esi + 0xb0]
        mov     ecx, ebp
        call    ext_0087278A
        xor     edi, edi
        cmp     dword ptr [esi + 0xa4], edi
        jle     loc_6AB309
loc_6AB2D2:
        test    edi, edi
        jl      loc_6AB404
        cmp     edi, dword ptr [esi + 0xa4]
        jge     loc_6AB404
        mov     eax, dword ptr [esi + 0xa0]
        mov     ecx, dword ptr [eax + 4*edi]
        test    ecx, ecx
        lea     eax, [eax + 4*edi]
        je      loc_6AB2FE
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx]
        push    0x1
        call    eax
loc_6AB2FE:
        add     edi, 0x1
        cmp     edi, dword ptr [esi + 0xa4]
        jl      loc_6AB2D2
loc_6AB309:
        push    -0x1
        lea     ebx, [esi + 0x9c]
        push    0x0
        mov     ecx, ebx
        call    ext_006A6790
        xor     edi, edi
        cmp     dword ptr [esi + 0x90], edi
        jle     loc_6AB35B
loc_6AB324:
        test    edi, edi
        jl      loc_6AB404
        cmp     edi, dword ptr [esi + 0x90]
        jge     loc_6AB404
        mov     ecx, dword ptr [esi + 0x8c]
        lea     eax, [ecx + 4*edi]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        je      loc_6AB350
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x4]
        push    0x1
        call    eax
loc_6AB350:
        add     edi, 0x1
        cmp     edi, dword ptr [esi + 0x90]
        jl      loc_6AB324
loc_6AB35B:
        lea     ecx, [esi + 0x108]
        mov     byte ptr [esp + 0x28], 0x7
        call    ext_0087276C
        lea     ecx, [esi + 0xdc]
        mov     byte ptr [esp + 0x28], 0x6
        mov     dword ptr [ecx], 0x92a23c
        call    ext_006A5FF2
        lea     ecx, [esi + 0xd4]
        mov     byte ptr [esp + 0x28], 0x5
        mov     dword ptr [ecx], 0x92a23c
        call    ext_006A5FF2
        lea     ecx, [esi + 0xcc]
        mov     byte ptr [esp + 0x28], 0x4
        mov     dword ptr [ecx], 0x92a23c
        call    ext_006A5FF2
        mov     ecx, ebp
        mov     byte ptr [esp + 0x28], 0x3
        call    ext_0087273C
        mov     ecx, ebx
        mov     byte ptr [esp + 0x28], 0x2
        call    ext_006A6784
        lea     ecx, [esi + 0x88]
        mov     byte ptr [esp + 0x28], 0x1
        call    ext_006A6784
        lea     ecx, [esi + 0x74]
        mov     byte ptr [esp + 0x28], 0x0
        call    ext_006A6784
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    ext_006A6310
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x1c
        ret
loc_6AB404:
        jmp     ext_006A60EE
    }
}

// [0x006AB4F0] sub_006AB4F0 (532 bytes)
extern "C" void ext_006A63BE();
extern "C" void ext_006AA1B0();
extern "C" void ext_006AAA10();
extern "C" void ext_006ACE40();
extern "C" void ext_006ACE90();
extern "C" void ext_006ACF00();
extern "C" void ext_006AEC60();
extern "C" void ext_006AF3E0();
extern "C" void ext_006AF840();
extern "C" void ext_006B2AB0();
extern "C" int mem_00925628;
extern "C" int mem_0092566C;

extern "C" __declspec(naked) void __fastcall fn_006AB4F0(void* self) {
    __asm {
        sub     esp, 0x50
        push    ebx
        mov     ebx, dword ptr [esp + 0x58]
        push    ebp
        push    esi
        push    edi
        push    ebx
        mov     esi, ecx
        call    ext_006AA1B0
        mov     edi, eax
        test    edi, edi
        je      loc_6AB6AD
        push    edi
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    ext_006AAA10
        call    ext_006AEC60
        push    eax
        mov     ecx, edi
        call    ext_006A63BE
        test    eax, eax
        je      loc_6AB572
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], edx
        lea     eax, [esp + 0x60]
        push    eax
        mov     ecx, edi
        call    ext_006AF3E0
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x20], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x24], edx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x28], ecx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x2c], edx
loc_6AB572:
        mov     ecx, dword ptr [esi + 0xe4]
        mov     eax, dword ptr [esi + 0xec]
        add     eax, ecx
        mov     ecx, dword ptr [ebx]
        cmp     ecx, eax
        jl      loc_6AB5CF
        add     eax, 0x2
        cmp     ecx, eax
        jg      loc_6AB5CF
        cmp     byte ptr [esi + 0xf5], 0x0
        jne     loc_6AB5AB
        call    ext_006AEC60
        push    eax
        mov     ecx, edi
        call    ext_006A63BE
        test    eax, eax
        jne     loc_6AB6F5
loc_6AB5AB:
        call    ext_006B2AB0
        push    eax
        mov     ecx, edi
        call    ext_006A63BE
        test    eax, eax
        jne     loc_6AB6F5
        mov     eax, 0x16
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
loc_6AB5CF:
        call    ext_006AEC60
        push    eax
        mov     ecx, edi
        call    ext_006A63BE
        test    eax, eax
        mov     ebp, dword ptr [mem_00925628]
        je      loc_6AB616
        mov     edx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebx]
        push    edx
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    ebp
        test    eax, eax
        je      loc_6AB616
        mov     ecx, edi
        call    ext_006AF840
        test    al, al
        je      loc_6AB6F5
        mov     eax, 0x17
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
loc_6AB616:
        mov     edx, dword ptr [esi + 0xec]
        mov     eax, dword ptr [esi + 0xe4]
        lea     ecx, [edx + eax + 0x2]
        cmp     dword ptr [ebx], ecx
        jle     loc_6AB64E
        call    ext_006AEC60
        push    eax
        mov     ecx, edi
        call    ext_006A63BE
        test    eax, eax
        jne     loc_6AB6F5
        mov     eax, 0x18
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
loc_6AB64E:
        mov     ecx, edi
        call    ext_006ACF00
        test    al, al
        je      loc_6AB6F5
        push    edi
        lea     edx, [esp + 0x34]
        push    edx
        mov     ecx, esi
        call    ext_006AAA10
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, edi
        call    ext_006ACE40
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, edi
        call    ext_006ACE90
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ebx]
        push    ecx
        push    edx
        lea     eax, [esp + 0x58]
        push    eax
        call    ebp
        test    eax, eax
        je      loc_6AB6F5
        mov     eax, 0x1a
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
loc_6AB6AD:
        cmp     byte ptr [esi + 0xf6], 0x0
        je      loc_6AB6F5
        mov     edx, dword ptr [esi + 0x20]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        call    dword ptr [mem_0092566C]
        mov     eax, dword ptr [esp + 0x2c]
        sub     eax, dword ptr [esi + 0xf8]
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [esp + 0x24], eax
        add     eax, 0x6
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [ebx + 0x4]
        push    eax
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    dword ptr [mem_00925628]
        test    eax, eax
        mov     eax, 0x19
        jne     loc_6AB6FA
loc_6AB6F5:
        mov     eax, 0x1
loc_6AB6FA:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x4
    }
}

// [0x006ABDF0] sub_006ABDF0 (54 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006AA1B0();
extern "C" void ext_006AB4F0();

extern "C" void __fastcall fn_006ABDF0(void* self, int edx_unused, int a1, int a2, int a3) {
    ((void (__thiscall*)(void*, int*))ext_006AB4F0)(self, &a2);
    void* obj = ((void* (__thiscall*)(void*, int*))ext_006AA1B0)(self, &a2);
    if (obj) {
        (*(void (__thiscall**)(void*, int*))(*(int*)obj + 0x2c))(obj, &a2);
    }
    ((void (__thiscall*)(void*))ext_006A5EA8)(self);
}

// [0x006AB7C0] sub_006AB7C0 (63 bytes)
extern "C" void __fastcall fn_006AB7C0(void* self, int edx_unused, int a1, int a2, int a3) {
    ((void (__thiscall*)(void*, int*))ext_006AB4F0)(self, &a2);
    void* obj = ((void* (__thiscall*)(void*, int*))ext_006AA1B0)(self, &a2);
    if (obj) {
        (*(void (__thiscall**)(void*, void*, int, int))(*(int*)self + 0x168))(self, obj, a2, a3);
    }
    ((void (__thiscall*)(void*))ext_006A5EA8)(self);
}

// [0x006AB710] sub_006AB710 (176 bytes)
extern "C" void ext_006A5EDE();
extern "C" int mem_00925718;
extern "C" int mem_0092571C;
extern "C" int mem_00925704;

extern "C" __declspec(naked) void __fastcall fn_006AB710(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x8
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call dword ptr [mem_00925718]
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esp + 0x4]
        push ecx
        push edx
        call dword ptr [mem_0092570C]
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        call ext_006AB4F0
        cmp eax, 0x16
        jne loc_6ab766
        call ext_006A5EDE
        push 0x7f84
        push 0x0
        call dword ptr [mem_0092571C]
        push eax
        call dword ptr [mem_00925704]
loc_6ab75a:
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret 0xc
loc_6ab766:
        cmp eax, 0x19
        jne loc_6ab790
        call ext_006A5EDE
        push 0x7f85
        push 0x0
        call dword ptr [mem_0092571C]
        push eax
        call dword ptr [mem_00925704]
        mov eax, 0x1
        pop esi
        add esp, 0x8
        ret 0xc
loc_6ab790:
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, esi
        call ext_006AA1B0
        test eax, eax
        je loc_6ab7b2
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x24]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
        test eax, eax
        jne loc_6ab75a
loc_6ab7b2:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 0x8
        ret 0xc
    }
}


// [0x006AA2E0] sub_006AA2E0 (535 bytes)
extern "C" void ext_0046C090();
extern "C" void ext_006A680E();
extern "C" void ext_006A88A0();
extern "C" void ext_006A8980();
extern "C" void ext_006A9210();
extern "C" void ext_006ACE20();
extern "C" void ext_006ACF10();
extern "C" void ext_006ACFC0();
extern "C" void ext_006AD120();
extern "C" int mem_009256CC;
extern "C" int mem_00925710;
extern "C" int mem_00925668;
extern "C" int mem_0092557C;
extern "C" int mem_00925580;

extern "C" __declspec(naked) void __fastcall fn_006AA2E0(void* self) {
    __asm {
        sub esp, 0x3c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x108]
        xor ebp, ebp
        cmp edi, ebp
        je L_exit
        cmp dword ptr [edi + 0x20], ebp
        je L_exit
        lea eax, [esp + 0x20]
        push eax
        call ext_006A9210
        mov ecx, dword ptr [esp + 0x2c]
        sub ecx, dword ptr [esp + 0x24]
        je L_exit
        mov ecx, esi
        call ext_006A88A0
        mov edx, dword ptr [esp + 0x2c]
        sub edx, dword ptr [esp + 0x24]
        mov ebx, eax
        mov eax, dword ptr [esi + 0xe8]
        imul eax, ebx
        cmp eax, edx
        jle L_38e
        mov ecx, dword ptr [esi + 0x128]
        push ecx
        call dword ptr [mem_009256CC]
        test eax, eax
        jne L_36b
        mov edx, dword ptr [esi + 0x128]
        push 1
        push 2
        push edx
        call dword ptr [mem_00925710]
        mov eax, dword ptr [esi + 0x20]
        push 0x105
        push ebp
        push ebp
        push eax
        call dword ptr [mem_00925668]
    L_36b:
        mov eax, dword ptr [esp + 0x2c]
        sub eax, dword ptr [esp + 0x24]
        add ebx, -1
        cdq
        idiv dword ptr [esi + 0xe8]
        push 1
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x40], ebx
        push ecx
        mov dword ptr [esp + 0x48], eax
        jmp L_3d0
    L_38e:
        mov edx, dword ptr [esi + 0x128]
        push edx
        call dword ptr [mem_009256CC]
        test eax, eax
        je L_3ed
        mov eax, dword ptr [esi + 0x128]
        push ebp
        push 2
        push eax
        call dword ptr [mem_00925710]
        mov ecx, dword ptr [esi + 0x128]
        push 1
        push ebp
        push 2
        push ecx
        call dword ptr [mem_0092557C]
        push 1
        lea edx, [esp + 0x34]
        mov dword ptr [esp + 0x40], ebp
        mov dword ptr [esp + 0x44], ebp
        push edx
    L_3d0:
        push 2
        mov ecx, edi
        mov dword ptr [esp + 0x3c], 0x1c
        mov dword ptr [esp + 0x44], ebp
        mov dword ptr [esp + 0x40], 3
        call ext_006A680E
    L_3ed:
        mov eax, dword ptr [esi + 0x58]
        xor edi, edi
        cmp eax, ebp
        je L_409
    L_3f6:
        cmp eax, dword ptr [esi + 0x68]
        je L_409
        mov ecx, eax
        call ext_006AD120
        add edi, 1
        cmp eax, ebp
        jne L_3f6
    L_409:
        mov eax, dword ptr [esi + 0x128]
        push 2
        push eax
        call dword ptr [mem_00925580]
        cmp edi, eax
        je L_42e
        mov ecx, dword ptr [esi + 0x128]
        push 1
        push edi
        push 2
        push ecx
        call dword ptr [mem_0092557C]
    L_42e:
        mov edi, dword ptr [esi + 0x54]
        cmp edi, ebp
        je L_exit
        mov ecx, edi
        call ext_006ACFC0
        test al, al
        je L_exit
        lea edx, [esp + 0x10]
        push edx
        mov ecx, edi
        call ext_006ACE20
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 0x2c]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0xc], edx
        lea eax, [esp + 0x40]
        push eax
        mov ecx, edi
        call ext_006ACF10
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x14], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 0x18], ecx
        mov edx, dword ptr [eax + 0xc]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_0046C090
        cmp eax, ebp
        je L_exit
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, ebp
        jl L_4e8
        mov ebx, dword ptr [esp + 0x1c]
        cmp ebx, dword ptr [esp + 0x2c]
        jg L_4e8
        mov ebp, dword ptr [eax]
        push edi
        mov edi, dword ptr [esp + 0x14]
        sub esp, 0x10
        mov edx, esp
        mov dword ptr [edx], edi
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [edx + 8], ecx
        mov dword ptr [edx + 0xc], ebx
        mov edx, dword ptr [ebp + 0x14]
        mov ecx, eax
        call edx
        mov dword ptr [esi + 0x100], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3c
        ret
    L_4e8:
        mov ecx, esi
        call ext_006A8980
    L_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3c
        ret
    }
}

// [0x006AAC20] sub_006AAC20 (108 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006AA2E0();
extern "C" void ext_006A9190();
extern "C" void __fastcall fn_006AAC20(void* self) {
    ((void (__thiscall*)(void*))ext_006A5EA8)(self);
    if (*((unsigned char*)self + 0x170) != 0) {
        return;
    }
    void* p = (char*)self + 0x108;
    *((unsigned char*)self + 0x170) = 1;
    if (p != 0 && *((int*)((char*)p + 0x20)) != 0) {
        return;
    }
    {
        int buf[4] = { 0, 0, 0, 0 };
        ((void (__thiscall*)(void*, int, int*, void*, int))(*(void***)p)[0x13c / 4])(p, 0x40000005, buf, self, 0x3e8);
    }
    ((void (__thiscall*)(void*))ext_006AA2E0)(self);
    ((void (__thiscall*)(void*))ext_006A9190)(self);
}

// [0x006AB410] sub_006AB410 (220 bytes)
extern "C" void ext_006A7C30();
extern "C" void ext_006A9190();
extern "C" void ext_006AA2E0();
extern "C" void ext_006AA500();
extern "C" void ext_006AAAD0();
extern "C" int mem_0092564C;
extern "C" int mem_00925580;
extern "C" int mem_00925688;

extern "C" void __fastcall fn_006AB410(void* self, int edx_unused, int x, int y) {
    char* s = (char*)self;
    void* p = *(void**)(s + 0x5c);
    if (p) {
        if (s[0xfc] != 0) {
            y -= 0x1c;
        }
        if (s[0xf6] != 0) {
            y -= *(int*)(s + 0xf8);
        }
        int idx = y / *(int*)(s + 0xe8);
        int rc[4];
        ((void (__thiscall*)(void*, int*, void*))ext_006AAAD0)(self, rc, p);
        if (s[0xfc] != 0) {
            ((void (__stdcall*)(int*, int, int))mem_0092564C)(rc, 0, -0x1c);
        }
        char* sb = s + 0x108;
        if (sb != 0 && *(int*)(sb + 0x20) != 0) {
            int n = ((int (__thiscall*)(void*))ext_006AA500)(self);
            idx -= n;
            ((int (__stdcall*)(int, int))mem_00925580)(*(int*)(s + 0x128), 2);
            if (rc[3] < y && idx > 0) {
                do {
                    int next = ((int (__thiscall*)(void*, int))ext_006A7C30)(self, *(int*)(s + 0x68));
                    if (!next) {
                        break;
                    }
                    *(int*)(s + 0x68) = next;
                    idx--;
                } while (idx > 0);
            }
        }
    }
    ((void (__thiscall*)(void*))ext_006AA2E0)(self);
    ((void (__thiscall*)(void*))ext_006A9190)(self);
    char* w = *(char**)(s + 0x100);
    if (w) {
        ((void (__stdcall*)(int, int, int))mem_00925688)(*(int*)(w + 0x20), 0, 1);
    }
}

// [0x006A30C0] sub_006A30C0 (316 bytes)
extern "C" void ext_0067F6C0();
extern "C" void ext_006A2940();
extern "C" int mem_009251C4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006A30C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -0x1
        push 0x8b6ed1
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_009251C4]
        lea edi, [esi + 0xc]
        mov ecx, edi
        mov dword ptr [esp + 0x8c], 0x0
        mov dword ptr [esi], 0x928ef0
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x8c], 0x1
        mov dword ptr [esi], 0x98cc20
        call dword ptr [mem_00924FE8]
        mov ebp, dword ptr [esp + 0x98]
        lea eax, [esp + 0x68]
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x90], 0x2
        call ext_0067F6C0
        mov ebx, eax
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx + 0x1c]
        push edx
        lea eax, [esp + 0x50]
        push eax
        mov byte ptr [esp + 0x94], 0x3
        call ext_006A2940
        mov ebp, dword ptr [mem_00924FD0]
        push ebx
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov byte ptr [esp + 0xa0], 0x4
        call ebp
        mov edx, dword ptr [esp + 0xa8]
        push edx
        push eax
        lea eax, [esp + 0x30]
        mov bl, 0x5
        push eax
        mov byte ptr [esp + 0xac], bl
        call ebp
        add esp, 0x20
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x90], 0x6
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x8c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x8c], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x8c], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x8c], 0x2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x84]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x80
        ret 0x8
    }
}

// [0x006AC1D0] sub_006AC1D0 (81 bytes)
extern "C" void ext_006AB410();
extern "C" int mem_00925688;
extern "C" int mem_0092566C;

struct RECT_006AC1D0 {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" void __fastcall fn_006AC1D0(char* self, int edx_unused, unsigned char val) {
    self[0xf6] = val;
    if (*(void**)(self + 0x20)) {
        ((int (__stdcall*)(void*, void*, int))mem_00925688)(*(void**)(self + 0x20), 0, 1);
        RECT_006AC1D0 rc;
        ((int (__stdcall*)(void*, RECT_006AC1D0*))mem_0092566C)(*(void**)(self + 0x20), &rc);
        ((void (__thiscall*)(void*, int, int))ext_006AB410)(self, rc.right - rc.left, rc.bottom - rc.top);
    }
}

// [0x006AC2E0] sub_006AC2E0 (89 bytes)
extern "C" void ext_006AB410();
extern "C" int mem_00925584;
extern "C" int mem_0092566C;
extern "C" int mem_00925668;
extern "C" __declspec(naked) void __fastcall fn_006AC2E0(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        push 0x0
        mov byte ptr [esi + 0x198], 0x0
        call dword ptr [mem_00925584]
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        mov edx, dword ptr [esp + 0x10]
        sub edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0xc]
        sub eax, dword ptr [esp + 0x4]
        push edx
        push eax
        mov ecx, esi
        call ext_006AB410
        mov esi, dword ptr [esi + 0x20]
        test esi, esi
        je done
        push 0x105
        push 0x0
        push 0x0
        push esi
        call dword ptr [mem_00925668]
    done:
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x006AC230] sub_006AC230 (163 bytes)
extern "C" int mem_0092566C;
extern "C" int mem_00925688;
extern "C" void ext_006AB410();

typedef int (__stdcall *GetClientRectFn006AC230)(void* hwnd, void* rect);
typedef int (__stdcall *InvalidateRectFn006AC230)(void* hwnd, void* rect, int erase);

struct Rect006AC230 { int left, top, right, bottom; };

extern "C" __declspec(naked) void __fastcall fn_006AC230(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp edi, 0x14
        mov esi, ecx
        jge L_006AC230_a
        mov edi, 0x14
    L_006AC230_a:
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        jne L_006AC230_b
    L_006AC230_store:
        mov dword ptr [esi + 0xf8], edi
        mov eax, edi
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    L_006AC230_b:
        lea ecx, [esp + 0x8]
        push ecx
        push eax
        call dword ptr [mem_0092566C]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, eax
        sub edx, ecx
        je L_006AC230_store
        mov dl, byte ptr [esi + 0xfc]
        neg dl
        sbb edx, edx
        and edx, 0x1c
        sub eax, edx
        sub eax, ecx
        add eax, -0x14
        cmp edi, eax
        jle L_006AC230_c
        mov edi, eax
    L_006AC230_c:
        cmp dword ptr [esi + 0xf8], edi
        je L_006AC230_end
        mov eax, dword ptr [esi + 0x20]
        push 0x1
        push 0x0
        push eax
        mov dword ptr [esi + 0xf8], edi
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esp + 0x14]
        sub ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        sub edx, dword ptr [esp + 0x8]
        push ecx
        push edx
        mov ecx, esi
        call ext_006AB410
    L_006AC230_end:
        mov eax, dword ptr [esi + 0xf8]
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x006AC360] sub_006AC360 (171 bytes)
extern "C" void ext_006A5EA8();
extern "C" void ext_006A6DE0();
extern "C" void ext_006AB410();
extern "C" int mem_009324A4;
extern "C" int mem_00925688;
extern "C" __declspec(naked) void __fastcall fn_006AC360(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EA8
        mov edi, dword ptr [esp + 0x1c]
        test edi, edi
        je L_end_006AC360
        mov eax, dword ptr [esi + 0xf0]
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        jle L_skip1_006AC360
        mov eax, dword ptr [esi + 0xec]
        fld dword ptr [mem_009324A4]
        test eax, eax
        fstp dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x8], eax
        jle L_skip2_006AC360
        fild dword ptr [esp + 0x8]
        fidiv dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x1c]
L_skip2_006AC360:
        fild dword ptr [esp + 0x18]
        fmul dword ptr [esp + 0x1c]
        call ext_006A6DE0
        mov dword ptr [esi + 0xec], eax
L_skip1_006AC360:
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esi + 0xf0], ecx
        je L_skip3_006AC360
        mov edx, dword ptr [esi + 0xe4]
        mov eax, dword ptr [esi + 0xec]
        add eax, edx
        cmp eax, ecx
        jle L_skip3_006AC360
        mov eax, ecx
        sub eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 0xec], eax
L_skip3_006AC360:
        push edi
        push ecx
        mov ecx, esi
        call ext_006AB410
        mov ecx, dword ptr [esi + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
L_end_006AC360:
        pop edi
        pop esi
        add esp, 8
        ret 0xc
    }
}

// [0x006A2B20] sub_006A2B20 (247 bytes)
extern "C" void ext_0069B290();
extern "C" void ext_006A2940();
extern "C" void ext_006A2B10();
extern "C" int mem_009251C4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ED0;
extern "C" __declspec(naked) void __fastcall fn_006A2B20(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        push -1
        push 0x8b6d9c
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_009251C4]
        lea edi, [esi + 0xc]
        mov ecx, edi
        mov dword ptr [esp + 0x70], 0
        mov dword ptr [esi], 0x928ef0
        call dword ptr [mem_00924FE8]
        mov ebp, dword ptr [esp + 0x7c]
        lea eax, [esp + 0x4c]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x74], 1
        mov dword ptr [esi], 0x98fb84
        call ext_0069B290
        mov ebx, eax
        mov ecx, dword ptr [ebp + 0x88]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        mov byte ptr [esp + 0x78], 2
        call ext_006A2940
        push ebx
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov byte ptr [esp + 0x84], 3
        call dword ptr [mem_00924FD0]
        add esp, 0x14
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x74], 4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], 1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x78]
        push ecx
        call ext_006A2B10
        add esp, 4
        push eax
        mov ecx, edi
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x64
        ret 8
    }
}

// [0x006A2F70] sub_006A2F70 (326 bytes)
extern "C" void ext_0067F6C0();
extern "C" void ext_006A2940();
extern "C" void ext_006A2B10();
extern "C" int mem_009251C4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_006A2F70(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b6ed1
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, dword ptr fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr fs:[0], esp
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_009251C4]
        lea edi, [esi + 0x0c]
        mov ecx, edi
        mov dword ptr [esp + 0x8c], 0
        mov dword ptr [esi], 0x928ef0
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x8c], 1
        mov dword ptr [esi], 0x98cc20
        call dword ptr [mem_00924FE8]
        mov ebp, dword ptr [esp + 0x98]
        lea eax, [esp + 0x68]
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x90], 2
        call ext_0067F6C0
        mov ebx, eax
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [ecx + 0x1c]
        push edx
        lea eax, [esp + 0x50]
        push eax
        mov byte ptr [esp + 0x94], 3
        call ext_006A2940
        push ebx
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov byte ptr [esp + 0xa0], 4
        call dword ptr [mem_00924FD0]
        mov ecx, eax
        mov edx, dword ptr [esp + 0xa8]
        mov bl, 5
        push edx
        mov byte ptr [esp + 0xa4], bl
        call ext_006A2B10
        push eax
        push ecx
        lea eax, [esp + 0x34]
        push eax
        call dword ptr [mem_00924ECC]
        add esp, 0x24
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x90], 6
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x8c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x8c], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x8c], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x8c], 2
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x84]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov dword ptr fs:[0], ecx
        add esp, 0x80
        ret 8
    }
}

// [0x006A2C30] sub_006A2C30 (347 bytes)
extern "C" void ext_0069B290();
extern "C" void ext_006A2940();
extern "C" int mem_009251C4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD8;
extern "C" __declspec(naked) void __fastcall fn_006A2C30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b6df7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_009251C4]
        lea edi, [esi + 0xc]
        mov ecx, edi
        mov dword ptr [esp + 0x70], 0x0
        mov dword ptr [esi], 0x928ef0
        call dword ptr [mem_00924FE8]
        mov ebp, dword ptr [esp + 0x7c]
        lea eax, [esp + 0x4c]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x74], 0x1
        mov dword ptr [esi], 0x98fbdc
        call ext_0069B290
        mov ebx, eax
        mov ecx, dword ptr [ebp + 0x88]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        mov byte ptr [esp + 0x78], 0x2
        call ext_006A2940
        mov ebp, dword ptr [mem_00924FD0]
        push ebx
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov byte ptr [esp + 0x84], 0x3
        call ebp
        add esp, 0x14
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x74], 0x4
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], 0x1
        call dword ptr [mem_00924FF4]
        push 0x9903a4
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 0x78]
        push ecx
        push eax
        lea edx, [esp + 0x38]
        push edx
        mov byte ptr [esp + 0x7c], 0x5
        call ebp
        push 0x99038c
        push eax
        lea eax, [esp + 0x60]
        mov bl, 0x6
        push eax
        mov byte ptr [esp + 0x88], bl
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x74], 0x7
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], bl
        call dword ptr [mem_00924FF4]
        mov byte ptr [esp + 0x70], 0x5
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x68]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret 0x8
    }
}

// [0x006A8180] sub_006A8180 (600 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A6370();
extern "C" void ext_006A6376();
extern "C" int mem_009240AC;
extern "C" int mem_0092408C;
extern "C" int mem_009240F8;
extern "C" int mem_009240B0;
extern "C" __declspec(naked) void __fastcall fn_006A8180(void* self) {
    __asm {
        push -1
        push 0x8b7090
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x54]
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x20]
        call ext_006A61A2
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x48], 0
        call ext_006A61A2
        test esi, esi
        mov byte ptr [esp + 0x48], 1
        jne L_a8c8
        xor eax, eax
        jmp L_a8cb
L_a8c8:
        mov eax, dword ptr [esi + 4]
L_a8cb:
        mov ebx, dword ptr [mem_009240AC]
        push eax
        call ebx
        push eax
        lea ecx, [esp + 0x34]
        call ext_006A6190
        xor eax, eax
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x18], 0x92c4ac
        cmp esi, eax
        mov byte ptr [esp + 0x48], 2
        je L_a8f8
        mov eax, dword ptr [esi + 4]
L_a8f8:
        push eax
        call ebx
        push eax
        lea ecx, [esp + 0x24]
        call ext_006A6190
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esp + 0x10], 0x92c4ac
        mov eax, dword ptr [esi + 4]
        push edi
        push ebp
        push eax
        mov byte ptr [esp + 0x54], 3
        call dword ptr [mem_0092408C]
        push eax
        lea ecx, [esp + 0x14]
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        push edx
        call ext_006A6196
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [esp + 0x5c]
        test eax, eax
        je L_a86e
        mov eax, dword ptr [eax + 4]
L_a86e:
        mov ecx, dword ptr [esp + 0x64]
        mov edx, dword ptr [esp + 0x60]
        mov ebx, dword ptr [mem_009240F8]
        push 0xcc0020
        push ecx
        push edx
        push eax
        mov eax, dword ptr [esp + 0x34]
        push edi
        push ebp
        push 0
        push 0
        push eax
        call ebx
        push 0
        push 1
        push 1
        push edi
        push ebp
        call dword ptr [mem_009240B0]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006A5FFE
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x34]
        push ecx
        push edx
        call ext_006A6196
        mov dword ptr [esp + 0x5c], eax
        mov eax, dword ptr [esp + 0x68]
        push eax
        lea ecx, [esp + 0x24]
        call ext_006A6370
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x34]
        push 0xcc0020
        push 0
        push 0
        push ecx
        push edi
        push ebp
        push 0
        push 0
        push edx
        call ebx
        push 0
        lea ecx, [esp + 0x24]
        call ext_006A6370
        push 0xffffff
        lea ecx, [esp + 0x24]
        call ext_006A6376
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x24]
        push 0x8800c6
        push 0
        push 0
        push eax
        push edi
        push ebp
        push 0
        push 0
        push ecx
        call ebx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x34]
        push 0xffffff
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x38]
        push 0
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x54]
        push 0x8800c6
        push 0
        push 0
        push ecx
        push edi
        push ebp
        mov eax, dword ptr [esp + 0x68]
        mov ecx, dword ptr [esi + 4]
        push edx
        push eax
        push ecx
        call ebx
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [esp + 0x50]
        push 0xee0086
        push 0
        push 0
        push edx
        mov edx, dword ptr [esi + 4]
        push edi
        push ebp
        push eax
        push ecx
        push edx
        call ebx
        mov eax, dword ptr [esp + 0x5c]
        test eax, eax
        je L_a8b8
        mov eax, dword ptr [eax + 4]
        push eax
        mov eax, dword ptr [esp + 0x38]
        push eax
        call ext_006A6196
L_a8b8:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je L_a8c0
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [esp + 0x24]
        push eax
        push ecx
        call ext_006A6196
L_a8c0:
        mov esi, 0x92a23c
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x48], 2
        mov dword ptr [esp + 0x10], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x48], 1
        mov dword ptr [esp + 0x18], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x48], 0
        call ext_006A619C
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x48], 0xffffffff
        call ext_006A619C
        mov ecx, dword ptr [esp + 0x40]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret
    }
}

// [0x006A0AC0] sub_006A0AC0 (699 bytes)
extern "C" int mem_00B5CDB0;
extern "C" int mem_00B5CC48;
extern "C" int mem_00B5CA88;
extern "C" int mem_00B5CCC8;
extern "C" int mem_00B5CCCC;
extern "C" int mem_00B5CCD0;
extern "C" int mem_00B5CCD4;
extern "C" int mem_00B5CCD8;
extern "C" int mem_00B5CCDC;
extern "C" int mem_00B5CCE0;
extern "C" int mem_00B5CCE4;
extern "C" int mem_00B5CCE8;
extern "C" int mem_00B5CCEC;
extern "C" int mem_00B5CCF0;
extern "C" int mem_00B5CCF4;
extern "C" int mem_00B5CCF8;
extern "C" int mem_00B5CCFC;
extern "C" int mem_00B5CD00;
extern "C" int mem_00B5CD04;
extern "C" int mem_00B5CD08;
extern "C" int mem_00B5CD0C;
extern "C" int mem_00B5CD10;
extern "C" int mem_00B5CD14;
extern "C" int mem_00B5CD18;
extern "C" int mem_00B5CD1C;
extern "C" int mem_00B5CD20;
extern "C" int mem_00B5CD24;
extern "C" int mem_00B5CD28;
extern "C" int mem_00B5CD2C;
extern "C" int mem_00B5CD30;
extern "C" int mem_00B5CD34;
extern "C" int mem_00B5CD38;
extern "C" int mem_00B5CD3C;
extern "C" int mem_00B5CD40;
extern "C" int mem_00B5CD44;
extern "C" int mem_00B5CD48;
extern "C" int mem_00B5CD4C;
extern "C" int mem_00B5CD50;
extern "C" int mem_00B5CD54;
extern "C" int mem_00B5CD58;
extern "C" int mem_00B5CD5C;
extern "C" int mem_00B5CD60;
extern "C" int mem_00B5CD64;
extern "C" int mem_00B5CD68;
extern "C" int mem_00B5CD6C;
extern "C" int mem_00B5CD70;
extern "C" int mem_00B5CD74;
extern "C" int mem_00B5CD78;
extern "C" int mem_00B5CD7C;
extern "C" int mem_00B5CD80;
extern "C" int mem_00B5CD84;
extern "C" int mem_00B5CD88;
extern "C" int mem_00B5CD8C;
extern "C" int mem_00B5CD90;
extern "C" int mem_00B5CD94;
extern "C" int mem_00B5CD98;
extern "C" int mem_00B5CD9C;
extern "C" int mem_00B5CDA0;
extern "C" int mem_00B5CDA4;
extern "C" int mem_00B5CDA8;
extern "C" int mem_00B5CDAC;
extern "C" int mem_00B5CAF4;
extern "C" int mem_00B5CAF8;
extern "C" int mem_00B5CAD0;
extern "C" int mem_00B5CAD4;

extern "C" __declspec(naked) void __fastcall fn_006A0AC0(void* self) {
    __asm {
        cmp     byte ptr [mem_00B5CDB0], 0
        jne     already_init
        push    esi
        mov     dword ptr [mem_00B5CCC8], 0xaa4A20
        mov     dword ptr [mem_00B5CCCC], 0xaa4A24
        mov     dword ptr [mem_00B5CCD0], 0xaa4A28
        mov     dword ptr [mem_00B5CCD4], 0xaa4A2C
        mov     dword ptr [mem_00B5CCD8], 0xaa4A30
        mov     dword ptr [mem_00B5CCDC], 0xaa4A34
        mov     dword ptr [mem_00B5CCE0], 0xaa4A38
        mov     dword ptr [mem_00B5CCE4], 0xaa4A3C
        mov     dword ptr [mem_00B5CCE8], 0xaa4A40
        mov     dword ptr [mem_00B5CCEC], 0xaa4A44
        mov     dword ptr [mem_00B5CCF0], 0xaa4A48
        mov     dword ptr [mem_00B5CCF4], 0xaa4A4C
        mov     dword ptr [mem_00B5CCF8], 0xaa4A50
        mov     dword ptr [mem_00B5CD00], 0xaa4A5C
        mov     dword ptr [mem_00B5CD04], 0xaa4A60
        mov     dword ptr [mem_00B5CD08], 0xaa4A64
        mov     dword ptr [mem_00B5CD0C], 0xaa4A68
        mov     dword ptr [mem_00B5CD10], 0xaa4A6C
        mov     dword ptr [mem_00B5CCFC], 0xaa4A70
        mov     dword ptr [mem_00B5CD14], 0xaa4A74
        mov     dword ptr [mem_00B5CD18], 0xaa4A78
        mov     dword ptr [mem_00B5CD1C], 0xaa4A7C
        mov     dword ptr [mem_00B5CD20], 0xaa4A80
        mov     dword ptr [mem_00B5CD24], 0xaa4A84
        mov     dword ptr [mem_00B5CD28], 0xaa4A88
        mov     dword ptr [mem_00B5CD2C], 0xaa4A8C
        mov     dword ptr [mem_00B5CD30], 0xaa4A90
        mov     dword ptr [mem_00B5CD34], 0xaa4A94
        mov     dword ptr [mem_00B5CD38], 0xaa4A98
        mov     dword ptr [mem_00B5CD3C], 0xaa4A54
        mov     dword ptr [mem_00B5CD40], 0xaa4A58
        mov     dword ptr [mem_00B5CD44], 0xaa4A9C
        mov     dword ptr [mem_00B5CD48], 0xaa4AA0
        mov     dword ptr [mem_00B5CD4C], 0xaa4AA4
        mov     dword ptr [mem_00B5CD50], 0xaa4AA8
        mov     dword ptr [mem_00B5CD54], 0xaa4AAC
        mov     dword ptr [mem_00B5CD5C], 0xaa4AB0
        mov     dword ptr [mem_00B5CD60], 0xaa4AB4
        mov     dword ptr [mem_00B5CD58], 0xaa4AB8
        mov     dword ptr [mem_00B5CD64], 0xaa4ABC
        mov     dword ptr [mem_00B5CD68], 0xaa4AC0
        mov     dword ptr [mem_00B5CD6C], 0xaa4AC4
        mov     dword ptr [mem_00B5CD70], 0xaa4AC8
        mov     dword ptr [mem_00B5CD74], 0xaa4ACC
        mov     dword ptr [mem_00B5CD78], 0xaa4AD0
        mov     dword ptr [mem_00B5CD7C], 0xaa4AD4
        mov     dword ptr [mem_00B5CD80], 0xaa4AD8
        mov     dword ptr [mem_00B5CD84], 0xaa4ADC
        mov     dword ptr [mem_00B5CD88], 0xaa4AE0
        mov     dword ptr [mem_00B5CD8C], 0xaa4AE4
        mov     dword ptr [mem_00B5CD90], 0xaa4AE8
        mov     dword ptr [mem_00B5CD94], 0xaa4AEC
        mov     dword ptr [mem_00B5CD98], 0xaa4AF0
        mov     dword ptr [mem_00B5CD9C], 0xaa4AF4
        mov     dword ptr [mem_00B5CDA0], 0xaa4AF8
        mov     dword ptr [mem_00B5CDA4], 0xaa4AFC
        mov     dword ptr [mem_00B5CDA8], 0xaa4B00
        mov     dword ptr [mem_00B5CDAC], 0xaa4B04
        xor     esi, esi
    loop_top:
        mov     ecx, dword ptr [esi*4 + mem_00B5CC48]
        test    ecx, ecx
        je      null_slot
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        call    edx
        mov     dword ptr [esi*4 + mem_00B5CA88], eax
        jmp     next_slot
    null_slot:
        mov     dword ptr [esi*4 + mem_00B5CA88], esi
    next_slot:
        add     esi, 1
        cmp     esi, 0x5a
        jl      loop_top
        mov     eax, 0xf
        mov     dword ptr [mem_00B5CAF4], eax
        mov     dword ptr [mem_00B5CAF8], eax
        mov     eax, 0x11
        mov     dword ptr [mem_00B5CAD0], eax
        mov     dword ptr [mem_00B5CAD4], eax
        mov     eax, dword ptr [esp+8]
        mov     eax, dword ptr [eax*4 + mem_00B5CC48]
        mov     byte ptr [mem_00B5CDB0], 1
        pop     esi
        ret
    already_init:
        mov     ecx, dword ptr [esp+4]
        mov     eax, dword ptr [ecx*4 + mem_00B5CC48]
        ret
    }
}

extern "C" void ext_006A5FF2();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A6172();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A8180();
extern "C" void ext_0087277E();
extern "C" int mem_00925680;
extern "C" int mem_009240AC;

// [0x006A8A60] sub_006A8A60 (814 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A8A60(void* self) {
    __asm {
        push    -1
        mov     eax, dword ptr fs:[0]
        push    0x8b70d8
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x40
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925680]
        push    esi
        push    edi
        push    0xf
        mov     ebx, ecx
        call    ebp
        mov     esi, dword ptr [esp + 0x60]
        push    eax
        lea     eax, [esp + 0x68]
        push    eax
        mov     ecx, esi
        call    ext_006A6172
        cmp     byte ptr [ebx + 0x179], 0
        jne     loc_6A8BB7
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0x2c]
        push    6
        mov     ecx, esi
        call    eax
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x64]
        add     ecx, -3
        push    ecx
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    ext_006A6106
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x6c]
        add     ecx, -3
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006A6100
        push    0x16
        call    ebp
        push    eax
        push    1
        push    0
        lea     ecx, [esp + 0x24]
        call    ext_006A6148
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x5c], 0
        call    ext_006A610C
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x64]
        add     ecx, -2
        push    ecx
        mov     edi, eax
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    ext_006A6106
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x6c]
        add     ecx, -2
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006A6100
        push    0x10
        call    ebp
        push    eax
        push    1
        push    0
        lea     ecx, [esp + 0x1c]
        call    ext_006A6148
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x5c], 1
        call    ext_006A610C
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x64]
        add     ecx, -1
        push    ecx
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    ext_006A6106
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x6c]
        add     ecx, -1
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006A6100
        push    edi
        mov     ecx, esi
        call    ext_006A610C
        mov     edi, 0x92a23c
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x58], 0
        mov     dword ptr [esp + 0x10], edi
        call    ext_006A5FF2
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x58], -1
        mov     dword ptr [esp + 0x18], edi
        call    ext_006A5FF2
    loc_6A8BB7:
        cmp     byte ptr [ebx + 0xfd], 0
        je      loc_6A8BFD
        cmp     byte ptr [ebx + 0x168], 0
        jne     loc_6A8BFD
        mov     edi, 2
        push    0xa
        mov     dword ptr [esp + 0x24], 3
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x2c], 0x1a
        mov     dword ptr [esp + 0x30], 0x18
        call    ebp
        push    eax
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    ext_006A6172
        jmp     loc_6A8C02
    loc_6A8BFD:
        mov     edi, 2
    loc_6A8C02:
        cmp     byte ptr [ebx + 0xfd], 0
        jne     loc_6A8C41
        cmp     byte ptr [ebx + 0x169], 0
        jne     loc_6A8C41
        push    0xa
        mov     dword ptr [esp + 0x44], 0x1d
        mov     dword ptr [esp + 0x48], edi
        mov     dword ptr [esp + 0x4c], 0x34
        mov     dword ptr [esp + 0x50], 0x18
        call    ebp
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, esi
        call    ext_006A6172
    loc_6A8C41:
        lea     ecx, [esp + 0x30]
        call    ext_006A61A2
        test    esi, esi
        mov     dword ptr [esp + 0x58], edi
        jne     loc_6A8C56
        xor     eax, eax
        jmp     loc_6A8C59
    loc_6A8C56:
        mov     eax, dword ptr [esi + 4]
    loc_6A8C59:
        push    eax
        call    dword ptr [mem_009240AC]
        push    eax
        lea     ecx, [esp + 0x34]
        call    ext_006A6190
        lea     eax, [ebx + 0xcc]
        test    eax, eax
        je      loc_6A8C77
        mov     eax, dword ptr [eax + 4]
    loc_6A8C77:
        mov     edx, dword ptr [esp + 0x34]
        push    eax
        push    edx
        call    ext_006A6196
        push    0xff00ff
        push    0
        push    0
        mov     dword ptr [esp + 0x6c], eax
        lea     eax, [esp + 0x3c]
        push    eax
        push    0x10
        push    5
        push    6
        mov     edi, 0x10
        mov     ecx, esi
        call    ext_006A8180
        lea     eax, [ebx + 0xd4]
        add     esp, 0x1c
        test    eax, eax
        je      loc_6A8CB6
        mov     eax, dword ptr [eax + 4]
    loc_6A8CB6:
        mov     ecx, dword ptr [esp + 0x34]
        push    eax
        push    ecx
        call    ext_006A6196
        push    0xff00ff
        push    0
        push    0
        lea     edx, [esp + 0x3c]
        push    edx
        push    0x10
        push    5
        push    0x20
        mov     ecx, esi
        call    ext_006A8180
        mov     eax, dword ptr [esp + 0x7c]
        add     esp, 0x1c
        test    eax, eax
        je      loc_6A8CEA
        mov     eax, dword ptr [eax + 4]
    loc_6A8CEA:
        push    eax
        mov     eax, dword ptr [esp + 0x38]
        push    eax
        call    ext_006A6196
        cmp     byte ptr [ebx + 0xfd], 0
        push    0xffffff
        push    0x10
        je      loc_6A8D34
        call    ebp
        push    eax
        push    0x16
        push    0x17
        push    2
        push    3
        mov     ecx, esi
        call    ext_0087277E
        cmp     byte ptr [ebx + 0x169], 0
        je      loc_6A8D68
        push    0x10
        call    ebp
        push    eax
        push    0xffffff
        push    0x16
        push    0x17
        push    2
        push    0x1d
        jmp     loc_6A8D61
    loc_6A8D34:
        call    ebp
        push    eax
        push    0x16
        push    0x17
        push    2
        push    0x1d
        mov     ecx, esi
        call    ext_0087277E
        cmp     byte ptr [ebx + 0x168], 0
        je      loc_6A8D68
        push    0x10
        call    ebp
        push    eax
        push    0xffffff
        push    0x16
        push    0x17
        push    2
        push    3
    loc_6A8D61:
        mov     ecx, esi
        call    ext_0087277E
    loc_6A8D68:
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x58], -1
        call    ext_006A619C
        mov     ecx, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x4c
        ret     0x14
    }
}

// [0x006A5390] sub_006A5390 (942 bytes)
extern "C" int mem_00AA5C90;
extern "C" int mem_00AA6090;
extern "C" int mem_00AA6490;
extern "C" int mem_00AA6890;
extern "C" int mem_00AA6C90;

extern "C" __declspec(naked) void __fastcall fn_006A5390(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x1c]
        lea ecx, [eax + 0x2]
        shl eax, 0x4
        mov edi, dword ptr [eax + esi + 0x2c]
        xor edi, dword ptr [ebx + 0xc]
        mov ebp, dword ptr [eax + esi + 0x28]
        xor ebp, dword ptr [ebx + 0x8]
        mov edx, dword ptr [eax + esi + 0x24]
        xor edx, dword ptr [ebx + 0x4]
        add eax, esi
        mov eax, edi
        shl ecx, 0x4
        mov ecx, dword ptr [ecx + esi]
        xor ecx, dword ptr [ebx]
        shr eax, 0x8
        mov ebx, ebp
        shr ebx, 0x10
        movzx ebx, bl
        movzx eax, al
        mov dword ptr [esp + 0x18], ebp
        mov ebp, dword ptr [4*eax + mem_00AA6090]
        xor ebp, dword ptr [4*ebx + mem_00AA6490]
        mov ebx, edi
        mov dword ptr [esp + 0x1c], edi
        shr ebx, 0x10
        movzx edi, bl
        mov ebx, dword ptr [esp + 0x18]
        mov eax, edx
        shr eax, 0x18
        xor ebp, dword ptr [4*eax + mem_00AA6890]
        movzx eax, cl
        xor ebp, dword ptr [4*eax + mem_00AA5C90]
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [eax], ebp
        mov edi, dword ptr [4*edi + mem_00AA6490]
        shr ebx, 0x18
        xor edi, dword ptr [4*ebx + mem_00AA6890]
        mov ebx, ecx
        shr ebx, 0x8
        movzx ebx, bl
        xor edi, dword ptr [4*ebx + mem_00AA6090]
        movzx ebx, dl
        xor edi, dword ptr [4*ebx + mem_00AA5C90]
        mov ebx, edx
        mov dword ptr [eax + 0x4], edi
        mov edi, dword ptr [esp + 0x1c]
        shr edi, 0x18
        mov edi, dword ptr [4*edi + mem_00AA6890]
        shr ebx, 0x8
        movzx ebx, bl
        xor edi, dword ptr [4*ebx + mem_00AA6090]
        mov ebx, ecx
        shr ebx, 0x10
        movzx ebx, bl
        xor edi, dword ptr [4*ebx + mem_00AA6490]
        mov ebx, dword ptr [esp + 0x18]
        movzx ebp, bl
        xor edi, dword ptr [4*ebp + mem_00AA5C90]
        shr ebx, 0x8
        mov dword ptr [eax + 0x8], edi
        shr edx, 0x10
        movzx edi, bl
        mov edi, dword ptr [4*edi + mem_00AA6090]
        movzx edx, dl
        xor edi, dword ptr [4*edx + mem_00AA6490]
        shr ecx, 0x18
        xor edi, dword ptr [4*ecx + mem_00AA6890]
        movzx ecx, byte ptr [esp + 0x1c]
        xor edi, dword ptr [4*ecx + mem_00AA5C90]
        mov dword ptr [eax + 0xc], edi
        mov ecx, dword ptr [esi + 0x1c]
        sub ecx, 0x1
        cmp ecx, 0x1
        jle loc_006A55F5
        mov edx, ecx
        shl edx, 0x4
        add ecx, -0x1
        lea edi, [edx + esi + 0x24]
        mov dword ptr [esp + 0x24], ecx
        nop
loc_006A54D0:
        mov ebp, dword ptr [edi + 0x4]
        xor ebp, dword ptr [eax + 0x8]
        mov edx, dword ptr [edi - 0x4]
        xor edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 0x4]
        xor ecx, dword ptr [edi]
        mov dword ptr [esp + 0x18], ebp
        mov ebp, dword ptr [edi + 0x8]
        xor ebp, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x28], eax
        mov eax, dword ptr [esp + 0x18]
        mov ebx, ebp
        shr ebx, 0x8
        movzx ebx, bl
        mov ebx, dword ptr [4*ebx + mem_00AA6090]
        mov dword ptr [esp + 0x1c], ebp
        shr eax, 0x10
        movzx ebp, al
        xor ebx, dword ptr [4*ebp + mem_00AA6490]
        mov eax, dword ptr [esp + 0x28]
        mov ebp, ecx
        shr ebp, 0x18
        xor ebx, dword ptr [4*ebp + mem_00AA6890]
        movzx ebp, dl
        xor ebx, dword ptr [4*ebp + mem_00AA5C90]
        mov ebp, dword ptr [esp + 0x18]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [esp + 0x1c]
        shr ebx, 0x10
        movzx ebx, bl
        mov ebx, dword ptr [4*ebx + mem_00AA6490]
        mov dword ptr [esp + 0x28], edx
        shr edx, 0x8
        shr ebp, 0x18
        xor ebx, dword ptr [4*ebp + mem_00AA6890]
        movzx ebp, dl
        xor ebx, dword ptr [4*ebp + mem_00AA6090]
        movzx ebp, cl
        xor ebx, dword ptr [4*ebp + mem_00AA5C90]
        mov edx, ecx
        mov dword ptr [eax + 0x4], ebx
        mov ebx, dword ptr [esp + 0x1c]
        shr ebx, 0x18
        mov ebx, dword ptr [4*ebx + mem_00AA6890]
        shr edx, 0x8
        movzx ebp, dl
        xor ebx, dword ptr [4*ebp + mem_00AA6090]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x28], edx
        shr edx, 0x10
        movzx ebp, dl
        xor ebx, dword ptr [4*ebp + mem_00AA6490]
        movzx ebp, byte ptr [esp + 0x18]
        xor ebx, dword ptr [4*ebp + mem_00AA5C90]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x8], ebx
        mov ebx, dword ptr [esp + 0x18]
        shr ebx, 0x8
        movzx ebx, bl
        mov ebx, dword ptr [4*ebx + mem_00AA6090]
        shr ecx, 0x10
        movzx ecx, cl
        xor ebx, dword ptr [4*ecx + mem_00AA6490]
        shr edx, 0x18
        xor ebx, dword ptr [4*edx + mem_00AA6890]
        movzx edx, byte ptr [esp + 0x1c]
        xor ebx, dword ptr [4*edx + mem_00AA5C90]
        sub edi, 0x10
        sub dword ptr [esp + 0x24], 0x1
        mov dword ptr [eax + 0xc], ebx
        jne loc_006A54D0
loc_006A55F5:
        mov edi, dword ptr [esi + 0x38]
        xor edi, dword ptr [eax + 0x8]
        mov ecx, dword ptr [esi + 0x30]
        xor ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x34]
        mov dword ptr [esp + 0x18], edi
        mov edi, dword ptr [esi + 0x3c]
        xor edi, dword ptr [eax + 0xc]
        xor edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x1c], edi
        movzx edi, cl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax], bl
        mov ebx, dword ptr [esp + 0x1c]
        shr ebx, 0x8
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x1], bl
        mov ebx, dword ptr [esp + 0x18]
        shr ebx, 0x10
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x2], bl
        mov edi, edx
        shr edi, 0x18
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x3], bl
        movzx edi, dl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x4], bl
        mov ebx, ecx
        shr ebx, 0x8
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x5], bl
        mov ebx, dword ptr [esp + 0x1c]
        shr ebx, 0x10
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov edi, dword ptr [esp + 0x18]
        mov byte ptr [eax + 0x6], bl
        shr edi, 0x18
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        movzx edi, byte ptr [esp + 0x18]
        mov byte ptr [eax + 0x7], bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x8], bl
        mov ebx, edx
        shr ebx, 0x8
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0x9], bl
        mov ebx, ecx
        shr ebx, 0x10
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov edi, dword ptr [esp + 0x1c]
        mov byte ptr [eax + 0xa], bl
        shr edi, 0x18
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        movzx edi, byte ptr [esp + 0x1c]
        mov byte ptr [eax + 0xb], bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        mov byte ptr [eax + 0xc], bl
        mov ebx, dword ptr [esp + 0x18]
        shr ebx, 0x8
        shr edx, 0x10
        movzx edi, bl
        movzx ebx, byte ptr [edi + mem_00AA6C90]
        movzx edx, dl
        mov byte ptr [eax + 0xd], bl
        mov dl, byte ptr [edx + mem_00AA6C90]
        mov byte ptr [eax + 0xe], dl
        shr ecx, 0x18
        mov cl, byte ptr [ecx + mem_00AA6C90]
        mov byte ptr [eax + 0xf], cl
        mov edx, dword ptr [esi + 0x20]
        xor dword ptr [eax], edx
        mov ecx, dword ptr [esi + 0x24]
        xor dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [esi + 0x28]
        xor dword ptr [eax + 0x8], edx
        mov ecx, dword ptr [esi + 0x2c]
        xor dword ptr [eax + 0xc], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}


extern "C" int mem_00AA4C90;
extern "C" int mem_00AA5090;
extern "C" int mem_00AA5490;
extern "C" int mem_00AA5890;

// [0x006A4FB0] sub_006A4FB0 (984 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A4FB0(void* self) {
    __asm {
        sub	esp, 0x10
        mov	eax, dword ptr [esp + 0x14]
        mov	edx, dword ptr [eax + 0x4]
        push	ebx
        push	ebp
        mov	ebp, dword ptr [eax + 0x8]
        push	esi
        push	edi
        mov	edi, dword ptr [eax + 0xc]
        mov	esi, ecx
        xor	edi, dword ptr [esi + 0x2c]
        xor	ebp, dword ptr [esi + 0x28]
        xor	edx, dword ptr [esi + 0x24]
        mov	ecx, dword ptr [esi + 0x20]
        xor	ecx, dword ptr [eax]
        mov	eax, edi
        shr	eax, 0x18
        mov	dword ptr [esp + 0x18], ebp
        mov	ebx, ebp
        mov	ebp, dword ptr [4*eax + mem_00AA5890]
        shr	ebx, 0x10
        movzx	ebx, bl
        xor	ebp, dword ptr [4*ebx + mem_00AA5490]
        mov	ebx, edi
        shr	ebx, 0x10
        mov	dword ptr [esp + 0x1c], edi
        movzx	edi, bl
        mov	ebx, dword ptr [esp + 0x18]
        mov	eax, edx
        shr	eax, 0x8
        shr	ebx, 0x8
        movzx	eax, al
        xor	ebp, dword ptr [4*eax + mem_00AA5090]
        movzx	ebx, bl
        movzx	eax, cl
        xor	ebp, dword ptr [4*eax + mem_00AA4C90]
        mov	eax, dword ptr [esp + 0x28]
        mov	dword ptr [eax], ebp
        mov	edi, dword ptr [4*edi + mem_00AA5490]
        xor	edi, dword ptr [4*ebx + mem_00AA5090]
        mov	ebx, ecx
        shr	ebx, 0x18
        xor	edi, dword ptr [4*ebx + mem_00AA5890]
        movzx	ebx, dl
        xor	edi, dword ptr [4*ebx + mem_00AA4C90]
        mov	ebx, dword ptr [esp + 0x1c]
        mov	dword ptr [eax + 0x4], edi
        shr	ebx, 0x8
        movzx	edi, bl
        mov	edi, dword ptr [4*edi + mem_00AA5090]
        mov	ebx, edx
        shr	ebx, 0x18
        xor	edi, dword ptr [4*ebx + mem_00AA5890]
        mov	ebx, ecx
        shr	ebx, 0x10
        movzx	ebx, bl
        xor	edi, dword ptr [4*ebx + mem_00AA5490]
        mov	ebx, dword ptr [esp + 0x18]
        movzx	ebp, bl
        xor	edi, dword ptr [4*ebp + mem_00AA4C90]
        shr	edx, 0x10
        mov	dword ptr [eax + 0x8], edi
        shr	ecx, 0x8
        shr	ebx, 0x18
        mov	edi, dword ptr [4*ebx + mem_00AA5890]
        movzx	edx, dl
        xor	edi, dword ptr [4*edx + mem_00AA5490]
        movzx	edx, byte ptr [esp + 0x1c]
        movzx	ecx, cl
        xor	edi, dword ptr [4*ecx + mem_00AA5090]
        mov	dword ptr [esp + 0x24], 0x1
        xor	edi, dword ptr [4*edx + mem_00AA4C90]
        mov	dword ptr [eax + 0xc], edi
        mov	ecx, dword ptr [esi + 0x1c]
        sub	ecx, 0x1
        cmp	ecx, 0x1
        jbe	loc_006A520B
        lea	edi, [esi + 0x34]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loc_006A50E0:
        mov	ebp, dword ptr [edi + 0x4]
        xor	ebp, dword ptr [eax + 0x8]
        mov	ecx, dword ptr [edi]
        xor	ecx, dword ptr [eax + 0x4]
        mov	edx, dword ptr [edi - 0x4]
        xor	edx, dword ptr [eax]
        mov	dword ptr [esp + 0x18], ebp
        mov	ebp, dword ptr [edi + 0x8]
        xor	ebp, dword ptr [eax + 0xc]
        mov	ebx, dword ptr [esp + 0x18]
        shr	ebx, 0x10
        movzx	ebx, bl
        mov	dword ptr [esp + 0x1c], ebp
        shr	ebp, 0x18
        mov	ebp, dword ptr [4*ebp + mem_00AA5890]
        xor	ebp, dword ptr [4*ebx + mem_00AA5490]
        mov	ebx, ecx
        shr	ebx, 0x8
        movzx	ebx, bl
        xor	ebp, dword ptr [4*ebx + mem_00AA5090]
        movzx	ebx, dl
        xor	ebp, dword ptr [4*ebx + mem_00AA4C90]
        mov	ebx, dword ptr [esp + 0x1c]
        mov	dword ptr [eax], ebp
        shr	ebx, 0x10
        movzx	ebx, bl
        mov	ebx, dword ptr [4*ebx + mem_00AA5490]
        mov	dword ptr [esp + 0x28], eax
        mov	eax, dword ptr [esp + 0x18]
        shr	eax, 0x8
        movzx	ebp, al
        xor	ebx, dword ptr [4*ebp + mem_00AA5090]
        mov	eax, dword ptr [esp + 0x28]
        mov	ebp, edx
        shr	ebp, 0x18
        xor	ebx, dword ptr [4*ebp + mem_00AA5890]
        movzx	ebp, cl
        xor	ebx, dword ptr [4*ebp + mem_00AA4C90]
        mov	ebp, ecx
        mov	dword ptr [eax + 0x4], ebx
        mov	ebx, dword ptr [esp + 0x1c]
        shr	ebx, 0x8
        movzx	ebx, bl
        mov	ebx, dword ptr [4*ebx + mem_00AA5090]
        shr	ebp, 0x18
        xor	ebx, dword ptr [4*ebp + mem_00AA5890]
        mov	dword ptr [esp + 0x28], edx
        shr	edx, 0x10
        movzx	ebp, dl
        xor	ebx, dword ptr [4*ebp + mem_00AA5490]
        movzx	ebp, byte ptr [esp + 0x18]
        xor	ebx, dword ptr [4*ebp + mem_00AA4C90]
        mov	ebp, dword ptr [esp + 0x18]
        mov	edx, dword ptr [esp + 0x28]
        shr	ecx, 0x10
        mov	dword ptr [eax + 0x8], ebx
        movzx	ecx, cl
        shr	edx, 0x8
        shr	ebp, 0x18
        mov	ebx, dword ptr [4*ebp + mem_00AA5890]
        xor	ebx, dword ptr [4*ecx + mem_00AA5490]
        movzx	ecx, byte ptr [esp + 0x1c]
        movzx	edx, dl
        xor	ebx, dword ptr [4*edx + mem_00AA5090]
        add	edi, 0x10
        xor	ebx, dword ptr [4*ecx + mem_00AA4C90]
        mov	ecx, dword ptr [esp + 0x24]
        mov	dword ptr [eax + 0xc], ebx
        mov	edx, dword ptr [esi + 0x1c]
        add	ecx, 0x1
        sub	edx, 0x1
        cmp	ecx, edx
        mov	dword ptr [esp + 0x24], ecx
        jb	loc_006A50E0
loc_006A520B:
        mov	ecx, dword ptr [esi + 0x1c]
        shl	ecx, 0x4
        mov	edx, dword ptr [ecx + esi + 0x14]
        mov	ebp, dword ptr [ecx + esi + 0x18]
        xor	edx, dword ptr [eax + 0x4]
        lea	edi, [ecx + esi]
        mov	ecx, dword ptr [edi + 0x10]
        mov	edi, dword ptr [edi + 0x1c]
        xor	edi, dword ptr [eax + 0xc]
        xor	ecx, dword ptr [eax]
        xor	ebp, dword ptr [eax + 0x8]
        mov	dword ptr [esp + 0x1c], edi
        movzx	edi, cl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax], bl
        mov	ebx, edx
        shr	ebx, 0x8
        movzx	edi, bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x1], bl
        mov	ebx, ebp
        shr	ebx, 0x10
        movzx	edi, bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	edi, dword ptr [esp + 0x1c]
        mov	byte ptr [eax + 0x2], bl
        shr	edi, 0x18
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x3], bl
        movzx	edi, dl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x4], bl
        mov	ebx, ebp
        shr	ebx, 0x8
        movzx	edi, bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x5], bl
        mov	ebx, dword ptr [esp + 0x1c]
        shr	ebx, 0x10
        movzx	edi, bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x6], bl
        mov	edi, ecx
        shr	edi, 0x18
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x7], bl
        mov	dword ptr [esp + 0x18], ebp
        movzx	edi, byte ptr [esp + 0x18]
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x8], bl
        mov	ebx, dword ptr [esp + 0x1c]
        shr	ebx, 0x8
        movzx	edi, bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0x9], bl
        mov	ebx, ecx
        shr	ebx, 0x10
        movzx	edi, bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        mov	edi, edx
        mov	byte ptr [eax + 0xa], bl
        shr	edi, 0x18
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        movzx	edi, byte ptr [esp + 0x1c]
        shr	ecx, 0x8
        mov	byte ptr [eax + 0xb], bl
        movzx	ebx, byte ptr [4*edi + mem_00AA4C90 + 1]
        movzx	ecx, cl
        mov	byte ptr [eax + 0xc], bl
        movzx	ecx, byte ptr [4*ecx + mem_00AA4C90 + 1]
        shr	edx, 0x10
        mov	byte ptr [eax + 0xd], cl
        movzx	edx, dl
        movzx	ecx, byte ptr [4*edx + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0xe], cl
        mov	ecx, ebp
        shr	ecx, 0x18
        mov	dl, byte ptr [4*ecx + mem_00AA4C90 + 1]
        mov	byte ptr [eax + 0xf], dl
        mov	ecx, dword ptr [esi + 0x1c]
        add	ecx, 0x2
        shl	ecx, 0x4
        mov	edx, dword ptr [ecx + esi]
        xor	dword ptr [eax], edx
        mov	ecx, dword ptr [esi + 0x1c]
        shl	ecx, 0x4
        mov	edx, dword ptr [ecx + esi + 0x24]
        xor	dword ptr [eax + 0x4], edx
        mov	ecx, dword ptr [esi + 0x1c]
        shl	ecx, 0x4
        mov	edx, dword ptr [ecx + esi + 0x28]
        xor	dword ptr [eax + 0x8], edx
        mov	ecx, dword ptr [esi + 0x1c]
        shl	ecx, 0x4
        mov	edx, dword ptr [ecx + esi + 0x2c]
        xor	dword ptr [eax + 0xc], edx
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        add	esp, 0x10
        ret	0x8
    }
}

// [0x006A5A30] sub_006A5A30 (556 bytes)
extern "C" void ext_006A5390();
extern "C" void ext_006A6EF8();

extern "C" __declspec(naked) void __fastcall fn_006A5A30(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx], 0
        je short L_6a5a47
        mov eax, 0xfffffffb
        pop ebx
        add esp, 0x20
        ret 0xc

    L_6a5a47:
        cmp dword ptr [ebx + 8], 1
        je short L_6a5a59
        mov eax, 0xfffffffa
        pop ebx
        add esp, 0x20
        ret 0xc

    L_6a5a59:
        push esi
        mov esi, dword ptr [esp + 0x2c]
        test esi, esi
        je L_6a5c52
        mov eax, dword ptr [esp + 0x30]
        test eax, eax
        jle L_6a5c52
        mov ecx, eax
        and ecx, 0x8000000f
        jns short L_6a5a81
        dec ecx
        or ecx, -0x10
        inc ecx

    L_6a5a81:
        je short L_6a5a90
        pop esi
        mov eax, 0xfffffff9
        pop ebx
        add esp, 0x20
        ret 0xc

    L_6a5a90:
        mov ecx, dword ptr [ebx + 4]
        cdq
        and edx, 0xf
        add eax, edx
        sar eax, 4
        sub ecx, 0
        push ebp
        push edi
        mov dword ptr [esp + 0x38], eax
        je L_6a5bc0
        sub ecx, 1
        je short L_6a5abd
        pop edi
        pop ebp
        pop esi
        or eax, -1
        pop ebx
        add esp, 0x20
        ret 0xc

    L_6a5abd:
        mov edx, dword ptr [ebx + 0x10]
        mov ecx, dword ptr [ebx + 0x14]
        mov ebp, dword ptr [ebx + 0xc]
        mov edi, dword ptr [esp + 0x3c]
        add eax, -1
        test eax, eax
        mov dword ptr [esp + 0x24], edx
        mov edx, dword ptr [ebx + 0x18]
        mov dword ptr [esp + 0x28], ecx
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x34], eax
        jle short L_6a5b56

    L_6a5ae4:
        lea eax, [esp + 0x10]
        push eax
        push esi
        mov ecx, ebx
        call ext_006A5390
        mov edx, dword ptr [esp + 0x28]
        xor dword ptr [esp + 0x18], edx
        mov edx, dword ptr [esp + 0x2c]
        xor dword ptr [esp + 0x1c], edx
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 0x14]
        xor ecx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x10]
        xor eax, ebp
        mov ebp, dword ptr [esi]
        mov dword ptr [esp + 0x24], edx
        mov edx, dword ptr [esi + 8]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x28], edx
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [edi], eax
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [edi + 4], ecx
        mov dword ptr [edi + 8], eax
        mov eax, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [esp + 0x1c]
        sub eax, 1
        mov dword ptr [edi + 0xc], ecx
        add esi, 0x10
        add edi, 0x10
        test eax, eax
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x34], eax
        jg L_6a5ae4

    L_6a5b56:
        lea edx, [esp + 0x10]
        push edx
        push esi
        mov ecx, ebx
        call ext_006A5390
        mov eax, dword ptr [esp + 0x24]
        xor dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x1c]
        xor eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        xor dword ptr [esp + 0x10], ebp
        xor dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x1c], eax
        shr eax, 0x18
        mov esi, eax
        lea edx, [esi - 1]
        cmp edx, 0xf
        ja L_6a5c43
        mov ecx, 0x10
        sub ecx, esi
        mov eax, ecx
        cmp eax, 0x10
        jge short L_6a5bb7

    L_6a5ba2:
        movzx edx, byte ptr [esp + eax + 0x10]
        cmp edx, esi
        jne L_6a5c43
        add eax, 1
        cmp eax, 0x10
        jl L_6a5ba2

    L_6a5bb7:
        push ecx
        lea eax, [esp + 0x14]
        push eax
        push edi
        jmp short L_6a5c28

    L_6a5bc0:
        mov ebp, dword ptr [esp + 0x3c]
        lea edi, [eax - 1]
        test edi, edi
        jle short L_6a5be6
        jmp short L_6a5bd0

        _emit 0x8d
        _emit 0x49
        _emit 0x00

    L_6a5bd0:
        push ebp
        push esi
        mov ecx, ebx
        call ext_006A5390
        sub edi, 1
        add esi, 0x10
        add ebp, 0x10
        test edi, edi
        jg L_6a5bd0

    L_6a5be6:
        lea ecx, [esp + 0x10]
        push ecx
        push esi
        mov ecx, ebx
        call ext_006A5390
        movzx esi, byte ptr [esp + 0x1f]
        cmp esi, 0x10
        jge short L_6a5c43
        mov ecx, 0x10
        sub ecx, esi
        mov eax, ecx
        cmp eax, 0x10
        jge short L_6a5c21
        jmp short L_6a5c10

        _emit 0x8d
        _emit 0x49
        _emit 0x00

    L_6a5c10:
        movzx edx, byte ptr [esp + eax + 0x10]
        cmp edx, esi
        jne short L_6a5c43
        add eax, 1
        cmp eax, 0x10
        jl L_6a5c10

    L_6a5c21:
        push ecx
        lea eax, [esp + 0x14]
        push eax
        push ebp

    L_6a5c28:
        call ext_006A6EF8
        mov eax, dword ptr [esp + 0x44]
        add esp, 0xc
        pop edi
        shl eax, 4
        pop ebp
        sub eax, esi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xc

    L_6a5c43:
        pop edi
        pop ebp
        pop esi
        mov eax, 0xfffffff9
        pop ebx
        add esp, 0x20
        ret 0xc

    L_6a5c52:
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 0xc
    }
}

extern "C" void ext_006A4FB0();
extern "C" void ext_006A6E8C();
extern "C" void ext_006A6EF8();

// [0x006A5860] sub_006A5860 (452 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A5860(void* self) {
    __asm {
        sub     esp, 0x18
        cmp     dword ptr [ecx], 0x0
        mov     dword ptr [esp], ecx
        je      L_6a5876
    L_6a586b:
        mov     eax, 0xfffffffb
        add     esp, 0x18
        ret     0xc
    L_6a5876:
        cmp     dword ptr [ecx + 0x8], 0x0
        jne     L_6a586b
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        test    esi, esi
        je      L_6a5a1b
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jle     L_6a5a1b
        cdq
        push    ebx
        and     edx, 0xf
        add     eax, edx
        push    ebp
        push    edi
        mov     edi, eax
        mov     eax, dword ptr [ecx + 0x4]
        sar     edi, 0x4
        sub     eax, 0x0
        je      L_6a59a5
        sub     eax, 0x1
        je      L_6a58c1
        pop     edi
        pop     ebp
        pop     ebx
        or      eax, -0x1
        pop     esi
        add     esp, 0x18
        ret     0xc
    L_6a58c1:
        test    edi, edi
        mov     ebp, dword ptr [esp + 0x34]
        lea     eax, [ecx + 0xc]
        mov     ebx, edi
        jle     L_6a5914
        jmp     L_6a58d4
    L_6a58d0:
        mov     ecx, dword ptr [esp + 0x10]
    L_6a58d4:
        mov     edx, dword ptr [esi]
        xor     edx, dword ptr [eax]
        push    ebp
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [eax + 0x4]
        xor     edx, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [eax + 0x8]
        xor     edx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x24], edx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        call    ext_006A4FB0
        mov     eax, ebp
        sub     ebx, 0x1
        add     esi, 0x10
        add     ebp, 0x10
        test    ebx, ebx
        jg      L_6a58d0
    L_6a5914:
        shl     edi, 0x4
        mov     edx, edi
        mov     dword ptr [esp + 0x2c], edx
        sub     edx, dword ptr [esp + 0x30]
        mov     edi, 0x10
        add     edx, 0x10
        sub     edi, edx
        test    edi, edi
        jle     L_6a5961
        mov     ebx, eax
        sub     ebx, esi
        mov     dword ptr [esp + 0x30], ebx
        lea     ebx, [esp + 0x18]
        sub     ebx, esi
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x34], edi
    L_6a5947:
        mov     esi, dword ptr [esp + 0x30]
        mov     bl, byte ptr [esi + ecx]
        xor     bl, byte ptr [ecx]
        mov     esi, dword ptr [esp + 0x14]
        mov     byte ptr [esi + ecx], bl
        add     ecx, 0x1
        sub     dword ptr [esp + 0x34], 0x1
        jne     L_6a5947
    L_6a5961:
        mov     ecx, edi
        cmp     ecx, 0x10
        jge     L_6a5985
        mov     esi, eax
        lea     eax, [esp + 0x18]
        sub     esi, eax
    L_6a5970:
        lea     eax, [esi + ecx]
        mov     al, byte ptr [esp + eax + 0x18]
        xor     al, dl
        mov     byte ptr [esp + ecx + 0x18], al
        add     ecx, 0x1
        cmp     ecx, 0x10
        jl      L_6a5970
    L_6a5985:
        push    ebp
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        call    ext_006A4FB0
        mov     eax, dword ptr [esp + 0x2c]
        pop     edi
        pop     ebp
        pop     ebx
        add     eax, 0x10
        pop     esi
        add     esp, 0x18
        ret     0xc
    L_6a59a5:
        test    edi, edi
        mov     ebx, dword ptr [esp + 0x34]
        mov     ebp, edi
        jle     L_6a59c9
        jmp     L_6a59b5
    L_6a59b1:
        mov     ecx, dword ptr [esp + 0x10]
    L_6a59b5:
        push    ebx
        push    esi
        call    ext_006A4FB0
        sub     ebp, 0x1
        add     esi, 0x10
        add     ebx, 0x10
        test    ebp, ebp
        jg      L_6a59b1
    L_6a59c9:
        shl     edi, 0x4
        mov     dword ptr [esp + 0x2c], edi
        sub     edi, dword ptr [esp + 0x30]
        mov     edx, 0x10
        add     edi, 0x10
        sub     edx, edi
        push    edx
        lea     eax, [esp + 0x1c]
        push    esi
        push    eax
        call    ext_006A6EF8
        push    edi
        lea     ecx, [esp + 0x38]
        sub     ecx, edi
        push    edi
        push    ecx
        call    ext_006A6E8C
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0x18
        push    ebx
        lea     edx, [esp + 0x1c]
        push    edx
        call    ext_006A4FB0
        mov     eax, dword ptr [esp + 0x2c]
        pop     edi
        pop     ebp
        pop     ebx
        add     eax, 0x10
        pop     esi
        add     esp, 0x18
        ret     0xc
    L_6a5a1b:
        xor     eax, eax
        pop     esi
        add     esp, 0x18
        ret     0xc
    }
}

// [0x006A8D90] sub_006A8D90 (1017 bytes)
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A6172();
extern "C" void ext_006A7D30();
extern "C" void ext_006A7D50();
extern "C" void ext_006AD010();
extern "C" void ext_006AD050();
extern "C" int mem_00925680;
extern "C" int mem_009242F0;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_00924094;
extern "C" int mem_009240D4;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;

extern "C" __declspec(naked) void __fastcall fn_006A8D90(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        mov     eax, fs:[0]
        push    -1
        push    0x8b7134
        push    eax
        mov     fs:[0], esp
        sub     esp, 0x80
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        call    ext_006A7D30
        mov     esi, dword ptr [ebp + 0x8]
        push    eax
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, esi
        call    ext_006A6172
        cmp     byte ptr [edi + 0x179], 0
        jne     loc_6A8FA4
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0x2c]
        push    6
        mov     ecx, esi
        call    eax
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    ext_006A6106
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0x14]
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006A6100
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        add     eax, 2
        push    eax
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, esi
        call    ext_006A6106
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, 2
        push    eax
        push    ecx
        mov     ecx, esi
        call    ext_006A6100
        mov     ebx, dword ptr [mem_00925680]
        push    0x16
        call    ebx
        push    eax
        push    1
        push    0
        lea     ecx, [esp + 0x40]
        call    ext_006A6148
        lea     edx, [esp + 0x34]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x98], 0
        call    ext_006A610C
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ebp + 0x10]
        add     eax, 1
        push    eax
        push    ecx
        lea     edx, [esp + 0x4c]
        push    edx
        mov     ecx, esi
        call    ext_006A6106
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, 1
        push    eax
        push    ecx
        mov     ecx, esi
        call    ext_006A6100
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        add     edx, 3
        push    edx
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        call    ext_006A6106
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x14]
        add     edx, 3
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_006A6100
        push    0x10
        call    ebx
        push    eax
        push    1
        push    0
        lea     ecx, [esp + 0x38]
        call    ext_006A6148
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x98], 1
        call    ext_006A610C
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        add     edx, 4
        push    edx
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        call    ext_006A6106
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x14]
        add     edx, 4
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_006A6100
        push    0x15
        call    ebx
        push    eax
        push    1
        push    0
        lea     ecx, [esp + 0x28]
        call    ext_006A6148
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x98], 2
        call    ext_006A610C
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        add     edx, 5
        push    edx
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        call    ext_006A6106
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x14]
        add     edx, 5
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_006A6100
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    ext_006A610C
        mov     ebx, 0x92a23c
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esp + 0x94], 1
        mov     dword ptr [esp + 0x1c], ebx
        call    ext_006A5FF2
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x94], 0
        mov     dword ptr [esp + 0x2c], ebx
        call    ext_006A5FF2
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x94], -1
        mov     dword ptr [esp + 0x34], ebx
        call    ext_006A5FF2
    loc_6A8FA4:
        push    0x990b34
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242F0]
        push    0x990ad8
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x98], 3
        call    dword ptr [mem_009242F0]
        mov     ebx, dword ptr [edi + 0x54]
        test    ebx, ebx
        mov     byte ptr [esp + 0x94], 4
        je      loc_6A901F
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, ebx
        call    ext_006AD010
        push    eax
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x98], 5
        call    dword ptr [mem_009244D4]
        lea     ecx, [esp + 0x14]
        mov     byte ptr [esp + 0x94], 4
        call    dword ptr [mem_009242F4]
        mov     ecx, ebx
        call    ext_006AD050
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_009244D4]
    loc_6A901F:
        mov     ecx, dword ptr [edi + 0xe0]
        lea     eax, [esp + 0x4c]
        push    eax
        push    0x3c
        push    ecx
        call    dword ptr [mem_00924094]
        mov     dword ptr [esp + 0x5c], 0x2bc
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x24], 0x92a5d4
        lea     edx, [esp + 0x4c]
        push    edx
        mov     byte ptr [esp + 0x98], 6
        call    dword ptr [mem_009240D4]
        push    eax
        lea     ecx, [esp + 0x28]
        call    ext_006A5FFE
        mov     ecx, edi
        call    ext_006A7D50
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [edx + 0x38]
        mov     ecx, esi
        call    eax
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0x30]
        mov     ebx, eax
        mov     eax, 4
        add     dword ptr [ebp + 0x10], eax
        add     dword ptr [ebp + 0xc], eax
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    edx
        push    0x20
        lea     ecx, [ebp + 0xc]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [esi]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        mov     eax, dword ptr [edx + 0x70]
        mov     ecx, esi
        call    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [esi + 8]
        push    eax
        push    edx
        call    dword ptr [mem_00924080]
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        lea     edx, [eax + ecx + 1]
        mov     eax, dword ptr [esi]
        mov     dword ptr [ebp + 0x10], edx
        mov     edx, dword ptr [eax + 0x30]
        add     edi, 0xdc
        push    edi
        mov     ecx, esi
        call    edx
        mov     edi, dword ptr [esi]
        push    0x10
        lea     eax, [ebp + 0xc]
        push    eax
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924300]
        push    eax
        mov     edx, dword ptr [edi + 0x70]
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x30]
        push    ecx
        mov     ecx, esi
        call    edx
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x38]
        push    ebx
        mov     ecx, esi
        call    edx
        lea     ecx, [esp + 0x24]
        mov     byte ptr [esp + 0x94], 4
        mov     dword ptr [esp + 0x24], 0x92a23c
        call    ext_006A5FF2
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242F4]
        lea     ecx, [esp + 0xc]
        call    dword ptr [mem_009242F4]
        mov     ecx, dword ptr [esp + 0x8c]
        pop     edi
        pop     esi
        mov     fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}

// [0x006A9C60] sub_006A9C60 (1350 bytes)
extern "C" void ext_00626440();
extern "C" void ext_006A5EBA();
extern "C" void ext_006A5ECC();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" void ext_006A6148();
extern "C" void ext_006A6172();
extern "C" void ext_006A6190();
extern "C" void ext_006A6196();
extern "C" void ext_006A619C();
extern "C" void ext_006A61A2();
extern "C" void ext_006A636A();
extern "C" void ext_006A7BA0();
extern "C" void ext_006A7C20();
extern "C" void ext_006A8A60();
extern "C" void ext_006A8D90();
extern "C" void ext_006A9210();
extern "C" void ext_006B13F0();
extern "C" void ext_006B1510();
extern "C" int mem_0092566C;
extern "C" int mem_009240AC;
extern "C" int mem_0092408C;
extern "C" int mem_009240F8;
extern "C" int mem_0092564C;
extern "C" int mem_00925678;
extern "C" int mem_00990D30;
extern "C" int mem_009240A0;

extern "C" __declspec(naked) void __fastcall fn_006A9C60(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        push -0x1
        push 0x8b72d7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x124
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0x48]
        push eax
        push ecx
        call dword ptr [mem_0092566C]
        lea edx, [esp + 0x20]
        push edx
        mov ecx, esi
        call ext_006A9210
        push esi
        lea ecx, [esp + 0xac]
        call ext_006A5ECC
        xor edi, edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x13c], edi
        call ext_006A61A2
        mov eax, dword ptr [esp + 0xac]
        push eax
        mov byte ptr [esp + 0x140], 0x1
        call dword ptr [mem_009240AC]
        push eax
        lea ecx, [esp + 0x14]
        call ext_006A6190
        mov dword ptr [esp + 0x6c], edi
        mov dword ptr [esp + 0x68], 0x92c4ac
        mov eax, dword ptr [esp + 0x54]
        sub eax, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x50]
        sub ecx, dword ptr [esp + 0x48]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0xb4]
        push ecx
        mov byte ptr [esp + 0x148], 0x2
        call dword ptr [mem_0092408C]
        push eax
        lea ecx, [esp + 0x6c]
        call ext_006A5FFE
        mov edx, dword ptr [esp + 0x6c]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        call ext_006A6196
        cmp byte ptr [esi + 0xfc], 0x0
        mov dword ptr [esp + 0x84], eax
        je L_006A9D9F
        mov ebp, dword ptr [esp + 0x4c]
        mov ebx, dword ptr [esp + 0x48]
        mov edi, dword ptr [esp + 0x50]
        mov edx, dword ptr [esp + 0x54]
        sub esp, 0x10
        mov eax, esp
        mov ecx, ebp
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], edi
        add ebp, 0x1c
        mov dword ptr [eax + 0xc], ebp
        lea eax, [esp + 0x20]
        mov dword ptr [esp + 0x44], ecx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x50], edx
        call ext_006A8A60
        mov ecx, dword ptr [esp + 0x14]
        sub ebp, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0xac]
        push 0xcc0020
        push 0x0
        push 0x0
        push ecx
        push ebp
        sub edi, ebx
        push edi
        push 0x0
        push 0x0
        push edx
        call dword ptr [mem_009240F8]
L_006A9D9F:
        mov eax, dword ptr [esi + 0x18c]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006A6172
        mov ecx, esi
        call ext_006A7BA0
        push eax
        push 0x1
        push 0x0
        lea ecx, [esp + 0x7c]
        call ext_006A6148
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x140], 0x3
        call ext_006A610C
        cmp byte ptr [esi + 0x179], 0x0
        mov dword ptr [esp + 0x80], eax
        je L_006A9E2E
        mov ecx, esi
        call ext_00626440
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x2c]
        lea eax, [eax + ecx + 0x1]
        mov dword ptr [esp + 0x30], ecx
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x34], ecx
        mov ecx, esi
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x3c], edx
        call ext_006A7BA0
        push eax
        lea eax, [esp + 0x34]
        push eax
        lea ecx, [esp + 0x18]
        call ext_006A6172
        jmp L_006A9E60
L_006A9E2E:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esi + 0xe4]
        push ecx
        push edx
        lea eax, [esp + 0x80]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006A6106
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esi + 0xe4]
        push ecx
        push edx
        lea ecx, [esp + 0x18]
        call ext_006A6100
L_006A9E60:
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x60], ecx
        mov ecx, dword ptr [esi + 0xe8]
        mov dword ptr [esp + 0x58], eax
        mov eax, dword ptr [esp + 0x2c]
        add ecx, edx
        test edi, edi
        mov dword ptr [esp + 0x64], eax
        mov dword ptr [esp + 0x5c], edx
        mov dword ptr [esp + 0x64], ecx
        je L_006A9F52
        jmp L_006A9EA4
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_006A9EA0:
        mov ecx, dword ptr [esp + 0x64]
L_006A9EA4:
        mov ebp, dword ptr [esp + 0x58]
        lea eax, [esp + 0x40]
        push eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ebp
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x74]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [esp + 0x54], 0x1
        mov ebx, dword ptr [edi]
        mov edx, dword ptr [ebx + 0x1c]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        call edx
        cmp dword ptr [esp + 0x40], 0x0
        je L_006A9F22
        lea eax, [esp + 0x70]
        push eax
        lea ecx, [esp + 0x14]
        call ext_006A610C
        mov ecx, dword ptr [esp + 0x64]
        mov edx, dword ptr [esi + 0xe4]
        add ecx, -0x1
        push ecx
        push edx
        lea eax, [esp + 0x80]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006A6106
        mov ecx, dword ptr [esp + 0x64]
        mov edx, dword ptr [esp + 0x60]
        add ecx, -0x1
        push ecx
        push edx
        lea ecx, [esp + 0x18]
        call ext_006A6100
L_006A9F22:
        mov eax, dword ptr [esi + 0xe8]
        push eax
        push 0x0
        lea eax, [esp + 0x60]
        push eax
        call dword ptr [mem_0092564C]
        push edi
        mov ecx, esi
        call ext_006A7C20
        mov edx, dword ptr [esp + 0x5c]
        cmp edx, dword ptr [esp + 0x2c]
        mov edi, eax
        jg L_006A9F52
        test edi, edi
        jne L_006A9EA0
L_006A9F52:
        cmp byte ptr [esi + 0x179], 0x0
        mov ebx, dword ptr [mem_00925678]
        je L_006AA053
        lea ecx, [esp + 0xa0]
        push ecx
        mov ecx, dword ptr [esi + 0x184]
        lea edx, [esp + 0x8c]
        push edx
        lea eax, [esp + 0x80]
        push eax
        push ecx
        call ext_006B1510
        fld qword ptr [mem_00990D30]
        fstp qword ptr [esp + 0x8]
        sub esp, 0x8
        fld qword ptr [esp + 0xa0]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x90]
        fstp qword ptr [esp]
        call ext_006B13F0
        mov edx, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x40]
        add esp, 0x18
        mov edi, eax
        mov eax, dword ptr [esp + 0x24]
        push 0x1
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x34], edx
        mov edx, dword ptr [esp + 0x30]
        push 0x1
        lea eax, [esp + 0x38]
        push eax
        mov dword ptr [esp + 0x44], ecx
        mov dword ptr [esp + 0x48], edx
        call ebx
        push edi
        push 0x1
        push 0x0
        lea ecx, [esp + 0x4c]
        call ext_006A6148
        lea ecx, [esp + 0x40]
        push ecx
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x140], 0x4
        call ext_006A610C
        push 0x5
        lea ecx, [esp + 0x14]
        mov edi, eax
        call ext_006A636A
        mov edx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x34]
        push edx
        mov edx, dword ptr [esp + 0x34]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        call dword ptr [mem_009240A0]
        push edi
        lea ecx, [esp + 0x14]
        call ext_006A610C
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x13c], 0x3
        mov dword ptr [esp + 0x40], 0x92a23c
        call ext_006A5FF2
L_006AA053:
        mov ecx, dword ptr [esp + 0x80]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_006A610C
        cmp byte ptr [esi + 0x179], 0x0
        je L_006AA078
        push 0x1
        push 0x1
        lea edx, [esp + 0x28]
        push edx
        call ebx
L_006AA078:
        mov edx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x2c]
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x28]
        push 0xcc0020
        push edx
        push edi
        push ebx
        sub eax, edx
        push eax
        mov eax, dword ptr [esp + 0xc0]
        sub ecx, edi
        push ecx
        push edx
        push edi
        push eax
        call dword ptr [mem_009240F8]
        cmp byte ptr [esi + 0xf6], 0x0
        je L_006AA120
        mov eax, dword ptr [esp + 0x54]
        mov ecx, dword ptr [esp + 0x4c]
        mov edi, dword ptr [esp + 0x48]
        mov ebp, dword ptr [esp + 0x50]
        mov ebx, eax
        sub eax, dword ptr [esi + 0xf8]
        mov dword ptr [esp + 0x94], ecx
        mov ecx, eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], edi
        mov dword ptr [eax + 0x4], ecx
        lea edx, [esp + 0x20]
        mov dword ptr [esp + 0xa4], ecx
        mov dword ptr [eax + 0x8], ebp
        push edx
        mov ecx, esi
        mov dword ptr [eax + 0xc], ebx
        call ext_006A8D90
        mov eax, dword ptr [esp + 0x94]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0xac]
        push 0xcc0020
        push eax
        push edi
        push ecx
        sub ebx, eax
        push ebx
        sub ebp, edi
        push ebp
        push eax
        push edi
        push edx
        call dword ptr [mem_009240F8]
L_006AA120:
        mov eax, dword ptr [esp + 0x84]
        test eax, eax
        je L_006AA12E
        mov eax, dword ptr [eax + 0x4]
L_006AA12E:
        push eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        call ext_006A6196
        mov esi, 0x92a23c
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x13c], 0x2
        mov dword ptr [esp + 0x70], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x13c], 0x1
        mov dword ptr [esp + 0x68], esi
        call ext_006A5FF2
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x13c], 0x0
        call ext_006A619C
        lea ecx, [esp + 0xa8]
        mov dword ptr [esp + 0x13c], -0x1
        call ext_006A5EBA
        mov ecx, dword ptr [esp + 0x134]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_006A5C62(); extern "C" void ext_006A5C6E(); extern "C" void ext_006A5FFE(); extern "C" void ext_006A63D6(); extern "C" void ext_006A6778(); extern "C" void ext_006A84D0(); extern "C" void ext_006A8800(); extern "C" void ext_006A9340(); extern "C" void ext_006B1830(); extern "C" void ext_006B1900(); extern "C" void ext_006B19B0(); extern "C" void ext_006B1AA0(); extern "C" void ext_006B1C00(); extern "C" void ext_006B1E60(); extern "C" void ext_006B20A0(); extern "C" void ext_006B2230(); extern "C" void ext_006B2400(); extern "C" void ext_006B2590(); extern "C" void ext_006B2900(); extern "C" void ext_00872742(); extern "C" int mem_00924100; extern "C" int mem_009256D4; extern "C" int mem_00925680;
// [0x006A95E0] sub_006A95E0 (1664 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A95E0(void* self) {
    __asm {
        push -0x1
        
        push 0x8b7296
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_006A5C6E
        xor ebx, ebx
        lea edi, [esi + 0x74]
        mov ecx, edi
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esi], 0x990bb4
        mov dword ptr [esi + 0x54], ebx
        mov dword ptr [esi + 0x58], ebx
        mov dword ptr [esi + 0x5c], ebx
        mov dword ptr [esi + 0x60], ebx
        mov dword ptr [esi + 0x64], ebx
        mov dword ptr [esi + 0x68], ebx
        call ext_006A6778
        mov dword ptr [edi], 0x990924
        lea edi, [esi + 0x88]
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x1
        call ext_006A6778
        mov dword ptr [edi], 0x99093c
        lea edi, [esi + 0x9c]
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x2
        call ext_006A6778
        mov dword ptr [edi], 0x990954
        lea edi, [esi + 0xb0]
        push 0xa
        mov ecx, edi
        mov byte ptr [esp + 0x24], 0x3
        call ext_00872742
        mov dword ptr [edi], 0x99096c
        mov dword ptr [esi + 0xd0], ebx
        mov dword ptr [esi + 0xcc], 0x92c4ac
        mov dword ptr [esi + 0xd8], ebx
        mov dword ptr [esi + 0xd4], 0x92c4ac
        lea ebp, [esi + 0xdc]
        mov dword ptr [ebp + 0x4], ebx
        mov dword ptr [ebp], 0x92a5d4
        lea edi, [esi + 0x108]
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x7
        mov dword ptr [esi + 0xe4], 0x10
        mov dword ptr [esi + 0xe8], 0xffffffff
        mov dword ptr [esi + 0xec], ebx
        mov dword ptr [esi + 0xf0], ebx
        mov byte ptr [esi + 0xf4], bl
        mov byte ptr [esi + 0xf5], 0x1
        mov byte ptr [esi + 0xf6], bl
        mov dword ptr [esi + 0xf8], 0x28
        mov byte ptr [esi + 0xfc], bl
        mov byte ptr [esi + 0xfd], 0x1
        mov dword ptr [esi + 0x100], ebx
        mov dword ptr [esi + 0x104], ebx
        call ext_006A5C6E
        mov dword ptr [edi], 0x990994
        mov byte ptr [esp + 0x20], 0x8
        mov byte ptr [esi + 0x15c], bl
        mov byte ptr [esi + 0x168], bl
        mov byte ptr [esi + 0x169], bl
        mov dword ptr [esi + 0x16c], 0x1
        mov byte ptr [esi + 0x170], bl
        mov dword ptr [esi + 0x174], ebx
        mov byte ptr [esi + 0x178], bl
        mov byte ptr [esi + 0x179], bl
        mov dword ptr [esi + 0x17c], ebx
        mov byte ptr [esi + 0x180], bl
        mov dword ptr [esi + 0x184], 0xc0c0c0
        mov ecx, esi
        mov byte ptr [esi + 0x198], bl
        mov dword ptr [esi + 0x19c], ebx
        call ext_006A84D0
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x9
        je L_006A97A2
        push ebx
        push ebx
        push esi
        mov ecx, eax
        call ext_006B2900
        jmp L_006A97A4
    L_006A97A2:
        xor eax, eax
    L_006A97A4:
        push eax
        push 0x92dfc8
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0xa
        je L_006A97DA
        push ebx
        push 0x1
        push esi
        mov ecx, eax
        call ext_006B2900
        jmp L_006A97DC
    L_006A97DA:
        xor eax, eax
    L_006A97DC:
        push eax
        push 0x990ba4
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0xb
        je L_006A9812
        push 0x1
        push ebx
        push esi
        mov ecx, eax
        call ext_006B2900
        jmp L_006A9814
    L_006A9812:
        xor eax, eax
    L_006A9814:
        push eax
        push 0x990b98
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0xc
        je L_006A9848
        push ebx
        push esi
        mov ecx, eax
        call ext_006B2590
        jmp L_006A984A
    L_006A9848:
        xor eax, eax
    L_006A984A:
        push eax
        push 0x92df88
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0xd
        je L_006A987D
        push esi
        mov ecx, eax
        call ext_006B2400
        jmp L_006A987F
    L_006A987D:
        xor eax, eax
    L_006A987F:
        push eax
        push 0x990b8c
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0xe
        je L_006A98B4
        push 0x1
        push esi
        mov ecx, eax
        call ext_006B2590
        jmp L_006A98B6
    L_006A98B4:
        xor eax, eax
    L_006A98B6:
        push eax
        push 0x990b84
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0xf
        je L_006A98ED
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        call ext_006B2230
        jmp L_006A98EF
    L_006A98ED:
        xor eax, eax
    L_006A98EF:
        push eax
        push 0x92df90
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x10
        je L_006A9927
        push ebx
        push ebx
        push ebx
        push 0x1
        push esi
        mov ecx, eax
        call ext_006B2230
        jmp L_006A9929
    L_006A9927:
        xor eax, eax
    L_006A9929:
        push eax
        push 0x990b78
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x11
        je L_006A9961
        push ebx
        push ebx
        push 0x1
        push ebx
        push esi
        mov ecx, eax
        call ext_006B2230
        jmp L_006A9963
    L_006A9961:
        xor eax, eax
    L_006A9963:
        push eax
        push 0x990b70
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x12
        je L_006A999C
        push ebx
        push ebx
        push 0x1
        push 0x1
        push esi
        mov ecx, eax
        call ext_006B2230
        jmp L_006A999E
    L_006A999C:
        xor eax, eax
    L_006A999E:
        push eax
        push 0x990b64
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x13
        je L_006A99D8
        push ebx
        push 0x1
        push 0x1
        push 0x1
        push esi
        mov ecx, eax
        call ext_006B2230
        jmp L_006A99DA
    L_006A99D8:
        xor eax, eax
    L_006A99DA:
        push eax
        push 0x92dfa8
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x14
        je L_006A9A0D
        push esi
        mov ecx, eax
        call ext_006B20A0
        jmp L_006A9A0F
    L_006A9A0D:
        xor eax, eax
    L_006A9A0F:
        push eax
        push 0x990b58
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x15
        je L_006A9A42
        push esi
        mov ecx, eax
        call ext_006B1E60
        jmp L_006A9A44
    L_006A9A42:
        xor eax, eax
    L_006A9A44:
        push eax
        push 0x990b4c
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x16
        je L_006A9A77
        push esi
        mov ecx, eax
        call ext_006B1C00
        jmp L_006A9A79
    L_006A9A77:
        xor eax, eax
    L_006A9A79:
        push eax
        push 0x990b44
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x17
        je L_006A9AAC
        push esi
        mov ecx, eax
        call ext_006B1AA0
        jmp L_006A9AAE
    L_006A9AAC:
        xor eax, eax
    L_006A9AAE:
        push eax
        push 0x92dfd0
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x18
        je L_006A9AE6
        push 0x1
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, eax
        call ext_006B2230
        jmp L_006A9AE8
    L_006A9AE6:
        xor eax, eax
    L_006A9AE8:
        push eax
        push 0x92df98
        mov ecx, esi
        mov byte ptr [esp + 0x28], 0x8
        call ext_006A8800
        push 0x11
        call dword ptr [mem_00924100]
        push eax
        mov ecx, ebp
        call ext_006A5FFE
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        cmp eax, ebx
        je L_006A9B20
        mov dword ptr [eax], 0x99090c
        jmp L_006A9B22
    L_006A9B20:
        xor eax, eax
    L_006A9B22:
        push eax
        mov ecx, esi
        call ext_006A9340
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        cmp eax, ebx
        je L_006A9B40
        mov dword ptr [eax], 0x990918
        jmp L_006A9B42
    L_006A9B40:
        xor eax, eax
    L_006A9B42:
        push eax
        mov ecx, esi
        call ext_006A9340
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x19
        je L_006A9B6A
        mov ecx, eax
        call ext_006B19B0
        jmp L_006A9B6C
    L_006A9B6A:
        xor eax, eax
    L_006A9B6C:
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x24], 0x8
        call ext_006A9340
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x1a
        je L_006A9B99
        mov ecx, eax
        call ext_006B1900
        jmp L_006A9B9B
    L_006A9B99:
        xor eax, eax
    L_006A9B9B:
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x24], 0x8
        call ext_006A9340
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x1b
        je L_006A9BC8
        mov ecx, eax
        call ext_006B1830
        jmp L_006A9BCA
    L_006A9BC8:
        xor eax, eax
    L_006A9BCA:
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x24], 0x8
        call ext_006A9340
        push 0x7d4
        push 0x2
        push 0x7d4
        call ext_006A63D6
        mov edi, dword ptr [mem_009256D4]
        push eax
        call edi
        push eax
        lea ecx, [esi + 0xcc]
        call ext_006A5FFE
        push 0x7d2
        push 0x2
        push 0x7d2
        call ext_006A63D6
        push eax
        call edi
        push eax
        lea ecx, [esi + 0xd4]
        call ext_006A5FFE
        mov edi, dword ptr [mem_00925680]
        push 0xd
        call edi
        push 0x5
        mov dword ptr [esi + 0x188], eax
        call edi
        push 0xe
        mov dword ptr [esi + 0x18c], eax
        call edi
        push 0x8
        mov dword ptr [esi + 0x190], eax
        call edi
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x194], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x006A43D0] sub_006A43D0 (1857 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A43D0(void* self) {
    __asm {
        sub esp, 0x84
        test al, 0x3
        mov ecx, dword ptr [esp + 0x88]
        mov edx, dword ptr [ecx + 0x8]
        push ebx
        mov ebx, dword ptr [ecx + 0xc]
        push ebp
        mov ebp, dword ptr [ecx + 0x10]
        push esi
        mov dword ptr [esp + 0x28], edx
        mov edx, dword ptr [ecx + 0x14]
        push edi
        je loc_006A4406
        mov esi, eax
        mov ecx, 0x10
        lea edi, [esp + 0x54]
        rep movsd
        lea eax, [esp + 0x54]
    loc_006A4406:
        mov ecx, dword ptr [eax]
        mov esi, ebx
        not esi
        and esi, edx
        mov edi, ebp
        and edi, ebx
        or esi, edi
        add esi, ecx
        mov dword ptr [esp + 0x4c], ecx
        mov ecx, dword ptr [esp + 0x2c]
        lea ecx, [esi + ecx - 0x28955b88]
        mov esi, dword ptr [eax + 0x4]
        mov edi, ebx
        mov dword ptr [esp + 0x24], esi
        rol ecx, 0x7
        add ecx, ebx
        and edi, ecx
        mov esi, ecx
        not esi
        and esi, ebp
        or esi, edi
        add esi, dword ptr [esp + 0x24]
        lea edx, [esi + edx - 0x173848aa]
        mov esi, dword ptr [eax + 0x8]
        rol edx, 0xc
        add edx, ecx
        mov dword ptr [esp + 0x3c], esi
        mov esi, edx
        not esi
        and esi, ebx
        mov edi, edx
        and edi, ecx
        or esi, edi
        add esi, dword ptr [esp + 0x3c]
        mov edi, dword ptr [eax + 0xc]
        lea esi, [esi + ebp + 0x242070db]
        ror esi, 0xf
        add esi, edx
        mov dword ptr [esp + 0x30], edi
        mov ebp, edx
        and ebp, esi
        mov edi, esi
        not edi
        and edi, ecx
        or edi, ebp
        add edi, dword ptr [esp + 0x30]
        mov ebp, esi
        lea ebx, [edi + ebx - 0x3e423112]
        mov edi, dword ptr [eax + 0x10]
        ror ebx, 0xa
        add ebx, esi
        mov dword ptr [esp + 0x10], ebx
        and ebp, dword ptr [esp + 0x10]
        not ebx
        and ebx, edx
        or ebx, ebp
        add ebx, edi
        lea ecx, [ebx + ecx - 0xa83f051]
        mov ebx, dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x48], ebx
        rol ecx, 0x7
        mov dword ptr [esp + 0x44], edi
        mov edi, dword ptr [esp + 0x10]
        add ecx, edi
        mov ebx, ecx
        not ebx
        and ebx, esi
        mov ebp, edi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x48]
        lea edx, [ebx + edx + 0x4787c62a]
        mov ebx, dword ptr [eax + 0x18]
        rol edx, 0xc
        add edx, ecx
        mov dword ptr [esp + 0x1c], ebx
        mov ebx, edx
        not ebx
        mov ebp, edx
        and ebx, edi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x1c]
        mov ebp, edx
        lea esi, [ebx + esi - 0x57cfb9ed]
        mov ebx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0x28], ebx
        ror esi, 0xf
        add esi, edx
        and ebp, esi
        mov ebx, esi
        not ebx
        and ebx, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x28]
        mov ebp, esi
        lea edi, [ebx + edi - 0x2b96aff]
        mov ebx, dword ptr [eax + 0x20]
        ror edi, 0xa
        add edi, esi
        mov dword ptr [esp + 0x10], edi
        and ebp, dword ptr [esp + 0x10]
        not edi
        and edi, edx
        or edi, ebp
        add edi, ebx
        mov dword ptr [esp + 0x40], ebx
        mov ebx, dword ptr [eax + 0x24]
        lea ecx, [edi + ecx + 0x698098d8]
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x18], ebx
        rol ecx, 0x7
        add ecx, edi
        mov ebp, edi
        and ebp, ecx
        mov ebx, ecx
        not ebx
        and ebx, esi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x18]
        lea edx, [ebx + edx - 0x74bb0851]
        mov ebx, dword ptr [eax + 0x28]
        mov dword ptr [esp + 0x38], ebx
        rol edx, 0xc
        add edx, ecx
        mov ebx, edx
        not ebx
        and ebx, edi
        mov ebp, edx
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x38]
        mov ebp, edx
        lea esi, [ebx + esi - 0xa44f]
        mov ebx, dword ptr [eax + 0x2c]
        ror esi, 0xf
        add esi, edx
        mov dword ptr [esp + 0x14], ebx
        and ebp, esi
        mov ebx, esi
        not ebx
        and ebx, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x14]
        mov ebp, esi
        lea edi, [ebx + edi - 0x76a32842]
        mov ebx, dword ptr [eax + 0x30]
        ror edi, 0xa
        add edi, esi
        mov dword ptr [esp + 0x10], edi
        and ebp, dword ptr [esp + 0x10]
        not edi
        and edi, edx
        or edi, ebp
        add edi, ebx
        lea ecx, [edi + ecx + 0x6b901122]
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x2c], ebx
        mov ebx, dword ptr [eax + 0x34]
        rol ecx, 0x7
        add ecx, edi
        mov dword ptr [esp + 0x20], ebx
        mov ebp, edi
        and ebp, ecx
        mov ebx, ecx
        not ebx
        and ebx, esi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x20]
        lea edx, [ebx + edx - 0x2678e6d]
        rol edx, 0xc
        add edx, ecx
        mov ebx, edx
        not ebx
        mov ebp, ebx
        and ebp, edi
        mov edi, edx
        and edi, ecx
        or ebp, edi
        mov edi, dword ptr [eax + 0x38]
        mov eax, dword ptr [eax + 0x3c]
        add ebp, edi
        mov dword ptr [esp + 0x34], eax
        lea esi, [esi + ebp - 0x5986bc72]
        ror esi, 0xf
        add esi, edx
        mov dword ptr [esp + 0x50], edi
        mov ebp, esi
        not ebp
        mov eax, ebp
        and eax, ecx
        mov edi, edx
        and edi, esi
        or eax, edi
        add eax, dword ptr [esp + 0x34]
        mov edi, dword ptr [esp + 0x10]
        lea edi, [eax + edi + 0x49b40821]
        and ebx, esi
        ror edi, 0xa
        add edi, esi
        mov eax, edx
        and eax, edi
        or ebx, eax
        add ebx, dword ptr [esp + 0x24]
        and ebp, edi
        lea ecx, [ebx + ecx - 0x9e1da9e]
        rol ecx, 0x5
        add ecx, edi
        mov eax, esi
        and eax, ecx
        or ebp, eax
        add ebp, dword ptr [esp + 0x1c]
        mov eax, edi
        not eax
        and eax, ecx
        lea edx, [edx + ebp - 0x3fbf4cc0]
        rol edx, 0x9
        add edx, ecx
        mov ebx, edx
        and ebx, edi
        or eax, ebx
        add eax, dword ptr [esp + 0x14]
        lea esi, [eax + esi + 0x265e5a51]
        rol esi, 0xe
        add esi, edx
        mov eax, ecx
        not eax
        and eax, edx
        mov ebx, esi
        and ebx, ecx
        or eax, ebx
        add eax, dword ptr [esp + 0x4c]
        mov ebx, edx
        lea edi, [eax + edi - 0x16493856]
        ror edi, 0xc
        not ebx
        add edi, esi
        mov eax, edx
        and eax, edi
        and ebx, esi
        or ebx, eax
        mov eax, dword ptr [esp + 0x48]
        add ebx, eax
        lea ecx, [ebx + ecx - 0x29d0efa3]
        rol ecx, 0x5
        add ecx, edi
        mov ebx, esi
        not ebx
        and ebx, edi
        mov ebp, esi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x38]
        lea edx, [ebx + edx + 0x2441453]
        rol edx, 0x9
        add edx, ecx
        mov ebx, edi
        not ebx
        and ebx, ecx
        mov ebp, edx
        and ebp, edi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x34]
        lea esi, [ebx + esi - 0x275e197f]
        rol esi, 0xe
        add esi, edx
        mov ebx, ecx
        not ebx
        and ebx, edx
        mov ebp, esi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x44]
        mov ebp, edx
        lea edi, [ebx + edi - 0x182c0438]
        ror edi, 0xc
        add edi, esi
        and ebp, edi
        mov ebx, edx
        not ebx
        and ebx, esi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x18]
        mov ebp, esi
        lea ecx, [ebx + ecx + 0x21e1cde6]
        rol ecx, 0x5
        add ecx, edi
        and ebp, ecx
        mov ebx, esi
        not ebx
        and ebx, edi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x50]
        lea edx, [ebx + edx - 0x3cc8f82a]
        rol edx, 0x9
        add edx, ecx
        mov ebx, edi
        not ebx
        and ebx, ecx
        mov ebp, edx
        and ebp, edi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x30]
        lea esi, [ebx + esi - 0xb2af279]
        rol esi, 0xe
        add esi, edx
        mov ebx, ecx
        not ebx
        and ebx, edx
        mov ebp, esi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x40]
        mov ebp, edx
        lea edi, [ebx + edi + 0x455a14ed]
        ror edi, 0xc
        mov ebx, edx
        not ebx
        add edi, esi
        and ebx, esi
        and ebp, edi
        or ebx, ebp
        add ebx, dword ptr [esp + 0x20]
        lea ecx, [ebx + ecx - 0x561c16fb]
        rol ecx, 0x5
        add ecx, edi
        mov ebx, esi
        not ebx
        and ebx, edi
        mov ebp, esi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x3c]
        lea edx, [ebx + edx - 0x3105c08]
        rol edx, 0x9
        add edx, ecx
        mov ebp, edx
        and ebp, edi
        mov ebx, edi
        not ebx
        and ebx, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x28]
        lea esi, [ebx + esi + 0x676f02d9]
        rol esi, 0xe
        add esi, edx
        mov ebx, ecx
        not ebx
        and ebx, edx
        mov ebp, esi
        and ebp, ecx
        or ebx, ebp
        add ebx, dword ptr [esp + 0x2c]
        lea edi, [ebx + edi - 0x72d5b376]
        ror edi, 0xc
        add edi, esi
        mov ebx, edx
        xor ebx, esi
        xor ebx, edi
        add ebx, eax
        lea ecx, [ebx + ecx - 0x5c6be]
        rol ecx, 0x4
        add ecx, edi
        mov eax, esi
        xor eax, edi
        xor eax, ecx
        add eax, dword ptr [esp + 0x40]
        lea ebp, [eax + edx - 0x788e097f]
        rol ebp, 0xb
        add ebp, ecx
        mov edx, ebp
        xor edx, edi
        xor edx, ecx
        add edx, dword ptr [esp + 0x14]
        mov eax, ebp
        lea esi, [edx + esi + 0x6d9d6122]
        rol esi, 0x10
        add esi, ebp
        xor eax, esi
        mov edx, eax
        xor edx, ecx
        add edx, dword ptr [esp + 0x50]
        lea edx, [edx + edi - 0x21ac7f4]
        ror edx, 0x9
        add edx, esi
        xor eax, edx
        add eax, dword ptr [esp + 0x24]
        lea ecx, [eax + ecx - 0x5b4115bc]
        rol ecx, 0x4
        add ecx, edx
        mov eax, esi
        xor eax, edx
        xor eax, ecx
        add eax, dword ptr [esp + 0x44]
        lea edi, [eax + ebp + 0x4bdecfa9]
        rol edi, 0xb
        add edi, ecx
        mov eax, edi
        xor eax, edx
        xor eax, ecx
        add eax, dword ptr [esp + 0x28]
        lea esi, [eax + esi - 0x944b4a0]
        rol esi, 0x10
        add esi, edi
        mov eax, edi
        xor eax, esi
        mov ebx, eax
        xor ebx, ecx
        add ebx, dword ptr [esp + 0x38]
        lea edx, [ebx + edx - 0x41404390]
        ror edx, 0x9
        add edx, esi
        xor eax, edx
        add eax, dword ptr [esp + 0x20]
        lea ecx, [eax + ecx + 0x289b7ec6]
        rol ecx, 0x4
        add ecx, edx
        mov eax, esi
        xor eax, edx
        xor eax, ecx
        add eax, dword ptr [esp + 0x4c]
        lea edi, [eax + edi - 0x155ed806]
        rol edi, 0xb
        add edi, ecx
        mov eax, edi
        xor eax, edx
        xor eax, ecx
        add eax, dword ptr [esp + 0x30]
        lea ebp, [eax + esi - 0x2b10cf7b]
        rol ebp, 0x10
        add ebp, edi
        mov eax, edi
        xor eax, ebp
        mov esi, eax
        xor esi, ecx
        add esi, dword ptr [esp + 0x1c]
        lea edx, [esi + edx + 0x4881d05]
        ror edx, 0x9
        add edx, ebp
        xor eax, edx
        add eax, dword ptr [esp + 0x18]
        mov esi, ebp
        xor esi, edx
        lea ecx, [eax + ecx - 0x262b2fc7]
        mov eax, dword ptr [esp + 0x2c]
        rol ecx, 0x4
        add ecx, edx
        xor esi, ecx
        add esi, eax
        lea esi, [esi + edi - 0x1924661b]
        rol esi, 0xb
        add esi, ecx
        mov edi, esi
        xor edi, edx
        xor edi, ecx
        add edi, dword ptr [esp + 0x34]
        mov ebx, esi
        lea edi, [edi + ebp + 0x1fa27cf8]
        mov ebp, dword ptr [esp + 0x3c]
        rol edi, 0x10
        add edi, esi
        xor ebx, edi
        xor ebx, ecx
        add ebx, ebp
        lea edx, [ebx + edx - 0x3b53a99b]
        ror edx, 0x9
        add edx, edi
        mov ebx, esi
        not ebx
        or ebx, edx
        xor ebx, edi
        add ebx, dword ptr [esp + 0x4c]
        lea ecx, [ebx + ecx - 0xbd6ddbc]
        rol ecx, 0x6
        add ecx, edx
        mov ebx, edi
        not ebx
        or ebx, ecx
        xor ebx, edx
        add ebx, dword ptr [esp + 0x28]
        lea esi, [ebx + esi + 0x432aff97]
        rol esi, 0xa
        mov ebx, edx
        add esi, ecx
        not ebx
        or ebx, esi
        xor ebx, ecx
        add ebx, dword ptr [esp + 0x50]
        lea edi, [ebx + edi - 0x546bdc59]
        rol edi, 0xf
        add edi, esi
        mov ebx, ecx
        not ebx
        or ebx, edi
        xor ebx, esi
        add ebx, dword ptr [esp + 0x48]
        lea edx, [ebx + edx - 0x36c5fc7]
        ror edx, 0xb
        add edx, edi
        mov ebx, esi
        not ebx
        or ebx, edx
        xor ebx, edi
        add ebx, eax
        mov eax, edi
        not eax
        lea ecx, [ebx + ecx + 0x655b59c3]
        rol ecx, 0x6
        add ecx, edx
        or eax, ecx
        xor eax, edx
        add eax, dword ptr [esp + 0x30]
        lea esi, [eax + esi - 0x70f3336e]
        rol esi, 0xa
        add esi, ecx
        mov eax, edx
        not eax
        or eax, esi
        xor eax, ecx
        add eax, dword ptr [esp + 0x38]
        lea edi, [eax + edi - 0x100b83]
        rol edi, 0xf
        add edi, esi
        mov eax, ecx
        not eax
        or eax, edi
        xor eax, esi
        add eax, dword ptr [esp + 0x24]
        lea edx, [eax + edx - 0x7a7ba22f]
        mov eax, esi
        not eax
        ror edx, 0xb
        add edx, edi
        or eax, edx
        xor eax, edi
        add eax, dword ptr [esp + 0x40]
        lea ecx, [eax + ecx + 0x6fa87e4f]
        mov eax, edi
        rol ecx, 0x6
        add ecx, edx
        not eax
        or eax, ecx
        xor eax, edx
        add eax, dword ptr [esp + 0x34]
        lea eax, [eax + esi - 0x1d31920]
        rol eax, 0xa
        add eax, ecx
        mov esi, edx
        not esi
        or esi, eax
        xor esi, ecx
        add esi, dword ptr [esp + 0x1c]
        lea esi, [esi + edi - 0x5cfebcec]
        rol esi, 0xf
        add esi, eax
        mov edi, ecx
        not edi
        or edi, esi
        xor edi, eax
        add edi, dword ptr [esp + 0x20]
        lea edx, [edi + edx + 0x4e0811a1]
        ror edx, 0xb
        mov edi, eax
        add edx, esi
        not edi
        or edi, edx
        xor edi, esi
        add edi, dword ptr [esp + 0x44]
        lea ecx, [edi + ecx - 0x8ac817e]
        rol ecx, 0x6
        add ecx, edx
        mov edi, esi
        not edi
        or edi, ecx
        xor edi, edx
        add edi, dword ptr [esp + 0x14]
        lea eax, [edi + eax - 0x42c50dcb]
        mov edi, edx
        not edi
        rol eax, 0xa
        add eax, ecx
        or edi, eax
        xor edi, ecx
        add edi, ebp
        lea esi, [edi + esi + 0x2ad7d2bb]
        mov edi, ecx
        rol esi, 0xf
        add esi, eax
        not edi
        or edi, esi
        xor edi, eax
        add edi, dword ptr [esp + 0x18]
        lea edx, [edi + edx - 0x14792c6f]
        mov edi, dword ptr [esp + 0x98]
        mov ebx, dword ptr [edi + 0x8]
        add ebx, ecx
        mov ecx, dword ptr [edi + 0x10]
        ror edx, 0xb
        add edx, dword ptr [edi + 0xc]
        add ecx, esi
        mov dword ptr [edi + 0x10], ecx
        mov ecx, dword ptr [edi + 0x14]
        add edx, esi
        add ecx, eax
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], edx
        mov dword ptr [edi + 0x14], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x84
        ret
    }
}

// [0x006A4B50] sub_006A4B50 (202 bytes)
extern "C" void ext_006A43D0();
extern "C" void ext_006A6EF8();

extern "C" __declspec(naked) void __fastcall fn_006A4B50(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esi]
        shr edi, 3
        and edi, 0x3f
        test ebx, ebx
        lea eax, [ebx * 8]
        jle loc_6A4C15
        add dword ptr [esi], eax
        mov ecx, ebx
        sar ecx, 0x1d
        add dword ptr [esi + 4], ecx
        cmp dword ptr [esi], eax
        mov ecx, dword ptr [esi + 4]
        jae loc_6A4B8E
        add ecx, 1
        mov dword ptr [esi + 4], ecx
loc_6A4B8E:
        test edi, edi
        je loc_6A4BDD
        lea edx, [edi + ebx]
        cmp edx, 0x40
        jle loc_6A4BA3
        mov ebp, 0x40
        sub ebp, edi
        jmp loc_6A4BA5
loc_6A4BA3:
        mov ebp, ebx
loc_6A4BA5:
        mov eax, dword ptr [esp + 0x18]
        push ebp
        push eax
        lea ecx, [edi + esi + 0x18]
        push ecx
        call ext_006A6EF8
        lea edx, [edi + ebp]
        add esp, 0xc
        cmp edx, 0x40
        jl loc_6A4C15
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [eax + ebp]
        lea eax, [esi + 0x18]
        push esi
        mov dword ptr [esp + 0x1c], ecx
        sub ebx, ebp
        call ext_006A43D0
        mov ebp, dword ptr [esp + 0x1c]
        add esp, 4
loc_6A4BDD:
        cmp ebx, 0x40
        jl loc_6A4C03
        mov edi, ebx
        shr edi, 6
        mov edx, edi
        neg edx
        shl edx, 6
        add ebx, edx
loc_6A4BF0:
        push esi
        mov eax, ebp
        call ext_006A43D0
        add esp, 4
        add ebp, 0x40
        sub edi, 1
        jne loc_6A4BF0
loc_6A4C03:
        test ebx, ebx
        je loc_6A4C15
        push ebx
        push ebp
        add esi, 0x18
        push esi
        call ext_006A6EF8
        add esp, 0xc
loc_6A4C15:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006A4C20] sub_006A4C20 (168 bytes)
extern "C" void ext_006A4B50();
extern "C" unsigned char mem_00990890[1];

extern "C" __declspec(naked) void __fastcall fn_006A4C20(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        mov ecx, eax
        shr ecx, 8
        mov byte ptr [esp + 5], cl
        mov ecx, eax
        shr ecx, 0x18
        mov byte ptr [esp + 7], cl
        mov ecx, dword ptr [esi + 4]
        mov edx, eax
        shr edx, 0x10
        mov byte ptr [esp + 6], dl
        mov edx, ecx
        shr edx, 8
        mov byte ptr [esp + 8], cl
        mov byte ptr [esp + 9], dl
        mov edx, ecx
        shr ecx, 0x18
        mov byte ptr [esp + 0xb], cl
        mov byte ptr [esp + 4], al
        shr eax, 3
        mov ecx, 0xfffffff7
        sub ecx, eax
        and ecx, 0x3f
        push edi
        add ecx, 1
        push ecx
        shr edx, 0x10
        push 0x990890
        push esi
        mov byte ptr [esp + 0x1a], dl
        call ext_006A4B50
        push 8
        lea edx, [esp + 0x18]
        push edx
        push esi
        call ext_006A4B50
        mov edi, dword ptr [esp + 0x30]
        add esp, 0x18
        xor eax, eax
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loop_6a4ca0:
        mov ecx, eax
        and ecx, 3
        add ecx, ecx
        mov edx, eax
        sar edx, 2
        mov edx, dword ptr [esi + 4 * edx + 8]
        add ecx, ecx
        add ecx, ecx
        shr edx, cl
        add eax, 1
        cmp eax, 0x10
        mov byte ptr [eax + edi - 1], dl
        jl loop_6a4ca0
        pop edi
        pop esi
        add esp, 8
        ret
    }
}

// [0x006A4380] sub_006A4380 (72 bytes)
extern "C" void ext_00536600();
extern "C" void ext_00805A20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006A4380(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push 0
        mov edi, ecx
        push 0x20
        mov ecx, esi
        call ext_00536600
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je loc_6A43A1
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        jne loc_6A43A7
    loc_6A43A1:
        call dword ptr [mem_00925134]
    loc_6A43A7:
        mov esi, dword ptr [esi + 4]
        mov edx, dword ptr [edi]
        push esi
        push 0x20
        push 0
        push 0xfff0
        push edx
        call ext_00805A20
        neg eax
        sbb eax, eax
        pop edi
        add eax, 1
        pop esi
        ret 4
    }
}

// [0x006AAC90] sub_006AAC90 (72 bytes)
extern "C" void ext_006A663A();
extern "C" void ext_006AA920();
extern "C" void ext_006AD0D0();
extern "C" int mem_00925688;
extern "C" __declspec(naked) void __fastcall fn_006AAC90(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_006A663A
        cmp edi, dword ptr [esi + 0x100]
        jne short L_006AAC90_inv
        test edi, edi
        jne short L_006AAC90_end
L_006AAC90_inv:
        mov eax, dword ptr [esi + 0x20]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi + 0x54]
        test ecx, ecx
        lea edi, [esi + 0x54]
        je short L_006AAC90_end
        call ext_006AD0D0
        test al, al
        jne short L_006AAC90_end
        push edi
        mov ecx, esi
        call ext_006AA920
L_006AAC90_end:
        pop edi
        pop esi
        ret 4
    }
}

// [0x006A3FA0] sub_006A3FA0 (79 bytes)
extern "C" void ext_00804C10();
extern "C" int mem_00AA4B74;
extern "C" int mem_009905A0;

extern "C" __declspec(naked) void __fastcall fn_006A3FA0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        mov eax, dword ptr [mem_00AA4B74]
        sub esp, 0x2e8
        push esi
        or eax, 0xffff0000
        cmp byte ptr [ebp + 8], 0
        push edi
        mov edx, ecx
        je L_skip
        or eax, 0x8000
    L_skip:
        mov ecx, 0xb8
        mov esi, offset mem_009905A0
        lea edi, [esp + 8]
        rep movsd
        push edx
        lea ecx, [esp + 0xc]
        push ecx
        push eax
        movsb
        call ext_00804C10
        test eax, eax
        pop edi
        sete al
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x006AFD40] sub_006AFD40 (92 bytes)
extern "C" void ext_006AFA60();
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" __declspec(naked) void* __fastcall fn_006AFD40(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b76a9
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call ext_006AFA60
        lea ecx, [esp + 0x18]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x4]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x8
    }
}

// [0x006A3700] sub_006A3700 (95 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_0041A100();
extern "C" __declspec(naked) void __fastcall fn_006A3700(void* self, int edx_unused, unsigned int n, const char* src) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp ebp, ebx
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        je done_6A3700
        cmp ebp, -1
        jbe skip_6A3700
        call ext_00405FB0
    skip_6A3700:
        push edi
        push ebx
        push ebp
        call ext_0041A100
        lea ecx, [eax + ebp]
        add esp, 8
        cmp ebp, ebx
        mov dword ptr [esi + 0xc], ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov ecx, ebp
        mov edi, eax
        jbe tail_6A3700
        mov edx, dword ptr [esp + 0x18]
    copy_6A3700:
        mov bl, byte ptr [edx]
        mov byte ptr [edi], bl
        sub ecx, 1
        add edi, 1
        test ecx, ecx
        ja copy_6A3700
    tail_6A3700:
        add eax, ebp
        mov dword ptr [esi + 0x8], eax
        pop edi
    done_6A3700:
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

// [0x006ABF00] sub_006ABF00 (97 bytes)
extern "C" void ext_006AA260();
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006ABF00(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b76a9
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push eax
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        call ext_006AA260
        lea ecx, [esp + 0x18]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 4]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0xc
    }
}

// [0x006AF9F0] sub_006AF9F0 (97 bytes)
extern "C" void ext_006AF670();
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006AF9F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b76a9
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push eax
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        call ext_006AF670
        lea ecx, [esp + 0x18]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 4]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0xc
    }
}

// [0x006AFCD0] sub_006AFCD0 (107 bytes)
extern "C" void ext_006AF960();
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006AFCD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b76a9
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        push eax
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        call ext_006AF960
        lea ecx, [esp + 0x18]
        mov esi, eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 4]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0x14
    }
}

extern "C" void ext_006B3320();
extern "C" void ext_006AF770();

// [0x006AFA60] sub_006AFA60 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AFA60(void* self, int edx, int a1, int a2) {
    __asm {
        push -1
        push 0x876a9a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x88
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je loc_6afaa9
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push ecx
        push edx
        mov ecx, eax
        call ext_006B3320
        jmp loc_6afaab
    loc_6afaa9:
        xor eax, eax
    loc_6afaab:
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_006AF770
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

extern "C" void ext_006A8760();
extern "C" void ext_006AECD0();

// [0x006AA260] sub_006AA260 (114 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AA260(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x876a9a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x88
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_null
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        mov ecx, eax
        call ext_006AECD0
        jmp L_done
    L_null:
        xor eax, eax
    L_done:
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_006A8760
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x006A7B00] sub_006A7B00 (138 bytes)
extern "C" void ext_006A63BE();
extern "C" void ext_006A7B00();
extern "C" void ext_006A7C10();
extern "C" void ext_006AEC60();
extern "C" void ext_006AF8E0();
extern "C" __declspec(naked) void __fastcall fn_006A7B00(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x4], ecx
        push ebp
        mov ecx, ebx
        call ext_006ACFB0
        mov ebp, dword ptr [esp + 0x10]
        cmp eax, ebp
        jne L_006A7B22
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x8
    L_006A7B22:
        push esi
        push edi
        mov ecx, ebx
        xor edi, edi
        call ext_006A7C10
        test eax, eax
        jle L_006A7B76
    L_006A7B31:
        push edi
        mov ecx, ebx
        call ext_006AF8E0
        mov esi, eax
        call ext_006AEC60
        push eax
        mov ecx, esi
        call ext_006A63BE
        test eax, eax
        je L_006A7B5D
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push ebp
        call ext_006A7B00
        test eax, eax
        jne L_006A7B78
        jmp L_006A7B68
    L_006A7B5D:
        mov ecx, esi
        call ext_006ACFB0
        cmp eax, ebp
        je L_006A7B80
    L_006A7B68:
        mov ecx, ebx
        add edi, 1
        call ext_006A7C10
        cmp edi, eax
        jl L_006A7B31
    L_006A7B76:
        xor eax, eax
    L_006A7B78:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    L_006A7B80:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_006A8A00();
extern "C" void ext_006AD0A0();
extern "C" void ext_006AF530();

// [0x006AF960] sub_006AF960 (140 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006AF960(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -1
        push 0x876a9a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x50
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0xc], eax
        mov ebx, dword ptr [esp + 0x20]
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x18], esi
        je loc_6af9a1
        push ebx
        mov ecx, eax
        call ext_006AD1D0
        mov esi, eax
    loc_6af9a1:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 0x14]
        push ebx
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_006A8A00
        push eax
        mov ecx, esi
        call ext_006AD0A0
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x24]
        push edx
        push eax
        push esi
        mov ecx, edi
        call ext_006AF530
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x14
    }
}

// [0x006A06E0] sub_006A06E0 (163 bytes)
extern "C" void ext_004AB940();
extern "C" void ext_0059A140();
extern "C" int mem_00925134;

extern "C" __declspec(naked) unsigned char __fastcall fn_006A06E0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_06E0_a
        call dword ptr [mem_00925134]
    L_06E0_a:
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_06E0_b
        call dword ptr [mem_00925134]
    L_06E0_b:
        mov eax, dword ptr [esp + 28]
        mov ebp, dword ptr [esp + 28]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 40], edi
        call ext_004AB940
        mov edi, dword ptr [esi + 8]
        add esp, 20
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_06E0_c
        call dword ptr [mem_00925134]
    L_06E0_c:
        test esi, esi
        je L_06E0_d
        cmp esi, esi
        je L_06E0_e
    L_06E0_d:
        call dword ptr [mem_00925134]
    L_06E0_e:
        cmp ebx, edi
        pop edi
        je L_06E0_f
        test esi, esi
        jne L_06E0_g
        call dword ptr [mem_00925134]
    L_06E0_g:
        cmp ebx, dword ptr [esi + 8]
        jb L_06E0_h
        call dword ptr [mem_00925134]
    L_06E0_h:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jb L_06E0_f
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
    L_06E0_f:
        push ebp
        push ebx
        push esi
        lea edx, [esp + 24]
        push edx
        mov ecx, esi
        call ext_0059A140
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x006AF5D0] sub_006AF5D0 (156 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006AD0A0();
extern "C" void ext_006AD1D0();
extern "C" void ext_006AF530();
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006AF5D0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8b7673
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x50
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x14], esi
        je loc_6AF610
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, eax
        call ext_006AD1D0
        mov esi, eax
    loc_6AF610:
        mov edx, dword ptr [esp + 0x24]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006AD0A0
        mov eax, dword ptr [esp + 0x20]
        push eax
        lea ecx, [esp + 0x20]
        call dword ptr [mem_009242F0]
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        lea edx, [esp + 0x20]
        push edx
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x20], 1
        call ext_006AF530
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x006A4010] sub_006A4010 (48 bytes)
extern "C" int mem_00B5CE78;
extern "C" int mem_00B5CE74;
extern "C" int mem_009220A0;
extern "C" void __fastcall ext_006A3FF0(void* self);
extern "C" void ext_006A6C87();

extern "C" void* __fastcall fn_006A4010(void* self) {
    if (!(mem_00B5CE78 & 1)) {
        mem_00B5CE78 |= 1;
        ext_006A3FF0(&mem_00B5CE74);
        ((void (*)(void*))ext_006A6C87)(&mem_009220A0);
    }
    return &mem_00B5CE74;
}

// [0x006AC660] sub_006AC660 (163 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A5EA8();
extern "C" void ext_006A60D0();
extern "C" void ext_006AA1B0();
extern "C" void ext_006AB4F0();
extern "C" void ext_006ABF70();

extern "C" int mem_00925654;
extern "C" int mem_00925688;
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_006AC660(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub     esp, 0x2c
        push    esi
        push    edi
        mov     esi, ecx
        call    dword ptr [mem_00925654]
        push    eax
        call    ext_006A5E00
        cmp     eax, esi
        je      loc_6ac68c
        mov     ecx, esi
        call    ext_006A60D0
        mov     eax, dword ptr [esi + 0x20]
        push    0x1
        push    0x0
        push    eax
        call    dword ptr [mem_00925688]
    loc_6ac68c:
        mov     ecx, dword ptr [esi + 0x174]
        test    ecx, ecx
        je      loc_6ac6bf
        mov     eax, dword ptr [esi + 0x20]
        lea     edx, [esp + 0x8]
        push    edx
        push    0x0
        mov     dword ptr [esp + 0x10], 0x2c
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [ecx + 0x20]
        push    0x411
        push    eax
        call    dword ptr [mem_00925694]
    loc_6ac6bf:
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, esi
        call    ext_006AB4F0
        mov     edi, eax
        cmp     edi, 0x16
        je      loc_6ac6f4
        cmp     edi, 0x19
        je      loc_6ac6f4
        lea     edx, [esp + 0x3c]
        push    edx
        mov     ecx, esi
        call    ext_006AA1B0
        test    eax, eax
        je      loc_6ac6f4
        cmp     edi, 0x17
        je      loc_6ac6f4
        push    eax
        mov     ecx, esi
        call    ext_006ABF70
    loc_6ac6f4:
        mov     ecx, esi
        call    ext_006A5EA8
        pop     edi
        pop     esi
        add     esp, 0x2c
        ret     0xc
    }
}

// [0x006ABF70] sub_006ABF70 (169 bytes)
extern "C" void ext_006A8980();
extern "C" void ext_006A9210();
extern "C" void ext_006AA920();
extern "C" void ext_006ACE20();
extern "C" void ext_006ACF90();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006ABF70(void* self, int edx_unused, int a1) {
    __asm {
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [esp + 0x28]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x54]
        cmp     ecx, ebx
        push    edi
        lea     edi, [esi + 0x54]
        je      L_006ABF70_end
        test    ebx, ebx
        je      L_006ABF70_null
        push    0
        call    ext_006ACF90
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi], ebx
        call    ext_006A9210
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, ebx
        call    ext_006ACE20
        mov     edx, dword ptr [esp + 0x18]
        cmp     edx, dword ptr [esp + 0x28]
        jg      L_006ABF70_after_aa920
        push    edi
        mov     ecx, esi
        call    ext_006AA920
L_006ABF70_after_aa920:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        je      L_006ABF70_tail
        push    1
        call    ext_006ACF90
        jmp     L_006ABF70_tail
L_006ABF70_null:
        cmp     dword ptr [esi + 0x100], 0
        je      L_006ABF70_null_call
        mov     ecx, esi
        call    ext_006A8980
L_006ABF70_null_call:
        mov     ecx, dword ptr [edi]
        push    0
        call    ext_006ACF90
        mov     dword ptr [edi], 0
L_006ABF70_tail:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x14c]
        push    ecx
        mov     ecx, esi
        call    edx
        mov     esi, dword ptr [esi + 0x20]
        test    esi, esi
        je      L_006ABF70_end
        push    1
        push    0
        push    esi
        call    dword ptr [mem_00925688]
L_006ABF70_end:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x20
        ret     4
    }
}

// [0x006ABE30] sub_006ABE30 (198 bytes)
extern "C" void ext_006A7D80();
extern "C" void ext_006A7E00();
extern "C" void ext_006AA2E0();
extern "C" void ext_006AB410();
extern "C" void ext_006AD070();
extern "C" void ext_006AD080();
extern "C" void ext_006AD120();
extern "C" void ext_006AD130();
extern "C" void ext_006AEC90();
extern "C" void ext_006AF840();
extern "C" int mem_0092566C;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_006ABE30(void* self, int edx_unused, void* arg) {
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        call    ext_006AF840
        test    al, al
        je      L_006ABEEE
        mov     ecx, esi
        call    ext_006AEC90
        test    al, al
        je      L_006ABE6E
        mov     ecx, esi
        call    ext_006AD120
        push    eax
        push    esi
        mov     ecx, edi
        call    ext_006A7E00
        mov     ecx, edi
        call    ext_006AA2E0
        jmp     L_006ABEE0
    L_006ABE6E:
        push    ebx
        push    1
        push    esi
        mov     ecx, edi
        call    ext_006A7D80
        mov     ebx, eax
        push    esi
        mov     ecx, ebx
        call    ext_006AD120
        mov     ecx, eax
        call    ext_006AD080
        mov     ecx, ebx
        call    ext_006AD120
        push    eax
        mov     ecx, esi
        call    ext_006AD070
        mov     ecx, ebx
        call    ext_006AD120
        test    eax, eax
        pop     ebx
        jne     L_006ABEA8
        mov     dword ptr [edi + 0x5c], esi
    L_006ABEA8:
        mov     ecx, dword ptr [edi + 0x54]
        push    esi
        call    ext_006AD130
        test    al, al
        je      L_006ABEB8
        mov     dword ptr [edi + 0x54], esi
    L_006ABEB8:
        mov     ecx, dword ptr [edi + 0x20]
        lea     eax, [esp + 0x8]
        push    eax
        push    ecx
        call    dword ptr [mem_0092566C]
        mov     edx, dword ptr [esp + 0x14]
        sub     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        sub     eax, dword ptr [esp + 0x8]
        push    edx
        push    eax
        mov     ecx, edi
        call    ext_006AB410
    L_006ABEE0:
        mov     ecx, dword ptr [edi + 0x20]
        push    1
        push    0
        push    ecx
        call    dword ptr [mem_00925688]
    L_006ABEEE:
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     4
    }
}

// [0x006AEB40] sub_006AEB40 (227 bytes)
extern "C" void ext_0049AA40();
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6784();
extern "C" void ext_006A6790();
extern "C" void ext_006AD980();
extern "C" void ext_006ADE30();

extern "C" __declspec(naked) void __fastcall fn_006AEB40(void* self) {
    __asm {
        push -0x1
        push 0x8b75e6
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x9910bc
        mov dword ptr [esp + 0x18], 0x1
        xor edi, edi
        call ext_0049AA40
        test eax, eax
        jle loc_6aeba4
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    loc_6aeb80:
        push edi
        mov ecx, esi
        call ext_006ADE30
        test eax, eax
        je loc_6aeb96
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    loc_6aeb96:
        mov ecx, esi
        add edi, 0x1
        call ext_0049AA40
        cmp edi, eax
        jl loc_6aeb80
    loc_6aeba4:
        push -0x1
        lea edi, [esi + 0x18]
        push 0x0
        mov ecx, edi
        call ext_006A6790
        mov ecx, dword ptr [esi + 0x30]
        test ecx, ecx
        je loc_6aebc1
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    loc_6aebc1:
        push 0x0
        push 0x0
        mov ecx, esi
        call ext_006AD980
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x0
        call ext_006A6784
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        add esi, 0xc
        push eax
        push esi
        push ecx
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0xffffffff
        call ext_005AEC70
        mov edx, dword ptr [esi + 0x4]
        push edx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x14]
        add esp, 0x4
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x006AA920] sub_006AA920 (233 bytes)
extern "C" void ext_0046C090();
extern "C" void ext_00626440();
extern "C" void ext_006A8980();
extern "C" void ext_006A89B0();
extern "C" void ext_006ACE20();
// ext_006ACFB0 already declared above as int ext_006ACFB0();
extern "C" void ext_006ACFC0();

struct Rect16_006AA920 {
    int a, b, c, d;
};

struct TargetInterface_006AA920 {
    virtual void vf0() = 0;
    virtual void vf1() = 0;
    virtual void vf2() = 0;
    virtual void vf3() = 0;
    virtual void vf4() = 0;
    virtual int vf5(Rect16_006AA920 rect, void* node) = 0;
};

extern "C" void __fastcall fn_006AA920(char* self, void* dummy_edx, void** pNode) {
    typedef bool (__thiscall *F_ACFC0)(void*);
    typedef void (__thiscall *F_ACE20)(void*, Rect16_006AA920*);
    typedef int (__thiscall *F_626440)(void*);
    typedef int (__thiscall *F_ACFB0)(void*);
    typedef void (__thiscall *F_A8980)(void*);
    typedef void* (__thiscall *F_A89B0)(void*, int);
    typedef TargetInterface_006AA920* (__thiscall *F_46C090)(void*);

    if (((F_ACFC0)ext_006ACFC0)(*pNode)) {
        Rect16_006AA920 rect;
        ((F_ACE20)ext_006ACE20)(*pNode, &rect);
        int val = ((F_626440)ext_00626440)(self) + *(int*)(self + 0xec);
        rect.a += val + 2;
        int ebx = ((F_ACFB0)ext_006ACFB0)(*pNode);

        int ebp = *(int*)(self + 0x19c);
        if (*(int*)(self + 0x100) != 0) {
            ((F_A8980)ext_006A8980)(self);
        }

        if (ebp != *(int*)(self + 0x19c)) {
            *pNode = 0;
            return;
        }

        void* eax = ((F_A89B0)ext_006A89B0)(self, ebx);
        *pNode = eax;
        if (eax && ((F_ACFC0)ext_006ACFC0)(eax)) {
            TargetInterface_006AA920* target = ((F_46C090)ext_0046C090)(*pNode);
            if (target) {
                *(int*)(self + 0x100) = target->vf5(rect, *pNode);
            }
        }
    } else {
        ((F_A8980)ext_006A8980)(self);
    }
}

// [0x006ADD30] sub_006ADD30 (255 bytes)
extern "C" void ext_00478910();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_006ADD30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b746c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebp
        push esi
        push edi
        push 0x40
        mov edi, ecx
        call ext_006A5C62
        mov edx, eax
        add esp, 4
        mov dword ptr [esp + 0xc], edx
        test edx, edx
        mov dword ptr [esp + 0x60], 0
        je short loc_6ADD7E
        push 1
        mov ecx, edi
        call ext_0049AA40
        push eax
        mov ecx, edx
        call ext_006ADBF0
        mov esi, eax
        jmp short loc_6ADD80
loc_6ADD7E:
        xor esi, esi
loc_6ADD80:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        push 1
        push 0
        mov ecx, esi
        mov dword ptr [esp + 0x68], 0xffffffff
        call edx
        mov ebp, dword ptr [esp + 0x68]
        push ecx
        mov ecx, esp
        mov dword ptr [esp + 0x10], esp
        push ebp
        call dword ptr [mem_009242F0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, esi
        call edx
        push ebp
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        push eax
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x64], 1
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x6c]
        mov dword ptr [esp + 0x54], eax
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea ecx, [edi + 0xc]
        mov byte ptr [esp + 0x68], 2
        call ext_00478910
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x60], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x60], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi + 0x20]
        lea ecx, [edi + 0x18]
        push esi
        push eax
        call ext_006A6796
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebp
        add esp, 0x58
        ret 8
    }
}

// [0x006A7E00] sub_006A7E00 (295 bytes)
extern "C" void ext_006A63BE();
extern "C" void ext_006A7C10();
extern "C" void ext_006AD070();
extern "C" void ext_006AD080();
extern "C" void ext_006AD090();
extern "C" void ext_006AD190();
extern "C" void ext_006AEC60();
extern "C" void ext_006AEC90();
extern "C" void ext_006AF8E0();

extern "C" __declspec(naked) void __fastcall fn_006A7E00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, ecx
        push esi
        mov ecx, ebx
        mov dword ptr [esp + 0x10], edi
        call ext_006AD070
        push ebx
        mov ecx, esi
        call ext_006AD080
        mov ecx, ebx
        mov esi, ebx
        call ext_006AEC90
        test al, al
        je L_ret_esi
        mov ecx, ebx
        call ext_006A7C10
        test eax, eax
        je L_ret_esi
        push ebp
        mov ecx, ebx
        xor ebp, ebp
        call ext_006A7C10
        test eax, eax
        jle L_after_loop
L_loop:
        push ebp
        mov ecx, ebx
        call ext_006AF8E0
        mov edi, eax
        mov ecx, edi
        call ext_006AD090
        test al, al
        je L_next
        push edi
        mov ecx, esi
        call ext_006AD070
        push esi
        mov ecx, edi
        call ext_006AD080
        mov esi, edi
        call ext_006AEC60
        push eax
        mov ecx, edi
        call ext_006A63BE
        test eax, eax
        mov ecx, edi
        je L_else
        call ext_006AD190
        mov esi, eax
        test esi, esi
        je L_a2
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_inner:
        mov ecx, esi
        call ext_006AD090
        test al, al
        jne L_matched
        mov ecx, esi
        call ext_006AD190
        mov esi, eax
        test esi, esi
        jne L_inner
        mov esi, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push edi
        call ext_006A7E00
        mov esi, eax
        jmp L_next
L_matched:
        test esi, esi
        jne L_recur
L_a2:
        mov esi, dword ptr [esp + 0x1c]
L_recur:
        mov ecx, dword ptr [esp + 0x10]
        push esi
        push edi
        call ext_006A7E00
        mov esi, eax
        jmp L_next
L_else:
        mov eax, dword ptr [esp + 0x1c]
        push eax
        call ext_006AD070
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        call ext_006AD080
L_next:
        mov ecx, ebx
        add ebp, 1
        call ext_006A7C10
        cmp ebp, eax
        jl L_loop
        mov edi, dword ptr [esp + 0x10]
L_after_loop:
        cmp dword ptr [edi + 0x5c], ebx
        pop ebp
        mov eax, esi
        jne L_ret_noset
        mov dword ptr [edi + 0x5c], esi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
L_ret_esi:
        mov eax, esi
L_ret_noset:
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
    }
}
