// Decompiled translation unit: src/leaf/decompiled_590000.cpp

// [0x005940D0] sub_005940D0 (15 bytes)
extern "C" void ext_006425D0();
extern "C" int __fastcall fn_005940D0(void* self) {
    typedef int (__fastcall *Callee)(void*);
    void* inner = *(void**)((char*)self + 0xf8);
    return ((Callee)ext_006425D0)(inner) - 1;
}

// [0x0059AE20] sub_0059AE20 (19 bytes)
extern "C" void ext_0041A920();
extern "C" void __fastcall fn_0059AE20(void* self, int edx_unused, int a1) {
    typedef void (__fastcall *Callee)(void*, int, int*);
    ((Callee)ext_0041A920)((char*)self + 0x2fc, edx_unused, &a1);
}

// [0x00599F10] sub_00599F10 (21 bytes)
extern "C" void ext_00599060();
extern "C" int __fastcall fn_00599F10(void* self, int edx_unused, int a1) {
    typedef int* (__fastcall *Callee)(void*, int, int*);
    return *((Callee)ext_00599060)((char*)self + 0x2cc, edx_unused, &a1);
}

// [0x00594080] sub_00594080 (22 bytes)
extern "C" void ext_006426D0();
extern "C" void __fastcall fn_00594080(void* self, int edx_unused, float a1) {
    typedef void (__thiscall *Callee)(void*, float);
    void* inner = *(void**)((char*)self + 0xf8);
    ((Callee)ext_006426D0)(inner, a1);
}

// [0x005940A0] sub_005940A0 (22 bytes)
extern "C" void ext_00642720();
extern "C" void __fastcall fn_005940A0(void* self, int edx_unused, float a1) {
    typedef void (__thiscall *Callee)(void*, float);
    void* inner = *(void**)((char*)self + 0xf8);
    ((Callee)ext_00642720)(inner, a1);
}

// [0x00594710] sub_00594710 (24 bytes)
extern "C" void ext_00493DA0();
extern "C" void __fastcall fn_00594710(void* self) {
    typedef void (__thiscall *Callee)(void*, int);
    int arg = *(int*)((char*)self + 0x26c) + 0x238;
    ((Callee)ext_00493DA0)((char*)self + 0x258, arg);
}

// [0x00594730] sub_00594730 (24 bytes)
extern "C" void ext_00493DC0();
extern "C" void __fastcall fn_00594730(void* self) {
    typedef void (__thiscall *Callee)(void*, int);
    int arg = *(int*)((char*)self + 0x26c) + 0x238;
    ((Callee)ext_00493DC0)((char*)self + 0x258, arg);
}

// [0x0059F400] sub_0059F400 (25 bytes)
extern "C" void ext_0059DED0();
extern "C" void ext_006245E0();
extern "C" void __fastcall fn_0059F400(void* self) {
    typedef void (__fastcall *Callee)(void*);
    ((Callee)ext_0059DED0)(self);
    void* p = *(void**)((char*)self + 0x5ec);
    if (p) {
        ((Callee)ext_006245E0)(p);
    }
}

// [0x0059A8D0] sub_0059A8D0 (25 bytes)
extern "C" void ext_00674150();
extern "C" void __fastcall fn_0059A8D0(void* self, int edx_unused, int a1, int a2) {
    typedef int* (__thiscall *Callee)(void*, int);
    int* p = ((Callee)ext_00674150)((char*)self + 0x24c, a1);
    *p = a2;
}

// [0x00594790] sub_00594790 (25 bytes)
extern "C" void ext_00675650();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00594790(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_00675650
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x0059E200] sub_0059E200 (25 bytes)
extern "C" void ext_00621B70();
extern "C" void ext_006A5C5C();
extern "C" void __fastcall fn_0059E200(void* self) {
    typedef void (__fastcall *CalleeF)(void*);
    typedef void (__cdecl *CalleeC)(void*);
    void* p = *(void**)self;
    if (p) {
        ((CalleeF)ext_00621B70)(p);
        ((CalleeC)ext_006A5C5C)(p);
    }
}

// [0x0059E060] sub_0059E060 (31 bytes)
extern "C" void ext_006AD940();
extern "C" void ext_00492550();
extern "C" __declspec(naked) void* __fastcall fn_0059E060(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x5f8]
        test eax, eax
        jne short L_059E06D
        xor al, al
        ret
L_059E06D:
        mov ecx, dword ptr [eax + 0x26c]
        call ext_006AD940
        mov ecx, eax
        jmp ext_00492550
    }
}

// [0x0059C770] sub_0059C770 (33 bytes)
extern "C" void ext_00599C40();
extern "C" void ext_0059C150();
extern "C" __declspec(naked) void __fastcall fn_0059C770(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [ecx + 0xf4]
        mov eax, dword ptr [esp + 0x4]
        cmp edx, eax
        je short L_059C78E
        mov dword ptr [esp + 0x4], eax
        jge short L_059C789
        jmp ext_00599C40
L_059C789:
        jmp ext_0059C150
L_059C78E:
        ret 0x4
    }
}

// [0x00599E70] sub_00599E70 (42 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) unsigned int __fastcall fn_00599E70(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x26c]
        cmp dword ptr [eax + 0x20], 0x0
        jne L_nonzero
        xor eax, eax
        ret
    L_nonzero:
        mov ecx, dword ptr [eax + 0x1c]
        push esi
        mov esi, dword ptr [ecx]
        cmp esi, ecx
        jne L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov edx, dword ptr [esi + 0x28]
        mov eax, dword ptr [edx + 0x38c]
        pop esi
        ret
    }
}

// [0x00599C10] sub_00599C10 (41 bytes)
extern "C" void ext_004148F0();
extern "C" __declspec(naked) void __fastcall fn_00599C10(void* self, int edx_unused, int a1, int a2, int a3) {
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
        call ext_004148F0
        add esp, 0x1c
        ret 0xc
    }
}

// [0x00596300] sub_00596300 (43 bytes)
extern "C" void __cdecl fn_00596300(int* dst, unsigned int count, const int* src) {
    if (count > 0) {
        do {
            if (dst) {
                dst[0] = src[0];
                dst[1] = src[1];
            }
            --count;
            dst += 2;
        } while (count > 0);
    }
}

// [0x00594750] sub_00594750 (48 bytes)
extern "C" void __fastcall fn_00594750(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    unsigned int eax = (unsigned int)a1;
    if (eax == 0) {
        eax = *(unsigned int*)(p + 0x268);
    }
    *(unsigned int*)(p + 0x264) = eax;
    if (eax == 0) {
        eax = *(unsigned int*)(p + 0x270);
        if (eax != 0) {
            eax += 0xe0;
            *(unsigned int*)(p + 0x264) = eax;
        }
    }
}

// [0x00596A30] sub_00596A30 (51 bytes)
// __cdecl stack args: [esp+4]=out, [esp+0xc]=begin, [esp+0x14]=end, [esp+0x18]=fn, [esp+0x1c]=base
extern "C" __declspec(naked) void fn_00596A30() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x24]
        cmp esi, edi
        je L_596A55_done
    L_596A48_loop:
        mov ecx, dword ptr [esi]
        add ecx, ebx
        call ebp
        add esi, 4
        cmp esi, edi
        jne L_596A48_loop
    L_596A55_done:
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret
    }
}

// [0x00596330] sub_00596330 (53 bytes)
extern "C" int mem_00B40640;
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00596330(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [mem_00B40640]
        add esi, 8
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_596348
        call edi
    L_596348:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 4]
        jne L_596354
        call edi
    L_596354:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx + 8]
        test eax, eax
        pop edi
        pop esi
        jne L_596361
        ret
    L_596361:
        add eax, -1
        ret
    }
}

// [0x005963B0] sub_005963B0 (51 bytes)
extern "C" void ext_00596330();
extern "C" void ext_00661A40();
extern "C" float __fastcall fn_005963B0(void* self) {
    typedef double (__fastcall *Callee1)(void*);
    typedef int (__fastcall *Callee2)(void*);
    double d = ((Callee1)ext_00661A40)((char*)self + 0x168);
    int n = ((Callee2)ext_00596330)(self);
    return (float)((double)n * d);
}

extern "C" int mem_00B40644;
extern "C" int mem_00925134;

// [0x00596370] sub_00596370 (53 bytes)
extern "C" __declspec(naked) int __fastcall fn_00596370(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [mem_00B40644]
        add esi, 0x8
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne skip1
        call edi
    skip1:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax + 0x4]
        jne skip2
        call edi
    skip2:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x8]
        test eax, eax
        pop edi
        pop esi
        jne dec1
        ret
    dec1:
        add eax, -1
        ret
    }
}

// [0x00595C50] sub_00595C50 (55 bytes)
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_00595C50(void* self) {
    __asm {
        push 0x34
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_skip0
        mov dword ptr [eax], 0
    L_skip0:
        lea ecx, [eax + 4]
        test ecx, ecx
        je L_skip1
        mov dword ptr [ecx], 0
    L_skip1:
        lea ecx, [eax + 8]
        test ecx, ecx
        je L_skip2
        mov dword ptr [ecx], 0
    L_skip2:
        mov byte ptr [eax + 0x30], 1
        mov byte ptr [eax + 0x31], 0
        ret
    }
}

// [0x0059DC60] sub_0059DC60 (55 bytes)
extern "C" void ext_00661A90();
extern "C" __declspec(naked) void __fastcall fn_0059DC60(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        je L_null_0059DC60
        mov ecx, dword ptr [esp + 0x8]
        lea eax, [esi + 0x158]
        push eax
        call ext_00661A90
        mov dword ptr [esi + 0x61c], eax
        pop esi
        ret 0x4
    L_null_0059DC60:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        push eax
        call ext_00661A90
        mov dword ptr [esi + 0x61c], eax
        pop esi
        ret 0x4
    }
}

// [0x0059F5C0] sub_0059F5C0 (55 bytes)
extern "C" void ext_006A5C62();
extern "C" void* __fastcall fn_0059F5C0(void* self) {
    typedef void* (__cdecl *Alloc)(unsigned int);
    char* p = (char*)((Alloc)ext_006A5C62)(0x30);
    if (p) {
        *(int*)p = 0;
    }
    int* q = (int*)(p + 0x4);
    if (q) {
        *q = 0;
    }
    int* r = (int*)(p + 0x8);
    if (r) {
        *r = 0;
    }
    p[0x2c] = 1;
    p[0x2d] = 0;
    return p;
}

