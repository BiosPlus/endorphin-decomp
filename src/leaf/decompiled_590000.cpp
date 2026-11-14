// Decompiled translation unit: src/leaf/decompiled_590000.cpp
#include <vector>

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

extern "C" void ext_005AE480();

// [0x00599F50] sub_00599F50 (44 bytes)
extern "C" void __fastcall fn_00599F50(void* self) {
    struct Node {
        Node* left;
        Node* parent;
        Node* right;
    };
    struct Tree {
        void* pad;
        Node* head;
        int size;
    };
    typedef void (__thiscall *EraseFn)(void*, void*);
    Tree* t = (Tree*)((char*)self + 4);
    ((EraseFn)ext_005AE480)(t, t->head->parent);
    t->head->parent = t->head;
    t->size = 0;
    t->head->left = t->head;
    t->head->right = t->head;
}

// [0x00597470] sub_00597470 (298 bytes)
extern "C" void ext_0047A7F0();
extern "C" void ext_0051E3D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00597470(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        lea ebx, [ebp + 0x238]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        jbe L_loop1
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop1:
        mov edi, dword ptr [ebp + 0x240]
        cmp dword ptr [ebp + 0x23c], edi
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        test ebx, ebx
        je L_chk3
        lea eax, [ebp + 0x238]
        cmp ebx, eax
        je L_chk4
L_chk3:
        call dword ptr [mem_00925134]
L_chk4:
        cmp esi, edi
        je L_after1
        test ebx, ebx
        jne L_chk5
        call dword ptr [mem_00925134]
L_chk5:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_body1
        call dword ptr [mem_00925134]
L_body1:
        mov eax, dword ptr [esi]
        mov edi, dword ptr [ebp + 0x26c]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        push 0x0
        mov ecx, edi
        call ext_0047A7F0
        cmp esi, dword ptr [ebx + 0x8]
        jb L_adv1
        call dword ptr [mem_00925134]
L_adv1:
        add esi, 0x4
        jmp L_loop1
L_after1:
        mov edi, dword ptr [ebp + 0x2b0]
        cmp dword ptr [ebp + 0x2ac], edi
        mov ebx, dword ptr [mem_00925134]
        jbe L_loop2_init
        call ebx
L_loop2_init:
        mov esi, dword ptr [ebp + 0x2ac]
        cmp esi, dword ptr [ebp + 0x2b0]
        jbe L_loop2_chk
        call ebx
L_loop2_chk:
        cmp esi, edi
        je L_after2
L_loop2:
        mov ecx, esi
        call ext_0051E3D0
        add esi, 0x168
        cmp esi, edi
        jne L_loop2
L_after2:
        mov edi, dword ptr [ebp + 0x26c]
        mov esi, dword ptr [edi + 0x34]
        add edi, 0x30
        cmp esi, dword ptr [edi + 0x8]
        jbe L_loop3
        call ebx
        jmp L_loop3
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_loop3:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_l3c1
        call ebp
L_l3c1:
        test edi, edi
        je L_l3c2
        cmp edi, edi
        je L_l3c3
L_l3c2:
        call ebp
L_l3c3:
        cmp esi, ebx
        je L_end
        test edi, edi
        jne L_l3c4
        call ebp
L_l3c4:
        cmp esi, dword ptr [edi + 0x8]
        jb L_l3c5
        call ebp
L_l3c5:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x150]
        push -0x1
        call edx
        cmp esi, dword ptr [edi + 0x8]
        jb L_l3c6
        call ebp
L_l3c6:
        add esi, 0x4
        jmp L_loop3
L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_00598E10();

// [0x0059A9F0] sub_0059A9F0 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059A9F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esi + 0x2bc]
        call ext_0041A920
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0xc]
        lea edx, [esp + 0x8]
        push edx
        mov dword ptr [esp + 0xc], ecx
        push eax
        lea ecx, [esi + 0x248]
        call ext_00598E10
        pop esi
        ret 0x8
    }
}

// [0x0059B0E0] sub_0059B0E0 (59 bytes)
extern "C" void ext_005AEC70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0059B0E0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x95da18
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

// [0x0059B250] sub_0059B250 (59 bytes)
extern "C" void ext_00599210();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0059B250(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x95da20
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00599210
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

// [0x0059B3C0] sub_0059B3C0 (59 bytes)
extern "C" void ext_005994F0();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0059B3C0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x95da28
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005994F0
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

// [0x00597060] sub_00597060 (230 bytes)
extern "C" void ext_00455450();
extern "C" void ext_0047C0B0();
extern "C" void ext_005A13C0();
extern "C" void ext_00642600();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00597060(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 0xf8]
        push esi
        push edi
        mov dword ptr [esp + 0x10], ebp
        call ext_00642600
        mov esi, dword ptr [ebp + 0x240]
        add ebp, 0x238
        cmp dword ptr [ebp + 4], esi
        jbe L_0059708f
        call dword ptr [mem_00925134]
    L_0059708f:
        mov edi, ebp
    L_00597091:
        mov ebx, dword ptr [ebp + 4]
        cmp ebx, dword ptr [ebp + 8]
        jbe L_0059709f
        call dword ptr [mem_00925134]
    L_0059709f:
        test edi, edi
        je L_005970a7
        cmp edi, ebp
        je L_005970ad
    L_005970a7:
        call dword ptr [mem_00925134]
    L_005970ad:
        cmp esi, ebx
        je L_005970f8
        test edi, edi
        mov dword ptr [esp + 0x18], esi
        jne L_005970bf
        call dword ptr [mem_00925134]
    L_005970bf:
        cmp esi, dword ptr [edi + 4]
        ja L_005970ca
        call dword ptr [mem_00925134]
    L_005970ca:
        lea ebx, [esi - 4]
        cmp ebx, dword ptr [edi + 8]
        jb L_005970d8
        call dword ptr [mem_00925134]
    L_005970d8:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ebx]
        add eax, 0x168
        push eax
        call ext_005A13C0
        cmp esi, dword ptr [edi + 4]
        ja L_005970f4
        call dword ptr [mem_00925134]
    L_005970f4:
        mov esi, ebx
        jmp L_00597091
    L_005970f8:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x26c]
        call ext_0047C0B0
        mov edi, dword ptr [esi + 0x26c]
        mov ebx, dword ptr [edi + 0x38]
        add edi, 0x30
        cmp dword ptr [edi + 4], ebx
        jbe L_0059711e
        call dword ptr [mem_00925134]
    L_0059711e:
        mov esi, dword ptr [edi + 4]
        cmp esi, dword ptr [edi + 8]
        jbe L_0059712c
        call dword ptr [mem_00925134]
    L_0059712c:
        cmp esi, ebx
        je L_0059713e
    L_00597130:
        mov ecx, dword ptr [esi]
        call ext_00455450
        add esi, 4
        cmp esi, ebx
        jne L_00597130
    L_0059713e:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00593D40] sub_00593D40 (78 bytes)
extern "C" __declspec(naked) int __stdcall fn_00593D40(int* p, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov eax, dword ptr [eax]
        sub eax, 0x1
        je _case1
        sub eax, 0x1
        je _case2
        sub eax, 0x1
        je _case3
        mov eax, dword ptr [esp + 0x10]
        ret 0x10
    _case3:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push eax
        push edx
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0x14], 0x2
        call fn_00593D40
        ret 0x10
    _case2:
        mov eax, dword ptr [esp + 0x8]
        ret 0x10
    _case1:
        mov eax, dword ptr [esp + 0xc]
        ret 0x10
    }
}

// [0x0059AB50] sub_0059AB50 (379 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_0059A9F0();
extern "C" void ext_00620C90();
extern "C" void ext_0063EFE0();
extern "C" int mem_00925134;
extern "C" int mem_00A9F41C;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059AB50(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        mov eax, dword ptr [esp + 0x48]
        cmp eax, 0xb53a34
        mov dword ptr [esp], ecx
        je loc_0059ACBA
        cmp eax, 0xb53b30
        je loc_0059ACBA
        cmp eax, 0xb53ab0
        je loc_0059ACBA
        cmp eax, 0xb53a70
        je loc_0059ACBA
        cmp eax, 0xb53af0
        je loc_0059ACBA
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [eax + 0x24]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe short loc_0059ABBC
        call ebp
    loc_0059ABBC:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe short loc_0059ABDB
        call ebp
    loc_0059ABDB:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        call ext_00427A60
        push ebx
    loc_0059ABF1:
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je short loc_0059ABFF
        cmp ebx, dword ptr [esp + 0x24]
        je short loc_0059AC01
    loc_0059ABFF:
        call ebp
    loc_0059AC01:
        mov esi, dword ptr [esp + 0x1c]
        cmp esi, dword ptr [esp + 0x28]
        jae loc_0059ACB6
        test ebx, ebx
        jne short loc_0059AC15
        call ebp
    loc_0059AC15:
        cmp esi, dword ptr [ebx + 0x8]
        jb short loc_0059AC1C
        call ebp
    loc_0059AC1C:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [mem_00A9F41C]
        push ecx
        add eax, 0x4
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je short loc_0059AC9A
        cmp esi, dword ptr [ebx + 0x8]
        jb short loc_0059AC3D
        call ebp
    loc_0059AC3D:
        mov eax, dword ptr [esi]
        push eax
        call ext_00620C90
        add esp, 0x4
        cmp esi, dword ptr [ebx + 0x8]
        mov edi, eax
        jb short loc_0059AC51
        call ebp
    loc_0059AC51:
        mov edx, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [esi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, eax
        call edx
        test edi, edi
        mov dword ptr [esp + 0x50], 0x0
        je short loc_0059AC88
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x2c]
        push eax
        push edi
        call ext_0059A9F0
    loc_0059AC88:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
    loc_0059AC9A:
        cmp esi, dword ptr [ebx + 0x8]
        jb short loc_0059ACA1
        call ebp
    loc_0059ACA1:
        add esi, 0x4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1c], esi
        call ext_00427A60
        jmp loc_0059ABF1
    loc_0059ACB6:
        pop ebx
        pop edi
        pop esi
        pop ebp
    loc_0059ACBA:
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}

extern "C" void ext_005B64E0();
extern "C" void ext_00660A50();
extern "C" void ext_00671F30();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A2FB78;
extern "C" int mem_00A2E2F8;

// [0x00593F90] sub_00593F90 (102 bytes)
extern "C" __declspec(naked) void __fastcall fn_00593F90(void* self) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00660A50
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        push 0x0
        push 0x0
        push 0x0
        push ecx
        mov ecx, eax
        call edx
        push 0x0
        push offset mem_00A2FB78
        push offset mem_00A2E2F8
        push 0x0
        push eax
        call ext_006A6E9E
        mov esi, dword ptr [esp + 0x20]
        add esp, 0x14
        test eax, eax
        je L_null
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        mov ecx, eax
        call ext_005B64E0
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_null:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0059C340] sub_0059C340 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_00595850();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C340(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00595850
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0059C3C0] sub_0059C3C0 (114 bytes)
extern "C" void ext_005958B0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C3C0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005958B0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0059C440] sub_0059C440 (114 bytes)
extern "C" void ext_00595910();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C440(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00595910
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0059C4C0] sub_0059C4C0 (114 bytes)
extern "C" void ext_00595970();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C4C0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00595970
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0059C540] sub_0059C540 (114 bytes)
extern "C" void ext_005959D0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C540(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005959D0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0059C5C0] sub_0059C5C0 (114 bytes)
extern "C" void ext_00595A30();

extern "C" __declspec(naked) void __fastcall fn_0059C5C0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00595A30
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x0059C640] sub_0059C640 (114 bytes)
extern "C" void ext_00595A90();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C640(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_00595A90
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005935A0] sub_005935A0 (136 bytes)
extern "C" void ext_00587FD0();
extern "C" void ext_0065F420();
extern "C" int mem_0095CEEC;
extern "C" int mem_0095CEA4;
extern "C" int mem_0095CE64;
extern "C" int mem_0095CE14;

extern "C" __declspec(naked) void* __fastcall fn_005935A0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a0588
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00587FD0
        lea eax, [edi + 0xe4]
        push eax
        lea ecx, [esi + 0xe4]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi], offset mem_0095CEEC
        mov dword ptr [esi + 0x4], offset mem_0095CEA4
        mov dword ptr [esi + 0x8], offset mem_0095CE64
        mov dword ptr [esi + 0xc], offset mem_0095CE14
        call ext_0065F420
        mov ecx, dword ptr [edi + 0xec]
        mov dword ptr [esi + 0xec], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xe8], 0xffffffff
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005973F0] sub_005973F0 (121 bytes)
extern "C" void ext_0049E700();
extern "C" void ext_00661B10();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005973F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xf4], 6
        jl done
        lea ecx, [esi + 0x1c8]
        mov dword ptr [esp + 4], ecx
        call ext_00661B10
        test al, al
        jne done
        push ebp
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x298
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe skip1
        call ebp
    skip1:
        push ebx
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loop_start:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe skip2
        call ebp
    skip2:
        cmp esi, esi
        je skip3
        call ebp
    skip3:
        cmp edi, ebx
        je loop_end
        cmp edi, dword ptr [esi + 8]
        jb skip4
        call ebp
    skip4:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi]
        push eax
        call ext_0049E700
        cmp edi, dword ptr [esi + 8]
        jb skip5
        call ebp
    skip5:
        add edi, 4
        jmp loop_start
    loop_end:
        pop ebx
        pop edi
        pop ebp
    done:
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_005864C0();
extern "C" void ext_00596330();
extern "C" void ext_005EED30();
extern "C" void ext_006A5C5C();
extern "C" int mem_008A0DA1;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_0095D9E4;

