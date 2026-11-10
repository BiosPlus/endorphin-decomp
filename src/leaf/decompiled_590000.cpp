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