// [0x005991D0] sub_005991D0 (63 bytes)
extern "C" __declspec(naked) int* __fastcall fn_005991D0(void* self, int edx_unused, int* out, int val, int pos) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x14]
        lea eax, [edi + 0x8]
        cmp eax, esi
        je done
        lea edx, [eax - 0x8]
        push ebx
    copy_loop:
        mov ebx, dword ptr [eax]
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [eax + 0x4]
        mov dword ptr [edx + 0x4], ebx
        add eax, 0x8
        add edx, 0x8
        cmp eax, esi
        jne copy_loop
        pop ebx
    done:
        mov eax, dword ptr [esp + 0xc]
        add dword ptr [ecx + 0x8], -0x8
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], ecx
        pop esi
        ret 0xc
    }
}

// [0x0059D660] sub_0059D660 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059D660(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0xb53a34
        je L_059D69C
        cmp eax, 0xb53b30
        je L_059D69C
        cmp eax, 0xb53ab0
        je L_059D69C
        cmp eax, 0xb53a70
        je L_059D69C
        cmp eax, 0xb53af0
        je L_059D69C
        mov edx, dword ptr [ecx + 0x160]
        add ecx, 0x160
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [edx + 0x54]
        jmp eax
L_059D69C:
        ret 0x4
    }
}

// [0x00595C10] sub_00595C10 (64 bytes)
extern "C" void* __fastcall fn_00595C10(void* self) {
    typedef void* (__cdecl *Alloc)(int);
    void* p = ((Alloc)ext_006A5C62)(0xbc);
    if (p) {
        *(int*)p = 0;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(int*)q = 0;
    }
    void* r = (char*)p + 8;
    if (r) {
        *(int*)r = 0;
    }
    ((unsigned char*)p)[0xb8] = 1;
    ((unsigned char*)p)[0xb9] = 0;
    return p;
}

// [0x0059B290] sub_0059B290 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_0059B290(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x31], 0x0
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
        cmp byte ptr [esi + 0x31], 0x0
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

// [0x0059B120] sub_0059B120 (73 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_0059B120(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0xb9], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        nop
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
        cmp byte ptr [esi + 0xb9], 0x0
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

// [0x0059FF10] sub_0059FF10 (75 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0059FF10(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne L_has_a
        call ebx
    L_has_a:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_ok1
        call ebx
    L_ok1:
        mov esi, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x30]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x2c
        test ecx, ecx
        je L_bad
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_ok2
    L_bad:
        call ebx
    L_ok2:
        mov edx, dword ptr [esi + 0x4]
        lea eax, [edx + 4*edi]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0059DE60] sub_0059DE60 (76 bytes)
extern "C" void __cdecl fn_0059DE60(unsigned int* first, int holeIndex, int topIndex, unsigned int value) {
    int parent = (holeIndex - 1) / 2;
    while (topIndex < holeIndex && first[parent] < value) {
        first[holeIndex] = first[parent];
        holeIndex = parent;
        parent = (holeIndex - 1) / 2;
    }
    first[holeIndex] = value;
}

// [0x00596C50] sub_00596C50 (76 bytes)
// Loops over the pointer range [this+0x23c, this+0x240) calling ext_005A3610 on each element,
// then tail-calls ext_00594020(this, 2). The debug iterator guards call the
// _invalid_parameter_noinfo pointer held in ebp; kept for byte parity.
extern "C" void ext_00594020();
extern "C" void ext_005A3610();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00596C50(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr [ebx + 0x240]
        cmp dword ptr [ebx + 0x23c], edi
        jbe mv_guard1
        call ebp
    mv_guard1:
        mov esi, dword ptr [ebx + 0x23c]
        cmp esi, dword ptr [ebx + 0x240]
        jbe mv_guard2
        call ebp
    mv_guard2:
        cmp esi, edi
        je mv_done
    mv_loop:
        mov ecx, dword ptr [esi]
        call ext_005A3610
        add esi, 4
        cmp esi, edi
        jne mv_loop
    mv_done:
        push 2
        mov ecx, ebx
        call ext_00594020
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00594830] sub_00594830 (78 bytes)
extern "C" void __fastcall fn_00594830(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x31) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x00594190] sub_00594190 (81 bytes)
extern "C" void __fastcall fn_00594190(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0xb9) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x00594880] sub_00594880 (82 bytes)
extern "C" void __fastcall fn_00594880(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x31] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x005941F0] sub_005941F0 (85 bytes)
extern "C" void __fastcall fn_005941F0(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0xb9] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x00593EB0] sub_00593EB0 (86 bytes)
extern "C" void ext_0041CF50();

extern "C" __declspec(naked) void __fastcall fn_00593EB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a0ac8
        push eax
        mov dword ptr fs:[0x0], esp
        lea eax, [esp + 0x10]
        push eax
        mov ecx, 0xaecc04
        mov dword ptr [esp + 0xc], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x8], -0x1
        je skip_call_00593EB0
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
skip_call_00593EB0:
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005957F0] sub_005957F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413D0;
extern "C" int mem_00B413CC;

extern "C" __declspec(naked) void* __fastcall fn_005957F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0bee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413D0], al
        jne L_done
        or dword ptr [mem_00B413D0], eax
        mov ecx, offset mem_00B413CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413CC], 0x95d04c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413CC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00595850] sub_00595850 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413D8;
extern "C" int mem_00B413D4;

extern "C" __declspec(naked) void* __fastcall fn_00595850(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0c0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413D8], al
        jne L_done
        or dword ptr [mem_00B413D8], eax
        mov ecx, offset mem_00B413D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413D4], 0x95d124
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413D4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005958B0] sub_005958B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413E0;
extern "C" int mem_00B413DC;

extern "C" __declspec(naked) void* __fastcall fn_005958B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0c2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413E0], al
        jne L_done
        or dword ptr [mem_00B413E0], eax
        mov ecx, offset mem_00B413DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413DC], 0x95d1fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413DC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00595910] sub_00595910 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413E8;
extern "C" int mem_00B413E4;

extern "C" __declspec(naked) void* __fastcall fn_00595910(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0c4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413E8], al
        jne L_done
        or dword ptr [mem_00B413E8], eax
        mov ecx, offset mem_00B413E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413E4], 0x95d2d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413E4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00595970] sub_00595970 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413F0;
extern "C" int mem_00B413EC;

extern "C" __declspec(naked) void* __fastcall fn_00595970(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0c6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413F0], al
        jne L_done
        or dword ptr [mem_00B413F0], eax
        mov ecx, offset mem_00B413EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413EC], 0x95d3ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005959D0] sub_005959D0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413F8;
extern "C" int mem_00B413F4;

extern "C" __declspec(naked) void* __fastcall fn_005959D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0c8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413F8], al
        jne L_done
        or dword ptr [mem_00B413F8], eax
        mov ecx, offset mem_00B413F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413F4], 0x95d484
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413F4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00595A30] sub_00595A30 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B41400;
extern "C" int mem_00B413FC;

extern "C" __declspec(naked) void* __fastcall fn_00595A30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0cae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41400], al
        jne L_done
        or dword ptr [mem_00B41400], eax
        mov ecx, offset mem_00B413FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B413FC], 0x95d634
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B413FC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00595A90] sub_00595A90 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B41408;
extern "C" int mem_00B41404;

extern "C" __declspec(naked) void* __fastcall fn_00595A90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0cce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41408], al
        jne L_done
        or dword ptr [mem_00B41408], eax
        mov ecx, offset mem_00B41404
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B41404], 0x95d7e4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B41404
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0059E9C0] sub_0059E9C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B41480;
extern "C" int mem_00B4147C;

extern "C" __declspec(naked) void* __fastcall fn_0059E9C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a15be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41480], al
        jne L_done
        or dword ptr [mem_00B41480], eax
        mov ecx, offset mem_00B4147C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4147C], 0x95de0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4147C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0059EA20] sub_0059EA20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B41488;
extern "C" int mem_00B41484;

extern "C" __declspec(naked) void* __fastcall fn_0059EA20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a15de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41488], al
        jne L_done
        or dword ptr [mem_00B41488], eax
        mov ecx, offset mem_00B41484
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B41484], 0x95dee4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B41484
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0059EA80] sub_0059EA80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B41490;
extern "C" int mem_00B4148C;

extern "C" __declspec(naked) void* __fastcall fn_0059EA80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a15fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41490], al
        jne L_done
        or dword ptr [mem_00B41490], eax
        mov ecx, offset mem_00B4148C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4148C], 0x95dfbc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4148C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0059EAE0] sub_0059EAE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B41498;
extern "C" int mem_00B41494;

extern "C" __declspec(naked) void* __fastcall fn_0059EAE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a161e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41498], al
        jne L_done
        or dword ptr [mem_00B41498], eax
        mov ecx, offset mem_00B41494
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B41494], 0x95e094
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B41494
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0059DDA0] sub_0059DDA0 (82 bytes)
extern "C" void ext_00410390();
extern "C" int mem_00924FC4;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_0059DDA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne ddA0_check2
        mov ecx, esi
        call ext_00410390
        test al, al
        je ddA0_assign
ddA0_check2:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        mov ecx, esi
        call edx
        test al, al
        jne ddA0_ret
        lea eax, [esi + 0x458]
        push 0xb41b80
        push eax
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je ddA0_ret
ddA0_assign:
        push 0xb41b9c
        lea ecx, [esi + 0x458]
        call dword ptr [mem_00924FDC]
ddA0_ret:
        pop esi
        ret
    }
}

// [0x005940E0] sub_005940E0 (89 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005940E0(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        cmp dword ptr [esi + 0x20], 0x0
        lea eax, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        je skip_call
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
skip_call:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00596660] sub_00596660 (92 bytes)
// __thiscall ret 0x14: erase-style range shift. out[0] = a2, out[1] = a3; this->end = a3 + 4*n where
// n = (this->end - a5) / 4 and [a5, end) is memmove_s'd down to a3. Debug iterator guards call
// the _invalid_parameter_noinfo pointer (kept for byte parity).
extern "C" int mem_00925134;
extern "C" int mem_009251EC;

