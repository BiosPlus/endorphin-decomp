// Decompiled translation unit: src/leaf/decompiled_550000.cpp

#include <string.h>
#include <string>
#include <vector>
#include <new>

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

// [0x0055B780] sub_0055B780 (224 bytes)
extern "C" void ext_00558B90();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_0055B780(void* begin, void* end) {
    __asm {
        push -1
        push 0x89a6eb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x1c]
        je epilog
        push ebx
        push ebp
        add esi, 0x30
        push edi
        jmp top
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    top:
        lea ebx, [esi - 0x2c]
        mov dword ptr [esp + 0x10], ebx
        mov edi, dword ptr [esi]
        xor eax, eax
        cmp edi, eax
        mov dword ptr [esp + 0x1c], eax
        je clr1
        mov ebp, dword ptr [esi + 0x4]
        cmp edi, ebp
        je free1
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop1:
        mov ecx, edi
        call dword ptr [mem_00924FF4]
        add edi, 0x1c
        cmp edi, ebp
        jne loop1
    free1:
        mov eax, dword ptr [esi]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        xor eax, eax
    clr1:
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov edi, dword ptr [ebx + 0x1c]
        cmp edi, eax
        mov dword ptr [esp + 0x1c], 0xffffffff
        je clr2
        mov ebp, dword ptr [ebx + 0x20]
        cmp edi, ebp
        je free2
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop2:
        mov ecx, edi
        call ext_00558B90
        add edi, 0x2c
        cmp edi, ebp
        jne loop2
    free2:
        mov eax, dword ptr [ebx + 0x1c]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        xor eax, eax
    clr2:
        mov dword ptr [ebx + 0x1c], eax
        mov dword ptr [ebx + 0x20], eax
        mov dword ptr [ebx + 0x24], eax
        mov eax, dword ptr [esp + 0x24]
        add eax, 0x3c
        add esi, 0x3c
        cmp eax, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x24], eax
        jne top
        pop edi
        pop ebp
        pop ebx
    epilog:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
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

// [0x00550420] sub_00550420 (121 bytes)
extern "C" int mem_009252C4;
extern "C" int mem_009252C0;

extern "C" __declspec(naked) void __stdcall fn_00550420(void* stream, int* counts, char* buf) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        push 0x0
        push 0x0
        push ebx
        call dword ptr [mem_009252C4]
        mov edi, dword ptr [esp + 0x20]
        push ebx
        push 0x800
        push edi
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je done
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov ebp, 0x1
    loop_top:
        mov al, byte ptr [edi]
        cmp al, 0x66
        je inc_f
        cmp al, 0x76
        jne next
        mov al, byte ptr [edi + 0x1]
        cmp al, 0x20
        jne check_n
        add dword ptr [esi], ebp
        jmp next
    check_n:
        cmp al, 0x6e
        jne check_t
        add dword ptr [esi + 0x4], ebp
        jmp next
    check_t:
        cmp al, 0x74
        jne next
        add dword ptr [esi + 0x8], ebp
        jmp next
    inc_f:
        add dword ptr [esi + 0xc], ebp
    next:
        push ebx
        push 0x800
        push edi
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne loop_top
        pop esi
        pop ebp
    done:
        pop edi
        pop ebx
        ret 0xc
    }
}

// [0x00555550] sub_00555550 (121 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00555550(const void* first, const void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebp
        je short L_555550_empty
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea ecx, [edi + 0xc]
        lea edx, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_555550_loop:
        fld dword ptr [edx - 0x8]
        mov eax, dword ptr [esi]
        fstp dword ptr [ecx - 0x8]
        mov dword ptr [edi], eax
        fld dword ptr [edx - 0x4]
        add esi, 0x20
        fstp dword ptr [ecx - 0x4]
        add edi, 0x20
        fld dword ptr [edx]
        add ecx, 0x20
        fstp dword ptr [ecx - 0x20]
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [ecx - 0x1c], eax
        mov eax, dword ptr [edx + 0x8]
        mov dword ptr [ecx - 0x18], eax
        mov eax, dword ptr [edx + 0xc]
        mov dword ptr [ecx - 0x14], eax
        movzx eax, byte ptr [edx + 0x10]
        mov byte ptr [ecx - 0x10], al
        movzx eax, byte ptr [edx + 0x11]
        mov byte ptr [ecx - 0xf], al
        movzx eax, byte ptr [edx + 0x12]
        mov byte ptr [ecx - 0xe], al
        add edx, 0x20
        cmp esi, ebp
        jne short L_555550_loop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
L_555550_empty:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebp
        ret
    }
}

// [0x005565C0] sub_005565C0 (73 bytes)
extern "C" void ext_00555550();
extern "C" __declspec(naked) void* __cdecl fn_005565C0(void* first, void* last, void* dest) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push esi
        push edi
        push ebx
        call ext_00555550
        mov eax, edi
        sub eax, ebx
        add esp, 0x18
        sar eax, 0x5
        shl eax, 0x5
        pop edi
        add eax, esi
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x005581C0] sub_005581C0 (85 bytes)
extern "C" void ext_005565C0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005581C0(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_ok1
        call ebp
L_ok1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok2
        call ebp
L_ok2:
        cmp ebx, edi
        je L_skip
        mov eax, dword ptr [esi + 0x8]
        push ebx
        push eax
        push edi
        call ext_005565C0
        add esp, 0xc
        mov dword ptr [esi + 0x8], eax
L_skip:
        mov eax, dword ptr [esi + 0x4]
        xor edi, edi
        cmp eax, edi
        je L_zero
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_zero:
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edi
        mov dword ptr [esi + 0xc], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00555160] sub_00555160 (122 bytes)
// cdecl(first, last, dest_end): copy_backward of 32-byte elements from [first,last) ending at dest_end; returns dest_end - n.
struct Elem00555160 {
    int           a;
    float         f1;
    float         f2;
    float         f3;
    int           b;
    int           c;
    int           d;
    unsigned char e;
    unsigned char f;
    unsigned char g;
};

extern "C" __declspec(naked) Elem00555160* __cdecl fn_00555160(Elem00555160* first, Elem00555160* last, Elem00555160* dest_end) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebp, esi
        je empty_00555160
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea edx, [edi + 0xc]
        lea ecx, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_00555160:
        fld dword ptr [ecx - 0x28]
        mov eax, dword ptr [esi - 0x20]
        fstp dword ptr [edx - 0x28]
        sub ecx, 0x20
        fld dword ptr [ecx - 0x4]
        sub edx, 0x20
        fstp dword ptr [edx - 0x4]
        mov dword ptr [edi - 0x20], eax
        fld dword ptr [ecx]
        sub esi, 0x20
        fstp dword ptr [edx]
        mov eax, dword ptr [ecx + 0x4]
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [ecx + 0x8]
        sub edi, 0x20
        cmp esi, ebp
        mov dword ptr [edx + 0x8], eax
        mov eax, dword ptr [ecx + 0xc]
        mov dword ptr [edx + 0xc], eax
        movzx eax, byte ptr [ecx + 0x10]
        mov byte ptr [edx + 0x10], al
        movzx eax, byte ptr [ecx + 0x11]
        mov byte ptr [edx + 0x11], al
        movzx eax, byte ptr [ecx + 0x12]
        mov byte ptr [edx + 0x12], al
        jne loop_00555160
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
empty_00555160:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebp
        ret
    }
}

// [0x00556680] sub_00556680 (73 bytes)
extern "C" void ext_00555160();

extern "C" __declspec(naked) void __fastcall fn_00556680(void* self) {
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
        call ext_00555160
        sub esi, ebx
        add esp, 0x18
        sar esi, 5
        shl esi, 5
        mov eax, edi
        pop edi
        sub eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x005503A0] sub_005503A0 (124 bytes)
extern "C" int mem_009252BC;

extern "C" __declspec(naked) int __fastcall fn_005503A0(void* self, int edx_unused, const char* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        lea esi, [ecx + 0x4]
        mov edx, esi
        sub edx, eax
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    copy_loop:
        mov cl, byte ptr [eax]
        mov byte ptr [edx + eax], cl
        add eax, 0x1
        test cl, cl
        jne copy_loop
        mov eax, esi
        lea edx, [eax + 0x1]
    len_loop:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne len_loop
        sub eax, edx
        jne have_len
        xor eax, eax
        pop esi
        ret 0x4
    have_len:
        push edi
        push 0x9525bc
        push esi
        mov esi, dword ptr [mem_009252BC]
        call esi
        add esp, 0x8
        test eax, eax
        je use_src
        xor edi, edi
        jmp second_tok
    use_src:
        mov edi, dword ptr [esp + 0xc]
    second_tok:
        push 0x9570a8
        push 0x0
        call esi
        add esp, 0x8
        test eax, eax
        je done
    count_loop:
        push 0x9570a8
        push 0x0
        add edi, 0x1
        call esi
        add esp, 0x8
        test eax, eax
        jne count_loop
    done:
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005504A0] sub_005504A0 (126 bytes)
extern "C" int mem_009252C4;
extern "C" int mem_009252C0;
extern "C" int mem_0092521C;

extern "C" __declspec(naked) void __stdcall fn_005504A0(void* stream, void* obj, char* buf) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x0
        push 0x0
        push esi
        call dword ptr [mem_009252C4]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push 0x800
        push esi
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je done
        push ebx
        mov ebx, dword ptr [mem_0092521C]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push edi
        xor edi, edi
    loop_top:
        cmp byte ptr [esi], 0x76
        jne skip
        cmp byte ptr [esi + 0x1], 0x20
        jne skip
        mov eax, dword ptr [ebp + 0x10]
        mov eax, dword ptr [edi + eax]
        lea ecx, [eax + 0x8]
        push ecx
        lea edx, [eax + 0x4]
        push edx
        push eax
        push 0x9570b0
        push esi
        call ebx
        add esp, 0x14
        add edi, 0x4
    skip:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push 0x800
        push esi
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne loop_top
        pop edi
        pop ebp
        pop ebx
    done:
        pop esi
        ret 0xc
    }
}

// [0x005530F0] sub_005530F0 (126 bytes)
extern "C" int mem_009334D8;
extern "C" int mem_00928E78;
extern "C" int mem_009575B8;
extern "C" int mem_009575C8;
extern "C" int mem_009575D8;
extern "C" __declspec(naked) float __fastcall fn_005530F0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x2c]
        cmp eax, 0x1
        jne chk_2
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009334D8]
        fstp dword ptr [esp + 0x4]
    chk_2:
        cmp eax, 0x2
        jne chk_3
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_00928E78]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    chk_3:
        cmp eax, 0x3
        jne chk_4
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009575B8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    chk_4:
        cmp eax, 0x4
        jne chk_5
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009575C8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    chk_5:
        cmp eax, 0x5
        jne chk_end
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009575D8]
        fstp dword ptr [esp + 0x4]
    chk_end:
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00554D00] sub_00554D00 (30 bytes)
extern "C" void ext_005530F0();
extern "C" __declspec(naked) void __fastcall fn_00554D00(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_005530F0
        fmul dword ptr [ecx + 0x24]
        fmul dword ptr [ecx + 0x10]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005531B0] sub_005531B0 (126 bytes)
extern "C" int mem_009334D8;
extern "C" int mem_00928E78;
extern "C" int mem_009575B0;
extern "C" int mem_009575C0;
extern "C" int mem_009575D0;
extern "C" __declspec(naked) float __fastcall fn_005531B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x2c]
        cmp eax, 0x1
        jne chk_2
        fld dword ptr [esp + 0x4]
        fdiv qword ptr [mem_009334D8]
        fstp dword ptr [esp + 0x4]
    chk_2:
        cmp eax, 0x2
        jne chk_3
        fld dword ptr [esp + 0x4]
        fdiv qword ptr [mem_00928E78]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    chk_3:
        cmp eax, 0x3
        jne chk_4
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009575B0]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    chk_4:
        cmp eax, 0x4
        jne chk_5
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009575C0]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    chk_5:
        cmp eax, 0x5
        jne chk_end
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009575D0]
        fstp dword ptr [esp + 0x4]
    chk_end:
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00554D40] sub_00554D40 (32 bytes)
extern "C" void ext_005531B0();
extern "C" __declspec(naked) float __fastcall fn_00554D40(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_005531B0
        fld dword ptr [ecx + 0x24]
        fmul dword ptr [ecx + 0x10]
        fdivp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00556740] sub_00556740 (130 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00556740(void* first, void* last) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89a27d
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        cmp esi, edi
        je done
    loop_top:
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x10], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        add esi, 0xa0
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

// [0x005577E0] sub_005577E0 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_005577E0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_005577E0
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00556740
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_005577E0:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00558B50] sub_00558B50 (64 bytes)
extern "C" void ext_00556740();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00558B50(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x8]
        test eax, eax
        push esi
        lea esi, [ecx + 0x4]
        je L_clear_00558B50
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00556740
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00558B50:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00559680] sub_00559680 (68 bytes)
extern "C" void ext_00556740();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00559680(void* self, int edx_unused, int* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x8]
        add esi, 0x4
        test eax, eax
        je done
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00556740
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    done:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        ret 0x4
    }
}