// [0x00598B10] sub_00598B10 (503 bytes)
extern "C" __declspec(naked) void __fastcall fn_00598B10(void* self) {
    __asm {
        push -1
        push offset mem_008A0DA1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr [esp + 0x10], ebp
        call ext_00596330
        mov esi, dword ptr [esp + 0x50]
        xor ebx, ebx
        cmp esi, ebx
        je L_598B74
        push offset mem_0095D9E4
        lea ecx, [esp + 0x28]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xC]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x4C], ebx
        call edx
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], 0xFFFFFFFF
        call dword ptr [mem_00924FF4]
    L_598B74:
        mov esi, dword ptr [ebp + 0x23C]
        add ebp, 0x238
        cmp esi, dword ptr [ebp + 0x8]
        jbe L_598B90
        call dword ptr [mem_00925134]
        jmp L_598B90
        _emit 0x8D
        _emit 0x49
        _emit 0x00
    L_598B90:
        mov edi, dword ptr [ebp + 0x8]
        cmp dword ptr [ebp + 0x4], edi
        jbe L_598B9E
        call dword ptr [mem_00925134]
    L_598B9E:
        cmp ebp, ebp
        je L_598BA8
        call dword ptr [mem_00925134]
    L_598BA8:
        cmp esi, edi
        je L_598C2A
        xor edi, edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1C], edi
        mov dword ptr [esp + 0x20], edi
        cmp esi, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0x48], 1
        jb L_598BCD
        call dword ptr [mem_00925134]
    L_598BCD:
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x14]
        push eax
        add ecx, 0x160
        call ext_005EED30
        mov ecx, dword ptr [esp + 0x18]
        cmp ecx, edi
        jne L_598BEB
        xor eax, eax
        jmp L_598BF4
    L_598BEB:
        mov eax, dword ptr [esp + 0x1C]
        sub eax, ecx
        sar eax, 2
    L_598BF4:
        add ebx, eax
        cmp ecx, edi
        mov dword ptr [esp + 0x48], 0xFFFFFFFF
        je L_598C0B
        push ecx
        call ext_006A5C5C
        add esp, 4
    L_598C0B:
        cmp esi, dword ptr [ebp + 0x8]
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1C], edi
        mov dword ptr [esp + 0x20], edi
        jb L_598C22
        call dword ptr [mem_00925134]
    L_598C22:
        add esi, 4
        jmp L_598B90
    L_598C2A:
        mov ecx, dword ptr [esp + 0x50]
        test ecx, ecx
        je L_598C3C
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push ebx
        push 0
        call eax
    L_598C3C:
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [mem_00925134]
        jbe L_598C50
        call ebx
        _emit 0x8D
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_598C50:
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], edi
        jbe L_598C5A
        call ebx
    L_598C5A:
        cmp ebp, ebp
        je L_598C60
        call ebx
    L_598C60:
        cmp esi, edi
        je L_598CF2
        cmp esi, dword ptr [ebp + 8]
        jb L_598C6F
        call ebx
    L_598C6F:
        mov ecx, dword ptr [esi]
        cmp byte ptr [ecx + 0x4E1], 0
        jne L_598CE3
        mov ebx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx + 0x26C]
        test eax, eax
        je L_598C8D
        lea edi, [eax + 8]
        jmp L_598C8F
    L_598C8D:
        xor edi, edi
    L_598C8F:
        cmp esi, dword ptr [ebp + 8]
        jb L_598C9A
        call dword ptr [mem_00925134]
    L_598C9A:
        mov ecx, dword ptr [esi]
        push edi
        add ecx, 4
        call ext_005864C0
        mov eax, dword ptr [ebx + 0x26C]
        test eax, eax
        je L_598CB4
        lea edi, [eax + 8]
        jmp L_598CB6
    L_598CB4:
        xor edi, edi
    L_598CB6:
        cmp esi, dword ptr [ebp + 8]
        jb L_598CC1
        call dword ptr [mem_00925134]
    L_598CC1:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xC]
        mov edx, dword ptr [edx + 0x20]
        lea ecx, [eax + 0xC]
        mov eax, dword ptr [esp + 0x50]
        push eax
        add ebx, 0x168
        push ebx
        push 1
        push edi
        call edx
        mov ebx, dword ptr [mem_00925134]
    L_598CE3:
        cmp esi, dword ptr [ebp + 8]
        jb L_598CEA
        call ebx
    L_598CEA:
        add esi, 4
        jmp L_598C50
    L_598CF2:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x3C
        ret 4
    }
}

// [0x00597150] sub_00597150 (126 bytes)
extern "C" void ext_00594040();
extern "C" void ext_005A3C10();
extern "C" void ext_00642510();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00597150(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea esi, [ebp + 0x238]
        push edi
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        jbe L_597170
        call dword ptr [mem_00925134]
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_597170:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_59717E
        call dword ptr [mem_00925134]
    L_59717E:
        cmp esi, esi
        je L_597188
        call dword ptr [mem_00925134]
    L_597188:
        cmp edi, ebx
        je L_5971B5
        cmp edi, dword ptr [esi + 8]
        jb L_597197
        call dword ptr [mem_00925134]
    L_597197:
        mov ecx, dword ptr [edi]
        lea eax, [ebp + 0x168]
        push eax
        call ext_005A3C10
        cmp edi, dword ptr [esi + 8]
        jb L_5971B0
        call dword ptr [mem_00925134]
    L_5971B0:
        add edi, 4
        jmp L_597170
    L_5971B5:
        mov ecx, dword ptr [ebp + 0xf8]
        call ext_00642510
        push 3
        mov ecx, ebp
        call ext_00594040
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0059A660] sub_0059A660 (624 bytes)
extern "C" void ext_00479550();
extern "C" void ext_00493720();
extern "C" void ext_00517510();
extern "C" void ext_005864C0();
extern "C" void ext_00587470();
extern "C" void ext_00599060();
extern "C" void ext_005990D0();
extern "C" void ext_00599E40();
extern "C" void ext_00599F80();
extern "C" void ext_0059A040();
extern "C" void ext_005DF5C0();
extern "C" void ext_006AD940();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void __fastcall fn_0059A660(void* self, int edx_unused, int a1) {
    __asm {
        push    -1
        push    0x008b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x44]
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE0]
        sub     esp, 0x1c
        mov     ecx, esp
        mov     dword ptr [esp + 0x30], esp
        push    edi
        mov     dword ptr [esp + 0x5c], 0
        call    dword ptr [mem_00924FE0]
        mov     eax, dword ptr [esi + 0x26c]
        lea     ecx, [eax + 0x18]
        call    ext_005DF5C0
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_A660_NZ
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x3c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        xor     al, al
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x4
    L_A660_NZ:
        mov     edi, dword ptr [esi + 0x26c]
        mov     ebp, dword ptr [mem_00925134]
        add     edi, 0x30
    L_A660_LOOP:
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, dword ptr [edi + 0x8]
        jbe     L_A660_G1
        call    ebp
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_A660_G1:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     L_A660_G2
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_A660_G2:
        test    edi, edi
        je      L_A660_G3
        cmp     edi, edi
        je      L_A660_G4
    L_A660_G3:
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_A660_G4:
        cmp     ebx, dword ptr [esp + 0x14]
        je      L_A660_FOUNDEND
        test    edi, edi
        jne     L_A660_G5
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_A660_G5:
        cmp     ebx, dword ptr [edi + 0x8]
        jb      L_A660_G6
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_A660_G6:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [eax + 0x168], ecx
        jne     L_A660_SKIP
        cmp     ebx, dword ptr [edi + 0x8]
        jb      L_A660_G7
        call    ebp
    L_A660_G7:
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [esi + 0x26c]
        push    edx
        call    ext_00479550
        jmp     L_A660_LOOP
    L_A660_SKIP:
        cmp     ebx, dword ptr [edi + 0x8]
        jb      L_A660_G8
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_A660_G8:
        add     ebx, 0x4
        jmp     L_A660_G1
    L_A660_FOUNDEND:
        mov     ecx, dword ptr [esi + 0x2dc]
        test    ecx, ecx
        je      L_A660_NOCB
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    ext_00517510
    L_A660_NOCB:
        mov     eax, dword ptr [esi + 0x26c]
        test    eax, eax
        je      L_A660_ZERO
        add     eax, 0x8
        jmp     L_A660_AFTER
    L_A660_ZERO:
        xor     eax, eax
    L_A660_AFTER:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x4
        push    eax
        mov     ecx, edi
        call    ext_005864C0
        lea     edx, [esp + 0x10]
        lea     ecx, [esi + 0x2cc]
        push    edx
        mov     dword ptr [esp + 0x18], ecx
        call    ext_00599060
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        mov     ecx, esi
        call    ext_00599E40
        push    edi
        mov     ecx, esi
        call    ext_00587470
        mov     edi, dword ptr [esi + 0x240]
        cmp     dword ptr [esi + 0x23c], edi
        jbe     L_A660_G9
        call    ebp
    L_A660_G9:
        mov     ebx, dword ptr [esi + 0x23c]
        cmp     ebx, dword ptr [esi + 0x240]
        jbe     L_A660_G10
        call    ebp
    L_A660_G10:
        cmp     ebx, edi
        mov     ecx, ebx
        je      L_A660_ERASE
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_A660_SEARCH:
        mov     edx, dword ptr [ecx]
        cmp     edx, dword ptr [esp + 0x10]
        je      L_A660_ERASE
        add     ecx, 0x4
        cmp     ecx, edi
        jne     L_A660_SEARCH
    L_A660_ERASE:
        mov     eax, dword ptr [esi + 0x240]
        lea     edx, [ecx + 0x4]
        sub     eax, edx
        sar     eax, 0x2
        test    eax, eax
        jle     L_A660_NOMOVE
        add     eax, eax
        add     eax, eax
        push    eax
        push    edx
        push    eax
        push    ecx
        call    dword ptr [mem_009251EC]
        add     esp, 0x10
    L_A660_NOMOVE:
        add     dword ptr [esi + 0x240], -0x4
        sub     esp, 0x1c
        lea     eax, [esp + 0x34]
        mov     ecx, esp
        mov     dword ptr [esp + 0x60], esp
        push    eax
        call    dword ptr [mem_00924FE0]
        mov     eax, dword ptr [esi + 0x26c]
        lea     ecx, [eax + 0x524]
        call    ext_005990D0
        sub     esp, 0x1c
        lea     edx, [esp + 0x34]
        mov     ecx, esp
        mov     dword ptr [esp + 0x60], esp
        push    edx
        call    dword ptr [mem_00924FE0]
        mov     eax, dword ptr [esi + 0x26c]
        lea     ecx, [eax + 0x18]
        call    ext_0059A040
        mov     esi, dword ptr [esi + 0x26c]
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    ext_006AD940
        mov     ecx, eax
        call    ext_00493720
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        call    ext_00599F80
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x3c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x30
        ret     0x4
    }
}

// [0x005975A0] sub_005975A0 (138 bytes)
extern "C" void ext_00594640();
extern "C" void ext_005A17D0();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005975A0(void* self, int edx_unused, const void* vec) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x10], ecx
        jbe     L_5975C0
        call    ebp
        _emit   0x8d
        _emit   0x49
        _emit   0x00
    L_5975C0:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     L_5975D0
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_5975D0:
        test    edi, edi
        je      L_5975D8
        cmp     edi, edi
        je      L_5975E0
    L_5975D8:
        call    ebp
        mov     ebp, dword ptr [mem_00925134]
    L_5975E0:
        cmp     esi, ebx
        je      L_597622
        test    edi, edi
        jne     L_5975EA
        call    ebp
    L_5975EA:
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_5975F8
        call    ebp
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_5975F8
        call    ebp
    L_5975F8:
        mov     edx, dword ptr [mem_00B40640]
        mov     eax, dword ptr [esi]
        push    edx
        lea     ecx, [eax + 0x64]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x1C]
        call    ext_00594640
        mov     ecx, eax
        call    ext_005A17D0
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_59761D
        call    ebp
    L_59761D:
        add     esi, 0x4
        jmp     L_5975C0
    L_597622:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}

// [0x00592DD0] sub_00592DD0 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00592DD0(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa86f48
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_592E23
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_592E23:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x0059CFF0] sub_0059CFF0 (140 bytes)
extern "C" void ext_00474F00();
extern "C" void ext_00476360();
extern "C" void ext_00662610();
extern "C" int mem_00924FD4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059CFF0(void* self) {
    __asm {
        push    -0x1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    esi
        lea     eax, [esp + 0x4]
        push    0xa875f8
        push    eax
        mov     esi, ecx
        call    ext_00662610
        add     esp, 0x8
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x28], 0x0
        je      L_59D043
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    ext_00474F00
        mov     ecx, eax
        call    dword ptr [mem_00924FD4]
    L_59D043:
        lea     edx, [esp + 0x4]
        push    edx
        lea     ecx, [esi + 0x8]
        call    ext_00476360
        mov     esi, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x0059B400] sub_0059B400 (161 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_0041DFC0();
extern "C" int mem_00892ED9;
extern "C" int mem_009D1278;

extern "C" __declspec(naked) bool __fastcall fn_0059B400(void* self, int edx_unused, int* a1, int* a2, bool a3) {
    __asm {
        push    -1
        push    offset mem_00892ED9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4c
        mov     edx, dword ptr [esp + 0x60]
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 4], eax
        mov     eax, dword ptr [edx]
        lea     edx, [esp + 4]
        push    edx
        mov     dword ptr [esp + 0xc], eax
        call    ext_0041DFC0
        test    al, al
        je      L_not_found
        mov     al, 1
        pop     esi
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x58
        ret     0xc
    L_not_found:
        cmp     byte ptr [esp + 0x68], 0
        je      L_ret_false
        mov     eax, dword ptr [esi]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    ext_00664C30
        add     esp, 8
        push    eax
        mov     dword ptr [esp + 0x5c], 0
        call    ext_005947B0
        push    eax
        lea     ecx, [esp + 0x30]
        call    ext_004142E0
        push    offset mem_009D1278
        lea     edx, [esp + 0x2c]
        push    edx
        call    ext_006A6DD2
    L_ret_false:
        mov     ecx, dword ptr [esp + 0x50]
        xor     al, al
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x58
        ret     0xc
    }
}