extern "C" __declspec(naked) void __fastcall fn_00596660(void* self, int edx_unused, void* out, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        test ebp, ebp
        push esi
        push edi
        mov edi, ecx
        je guard_fail
        cmp ebp, dword ptr [esp + 0x1c]
        je guard_ok
    guard_fail:
        call dword ptr [mem_00925134]
    guard_ok:
        mov esi, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x20]
        cmp esi, edx
        je tail
        mov eax, dword ptr [edi + 8]
        sub eax, edx
        sar eax, 2
        test eax, eax
        lea ecx, [4*eax]
        push ebx
        lea ebx, [ecx + esi]
        jle no_move
        push ecx
        push edx
        push ecx
        push esi
        call dword ptr [mem_009251EC]
        add esp, 0x10
    no_move:
        mov dword ptr [edi + 8], ebx
        pop ebx
    tail:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax + 4], esi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        ret 0x14
    }
}

extern "C" void ext_0059DE60(unsigned int* first, int holeIndex, int topIndex, int value);

// [0x0059F310] sub_0059F310 (92 bytes)
extern "C" void __cdecl fn_0059F310(unsigned int* first, int holeIndex, int len, int value) {
    int topIndex = holeIndex;
    int idx = 2 * holeIndex + 2;
    while (idx < len) {
        if (first[idx] < first[idx - 1]) --idx;
        first[holeIndex] = first[idx];
        holeIndex = idx;
        idx = 2 * idx + 2;
    }
    if (idx == len) {
        first[holeIndex] = first[len - 1];
        holeIndex = len - 1;
    }
    ext_0059DE60(first, holeIndex, topIndex, value);
}

// [0x0059FE40] sub_0059FE40 (59 bytes)
extern "C" void ext_0059F310();

// [0x0059FE40] make_heap-style loop: for (parent = n/2; parent > 0; --parent) adjust(first, parent-1, n, first[parent-1])
extern "C" __declspec(naked) void __cdecl fn_0059FE40(unsigned int* first, unsigned int* last) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        sub edi, ebx
        sar edi, 0x2
        mov eax, edi
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 0x1
        test esi, esi
        jle done
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    loop_top:
        mov eax, dword ptr [ebx + esi*4 - 0x4]
        sub esi, 0x1
        push eax
        push edi
        push esi
        push ebx
        call ext_0059F310
        add esp, 0x10
        test esi, esi
        jg loop_top
    done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00599EA0] sub_00599EA0 (98 bytes)
extern "C" void ext_00599E70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00599EA0(void* self) {
    __asm {
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x26c]
        cmp dword ptr [eax + 0x20], 0
        jne L_body
        xor eax, eax
        pop edi
        ret
    L_body:
        mov ecx, dword ptr [eax + 0x1c]
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx]
        cmp esi, ecx
        jne L_c1
        call ebx
    L_c1:
        mov esi, dword ptr [esi + 0x28]
        mov ecx, dword ptr [esi + 0x334]
        add esi, 0x330
        test ecx, ecx
        je L_tail
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        jne L_cnt
    L_tail:
        pop esi
        pop ebx
        mov ecx, edi
        pop edi
        jmp ext_00599E70
    L_cnt:
        test eax, eax
        ja L_ok
        call ebx
    L_ok:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx]
        mov eax, dword ptr [eax + 0x22c]
        pop esi
        pop ebx
        pop edi
        ret
    }
}

// [0x00597630] sub_00597630 (99 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00597630(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x2cc]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe chk_b
        call ebp
    chk_b:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk_c
        call ebp
    chk_c:
        cmp esi, esi
        je chk_d
        call ebp
    chk_d:
        cmp edi, ebx
        je not_found
        cmp edi, dword ptr [esi + 0x8]
        jb chk_e
        call ebp
    chk_e:
        mov eax, dword ptr [esp + 0x14]
        cmp dword ptr [edi + 0x4], eax
        je found
        cmp edi, dword ptr [esi + 0x8]
        jb chk_f
        call ebp
    chk_f:
        add edi, 0x8
        jmp chk_c
    found:
        cmp edi, dword ptr [esi + 0x8]
        jb chk_g
        call ebp
    chk_g:
        mov eax, dword ptr [edi]
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

// [0x005963F0] sub_005963F0 (102 bytes)
extern "C" __declspec(naked) int __fastcall fn_005963F0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 0x238]
        push edi
        mov edi, dword ptr [esi + 0x4]
        xor ebp, ebp
        cmp edi, dword ptr [esi + 0x8]
        jbe L_loop
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call dword ptr [mem_00925134]
    L_chk2:
        cmp esi, esi
        je L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call dword ptr [mem_00925134]
    L_call:
        mov eax, dword ptr [edi]
        add ebp, dword ptr [eax + 0x5a0]
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call dword ptr [mem_00925134]
    L_inc:
        add edi, 0x4
        jmp L_loop
    L_done:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}

// [0x0059B170] sub_0059B170 (105 bytes)
extern "C" void ext_0059B120();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_0059B170(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0059B120
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je return_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne return_end
        lea ecx, [esp + 0xc]
        jmp load_pair
    return_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
    load_pair:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x0059B2E0] sub_0059B2E0 (105 bytes)
extern "C" void ext_0059B290();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_0059B2E0(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0059B290
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je return_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne return_end
        lea ecx, [esp + 0xc]
        jmp load_pair
    return_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
    load_pair:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x005943D0] sub_005943D0 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005943D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_005943D0
        call edi
    L_skip_call_005943D0:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 31h], 0
        je L_not_nil_005943D0
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_005943D0:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 31h], 0
        jne L_right_nil_005943D0
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 31h], 0
        jne L_store_left_005943D0
    L_leftmost_loop_005943D0:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 31h], 0
        je L_leftmost_loop_005943D0
    L_store_left_005943D0:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_005943D0:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 31h], 0
        jne L_done_005943D0
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_climb_loop_005943D0:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_005943D0
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 31h], 0
        je L_climb_loop_005943D0
    L_done_005943D0:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x0059FDE0] sub_0059FDE0 (88 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __fastcall fn_0059FDE0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, edi
    L_loop_0059FDE0:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_null_0059FDE0
        cmp esi, dword ptr [esp + 0x1c]
        je L_check_0059FDE0
    L_null_0059FDE0:
        call ebp
    L_check_0059FDE0:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [esp + 0x20]
        je L_done_0059FDE0
        test esi, esi
        jne L_nz_0059FDE0
        call ebp
    L_nz_0059FDE0:
        cmp edi, dword ptr [esi + 4]
        jne L_nz2_0059FDE0
        call ebp
    L_nz2_0059FDE0:
        add edi, 0ch
        push edi
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        add ebx, 1ch
        call ext_00673C20
        jmp L_loop_0059FDE0
    L_done_0059FDE0:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00596A70] sub_00596A70 (102 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00596A70(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x24]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
    loop_top:
        test esi, esi
        je bad1
        cmp esi, dword ptr [esp + 0x28]
        je ok1
    bad1:
        call ebp
    ok1:
        cmp edi, dword ptr [esp + 0x2c]
        je done
        test esi, esi
        jne ok2
        call ebp
    ok2:
        cmp edi, dword ptr [esi + 0x4]
        jne ok3
        call ebp
    ok3:
        mov ecx, dword ptr [edi + 0x28]
        call ebx
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp loop_top
    done:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], ebx
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x005969C0] sub_005969C0 (100 bytes)
extern "C" void ext_00527690();
extern "C" void ext_00678D70();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005969C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        mov ebp, ecx
        jbe L_005969D8
        call dword ptr [mem_00925134]
    L_005969D8:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_005969E6
        call dword ptr [mem_00925134]
    L_005969E6:
        cmp esi, ebx
        je L_00596A14
        cmp esi, dword ptr [edi + 0x8]
        jb L_005969F5
        call dword ptr [mem_00925134]
    L_005969F5:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        mov ecx, ebp
        call ext_00527690
        cmp esi, dword ptr [edi + 0x8]
        jb L_00596A0F
        call dword ptr [mem_00925134]
    L_00596A0F:
        add esi, 0x4
        jmp L_005969D8
    L_00596A14:
        push 0x1
        mov ecx, ebp
        call ext_00678D70
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00594250] sub_00594250 (113 bytes)
// Constructor-style: installs an SEH frame (handler 0x872c79), copy-constructs the
// std::string at +0x0 from a1 via the imported basic_string copy ctor, then stores
// the result of a virtual call (slot 28, +0x70) on a1->sub->obj into +0x1c, and the
// object pointer itself into +0x20 (or 0/0 when the pointer is null). Returns this.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00594250(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, ecx
        push esi
        mov dword ptr [esp + 0xc], edi
        call dword ptr [mem_00924FE0]
        xor eax, eax
        add esi, 0x1c
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        je short null_obj
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x20]
        push edx
        call eax
        jmp short store_result
null_obj:
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
store_result:
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 0x1c], ecx
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi + 0x20], edx
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005971D0] sub_005971D0 (113 bytes)
extern "C" void ext_00596330();
extern "C" void ext_00596370();
extern "C" void ext_00661A40();
extern "C" int mem_00B3F200;
extern "C" int mem_00B40640;
extern "C" int mem_00B40644;
extern "C" __declspec(naked) float __fastcall fn_005971D0(void* self) {
    __asm {
        sub esp, 0x8
        cmp byte ptr [mem_00B3F200], 0x0
        push esi
        mov esi, ecx
        je L_else_005971D0
        call ext_00596370
        add eax, dword ptr [esi + 0xec]
        mov ecx, dword ptr [mem_00B40644]
        mov dword ptr [esp + 0x4], eax
        fild dword ptr [esp + 0x4]
        fstp qword ptr [esp + 0x4]
        call ext_00661A40
        fmul qword ptr [esp + 0x4]
        pop esi
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x8
        ret
    L_else_005971D0:
        call ext_00596330
        add eax, dword ptr [esi + 0xec]
        mov ecx, dword ptr [mem_00B40640]
        mov dword ptr [esp + 0x4], eax
        fild dword ptr [esp + 0x4]
        fstp qword ptr [esp + 0x4]
        call ext_00661A40
        fmul qword ptr [esp + 0x4]
        pop esi
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x8
        ret
    }
}