// [0x00559840] sub_00559840 (80 bytes)
extern "C" void ext_00556740();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __cdecl fn_00559840(void) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, ebp
        je L_done
        push ebx
        push esi
        lea esi, [edi + 0x8]
        xor ebx, ebx
    L_loop:
        mov eax, dword ptr [esi]
        cmp eax, ebx
        je L_skip
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        lea edx, [esi - 0x4]
        push edx
        push ecx
        push eax
        call ext_00556740
        mov edx, dword ptr [esi]
        push edx
        call ext_006A5C5C
        add esp, 0x14
    L_skip:
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        add edi, 0x14
        add esi, 0x14
        cmp edi, ebp
        jne L_loop
        pop esi
        pop ebx
    L_done:
        pop edi
        pop ebp
        ret
    }
}

// [0x00559F50] sub_00559F50 (63 bytes)
extern "C" void ext_00559840();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00559F50(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00559F50
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00559840
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00559F50:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x005505B0] sub_005505B0 (131 bytes)
extern "C" char mem_009570C8;

extern "C" __declspec(naked) void __fastcall fn_005505B0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp dword ptr [eax + 0x8], 0x0
        je done_ret
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push 0x0
        push 0x0
        push ebx
        call dword ptr [mem_009252C4]
        mov esi, dword ptr [esp + 0x20]
        push ebx
        push 0x800
        push esi
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je done_pop
        push ebp
        mov ebp, dword ptr [mem_0092521C]
        push edi
        xor edi, edi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loop_top:
        cmp byte ptr [esi], 0x76
        jne skip_parse
        cmp byte ptr [esi + 0x1], 0x74
        jne skip_parse
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x20]
        mov eax, dword ptr [edi + edx]
        lea ecx, [eax + 0x4]
        push ecx
        push eax
        push offset mem_009570C8
        push esi
        call ebp
        add esp, 0x10
        add edi, 0x4
skip_parse:
        push ebx
        push 0x800
        push esi
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne loop_top
        pop edi
        pop ebp
done_pop:
        pop esi
        pop ebx
done_ret:
        ret 0xc
    }
}

// [0x0055C4E0] sub_0055C4E0 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0055C4E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x15], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x15], 0x0
        jne L_X
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x15], 0x0
        jne L_Y
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_R:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x15], 0x0
        je L_R
    L_Y:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_X:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        jne L_Z
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_W:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_Z
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        je L_W
    L_Z:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x15], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x00550520] sub_00550520 (135 bytes)
extern "C" int mem_009252C4;
extern "C" int mem_009252C0;
extern "C" int mem_0092521C;
extern "C" char mem_009570BC;

extern "C" __declspec(naked) void __fastcall fn_00550520(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp dword ptr [eax + 0x4], 0x0
        je done_ret
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push 0x0
        push 0x0
        push ebx
        call dword ptr [mem_009252C4]
        mov esi, dword ptr [esp + 0x20]
        push ebx
        push 0x800
        push esi
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je done_pop
        push ebp
        mov ebp, dword ptr [mem_0092521C]
        push edi
        xor edi, edi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loop_top:
        cmp byte ptr [esi], 0x76
        jne skip_parse
        cmp byte ptr [esi + 0x1], 0x6e
        jne skip_parse
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x18]
        mov eax, dword ptr [edi + edx]
        lea ecx, [eax + 0x8]
        push ecx
        lea edx, [eax + 0x4]
        push edx
        push eax
        push offset mem_009570BC
        push esi
        call ebp
        add esp, 0x14
        add edi, 0x4
skip_parse:
        push ebx
        push 0x800
        push esi
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne loop_top
        pop edi
        pop ebp
done_pop:
        pop esi
        pop ebx
done_ret:
        ret 0xc
    }
}

// [0x00558FE0] sub_00558FE0 (140 bytes)
extern "C" __declspec(naked) void __cdecl fn_00558FE0(void) {
    __asm {
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 0x89a53c
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        cmp esi, dword ptr [esp + 0x20]
        push edi
        je done_loop
        xor ebp, ebp
outer_loop:
        mov edi, dword ptr [esi + 0x2c]
        cmp edi, ebp
        mov dword ptr [esp + 0x18], ebp
        je skip_vec
        mov ebx, dword ptr [esi + 0x30]
        cmp edi, ebx
        je free_vec
inner_loop:
        mov ecx, edi
        call dword ptr [mem_00924FF4]
        add edi, 0x1c
        cmp edi, ebx
        jne inner_loop
free_vec:
        mov eax, dword ptr [esi + 0x2c]
        push eax
        call ext_006A5C5C
        add esp, 0x4
skip_vec:
        lea ecx, [esi + 0xc]
        mov dword ptr [esi + 0x2c], ebp
        mov dword ptr [esi + 0x30], ebp
        mov dword ptr [esi + 0x34], ebp
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FF4]
        add esi, 0x38
        cmp esi, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x20], esi
        jne outer_loop
done_loop:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00559B20] sub_00559B20 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_00559B20(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_00559B20
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_00558FE0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_00559B20:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00555980] sub_00555980 (141 bytes)
extern "C" void ext_00553F00();
extern "C" void ext_00663060();
extern "C" void ext_006A6DD2();
// Naked: C++ try/catch under /EHsc drops the EH frame around extern "C" callees, and the
// target keeps a per-iteration EH state byte, so the frame and loop are written out directly.
extern "C" __declspec(naked) char* __cdecl fn_00555980(char* first, char* last, char* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89a1b1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call ext_00553F00
    skip_copy:
        add esi, 0x54
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x54
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_00663060
        add esi, 0x54
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0055DE80] sub_0055DE80 (151 bytes)
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6E92();
extern "C" void ext_006BB750();
extern "C" void ext_006BC7F0();
extern "C" int mem_00993828;
extern "C" int mem_00958790;
extern "C" __declspec(naked) void __fastcall fn_0055DE80(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x174]
        sub esp, 8
        fadd qword ptr [mem_00993828]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp + 0xc]
        add esp, 8
        fld dword ptr [esp + 4]
        call ext_006A6DE0
        mov ecx, eax
        cmp ecx, 0x18
        mov dword ptr [esp + 4], ecx
        jne L_not18
        push 0xb
        jmp L_call
L_not18:
        cmp ecx, 0x19
        jne L_not19
        push 0xa
        jmp L_call
L_not19:
        fild dword ptr [esp + 4]
        fcomp qword ptr [mem_00958790]
        fnstsw ax
        test ah, 0x44
        jp L_notEq
        push 0x9
        jmp L_call
L_notEq:
        cmp ecx, 0x1e
        je L_push6
        cmp ecx, 0x32
        jne L_not32
        push 0x4
        jmp L_call
L_not32:
        cmp ecx, 0x3c
        jne L_not3c
        push 0x3
        jmp L_call
L_not3c:
        cmp ecx, 0x78
        jne L_push6
        push 0x1
        jmp L_call
L_push6:
        push 0x6
L_call:
        mov ecx, dword ptr [esi + 0x470]
        call ext_006BC7F0
        mov ecx, eax
        call ext_006BB750
        pop esi
        pop ecx
        ret
    }
}

// [0x0055C3B0] sub_0055C3B0 (152 bytes)
extern "C" void ext_00403560();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_0055C3B0(void* self, int edx_unused, const void* a1, int a2_unused) {
    __asm {
        push -1
        push 0x89aa5a
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push esi
        mov esi, ecx
        push 0x9583c0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE4]
        push eax
        mov eax, dword ptr [esp + 0x54]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x4c], 0x1
        call ext_00403560
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x48], 0x3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x28]
        mov dword ptr [esi], 0x92e2e0
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8
    }
}

extern "C" void ext_0055C3B0();
extern "C" void ext_005DF940();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A85480;
extern "C" int mem_00924FE4;

// [0x0055CAC0] sub_0055CAC0 (111 bytes)
extern "C" __declspec(naked) void __fastcall fn_0055CAC0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b4989
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_005DF940
        test eax, eax
        jne L_0055CB1D
        mov eax, dword ptr [mem_00A85480]
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        push esi
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x74], 0x0
        call ext_0055C3B0
        push 0x9d3748
        lea edx, [esp + 0x24]
        push edx
        call ext_006A6DD2
    L_0055CB1D:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x005558E0] sub_005558E0 (159 bytes)
extern "C" void ext_0046FAD0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
// Naked: C++ try/catch under /EHsc drops the EH frame around extern "C" callees, and the
// target keeps a per-iteration EH state byte, so the frame and loop are written out directly.
extern "C" __declspec(naked) void* __cdecl fn_005558E0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89a18a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov byte ptr [ebp - 0x4], 0x2
        call dword ptr [mem_00924FE0]
    skip_copy:
        add esi, 0x38
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x38
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    dtor_loop:
        mov ecx, esi
        call ext_0046FAD0
        add esi, 0x38
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00553290] sub_00553290 (163 bytes)
extern "C" int mem_009334D8;
extern "C" int mem_00928E78;
extern "C" int mem_009575B8;
extern "C" int mem_009575C8;
extern "C" int mem_009575D8;
extern "C" __declspec(naked) void __fastcall fn_00553290(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x2c]
        cmp eax, 1
        jne loc_5532bc
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009334D8]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]

    loc_5532bc:
        cmp eax, 2
        jne loc_5532cd
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_00928E78]
        jmp loc_5532fe

    loc_5532cd:
        cmp eax, 3
        jne loc_5532de
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009575B8]
        jmp loc_5532fe

    loc_5532de:
        cmp eax, 4
        jne loc_5532ef
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009575C8]
        jmp loc_5532fe

    loc_5532ef:
        cmp eax, 5
        jne loc_553318
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009575D8]

    loc_5532fe:
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]

    loc_553318:
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        ret 0x10
    }
}

// [0x00554DC0] sub_00554DC0 (134 bytes)
extern "C" void ext_00553290();
extern "C" __declspec(naked) void __fastcall fn_00554DC0(void* self, int edx_unused, float* out, float a, float b, float c) {
    __asm {
        sub esp, 0x18
        fld dword ptr [esp + 0x20]
        sub esp, 0x0c
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x18]
        push eax
        call ext_00553290
        fld dword ptr [ecx + 0x24]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [esp + 0x20]
        fldz
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        fld dword ptr [esp]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fmul st, st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0x18
        ret 0x10
    }
}

// [0x005533A0] sub_005533A0 (163 bytes)
extern "C" int mem_0092A280;
extern "C" int mem_0092C528;
extern "C" int mem_009575B0;
extern "C" int mem_009575C0;
extern "C" int mem_009575D0;
extern "C" __declspec(naked) void __fastcall fn_005533A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x2c]
        cmp eax, 1
        jne loc_5533cc
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_0092A280]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]

    loc_5533cc:
        cmp eax, 2
        jne loc_5533dd
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_0092C528]
        jmp loc_55340e

    loc_5533dd:
        cmp eax, 3
        jne loc_5533ee
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009575B0]
        jmp loc_55340e

    loc_5533ee:
        cmp eax, 4
        jne loc_5533ff
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009575C0]
        jmp loc_55340e

    loc_5533ff:
        cmp eax, 5
        jne loc_553428
        fld dword ptr [esp + 0x8]
        fld qword ptr [mem_009575D0]

    loc_55340e:
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]

    loc_553428:
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        ret 0x10
    }
}

// [0x00554EB0] sub_00554EB0 (142 bytes)
extern "C" void ext_005533A0();
extern "C" __declspec(naked) void __fastcall fn_00554EB0(void* self) {
    __asm {
        sub esp, 0x18
        fld dword ptr [esp + 0x20]
        sub esp, 0xc
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [eax + 0x8]
        lea eax, [esp + 0x18]
        push eax
        call ext_005533A0
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x24]
        fmul dword ptr [ecx + 0x10]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fld1
        _emit 0xde
        _emit 0xf1
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x4]
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0x18
        ret 0x10
    }
}

// [0x00553520] sub_00553520 (135 bytes)
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_0066A8B0();
extern "C" int mem_00924FDC;
extern "C" int mem_00987B44;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00553520(void* self) {
    __asm {
        push -1
        push 0x008b3308
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x20]
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x20]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [mem_00987B44]
        push ecx
        lea ecx, [esp + 0xc]
        call ext_0066A720
        push 1
        mov ecx, edi
        mov dword ptr [esp + 0x24], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [esp + 0x10]
        push edx
        call ext_0066A8B0
        mov eax, dword ptr [esp + 0x18]
        add esp, 0xc
        lea ecx, [esp + 0x8]
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_0066A760
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 4
    }
}

// [0x005535B0] sub_005535B0 (138 bytes)
extern "C" int mem_009576F8;