// [0x0059A140] sub_0059A140 (141 bytes)
extern "C" void ext_004B67E0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0059A140(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        test    edi, edi
        je      L_0059A15E
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, eax
        sub     ecx, edi
        sar     ecx, 2
        jne     L_0059A162
    L_0059A15E:
        xor     ebx, ebx
        jmp     L_0059A183
    L_0059A162:
        cmp     edi, eax
        jbe     L_0059A16C
        call    dword ptr [mem_00925134]
    L_0059A16C:
        test    ebp, ebp
        je      L_0059A174
        cmp     ebp, esi
        je      L_0059A17A
    L_0059A174:
        call    dword ptr [mem_00925134]
    L_0059A17A:
        mov     ebx, dword ptr [esp + 0x20]
        sub     ebx, edi
        sar     ebx, 2
    L_0059A183:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    1
        push    eax
        push    ebp
        mov     ecx, esi
        call    ext_004B67E0
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_0059A1A5
        call    dword ptr [mem_00925134]
    L_0059A1A5:
        mov     dword ptr [esp + 0x20], edi
        lea     edi, [edi + 4*ebx]
        cmp     edi, dword ptr [esi + 0x8]
        ja      L_0059A1B6
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_0059A1BC
    L_0059A1B6:
        call    dword ptr [mem_00925134]
    L_0059A1BC:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], edi
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}

// [0x0059B4B0] sub_0059B4B0 (239 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_00527AC0();
extern "C" void ext_00587920();
extern "C" void ext_0059B400();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0059B4B0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esi + 0x238]
        mov dword ptr [esp + 0x10], esi
        call ext_0041A920
        mov ebx, dword ptr [esp + 0x18]
        test ebx, ebx
        je L_null
        lea eax, [ebx + 0x4]
        jmp L_join
    L_null:
        xor eax, eax
    L_join:
        push ebp
        push edi
        push 0
        push eax
        mov ecx, esi
        call ext_00587920
        mov eax, dword ptr [esi + 0x2d0]
        lea edi, [esi + 0x2cc]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 0x10], ebp
        je L_after
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        sar ecx, 3
        je L_after
        mov esi, eax
    L_loop:
        cmp esi, dword ptr [edi + 0x8]
        jbe L_c1
        call dword ptr [mem_00925134]
    L_c1:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_c2
        call dword ptr [mem_00925134]
    L_c2:
        test edi, edi
        je L_c3
        cmp edi, edi
        je L_c4
    L_c3:
        call dword ptr [mem_00925134]
    L_c4:
        cmp esi, ebx
        je L_end
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne L_c5
        call ebx
    L_c5:
        cmp esi, dword ptr [edi + 0x8]
        jb L_c6
        call ebx
    L_c6:
        cmp dword ptr [esi + 0x4], ebp
        jle L_c7
        cmp esi, dword ptr [edi + 0x8]
        jb L_c8
        call ebx
    L_c8:
        mov ebp, dword ptr [esi + 0x4]
    L_c7:
        cmp esi, dword ptr [edi + 0x8]
        jb L_c9
        call ebx
    L_c9:
        add esi, 0x8
        jmp L_c1
    L_end:
        mov ebx, dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x14]
        add ebp, 0x1
        mov dword ptr [esp + 0x10], ebp
    L_after:
        push 1
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call ext_0059B400
        mov ecx, dword ptr [esi + 0x2dc]
        test ecx, ecx
        pop edi
        pop ebp
        je L_skip
        push 0
        push ebx
        call ext_00527AC0
    L_skip:
        pop esi
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x00597860] sub_00597860 (141 bytes)
extern "C" void ext_00597860();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00597860(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp byte ptr [edi + 0x31], 0
        mov ebx, ecx
        mov esi, edi
        jne done_
    loop_:
        mov eax, dword ptr [esi + 0x8]
        push eax
        mov ecx, ebx
        call ext_00597860
        mov esi, dword ptr [esi]
        lea ebp, [edi + 0xc]
        mov dword ptr [esp + 0x20], ebp
        cmp dword ptr [ebp + 0x20], 0
        lea eax, [ebp + 0x1c]
        mov dword ptr [esp + 0x18], 0
        je skip_
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    skip_:
        mov ecx, ebp
        mov dword ptr [esp + 0x18], -1
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x31], 0
        mov edi, esi
        je loop_
    done_:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x005978F0] sub_005978F0 (141 bytes)
extern "C" void ext_005978F0();
extern "C" void ext_00682FD0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005978F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp byte ptr [edi + 0xb9], 0
        mov ebx, ecx
        mov esi, edi
        jne done_
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_:
        mov eax, dword ptr [esi + 0x8]
        push eax
        mov ecx, ebx
        call ext_005978F0
        mov esi, dword ptr [esi]
        lea ebp, [edi + 0xc]
        mov dword ptr [esp + 0x20], ebp
        lea ecx, [ebp + 0x1c]
        mov dword ptr [esp + 0x18], 0
        call ext_00682FD0
        mov ecx, ebp
        mov dword ptr [esp + 0x18], -1
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0xb9], 0
        mov edi, esi
        je loop_
    done_:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x00599210] sub_00599210 (203 bytes)
extern "C" void ext_00595AF0();
extern "C" void ext_005978F0();
extern "C" void ext_00597980();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00599210(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_59922A
        cmp edi, esi
        je L_599230
L_59922A:
        call dword ptr [mem_00925134]
L_599230:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_599291
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_599247
        cmp eax, esi
        je L_59924D
L_599247:
        call dword ptr [mem_00925134]
L_59924D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_599291
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_005978F0
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_599291:
        test edi, edi
        je L_59929B
        cmp edi, dword ptr [esp + 0x28]
        je L_5992A1
L_59929B:
        call dword ptr [mem_00925134]
L_5992A1:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_5992C8
        lea ecx, [esp + 0x20]
        call ext_00595AF0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00597980
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_599291
L_5992C8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x005994F0] sub_005994F0 (203 bytes)
extern "C" void ext_005943D0();
extern "C" void ext_005966C0();
extern "C" void ext_00597860();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005994F0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_59950A
        cmp edi, esi
        je L_599510
L_59950A:
        call dword ptr [mem_00925134]
L_599510:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_599571
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_599527
        cmp eax, esi
        je L_59952D
L_599527:
        call dword ptr [mem_00925134]
L_59952D:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_599571
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_00597860
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
L_599571:
        test edi, edi
        je L_59957B
        cmp edi, dword ptr [esp + 0x28]
        je L_599581
L_59957B:
        call dword ptr [mem_00925134]
L_599581:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_5995A8
        lea ecx, [esp + 0x20]
        call ext_005943D0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_005966C0
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_599571
L_5995A8:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x00592900] sub_00592900 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B3F9A8;
extern "C" int mem_00B3F9A4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00592900(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0097
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9A8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9A8], 0x1
        mov     ecx, offset mem_00B3F9A4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9A4], 0x95c10c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9A4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x005929B0] sub_005929B0 (165 bytes)
extern "C" int mem_00B3F9B0;
extern "C" int mem_00B3F9AC;
extern "C" __declspec(naked) void __fastcall fn_005929B0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a00c7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9B0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9B0], 0x1
        mov     ecx, offset mem_00B3F9AC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9AC], 0x95c2bc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9AC
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00592A60] sub_00592A60 (165 bytes)
extern "C" int mem_00B3F9B8;
extern "C" int mem_00B3F9B4;
extern "C" __declspec(naked) void __fastcall fn_00592A60(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a00f7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9B8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9B8], 0x1
        mov     ecx, offset mem_00B3F9B4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9B4], 0x95c46c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9B4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00592B10] sub_00592B10 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B3F9C0;
extern "C" int mem_00B3F9BC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00592B10(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0127
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9C0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9C0], 0x1
        mov     ecx, offset mem_00B3F9BC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9BC], 0x95c61c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9BC
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00592BC0] sub_00592BC0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B3F9C8;
extern "C" int mem_00B3F9C4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00592BC0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0157
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9C8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9C8], 0x1
        mov     ecx, offset mem_00B3F9C4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9C4], 0x95c7cc
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9C4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00592C70] sub_00592C70 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B3F9D0;
extern "C" int mem_00B3F9CC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00592C70(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0187
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9D0], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9D0], 0x1
        mov     ecx, offset mem_00B3F9CC
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9CC], 0x95c97c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9CC
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x00592D20] sub_00592D20 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B3F9D8;
extern "C" int mem_00B3F9D4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00592D20(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a01b7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B3F9D8], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B3F9D8], 0x1
        mov     ecx, offset mem_00B3F9D4
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B3F9D4], 0x95cb2c
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B3F9D4
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0059C6C0] sub_0059C6C0 (165 bytes)
extern "C" void ext_00475960();
extern "C" void ext_0067A670();
extern "C" int mem_00B41410;
extern "C" int mem_00B4140C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C6C0(void* self, int edx_unused, const char* arg) {
    __asm {
        mov     eax, dword ptr fs:[0x0]
        push    -0x1
        push    0x8a0fa7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x20
        test    byte ptr [mem_00B41410], 0x1
        push    esi
        mov     esi, ecx
        jne     label_1
        or      dword ptr [mem_00B41410], 0x1
        mov     ecx, offset mem_00B4140C
        mov     dword ptr [esp + 0x2c], 0x0
        call    ext_0067A670
        mov     dword ptr [mem_00B4140C], 0x95d914
        mov     dword ptr [esp + 0x2c], 0xffffffff
    label_1:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], offset mem_00B4140C
        call    dword ptr [mem_00924FE4]
        push    0x1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0x1
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x2c
        ret     0x4
    }
}

// [0x0059D080] sub_0059D080 (147 bytes)
extern "C" void ext_0059C2C0();
extern "C" void ext_0059C340();
extern "C" void ext_0059C3C0();
extern "C" void ext_0059C440();
extern "C" void ext_0059C4C0();
extern "C" void ext_0059C540();
extern "C" void ext_0059C5C0();
extern "C" void ext_0059C640();
extern "C" void ext_0059C6C0();
extern "C" void ext_0059CFF0();
extern "C" void ext_006798D0();
extern "C" int mem_0095DCE8;
extern "C" int mem_0095DCDC;
extern "C" int mem_0095DCD0;
extern "C" int mem_0095DA88;
extern "C" int mem_0095DCC4;
extern "C" int mem_0095DCB8;
extern "C" int mem_0095DCAC;
extern "C" int mem_0095DC98;
extern "C" int mem_0095DC80;

extern "C" __declspec(naked) void __fastcall fn_0059D080(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_0059CFF0
        push offset mem_0095DCE8
        lea ecx, [esp + 4]
        call ext_0059C2C0
        push offset mem_0095DCDC
        lea ecx, [esp + 4]
        call ext_0059C340
        push offset mem_0095DCD0
        lea ecx, [esp + 4]
        call ext_0059C3C0
        push offset mem_0095DA88
        lea ecx, [esp + 4]
        call ext_0059C440
        push offset mem_0095DCC4
        lea ecx, [esp + 4]
        call ext_0059C4C0
        push offset mem_0095DCB8
        lea ecx, [esp + 4]
        call ext_0059C540
        push offset mem_0095DCAC
        lea ecx, [esp + 4]
        call ext_0059C5C0
        push offset mem_0095DC98
        lea ecx, [esp + 4]
        call ext_0059C640
        push offset mem_0095DC80
        lea ecx, [esp + 4]
        call ext_0059C6C0
        pop ecx
        ret
    }
}

// [0x0059CC80] sub_0059CC80 (844 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_004E51E0();
extern "C" void ext_005877B0();
extern "C" void ext_00599210();
extern "C" void ext_005994F0();
extern "C" void ext_0059C770();
extern "C" void ext_0059DBA0();
extern "C" void ext_005AEC70();
extern "C" void ext_006246B0();
extern "C" void ext_0065C660();
extern "C" void ext_00675650();
extern "C" void ext_006829D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00AEE8A8;
extern "C" int mem_00925134;
extern "C" int mem_00B40640;
extern "C" int mem_00B40644;
extern "C" int mem_00B40D08;

