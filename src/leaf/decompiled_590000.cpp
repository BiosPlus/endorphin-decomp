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