extern "C" __declspec(naked) void __fastcall fn_005535B0(void* self) {
    __asm {
        push -1
        push 0x008b3308
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x20]
        push esi
        push eax
        mov esi, ecx
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [mem_00987B44]
        push ecx
        lea ecx, [esp + 0x8]
        call ext_0066A720
        fld qword ptr [mem_009576F8]
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        mov dword ptr [esp + 0x24], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [esp + 0x10]
        push edx
        call ext_0066A8B0
        mov eax, dword ptr [esp + 0x18]
        add esp, 0x10
        lea ecx, [esp + 0x4]
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0066A760
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00556500] sub_00556500 (190 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00555420();

extern "C" __declspec(naked) void* __fastcall fn_00556500(void* self, int edx_unused, void* out, int b) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_00556520
        call dword ptr [mem_00925134]
    L_00556520:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_0055652E
        call dword ptr [mem_00925134]
    L_0055652E:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x24]
        push 0x0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 0x2c], edi
        call ext_00555420
        mov edi, dword ptr [esi + 0x8]
        add esp, 0x14
        cmp dword ptr [esi + 0x4], edi
        mov ebx, eax
        jbe L_00556558
        call dword ptr [mem_00925134]
    L_00556558:
        test esi, esi
        je L_0055655E
        cmp esi, esi
        je L_00556566
    L_0055655E:
        call dword ptr [mem_00925134]
    L_00556566:
        cmp ebx, edi
        je L_00556599
        test esi, esi
        jne L_00556574
        call dword ptr [mem_00925134]
    L_00556574:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_0055657F
        call dword ptr [mem_00925134]
    L_0055657F:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jb L_00556599
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 0x0c
        ret 0x8
    L_00556599:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [edi], 0x0
        jbe L_005565AD
        call dword ptr [mem_00925134]
    L_005565AD:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 0x4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 0x8
    }
}

// [0x0055DA40] sub_0055DA40 (191 bytes)
extern "C" int mem_00B396F4;
extern "C" int mem_00924FB4;
extern "C" int mem_00924EC4;
extern "C" int mem_00924FE0;
extern "C" int mem_00925100;
extern "C" int mem_00924FF4;
extern "C" void ext_008B56F9();
extern "C" __declspec(naked) void __fastcall fn_0055DA40(void* self) {
    __asm {
        push -1
        push offset ext_008B56F9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        push edi
        mov edi, dword ptr [esp + 0x3c]
        push 0
        push offset mem_00B396F4
        mov ecx, edi
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FB4]
        mov esi, eax
        mov eax, dword ptr [mem_00924EC4]
        cmp esi, dword ptr [eax]
        push edi
        je ELSE_BRANCH
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x20]
        add ecx, -1
        push ecx
        push esi
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], 0
        call dword ptr [mem_00925100]
        mov esi, dword ptr [esp + 0x38]
        lea edx, [esp + 0x0c]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x0c]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x8
ELSE_BRANCH:
        mov esi, dword ptr [esp + 0x3c]
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x8
    }
}

// [0x005568E0] sub_005568E0 (102 bytes)
extern "C" void ext_00556500();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005568E0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        call ext_00556500
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_0055690A
        call ebp
    L_0055690A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_00556916
        cmp edi, esi
        je L_00556918
    L_00556916:
        call ebp
    L_00556918:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_0055693A
        test edi, edi
        jne L_00556926
        call ebp
    L_00556926:
        cmp esi, dword ptr [edi + 8]
        jb L_0055692D
        call ebp
    L_0055692D:
        pop edi
        lea eax, [esi + 4]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_0055693A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00553450] sub_00553450 (197 bytes)
extern "C" void ext_0066A720();
extern "C" void ext_0066A760();
extern "C" void ext_0066A8B0();
extern "C" int mem_00924FE4;
extern "C" int mem_00987B44;
extern "C" int mem_009576F8;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_00553450(void* self) {
    __asm {
        push -1
        push 0x89a03d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push esi
        push edi
        mov esi, ecx
        push 0x957704
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE4]
        lea edi, [esi + 0x20]
        push 0x957700
        mov ecx, edi
        mov dword ptr [esp + 0x28], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00987B44]
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x28], 0x1
        call ext_0066A720
        fld qword ptr [mem_009576F8]
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        mov byte ptr [esp + 0x2c], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call ext_0066A8B0
        mov edx, dword ptr [esp + 0x20]
        add esp, 0x10
        push 0x1
        mov ecx, edi
        mov dword ptr [esi + 0x1c], edx
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x14]
        push eax
        call ext_0066A8B0
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x3c], ecx
        add esp, 0xc
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x24], 0x1
        call ext_0066A760
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret
    }
}

// [0x00554040] sub_00554040 (202 bytes)
// SEH-guarded copy: calls base-part helper 0x00553F00 on (this, src), copy-constructs the
// std::string at +0x54 from src+0x54, copies 12 floats from +0x70..+0x9c, returns this in eax.
extern "C" void ext_00553F00();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00554040(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x89a0d8
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
        call ext_00553F00
        lea eax, [edi + 0x54]
        push eax
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x18], 0
        call dword ptr [mem_00924FE0]
        fld dword ptr [edi + 0x70]
        fstp dword ptr [esi + 0x70]
        mov ecx, dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x74]
        mov eax, esi
        fstp dword ptr [esi + 0x74]
        fld dword ptr [edi + 0x78]
        fstp dword ptr [esi + 0x78]
        fld dword ptr [edi + 0x7c]
        fstp dword ptr [esi + 0x7c]
        fld dword ptr [edi + 0x80]
        fstp dword ptr [esi + 0x80]
        fld dword ptr [edi + 0x84]
        fstp dword ptr [esi + 0x84]
        fld dword ptr [edi + 0x88]
        fstp dword ptr [esi + 0x88]
        fld dword ptr [edi + 0x8c]
        fstp dword ptr [esi + 0x8c]
        fld dword ptr [edi + 0x90]
        fstp dword ptr [esi + 0x90]
        fld dword ptr [edi + 0x94]
        fstp dword ptr [esi + 0x94]
        fld dword ptr [edi + 0x98]
        fstp dword ptr [esi + 0x98]
        fld dword ptr [edi + 0x9c]
        pop edi
        fstp dword ptr [esi + 0x9c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00555A10] sub_00555A10 (157 bytes)
extern "C" void ext_00553FF0();
extern "C" void ext_00554040();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) char* __cdecl fn_00555A10(char* first, char* last, char* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89a1d1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call ext_00554040
    skip_copy:
        add esi, 0xa0
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0xa0
        jmp loop_top
    unwind_funclet:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // lea esp, [esp]
    dtor_loop:
        mov ecx, esi
        call ext_00553FF0
        add esi, 0xa0
        cmp esi, edi
        jne dtor_loop
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00556DD0] sub_00556DD0 (216 bytes)
extern "C" void ext_005539B0();
extern "C" void ext_005539D0();
extern "C" void ext_005539F0();
extern "C" void ext_00553A10();
extern "C" void ext_00553A30();
extern "C" void ext_005568E0();
extern "C" double mem_00957788;
extern "C" double mem_00957588;
extern "C" double mem_00955090;
extern "C" double mem_00957780;
extern "C" __declspec(naked) void __fastcall fn_00556DD0(void* self) {
    __asm {
        fld dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x8]
        fstp dword ptr [edi]
        lea edx, [esp + 0x8]
        fld dword ptr [esp + 0x14]
        push edx
        fstp dword ptr [edi + 0x4]
        mov dword ptr [esp + 0xc], eax
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [edi + 0x8]
        call ext_005568E0
        mov ecx, eax
        test ecx, ecx
        je L_END
        push esi
        xor esi, esi
    L_LOOP:
        push esi
        call ext_005539B0
        test al, al
        je L_TAIL
        push esi
        call ext_005539D0
        push esi
        call ext_005539F0
        mov edx, eax
        mov dword ptr [esp + 0xc], edx
        fild dword ptr [esp + 0xc]
        fmul qword ptr [mem_00957788]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fadd dword ptr [edi + esi * 4]
        fstp dword ptr [edi + esi * 4]
        fsubr dword ptr [edi + esi * 4]
        fld qword ptr [mem_00957588]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jp L_ABOVE
        add edx, -1
        fstp st(0)
        push edx
        push esi
        call ext_00553A30
        fld dword ptr [edi + esi * 4]
        fsub qword ptr [mem_00955090]
        jmp L_STORE
    L_ABOVE:
        fcomp qword ptr [mem_00957780]
        fnstsw ax
        test ah, 0x5
        jp L_TAIL
        add edx, 0x1
        push edx
        push esi
        call ext_00553A30
        fld dword ptr [edi + esi * 4]
        fadd qword ptr [mem_00955090]
    L_STORE:
        fstp dword ptr [edi + esi * 4]
    L_TAIL:
        fld dword ptr [edi + esi * 4]
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_00553A10
        add esi, 0x1
        cmp esi, 0x2
        jle L_LOOP
        pop esi
    L_END:
        mov eax, edi
        pop edi
        ret 0x14
    }
}

// [0x00556EB0] sub_00556EB0 (53 bytes)
extern "C" void ext_00556DD0();

struct Vec3_556EB0 {
    float x, y, z;
    Vec3_556EB0(const Vec3_556EB0& o) : x(o.x), y(o.y), z(o.z) {}
};

struct Inner_556EB0 {
    void* sub_00556DD0(void* a1, int a2, Vec3_556EB0 v);
};

struct Outer_556EB0 {
    char pad[0x43c];
    Inner_556EB0 inner;
    void* fn_00556EB0(void* a1, int a2, Vec3_556EB0 v);
};

extern "C" void* __fastcall fn_00556EB0(Outer_556EB0* self, int edx_unused, void* a1, int a2, Vec3_556EB0 v) {
    self->inner.sub_00556DD0(a1, a2, v);
    return a1;
}

// [0x0055B880] sub_0055B880 (63 bytes)
extern "C" void ext_0055B780();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0055B880(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_clear_0055B880
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push ecx
        push esi
        push edx
        push eax
        call ext_0055B780
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
    L_clear_0055B880:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        pop ecx
        ret
    }
}

// [0x00552F90] sub_00552F90 (235 bytes)
extern "C" int mem_0092944C;
extern "C" int mem_009576E4;
extern "C" int mem_00A3464C;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_00552F90(void* self) {
    __asm {
        fld dword ptr [mem_0092944C]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        fstp dword ptr [esi + 0x8]
        mov dword ptr [esi], ebx
        fld1
        mov dword ptr [esi + 0x4], 0x3c
        mov dword ptr [esi + 0xc], ebx
        fst dword ptr [esi + 0x20]
        fst dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x28], ebx
        fst dword ptr [esi + 0x1c]
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        fstp dword ptr [esi + 0x10]
        fld dword ptr [mem_009576E4]
        mov eax, 0x1
        fst dword ptr [esi + 0x7c]
        mov byte ptr [esi + 0x14], al
        fst dword ptr [esi + 0x80]
        mov dword ptr [esi + 0x70], ebx
        fstp dword ptr [esi + 0x84]
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0xac], 0xc
        mov dword ptr [esi + 0xb0], 0x8
        mov dword ptr [esi + 0xb4], eax
        mov byte ptr [esi + 0x88], bl
        mov byte ptr [esi + 0x4c], al
        mov byte ptr [esi + 0x4d], bl
        mov byte ptr [esi + 0x4e], bl
        mov byte ptr [esi + 0x34], bl
        mov byte ptr [esi + 0x6d], al
        mov byte ptr [esi + 0x15], bl
        mov byte ptr [esi + 0x6c], al
        mov byte ptr [esi + 0x16], al
        mov byte ptr [esi + 0x76], bl
        mov byte ptr [esi + 0x77], bl
        mov byte ptr [esi + 0x78], bl
        mov byte ptr [esi + 0x79], bl
        mov byte ptr [esi + 0xb8], bl
        mov byte ptr [esi + 0x74], bl
        mov byte ptr [esi + 0x17], al
        mov byte ptr [esi + 0x18], al
        mov byte ptr [esi + 0x75], bl
        mov eax, dword ptr [mem_00A3464C]
        push eax
        lea ecx, [esi + 0xd8]
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        lea ecx, [esi + 0xf4]
        call dword ptr [mem_00924FD4]
        push 0x928b5d
        lea ecx, [esi + 0x8c]
        mov byte ptr [esi + 0x19], bl
        call dword ptr [mem_00924FD4]
        mov byte ptr [esi + 0xa8], bl
        pop esi
        pop ebx
        ret
    }
}

// [0x00557380] sub_00557380 (171 bytes)
extern "C" void ext_00552F90();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_00557380(void* self) {
    __asm {
        push -1
        push 0x89a343
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        fld1
        xor eax, eax
        push esi
        mov esi, ecx
        fst dword ptr [esi + 0x20]
        mov dword ptr [esi + 0x28], eax
        fst dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x2c], eax
        fstp dword ptr [esi + 0x1c]
        mov dword ptr [esi + 0x30], eax
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esi + 0x40], eax
        mov dword ptr [esi + 0x44], eax
        lea ecx, [esi + 0x50]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x8c]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xbc]
        mov byte ptr [esp + 0x10], 2
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xd8]
        mov byte ptr [esp + 0x10], 3
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x10], 4
        call dword ptr [mem_00924FE8]
        mov ecx, esi
        mov byte ptr [esp + 0x10], 5
        call ext_00552F90
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00558920] sub_00558920 (238 bytes)
extern "C" void ext_00401A10();
extern "C" void ext_00401D20();
extern "C" void ext_004026E0();
extern "C" void ext_00402B60();
extern "C" void ext_005581C0();
extern "C" void ext_0055D2B0();
extern "C" void ext_0065C660();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00558920(void* self) {
    __asm {
        push -1
        push 0x89a4fb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x929244
        mov dword ptr [esi + 4], 0x929238
        lea ecx, [esi + 0x45c]
        mov dword ptr [esp + 0x10], 0xa
        call ext_004026E0
        lea ecx, [esi + 0x44c]
        mov byte ptr [esp + 0x10], 9
        call ext_004026E0
        lea ecx, [esi + 0x43c]
        call ext_005581C0
        lea ecx, [esi + 0x42c]
        mov byte ptr [esp + 0x10], 7
        call ext_0055D2B0
        lea ecx, [esi + 0x3d4]
        mov byte ptr [esp + 0x10], 6
        call ext_00401A10
        lea ecx, [esi + 0x27c]
        mov byte ptr [esp + 0x10], 5
        call ext_00401D20
        lea ecx, [esi + 0x16c]
        mov byte ptr [esp + 0x10], 4
        call ext_00402B60
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x10], 3
        call ext_00402B60
        lea ecx, [esi + 0x40]
        mov byte ptr [esp + 0x10], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 8]
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0055D6E0] sub_0055D6E0 (99 bytes)
extern "C" void ext_00558920();
extern "C" int mem_00958454;
extern "C" int mem_00958448;