extern "C" __declspec(naked) void __fastcall fn_0059CC80(void* self) {
    __asm {
        push -1
        push 0x008a122f
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esi], 0x0095dba4
        mov dword ptr [esi + 0x4], 0x0095db5c
        mov dword ptr [esi + 0x8], 0x0095db1c
        mov dword ptr [esi + 0xc], 0x0095dacc
        mov dword ptr [esi + 0xe8], 0x0095daa0
        xor ebx, ebx
        push ebx
        mov dword ptr [esp + 0x2c], 0x12
        mov dword ptr [mem_00AEE8A8], ebx
        call ext_006829D0
        mov edi, dword ptr [esi + 0x23c]
        lea ebp, [esi + 0x238]
        add esp, 4
        cmp edi, dword ptr [ebp + 8]
        jbe L_59cd00
        call dword ptr [mem_00925134]
        jmp L_59cd00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_59cd00:
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_59cd12
        call dword ptr [mem_00925134]
    L_59cd12:
        cmp ebp, ebp
        je L_59cd1c
        call dword ptr [mem_00925134]
    L_59cd1c:
        cmp edi, dword ptr [esp + 0x14]
        je L_59cd45
        cmp edi, dword ptr [ebp + 8]
        jb L_59cd2d
        call dword ptr [mem_00925134]
    L_59cd2d:
        mov ecx, dword ptr [edi]
        push ebx
        call ext_0059DBA0
        cmp edi, dword ptr [ebp + 8]
        jb L_59cd40
        call dword ptr [mem_00925134]
    L_59cd40:
        add edi, 4
        jmp L_59cd00
    L_59cd45:
        push ebx
        mov ecx, esi
        call ext_0059C770
        mov dword ptr [mem_00B40640], ebx
        mov dword ptr [mem_00B40644], ebx
        mov dword ptr [mem_00B40D08], ebx
        mov eax, dword ptr [esi + 0x300]
        cmp eax, ebx
        je L_59cd72
        push eax
        call ext_006A5C5C
        add esp, 4
    L_59cd72:
        mov dword ptr [esi + 0x300], ebx
        mov dword ptr [esi + 0x304], ebx
        mov dword ptr [esi + 0x308], ebx
        mov ecx, dword ptr [esi + 0x2f8]
        cmp ecx, ebx
        mov byte ptr [esp + 0x28], 0x10
        je L_59cd9b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_59cd9b:
        mov ecx, dword ptr [esi + 0x2dc]
        cmp ecx, ebx
        mov byte ptr [esp + 0x28], 0xf
        je L_59cdb2
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_59cdb2:
        mov eax, dword ptr [esi + 0x2d0]
        cmp eax, ebx
        je L_59cdc5
        push eax
        call ext_006A5C5C
        add esp, 4
    L_59cdc5:
        lea ecx, [esi + 0x2bc]
        mov dword ptr [esi + 0x2d0], ebx
        mov dword ptr [esi + 0x2d4], ebx
        mov dword ptr [esi + 0x2d8], ebx
        mov byte ptr [esp + 0x28], 0xd
        call ext_006246B0
        mov edi, dword ptr [esi + 0x2ac]
        cmp edi, ebx
        mov byte ptr [esp + 0x28], 0xc
        je L_59ce28
        mov eax, dword ptr [esi + 0x2b0]
        cmp edi, eax
        mov dword ptr [esp + 0x14], eax
        je L_59ce19
    L_59ce04:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        push ebx
        mov ecx, edi
        call edx
        add edi, 0x168
        cmp edi, dword ptr [esp + 0x14]
        jne L_59ce04
    L_59ce19:
        mov eax, dword ptr [esi + 0x2ac]
        push eax
        call ext_006A5C5C
        add esp, 4
    L_59ce28:
        lea ecx, [esi + 0x298]
        mov dword ptr [esi + 0x2ac], ebx
        mov dword ptr [esi + 0x2b0], ebx
        mov dword ptr [esi + 0x2b4], ebx
        mov byte ptr [esp + 0x28], 0xb
        call ext_006246B0
        lea edi, [esi + 0x28c]
        mov dword ptr [esi + 0x288], 0x0095da28
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x3c], 0xa
        call ext_005994F0
        mov eax, dword ptr [edi + 4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        add esp, 4
        lea edi, [esi + 0x27c]
        mov dword ptr [esi + 0x278], 0x0095da20
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x3c], 9
        call ext_00599210
        mov eax, dword ptr [edi + 4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        mov edi, dword ptr [esi + 0x274]
        add esp, 4
        cmp edi, ebx
        mov byte ptr [esp + 0x28], 8
        je L_59cee1
        mov ecx, edi
        call ext_00675650
        push edi
        call ext_006A5C5C
        add esp, 4
    L_59cee1:
        mov ecx, dword ptr [esi + 0x270]
        cmp ecx, ebx
        mov byte ptr [esp + 0x28], 7
        je L_59cef8
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
    L_59cef8:
        mov ecx, dword ptr [esi + 0x26c]
        cmp ecx, ebx
        mov byte ptr [esp + 0x28], 6
        je L_59cf0f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
    L_59cf0f:
        mov ecx, dword ptr [esi + 0x268]
        cmp ecx, ebx
        mov byte ptr [esp + 0x28], 5
        je L_59cf26
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
    L_59cf26:
        lea ecx, [esi + 0x258]
        mov byte ptr [esp + 0x28], 4
        call ext_00493D90
        lea edi, [esi + 0x24c]
        mov dword ptr [esi + 0x248], 0x0095da18
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x3c], 3
        call ext_005AEC70
        mov eax, dword ptr [edi + 4]
        push eax
        call ext_006A5C5C
        mov dword ptr [edi + 4], ebx
        mov dword ptr [edi + 8], ebx
        mov eax, dword ptr [ebp + 4]
        add esp, 4
        cmp eax, ebx
        je L_59cf82
        push eax
        call ext_006A5C5C
        add esp, 4
    L_59cf82:
        lea ecx, [esi + 0xfc]
        mov dword ptr [ebp + 4], ebx
        mov dword ptr [ebp + 8], ebx
        mov dword ptr [ebp + 0xc], ebx
        mov byte ptr [esp + 0x28], 1
        call ext_004E51E0
        lea ecx, [esi + 0xe8]
        mov byte ptr [esp + 0x28], bl
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_005877B0
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x00592E60] sub_00592E60 (1723 bytes)
extern "C" void ext_00592900();
extern "C" void ext_005929b0();
extern "C" void ext_00592a60();
extern "C" void ext_00592b10();
extern "C" void ext_00592bc0();
extern "C" void ext_00592c70();
extern "C" void ext_00592d20();
extern "C" void ext_00592dd0();
extern "C" void ext_005a9e30();
extern "C" void ext_005ac220();
extern "C" void ext_005df0e0();
extern "C" void ext_006790c0();
extern "C" int mem_00A9F8D8;
extern "C" int mem_00A9F934;
extern "C" int mem_00A9F938;
extern "C" int mem_00A9F93C;
extern "C" int mem_00A9FA64;
extern "C" int mem_00A9FA68;
extern "C" int mem_00A9FA78;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9EFA0;

extern "C" __declspec(naked) void __fastcall fn_00592E60(void* self) {
    __asm {
        push	-0x1
        push	0x8a02de
        mov	eax, dword ptr fs:[0x0]
        push	eax
        mov	dword ptr fs:[0x0], esp
        sub	esp, 0x74
        push	ebx
        push	esi
        mov	esi, dword ptr [esp + 0x8c]
        push	edi
        push	0x95a188
        lea	eax, [esp + 0x10]
        push	eax
        mov	ecx, esi
        call	ext_00592dd0
        mov	ecx, dword ptr [mem_00A9F8D8]
        push	ecx
        lea	ecx, [esp + 0x10]
        call	ext_00592900
        mov	edx, dword ptr [mem_00A9F934]
        push	edx
        lea	ecx, [esp + 0x10]
        call	ext_005929b0
        mov	eax, dword ptr [mem_00A9F938]
        push	eax
        lea	ecx, [esp + 0x10]
        call	ext_00592a60
        mov	ecx, dword ptr [mem_00A9F93C]
        push	ecx
        lea	ecx, [esp + 0x10]
        call	ext_00592b10
        mov	edx, dword ptr [mem_00A9FA64]
        push	edx
        lea	ecx, [esp + 0x10]
        call	ext_00592bc0
        mov	eax, dword ptr [mem_00A9FA68]
        push	eax
        lea	ecx, [esp + 0x10]
        call	ext_00592c70
        mov	ecx, dword ptr [mem_00A9FA78]
        push	ecx
        lea	ecx, [esp + 0x10]
        call	ext_00592d20
        push	esi
        call	ext_005ac220
        push	esi
        call	ext_005df0e0
        push	esi
        call	ext_005a9e30
        add	esp, 0xc
        push	0x95cddc
        lea	ecx, [esp + 0x30]
        call	dword ptr [mem_00924FE4]
        xor	ebx, ebx
        push	0x945310
        lea	ecx, [esp + 0x14]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x2c]
        push	edx
        lea	eax, [esp + 0x14]
        push	eax
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x1
        call	ext_006790c0
        lea	ecx, [esp + 0x10]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        or	edi, -0x1
        lea	ecx, [esp + 0x2c]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cdc8
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x2
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	ecx, [esp + 0x10]
        mov	byte ptr [esp + 0x88], 0x3
        push	ecx
        lea	edx, [esp + 0x30]
        push	edx
        mov	ecx, esi
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cdb0
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x4
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	eax, [esp + 0x10]
        push	eax
        lea	ecx, [esp + 0x30]
        push	ecx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x5
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cda0
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x6
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x10]
        push	edx
        lea	eax, [esp + 0x30]
        push	eax
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x7
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cd88
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x8
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	ecx, [esp + 0x10]
        push	ecx
        lea	edx, [esp + 0x30]
        push	edx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x9
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x929afc
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0xa
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	eax, [esp + 0x10]
        push	eax
        lea	ecx, [esp + 0x30]
        push	ecx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0xb
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cd74
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0xc
        push	0x95cd5c
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x10]
        push	edx
        lea	eax, [esp + 0x30]
        push	eax
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0xd
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cd4c
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0xe
        push	0x95cd5c
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	ecx, [esp + 0x10]
        push	ecx
        lea	edx, [esp + 0x30]
        push	edx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0xf
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cd40
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x10
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	eax, [esp + 0x10]
        mov	byte ptr [esp + 0x88], 0x11
        push	eax
        lea	ecx, [esp + 0x30]
        push	ecx
        mov	ecx, esi
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cd34
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x12
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x10]
        push	edx
        lea	eax, [esp + 0x30]
        push	eax
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x13
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [mem_00A9EFA0]
        push	ecx
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x14
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x10]
        push	edx
        lea	eax, [esp + 0x30]
        push	eax
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x15
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cd10
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x16
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	ecx, [esp + 0x10]
        push	ecx
        lea	edx, [esp + 0x30]
        push	edx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x17
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95ccf0
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x18
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	eax, [esp + 0x10]
        push	eax
        lea	ecx, [esp + 0x30]
        push	ecx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x19
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95cce0
        lea	ecx, [esp + 0x14]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x1a
        push	0x945310
        lea	ecx, [esp + 0x30]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	edx, [esp + 0x10]
        push	edx
        lea	eax, [esp + 0x30]
        push	eax
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x1b
        call	ext_006790c0
        lea	ecx, [esp + 0x2c]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x10]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        push	0x95ccd4
        lea	ecx, [esp + 0x68]
        call	dword ptr [mem_00924FE4]
        mov	ebx, 0x1c
        push	0x945310
        lea	ecx, [esp + 0x4c]
        mov	dword ptr [esp + 0x8c], ebx
        call	dword ptr [mem_00924FE4]
        lea	ecx, [esp + 0x64]
        push	ecx
        lea	edx, [esp + 0x4c]
        push	edx
        mov	ecx, esi
        mov	byte ptr [esp + 0x90], 0x1d
        call	ext_006790c0
        lea	ecx, [esp + 0x48]
        mov	byte ptr [esp + 0x88], bl
        call	dword ptr [mem_00924FF4]
        lea	ecx, [esp + 0x64]
        mov	dword ptr [esp + 0x88], edi
        call	dword ptr [mem_00924FF4]
        mov	ecx, dword ptr [esp + 0x80]
        pop	edi
        pop	esi
        pop	ebx
        mov	dword ptr fs:[0x0], ecx
        add	esp, 0x80
        ret
    }
}


// [0x0059B6E0] sub_0059B6E0 (283 bytes)
extern "C" void ext_00466870();
extern "C" void ext_00466F00();
extern "C" void ext_00594640();
extern "C" void ext_005A17D0();
extern "C" void ext_006619D0();
extern "C" void ext_00661F70();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0059B6E0(void* self) {
    __asm {
        push	-0x1
        push	0x8a0e80
        mov	eax, dword ptr fs:[0x0]
        push	eax
        mov	dword ptr fs:[0x0], esp
        sub	esp, 0x6c
        push	ebx
        push	ebp
        push	esi
        push	edi
        mov	edi, ecx
        lea	esi, [edi + 0x168]
        push	esi
        lea	ecx, [esp + 0x20]
        mov	dword ptr [esp + 0x1c], esi
        call	ext_00466F00
        push	0x1
        mov	ecx, esi
        mov	dword ptr [esp + 0x88], 0x0
        call	ext_00661F70
        mov	esi, dword ptr [edi + 0x26c]
        mov	eax, dword ptr [esi + 0x528]
        mov	ebp, dword ptr [eax]
        add	esi, 0x524
        mov	dword ptr [esp + 0x14], ebp
        mov	dword ptr [esp + 0x10], esi

loc_59B742:
        mov	eax, dword ptr [edi + 0x26c]
        mov	ebx, dword ptr [eax + 0x528]
        add	eax, 0x524
        test	esi, esi
        je	short loc_59B75B
        cmp	esi, eax
        je	short loc_59B761

loc_59B75B:
        call	dword ptr [mem_00925134]

loc_59B761:
        cmp	ebp, ebx
        je	short loc_59B7B4
        test	esi, esi
        jne	short loc_59B76F
        call	dword ptr [mem_00925134]

loc_59B76F:
        cmp	ebp, dword ptr [esi + 0x4]
        jne	short loc_59B77A
        call	dword ptr [mem_00925134]

loc_59B77A:
        cmp	ebp, dword ptr [esi + 0x4]
        lea	ebx, [ebp + 0xc]
        jne	short loc_59B788
        call	dword ptr [mem_00925134]

loc_59B788:
        mov	eax, dword ptr [mem_00B40640]
        mov	ecx, dword ptr [ebx + 0x1c]
        push	eax
        push	ecx
        push	ebx
        mov	ecx, edi
        call	ext_00594640
        mov	ecx, eax
        call	ext_005A17D0
        lea	ecx, [esp + 0x10]
        call	ext_00673C20
        mov	ebp, dword ptr [esp + 0x14]
        mov	esi, dword ptr [esp + 0x10]
        jmp	short loc_59B742

loc_59B7B4:
        mov	ecx, dword ptr [esp + 0x18]
        lea	edx, [esp + 0x1c]
        push	edx
        mov	dword ptr [esp + 0x88], 0x1
        call	ext_006619D0
        mov	eax, dword ptr [esp + 0x18]
        lea	ecx, [esp + 0x1c]
        mov	byte ptr [eax], 0x1
        mov	dword ptr [esp + 0x84], 0xffffffff
        call	ext_00466870
        mov	ecx, dword ptr [esp + 0x7c]
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        mov	dword ptr fs:[0x0], ecx
        add	esp, 0x78
        ret
    }
}

