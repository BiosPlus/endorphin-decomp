// Decompiled translation unit: src/leaf/decompiled_550000.cpp

// [0x00559180] sub_00559180 (31 bytes)
extern "C" void ext_00559070();

extern "C" __declspec(naked) void __fastcall fn_00559180(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x414], eax
        mov dword ptr [ecx + 0x418], eax
        mov dword ptr [esp + 0x4], eax
        add ecx, 0x43c
        jmp ext_00559070
    }
}

// [0x00554110] sub_00554110 (33 bytes)
extern "C" int __fastcall fn_00554110(int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 60;
}

// [0x00552160] sub_00552160 (14 bytes)
extern "C" void ext_005B11E0();
extern "C" __declspec(naked) void __fastcall fn_00552160(void* self) {
    __asm {
        push 2
        add ecx, 0x210
        call ext_005B11E0
        ret
    }
}

// [0x005528E0] sub_005528E0 (14 bytes)
extern "C" void ext_005528D0();
extern "C" __declspec(naked) void* __fastcall fn_005528E0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x957534
        call ext_005528D0
        mov eax, ecx
        ret
    }
}

// [0x00559770] sub_00559770 (18 bytes)
extern "C" void ext_005591A0(int, int, int);
extern "C" void __cdecl fn_00559770(int a) {
    ext_005591A0(a, 0, 1);
}

// [0x005576F0] sub_005576F0 (20 bytes)
extern "C" void ext_00556AE0();
extern "C" __declspec(naked) void __fastcall fn_005576F0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x420]
        mov edx, dword ptr [ecx + 0x418]
        push eax
        push edx
        call ext_00556AE0
        ret
    }
}

// [0x00550F60] sub_00550F60 (25 bytes)
extern "C" void ext_00403560();
extern "C" void* __fastcall fn_00550F60(void* self, int edx_unused, int a1) {
    ((void (__stdcall*)(int))ext_00403560)(a1);
    *(int*)self = 0x009570dc;
    return self;
}

// [0x00551200] sub_00551200 (25 bytes)
extern "C" void ext_00401C60();
extern "C" void* __fastcall fn_00551200(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x009570dc;
    return self;
}

// [0x0055E290] sub_0055E290 (25 bytes)
extern "C" void ext_00401C60();
extern "C" void* __fastcall fn_0055E290(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int);
    ((Callee)ext_00401C60)(self, edx_unused, a1);
    *(int*)self = 0x0095879c;
    return self;
}

// [0x0055D020] sub_0055D020 (25 bytes)
extern "C" void ext_00402CF0();
extern "C" void ext_006A5C5C();
extern "C" void __fastcall fn_0055D020(void* self) {
    typedef void (__fastcall *Callee1)(void*);
    typedef void (__cdecl *Callee2)(void*);
    void* p = *(void**)self;
    if (p != 0) {
        ((Callee1)ext_00402CF0)(p);
        ((Callee2)ext_006A5C5C)(p);
    }
}

// [0x00553960] sub_00553960 (27 bytes)
extern "C" void ext_00584C10();

extern "C" __declspec(naked) unsigned char __stdcall fn_00553960(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        je return_zero
        call ext_00584C10
        test al, al
        jne return_zero
        mov al, 1
        ret 4
    return_zero:
        xor al, al
        ret 4
    }
}

// [0x00554CE0] sub_00554CE0 (27 bytes)
extern "C" void ext_005530B0();
extern "C" __declspec(naked) void __fastcall fn_00554CE0(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_005530B0
        fmul dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00554D20] sub_00554D20 (27 bytes)
extern "C" void ext_00553170();
extern "C" __declspec(naked) void __fastcall fn_00554D20(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_00553170
        fdiv dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005571E0] sub_005571E0 (27 bytes)
extern "C" void ext_005566D0(int a, int b, void* c, int d);

extern "C" __declspec(naked) void __fastcall fn_005571E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_005566D0
        add esp, 0x10
        ret 0x8
    }
}

// [0x005572D0] sub_005572D0 (27 bytes)
extern "C" void ext_00556740();
extern "C" __declspec(naked) void __fastcall fn_005572D0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00556740
        add esp, 0x10
        ret 0x8
    }
}

// [0x00557360] sub_00557360 (27 bytes)
extern "C" void ext_005567D0();
extern "C" __declspec(naked) void __fastcall fn_00557360(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_005567D0
        add esp, 0x10
        ret 0x8
    }
}