extern "C" __declspec(naked) void __fastcall fn_0055D6E0(void* self) {
    __asm {
        push -1
        push 0x89a648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], offset mem_00958454
        mov dword ptr [esi + 0x4], offset mem_00958448
        mov ecx, dword ptr [esi + 0x46c]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 0x0
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_skip:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0055F750] sub_0055F750 (174 bytes)
extern "C" void ext_00558920();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0055F750(void* self) {
    __asm {
        push -1
        push 0x89b285
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x95884c
        mov dword ptr [esi + 0x4], 0x958844
        mov eax, dword ptr [esi + 0x4c4]
        test eax, eax
        mov dword ptr [esp + 0x10], 0x2
        je L_0055F795
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_0055F795:
        lea ecx, [esi + 0x498]
        mov dword ptr [esi + 0x4c4], 0x0
        mov dword ptr [esi + 0x4c8], 0x0
        mov dword ptr [esi + 0x4cc], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x47c]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x474]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00558920
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00550280] sub_00550280 (274 bytes)
extern "C" int mem_00925498;
extern "C" int mem_00925490;
extern "C" int mem_00925488;
extern "C" __declspec(naked) void __stdcall fn_00550280(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        xor edi, edi
        cmp dword ptr [esi + 0xc], edi
        jle L_end
        push ebx
        mov ebx, dword ptr [mem_00925498]
        push ebp
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov eax, dword ptr [ecx]
        cmp eax, 3
        jne L_not3
        push 4
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebx
        jmp L_glEnd
    L_not3:
        cmp eax, 4
        jne L_not4
        push 7
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebx
        jmp L_glEnd
    L_not4:
        jle L_skip
        push 9
        call dword ptr [mem_00925490]
        mov ecx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ecx + 4*edi]
        mov ebp, 1
        cmp dword ptr [eax], ebp
        jle L_glEnd
    L_inner:
        mov edx, dword ptr [eax + 4*ebp]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        add ebp, 1
        cmp ebp, dword ptr [eax]
        jl L_inner
    L_glEnd:
        call dword ptr [mem_00925488]
    L_skip:
        add edi, 1
        cmp edi, dword ptr [esi + 0xc]
        jl L_loop
        pop ebp
        pop ebx
    L_end:
        pop edi
        pop esi
        ret 4
    }
}

// [0x005550A0] sub_005550A0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B385A8;
extern "C" int mem_00B3858C;
extern "C" __declspec(naked) void __fastcall fn_005550A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89a11e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B385A8], al
        jne skip_init
        or dword ptr [mem_00B385A8], eax
        push 0xa85204
        push offset mem_00B3858C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91bd80
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B3858C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0055E8E0] sub_0055E8E0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B39908;
extern "C" int mem_00B398EC;

extern "C" __declspec(naked) void __fastcall fn_0055E8E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89b1ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B39908], al
        jne skip_init
        or dword ptr [mem_00B39908], eax
        push 0xa85538
        push offset mem_00B398EC
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91c0b0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B398EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00552720] sub_00552720 (290 bytes)
extern "C" void ext_005404B0();
extern "C" void ext_00548280();
extern "C" void ext_005490E0();
extern "C" void ext_006A6C87();
extern "C" int mem_00957458;
extern "C" int mem_009574F8;
extern "C" int mem_009518E0;
extern "C" int mem_00AF4E74;
extern "C" int mem_00AF4E64;
extern "C" int mem_00AF4E68;
extern "C" int mem_00AF4E6C;
extern "C" int mem_00AF4E70;
extern "C" int mem_0093F7B8;
extern "C" int mem_009334D8;
extern "C" int mem_009939D8;

extern "C" __declspec(naked) void* __fastcall fn_00552720(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x899aa8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_00548280
        fld qword ptr [mem_00957458]
        fstp qword ptr [esi + 0xf8]
        mov dword ptr [esi], 0x95748c
        fld dword ptr [mem_009574F8]
        lea edi, [esi + 0x30]
        fstp dword ptr [edi]
        mov eax, 1
        fldz
        mov dword ptr [esp + 0x14], 0
        fst dword ptr [esi + 0x34]
        fld dword ptr [mem_009518E0]
        fstp dword ptr [esi + 0x38]
        test byte ptr [mem_00AF4E74], al
        jne loc_5527be
        or dword ptr [mem_00AF4E74], eax
        fst dword ptr [mem_00AF4E64]
        fst dword ptr [mem_00AF4E68]
        push 0x91b5b0
        fstp dword ptr [mem_00AF4E6C]
        fld1
        fstp dword ptr [mem_00AF4E70]
        call ext_006A6C87
        fldz
        add esp, 4
loc_5527be:
        fld dword ptr [mem_00AF4E64]
        push edi
        fstp dword ptr [esi + 0x48]
        lea ecx, [esi + 0x68]
        fld dword ptr [mem_00AF4E68]
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [mem_00AF4E6C]
        fstp dword ptr [esi + 0x50]
        fld dword ptr [mem_00AF4E70]
        fstp dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x58]
        fld1
        fstp dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esi + 0x44]
        fld qword ptr [mem_009334D8]
        fstp qword ptr [esi + 0xc8]
        fld qword ptr [mem_009939D8]
        fstp qword ptr [esi + 0xd0]
        call ext_005404B0
        mov ecx, esi
        call ext_005490E0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

extern "C" void ext_00551DE0();
extern "C" int mem_00924FE8;
extern "C" int mem_00957450;
extern "C" int mem_00957448;

// [0x00552020] sub_00552020 (271 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00552020(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x899a87
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_00548280
        lea ecx, [esi + 0xf8]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x9573dc
        call dword ptr [mem_00924FE8]
        fldz
        fst dword ptr [esi + 0x30]
        lea edi, [esi + 0x30]
        fst dword ptr [esi + 0x34]
        mov eax, 1
        fld dword ptr [mem_009518E0]
        mov byte ptr [esp + 0x14], al
        fstp dword ptr [esi + 0x38]
        test byte ptr [mem_00AF4E74], al
        jne loc_5520bd
        or dword ptr [mem_00AF4E74], eax
        fst dword ptr [mem_00AF4E64]
        fst dword ptr [mem_00AF4E68]
        push 0x91b5b0
        fstp dword ptr [mem_00AF4E6C]
        fld1
        fstp dword ptr [mem_00AF4E70]
        call ext_006A6C87
        fldz
        add esp, 4
loc_5520bd:
        fld dword ptr [mem_00AF4E64]
        push edi
        fstp dword ptr [esi + 0x48]
        lea ecx, [esi + 0x68]
        fld dword ptr [mem_00AF4E68]
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [mem_00AF4E6C]
        fstp dword ptr [esi + 0x50]
        fld dword ptr [mem_00AF4E70]
        fstp dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x5c]
        fstp dword ptr [esi + 0x58]
        fld1
        fstp dword ptr [esi + 0x5c]
        fld qword ptr [mem_00957450]
        fstp qword ptr [esi + 0xc8]
        fld qword ptr [mem_00957448]
        fstp qword ptr [esi + 0xd0]
        call ext_005404B0
        mov ecx, esi
        call ext_00551DE0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00552A90] sub_00552A90 (97 bytes)
extern "C" void ext_0067BA20();
extern "C" __declspec(naked) void __fastcall fn_00552A90(void* self, int edx_unused, int a, float b) {
    __asm {
        fld1
        push ebx
        mov ebx, [esp+8]
        fst dword ptr [ecx]
        fldz
        push esi
        fst dword ptr [ecx+4]
        lea esi, [ecx+0xc]
        fst dword ptr [ecx+8]
        push edi
        fst dword ptr [esi]
        lea edi, [ecx+0x18]
        fst dword ptr [ecx+0x14]
        push ecx
        fxch st(1)
        fst dword ptr [ecx+0x10]
        fxch st(1)
        fst dword ptr [edi]
        fstp dword ptr [ecx+0x1c]
        fstp dword ptr [ecx+0x20]
        fld dword ptr [esp+0x18]
        fstp dword ptr [esp]
        push ebx
        call ext_0067BA20
        fld dword ptr [esp+0x14]
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, esi
        call ext_0067BA20
        fld dword ptr [esp+0x14]
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, edi
        call ext_0067BA20
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x005542B0] sub_005542B0 (354 bytes)
extern "C" __declspec(naked) void __fastcall fn_005542B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x68
        mov eax, dword ptr [esp + 0x6c]
        fldz
        mov edx, ecx
        push esi
        mov esi, dword ptr [esp + 0x74]
        push edi
        mov ecx, 9
        lea edi, [esp + 0x4c]
        rep movsd
        fst dword ptr [eax + 8]
        fst dword ptr [eax + 4]
        fst dword ptr [eax]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x1c]
        fstp dword ptr [eax + 0x18]
        fld1
        fst dword ptr [eax]
        fst dword ptr [eax + 0x10]
        mov ecx, 9
        fstp dword ptr [eax + 0x20]
        lea esi, [esp + 0x4c]
        fld dword ptr [esp + 0x58]
        lea edi, [esp + 0x28]
        fld dword ptr [esp + 0x4c]
        rep movsd
        fld dword ptr [esp + 0x40]
        fld dword ptr [edx + 4]
        fmul st, st(3)
        fld dword ptr [edx]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [edx + 8]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x44]
        fst qword ptr [esp + 0x10]
        fld dword ptr [edx]
        fmul st, st(2)
        fld dword ptr [edx + 4]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [edx + 8]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [eax + 4]
        fld dword ptr [esp + 0x3c]
        fst qword ptr [esp + 0x18]
        fld dword ptr [esp + 0x30]
        fst qword ptr [esp + 0x20]
        fld dword ptr [esp + 0x6c]
        fstp qword ptr [esp + 8]
        fmul dword ptr [edx]
        fld dword ptr [edx + 4]
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [edx + 8]
        fmul qword ptr [esp + 8]
        faddp st(1), st
        fstp dword ptr [eax + 8]
        fld dword ptr [edx + 0x10]
        fmul st, st(5)
        fld dword ptr [edx + 0xc]
        fmul st, st(5)
        faddp st(1), st
        fld dword ptr [edx + 0x14]
        fmul st, st(4)
        faddp st(1), st
        fstp dword ptr [eax + 0xc]
        fld dword ptr [edx + 0x10]
        fmul st, st(2)
        fld dword ptr [edx + 0xc]
        fmul st, st(2)
        faddp st(1), st
        fld dword ptr [edx + 0x14]
        fmul qword ptr [esp + 0x10]
        faddp st(1), st
        pop edi
        pop esi
        fstp dword ptr [eax + 0x10]
        fld dword ptr [edx + 0x10]
        fmul qword ptr [esp + 0x10]
        fld dword ptr [edx + 0xc]
        fmul qword ptr [esp + 0x18]
        faddp st(1), st
        fld dword ptr [edx + 0x14]
        fld qword ptr [esp]
        fmul st(1), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [eax + 0x14]
        fld dword ptr [edx + 0x1c]
        fmulp st(6), st
        fld dword ptr [edx + 0x18]
        fmulp st(5), st
        fxch st(5)
        faddp st(4), st
        fld dword ptr [edx + 0x20]
        fmulp st(3), st
        fxch st(3)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 0x18]
        fmul dword ptr [edx + 0x1c]
        fld dword ptr [edx + 0x18]
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [edx + 0x20]
        fmul qword ptr [esp + 8]
        faddp st(1), st
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [edx + 0x1c]
        fmul qword ptr [esp + 0x10]
        fld dword ptr [edx + 0x18]
        fmul qword ptr [esp + 0x18]
        faddp st(1), st
        fld dword ptr [edx + 0x20]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [eax + 0x20]
        add esp, 0x68
        ret 8
    }
}

// [0x00554420] sub_00554420 (103 bytes)
extern "C" void ext_00552A90();
extern "C" void ext_005542B0();
extern "C" __declspec(naked) void __fastcall fn_00554420(void* self, int edx_unused, int a, float b) {
    __asm {
        sub esp, 0x48
        fldz
        mov eax, dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x8]
        push esi
        fst dword ptr [esp + 0x8]
        push edi
        fst dword ptr [esp + 0x1c]
        push ecx
        fst dword ptr [esp + 0x18]
        mov edi, ecx
        fst dword ptr [esp + 0x28]
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp + 0x24]
        fld1
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esp]
        push eax
        call ext_00552A90
        lea ecx, [esp + 0x8]
        push ecx
        lea edx, [esp + 0x30]
        push edx
        mov ecx, edi
        call ext_005542B0
        mov ecx, 0x9
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 8
    }
}