extern "C" void ext_005A1640();
extern "C" void ext_00642600();
extern "C" int mem_00925134;

// [0x00596FC0] sub_00596FC0 (160 bytes)
extern "C" __declspec(naked) void __fastcall fn_00596FC0(void* self) {
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp + 0xf8]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        call    ext_00642600
        mov     esi, dword ptr [ebp + 0x240]
        add     ebp, 0x238
        cmp     dword ptr [ebp + 0x4], esi
        jbe     short loc_596FEF
        call    dword ptr [mem_00925134]

loc_596FEF:
        mov     edi, ebp

loc_596FF1:
        mov     ebx, dword ptr [ebp + 0x4]
        cmp     ebx, dword ptr [ebp + 0x8]
        jbe     short loc_596FFF
        call    dword ptr [mem_00925134]

loc_596FFF:
        test    edi, edi
        je      short loc_597007
        cmp     edi, ebp
        je      short loc_59700D

loc_597007:
        call    dword ptr [mem_00925134]

loc_59700D:
        cmp     esi, ebx
        je      short loc_597058
        test    edi, edi
        mov     dword ptr [esp + 0x18], esi
        jne     short loc_59701F
        call    dword ptr [mem_00925134]

loc_59701F:
        cmp     esi, dword ptr [edi + 0x4]
        ja      short loc_59702A
        call    dword ptr [mem_00925134]

loc_59702A:
        lea     ebx, [esi - 0x4]
        cmp     ebx, dword ptr [edi + 0x8]
        jb      short loc_597038
        call    dword ptr [mem_00925134]

loc_597038:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebx]
        add     eax, 0x168
        push    eax
        call    ext_005A1640
        cmp     esi, dword ptr [edi + 0x4]
        ja      short loc_597054
        call    dword ptr [mem_00925134]

loc_597054:
        mov     esi, ebx
        jmp     short loc_596FF1

loc_597058:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}

// [0x00598F40] sub_00598F40 (175 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_004FDAA0();
extern "C" void ext_005940E0();
extern "C" void ext_00594A30();
extern "C" void ext_005976A0();
extern "C" void ext_006A6DD2();
extern "C" int mem_008A0DD8;
extern "C" int mem_00925134;
extern "C" int mem_009D1278;

extern "C" __declspec(naked) void* __fastcall fn_00598F40(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push    -1
        push    offset mem_008A0DD8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x58
        mov     eax, dword ptr [esp + 0x6c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x70]
        push    eax
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x1c]
        call    ext_004FDAA0
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     ecx, [esi + 4]
        mov     dword ptr [esp + 0x70], 0
        call    ext_005976A0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x68], 0xffffffff
        call    ext_005940E0
        cmp     byte ptr [esp + 0x10], 0
        jne     loc_598fbc
        push    edi
        call    ext_00594A30
        push    eax
        lea     ecx, [esp + 0x40]
        call    ext_004142E0
        push    offset mem_009D1278
        lea     edx, [esp + 0x3c]
        push    edx
        call    ext_006A6DD2
loc_598fbc:
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        jne     loc_598fcd
        call    ebx
loc_598fcd:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, dword ptr [esi + 4]
        jne     loc_598fd8
        call    ebx
loc_598fd8:
        mov     ecx, dword ptr [esp + 0x64]
        pop     ebx
        lea     eax, [edi + 0x28]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x64
        ret     8
    }
}

// [0x00598E10] sub_00598E10 (186 bytes)
extern "C" void ext_00478910();
extern "C" void ext_005949D0();
extern "C" __declspec(naked) void __fastcall fn_00598E10(void* self) {
    __asm {
        push    -1
        push    0x8a0db8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x54
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x6c]
        mov     esi, ecx
        push    edi
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_00924FE0]
        mov     eax, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x30], ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esi + 4]
        mov     dword ptr [esp + 0x6c], 0
        call    ext_00478910
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x64], -1
        call    dword ptr [mem_00924FF4]
        cmp     byte ptr [esp + 0x10], 0
        jne     lbl_598e97
        push    edi
        call    ext_005949D0
        push    eax
        lea     ecx, [esp + 0x3c]
        call    ext_004142E0
        push    0x9d1278
        lea     ecx, [esp + 0x38]
        push    ecx
        call    ext_006A6DD2
    lbl_598e97:
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        push    ebx
        mov     ebx, dword ptr [mem_00925134]
        jne     lbl_598ea8
        call    ebx
    lbl_598ea8:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, dword ptr [esi + 4]
        jne     lbl_598eb3
        call    ebx
    lbl_598eb3:
        mov     ecx, dword ptr [esp + 0x60]
        pop     ebx
        lea     eax, [edi + 0x28]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x60
        ret     8
    }
}

// [0x00596F00] sub_00596F00 (190 bytes)
extern "C" void ext_005A3660();
extern "C" void ext_00642660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00596F00(void* self) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x26c]
        mov ecx, dword ptr [ebp + 0xf8]
        push esi
        push edi
        add eax, 0x1b0
        push eax
        mov dword ptr [esp + 0x14], ebp
        call ext_00642660
        mov esi, dword ptr [ebp + 0x240]
        add ebp, 0x238
        cmp dword ptr [ebp + 0x4], esi
        jbe L_chk1
        call dword ptr [mem_00925134]
L_chk1:
        mov edi, ebp
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_loop:
        mov ebx, dword ptr [ebp + 0x4]
        cmp ebx, dword ptr [ebp + 0x8]
        jbe L_chk2
        call dword ptr [mem_00925134]
L_chk2:
        test edi, edi
        je L_bad3
        cmp edi, ebp
        je L_chk3
L_bad3:
        call dword ptr [mem_00925134]
L_chk3:
        cmp esi, ebx
        je L_done
        test edi, edi
        mov dword ptr [esp + 0x18], esi
        jne L_chk4
        call dword ptr [mem_00925134]
L_chk4:
        cmp esi, dword ptr [edi + 0x4]
        ja L_chk5
        call dword ptr [mem_00925134]
L_chk5:
        lea ebx, [esi - 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jb L_chk6
        call dword ptr [mem_00925134]
L_chk6:
        mov ecx, dword ptr [esp + 0x10]
        add ecx, 0x168
        push ecx
        mov ecx, dword ptr [ebx]
        call ext_005A3660
        cmp esi, dword ptr [edi + 0x4]
        ja L_chk7
        call dword ptr [mem_00925134]
L_chk7:
        mov esi, ebx
        jmp L_loop
L_done:
        mov edx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx + 0xf4], 0x4
        pop ebx
        add esp, 0x0c
        ret
    }
}

// [0x0059A8F0] sub_0059A8F0 (242 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_0049BD50();
extern "C" void ext_00594970();
extern "C" void ext_0059A1D0();
extern "C" void ext_00682FD0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_0059A8F0(void* self, void* dummy, int arg1, int arg2) {
    __asm {
        push -1
        push 0x8a0e43
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0xe0
        push esi
        push edi
        mov edi, dword ptr [esp + 0xf8]
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x40]
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0xfc]
        push eax
        lea ecx, [esp + 0x5c]
        mov dword ptr [esp + 0xf4], 0
        call ext_0049BD50
        lea ecx, [esp + 0x3c]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0xf8], 1
        call ext_0059A1D0
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0xf0], 2
        call ext_00682FD0
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0xf0], -1
        call dword ptr [mem_00924FF4]
        cmp byte ptr [esp + 0x10], 0
        jne loc_59a9a9
        push edi
        call ext_00594970
        push eax
        lea ecx, [esp + 0x1c]
        call ext_004142E0
        push 0x9d1278
        lea eax, [esp + 0x18]
        push eax
        call ext_006A6DD2
    loc_59a9a9:
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jne loc_59a9ba
        call ebx
    loc_59a9ba:
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 4]
        jne loc_59a9c5
        call ebx
    loc_59a9c5:
        mov ecx, dword ptr [esp + 0xec]
        pop ebx
        lea eax, [edi + 0x28]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0xec
        ret 8
    }
}

// [0x005976A0] sub_005976A0 (243 bytes)
extern "C" void ext_005948E0();
extern "C" void ext_00596460();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_005976A0(void* self, int edx_unused, void* a1, const void* a2) {
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 0x4]
        mov esi, dword ptr [edi + 0x4]
        cmp byte ptr [esi + 0x31], 0x0
        mov al, 0x1
        mov byte ptr [esp + 0x10], al
        jne L5976_after_loop
        nop
    L5976_loop:
        lea eax, [esi + 0xc]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        mov byte ptr [esp + 0x10], al
        je L5976_right
        mov esi, dword ptr [esi]
        jmp L5976_chk
    L5976_right:
        mov esi, dword ptr [esi + 0x8]
    L5976_chk:
        cmp byte ptr [esi + 0x31], 0x0
        je L5976_loop
    L5976_after_loop:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x14], ebp
        je L5976_found
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx]
        jne L5976_dec
        push ebx
        push edi
        push 0x1
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebp
        call ext_00596460
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L5976_dec:
        lea ecx, [esp + 0x14]
        call ext_005948E0
        mov esi, dword ptr [esp + 0x18]
    L5976_found:
        lea edx, [esi + 0xc]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L5976_nofound
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebp
        call ext_00596460
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L5976_nofound:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 0x8], 0x0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x0059A1D0] sub_0059A1D0 (248 bytes)
extern "C" void ext_00594330();
extern "C" void ext_005992E0();
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_0059A1D0(void* self, int edx_unused, void* a1, const void* a2) {
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 0x4]
        mov esi, dword ptr [edi + 0x4]
        cmp byte ptr [esi + 0xb9], 0x0
        mov al, 0x1
        mov byte ptr [esp + 0x10], al
        jne L59A1_after_loop
    L59A1_loop:
        lea eax, [esi + 0xc]
        push eax
        push ebx
        mov edi, esi
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        mov byte ptr [esp + 0x10], al
        je L59A1_right
        mov esi, dword ptr [esi]
        jmp L59A1_chk
    L59A1_right:
        mov esi, dword ptr [esi + 0x8]
    L59A1_chk:
        cmp byte ptr [esi + 0xb9], 0x0
        je L59A1_loop
    L59A1_after_loop:
        test al, al
        mov esi, edi
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x14], ebp
        je L59A1_found
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx]
        jne L59A1_dec
        push ebx
        push edi
        push 0x1
        lea edx, [esp + 0x20]
        push edx
        mov ecx, ebp
        call ext_005992E0
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L59A1_dec:
        lea ecx, [esp + 0x14]
        call ext_00594330
        mov esi, dword ptr [esp + 0x18]
    L59A1_found:
        lea edx, [esi + 0xc]
        push ebx
        push edx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        je L59A1_nofound
        mov eax, dword ptr [esp + 0x10]
        push ebx
        push edi
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, ebp
        call ext_005992E0
        pop edi
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    L59A1_nofound:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x14]
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        mov byte ptr [eax + 0x8], 0x0
        mov dword ptr [eax], edx
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x00598970] sub_00598970 (276 bytes)
extern "C" void ext_00493E80();
extern "C" void ext_0049E580();
extern "C" void ext_00594020();
extern "C" void ext_00596CA0();
extern "C" void ext_006829D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00598970(void* self) {
    __asm {
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00596CA0
        mov edi, dword ptr [ebp + 0x29c]
        cmp edi, dword ptr [ebp + 0x2a0]
        lea esi, [ebp + 0x298]
        jbe L_598994
        call dword ptr [mem_00925134]
    L_598994:
        push ebx
    L_598995:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_5989a3
        call dword ptr [mem_00925134]
    L_5989a3:
        cmp esi, esi
        je L_5989ad
        call dword ptr [mem_00925134]
    L_5989ad:
        cmp edi, ebx
        je L_5989dc
        cmp edi, dword ptr [esi + 0x8]
        jb L_5989bc
        call dword ptr [mem_00925134]
    L_5989bc:
        mov ecx, dword ptr [edi]
        push 0x0
        lea eax, [ebp + 0xfc]
        push eax
        call ext_0049E580
        cmp edi, dword ptr [esi + 0x8]
        jb L_5989d7
        call dword ptr [mem_00925134]
    L_5989d7:
        add edi, 0x4
        jmp L_598995
    L_5989dc:
        lea ecx, [ebp + 0xfc]
        push ecx
        call ext_006829D0
        mov esi, dword ptr [ebp + 0x300]
        lea edi, [ebp + 0x2fc]
        add esp, 0x4
        cmp esi, dword ptr [edi + 0x8]
        jbe L_598a02
        call dword ptr [mem_00925134]
    L_598a02:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L_598a10
        call dword ptr [mem_00925134]
    L_598a10:
        test edi, edi
        je L_598a18
        cmp edi, edi
        je L_598a1e
    L_598a18:
        call dword ptr [mem_00925134]
    L_598a1e:
        cmp esi, ebx
        je L_598a49
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne L_598a2e
        call ebx
    L_598a2e:
        cmp esi, dword ptr [edi + 0x8]
        jb L_598a35
        call ebx
    L_598a35:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
        cmp esi, dword ptr [edi + 0x8]
        jb L_598a44
        call ebx
    L_598a44:
        add esi, 0x4
        jmp L_598a02
    L_598a49:
        mov eax, dword ptr [ebp + 0xf8]
        test eax, eax
        pop ebx
        je L_598a59
        add eax, 0x4
        jmp L_598a5b
    L_598a59:
        xor eax, eax
    L_598a5b:
        mov ecx, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ecx]
        push eax
        lea ecx, [ebp + 0x258]
        add esi, 0xc
        call ext_00493E80
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [esi]
        push eax
        call edx
        push 0x3
        mov ecx, ebp
        call ext_00594020
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x0059B5A0] sub_0059B5A0 (305 bytes)
extern "C" void ext_004FB660();
extern "C" void ext_005A3DF0();
extern "C" void ext_005B0780();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0059B5A0(void* self) {
    __asm {
        push    -0x1
        push    0x8a0e80
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     esi, [ebp + 0x168]
        push    esi
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x18], esi
        call    ext_00466F00
        push    0x1
        mov     ecx, esi
        mov     dword ptr [esp + 0x84], 0x0
        call    ext_00661F70
        mov     esi, dword ptr [ebp + 0x23c]
        cmp     esi, dword ptr [ebp + 0x240]
        lea     edi, [ebp + 0x238]
        jbe     L_59b600
        call    dword ptr [mem_00925134]
    L_59b600:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     L_59b60e
        call    dword ptr [mem_00925134]
    L_59b60e:
        cmp     edi, edi
        je      L_59b618
        call    dword ptr [mem_00925134]
    L_59b618:
        cmp     esi, ebx
        je      L_59b68a
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_59b627
        call    dword ptr [mem_00925134]
    L_59b627:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [eax + 0x24]
        mov     ebx, dword ptr [ebp + 0x26c]
        add     ecx, 0x4
        call    edx
        sub     esp, 0x1c
        mov     ecx, esp
        mov     dword ptr [esp + 0x2c], esp
        push    eax
        call    dword ptr [mem_00924FE0]
        lea     ecx, [ebx + 0x524]
        call    ext_004FB660
        mov     ebx, eax
        mov     ecx, ebx
        call    ext_005B0780
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_59b669
        call    dword ptr [mem_00925134]
    L_59b669:
        mov     eax, dword ptr [mem_00B40640]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ebx
        call    ext_005A3DF0
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_59b682
        call    dword ptr [mem_00925134]
    L_59b682:
        add     esi, 0x4
        jmp     L_59b600
    L_59b68a:
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x84], 0x1
        call    ext_006619D0
        mov     edx, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        mov     byte ptr [edx], 0x1
        mov     dword ptr [esp + 0x80], 0xffffffff
        call    ext_00466870
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0x0], ecx
        pop     ebx
        add     esp, 0x74
        ret
    }
}