// [0x00598A90] sub_00598A90 (126 bytes)
extern "C" void ext_00519CF0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00598A90(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [ecx + 0x26c]
        mov eax, dword ptr [ebx + 0xc]
        push ebp
        add ebx, 0x8
        push esi
        push edi
        mov edi, dword ptr [eax]
        mov esi, ebx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
        nop
    L_top_00598A90:
        test esi, esi
        mov ebp, dword ptr [ebx + 0x4]
        je L_inv1_00598A90
        cmp esi, ebx
        je L_ok1_00598A90
    L_inv1_00598A90:
        call dword ptr [mem_00925134]
    L_ok1_00598A90:
        cmp edi, ebp
        je L_done_00598A90
        test esi, esi
        mov ebp, dword ptr [mem_00925134]
        jne L_s1_00598A90
        call ebp
    L_s1_00598A90:
        cmp edi, dword ptr [esi + 0x4]
        jne L_s2_00598A90
        call ebp
    L_s2_00598A90:
        mov ecx, dword ptr [edi + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        push 0x0
        call eax
        cmp edi, dword ptr [esi + 0x4]
        jne L_s3_00598A90
        call ebp
    L_s3_00598A90:
        mov ecx, dword ptr [edi + 0x28]
        call ext_00519CF0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_top_00598A90
    L_done_00598A90:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00595AF0] sub_00595AF0 (127 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00595AF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_NULL
        call edi
    SKIP_NULL:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 0B9h], 0
        je HAS_NODE
        call edi
        pop edi
        pop esi
        ret
    HAS_NODE:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 0B9h], 0
        jne RIGHT_NIL
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0B9h], 0
        jne STORE_RIGHT
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    LEFTMOST:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0B9h], 0
        je LEFTMOST
    STORE_RIGHT:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    RIGHT_NIL:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 0B9h], 0
        jne DONE
        _emit 0x90
    WALK:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne DONE
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 0B9h], 0
        je WALK
    DONE:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x00596AE0] sub_00596AE0 (61 bytes)
extern "C" void ext_00595AF0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00596AE0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esp + 0x1c]
    L_loop_00596AE0:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_call_00596AE0
        cmp eax, edi
        je L_check_00596AE0
    L_call_00596AE0:
        call ebp
    L_check_00596AE0:
        cmp dword ptr [esp + 0x18], ebx
        je L_done_00596AE0
        add dword ptr [esi], 1
        lea ecx, [esp + 0x14]
        call ext_00595AF0
        jmp L_loop_00596AE0
    L_done_00596AE0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00596B20] sub_00596B20 (88 bytes)
extern "C" void ext_00595AF0();
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" __declspec(naked) void* __fastcall fn_00596B20(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, edi
    L_loop_00596B20:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_null_00596B20
        cmp esi, dword ptr [esp + 0x1c]
        je L_check_00596B20
    L_null_00596B20:
        call ebp
    L_check_00596B20:
        mov edi, dword ptr [esp + 0x18]
        cmp edi, dword ptr [esp + 0x20]
        je L_done_00596B20
        test esi, esi
        jne L_nz_00596B20
        call ebp
    L_nz_00596B20:
        cmp edi, dword ptr [esi + 4]
        jne L_nz2_00596B20
        call ebp
    L_nz2_00596B20:
        add edi, 0ch
        push edi
        mov ecx, ebx
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x14]
        add ebx, 1ch
        call ext_00595AF0
        jmp L_loop_00596B20
    L_done_00596B20:
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret
    }
}

// [0x00598930] sub_00598930 (53 bytes)
extern "C" void ext_00596B20();
extern "C" __declspec(naked) void __fastcall fn_00598930(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push eax
        push ecx
        call ext_00596B20
        add esp, 0x24
        ret
    }
}

// [0x005948E0] sub_005948E0 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005948E0(void* self) {
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
        cmp byte ptr [eax + 0x31], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x31], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x31], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x31], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x31], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x31], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x31], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x31], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x0059E220] sub_0059E220 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0059E220(void* self) {
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
        cmp byte ptr [eax + 0x2d], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x2d], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x2d], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x2d], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x2d], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x2d], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x2d], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x2d], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x0059E2B0] sub_0059E2B0 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0059E2B0(void* self) {
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
        cmp byte ptr [eax + 0x69], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x69], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x69], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x69], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x69], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x69], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x69], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x69], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x0059DCD0] sub_0059DCD0 (39 bytes)
// Calls sub_00586140(self + 4, a1) (thiscall, ret 4), then dynamic_casts the result
// from ObjectNode* to NMData::Characterization* via __RTDynamicCast. Returns with ret 4.
extern "C" void* __fastcall fn_00586140(void* self, int edx_unused, void* a1);
extern "C" void ext_006A6E9E();
extern "C" void* __fastcall fn_0059DCD0(void* self, int edx_unused, void* a1) {
    typedef void* (__cdecl *RTDynCast)(void*, int, void*, void*, int);
    void* p = fn_00586140((char*)self + 4, edx_unused, a1);
    return ((RTDynCast)ext_006A6E9E)(p, 0, (void*)0xA2E2BC, (void*)0xA30158, 0);
}

// [0x0059DD00] sub_0059DD00 (104 bytes)
// Stack args: a1, a2 (ret 8). Compares the std::string at a2 against the char* in mem_00A34650
// via the imported operator==(const string&, const char*) (cdecl). On match returns sub_0059DCD0(this, a1).
// Otherwise r = sub_0059DCD0(this, a1); if r is null returns 0, else dynamic_casts
// sub_00586140(r, a2) to NMData::Characterization* via __RTDynamicCast.
extern "C" void ext_00586140();
extern "C" void ext_0059DCD0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A34650;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void* __fastcall fn_0059DD00(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [mem_00A34650]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        push edi
        mov esi, ecx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je not_match
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_0059DCD0
        pop edi
        pop esi
        ret 0x8
    not_match:
        mov edx, dword ptr [esp + 0xc]
        push edx
        mov ecx, esi
        call ext_0059DCD0
        test eax, eax
        je zero
        push edi
        mov ecx, eax
        call ext_00586140
        push 0x0
        push 0xa30158
        push 0xa2e2bc
        push 0x0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        pop edi
        pop esi
        ret 0x8
    zero:
        pop edi
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x0059FE80] sub_0059FE80 (142 bytes)
extern "C" __declspec(naked) void __cdecl fn_0059FE80(void* first, void* last) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp ebx, eax
        je L_59FE80_ret1
        push esi
        lea esi, [ebx + 0x4]
        cmp esi, eax
        je L_59FE80_ret2
        mov eax, 0x4
        push ebp
        mov ebp, dword ptr [mem_009251EC]
        sub eax, ebx
        push edi
        mov dword ptr [esp + 0x14], eax
        jmp L_59FE80_head
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_59FE80_top:
        mov eax, dword ptr [esp + 0x14]
L_59FE80_head:
        mov edi, dword ptr [esi]
        cmp edi, dword ptr [ebx]
        mov edx, esi
        jae L_59FE80_unguarded
        lea eax, [eax + esi - 0x4]
        sar eax, 0x2
        test eax, eax
        jle L_59FE80_store_first
        add eax, eax
        add eax, eax
        push eax
        mov ecx, esi
        push ebx
        sub ecx, eax
        push eax
        add ecx, 0x4
        push ecx
        call ebp
        add esp, 0x10
L_59FE80_store_first:
        mov dword ptr [ebx], edi
        jmp L_59FE80_next
L_59FE80_unguarded:
        mov ecx, dword ptr [esi - 0x4]
        cmp edi, ecx
        lea eax, [esi - 0x4]
        jae L_59FE80_store_hole
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_59FE80_shift:
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax - 0x4]
        mov edx, eax
        sub eax, 0x4
        cmp edi, ecx
        jb L_59FE80_shift
L_59FE80_store_hole:
        mov dword ptr [edx], edi
L_59FE80_next:
        add esi, 0x4
        cmp esi, dword ptr [esp + 0x18]
        jne L_59FE80_top
        pop edi
        pop ebp
L_59FE80_ret2:
        pop esi
L_59FE80_ret1:
        pop ebx
        ret
    }
}

// [0x00594330] sub_00594330 (154 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00594330(void* self) {
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
        cmp byte ptr [eax + 0xb9], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0xb9], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0xb9], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0xb9], 0x0
        jne L_STORE_C
        jmp L_RLOOP
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0xb9], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0xb9], 0x0
        jne L_FIX
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0xb9], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0xb9], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x005988F0] sub_005988F0 (49 bytes)
extern "C" void ext_00594330();
extern "C" void ext_00595AF0();
extern "C" void __cdecl fn_005988F0(int a, int b) {
    int c = a;
    if (b > 0) {
        do {
            ((void (__fastcall*)(int))ext_00595AF0)(c);
        } while (--b > 0);
    }
    if (b < 0) {
        b = -b;
        do {
            ((void (__fastcall*)(int))ext_00594330)(c);
        } while (--b != 0);
    }
}

// [0x00593710] sub_00593710 (155 bytes)
extern "C" void ext_00664ED0();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_00593710(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x881709
        push eax
        mov dword ptr fs:[0], esp
        push esi
        push edi
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x14], 0x0
        mov esi, 0x2
        call ext_00664ED0
        mov edi, dword ptr [mem_00924FC0]
        lea ecx, [esp + 0x1c]
        push 0x95cfd8
        push ecx
        call edi
        add esp, 0xc
        test al, al
        je short check_parent
        mov esi, 0x1
        jmp short cleanup
    check_parent:
        lea edx, [esp + 0x18]
        push 0x95cfd0
        push edx
        call edi
        add esp, 0x8
        test al, al
        jne short cleanup
        lea eax, [esp + 0x18]
        push 0x95cfc8
        push eax
        call edi
        add esp, 0x8
        test al, al
        je short cleanup
        xor esi, esi
    cleanup:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x0059D5B0] sub_0059D5B0 (166 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9FA74;

extern "C" __declspec(naked) void __fastcall fn_0059D5B0(void* self) {
    __asm {
        push -0x1
        push 0x8864ea
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], 0x0
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [esi + 0x458]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x28]
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x8], 0x1
        call eax
        test al, al
        jne L_0059D641
        mov ecx, dword ptr [mem_00A9FA74]
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        call ext_0063EFE0
        push eax
        push edi
        call ext_004275E0
        push 0x928b5d
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x10
        test al, al
        je L_0059D641
        push 0xb41b9c
        mov ecx, edi
        call dword ptr [mem_00924FDC]
    L_0059D641:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x005977A0] sub_005977A0 (190 bytes)