// [0x00559620] sub_00559620 (27 bytes)
extern "C" void ext_00558F20();
extern "C" __declspec(naked) void __fastcall fn_00559620(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00558F20
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_00558F80();

// [0x00559640] sub_00559640 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_00559640(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00558F80
        add esp, 0x10
        ret 0x8
    }
}

// [0x00559660] sub_00559660 (27 bytes)
extern "C" void ext_00558FE0();
extern "C" __declspec(naked) void __fastcall fn_00559660(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00558FE0
        add esp, 0x10
        ret 0x8
    }
}

// [0x00559C30] sub_00559C30 (27 bytes)
extern "C" void ext_00559840();

extern "C" __declspec(naked) void __fastcall fn_00559C30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00559840
        add esp, 0x10
        ret 0x8
    }
}

// [0x0055B860] sub_0055B860 (27 bytes)
extern "C" void ext_0055B780();

extern "C" __declspec(naked) void __fastcall fn_0055B860(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0055B780
        add esp, 0x10
        ret 0x8
    }
}

// [0x00559790] sub_00559790 (35 bytes)
extern "C" void ext_00559770();
extern "C" void* __cdecl fn_00559790(void* a) {
    void* p = ((void* (__cdecl *)(void*))ext_00559770)((char*)a + 4);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *VFn)(void*, void*);
    ((VFn)vtbl[1])(p, a);
    return p;
}

// [0x00552130] sub_00552130 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00552130(void* self, int edx_unused, float* out, int idx) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        shl edx, 0x4
        fld dword ptr [edx + ecx]
        add edx, ecx
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edx + 0xc]
        fstp dword ptr [eax + 0xc]
        ret 0x8
    }
}

// [0x00553080] sub_00553080 (41 bytes)
extern "C" bool __fastcall fn_00553080(int* self, int edx_unused, int a1) {
    if (self[0] < 0) {
        self[0] = 0;
    }
    int limit = a1 - 1;
    if (self[1] >= limit) {
        self[1] = limit;
    }
    if (self[1] < self[0]) {
        self[1] = self[0];
    }
    return true;
}

// [0x00553980] sub_00553980 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00553980(void* self) {
    __asm {
        fldz
        mov eax, ecx
        xor ecx, ecx
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        mov byte ptr [eax + 0x18], cl
        fst dword ptr [eax]
        mov byte ptr [eax + 0x19], cl
        mov byte ptr [eax + 0x1a], cl
        fst dword ptr [eax]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax + 0x8]
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], ecx
        ret
    }
}

// [0x00553760] sub_00553760 (31 bytes)
extern "C" void ext_00661A00();
extern "C" void ext_00553080();
extern "C" __declspec(naked) void __fastcall fn_00553760(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x420]
        call ext_00661A00
        sub eax, 0x1
        push eax
        lea ecx, [esi + 0x16c]
        call ext_00553080
        pop esi
        ret
    }
}

// [0x0055E120] sub_0055E120 (43 bytes)
extern "C" char __cdecl ext_00662EC0(int a1);
extern "C" void __fastcall fn_0055E120(unsigned char* self, int edx_unused, int a1) {
    self[0x4d4] = 0;
    *(int*)(self + 0x4d0) = a1;
    if (a1 != 0) {
        self[0x4d4] = (unsigned char)ext_00662EC0(a1);
    }
}

// [0x00550FA0] sub_00550FA0 (48 bytes)
extern "C" void ext_0054FE50();
extern "C" void ext_005500C0();
extern "C" void ext_00550280();
extern "C" __declspec(naked) void __cdecl fn_00550FA0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax + 0x18]
        test edx, edx
        je L_fallback
        cmp dword ptr [eax + 0x20], 0x0
        je L_second
        mov dword ptr [esp + 0x4], eax
        jmp ext_0054FE50
    L_second:
        test edx, edx
        je L_fallback
        mov dword ptr [esp + 0x4], eax
        jmp ext_005500C0
    L_fallback:
        mov dword ptr [esp + 0x4], eax
        jmp ext_00550280
    }
}

// [0x00556610] sub_00556610 (48 bytes)
extern "C" int mem_00925124;
extern "C" __declspec(naked) void __fastcall fn_00556610(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        push ecx
        push eax
        mov ecx, esi
        call dword ptr [mem_00925124]
    done:
        mov dword ptr [esi + 0x4], 0
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [esi + 0xc], 0
        pop esi
        ret
    }
}

