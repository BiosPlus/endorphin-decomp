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