extern "C" void ext_00477A30();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005977A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        push edi
        mov byte ptr [esp + 10h], 0
        jbe L_005977BC
        call dword ptr [mem_00925134]
    L_005977BC:
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_005977CA
        call dword ptr [mem_00925134]
    L_005977CA:
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [esp + 24h]
        push 0
        push eax
        push ebp
        push ebx
        push edi
        mov dword ptr [esp + 2ch], edi
        call ext_00477A30
        mov edi, dword ptr [esi + 8]
        add esp, 14h
        cmp dword ptr [esi + 4], edi
        mov ebx, eax
        jbe L_005977F4
        call dword ptr [mem_00925134]
    L_005977F4:
        test esi, esi
        je L_005977FC
        cmp esi, esi
        je L_00597802
    L_005977FC:
        call dword ptr [mem_00925134]
    L_00597802:
        cmp ebx, edi
        je L_00597835
        test esi, esi
        jne L_00597810
        call dword ptr [mem_00925134]
    L_00597810:
        cmp ebx, dword ptr [esi + 8]
        jb L_0059781B
        call dword ptr [mem_00925134]
    L_0059781B:
        mov ecx, dword ptr [ebp]
        cmp ecx, dword ptr [ebx]
        jb L_00597835
        mov eax, dword ptr [esp + 20h]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        add esp, 0ch
        ret 8
    L_00597835:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov edi, dword ptr [esp + 20h]
        mov dword ptr [edi], 0
        jbe L_0059784D
        call dword ptr [mem_00925134]
    L_0059784D:
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret 8
    }
}

// [0x00598FF0] sub_00598FF0 (102 bytes)
extern "C" void ext_005977A0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00598FF0(void* self, int edx_unused, void* a1) {
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
        call ext_005977A0
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_00598FFA_A
        call ebp
    L_00598FFA_A:
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        je L_00598FFA_B
        cmp edi, esi
        je L_00598FFA_C
    L_00598FFA_B:
        call ebp
    L_00598FFA_C:
        mov esi, dword ptr [esp + 14h]
        cmp esi, ebx
        je L_00599026_A
        test edi, edi
        jne L_00599026_B
        call ebp
    L_00599026_B:
        cmp esi, dword ptr [edi + 8]
        jb L_00599026_C
        call ebp
    L_00599026_C:
        pop edi
        lea eax, [esi + 4]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_00599026_A:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x00596B80] sub_00596B80 (194 bytes)
extern "C" void ext_00595AF0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_00596B80(void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 08a0d11h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 18h]
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], esi
        mov dword ptr [ebp - 4], 0
        _emit 08bh
        _emit 0ffh
    L_loop_00596B80:
        mov ebx, dword ptr [ebp + 8]
        test ebx, ebx
        je L_bad1_00596B80
        cmp ebx, dword ptr [ebp + 10h]
        je L_ok1_00596B80
    L_bad1_00596B80:
        call dword ptr [mem_00925134]
    L_ok1_00596B80:
        mov edi, dword ptr [ebp + 0ch]
        cmp edi, dword ptr [ebp + 14h]
        je L_ret_00596B80
        test ebx, ebx
        jne L_ok2_00596B80
        call dword ptr [mem_00925134]
    L_ok2_00596B80:
        cmp edi, dword ptr [ebx + 4]
        jne L_ok3_00596B80
        call dword ptr [mem_00925134]
    L_ok3_00596B80:
        lea eax, [edi + 0ch]
        mov dword ptr [ebp - 18h], esi
        mov dword ptr [ebp - 1ch], esi
        test esi, esi
        mov byte ptr [ebp - 4], 1
        je L_skip_00596B80
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
    L_skip_00596B80:
        add esi, 1ch
        lea ecx, [ebp + 8]
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp + 18h], esi
        call ext_00595AF0
        jmp L_loop_00596B80
    L_unwind_00596B80:
        mov esi, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 18h]
        cmp esi, edi
        je L_throw_00596B80
    L_dtor_00596B80:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 1ch
        cmp esi, edi
        jne L_dtor_00596B80
    L_throw_00596B80:
        push 0
        push 0
        call ext_006A6DD2
    L_ret_00596B80:
        mov ecx, dword ptr [ebp - 0ch]
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

// [0x00599F30] sub_00599F30 (31 bytes)
extern "C" void ext_00598FF0();
extern "C" int __fastcall fn_00599F30(void* self, int edx_unused, int a1) {
    typedef int* (__thiscall *Callee)(void*, int*);
    int* p = ((Callee)ext_00598FF0)((char*)self + 0x2cc, &a1);
    if (!p) {
        return -1;
    }
    return *p;
}

// [0x00599BD0] sub_00599BD0 (51 bytes)
extern "C" void ext_00596B80();
extern "C" __declspec(naked) void __fastcall fn_00599BD0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x18]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push eax
        push ecx
        call ext_00596B80
        add esp, 0x24
        ret 0x14
    }
}

// [0x00594140] sub_00594140 (77 bytes)
extern "C" void ext_00682FD0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00594140(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00682FD0
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0059DBA0] sub_0059DBA0 (162 bytes)
extern "C" void ext_00599F30();
extern "C" void ext_005B18E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A87628;

extern "C" __declspec(naked) void __fastcall fn_0059DBA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        mov dword ptr [esi + 0x5f8], ecx
        je L_done_0059DBA0
        push esi
        call ext_00599F30
        mov ecx, eax
        cmp ecx, -0x1
        je L_done_0059DBA0
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea edx, [eax*8]
        sub edx, eax
        sub ecx, edx
        mov eax, dword ptr [mem_00A87628 + ecx*4]
        push eax
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x4]
        push ecx
        lea ecx, [esi + 0x4f8]
        mov dword ptr [esp + 0x2c], 0x0
        call ext_005B18E0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -0x1
        call dword ptr [mem_00924FF4]
    L_done_0059DBA0:
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x005946D0] sub_005946D0 (40 bytes)
extern "C" void ext_004C4880();
extern "C" void* __fastcall fn_005946D0(char* self, int edx_unused, void* a1, void* a2) {
    typedef void* (__thiscall *Finder)(void*, void*);
    typedef void* (__thiscall *Method)(void*, void*);
    char* sub = *(char**)(self + 0x26c);
    void* obj = ((Finder)ext_004C4880)(sub + 8, a1);
    if (obj) {
        obj = (*(Method**)obj)[10](obj, a2);
    }
    return obj;
}

// [0x0059D740] sub_0059D740 (128 bytes)
extern "C" void ext_0058A200();
extern "C" void ext_00594000();
extern "C" void ext_005946D0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059D740(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8b56f9h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1Ch
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 5F8h], 0
        je skip_call_0059D740
        call ext_00594000
        cmp dword ptr [esi + 5F8h], eax
        jne skip_call_0059D740
        push 3
        lea eax, [esp + 8]
        push eax
        lea ecx, [esi + 160h]
        call ext_0058A200
        mov ecx, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esi + 5F8h]
        push eax
        mov dword ptr [esp + 30h], 0
        call ext_005946D0
        lea ecx, [esp + 4]
        mov dword ptr [esp + 28h], -1
        call dword ptr [mem_00924FF4]
skip_call_0059D740:
        mov ecx, dword ptr [esp + 20h]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 28h
        ret 4
    }
}

// [0x00598D10] sub_00598D10 (241 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00598D10(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 18h
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx+238h]
        push edi
        mov edi, dword ptr [esi+4]
        cmp edi, dword ptr [esi+8]
        mov dword ptr [esp+10h], 0
        mov dword ptr [esp+14h], esi
        jbe L598D3F
        call ebp
L598D3F:
        mov dword ptr [esp+24h], edi
L598D43:
        mov ebx, dword ptr [esi+8]
        cmp dword ptr [esi+4], ebx
        jbe L598D4D
        call ebp
L598D4D:
        cmp esi, esi
        je L598D53
        call ebp
L598D53:
        cmp edi, ebx
        je L598DF5
L598D5B:
        cmp edi, dword ptr [esi+8]
        jb L598D62
        call ebp
L598D62:
        mov esi, dword ptr [edi]
        mov eax, dword ptr [esi+59Ch]
        mov eax, dword ptr [eax]
        add esi, 598h
        mov edi, esi
        mov ebx, eax
        mov dword ptr [esp+18h], edi
        mov dword ptr [esp+1Ch], ebx
        mov edi, edi
L598D80:
        test edi, edi
        mov ebp, dword ptr [esi+4]
        je L598D8B
        cmp edi, esi
        je L598D91
L598D8B:
        call dword ptr [mem_00925134]
L598D91:
        cmp ebx, ebp
        je L598DCA
        test edi, edi
        jne L598D9F
        call dword ptr [mem_00925134]
L598D9F:
        cmp ebx, dword ptr [edi+4]
        jne L598DAA
        call dword ptr [mem_00925134]
L598DAA:
        mov ecx, dword ptr [ebx+28h]
        mov edx, dword ptr [ecx+164h]
        add dword ptr [esp+10h], edx
        lea ecx, [esp+18h]
        call ext_00673C20
        mov ebx, dword ptr [esp+1Ch]
        mov edi, dword ptr [esp+18h]
        jmp L598D80
L598DCA:
        mov eax, dword ptr [esp+14h]
        mov ecx, dword ptr [esp+24h]
        cmp ecx, dword ptr [eax+8]
        jb L598DDD
        call dword ptr [mem_00925134]
L598DDD:
        add dword ptr [esp+24h], 4
        mov esi, dword ptr [esp+14h]
        mov ebp, dword ptr [mem_00925134]
        mov edi, dword ptr [esp+24h]
        jmp L598D43
L598DF5:
        mov eax, dword ptr [esp+10h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00595C90] sub_00595C90 (82 bytes)