// [0x0055D280] sub_0055D280 (43 bytes)
extern "C" void* __fastcall ext_0043D780(void* self);

extern "C" void* __fastcall fn_0055D280(void* self) {
    void** s = (void**)self;
    void* n = ext_0043D780(self);
    s[1] = n;
    *((unsigned char*)n + 0x15) = 1;
    ((void**)s[1])[1] = s[1];
    *(void**)s[1] = s[1];
    ((void**)s[1])[2] = s[1];
    s[2] = 0;
    return self;
}

// [0x00555470] sub_00555470 (55 bytes)
extern "C" void ext_006A5C62();

extern "C" void* __fastcall fn_00555470(void* self) {
    void* p = ((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x3c);
    char* base = (char*)p;
    if (base) *(int*)base = 0;
    if (base + 4) *(int*)(base + 4) = 0;
    if (base + 8) *(int*)(base + 8) = 0;
    base[0x38] = 1;
    base[0x39] = 0;
    return p;
}

// [0x00551960] sub_00551960 (60 bytes)
extern "C" int __fastcall fn_00551960(float* self, int edx_unused, float* other) {
    if (self[0] == other[0] && self[1] == other[1] && self[2] == other[2]) {
        return 1;
    }
    return 0;
}

// [0x0055F390] sub_0055F390 (60 bytes)
extern "C" __declspec(naked) void __cdecl fn_0055F390(void* dst, unsigned int count, const float* src) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        test edx, edx
        jbe done
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        lea eax, [ecx + 0xc]
    loop_top:
        test ecx, ecx
        je skip
        fld dword ptr [esi]
        fstp dword ptr [ecx]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [eax - 0x8]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [eax - 0x4]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [eax]
    skip:
        sub edx, 1
        add ecx, 0x10
        add eax, 0x10
        test edx, edx
        ja loop_top
        pop esi
    done:
        ret
    }
}

// [0x0055F670] sub_0055F670 (55 bytes)
extern "C" void ext_0055F390();

extern "C" __declspec(naked) int __fastcall fn_0055F670(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0055F390
        mov eax, esi
        add esp, 0x18
        shl eax, 0x4
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00552860] sub_00552860 (61 bytes)
extern "C" int mem_00940690;
extern "C" __declspec(naked) void __fastcall fn_00552860(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        push edi
        call edx
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        jl fail
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, esi
        call edx
        cmp edi, eax
        jg fail
        fld dword ptr [mem_00940690]
        mov dword ptr [esi + 0x10], edi
        pop edi
        fstp dword ptr [esi + 0xc]
        pop esi
        ret 4
    fail:
        pop edi
        mov dword ptr [esi + 0x10], 0xffffffff
        pop esi
        ret 4
    }
}

// [0x005530B0] sub_005530B0 (61 bytes)
extern "C" double mem_009575A0;
extern "C" double mem_00955090;
extern "C" float __fastcall fn_005530B0(int* self, int edx_unused, float a1) {
    int mode = self[0x28 / 4];
    if (mode == 0) {
        return (float)(a1 * mem_009575A0);
    }
    if (mode == 2) {
        return (float)(a1 / mem_00955090);
    }
    return a1;
}

// [0x00553170] sub_00553170 (63 bytes)
extern "C" int mem_00957598;
extern "C" int mem_009576E8;
extern "C" __declspec(naked) float __fastcall fn_00553170(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x28]
        test eax, eax
        jne check_two
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_00957598]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    check_two:
        cmp eax, 0x2
        jne passthrough
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009576E8]
        fadd st(0), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    passthrough:
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x0055E940] sub_0055E940 (67 bytes)
extern "C" __declspec(naked) void __cdecl fn_0055E940(void* first, void* last, void* dst) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done
        lea ecx, [eax + 0xc]
        lea edx, [esi + 0xc]
    copy:
        test eax, eax
        je skip
        fld dword ptr [esi]
        fstp dword ptr [eax]
        fld dword ptr [edx - 0x8]
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edx - 0x4]
        fstp dword ptr [ecx - 0x4]
        fld dword ptr [edx]
        fstp dword ptr [ecx]
    skip:
        add esi, 0x10
        add eax, 0x10
        add ecx, 0x10
        add edx, 0x10
        cmp esi, edi
        jne copy
    done:
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_0055E940();