// [0x00554490] sub_00554490 (123 bytes)
extern "C" void ext_005542B0();
extern "C" __declspec(naked) void __fastcall fn_00554490(void* self, int edx_unused, void* p) {
    __asm {
        sub esp, 0x48
        mov eax, dword ptr [esp + 0x4c]
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov esi, eax
        mov ecx, 9
        lea edi, [esp + 0xc]
        rep movsd
        mov esi, eax
        mov ecx, 9
        lea edi, [esp + 0x30]
        rep movsd
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x44]
        lea eax, [esp + 0xc]
        fstp dword ptr [esp + 0x28]
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, ebx
        call ext_005542B0
        mov edi, ebx
        mov ecx, 9
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x48
        ret 4
    }
}

extern "C" void ext_0067DAD0();
extern "C" void ext_0067DB10();
extern "C" void ext_00694900();

// [0x00551D20] sub_00551D20 (88 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00551D20(void* self) {
    __asm {
        sub esp, 0x24
        fldz
        push ebx
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0x1c]
        push eax
        fst dword ptr [esp + 0x18]
        mov esi, ecx
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        fld1
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        call ext_0067DAD0
        lea ecx, [esp + 0x8]
        call ext_00694900
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov bl, al
        call ext_0067DB10
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x005500C0] sub_005500C0 (447 bytes)
extern "C" int mem_0092549C;
extern "C" int mem_00925490;
extern "C" int mem_00925498;
extern "C" int mem_00925488;

extern "C" __declspec(naked) void __stdcall fn_005500C0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        xor edi, edi
        cmp dword ptr [esi + 0xc], edi
        jle L_end
        push ebx
        push ebp
        mov ebp, dword ptr [mem_0092549C]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_loop:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov eax, dword ptr [ecx]
        cmp eax, 3
        jne L_not3
        push 4
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x18]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx + 4*eax]
        mov ebx, dword ptr [mem_00925498]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebp
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebp
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebx
        jmp L_glEnd
    L_not3:
        cmp eax, 4
        jne L_not4
        push 7
        call dword ptr [mem_00925490]
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x18]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx + 4*eax]
        mov ebx, dword ptr [mem_00925498]
        push edx
        call ebx
        mov eax, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 0x18]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebp
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [esi + 0x18]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebp
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edx]
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [esi + 0x18]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 0x10]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ebx
        jmp L_glEnd
    L_not4:
        jle L_skip
        push 9
        call dword ptr [mem_00925490]
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        xor ebx, ebx
        cmp dword ptr [ecx], ebx
        jle L_glEnd
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_inner:
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx + 4*edi]
        mov ecx, dword ptr [eax + 4*ebx]
        mov edx, dword ptr [esi + 0x18]
        mov eax, dword ptr [edx + 4*ecx]
        push eax
        call ebp
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 4*edi]
        mov eax, dword ptr [edx + 4*ebx + 4]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call dword ptr [mem_00925498]
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        add ebx, 1
        cmp ebx, dword ptr [ecx]
        jl L_inner
    L_glEnd:
        call dword ptr [mem_00925488]
    L_skip:
        add edi, 1
        cmp edi, dword ptr [esi + 0xc]
        jl L_loop
        pop ebp
        pop ebx
    L_end:
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_00553450();
extern "C" void ext_00557380();
extern "C" void ext_0055D280();
extern "C" void ext_0058F200();
extern "C" void ext_006A0670();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FE4;

// [0x00558C10] sub_00558C10 (340 bytes)
extern "C" __declspec(naked) void __fastcall fn_00558C10(void* self) {
    __asm {
        push -1
        push 0x0089a4fb
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov [esp + 0xc], esi
        mov dword ptr [esi + 4], 0x00928e84
        xor ebp, ebp
        lea ecx, [esi + 8]
        mov [esp + 0x18], ebp
        mov dword ptr [esi], 0x00929244
        mov dword ptr [esi + 4], 0x00929238
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x24]
        mov byte ptr [esp + 0x18], 1
        call dword ptr [mem_00924FE8]
        push 0x00928b5d
        lea ecx, [esi + 0x40]
        mov byte ptr [esp + 0x1c], 2
        call dword ptr [mem_00924FE4]
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x18], 3
        call ext_00557380
        lea ecx, [esi + 0x16c]
        mov byte ptr [esp + 0x18], 4
        call ext_00557380
        lea edi, [esi + 0x27c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 5
        call ext_0058F200
        mov dword ptr [edi + 0x150], 0x00928eac
        mov dword ptr [edi], 0x0092912c
        mov dword ptr [edi + 4], 0x009290e4
        mov dword ptr [edi + 8], 0x009290a4
        mov dword ptr [edi + 0xc], 0x00929054
        mov dword ptr [edi + 0x150], 0x00929040
        lea ecx, [esi + 0x3d4]
        mov byte ptr [esp + 0x18], 6
        call ext_00553450
        lea ecx, [esi + 0x42c]
        mov byte ptr [esp + 0x18], 7
        mov [esi + 0x414], ebp
        mov [esi + 0x418], ebp
        mov [esi + 0x41c], ebp
        mov [esi + 0x420], ebp
        mov [esi + 0x424], ebp
        mov byte ptr [esi + 0x428], 1
        call ext_0055D280
        lea ecx, [esi + 0x43c]
        mov byte ptr [esp + 0x18], 8
        mov [esi + 0x438], ebp
        call ext_006A0670
        mov [esi + 0x450], ebp
        mov [esi + 0x454], ebp
        mov [esi + 0x458], ebp
        mov ecx, [esp + 0x10]
        mov [esi + 0x460], ebp
        mov [esi + 0x464], ebp
        mov [esi + 0x468], ebp
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0055D6B0] sub_0055D6B0 (35 bytes)
extern "C" void ext_00558C10();

extern "C" void* __fastcall fn_0055D6B0(void* self) {
    unsigned int* p = (unsigned int*)self;
    ext_00558C10();
    p[0] = 0x958454;
    p[0x4 / 4] = 0x958448;
    p[0x46c / 4] = 0;
    return self;
}

extern "C" void ext_00558C10();
extern "C" int mem_00924FE8;

// [0x0055F6B0] sub_0055F6B0 (133 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0055F6B0(void* self, int edx_unused, int arg0) {
    __asm {
        push -1
        push 0x89b254
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov [esp + 0x8], esi
        call ext_00558C10
        xor edi, edi
        mov dword ptr [esi], 0x95884c
        mov dword ptr [esi + 0x4], 0x958844
        mov [esp + 0x14], edi
        mov [esi + 0x474], edi
        lea ecx, [esi + 0x47c]
        mov byte ptr [esp + 0x14], 1
        call dword ptr [mem_00924FE8]
        lea ecx, [esi + 0x498]
        mov byte ptr [esp + 0x14], 2
        call dword ptr [mem_00924FE8]
        mov ecx, [esp + 0xc]
        mov [esi + 0x4c4], edi
        mov [esi + 0x4c8], edi
        mov [esi + 0x4cc], edi
        pop edi
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005556D0] sub_005556D0 (197 bytes)
extern "C" void ext_00696260();
extern "C" int mem_00924FE8;
extern "C" int mem_00925134;
extern "C" int mem_00924EC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005556D0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        mov ebx, dword ptr [esp + 0x40]
        mov edi, dword ptr [ebx + 0x4]
        cmp edi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [mem_00925134]
        mov dword ptr [esp + 0x38], 0x0
        jbe L_555712
        call ebp
    L_555712:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_55571c
        call ebp
    L_55571c:
        cmp edi, esi
        je L_555758
        cmp edi, dword ptr [ebx + 0x8]
        jb L_555727
        call ebp
    L_555727:
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je L_555740
        sub eax, 0x1
        je L_55573c
        sub eax, 0x1
        jne L_55574c
        push 0x5a
        jmp L_555742
    L_55573c:
        push 0x59
        jmp L_555742
    L_555740:
        push 0x58
    L_555742:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924EC0]
    L_55574c:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_555753
        call ebp
    L_555753:
        add edi, 0x8
        jmp L_555712
    L_555758:
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call ext_00696260
        add esp, 0x8
        lea ecx, [esp + 0x14]
        mov esi, eax
        mov dword ptr [esp + 0x38], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x2c
        ret 4
    }
}

extern "C" void ext_0041A0A0();
extern "C" void ext_0045DB00();
extern "C" void ext_004EF970();
extern "C" int mem_009251C4;
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00928ECC;
extern "C" int mem_009CDF20;
extern "C" int mem_00928ED8;

// [0x0055C5D0] sub_0055C5D0 (508 bytes)
extern "C" void ext_004EF970();
extern "C" void ext_0045DB00();
extern "C" void ext_0041A0A0();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_0055C5D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x1ffffffe
        jb L_0055c64d
        push offset mem_0092C530
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x50], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x54], 0x1
        mov dword ptr [esp + 0x24], offset mem_00928ECC
        call dword ptr [mem_00924FE0]
        push offset mem_009CDF20
        lea ecx, [esp + 0x24]
        push ecx
        mov byte ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x28], offset mem_00928ED8
        call ext_006A6DD2
    L_0055c64d:
        mov edx, dword ptr [esp + 0x64]
        mov eax, dword ptr [edi + 0x4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x6c]
        push 0x0
        push edx
        push eax
        push esi
        push eax
        call ext_004EF970
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_0055c687
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_0055c6a9
    L_0055c687:
        cmp byte ptr [esp + 0x68], 0x0
        je L_0055c69b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_0055c6a9
        mov dword ptr [eax], ebp
        jmp L_0055c6a9
    L_0055c69b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_0055c6a9
        mov dword ptr [eax + 0x8], ebp
    L_0055c6a9:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x14], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_0055c7a5
        jmp L_0055c6c0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_0055c6c0:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_0055c71a
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x14], 0x0
        jne L_0055c6eb
        mov byte ptr [ecx + 0x14], bl
        mov byte ptr [edx + 0x14], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x14], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_0055c795
    L_0055c6eb:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_0055c6fa
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0045DB00
    L_0055c6fa:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x14], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x14], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_0041A0A0
        jmp L_0055c795
    L_0055c71a:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x14], 0x0
        jne L_0055c738
        mov byte ptr [ecx + 0x14], bl
        mov byte ptr [edx + 0x14], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x14], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_0055c795
    L_0055c738:
        cmp esi, dword ptr [ecx]
        jne L_0055c746
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_0041A0A0
    L_0055c746:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x14], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x14], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x15], 0x0
        jne L_0055c76f
        mov dword ptr [edx + 0x4], eax
    L_0055c76f:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_0055c782
        mov dword ptr [edx + 0x4], ecx
        jmp L_0055c790
    L_0055c782:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_0055c78d
        mov dword ptr [edx], ecx
        jmp L_0055c790
    L_0055c78d:
        mov dword ptr [edx + 0x8], ecx
    L_0055c790:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_0055c795:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x14], 0x0
        lea eax, [esi + 0x4]
        je L_0055c6c0
    L_0055c7a5:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x14], bl
        mov eax, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], edi
        pop ebx
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x10
    }
}

// [0x00550640] sub_00550640 (510 bytes)
extern "C" int mem_009252C4;
extern "C" int mem_009252C0;
extern "C" int mem_009251E4;
extern "C" int mem_00925208;

extern "C" __declspec(naked) void __fastcall fn_00550640(void* self, int edx_unused, FILE* fp, char* obj, char* buf) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push esi
        mov dword ptr [esp + 0x14], ecx
        call dword ptr [mem_009252C4]
        mov eax, dword ptr [esp + 0x24]
        push esi
        push 0x800
        push eax
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je end_block
        push ebx
        mov ebx, dword ptr [mem_009252BC]
        push ebp
        mov ebp, dword ptr [mem_009251E4]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor esi, esi
        jmp loop_top
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        mov eax, dword ptr [esp + 0x24]
        cmp byte ptr [eax], 0x66
        jne refill
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call fn_005503A0
        mov ecx, dword ptr [esp + 0x24]
        push 0x9570d4
        push ecx
        mov dword ptr [esp + 0x28], eax
        call ebx
        mov eax, dword ptr [esp + 0x28]
        add esp, 0x8
        cmp eax, 0x3
        jne not3
        push 0x10
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx], 0x3
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x28
        sub eax, 0x1
        mov dword ptr [ecx + 0xc], eax
        jmp after
    not3:
        cmp eax, 0x4
        jne not4
        push 0x14
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx], 0x4
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0xc], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x34
        sub eax, 0x1
        mov dword ptr [ecx + 0x10], eax
        jmp after
    not4:
        jle after
        lea edx, [eax * 4 + 0x4]
        push edx
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + ecx], eax
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x4
        test eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [esp + 0x10], 0x0
        jle after
    inner:
        push 0x9570d4
        push 0x0
        call ebx
        push eax
        call ebp
        mov edx, eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        mov eax, dword ptr [esp + 0x1c]
        sub edx, 0x1
        mov dword ptr [ecx + eax * 4 + 0x4], edx
        add eax, 0x1
        add esp, 0xc
        cmp eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], eax
        jl inner
    after:
        mov eax, dword ptr [esp + 0x24]
        add esi, 0x4
    refill:
        mov edx, dword ptr [esp + 0x1c]
        push edx
        push 0x800
        push eax
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne loop_top
        pop edi
        pop ebp
        pop ebx
    end_block:
        pop esi
        add esp, 0x8
        ret 0xc
    }
}