extern "C" void ext_0049BD50();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00595C90(void* self, int edx_unused, const void* a1) {
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
        call ext_0049BD50
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0059C7A0] sub_0059C7A0 (55 bytes)
extern "C" void ext_0059C770();
extern "C" void ext_00661F70();
extern "C" void ext_0065D110();

extern "C" __declspec(naked) void __fastcall fn_0059C7A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xf4], 3
        jl short L_done_0059C7A0
        push 1
        call ext_0059C770
        push 3
        mov ecx, esi
        call ext_0059C770
        push 1
        lea ecx, [esi + 0x168]
        call ext_00661F70
        lea ecx, [esi + 0xfc]
        pop esi
        jmp ext_0065D110
L_done_0059C7A0:
        pop esi
        ret
    }
}

// [0x005947B0] sub_005947B0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B41358;
extern "C" int mem_00B4133C;
extern "C" __declspec(naked) void __fastcall fn_005947B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0aee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41358], al
        jne skip_init
        or dword ptr [mem_00B41358], eax
        push 0xa2f0cc
        push offset mem_00B4133C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91d670
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4133C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00594970] sub_00594970 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B41378;
extern "C" int mem_00B4135C;
extern "C" __declspec(naked) void __fastcall fn_00594970(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0b0e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41378], al
        jne skip_init
        or dword ptr [mem_00B41378], eax
        push 0xa353f8
        push offset mem_00B4135C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91d6a0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4135C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005949D0] sub_005949D0 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B41398;
extern "C" int mem_00B4137C;

extern "C" __declspec(naked) void __fastcall fn_005949D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0b2e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41398], al
        jne skip_init
        or dword ptr [mem_00B41398], eax
        push 0xa87370
        push offset mem_00B4137C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91d690
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4137C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00594A30] sub_00594A30 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B413B8;
extern "C" int mem_00B4139C;

extern "C" __declspec(naked) void __fastcall fn_00594A30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a0b4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B413B8], al
        jne skip_init
        or dword ptr [mem_00B413B8], eax
        push 0xa40484
        push offset mem_00B4139C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91d680
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4139C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0059E340] sub_0059E340 (95 bytes)
extern "C" void ext_00662610();
extern "C" void ext_006A6C87();
extern "C" int mem_00B41478;
extern "C" int mem_00B4145C;

extern "C" __declspec(naked) void __fastcall fn_0059E340(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a159e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B41478], al
        jne skip_init
        or dword ptr [mem_00B41478], eax
        push 0xa2f438
        push offset mem_00B4145C
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x91d810
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4145C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00593C10] sub_00593C10 (108 bytes)
extern "C" void ext_004769F0();
extern "C" void ext_0067EBB0();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00593C10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        push esi
        mov esi, [esp+0xc]
        mov eax, [esi+4]
        mov edx, [eax+0x18]
        add esi, 4
        push edi
        mov edi, ecx
        mov ecx, esi
        call edx
        mov eax, [eax]
        mov ecx, [edi+0xec]
        push 0x95cfe4
        lea edx, [esp+0x14]
        mov [esp+0x14], eax
        push edx
        lea eax, [esp+0x10]
        mov [esp+0x10], ecx
        push eax
        lea ecx, [esp+0x20]
        call ext_004769F0
        mov ecx, [esp+0x18]
        mov edx, [esp+0x14]
        mov eax, [esi]
        mov edi, [edi+0xe4]
        push ecx
        mov ecx, [mem_00B40640]
        push edx
        mov edx, [eax+8]
        push ecx
        mov ecx, esi
        call edx
        push eax
        mov ecx, edi
        call ext_0067EBB0
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0059D7F0] sub_0059D7F0 (310 bytes)
// Stack args: a1, a2 (ret 8). Installs an SEH frame and copies the std::string at a2, then
// trims it via find_last_not_of/substr. Loops over sub_00594000/sub_00594620 while the
// result is non-zero, appending '0' to the string when the counter is below 10 and
// concatenating sub_00404F00(counter) formatted text. Returns a2.
extern "C" void ext_00404F00();
extern "C" void ext_00594000();
extern "C" void ext_00594620();
extern "C" int mem_00924FE0;
extern "C" int mem_00924EC4;
extern "C" int mem_00924EC8;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ED0;
extern "C" int mem_00924EC0;
extern "C" int mem_00924FD8;
extern "C" __declspec(naked) void* __fastcall fn_0059D7F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8a1525
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x58]
        push edi
        xor edi, edi
        push esi
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x54], edi
        mov dword ptr [esp + 0x10], edi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        mov ebx, 0x1
        push 0x92e3bc
        mov ecx, esi
        mov dword ptr [esp + 0x58], ebx
        call dword ptr [mem_00924EC8]
        cmp eax, edi
        jl short L_0059D875
        add eax, ebx
        push eax
        push edi
        lea edx, [esp + 0x34]
        push edx
        mov ecx, esi
        call dword ptr [mem_00925120]
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x54], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], bl
        call dword ptr [mem_00924FF4]
L_0059D875:
        mov esi, dword ptr [esp + 0x58]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        push 0x95dd30
        mov ecx, esi
        mov dword ptr [esp + 0x10], ebx
        call dword ptr [mem_00924ED0]
        push esi
        call ext_00594000
        mov ecx, eax
        call ext_00594620
        test eax, eax
        je short L_0059D901
L_0059D8A8:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        add edi, ebx
        call dword ptr [mem_00924FDC]
        cmp edi, 0xa
        jge short L_0059D8C6
        push 0x30
        mov ecx, esi
        call dword ptr [mem_00924EC0]
L_0059D8C6:
        lea edx, [esp + 0x2c]
        push edi
        push edx
        call ext_00404F00
        add esp, 0x8
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x54], 0x3
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], bl
        call dword ptr [mem_00924FF4]
        push esi
        call ext_00594000
        mov ecx, eax
        call ext_00594620
        test eax, eax
        jne short L_0059D8A8
L_0059D901:
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x50], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8
    }
}

// [0x00599060] sub_00599060 (112 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005947B0();
extern "C" void ext_00664C30();
extern "C" __declspec(naked) void __fastcall fn_00599060(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008b4989
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x60
        push esi
        mov esi, dword ptr [esp + 0x74]
        push esi
        call ext_00598FF0
        test eax, eax
        jne L_done_00599060
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00664C30
        add esp, 0x8
        push eax
        mov dword ptr [esp + 0x70], 0
        call ext_005947B0
        push eax
        lea ecx, [esp + 0x28]
        call ext_0041FF30
        push 0x009d3748
        lea edx, [esp + 0x24]
        push edx
        call ext_006A6DD2
    L_done_00599060:
        mov ecx, dword ptr [esp + 0x64]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x6c
        ret 0x4
    }
}

// [0x00599F80] sub_00599F80 (182 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005947B0();
extern "C" void ext_005977A0();
extern "C" void ext_005991D0();
extern "C" void ext_00664C30();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00599F80(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 08b4989h
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 68h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 80h]
        push esi
        push edi
        push ebp
        lea eax, [esp + 14h]
        push eax
        mov esi, ecx
        call ext_005977A0
        mov edi, dword ptr [esi + 8h]
        cmp dword ptr [esi + 4h], edi
        jbe short L_ok1
        call dword ptr [mem_00925134]
L_ok1:
        mov ebx, dword ptr [esp + 10h]
        test ebx, ebx
        je short L_bad2
        cmp ebx, esi
        je short L_ok3
L_bad2:
        call dword ptr [mem_00925134]
L_ok3:
        mov eax, dword ptr [esp + 14h]
        cmp eax, edi
        jne short L_skip
        mov ecx, dword ptr [ebp]
        push ecx
        lea edx, [esp + 1ch]
        push edx
        call ext_00664C30
        add esp, 8
        push eax
        mov dword ptr [esp + 84h], 0
        call ext_005947B0
        push eax
        lea ecx, [esp + 3ch]
        call ext_0041FF30
        push 09d3748h
        lea eax, [esp + 38h]
        push eax
        call ext_006A6DD2
L_skip:
        push eax
        push ebx
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, esi
        call ext_005991D0
        mov ecx, dword ptr [esp + 78h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 74h
        ret 4
    }
}

// [0x00593520] sub_00593520 (118 bytes)
extern "C" void ext_00587650();
extern "C" void ext_0065F400();
extern "C" __declspec(naked) void __fastcall fn_00593520(void* self) {
    __asm {
        push -1
        push 0x008a0588
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00587650
        lea ecx, [esi + 0xe4]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x0095ceec
        mov dword ptr [esi + 4], 0x0095cea4
        mov dword ptr [esi + 8], 0x0095ce64
        mov dword ptr [esi + 0xc], 0x0095ce14
        call ext_0065F400
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 0xec], 2
        mov dword ptr [esi + 0xe8], -1
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0059D930] sub_0059D930 (548 bytes)
// Stack args: a1, a2 (ret 8). Same SEH/std::string shape as sub_0059D7F0 above.
extern "C" void ext_00404F00();
extern "C" void ext_00594000();
extern "C" void ext_00594630();
extern "C" void ext_00664A80();
extern "C" int mem_00924FE0;
extern "C" int mem_0093BEDC;
extern "C" int mem_00924FC8;
extern "C" int mem_00924EC4;
extern "C" int mem_00924EC8;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924ED0;
extern "C" int mem_00924EC0;
extern "C" int mem_00924FD8;
extern "C" __declspec(naked) void* __fastcall fn_0059D930(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8a1577
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x74
        push esi
        mov esi, dword ptr [esp + 0x8c]
        push esi
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE0]
        push 0x0
        push 0x9441dc
        lea eax, [esp + 0x2c]
        push 0x92ab70
        push eax
        mov dword ptr [esp + 0x90], 0x1
        call ext_00664A80
        lea ecx, [esp + 0x34]
        add esp, 0x10
        push ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594630
        test eax, eax
        jne L_D9D6
        mov edx, dword ptr [mem_0093BEDC]
        push edx
        lea eax, [esp + 0x28]
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_D9D6
        mov esi, dword ptr [esp + 0x88]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x4], 0x1
        jmp L_DB2B
    L_D9D6:
        lea edx, [esp + 0x24]
        push edx
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        push 0x92e3bc
        mov ecx, esi
        mov byte ptr [esp + 0x88], 0x2
        call dword ptr [mem_00924EC8]
        test eax, eax
        jl L_DA40
        add eax, 0x1
        push eax
        push 0x0
        lea edx, [esp + 0x64]
        push edx
        lea ecx, [esp + 0x30]
        call dword ptr [mem_00925120]
        push eax
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x84], 0x3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x80], 0x2
        call dword ptr [mem_00924FF4]
    L_DA40:
        lea eax, [esp + 0x40]
        push eax
        lea ecx, [esp + 0xc]
        xor esi, esi
        call dword ptr [mem_00924FE0]
        push 0x95dd30
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x84], 0x4
        call dword ptr [mem_00924ED0]
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594630
        test eax, eax
        je L_DAEB
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_DA80:
        lea edx, [esp + 0x40]
        push edx
        lea ecx, [esp + 0xc]
        add esi, 0x1
        call dword ptr [mem_00924FDC]
        cmp esi, 0xa
        jge L_DAA3
        push 0x30
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924EC0]
    L_DAA3:
        lea eax, [esp + 0x5c]
        push esi
        push eax
        call ext_00404F00
        add esp, 0x8
        push eax
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x84], 0x5
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x80], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594630
        test eax, eax
        jne L_DA80
    L_DAEB:
        mov esi, dword ptr [esp + 0x88]
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x80], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x80], 0x1
        call dword ptr [mem_00924FF4]
    L_DB2B:
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x80], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x78]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x80
        ret 0x8
    }
}