// [0x0055F800] sub_0055F800 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_0055F800(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_0055E940
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00554260] sub_00554260 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_00554260(void* self) {
    __asm {
        mov eax, ecx
        sub esp, 0x24
        push esi
        push edi
        mov ecx, 0x9
        mov esi, eax
        lea edi, [esp + 0x8]
        rep movsd
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [esp + 0x1c]
        pop edi
        fstp dword ptr [eax + 0x1c]
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x0055C490] sub_0055C490 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_0055C490(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x2d], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top:
        lea eax, [esi + 0xc]
        push ebx
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je go_left
        mov esi, dword ptr [esi + 0x8]
        jmp loop_check
    go_left:
        mov edi, esi
        mov esi, dword ptr [esi]
    loop_check:
        cmp byte ptr [esi + 0x2d], 0x0
        je loop_top
        pop ebp
        mov eax, edi
        pop ebx
    done_early:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0055E230] sub_0055E230 (73 bytes)
extern "C" __declspec(naked) void __cdecl fn_0055E230(float* first, float* last, float* dest) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push edi
        mov edi, dword ptr [esp + 0Ch]
        cmp edi, esi
        je short done
        lea edx, [eax + 0Ch]
        lea ecx, [esi + 0Ch]
        jmp short loop_top
        _emit 0x8D
        _emit 0x9B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loop_top:
        fld dword ptr [esi - 10h]
        sub esi, 10h
        fstp dword ptr [eax - 10h]
        sub ecx, 10h
        fld dword ptr [ecx - 8]
        sub eax, 10h
        sub edx, 10h
        cmp esi, edi
        fstp dword ptr [edx - 8]
        fld dword ptr [ecx - 4]
        fstp dword ptr [edx - 4]
        fld dword ptr [ecx]
        fstp dword ptr [edx]
        jne short loop_top
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0055F620] sub_0055F620 (73 bytes)
extern "C" void ext_0055E230();
extern "C" __declspec(naked) void __fastcall fn_0055F620(void* self) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_0055E230
        sub esi, ebx
        add esp, 0x18
        sar esi, 4
        shl esi, 4
        mov eax, edi
        pop edi
        sub eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00555420] sub_00555420 (74 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00555420(void* first_, void* last_, const unsigned int* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp+0ch]
        push edi
        mov edi, dword ptr [esp+0ch]
        sub esi, edi
        sar esi, 5
        test esi, esi
        jle short L_done
        mov eax, dword ptr [esp+14h]
        push ebx
        mov ebx, dword ptr [eax]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, eax
        shl ecx, 5
        add ecx, edi
        cmp dword ptr [ecx], ebx
        jae short L_else
        lea edi, [ecx+20h]
        or ecx, -1
        sub ecx, eax
        add esi, ecx
        jmp short L_test
L_else:
        mov esi, eax
L_test:
        test esi, esi
        jg short L_loop
        pop ebx
L_done:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x005528F0] sub_005528F0 (76 bytes)
extern "C" int mem_00AF7D00;
extern "C" __declspec(naked) void* __fastcall fn_005528F0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov esi, offset mem_00AF7D00 + 1
        mov al, 0xff
        __asm _emit 0x8D __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
    L_5528F0_outer:
        xor edi, edi
    L_5528F0_inner:
        mov edx, edi
        xor edx, ebx
        shr edx, 3
        and edx, 1
        imul edx, edx, 0xff
        mov byte ptr [esi - 1], dl
        mov byte ptr [esi], dl
        mov byte ptr [esi + 1], dl
        mov byte ptr [esi + 2], al
        add edi, 1
        add esi, 4
        cmp edi, 0x100
        jl L_5528F0_inner
        add ebx, 1
        cmp esi, offset mem_00AF7D00 + 0x40001
        jl L_5528F0_outer
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        ret
    }
}

// [0x00552940] sub_00552940 (35 bytes)
extern "C" int mem_00B37F38;
extern "C" int mem_00B37F34;
extern "C" void ext_005528F0();
extern "C" void* __fastcall fn_00552940(void* self) {
    if (!(mem_00B37F38 & 1)) {
        mem_00B37F38 |= 1;
        ((void (__fastcall*)(void*))ext_005528F0)((void*)&mem_00B37F34);
    }
    return (void*)0x00AF7D00;
}