// [0x0059ACD0] sub_0059ACD0 (325 bytes)
extern "C" void ext_0050BE20();
extern "C" void ext_0059A140();
extern "C" void ext_005A3DF0();
extern "C" void ext_005B0CA0();
extern "C" void ext_006A5C62();
extern "C" int mem_00925134;
extern "C" int mem_00924FDC;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0059ACD0(void* self) {
    __asm {
        push    -0x1
        mov     eax, dword ptr fs:[0x0]
        push    0x891cab
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, ebx
        call    ext_0050BE20
        mov     edi, dword ptr [esi + 0x23c]
        cmp     edi, dword ptr [esi + 0x240]
        lea     ebp, [esi + 0x238]
        jbe     L_59ad13
        call    dword ptr [mem_00925134]
    L_59ad13:
        mov     esi, dword ptr [ebp + 0x8]
        cmp     dword ptr [ebp + 0x4], esi
        jbe     L_59ad21
        call    dword ptr [mem_00925134]
    L_59ad21:
        cmp     ebp, ebp
        je      L_59ad2b
        call    dword ptr [mem_00925134]
    L_59ad2b:
        cmp     edi, esi
        je      L_59ae00
        push    0x84
        call    ext_006A5C62
        add     esp, 0x4
        mov     dword ptr [esp + 0x28], eax
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [esp + 0x20], esi
        je      L_59ad57
        mov     ecx, eax
        call    ext_005B0CA0
        mov     esi, eax
    L_59ad57:
        cmp     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x20], 0xffffffff
        mov     dword ptr [esp + 0x28], esi
        jb      L_59ad6e
        call    dword ptr [mem_00925134]
    L_59ad6e:
        mov     eax, dword ptr [edi]
        lea     ecx, [eax + 0x4]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x24]
        call    edx
        push    eax
        lea     ecx, [esi + 0x64]
        call    dword ptr [mem_00924FDC]
        cmp     edi, dword ptr [ebp + 0x8]
        jb      L_59ad8f
        call    dword ptr [mem_00925134]
    L_59ad8f:
        mov     eax, dword ptr [mem_00B40640]
        mov     ecx, dword ptr [edi]
        push    eax
        push    esi
        call    ext_005A3DF0
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        jne     L_59ada8
        xor     edx, edx
        jmp     L_59adb0
    L_59ada8:
        mov     edx, dword ptr [ebx + 0x8]
        sub     edx, eax
        sar     edx, 0x2
    L_59adb0:
        test    eax, eax
        je      L_59adcd
        mov     ecx, dword ptr [ebx + 0xc]
        sub     ecx, eax
        sar     ecx, 0x2
        cmp     edx, ecx
        jae     L_59adcd
        mov     eax, dword ptr [ebx + 0x8]
        mov     dword ptr [eax], esi
        add     eax, 0x4
        mov     dword ptr [ebx + 0x8], eax
        jmp     L_59aded
    L_59adcd:
        mov     esi, dword ptr [ebx + 0x8]
        cmp     eax, esi
        jbe     L_59adda
        call    dword ptr [mem_00925134]
    L_59adda:
        lea     ecx, [esp + 0x28]
        push    ecx
        push    esi
        push    ebx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, ebx
        call    ext_0059A140
    L_59aded:
        cmp     edi, dword ptr [ebp + 0x8]
        jb      L_59adf8
        call    dword ptr [mem_00925134]
    L_59adf8:
        add     edi, 0x4
        jmp     L_59ad13
    L_59ae00:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x14
        ret     0x4
    }
}

// [0x0059AE40] sub_0059AE40 (370 bytes)
extern "C" void ext_00427A60();
extern "C" void ext_005978F0();
extern "C" void ext_0059A8F0();
extern "C" void ext_00682FD0();
extern "C" void ext_00683620();
extern "C" void ext_006863A0();
extern "C" int mem_00925134;
extern "C" int mem_00924FC8;
extern "C" __declspec(naked) void __fastcall fn_0059AE40(void* self, void* /*edx*/, void* arg1, const char* arg2) {
    __asm {
        push    -0x1
        mov     eax, dword ptr fs:[0x0]
        push    0x8a0e5b
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0xa8
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax + 0x4]
        push    esi
        lea     esi, [ebp + 0x4]
        push    edi
        push    ecx
        mov     ecx, esi
        call    ext_005978F0
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], eax
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [eax], eax
        mov     esi, dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], esi
        mov     esi, dword ptr [esp + 0xc8]
        mov     edi, dword ptr [esi + 0x28]
        add     esi, 0x24
        cmp     edi, dword ptr [esi + 0x8]
        jbe     L_59aea2
        call    dword ptr [mem_00925134]
    L_59aea2:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     L_59aec5
        call    dword ptr [mem_00925134]
    L_59aec5:
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], edi
        lea     ecx, [esp + 0x1c]
    L_59aed5:
        call    ext_00427A60
        mov     ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        je      L_59aee8
        cmp     ebx, dword ptr [esp + 0x20]
        je      L_59aef2
    L_59aee8:
        mov     esi, dword ptr [mem_00925134]
        call    esi
        jmp     L_59aef8
    L_59aef2:
        mov     esi, dword ptr [mem_00925134]
    L_59aef8:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, dword ptr [esp + 0x24]
        jae     L_59af97
        test    ebx, ebx
        jne     L_59af0c
        call    esi
    L_59af0c:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      L_59af13
        call    esi
    L_59af13:
        mov     ecx, dword ptr [esp + 0xcc]
        test    ecx, ecx
        mov     esi, dword ptr [edi]
        lea     eax, [esi + 0x4]
        je      L_59af32
        push    ecx
        push    eax
        call    dword ptr [mem_00924FC8]
        add     esp, 0x8
        test    al, al
        jne     L_59af7c
    L_59af32:
        lea     ecx, [esp + 0x28]
        call    ext_00683620
        push    esi
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0xc4], 0x0
        call    ext_006863A0
        mov     eax, dword ptr [esp + 0x28]
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, edx
        mov     edx, dword ptr [eax + 0x24]
        call    edx
        push    eax
        mov     ecx, ebp
        call    ext_0059A8F0
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0xc0], 0xffffffff
        call    ext_00682FD0
    L_59af7c:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      L_59af87
        call    dword ptr [mem_00925134]
    L_59af87:
        add     edi, 0x4
        mov     dword ptr [esp + 0x18], edi
        lea     ecx, [esp + 0x10]
        jmp     L_59aed5
    L_59af97:
        mov     ecx, dword ptr [esp + 0xb8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0xb4
        ret     0x8
    }
}

extern "C" void ext_0051EAC0();
extern "C" void ext_00596330();
extern "C" void ext_0059F400();
extern "C" void ext_006750B0();
extern "C" void ext_00642680();

extern "C" int mem_00925134;

// [0x00597250] sub_00597250 (404 bytes)
extern "C" __declspec(naked) void __fastcall fn_00597250(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, ecx
        add     dword ptr [ebp + 0xf0], 0x1
        push    esi
        lea     esi, [ebp + 0x238]
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        cmp     edi, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x10], ebp
        jbe     L_597276
        call    dword ptr [mem_00925134]
    L_597276:
        mov     ebx, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], ebx
        jbe     L_597284
        call    dword ptr [mem_00925134]
    L_597284:
        test    esi, esi
        je      L_59728c
        cmp     esi, esi
        je      L_597292
    L_59728c:
        call    dword ptr [mem_00925134]
    L_597292:
        cmp     edi, ebx
        je      L_5972bc
        test    esi, esi
        mov     ebx, dword ptr [mem_00925134]
        jne     L_5972a2
        call    ebx
    L_5972a2:
        cmp     edi, dword ptr [esi + 0x8]
        jb      L_5972a9
        call    ebx
    L_5972a9:
        mov     ecx, dword ptr [edi]
        call    ext_0059F400
        cmp     edi, dword ptr [esi + 0x8]
        jb      L_5972b7
        call    ebx
    L_5972b7:
        add     edi, 0x4
        jmp     L_597276
    L_5972bc:
        mov     ecx, dword ptr [ebp + 0x274]
        call    ext_006750B0
        mov     edi, dword ptr [ebp + 0x2b0]
        cmp     dword ptr [ebp + 0x2ac], edi
        jbe     L_5972db
        call    dword ptr [mem_00925134]
    L_5972db:
        mov     esi, dword ptr [ebp + 0x2ac]
        cmp     esi, dword ptr [ebp + 0x2b0]
        jbe     L_5972ef
        call    dword ptr [mem_00925134]
    L_5972ef:
        cmp     esi, edi
        je      L_597304
    L_5972f3:
        mov     ecx, esi
        call    ext_0051EAC0
        add     esi, 0x168
        cmp     esi, edi
        jne     L_5972f3
    L_597304:
        mov     ecx, ebp
        call    ext_00596330
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [eax + 0x26c]
        mov     esi, dword ptr [edi + 0x34]
        add     edi, 0x30
        cmp     esi, dword ptr [edi + 0x8]
        jbe     L_597328
        call    dword ptr [mem_00925134]
    L_597328:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     L_597336
        call    dword ptr [mem_00925134]
    L_597336:
        test    edi, edi
        je      L_59733e
        cmp     edi, edi
        je      L_597344
    L_59733e:
        call    dword ptr [mem_00925134]
    L_597344:
        cmp     esi, ebx
        je      L_597374
        test    edi, edi
        mov     ebx, dword ptr [mem_00925134]
        jne     L_597354
        call    ebx
    L_597354:
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_59735b
        call    ebx
    L_59735b:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x154]
        push    ebp
        call    eax
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_59736f
        call    ebx
    L_59736f:
        add     esi, 0x4
        jmp     L_597328
    L_597374:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     L_597382
        call    dword ptr [mem_00925134]
    L_597382:
        mov     ebx, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], ebx
        jbe     L_597390
        call    dword ptr [mem_00925134]
    L_597390:
        test    edi, edi
        je      L_597398
        cmp     edi, edi
        je      L_59739e
    L_597398:
        call    dword ptr [mem_00925134]
    L_59739e:
        cmp     esi, ebx
        je      L_5973ce
        test    edi, edi
        mov     ebx, dword ptr [mem_00925134]
        jne     L_5973ae
        call    ebx
    L_5973ae:
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_5973b5
        call    ebx
    L_5973b5:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x150]
        push    ebp
        call    eax
        cmp     esi, dword ptr [edi + 0x8]
        jb      L_5973c9
        call    ebx
    L_5973c9:
        add     esi, 0x4
        jmp     L_597382
    L_5973ce:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx + 0xf8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4
        jmp     ext_00642680
    }
}