// [0x0055C8F0] sub_0055C8F0 (185 bytes)
extern "C" void ext_0055C4E0();
extern "C" void ext_0055C5D0();

extern "C" __declspec(naked) void __fastcall fn_0055C8F0(void* self, int edx_unused, void* out_pair, void* key_ptr) {
    __asm {
        sub esp, 0ch
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 4]
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 15h], 0
        mov cl, 1
        mov byte ptr [esp + 0ch], cl
        jne L_AFTER_SEARCH
        mov edx, dword ptr [ebp]
    L_SEARCH:
        cmp edx, dword ptr [eax + 0ch]
        mov esi, eax
        setl cl
        test cl, cl
        mov byte ptr [esp + 0ch], cl
        je L_GO_RIGHT
        mov eax, dword ptr [eax]
        jmp L_CHECK_NIL
    L_GO_RIGHT:
        mov eax, dword ptr [eax + 8]
    L_CHECK_NIL:
        cmp byte ptr [eax + 15h], 0
        je L_SEARCH
    L_AFTER_SEARCH:
        test cl, cl
        mov edx, esi
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], edi
        je L_TAIL_CHECK
        mov eax, dword ptr [edi + 4]
        cmp esi, dword ptr [eax]
        lea ecx, [esp + 10h]
        jne L_CALL_C4E0
        push ebp
        push esi
        push 1
        push ecx
    L_CALL_C5D0:
        mov ecx, edi
        call ext_0055C5D0
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ecx + 4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        mov byte ptr [eax + 8], 1
        pop ebp
        add esp, 0ch
        ret 8
    L_CALL_C4E0:
        call ext_0055C4E0
        mov edx, dword ptr [esp + 14h]
    L_TAIL_CHECK:
        mov eax, dword ptr [edx + 0ch]
        cmp eax, dword ptr [ebp]
        jge L_RET_NOINSERT
        mov ecx, dword ptr [esp + 0ch]
        push ebp
        push esi
        push ecx
        lea edx, [esp + 1ch]
        push edx
        jmp L_CALL_C5D0
    L_RET_NOINSERT:
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov byte ptr [eax + 8], 0
        pop ebp
        add esp, 0ch
        ret 8
    }
}

// [0x0055D040] sub_0055D040 (172 bytes)
extern "C" void ext_00414410();
extern "C" void ext_0055C8F0();
extern "C" void ext_005DF940();
extern "C" void ext_006A6DD2();
extern "C" int mem_00A85480;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_0055D040(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    -1
        push    0x89aaf1
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
        call    ext_005DF940
        test    eax, eax
        je      L_55d0b2
        mov     eax, dword ptr [mem_00A85480]
        push    eax
        lea     ecx, [esp + 0x24]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x74]
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
    L_55d0b2:
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x80], 0
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], edi
        call    ext_0055C8F0
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

// [0x0055DB00] sub_0055DB00 (206 bytes)
extern "C" void ext_0055DA40();
extern "C" void ext_005A0D10();
extern "C" void ext_005A0F70();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0055DB00(void* self) {
    __asm {
        push -1
        push 008b2653h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push ebx
        push ebp
        mov ebp, dword ptr [esp+3Ch]
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr [esp+10h], ebx
        mov edi, dword ptr [esp+40h]
        mov esi, ecx
        push ebp
        mov ecx, edi
        mov dword ptr [esp+3Ch], ebx
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esi+41Ch]
        cmp ecx, ebx
        mov dword ptr [esp+38h], ebx
        mov dword ptr [esp+10h], 1
        je L_end
        push ebp
        call ext_005A0F70
        cmp eax, ebx
        jne L_call
        mov ecx, dword ptr [esi+41Ch]
        push ebp
        call ext_005A0D10
        cmp eax, ebx
        jne L_call
        push ebp
        lea eax, [esp+18h]
        push eax
        mov ecx, esi
        call ext_0055DA40
        push eax
        mov ecx, edi
        mov dword ptr [esp+3Ch], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp+14h]
        mov byte ptr [esp+38h], bl
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi+41Ch]
        push edi
        call ext_005A0D10
        cmp eax, ebx
        je L_end
    L_call:
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx+24h]
        call eax
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FDC]
    L_end:
        mov ecx, dword ptr [esp+30h]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 2Ch
        ret 8
    }
}

// [0x0055DD40] sub_0055DD40 (158 bytes)
extern "C" void ext_0055DB00();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_0055DD40(void* self) {
    __asm {
        push -1
        push 8B2653h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0Ch], ebx
        mov esi, dword ptr [esp + 3Ch]
        mov edi, ecx
        push 928B5Dh
        mov ecx, esi
        mov dword ptr [esp + 38h], ebx
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esp + 40h]
        cmp ecx, ebx
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [esp + 0Ch], 1
        je loc_55ddc8
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 24h]
        call edx
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        push esi
        lea eax, [esp + 14h]
        push eax
        mov ecx, edi
        call ext_0055DB00
        push eax
        mov ecx, esi
        mov dword ptr [esp + 38h], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 10h]
        mov byte ptr [esp + 34h], bl
        call dword ptr [mem_00924FF4]
    loc_55ddc8:
        mov ecx, dword ptr [esp + 2Ch]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 2Ch
        ret 8
    }
}

// [0x00550840] sub_00550840 (776 bytes)
extern "C" int mem_009252C4;
extern "C" int mem_009252C0;
extern "C" int mem_009252BC;
extern "C" int mem_009251E4;
extern "C" int mem_00925208;
extern "C" void ext_005503A0();

extern "C" __declspec(naked) void __fastcall fn_00550840(void* self, int edx_unused, void* a1, void* a2, char* a3) {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push esi
        mov dword ptr [esp + 0x14], ecx
        call dword ptr [mem_009252C4]
        mov eax, dword ptr [esp + 0x24]
        push esi
        push 0x800
        push eax
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je done_fail
        push ebx
        mov ebx, dword ptr [mem_009252BC]
        push ebp
        mov ebp, dword ptr [mem_009251E4]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor esi, esi
        jmp loop_top
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_top:
        mov eax, dword ptr [esp + 0x24]
        cmp byte ptr [eax], 0x66
        jne next_line
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_005503A0
        mov ecx, dword ptr [esp + 0x24]
        push 0x9570d4
        push ecx
        mov dword ptr [esp + 0x28], eax
        call ebx
        mov eax, dword ptr [esp + 0x28]
        add esp, 0x8
        cmp eax, 0x3
        jne check4
        push 0xc
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x1c]
        push 0x10
        mov dword ptr [esi + edx], eax
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + ecx], eax
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esi + edx]
        push 0x9570d4
        push 0x0
        mov dword ptr [eax], 0x3
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x14]
        mov edx, dword ptr [esi + ecx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [edx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x1c]
        mov edx, dword ptr [esi + ecx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [edx], eax
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x14]
        mov edx, dword ptr [esi + ecx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [edx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x1c]
        mov edx, dword ptr [ecx + esi]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [edx + 0x4], eax
        call ebx
        add esp, 0x40
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x14]
        mov edx, dword ptr [esi + ecx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [edx + 0xc], eax
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x1c]
        mov edx, dword ptr [ecx + esi]
        add esp, 0x10
        sub eax, 0x1
        mov dword ptr [edx + 0x8], eax
        jmp after_line
    check4:
        cmp eax, 0x4
        jne check_gt
        push 0x10
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x1c]
        push 0x14
        mov dword ptr [esi + ecx], eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx], 0x4
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        add esp, 0x40
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0xc], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 0x10], eax
        call ebx
        push eax
        call ebp
        add esp, 0x28
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        mov dword ptr [ecx + 0xc], eax
        jmp after_line
    check_gt:
        jle after_line
        add eax, eax
        add eax, eax
        push eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x1c]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [esp + 0x24]
        add eax, eax
        add eax, eax
        add eax, 0x4
        push eax
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x14]
        mov dword ptr [esi + ecx], eax
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x8
        test eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [esp + 0x10], 0x0
        jle after_line
        __asm _emit 0x8b
        __asm _emit 0xff
    inner_top:
        push 0x9570d4
        push 0x0
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        mov edx, dword ptr [esp + 0x1c]
        sub eax, 0x1
        push 0x9570d4
        push 0x0
        mov dword ptr [ecx + 4 * edx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov edx, dword ptr [edx + esi]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x28]
        sub ecx, 0x1
        mov dword ptr [edx + 4 * eax], ecx
        add eax, 0x1
        add esp, 0x18
        cmp eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], eax
        jl inner_top
    after_line:
        mov eax, dword ptr [esp + 0x24]
        add esi, 0x4
    next_line:
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push 0x800
        push eax
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne loop_top
        pop edi
        pop ebp
        pop ebx
    done_fail:
        pop esi
        add esp, 0x8
        ret 0xc
    }
}

// [0x00552170] sub_00552170 (92 bytes)
extern "C" void ext_00548280();
extern "C" void ext_005484E0();

extern "C" __declspec(naked) void* __fastcall fn_00552170(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x899aa8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x1c]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_00548280
        mov edx, dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x95748c
        call ext_005484E0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x005519A0] sub_005519A0 (109 bytes)
extern "C" void ext_00548280();
extern "C" void ext_005484E0();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_005519A0(void* self) {
    __asm {
        push -1
        push 0x899a87
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x1c]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], esi
        call ext_00548280
        lea ecx, [esi + 0xf8]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x9573dc
        call dword ptr [mem_00924FE8]
        mov edx, dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        mov byte ptr [esp + 0x14], 1
        call ext_005484E0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00550B50] sub_00550B50 (1028 bytes)
extern "C" void ext_005503A0();
extern "C" int mem_009252C4;
extern "C" int mem_009252C0;
extern "C" int mem_009252BC;
extern "C" int mem_009251E4;
extern "C" int mem_00925208;
extern "C" char mem_009570D4;
extern "C" __declspec(naked) void __fastcall fn_00550B50(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push 0x0
        push 0x0
        push esi
        mov dword ptr [esp + 0x14], ecx
        call dword ptr [mem_009252C4]
        mov eax, dword ptr [esp + 0x24]
        push esi
        push 0x800
        push eax
        call dword ptr [mem_009252C0]
        add esp, 0x18
        test eax, eax
        je near ptr L_pop_esi
        push ebx
        mov ebx, dword ptr [mem_009252BC]
        push ebp
        mov ebp, dword ptr [mem_009251E4]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor esi, esi
        jmp L_loop
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop:
        mov eax, dword ptr [esp + 0x24]
        cmp byte ptr [eax], 0x66
        jne near ptr L_skip
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_005503A0
        mov ecx, dword ptr [esp + 0x24]
        push offset mem_009570D4
        push ecx
        mov dword ptr [esp + 0x28], eax
        call ebx
        mov eax, dword ptr [esp + 0x28]
        add esp, 0x8
        cmp eax, 0x3
        jne near ptr L_n4
        push 0xc
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x24]
        push 0xc
        mov dword ptr [esi + edx], eax
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x1c]
        push 0x10
        mov dword ptr [esi + ecx], eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx], 0x3
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        add esp, 0x44
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        mov dword ptr [ecx + 0xc], eax
        push 0x0
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x34
        sub eax, 0x1
        mov dword ptr [ecx + 0x8], eax
        jmp near ptr L_cont
    L_n4:
        cmp eax, 0x4
        jne near ptr L_gt
        push 0x10
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x24]
        push 0x10
        mov dword ptr [esi + edx], eax
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x1c]
        push 0x14
        mov dword ptr [esi + ecx], eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx], 0x4
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        add esp, 0x44
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        mov dword ptr [ecx + 0xc], eax
        push 0x0
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x40
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0x10], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x24]
        mov ecx, dword ptr [edx + esi]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 0xc], eax
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + edx]
        add esp, 0x18
        sub eax, 0x1
        mov dword ptr [ecx + 0xc], eax
        jmp near ptr L_cont
    L_gt:
        jle near ptr L_cont
        add eax, eax
        add eax, eax
        push eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x24]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [esp + 0x24]
        add eax, eax
        add eax, eax
        push eax
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [edi + 0x1c]
        mov dword ptr [esi + ecx], eax
        mov eax, dword ptr [esp + 0x28]
        add eax, eax
        add eax, eax
        add eax, 0x4
        push eax
        call dword ptr [mem_00925208]
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [esi + edx], eax
        mov eax, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + eax]
        mov eax, dword ptr [esp + 0x2c]
        add esp, 0xc
        test eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [esp + 0x10], 0x0
        jle near ptr L_cont
        jmp L_inner
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_inner:
        push offset mem_009570D4
        push 0x0
        call ebx
        push eax
        call ebp
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [esi + edx]
        mov edx, dword ptr [esp + 0x1c]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [ecx + 4 * edx + 0x4], eax
        call ebx
        push eax
        call ebp
        mov ecx, dword ptr [edi + 0x24]
        mov edx, dword ptr [ecx + esi]
        mov ecx, dword ptr [esp + 0x28]
        sub eax, 0x1
        push offset mem_009570D4
        push 0x0
        mov dword ptr [edx + 4 * ecx], eax
        call ebx
        push eax
        call ebp
        mov edx, eax
        mov eax, dword ptr [edi + 0x1c]
        mov ecx, dword ptr [esi + eax]
        mov eax, dword ptr [esp + 0x34]
        sub edx, 0x1
        mov dword ptr [ecx + 4 * eax], edx
        add eax, 0x1
        add esp, 0x24
        cmp eax, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], eax
        jl L_inner
    L_cont:
        mov eax, dword ptr [esp + 0x24]
        add esi, 0x4
    L_skip:
        mov edx, dword ptr [esp + 0x1c]
        push edx
        push 0x800
        push eax
        call dword ptr [mem_009252C0]
        add esp, 0xc
        test eax, eax
        jne near ptr L_loop
        pop edi
        pop ebp
        pop ebx
    L_pop_esi:
        pop esi
        add esp, 0x8
        ret 0xc
    }
}