// [0x0055F340] sub_0055F340 (77 bytes)
extern "C" __declspec(naked) void* __cdecl fn_0055F340(void* first, void* last, void* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        sub esi, edi
        sar esi, 0x4
        test esi, esi
        jle lb_done_0055F340
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    lb_loop_0055F340:
        mov eax, esi
        cdq
        sub eax, edx
        mov edx, eax
        sar edx, 1
        mov ecx, edx
        shl ecx, 4
        add ecx, edi
        fld dword ptr [ecx]
        fld dword ptr [ebx]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne lb_left_0055F340
        or eax, -1
        sub eax, edx
        lea edi, [ecx + 0x10]
        add esi, eax
        jmp lb_test_0055F340
    lb_left_0055F340:
        mov esi, edx
    lb_test_0055F340:
        test esi, esi
        jg lb_loop_0055F340
        pop ebx
    lb_done_0055F340:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x00557280] sub_00557280 (78 bytes)
extern "C" void ext_004026E0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00557280(void* self) {
    __asm {
        push -1
        push 0x0089A2DC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 0x0
        call ext_004026E0
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

// [0x005541A0] sub_005541A0 (79 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005541A0(void* self) {
    __asm {
        push -1
        push 0x0089A0FC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00551A20] sub_00551A20 (80 bytes)
extern "C" void ext_005478F0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00551A20(void* self) {
    __asm {
        push -1
        push 0x00899AA8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xf8]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_005478F0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00558F20] sub_00558F20 (85 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

// Destroys each 0x14-byte record in [begin, end): its vector of 0x1c-byte strings at +8 is torn down and zeroed.
extern "C" __declspec(naked) void __cdecl fn_00558F20(void* begin, void* end) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        cmp ebp, dword ptr [esp + 0xc]
        je L558F73
        push ebx
        push esi
        push edi
        lea edi, [ebp + 0x8]
    L558F31:
        mov esi, dword ptr [edi]
        test esi, esi
        je L558F5A
        mov ebx, dword ptr [edi + 0x4]
        cmp esi, ebx
        je L558F4F
        mov edi, edi
    L558F40:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, ebx
        jne L558F40
    L558F4F:
        mov eax, dword ptr [edi]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L558F5A:
        xor eax, eax
        mov dword ptr [edi], eax
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        add ebp, 0x14
        add edi, 0x14
        cmp ebp, dword ptr [esp + 0x18]
        jne L558F31
        pop edi
        pop esi
        pop ebx
    L558F73:
        pop ebp
        ret
    }
}

// [0x005597C0] sub_005597C0 (63 bytes)
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005597C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_005597C0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00558F20
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_005597C0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00558F80] sub_00558F80 (85 bytes)
// Destroys each 0x1c-byte record in [begin, end): its vector of 0x1c-byte strings at +0x10 is torn down and zeroed.
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00558F80(void* begin, void* end) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        cmp ebp, dword ptr [esp + 0xc]
        je L558FD3
        push ebx
        push esi
        push edi
        lea edi, [ebp + 0x10]
    L558F91:
        mov esi, dword ptr [edi]
        test esi, esi
        je L558FBA
        mov ebx, dword ptr [edi + 0x4]
        cmp esi, ebx
        je L558FAF
        mov edi, edi
    L558FA0:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x1c
        cmp esi, ebx
        jne L558FA0
    L558FAF:
        mov eax, dword ptr [edi]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L558FBA:
        xor eax, eax
        mov dword ptr [edi], eax
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        add ebp, 0x1c
        add edi, 0x1c
        cmp ebp, dword ptr [esp + 0x18]
        jne L558F91
        pop edi
        pop esi
        pop ebx
    L558FD3:
        pop ebp
        ret
    }
}