// [0x00599C40] sub_00599C40 (480 bytes)
extern "C" void ext_00489320();
extern "C" void ext_004FB660();
extern "C" void ext_00594020();
extern "C" void ext_00596A30();
extern "C" void ext_00596C50();
extern "C" void ext_00596F00();
extern "C" void ext_00598970();
extern "C" void ext_00598A90();
extern "C" void ext_005A17D0();
extern "C" void ext_0065D110();
extern "C" void ext_006620E0();
extern "C" void ext_00662120();
extern "C" void ext_005945D0();
extern "C" int mem_00A85D54;
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_00599C40(void* self) {
    __asm {
        push    -1
        mov     eax, dword ptr fs:[0]
        push    0x8a0df8
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xf4]
        add     eax, -1
        cmp     eax, 4
        ja      L_599E0B
        jmp     dword ptr [4*eax + 0x599e20]
    L_599C77:
        call    ext_00596C50
    L_599C7C:
        cmp     dword ptr [esp + 0x34], 2
        je      L_599E0B
        lea     esi, [edi + 0x168]
        mov     ecx, esi
        call    ext_00662120
        lea     ebx, [edi + 0xfc]
        mov     ecx, ebx
        call    ext_0065D110
        mov     ecx, edi
        call    ext_00598970
        mov     ecx, edi
        call    ext_00598A90
        mov     byte ptr [mem_00A85D54], 1
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], 0
        call    ext_006620E0
        mov     ecx, ebx
        mov     dword ptr [esp + 0x2c], -1
        mov     byte ptr [mem_00A85D54], 0
        call    ext_0065D110
        lea     eax, [esp + 0x1c]
        lea     ecx, [edi + 0x238]
        push    eax
        call    ext_00489320
        mov     ebp, dword ptr [eax]
        mov     esi, dword ptr [eax + 0x4]
    L_599CF0:
        mov     eax, dword ptr [edi + 0x240]
        cmp     dword ptr [edi + 0x23c], eax
        lea     ebx, [edi + 0x238]
        mov     dword ptr [esp + 0x14], eax
        jbe     L_599D0E
        call    dword ptr [mem_00925134]
    L_599D0E:
        test    ebp, ebp
        je      L_599D16
        cmp     ebp, ebx
        je      L_599D20
    L_599D16:
        mov     ebx, dword ptr [mem_00925134]
        call    ebx
        jmp     L_599D26
    L_599D20:
        mov     ebx, dword ptr [mem_00925134]
    L_599D26:
        cmp     esi, dword ptr [esp + 0x14]
        je      L_599D96
        test    ebp, ebp
        jne     L_599D32
        call    ebx
    L_599D32:
        cmp     esi, dword ptr [ebp + 0x8]
        jb      L_599D39
        call    ebx
    L_599D39:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [edi + 0x26c]
        lea     ecx, [eax + 0x4]
        mov     eax, dword ptr [edx + 0x24]
        call    eax
        sub     esp, 0x1c
        mov     ecx, esp
        mov     dword ptr [esp + 0x30], esp
        push    eax
        call    dword ptr [mem_00924FE0]
        lea     ecx, [ebx + 0x524]
        call    ext_004FB660
        cmp     esi, dword ptr [ebp + 0x8]
        mov     ebx, eax
        jb      L_599D74
        call    dword ptr [mem_00925134]
    L_599D74:
        mov     ecx, dword ptr [mem_00B40640]
        push    ecx
        mov     ecx, dword ptr [esi]
        push    ebx
        call    ext_005A17D0
        cmp     esi, dword ptr [ebp + 0x8]
        jb      L_599D8E
        call    dword ptr [mem_00925134]
    L_599D8E:
        add     esi, 0x4
        jmp     L_599CF0
    L_599D96:
        cmp     dword ptr [esp + 0x34], 3
        je      L_599E0B
        mov     ecx, edi
        call    ext_00596F00
    L_599DA4:
        cmp     dword ptr [esp + 0x34], 4
        je      L_599E0B
        mov     esi, dword ptr [edi + 0x26c]
        mov     ebp, dword ptr [esi + 0x38]
        add     esi, 0x30
        cmp     dword ptr [esi + 0x4], ebp
        mov     ebx, offset ext_005945D0
        jbe     L_599DC7
        call    dword ptr [mem_00925134]
    L_599DC7:
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        jbe     L_599DDD
        call    dword ptr [mem_00925134]
        mov     ecx, dword ptr [esp + 0x14]
    L_599DDD:
        xor     eax, eax
        push    eax
        push    ebx
        push    ebp
        push    esi
        push    ecx
        lea     edx, [esp + 0x28]
        push    esi
        push    edx
        call    ext_00596A30
        add     esp, 0x1c
        push    5
        mov     ecx, edi
        call    ext_00594020
    L_599DFB:
        cmp     dword ptr [esp + 0x34], 5
        je      L_599E0B
        push    6
        mov     ecx, edi
        call    ext_00594020
    L_599E0B:
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x20
        ret     4
    }
}

// [0x0059C150] sub_0059C150 (482 bytes)
extern "C" void ext_00410D10();
extern "C" void ext_00475960();
extern "C" void ext_00478410();
extern "C" void ext_0047CAD0();
extern "C" void ext_00481C50();
extern "C" void ext_00489320();
extern "C" void ext_00493E90();
extern "C" void ext_0050BE20();
extern "C" void ext_0051EC00();
extern "C" void ext_005862A0();
extern "C" void ext_00587880();
extern "C" void ext_00594040();
extern "C" void ext_005957F0();
extern "C" void ext_00596A30();
extern "C" void ext_00597150();
extern "C" void ext_00599F50();
extern "C" void ext_0059B5A0();
extern "C" void ext_0065ECB0();
extern "C" void ext_005945E0();
extern "C" __declspec(naked) void __fastcall fn_0059C150(void* self, int edx_unused, int a1) {
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xf4]
        add     eax, -1
        cmp     eax, 5
        ja      L_059C2A0
        push    edi
        jmp     dword ptr [eax*4 + 0x59C2A8]
L_059C170:
        push    5
        call    ext_00594040
        lea     ecx, [esi + 0x2a8]
        call    ext_0051EC00
L_059C182:
        cmp     dword ptr [esp + 0x24], 5
        je      L_059C29F
        mov     edi, dword ptr [esi + 0x26c]
        push    ebx
        push    ebp
        lea     eax, [esp + 0x10]
        add     edi, 0x30
        push    eax
        mov     ecx, edi
        mov     ebp, offset ext_005945E0
        call    ext_00410D10
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        mov     ebx, eax
        call    ext_00489320
        mov     edx, dword ptr [ebx + 0x4]
        xor     ecx, ecx
        push    ecx
        mov     ecx, dword ptr [ebx]
        push    ebp
        push    edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        call    ext_00596A30
        add     esp, 0x1c
        push    4
        mov     ecx, esi
        call    ext_00594040
        pop     ebp
        pop     ebx
L_059C1E1:
        cmp     dword ptr [esp + 0x24], 4
        je      L_059C29F
        mov     ecx, esi
        call    ext_00597150
L_059C1F3:
        cmp     dword ptr [esp + 0x24], 3
        je      L_059C29F
        mov     ecx, esi
        call    ext_0059B5A0
        lea     ecx, [esi + 0x258]
        call    ext_00493E90
        lea     ecx, [esi + 0xfc]
        mov     dword ptr [esi + 0x10], 0
        call    ext_0065ECB0
        push    2
        mov     ecx, esi
        call    ext_00594040
L_059C22B:
        cmp     dword ptr [esp + 0x24], 2
        je      short L_059C29F
        mov     ecx, esi
        call    ext_005862A0
        push    1
        mov     ecx, esi
        call    ext_00594040
L_059C242:
        cmp     dword ptr [esp + 0x24], 1
        je      short L_059C29F
        mov     ecx, dword ptr [esi + 0x2dc]
        lea     edi, [esi + 0x238]
        push    edi
        call    ext_00478410
        mov     ecx, edi
        call    ext_00481C50
        mov     ecx, dword ptr [esi + 0x26c]
        call    ext_0047CAD0
        lea     ecx, [esi + 0x2bc]
        call    ext_0050BE20
        lea     ecx, [esi + 0x248]
        call    ext_00599F50
        lea     ecx, [esi + 0x298]
        call    ext_0050BE20
        mov     ecx, esi
        mov     dword ptr [esi + 0xf4], 0
        call    ext_00587880
L_059C29F:
        pop     edi
L_059C2A0:
        pop     esi
        add     esp, 0x18
        ret     4
        __asm _emit 0x90
        __asm _emit 0x42
        __asm _emit 0xc2
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x2b
        __asm _emit 0xc2
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xc1
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xc1
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0x56
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub     esp, 0x20
        push    esi
        mov     esi, ecx
        call    ext_005957F0
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0xc]
        call    dword ptr [mem_00924FE4]
        push    1
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x38], 0
        call    ext_00475960
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x2c], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     esi
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add     esp, 0x2c
        ret     4
    }
}

// [0x00596460] sub_00596460 (508 bytes)
extern "C" void ext_00594830();
extern "C" void ext_00594880();
extern "C" void ext_00595B70();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_00596460(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x71c71c6
        jb L_5964dd
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
    L_5964dd:
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
        call ext_00595B70
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_596517
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_596539
    L_596517:
        cmp byte ptr [esp + 0x68], 0x0
        je L_59652b
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_596539
        mov dword ptr [eax], ebp
        jmp L_596539
    L_59652b:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_596539
        mov dword ptr [eax + 0x8], ebp
    L_596539:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0x30], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_596635
        jmp L_596550
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_596550:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_5965aa
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0x30], 0x0
        jne L_59657b
        mov byte ptr [ecx + 0x30], bl
        mov byte ptr [edx + 0x30], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x30], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_596625
    L_59657b:
        cmp esi, dword ptr [ecx + 0x8]
        jne L_59658a
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00594830
    L_59658a:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x30], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x30], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_00594880
        jmp L_596625
    L_5965aa:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0x30], 0x0
        jne L_5965c8
        mov byte ptr [ecx + 0x30], bl
        mov byte ptr [edx + 0x30], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0x30], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_596625
    L_5965c8:
        cmp esi, dword ptr [ecx]
        jne L_5965d6
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00594880
    L_5965d6:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0x30], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0x30], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0x31], 0x0
        jne L_5965ff
        mov dword ptr [edx + 0x4], eax
    L_5965ff:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_596612
        mov dword ptr [edx + 0x4], ecx
        jmp L_596620
    L_596612:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_59661d
        mov dword ptr [edx], ecx
        jmp L_596620
    L_59661d:
        mov dword ptr [edx + 0x8], ecx
    L_596620:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
    L_596625:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x30], 0x0
        lea eax, [esi + 0x4]
        je L_596550
    L_596635:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0x30], bl
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

// [0x005992E0] sub_005992E0 (522 bytes)
extern "C" void ext_00594190();
extern "C" void ext_005941F0();
extern "C" void ext_00597D00();
extern "C" void ext_006A6DD2();
extern "C" int mem_0088F4C2;
extern "C" int mem_0092C530;
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00928ECC;
extern "C" int mem_00928ED8;
extern "C" int mem_009CDF20;
extern "C" __declspec(naked) void __fastcall fn_005992E0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0088F4C2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x8], 0x17d05f3
        jb L_59935d
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
L_59935d:
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
        call ext_00597D00
        mov ebp, eax
        mov eax, dword ptr [edi + 0x4]
        mov ebx, 0x1
        add dword ptr [edi + 0x8], ebx
        cmp esi, eax
        jne L_599397
        mov dword ptr [eax + 0x4], ebp
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], ebp
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x8], ebp
        jmp L_5993b9
L_599397:
        cmp byte ptr [esp + 0x68], 0x0
        je L_5993ab
        mov dword ptr [esi], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax]
        jne L_5993b9
        mov dword ptr [eax], ebp
        jmp L_5993b9
L_5993ab:
        mov dword ptr [esi + 0x8], ebp
        mov eax, dword ptr [edi + 0x4]
        cmp esi, dword ptr [eax + 0x8]
        jne L_5993b9
        mov dword ptr [eax + 0x8], ebp
L_5993b9:
        mov edx, dword ptr [ebp + 0x4]
        cmp byte ptr [edx + 0xb8], 0x0
        lea eax, [ebp + 0x4]
        mov esi, ebp
        jne L_5994c0
        mov edi, edi
L_5993d0:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        cmp ecx, dword ptr [edx]
        jne L_59941d
        mov edx, dword ptr [edx + 0x8]
        cmp byte ptr [edx + 0xb8], 0x0
        je L_599428
        cmp esi, dword ptr [ecx + 0x8]
        jne L_5993f4
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_00594190
L_5993f4:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0xb8], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0xb8], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, edi
        call ext_005941F0
        jmp L_5994ad
L_59941d:
        mov edx, dword ptr [edx]
        cmp byte ptr [edx + 0xb8], 0x0
        jne L_599447
L_599428:
        mov byte ptr [ecx + 0xb8], bl
        mov byte ptr [edx + 0xb8], bl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 0x4]
        mov byte ptr [ecx + 0xb8], 0x0
        mov edx, dword ptr [eax]
        mov esi, dword ptr [edx + 0x4]
        jmp L_5994ad
L_599447:
        cmp esi, dword ptr [ecx]
        jne L_599455
        mov esi, ecx
        push esi
        mov ecx, edi
        call ext_005941F0
L_599455:
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [eax + 0xb8], bl
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        mov byte ptr [edx + 0xb8], 0x0
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0xb9], 0x0
        jne L_599487
        mov dword ptr [edx + 0x4], eax
L_599487:
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        cmp eax, dword ptr [edx + 0x4]
        jne L_59949a
        mov dword ptr [edx + 0x4], ecx
        jmp L_5994a8
L_59949a:
        mov edx, dword ptr [eax + 0x4]
        cmp eax, dword ptr [edx]
        jne L_5994a5
        mov dword ptr [edx], ecx
        jmp L_5994a8
L_5994a5:
        mov dword ptr [edx + 0x8], ecx
L_5994a8:
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x4], ecx
L_5994ad:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0xb8], 0x0
        lea eax, [esi + 0x4]
        je L_5993d0