// [0x00554F40] sub_00554F40 (350 bytes)
extern "C" void ext_0067C170();
extern "C" void ext_0067DF30();
extern "C" void ext_0067E990();
extern "C" int mem_00957754;
extern "C" __declspec(naked) void __fastcall fn_00554F40(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        test esi, esi
        push edi
        mov ebp, ecx
        je L_done
        mov eax, dword ptr [esi + 0x17c]
        test eax, eax
        je L_done
        mov edx, dword ptr [ebp + 0x420]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        mov eax, dword ptr [esi + 0x17c]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ebp + 0x420]
        push eax
        call edx
        fldz
        mov edx, dword ptr [ebp + 0x420]
        fst dword ptr [esp + 0x1c]
        mov ebx, eax
        fst dword ptr [esp + 0x18]
        mov eax, dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x14]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        mov esi, eax
        mov ecx, 0x10
        mov edi, ebx
        rep movsd
        mov ecx, dword ptr [esp + 0x28]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, ebx
        call ext_0067C170
        sub esp, 0x10
        fld dword ptr [esp + 0x20]
        mov eax, esp
        fstp dword ptr [esp + 0xc]
        mov ecx, ebx
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax + 0x8]
        call ext_0067DF30
        mov eax, dword ptr [esp + 0x2c]
        cmp eax, 0x2
        jne L_check3
        fld dword ptr [mem_00957754]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        mov eax, esp
        fld dword ptr [ebx + 0x20]
        fstp dword ptr [eax]
        fld dword ptr [ebx + 0x24]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ebx + 0x28]
        jmp L_call2
L_check3:
        cmp eax, 0x3
        jne L_after_call2
        fld dword ptr [mem_00957754]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        mov eax, esp
        fld dword ptr [ebx + 0x10]
        fstp dword ptr [eax]
        fld dword ptr [ebx + 0x14]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ebx + 0x18]
L_call2:
        mov ecx, ebx
        fstp dword ptr [eax + 0x8]
        call ext_0067DF30
L_after_call2:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [ebp + 0x420]
        mov edx, dword ptr [edx + 0x14]
        add ecx, 0x4
        push eax
        call edx
        push eax
        mov ecx, ebx
        call ext_0067E990
        mov eax, dword ptr [esp + 0x24]
        mov eax, dword ptr [eax + 0x180]
        test eax, eax
        je L_done
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ebp + 0x420]
        push eax
        call edx
        mov ecx, 0x10
        mov esi, ebx
        mov edi, eax
        rep movsd
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xc
    }
}

extern "C" void ext_0067E820();

// [0x0055C450] sub_0055C450 (55 bytes)
extern "C" void __fastcall fn_0055C450(void* self, int edx_unused, void* a1) {
    char* p = (char*)self;
    ((void (__thiscall*)(void*, void*))ext_0067E820)(a1, p + 0x10);
    p = *(char**)(p + 0xc);
    if (p != 0) {
        do {
            ((void (__thiscall*)(void*, void*))ext_0067E820)(a1, p + 0x10);
            p = *(char**)(p + 0xc);
        } while (p != 0);
    }
}

// [0x00554530] sub_00554530 (1962 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_00552F90();
extern "C" void ext_00593710();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EE80();
extern "C" int mem_00A9F9B4;
extern "C" int mem_00A9F60C;
extern "C" int mem_00A9F688;
extern "C" int mem_00A9F684;
extern "C" int mem_00A9F764;
extern "C" int mem_00A9F4A0;
extern "C" int mem_00A9F7B4;
extern "C" int mem_00A9F4B0;
extern "C" int mem_00A9F73C;
extern "C" int mem_00A9F454;
extern "C" int mem_00A9F5C8;
extern "C" int mem_00A9F5B4;
extern "C" int mem_00A9F8D8;
extern "C" int mem_00A9F594;
extern "C" int mem_00A9F59C;
extern "C" int mem_00A9F598;
extern "C" int mem_00A9F474;
extern "C" int mem_00A9F6B4;
extern "C" int mem_00A9F494;
extern "C" int mem_00A9FA50;
extern "C" int mem_00A9F518;
extern "C" int mem_00A9F9F8;
extern "C" int mem_00A9F500;
extern "C" int mem_00A9F984;
extern "C" int mem_00A9F888;
extern "C" int mem_00A9FAB8;
extern "C" int mem_00A9FAA8;
extern "C" __declspec(naked) void __fastcall fn_00554530(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0xc
        
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_00552F90
        mov eax, mem_00A9F9B4
        mov esi, dword ptr [esp + 0x1c]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        push edi
        mov dword ptr [esp + 0x24], eax
        call ext_0053F5F0
        mov edx, mem_00A9F60C
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x4]
        push ecx
        call ext_0053F5F0
        mov edx, mem_00A9F688
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x8]
        push ecx
        call ext_0046C0A0
        mov edx, mem_00A9F684
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0xc]
        push ecx
        call ext_0053F5F0
        mov edx, mem_00A9F764
        mov eax, mem_00A9F4A0
        push edx
        push eax
        push esi
        call ext_0067EE80
        fstp dword ptr [edi + 0x24]
        mov ecx, mem_00A9F7B4
        mov edx, mem_00A9F4B0
        push ecx
        push edx
        push esi
        call ext_0067EE80
        fstp dword ptr [edi + 0x1c]
        push 0x9576d8
        push 0x9576cc
        push esi
        call ext_0067EE80
        fstp dword ptr [esp + 0x48]
        fldz
        add esp, 0x2c
        fld dword ptr [esp + 0x1c]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp L_00554620
        fstp dword ptr [edi + 0x20]
        jmp L_00554622
    L_00554620:
        fstp st(0)
    L_00554622:
        push 0x9576c4
        push 0x9576bc
        push esi
        call ext_0067EE80
        fstp dword ptr [esp + 0x28]
        fldz
        add esp, 0xc
        fld dword ptr [esp + 0x1c]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp L_0055464f
        fstp dword ptr [edi + 0x10]
        jmp L_00554651
    L_0055464f:
        fstp st(0)
    L_00554651:
        mov eax, mem_00A9F73C
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [edi + 0x14]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_00427640
        mov eax, mem_00A9F454
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_0053F5F0
        mov eax, mem_00A9F5C8
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_0053F5F0
        add esp, 0x8
        push 0x9576b0
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        call ext_0053F5F0
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [edi + 0x30], ecx
        mov dword ptr [edi + 0x28], edx
        mov dword ptr [edi + 0x2c], eax
        mov edx, mem_00A9F5B4
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554721
        cmp eax, 0xb53b30
        je L_00554721
        cmp eax, 0xb53ab0
        je L_00554721
        cmp eax, 0xb53a70
        je L_00554721
        cmp eax, 0xb53af0
        jne L_00554727
    L_00554721:
        mov byte ptr [edi + 0x16], 0x1
        jmp L_00554749
    L_00554727:
        mov eax, mem_00A9F5B4
        push eax
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [edi + 0x16]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_00427640
        add esp, 0x8
    L_00554749:
        push 0x957684
        mov ecx, esi
        call ext_0063EFE0
        xor ebx, ebx
        cmp eax, 0xb53a34
        je L_0055477a
        cmp eax, 0xb53b30
        je L_0055477a
        cmp eax, 0xb53ab0
        je L_0055477a
        cmp eax, 0xb53a70
        je L_0055477a
        cmp eax, 0xb53af0
        jne L_0055477f
    L_0055477a:
        mov byte ptr [edi + 0x19], bl
        jmp L_005547a0
    L_0055477f:
        push 0x957684
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x19]
        push ecx
        call ext_00427640
        add esp, 0x8
    L_005547a0:
        push 0x957698
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_005547cf
        cmp eax, 0xb53b30
        je L_005547cf
        cmp eax, 0xb53ab0
        je L_005547cf
        cmp eax, 0xb53a70
        je L_005547cf
        cmp eax, 0xb53af0
        jne L_005547d4
    L_005547cf:
        mov byte ptr [edi + 0x74], bl
        jmp L_005547f5
    L_005547d4:
        push 0x957698
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0x74]
        push eax
        call ext_00427640
        add esp, 0x8
    L_005547f5:
        mov ecx, mem_00A9F8D8
        push 0x1
        push ebx
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_00554829
        cmp eax, 0xb53b30
        je L_00554829
        cmp eax, 0xb53ab0
        je L_00554829
        cmp eax, 0xb53a70
        je L_00554829
        cmp eax, 0xb53af0
        jne L_00554830
    L_00554829:
        mov ecx, 0xb53b30
        jmp L_00554832
    L_00554830:
        mov ecx, eax
    L_00554832:
        cmp ecx, 0xb53a34
        je L_0055485a
        cmp ecx, 0xb53b30
        je L_0055485a
        cmp ecx, 0xb53ab0
        je L_0055485a
        cmp ecx, 0xb53a70
        je L_0055485a
        cmp ecx, 0xb53af0
        jne L_0055485f
    L_0055485a:
        mov dword ptr [edi + 0x70], ebx
        jmp L_0055487b
    L_0055485f:
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x38], esp
        push eax
        call edx
        call ext_00593710
        add esp, 0x1c
        mov dword ptr [edi + 0x70], eax
    L_0055487b:
        mov eax, mem_00A9F594
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554994
        cmp eax, 0xb53b30
        je L_00554994
        cmp eax, 0xb53ab0
        je L_00554994
        cmp eax, 0xb53a70
        je L_00554994
        cmp eax, 0xb53af0
        je L_00554994
        mov ecx, mem_00A9F594
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0x76]
        push eax
        call ext_00427640
        mov ecx, mem_00A9F59C
        add esp, 0x8
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0x77]
        push eax
        call ext_00427640
        mov ecx, mem_00A9F598
        add esp, 0x8
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0x78]
        push eax
        call ext_00427640
        mov ecx, mem_00A9F474
        add esp, 0x8
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0x79]
        push eax
        call ext_00427640
        mov ecx, mem_00A9F6B4
        mov edx, mem_00A9F494
        push ecx
        push edx
        push esi
        call ext_0067EE80
        fstp dword ptr [edi + 0x7c]
        mov eax, mem_00A9FA50
        mov ecx, mem_00A9F518
        push eax
        push ecx
        push esi
        call ext_0067EE80
        fstp dword ptr [edi + 0x80]
        mov edx, mem_00A9F9F8
        mov eax, mem_00A9F500
        push edx
        push eax
        push esi
        call ext_0067EE80
        fstp dword ptr [edi + 0x84]
        add esp, 0x2c
    L_00554994:
        mov ecx, mem_00A9F984
        push ecx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554a65
        cmp eax, 0xb53b30
        je L_00554a65
        cmp eax, 0xb53ab0
        je L_00554a65
        cmp eax, 0xb53a70
        je L_00554a65
        cmp eax, 0xb53af0
        je L_00554a65
        mov edx, mem_00A9F984
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x15]
        push ecx
        call ext_00427640
        mov edx, mem_00A9F888
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x34]
        push ecx
        call ext_00427640
        mov edx, mem_00A9FAB8
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x6c]
        push ecx
        call ext_00427640
        mov edx, mem_00A9FAA8
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x6d]
        push ecx
        call ext_00427640
        add esp, 0x8
    L_00554a65:
        push 0x957674
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0xb8]
        push eax
        call ext_00427640
        add esp, 0x8
        push 0x957664
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 0xbc]
        push ecx
        call ext_004275E0
        add esp, 0x8
        push 0x957650
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], eax
        push edx
        lea eax, [edi + 0xb4]
        push eax
        call ext_0053F5F0
        add esp, 0x8
        push 0x957738
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554b19
        cmp eax, 0xb53b30
        je L_00554b19
        cmp eax, 0xb53ab0
        je L_00554b19
        cmp eax, 0xb53a70
        je L_00554b19
        cmp eax, 0xb53af0
        je L_00554b19
        push 0x95763c
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [edi + 0x17]
        push edx
        mov dword ptr [esp + 0x24], eax
        call ext_00427640
        add esp, 0x8
    L_00554b19:
        push 0x957620
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554b69
        cmp eax, 0xb53b30
        je L_00554b69
        cmp eax, 0xb53ab0
        je L_00554b69
        cmp eax, 0xb53a70
        je L_00554b69
        cmp eax, 0xb53af0
        je L_00554b69
        push 0x957620
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [edi + 0x18]
        push ecx
        call ext_00427640
        add esp, 0x8
    L_00554b69:
        push 0x957610
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554bb4
        cmp eax, 0xb53b30
        je L_00554bb4
        cmp eax, 0xb53ab0
        je L_00554bb4
        cmp eax, 0xb53a70
        je L_00554bb4
        cmp eax, 0xb53af0
        je L_00554bb4
        push 0x957610
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea edx, [edi + 0xd8]
        push edx
        call ext_004275E0
        add esp, 0x8
    L_00554bb4:
        push 0x957600
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554bff
        cmp eax, 0xb53b30
        je L_00554bff
        cmp eax, 0xb53ab0
        je L_00554bff
        cmp eax, 0xb53a70
        je L_00554bff
        cmp eax, 0xb53af0
        je L_00554bff
        push 0x957724
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea eax, [edi + 0xf4]
        push eax
        call ext_004275E0
        add esp, 0x8
    L_00554bff:
        push 0x9575f0
        mov ecx, esi
        lea ebx, [edi + 0x8c]
        call ext_0063EFE0
        push eax
        push ebx
        call ext_004275E0
        add esp, 0x8
        push 0x9575f0
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554c60
        cmp eax, 0xb53b30
        je L_00554c60
        cmp eax, 0xb53ab0
        je L_00554c60
        cmp eax, 0xb53a70
        je L_00554c60
        cmp eax, 0xb53af0
        je L_00554c60
        push 0x9575f0
        mov ecx, esi
        call ext_0063EFE0
        push eax
        push ebx
        call ext_004275E0
        add esp, 0x8
    L_00554c60:
        push 0x9575e0
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, [esp + 0x1c]
        push ecx
        add edi, 0xa8
        push edi
        mov dword ptr [esp + 0x24], eax
        call ext_00427640
        add esp, 0x8
        push 0x9575e0
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_00554cd1
        cmp eax, 0xb53b30
        je L_00554cd1
        cmp eax, 0xb53ab0
        je L_00554cd1
        cmp eax, 0xb53a70
        je L_00554cd1
        cmp eax, 0xb53af0
        je L_00554cd1
        push 0x9575e0
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0x1c]
        push edx
        push edi
        mov dword ptr [esp + 0x24], eax
        call ext_00427640
        add esp, 0x8
    L_00554cd1:
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0055E180] sub_0055E180 (32 bytes)
extern "C" void ext_0055E150();