// [0x00559800] sub_00559800 (63 bytes)
extern "C" void ext_00558F80();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00559800(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00559800
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00558F80
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00559800:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00553230] sub_00553230 (87 bytes)
extern "C" double mem_009576F0;
extern "C" void __fastcall fn_00553230(int* self, int edx_unused, float* out, float x, float y, float z) {
    int mode = self[0x28 / 4];
    if (mode == 0) {
        x = (float)(x * mem_009575A0);
        y = (float)(y * mem_009575A0);
        z = (float)(z * mem_009575A0);
    } else if (mode == 2) {
        x = (float)(x * mem_009576F0);
        y = (float)(y * mem_009576F0);
        z = (float)(z * mem_009576F0);
    }
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

// [0x00553340] sub_00553340 (87 bytes)
// mem_00957598 is declared as int above (asm use); read it as a double here.
extern "C" void __fastcall fn_00553340(int* self, int edx_unused, float* out, float x, float y, float z) {
    int mode = self[0x28 / 4];
    if (mode == 0) {
        x = (float)(x * *(double*)&mem_00957598);
        y = (float)(y * *(double*)&mem_00957598);
        z = (float)(z * *(double*)&mem_00957598);
    } else if (mode == 2) {
        x = (float)(x * mem_00955090);
        y = (float)(y * mem_00955090);
        z = (float)(z * mem_00955090);
    }
    out[0] = x;
    out[1] = y;
    out[2] = z;
}

// [0x00554E50] sub_00554E50 (85 bytes)
extern "C" void ext_00553340();
extern "C" __declspec(naked) float* __fastcall fn_00554E50(void* self, int edx_unused, float* dst, float x, float y, float z) {
    __asm {
        sub esp, 0x0c
        fld dword ptr [esp + 0x14]
        sub esp, 0x0c
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x0c]
        push eax
        call ext_00553340
        fld dword ptr [ecx + 0x20]
        fld1
        mov ecx, dword ptr [esp + 0x10]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmul dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [ecx + 0x4]
        fmul dword ptr [eax + 0x8]
        mov eax, ecx
        fstp dword ptr [ecx + 0x8]
        add esp, 0x0c
        ret 0x10
    }
}

// [0x00554D60] sub_00554D60 (91 bytes)
extern "C" void ext_00553230();
extern "C" __declspec(naked) void __fastcall fn_00554D60(void* self, int edx_unused, float* out, float x, float y, float z) {
    __asm {
        sub esp, 0x0c
        fld dword ptr [esp + 0x14]
        sub esp, 0x0c
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x0c]
        push eax
        call ext_00553230
        fld dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0x14]
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        fldz
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmul dword ptr [edx]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x4]
        fmul st, st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [edx + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0x0c
        ret 0x10
    }
}

// [0x00553FF0] sub_00553FF0 (77 bytes)
extern "C" void ext_00663060();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00553FF0(void* self) {
    __asm {
        push -1
        push 0x0089A0D8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00663060
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005555D0] sub_005555D0 (94 bytes)
extern "C" __declspec(naked) void __cdecl fn_005555D0(void* dst, unsigned int count, const void* src) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        jbe done_pop_edi
        mov ecx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [esi + 0xc]
    loop_top:
        test esi, esi
        je skip_copy
        mov edx, dword ptr [ecx]
        mov dword ptr [esi], edx
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax - 0x8]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax - 0x4]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax]
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x18]
        mov dword ptr [eax + 0xc], edx
        mov dx, word ptr [ecx + 0x1c]
        mov word ptr [eax + 0x10], dx
        mov dl, byte ptr [ecx + 0x1e]
        mov byte ptr [eax + 0x12], dl
    skip_copy:
        sub edi, 0x1
        add esi, 0x20
        add eax, 0x20
        test edi, edi
        ja loop_top
        pop esi
    done_pop_edi:
        pop edi
        ret
    }
}

// [0x00556640] sub_00556640 (55 bytes)
extern "C" void ext_005555D0();

extern "C" __declspec(naked) int __fastcall fn_00556640(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_005555D0
        mov eax, esi
        add esp, 0x18
        shl eax, 0x5
        add eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00555100] sub_00555100 (95 bytes)