// [0x005966C0] sub_005966C0 (754 bytes)
extern "C" void ext_005942F0();
extern "C" void ext_00594310();
extern "C" void ext_005943D0();
extern "C" void ext_00594830();
extern "C" void ext_00594880();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005966C0(void* self) {
    __asm {
        push    -1
        push    0x8a0d5b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4c
        mov     eax, dword ptr [esp + 0x64]
        cmp     byte ptr [eax + 0x31], 0
        push    ebx
        mov     ebx, ecx
        mov     dword ptr [esp + 4], ebx
        je      L_00596742
        push    0x929218
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x58], 0
        call    dword ptr [mem_009251C4]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x5c], 1
        mov     dword ptr [esp + 0x2c], 0x928ecc
        call    dword ptr [mem_00924FE0]
        push    0x9ce164
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     byte ptr [esp + 0x60], 0
        mov     dword ptr [esp + 0x30], 0x928ee4
        call    ext_006A6DD2
    L_00596742:
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x70]
        mov     ebp, eax
        call    ext_005943D0
        mov     eax, dword ptr [ebp]
        cmp     byte ptr [eax + 0x31], 0
        je      L_0059675E
        mov     edi, dword ptr [ebp + 8]
        jmp     L_00596776
    L_0059675E:
        mov     edx, dword ptr [ebp + 8]
        cmp     byte ptr [edx + 0x31], 0
        je      L_0059676B
        mov     edi, eax
        jmp     L_00596776
    L_0059676B:
        mov     ecx, dword ptr [esp + 0x74]
        cmp     ecx, ebp
        mov     edi, dword ptr [ecx + 8]
        jne     L_005967DD
    L_00596776:
        cmp     byte ptr [edi + 0x31], 0
        mov     esi, dword ptr [ebp + 4]
        jne     L_00596782
        mov     dword ptr [edi + 4], esi
    L_00596782:
        mov     eax, dword ptr [ebx + 4]
        cmp     dword ptr [eax + 4], ebp
        jne     L_0059678F
        mov     dword ptr [eax + 4], edi
        jmp     L_0059679A
    L_0059678F:
        cmp     dword ptr [esi], ebp
        jne     L_00596797
        mov     dword ptr [esi], edi
        jmp     L_0059679A
    L_00596797:
        mov     dword ptr [esi + 8], edi
    L_0059679A:
        mov     ebx, dword ptr [ebx + 4]
        cmp     dword ptr [ebx], ebp
        jne     L_005967B6
        cmp     byte ptr [edi + 0x31], 0
        je      L_005967AB
        mov     eax, esi
        jmp     L_005967B4
    L_005967AB:
        push    edi
        call    ext_00594310
        add     esp, 4
    L_005967B4:
        mov     dword ptr [ebx], eax
    L_005967B6:
        mov     eax, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [eax + 4]
        cmp     dword ptr [ebx + 8], ebp
        jne     L_00596835
        cmp     byte ptr [edi + 0x31], 0
        je      L_005967CF
        mov     eax, esi
        mov     dword ptr [ebx + 8], eax
        jmp     L_00596835
    L_005967CF:
        push    edi
        call    ext_005942F0
        add     esp, 4
        mov     dword ptr [ebx + 8], eax
        jmp     L_00596835
    L_005967DD:
        mov     dword ptr [eax + 4], ecx
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ecx], edx
        cmp     ecx, dword ptr [ebp + 8]
        jne     L_005967EE
        mov     esi, ecx
        jmp     L_00596808
    L_005967EE:
        cmp     byte ptr [edi + 0x31], 0
        mov     esi, dword ptr [ecx + 4]
        jne     L_005967FA
        mov     dword ptr [edi + 4], esi
    L_005967FA:
        mov     dword ptr [esi], edi
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [ecx + 8], eax
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [edx + 4], ecx
    L_00596808:
        mov     eax, dword ptr [ebx + 4]
        cmp     dword ptr [eax + 4], ebp
        jne     L_00596815
        mov     dword ptr [eax + 4], ecx
        jmp     L_00596823
    L_00596815:
        mov     eax, dword ptr [ebp + 4]
        cmp     dword ptr [eax], ebp
        jne     L_00596820
        mov     dword ptr [eax], ecx
        jmp     L_00596823
    L_00596820:
        mov     dword ptr [eax + 8], ecx
    L_00596823:
        mov     eax, dword ptr [ebp + 4]
        mov     dword ptr [ecx + 4], eax
        mov     dl, byte ptr [ebp + 0x30]
        mov     al, byte ptr [ecx + 0x30]
        mov     byte ptr [ecx + 0x30], dl
        mov     byte ptr [ebp + 0x30], al
    L_00596835:
        mov     bl, 1
        cmp     byte ptr [ebp + 0x30], bl
        jne     L_0059693F
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 4]
        cmp     edi, dword ptr [eax + 4]
        je      L_0059693C
    L_00596850:
        cmp     byte ptr [edi + 0x30], bl
        jne     L_0059693C
        mov     eax, dword ptr [esi]
        cmp     edi, eax
        jne     L_005968C6
        mov     eax, dword ptr [esi + 8]
        cmp     byte ptr [eax + 0x30], 0
        jne     L_0059687C
        mov     byte ptr [eax + 0x30], bl
        push    esi
        mov     byte ptr [esi + 0x30], 0
        call    ext_00594830
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esp + 0x10]
    L_0059687C:
        cmp     byte ptr [eax + 0x31], 0
        jne     L_005968F8
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0x30], bl
        jne     L_00596891
        mov     edx, dword ptr [eax + 8]
        cmp     byte ptr [edx + 0x30], bl
        je      L_005968F4
    L_00596891:
        mov     edx, dword ptr [eax + 8]
        cmp     byte ptr [edx + 0x30], bl
        jne     L_005968AF
        mov     edx, dword ptr [eax]
        mov     byte ptr [edx + 0x30], bl
        push    eax
        mov     byte ptr [eax + 0x30], 0
        call    ext_00594880
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esp + 0x10]
    L_005968AF:
        mov     dl, byte ptr [esi + 0x30]
        mov     byte ptr [eax + 0x30], dl
        mov     byte ptr [esi + 0x30], bl
        mov     eax, dword ptr [eax + 8]
        push    esi
        mov     byte ptr [eax + 0x30], bl
        call    ext_00594830
        jmp     L_0059693C
    L_005968C6:
        cmp     byte ptr [eax + 0x30], 0
        jne     L_005968DF
        mov     byte ptr [eax + 0x30], bl
        push    esi
        mov     byte ptr [esi + 0x30], 0
        call    ext_00594880
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x10]
    L_005968DF:
        cmp     byte ptr [eax + 0x31], 0
        jne     L_005968F8
        mov     edx, dword ptr [eax + 8]
        cmp     byte ptr [edx + 0x30], bl
        jne     L_0059690B
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0x30], bl
        jne     L_0059690B
    L_005968F4:
        mov     byte ptr [eax + 0x30], 0
    L_005968F8:
        mov     eax, dword ptr [ecx + 4]
        mov     edi, esi
        cmp     edi, dword ptr [eax + 4]
        mov     esi, dword ptr [esi + 4]
        jne     L_00596850
        jmp     L_0059693C
    L_0059690B:
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0x30], bl
        jne     L_00596928
        mov     edx, dword ptr [eax + 8]
        mov     byte ptr [edx + 0x30], bl
        push    eax
        mov     byte ptr [eax + 0x30], 0
        call    ext_00594830
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esp + 0x10]
    L_00596928:
        mov     dl, byte ptr [esi + 0x30]
        mov     byte ptr [eax + 0x30], dl
        mov     byte ptr [esi + 0x30], bl
        mov     eax, dword ptr [eax]
        push    esi
        mov     byte ptr [eax + 0x30], bl
        call    ext_00594880
    L_0059693C:
        mov     byte ptr [edi + 0x30], bl
    L_0059693F:
        lea     esi, [ebp + 0xc]
        mov     dword ptr [esp + 0x14], esi
        cmp     dword ptr [esi + 0x20], 0
        lea     eax, [esi + 0x1c]
        mov     dword ptr [esp + 0x64], 2
        je      L_00596962
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [edx + 0x78]
        call    eax
    L_00596962:
        mov     ecx, esi
        mov     dword ptr [esp + 0x64], -1
        call    dword ptr [mem_00924FF4]
        push    ebp
        call    ext_006A5C5C
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx + 8]
        add     esp, 4
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        jbe     L_0059698F
        add     eax, -1
        mov     dword ptr [ecx + 8], eax
    L_0059698F:
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [eax + 4], edx
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x58
        ret     0xc
    }
}