extern "C" __declspec(naked) void __fastcall fn_0055E180(void* self, int edx_unused, void** a1) {
    __asm {
        call ext_0055E150
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        je done
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 0x4], 0x1
        jmp eax
    done:
        ret 0x4
    }
}

// [0x0055D9F0] sub_0055D9F0 (42 bytes)
extern "C" void ext_00402E50();
extern "C" __declspec(naked) void* __fastcall fn_0055D9F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_00402E50
        mov dword ptr [esi], 0x958454
        mov dword ptr [esi + 4], 0x958448
        mov dword ptr [esi + 0x46c], 0
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x00553A50] sub_00553A50 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00430F30();
extern "C" void ext_0055D6B0();
extern "C" void ext_0055D9F0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00553A50(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa851c4
        push 0xa2e24c
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x470
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0055D9F0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_00430F30
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x470
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_null2_ret0
        mov ecx, eax
        call ext_0055D6B0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_null2_ret0:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x0055E990] sub_0055E990 (51 bytes)
extern "C" void ext_0055E180();
extern "C" void ext_0055E750();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_0055E990(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push edi
        lea edi, [esi + 0x46c]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [edi]
        push eax
        mov eax, dword ptr [esi + 0x470]
        push eax
        push ecx
        mov ecx, esi
        call ext_0055E750
        push edi
        mov ecx, esi
        call ext_0055E180
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0055C570] sub_0055C570 (88 bytes)
extern "C" void ext_00402CE0();
extern "C" void ext_005C06E0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0055C570(void* self) {
    __asm {
        push -1
        push 0x0089AA78
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        mov dword ptr [esp + 0x4], esi
        je epilog
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        call ext_00402CE0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_005C06E0
        push esi
        call ext_006A5C5C
        add esp, 4
    epilog:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0055DDE0] sub_0055DDE0 (59 bytes)
extern "C" void ext_005EEEF0();

extern "C" void* __fastcall fn_0055DDE0(void* self) {
    ext_005EEEF0();
    unsigned int* p = (unsigned int*)self;
    p[0] = 0x958674;
    p[1] = 0x95862c;
    p[2] = 0x9585ec;
    p[3] = 0x95859c;
    p[0x150 / 4] = 0x958584;
    p[0x154 / 4] = 0x95857c;
    return self;
}

// [0x00558B10] sub_00558B10 (59 bytes)
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00558B10(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x9577c0
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AEC70
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x00559BF0] sub_00559BF0 (59 bytes)
extern "C" void ext_004F15A0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00559BF0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x9577c8
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_004F15A0
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x0055D600] sub_0055D600 (59 bytes)
extern "C" void ext_00402D70();
extern "C" void ext_005DF270();
extern "C" __declspec(naked) void __fastcall fn_0055D600(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_00402D70
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, esi
        call ext_005DF270
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], 0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 4]
        mov dword ptr [esi + 8], esi
        pop esi
        ret
    }
}

// [0x00555630] sub_00555630 (77 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_00553F90();

extern "C" __declspec(naked) bool __fastcall fn_00555630(void* self, int edx_unused, unsigned int n) {
    __asm {
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        mov esi, ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        jne L_555652
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_555652:
        cmp edi, 0x1999999
        jbe L_55565B
        call ext_00405FB0
    L_55565B:
        push eax
        push edi
        call ext_00553F90
        lea ecx, [edi + 4*edi]
        add esp, 0x8
        shl ecx, 0x5
        add ecx, eax
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov dword ptr [esi + 0xc], ecx
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00555680] sub_00555680 (79 bytes)
extern "C" void ext_00405FB0();
extern "C" void ext_00554140();

extern "C" __declspec(naked) bool __fastcall fn_00555680(void* self, int edx_unused, unsigned int n) {
    __asm {
        push esi
        xor eax, eax
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, eax
        mov esi, ecx
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        jne L_55569E
        pop edi
        xor al, al
        pop esi
        ret 0x4
    L_55569E:
        cmp edi, 0x4444444
        jbe L_5556AB
        call ext_00405FB0
    L_5556AB:
        push eax
        push edi
        call ext_00554140
        mov ecx, edi
        shl ecx, 0x4
        sub ecx, edi
        add esp, 0x8
        lea edx, [eax + 4*ecx]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        pop edi
        mov dword ptr [esi + 0xc], edx
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00557960] sub_00557960 (176 bytes)
extern "C" void ext_00555680();
extern "C" void ext_0057BF80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00557960(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89a360
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x18], edi
        je L_005579A8
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_005579A8:
        push eax
        mov ecx, edi
        call ext_00555680
        test al, al
        je L_005579FB
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [ebp - 0x4], 0
        mov dword ptr [ebp - 0x14], eax
        jbe L_005579CC
        call dword ptr [mem_00925134]
    L_005579CC:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_005579DA
        call dword ptr [mem_00925134]
    L_005579DA:
        mov eax, dword ptr [edi + 0x4]
        mov byte ptr [ebp + 0x8], 0
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x8]
        push ecx
        push edx
        push edi
        push eax
        mov eax, dword ptr [ebp - 0x14]
        push eax
        push ebx
        call ext_0057BF80
        add esp, 0x18
        mov dword ptr [edi + 0x8], eax
    L_005579FB:
        mov ecx, dword ptr [ebp - 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x005588C0] sub_005588C0 (82 bytes)
extern "C" void ext_00557960();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005588C0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
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
        add edi, 0x1c
        push edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_00557960
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005596D0] sub_005596D0 (158 bytes)
extern "C" void ext_00557960();
extern "C" void ext_00558B90();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
// Naked: C++ try/catch under /EHsc drops the EH frame around extern "C" callees, and the
// target keeps a per-iteration EH state byte, so the frame and loop are written out directly.
extern "C" __declspec(naked) void* __cdecl fn_005596D0(void* first, void* last, void* dest) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89a5aa
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x4], ebx
        nop
    loop_top:
        cmp edi, dword ptr [ebp + 0xc]
        je done
        mov dword ptr [ebp + 0x8], esi
        mov dword ptr [ebp - 0x18], esi
        cmp esi, ebx
        mov byte ptr [ebp - 0x4], 0x1
        je skip_copy
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov byte ptr [ebp - 0x4], 0x2
        call ext_00557960
    skip_copy:
        add esi, 0x2c
        mov byte ptr [ebp - 0x4], bl
        mov dword ptr [ebp + 0x10], esi
        add edi, 0x2c
        jmp loop_top
    unwind_cleanup:
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp + 0x10]
        cmp esi, edi
        je rethrow
    cleanup_top:
        mov ecx, esi
        call ext_00558B90
        add esi, 0x2c
        cmp esi, edi
        jne cleanup_top
    rethrow:
        xor ebx, ebx
        push ebx
        push ebx
        call ext_006A6DD2
    done:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_00558E90();

// [0x00559070] sub_00559070 (81 bytes)
extern "C" __declspec(naked) void __fastcall fn_00559070(void* self, int edx_unused, int arg0) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], edi
        jbe L_559086
        call ebp
    L_559086:
        mov ebx, dword ptr [esi + 4]
        cmp ebx, dword ptr [esi + 8]
        jbe L_559090
        call ebp
    L_559090:
        cmp ebx, edi
        je L_5590A5
        mov eax, dword ptr [esi + 8]
        push ebx
        push eax
        push edi
        call ext_005565C0
        add esp, 0Ch
        mov dword ptr [esi + 8], eax
    L_5590A5:
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        je L_5590BA
        add eax, 160h
        push eax
        mov ecx, esi
        call ext_00558E90
    L_5590BA:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x005572F0] sub_005572F0 (104 bytes)
extern "C" void ext_00402800();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __fastcall fn_005572F0(void* self, int edx_unused, const void* other) {
    __asm {
        push    -1
        push    089a2dch
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 1Ch]
        fld     dword ptr [edi]
        mov     esi, ecx
        fstp    dword ptr [esi]
        lea     eax, [edi + 0Ch]
        fld     dword ptr [edi + 4]
        push    eax
        fstp    dword ptr [esi + 4]
        lea     ecx, [esi + 0Ch]
        fld     dword ptr [edi + 8]
        mov     dword ptr [esp + 0Ch], esi
        fstp    dword ptr [esi + 8]
        call    dword ptr [mem_00924FE0]
        add     edi, 28h
        push    edi
        lea     ecx, [esi + 28h]
        mov     dword ptr [esp + 18h], 0
        call    ext_00402800
        mov     ecx, dword ptr [esp + 0Ch]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 10h
        ret     4
    }
}

// [0x00553CF0] sub_00553CF0 (335 bytes)
extern "C" void ext_005636D0();
extern "C" void ext_00566BF0();
extern "C" __declspec(naked) void __fastcall fn_00553CF0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa851f0
        push 0xa2e24c
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x498
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_005636D0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_00430F30
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x498
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_null2_ret0
        mov ecx, eax
        call ext_00566BF0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_null2_ret0:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    }
}

// [0x00557200] sub_00557200 (82 bytes)
extern "C" void ext_0049EEE0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00557200(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
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
        add edi, 0x1c
        push edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_0049EEE0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00559A50] sub_00559A50 (176 bytes)
extern "C" void ext_0057E4D0();
extern "C" void ext_00687DC0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00559A50(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 0x89a5e0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x18], edi
        je L_00559A98
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_00559A98:
        push eax
        mov ecx, edi
        call ext_00687DC0
        test al, al
        je L_00559AEB
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [ebp - 0x4], 0x0
        mov dword ptr [ebp - 0x14], eax
        jbe L_00559AB6
        call dword ptr [mem_00925134]
    L_00559AB6:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_00559AC6
        call dword ptr [mem_00925134]
    L_00559AC6:
        mov eax, dword ptr [edi + 0x4]
        mov byte ptr [ebp + 0x8], 0x0
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0x8]
        push ecx
        push edx
        push edi
        push eax
        mov eax, dword ptr [ebp - 0x14]
        push eax
        push ebx
        call ext_0057E4D0
        add esp, 0x18
        mov dword ptr [edi + 0x8], eax
    L_00559AEB:
        mov ecx, dword ptr [ebp - 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00553BA0] sub_00553BA0 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00430F30();
extern "C" void ext_0055F6B0();
extern "C" void ext_005609D0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_00553BA0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa851dc
        push 0xa2e24c
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x4d8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_0055F6B0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, [esp + 0x8]
        push eax
        call ext_00430F30
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x4d8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_ret0_null
        mov ecx, eax
        call ext_005609D0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_ret0_null:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}