extern "C" __declspec(naked) void __cdecl fn_00555100(void* first, void* last, const void* value) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je short done
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [esi + 0xc]
    loop_top:
        fld dword ptr [ecx + 0x4]
        mov edx, dword ptr [ecx]
        fstp dword ptr [eax - 0x8]
        mov dword ptr [esi], edx
        fld dword ptr [ecx + 0x8]
        add esi, 0x20
        fstp dword ptr [eax - 0x4]
        add eax, 0x20
        cmp esi, edi
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax - 0x20]
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax - 0x1c], edx
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [eax - 0x18], edx
        mov edx, dword ptr [ecx + 0x18]
        mov dword ptr [eax - 0x14], edx
        movzx edx, byte ptr [ecx + 0x1c]
        mov byte ptr [eax - 0x10], dl
        movzx edx, byte ptr [ecx + 0x1d]
        mov byte ptr [eax - 0xf], dl
        movzx edx, byte ptr [ecx + 0x1e]
        mov byte ptr [eax - 0xe], dl
        jne short loop_top
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x005577A0] sub_005577A0 (63 bytes)
extern "C" void ext_0041DD40();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005577A0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_005577A0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0041DD40
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_005577A0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x005567D0] sub_005567D0 (97 bytes)
// __cdecl(first, last): SEH-framed (state -1/0) loop over 0x3c-byte elements, destroying the
// std::string at +0x20 then the one at +0x04 via the MSVCP80 ~basic_string import.
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_005567D0(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89a29c
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
    loop_top:
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        add esi, 0x3c
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

// [0x00557920] sub_00557920 (63 bytes)
extern "C" void ext_005567D0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00557920(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00557920
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_005567D0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00557920:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x005541F0] sub_005541F0 (99 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005541F0(void* self, int edx_unused, void* src) {
    __asm {
        push -1
        push 0x89a0fc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov al, byte ptr [edi]
        mov esi, ecx
        mov byte ptr [esi], al
        mov cl, byte ptr [edi + 0x1]
        lea edx, [edi + 0x4]
        mov byte ptr [esi + 0x1], cl
        push edx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        add edi, 0x20
        push edi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00553F00] sub_00553F00 (101 bytes)
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00553F00(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x89dbe5
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        add edi, 0x38
        push edi
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0055CD10] sub_0055CD10 (104 bytes)
extern "C" void ext_0059F5C0();
extern "C" __declspec(naked) void __fastcall fn_0055CD10(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0059F5C0
        fld1
        mov dword ptr [esi+4], eax
        mov byte ptr [eax+2dh], 1
        mov eax, dword ptr [esi+4]
        mov dword ptr [eax+4], eax
        mov eax, dword ptr [esi+4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi+4]
        mov dword ptr [eax+8], eax
        mov eax, dword ptr [esp+8]
        mov dword ptr [esi+0ch], eax
        mov dword ptr [esi+8], 0
        fst dword ptr [esi+10h]
        fldz
        mov eax, esi
        fst dword ptr [esi+14h]
        fst dword ptr [esi+18h]
        fst dword ptr [esi+1ch]
        fst dword ptr [esi+20h]
        fst dword ptr [esi+28h]
        fst dword ptr [esi+2ch]
        fst dword ptr [esi+30h]
        fst dword ptr [esi+34h]
        fst dword ptr [esi+3ch]
        fst dword ptr [esi+40h]
        fst dword ptr [esi+44h]
        fstp dword ptr [esi+48h]
        fst dword ptr [esi+24h]
        fst dword ptr [esi+38h]
        fstp dword ptr [esi+4ch]
        pop esi
        ret 4
    }
}

// [0x005566D0] sub_005566D0 (110 bytes)
extern "C" __declspec(naked) void __cdecl fn_005566D0(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89a255
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
    loop_top:
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        add esi, 0x54
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

// [0x005587E0] sub_005587E0 (63 bytes)
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_005587E0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_005587E0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_005566D0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_005587E0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_00402630();

// [0x00556AB0] sub_00556AB0 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00556AB0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
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
        call ext_00402630
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00558B90] sub_00558B90 (118 bytes)
extern "C" void ext_005567D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00558B90(void* self) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x20]
        lea esi, [edi + 0x1c]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], ebx
        je skip_block
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_005567D0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    skip_block:
        mov ecx, edi
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00559C50] sub_00559C50 (35 bytes)
extern "C" void ext_00558B90();

extern "C" __declspec(naked) void __fastcall fn_00559C50(void* self, int edx_unused, void* begin, void* end) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je done_559C50
        __asm _emit 0x8B __asm _emit 0xFF // mov edi, edi
    loop_559C50:
        mov ecx, esi
        call ext_00558B90
        add esi, 0x2c
        cmp esi, edi
        jne loop_559C50
    done_559C50:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00559C80] sub_00559C80 (70 bytes)
extern "C" void ext_00558B90();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00559C80(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        mov ecx, esi
        call ext_00558B90
        add esi, 0x2c
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x0055B720] sub_0055B720 (77 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00559C80();

extern "C" __declspec(naked) void __fastcall fn_0055B720(void* self) {
    __asm {
        push -1
        push 0x0089A6EB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 0x0
        call ext_004026E0
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x10], -1
        call ext_00559C80
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