// [0x00598ED0] sub_00598ED0 (111 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005949D0();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00598ED0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x4c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x58]
        push esi
        push edi
        lea esi, [ecx + 0x4]
        push ebp
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005A07A0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je L_check
        cmp edi, esi
        je L_cmp
    L_check:
        call dword ptr [mem_00925134]
    L_cmp:
        mov eax, dword ptr [esp + 0x14]
        cmp eax, ebx
        jne L_store
        push ebp
        call ext_005949D0
        push eax
        lea ecx, [esp + 0x20]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0x1c]
        push ecx
        call ext_006A6DD2
    L_store:
        push eax
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005AE1B0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x005990D0] sub_005990D0 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00A32778;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005990D0(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00A32778]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x00599E40] sub_00599E40 (42 bytes)
extern "C" void ext_00598ED0();

extern "C" __declspec(naked) void __fastcall fn_00599E40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x248]
        mov edx, dword ptr [eax]
        push esi
        lea esi, [ecx + 0x248]
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov ecx, esi
        call edx
        test eax, eax
        je done
        push edi
        mov ecx, esi
        call ext_00598ED0
done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0059A040] sub_0059A040 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00AD9100;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059A040(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00AD9100]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x00597980] sub_00597980 (887 bytes)
extern "C" void ext_00594190();
extern "C" void ext_005941F0();
extern "C" void ext_005942D0();
extern "C" void ext_00594810();
extern "C" void ext_00595AF0();
extern "C" void ext_00682FD0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00597980(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0d5b
        push    eax
        mov     dword ptr fs:[0x0], esp
        mov     eax, dword ptr [esp + 0x18]
        sub     esp, 0x4c
        cmp     byte ptr [eax + 0xb9], 0x0
        push    ebp
        mov     ebp, ecx
        je      L_597A01
        push    0x929218
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE4]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x58], 0x0
        call    dword ptr [mem_009251C4]
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x5c], 0x1
        mov     dword ptr [esp + 0x2c], 0x928ecc
        call    dword ptr [mem_00924FE0]
        push    0x9ce164
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     byte ptr [esp + 0x60], 0x0
        mov     dword ptr [esp + 0x30], 0x928ee4
        call    ext_006A6DD2
    L_597A01:
        push    ebx
        push    esi
        mov     ebx, eax
        push    edi
        lea     ecx, [esp + 0x70]
        mov     dword ptr [esp + 0x10], ebx
        call    ext_00595AF0
        mov     eax, dword ptr [ebx]
        cmp     byte ptr [eax + 0xb9], 0x0
        je      L_597A23
        mov     edi, dword ptr [ebx + 0x8]
        jmp     L_597A3E
    L_597A23:
        mov     edx, dword ptr [ebx + 0x8]
        cmp     byte ptr [edx + 0xb9], 0x0
        je      L_597A33
        mov     edi, eax
        jmp     L_597A3E
    L_597A33:
        mov     ecx, dword ptr [esp + 0x74]
        cmp     ecx, ebx
        mov     edi, dword ptr [ecx + 0x8]
        jne     L_597AB6
    L_597A3E:
        cmp     byte ptr [edi + 0xb9], 0x0
        mov     esi, dword ptr [ebx + 0x4]
        jne     L_597A4D
        mov     dword ptr [edi + 0x4], esi
    L_597A4D:
        mov     eax, dword ptr [ebp + 0x4]
        cmp     dword ptr [eax + 0x4], ebx
        jne     L_597A5A
        mov     dword ptr [eax + 0x4], edi
        jmp     L_597A65
    L_597A5A:
        cmp     dword ptr [esi], ebx
        jne     L_597A62
        mov     dword ptr [esi], edi
        jmp     L_597A65
    L_597A62:
        mov     dword ptr [esi + 0x8], edi
    L_597A65:
        mov     ebx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [ebx]
        cmp     eax, dword ptr [esp + 0x10]
        jne     L_597A88
        cmp     byte ptr [edi + 0xb9], 0x0
        je      L_597A7D
        mov     eax, esi
        jmp     L_597A86
    L_597A7D:
        push    edi
        call    ext_00594810
        add     esp, 0x4
    L_597A86:
        mov     dword ptr [ebx], eax
    L_597A88:
        mov     ebx, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [ebx + 0x8], ecx
        jne     L_597B1C
        cmp     byte ptr [edi + 0xb9], 0x0
        je      L_597AA8
        mov     eax, esi
        mov     dword ptr [ebx + 0x8], eax
        jmp     L_597B1C
    L_597AA8:
        push    edi
        call    ext_005942D0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x8], eax
        jmp     L_597B1C
    L_597AB6:
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ecx], edx
        cmp     ecx, dword ptr [ebx + 0x8]
        jne     L_597AC6
        mov     esi, ecx
        jmp     L_597AE3
    L_597AC6:
        cmp     byte ptr [edi + 0xb9], 0x0
        mov     esi, dword ptr [ecx + 0x4]
        jne     L_597AD5
        mov     dword ptr [edi + 0x4], esi
    L_597AD5:
        mov     dword ptr [esi], edi
        mov     eax, dword ptr [ebx + 0x8]
        mov     dword ptr [ecx + 0x8], eax
        mov     edx, dword ptr [ebx + 0x8]
        mov     dword ptr [edx + 0x4], ecx
    L_597AE3:
        mov     eax, dword ptr [ebp + 0x4]
        cmp     dword ptr [eax + 0x4], ebx
        jne     L_597AF0
        mov     dword ptr [eax + 0x4], ecx
        jmp     L_597AFE
    L_597AF0:
        mov     eax, dword ptr [ebx + 0x4]
        cmp     dword ptr [eax], ebx
        jne     L_597AFB
        mov     dword ptr [eax], ecx
        jmp     L_597AFE
    L_597AFB:
        mov     dword ptr [eax + 0x8], ecx
    L_597AFE:
        mov     eax, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x4], eax
        mov     dl, byte ptr [ebx + 0xb8]
        mov     al, byte ptr [ecx + 0xb8]
        mov     byte ptr [ecx + 0xb8], dl
        mov     byte ptr [ebx + 0xb8], al
    L_597B1C:
        mov     eax, dword ptr [esp + 0x10]
        mov     bl, 0x1
        cmp     byte ptr [eax + 0xb8], bl
        jne     L_597C8C
        mov     ecx, dword ptr [ebp + 0x4]
        cmp     edi, dword ptr [ecx + 0x4]
        je      L_597C86
        _emit   0x8d
        _emit   0x9b
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    L_597B40:
        cmp     byte ptr [edi + 0xb8], bl
        jne     L_597C86
        mov     eax, dword ptr [esi]
        cmp     edi, eax
        jne     L_597BEB
        mov     eax, dword ptr [esi + 0x8]
        cmp     byte ptr [eax + 0xb8], 0x0
        jne     L_597B7A
        mov     byte ptr [eax + 0xb8], bl
        push    esi
        mov     ecx, ebp
        mov     byte ptr [esi + 0xb8], 0x0
        call    ext_00594190
        mov     eax, dword ptr [esi + 0x8]
    L_597B7A:
        cmp     byte ptr [eax + 0xb9], 0x0
        jne     L_597C30
        mov     edx, dword ptr [eax]
        cmp     byte ptr [edx + 0xb8], bl
        jne     L_597BA0
        mov     ecx, dword ptr [eax + 0x8]
        cmp     byte ptr [ecx + 0xb8], bl
        je      L_597C29
    L_597BA0:
        mov     ecx, dword ptr [eax + 0x8]
        cmp     byte ptr [ecx + 0xb8], bl
        jne     L_597BC3
        mov     byte ptr [edx + 0xb8], bl
        push    eax
        mov     ecx, ebp
        mov     byte ptr [eax + 0xb8], 0x0
        call    ext_005941F0
        mov     eax, dword ptr [esi + 0x8]
    L_597BC3:
        mov     cl, byte ptr [esi + 0xb8]
        mov     byte ptr [eax + 0xb8], cl
        mov     byte ptr [esi + 0xb8], bl
        mov     edx, dword ptr [eax + 0x8]
        push    esi
        mov     ecx, ebp
        mov     byte ptr [edx + 0xb8], bl
        call    ext_00594190
        jmp     L_597C86
    L_597BEB:
        cmp     byte ptr [eax + 0xb8], 0x0
        jne     L_597C0B
        mov     byte ptr [eax + 0xb8], bl
        push    esi
        mov     ecx, ebp
        mov     byte ptr [esi + 0xb8], 0x0
        call    ext_005941F0
        mov     eax, dword ptr [esi]
    L_597C0B:
        cmp     byte ptr [eax + 0xb9], 0x0
        jne     L_597C30
        mov     edx, dword ptr [eax + 0x8]
        cmp     byte ptr [edx + 0xb8], bl
        jne     L_597C43
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0xb8], bl
        jne     L_597C43
    L_597C29:
        mov     byte ptr [eax + 0xb8], 0x0
    L_597C30:
        mov     edx, dword ptr [ebp + 0x4]
        mov     edi, esi
        cmp     edi, dword ptr [edx + 0x4]
        mov     esi, dword ptr [esi + 0x4]
        jne     L_597B40
        jmp     L_597C86
    L_597C43:
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0xb8], bl
        jne     L_597C64
        mov     byte ptr [edx + 0xb8], bl
        push    eax
        mov     ecx, ebp
        mov     byte ptr [eax + 0xb8], 0x0
        call    ext_00594190
        mov     eax, dword ptr [esi]
    L_597C64:
        mov     cl, byte ptr [esi + 0xb8]
        mov     byte ptr [eax + 0xb8], cl
        mov     byte ptr [esi + 0xb8], bl
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, ebp
        mov     byte ptr [edx + 0xb8], bl
        call    ext_005941F0
    L_597C86:
        mov     byte ptr [edi + 0xb8], bl
    L_597C8C:
        mov     esi, dword ptr [esp + 0x10]
        add     esi, 0xc
        mov     dword ptr [esp + 0x14], esi
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esp + 0x64], 0x2
        call    ext_00682FD0
        mov     ecx, esi
        mov     dword ptr [esp + 0x64], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ext_006A5C5C
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0x4
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jbe     L_597CD4
        add     eax, -0x1
        mov     dword ptr [ebp + 0x8], eax
    L_597CD4:
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [eax + 0x4], edx
        pop     ebp
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x58
        ret     0xc
    }
}