L_5994c0:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x54]
        mov byte ptr [eax + 0xb8], bl
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

// [0x00596CA0] sub_00596CA0 (608 bytes)
extern "C" void ext_00493E10();
extern "C" void ext_00493E30();
extern "C" void ext_00493E70();
extern "C" void ext_005865D0();
extern "C" void ext_005866C0();
extern "C" void ext_0059DC60();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00596CA0(void* self) {
    __asm {
        push -1
        push 8a0d28h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 10h
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea ecx, [ebx + 258h]
        push 0
        mov dword ptr [esp + 14h], ebx
        call ext_00493E70
        mov dword ptr [esp + 14h], eax
        mov esi, dword ptr [ebx + 240h]
        cmp dword ptr [ebx + 23ch], esi
        lea edi, [ebx + 238h]
        mov dword ptr [esp + 28h], 0
        jbe L_596D00
        call dword ptr [mem_00925134]
        jmp L_596D00
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
    L_596D00:
        mov ebp, dword ptr [ebx + 23ch]
        add ebx, 238h
        cmp ebp, dword ptr [ebx + 8]
        jbe L_596D17
        call dword ptr [mem_00925134]
    L_596D17:
        test edi, edi
        je L_596D1F
        cmp edi, ebx
        je L_596D29
    L_596D1F:
        mov ebx, dword ptr [mem_00925134]
        call ebx
        jmp L_596D2F
    L_596D29:
        mov ebx, dword ptr [mem_00925134]
    L_596D2F:
        cmp esi, ebp
        je L_596E0D
        test edi, edi
        mov dword ptr [esp + 1ch], esi
        jne L_596D41
        call ebx
    L_596D41:
        cmp esi, dword ptr [edi + 4]
        ja L_596D48
        call ebx
    L_596D48:
        lea ebx, [esi - 4]
        cmp ebx, dword ptr [edi + 8]
        jb L_596D56
        call dword ptr [mem_00925134]
    L_596D56:
        mov eax, dword ptr [ebx]
        movzx ecx, byte ptr [eax + 4e1h]
        mov ebp, dword ptr [esp + 10h]
        push ecx
        add ebp, 258h
        mov ecx, ebp
        call ext_00493E10
        cmp esi, dword ptr [edi + 4]
        mov dword ptr [esp + 1ch], esi
        ja L_596D80
        call dword ptr [mem_00925134]
    L_596D80:
        mov eax, edi
        cmp ebx, dword ptr [eax + 8]
        jb L_596D8D
        call dword ptr [mem_00925134]
    L_596D8D:
        mov edx, dword ptr [mem_00B40640]
        mov ecx, dword ptr [ebx]
        push edx
        push ebp
        add ecx, 4
        call ext_005865D0
        cmp esi, dword ptr [edi + 4]
        mov dword ptr [esp + 1ch], esi
        ja L_596DAE
        call dword ptr [mem_00925134]
    L_596DAE:
        mov eax, edi
        cmp ebx, dword ptr [eax + 8]
        jb L_596DBB
        call dword ptr [mem_00925134]
    L_596DBB:
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx]
        push eax
        push ebp
        add ecx, 4
        call ext_005866C0
        cmp esi, dword ptr [edi + 4]
        mov dword ptr [esp + 1ch], esi
        ja L_596DDA
        call dword ptr [mem_00925134]
    L_596DDA:
        cmp ebx, dword ptr [edi + 8]
        jb L_596DE5
        call dword ptr [mem_00925134]
    L_596DE5:
        mov ecx, dword ptr [esp + 10h]
        add ecx, 168h
        push ecx
        mov ecx, dword ptr [ebx]
        call ext_0059DC60
        cmp esi, dword ptr [edi + 4]
        ja L_596E02
        call dword ptr [mem_00925134]
    L_596E02:
        mov esi, ebx
        mov ebx, dword ptr [esp + 10h]
        jmp L_596D00
    L_596E0D:
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx + 26ch]
        mov esi, dword ptr [eax + 34h]
        cmp esi, dword ptr [eax + 38h]
        lea edi, [eax + 30h]
        jbe L_596E24
        call ebx
    L_596E24:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        mov ebp, dword ptr [mem_00925134]
        jbe L_596E34
        call ebp
    L_596E34:
        test edi, edi
        je L_596E3C
        cmp edi, edi
        je L_596E3E
    L_596E3C:
        call ebp
    L_596E3E:
        cmp esi, ebx
        je L_596E71
        test edi, edi
        jne L_596E48
        call ebp
    L_596E48:
        cmp esi, dword ptr [edi + 8]
        jb L_596E4F
        call ebp
    L_596E4F:
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esp + 14h]
        add eax, 258h
        push eax
        call ext_005866C0
        cmp esi, dword ptr [edi + 8]
        jb L_596E6C
        call ebp
    L_596E6C:
        add esi, 4
        jmp L_596E24
    L_596E71:
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 70h]
        add edi, 6ch
        cmp esi, dword ptr [edi + 8]
        jbe L_596E82
        call ebp
    L_596E82:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_596E8C
        call ebp
    L_596E8C:
        cmp edi, edi
        je L_596E92
        call ebp
    L_596E92:
        cmp esi, ebx
        je L_596ED6
        cmp esi, dword ptr [edi + 8]
        jb L_596E9D
        call ebp
    L_596E9D:
        mov ecx, dword ptr [mem_00B40640]
        mov ebx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi]
        add ebx, 258h
        push ebx
        call ext_005865D0
        cmp esi, dword ptr [edi + 8]
        jb L_596EBD
        call ebp
    L_596EBD:
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi]
        push edx
        push ebx
        call ext_005866C0
        cmp esi, dword ptr [edi + 8]
        jb L_596ED1
        call ebp
    L_596ED1:
        add esi, 4
        jmp L_596E82
    L_596ED6:
        mov esi, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 10h]
        push esi
        lea ecx, [edi + 258h]
        call ext_00493E30
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [edi + 10h], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 1ch
        ret
    }
}

// [0x0059C7F0] sub_0059C7F0 (899 bytes)
extern "C" void ext_0047FC70();
extern "C" void ext_00593EB0();
extern "C" void ext_00593F30();
extern "C" void ext_00595C10();
extern "C" void ext_00595C50();
extern "C" void ext_0059C7E0();
extern "C" void ext_0059F5C0();
extern "C" void ext_00620E70();
extern "C" void ext_0065F100();
extern "C" void ext_00661980();
extern "C" void ext_006A0670();
extern "C" void ext_006A5C62();
extern "C" void ext_00493D80();
extern "C" int mem_00B40D08;
extern "C" int mem_00B40640;
extern "C" int mem_00B40644;
extern "C" int mem_00AEE8A8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059C7F0(void* self) {
    __asm {
        push -1
        push 0x8a1101
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x14], esi
        call ext_00620E70
        xor edi, edi
        mov dword ptr [esp + 0x40], edi
        mov dword ptr [esi + 0xe8], 0x928efc
        lea ecx, [esi + 0xfc]
        mov byte ptr [esp + 0x40], 1
        mov dword ptr [esi], 0x95dba4
        mov dword ptr [esi + 0x4], 0x95db5c
        mov dword ptr [esi + 0x8], 0x95db1c
        mov dword ptr [esi + 0xc], 0x95dacc
        mov dword ptr [esi + 0xe8], 0x95daa0
        mov dword ptr [esi + 0xec], edi
        mov dword ptr [esi + 0xf0], 0xffffffff
        call ext_0065F100
        mov dword ptr [esi + 0x23c], edi
        mov dword ptr [esi + 0x240], edi
        mov dword ptr [esi + 0x244], edi
        lea ebp, [esi + 0x24c]
        mov ecx, ebp
        mov byte ptr [esp + 0x40], 3
        mov dword ptr [esi + 0x248], 0x95da18
        call ext_0059F5C0
        mov dword ptr [ebp + 0x4], eax
        mov byte ptr [eax + 0x2d], 1
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [ebp + 0x8], edi
        lea ecx, [esi + 0x258]
        mov byte ptr [esp + 0x40], 4
        call ext_00493D80
        mov dword ptr [esi + 0x264], edi
        mov dword ptr [esi + 0x268], edi
        mov dword ptr [esi + 0x26c], edi
        mov dword ptr [esi + 0x270], edi
        push 0x10
        mov byte ptr [esp + 0x44], 8
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        mov byte ptr [esp + 0x40], 9
        je short L_059C902
        mov ecx, eax
        call ext_006A0670
        jmp short L_059C904
L_059C902:
        xor eax, eax
L_059C904:
        mov dword ptr [esi + 0x274], eax
        lea ebp, [esi + 0x27c]
        mov ecx, ebp
        mov byte ptr [esp + 0x40], 0xa
        mov dword ptr [esi + 0x278], 0x95da20
        call ext_00595C10
        mov dword ptr [ebp + 0x4], eax
        mov byte ptr [eax + 0xb9], 1
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [ebp + 0x8], edi
        lea ebp, [esi + 0x28c]
        mov ecx, ebp
        mov byte ptr [esp + 0x40], 0xb
        mov dword ptr [esi + 0x288], 0x95da28
        call ext_00595C50
        mov dword ptr [ebp + 0x4], eax
        mov byte ptr [eax + 0x31], 1
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [ebp + 0x8], edi
        mov dword ptr [esi + 0x29c], edi
        mov dword ptr [esi + 0x2a0], edi
        mov dword ptr [esi + 0x2a4], edi
        mov dword ptr [esi + 0x2ac], edi
        mov dword ptr [esi + 0x2b0], edi
        mov dword ptr [esi + 0x2b4], edi
        mov dword ptr [esi + 0x2c0], edi
        mov dword ptr [esi + 0x2c4], edi
        mov dword ptr [esi + 0x2c8], edi
        mov dword ptr [esi + 0x2d0], edi
        mov dword ptr [esi + 0x2d4], edi
        mov dword ptr [esi + 0x2d8], edi
        mov dword ptr [esi + 0x2dc], edi
        fld1
        lea ebp, [esi + 0x2e0]
        fst dword ptr [ebp + 0x4]
        fst dword ptr [ebp + 0x8]
        mov dword ptr [ebp + 0xc], edi
        fstp dword ptr [ebp]
        mov dword ptr [ebp + 0x10], edi
        mov dword ptr [ebp + 0x14], edi
        mov dword ptr [esi + 0x2f8], edi
        mov dword ptr [esi + 0x300], edi
        mov dword ptr [esi + 0x304], edi
        mov dword ptr [esi + 0x308], edi
        push 0x24
        mov byte ptr [esp + 0x44], 0x13
        call ext_006A5C62
        add esp, 0x4
        cmp eax, edi
        je short L_059CA2A
        mov dword ptr [eax + 0x8], edi
        mov dword ptr [eax + 0xc], edi
        mov dword ptr [eax + 0x10], edi
        mov dword ptr [eax], 0x95da04
        mov dword ptr [eax + 0x18], edi
        mov dword ptr [eax + 0x1c], edi
        mov dword ptr [eax + 0x20], edi
        mov ebx, eax
        jmp short L_059CA2C
L_059CA2A:
        xor ebx, ebx
L_059CA2C:
        mov ecx, dword ptr [esi + 0x2dc]
        cmp ebx, ecx
        mov byte ptr [esp + 0x40], 0x13
        je short L_059CA47
        cmp ecx, edi
        je short L_059CA47
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_059CA47:
        mov dword ptr [esi + 0x2dc], ebx
        mov dword ptr [mem_00B40D08], esi
        lea eax, [esi + 0xfc]
        mov dword ptr [esi + 0x25c], eax
        mov dword ptr [esi + 0xf4], edi
        lea eax, [esi + 0x168]
        mov dword ptr [mem_00B40640], eax
        lea eax, [esi + 0x1c8]
        push 0x55c
        mov dword ptr [mem_00B40644], eax
        mov dword ptr [mem_00AEE8A8], eax
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        cmp eax, edi
        mov byte ptr [esp + 0x40], 0x16
        je short L_059CAA5
        mov ecx, eax
        call ext_0047FC70
        mov ebx, eax
        jmp short L_059CAA7
L_059CAA5:
        xor ebx, ebx
L_059CAA7:
        mov ecx, dword ptr [esi + 0x26c]
        cmp ebx, ecx
        mov byte ptr [esp + 0x40], 0x13
        je short L_059CAC2
        cmp ecx, edi
        je short L_059CAC2
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        call eax
L_059CAC2:
        push 0x95da88
        lea ecx, [esp + 0x20]
        mov dword ptr [esi + 0x26c], ebx
        call dword ptr [mem_00924FE4]
        sub esp, 0x8
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        lea edx, [esp + 0x24]
        push edx
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x50], 0x17
        call ext_00593F30
        call ext_00593EB0
        add esp, 0x8
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x40], 0x13
        call dword ptr [mem_00924FF4]
        push 0x8
        call ext_006A5C62
        mov ebx, eax
        add esp, 0x4
        mov dword ptr [esp + 0x18], ebx
        cmp ebx, edi
        mov byte ptr [esp + 0x40], 0x18
        je short L_059CB34
        mov ecx, ebx
        call ext_00661980
        mov dword ptr [ebx], 0x95d8bc
        mov dword ptr [ebx + 0x4], ebp
        jmp short L_059CB36
L_059CB34:
        xor ebx, ebx
L_059CB36:
        mov ecx, dword ptr [esi + 0x2f8]
        cmp ebx, ecx
        mov byte ptr [esp + 0x40], 0x13
        je short L_059CB51
        cmp ecx, edi
        je short L_059CB51
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_059CB51:
        mov ecx, esi
        mov dword ptr [esi + 0x2f8], ebx
        call ext_0059C7E0
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x34
        ret
    }
}
