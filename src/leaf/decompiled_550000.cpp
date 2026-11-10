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
