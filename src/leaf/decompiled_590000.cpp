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
