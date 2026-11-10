// Decompiled translation unit: src/leaf/decompiled_7D0000.cpp

// [0x007D5C60] sub_007D5C60 (31 bytes)
extern "C" int mem_00AB28C4;
extern "C" void ext_007D59C0();

extern "C" __declspec(naked) void __cdecl fn_007D5C60(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add eax, 0x6c
        push eax
        call dword ptr [mem_00AB28C4]
        add esp, 4
        test eax, eax
        jne found
        ret
    found:
        mov dword ptr [esp + 4], eax
        jmp ext_007D59C0
    }
}

// [0x007D8570] sub_007D8570 (32 bytes)
extern "C" void __cdecl fn_007D8570(char* base, int index, float* out) {
    float* src = reinterpret_cast<float*>(base + index * 32);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}

// [0x007D8850] sub_007D8850 (12 bytes)
extern "C" void ext_007D8420();

extern "C" __declspec(naked) void __cdecl fn_007D8850(int a0, int a1) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push eax
        call ext_007D8420
        pop ecx
        ret
    }
}

// [0x007D8400] sub_007D8400 (18 bytes)
extern "C" void ext_007D87D0(void* a, void* b);

extern "C" void __cdecl fn_007D8400(void* self) {
    ext_007D87D0(*(void**)((char*)self + 0x68), self);
}

// [0x007D7A30] sub_007D7A30 (20 bytes)
extern "C" void ext_007F1530();
extern "C" int mem_00B61F78;

extern "C" int __cdecl fn_007D7A30(void) {
    ext_007F1530();
    return (*(char*)&mem_00B61F78 != 0) + 1;
}

// [0x007DC840] sub_007DC840 (21 bytes)
extern "C" void ext_007C8A50();

extern "C" void __cdecl fn_007DC840(int a0) {
    typedef void (__cdecl *Fn)(int, int, int);
    ((Fn)ext_007C8A50)(a0, 8, 0x007DC600);
}

// [0x007D4AF0] sub_007D4AF0 (22 bytes)
extern "C" void ext_007D4920();

extern "C" void __cdecl fn_007D4AF0(void* a1, void* a2) {
    typedef void (__cdecl *Fn)(void*, void*, void*);
    ((Fn)ext_007D4920)(a1, *(void**)a1, a2);
}

// [0x007DC860] sub_007DC860 (22 bytes)
extern "C" void ext_007DC770();
extern "C" void ext_007DC840();

extern "C" void __cdecl fn_007DC860(int a0) {
    typedef void (__cdecl *Fn)(int);
    ((Fn)ext_007DC770)(a0);
    ((Fn)ext_007DC840)(a0);
}

// [0x007DAD50] sub_007DAD50 (25 bytes)
extern "C" void ext_007CC8E0();
extern "C" int __cdecl fn_007DAD50(int a, int b) {
    ((void (__cdecl*)(int, int, int))ext_007CC8E0)(a, b, 0);
    return a;
}

extern "C" void ext_007CC930(void*);
extern "C" void ext_007DB130(void*);

// [0x007DB500] sub_007DB500 (25 bytes)
extern "C" void __cdecl fn_007DB500(void* self) {
    ext_007DB130(static_cast<char*>(self) + 0x10);
    ext_007CC930(self);
}


// [0x007DB090] sub_007DB090 (26 bytes)
extern "C" float __cdecl ext_007F5850(int, int, int);
extern "C" void __cdecl fn_007DB090(int a1, int a2, int a3) {
    ext_007F5850(a1, a2, a3);
}

// [0x007DFDE0] sub_007DFDE0 (29 bytes)
extern "C" void ext_007DFDC0();

extern "C" void __cdecl fn_007DFDE0(void* a1, void* a2) {
    typedef void (__cdecl *Fn1)(void*, void*);
    typedef void (__cdecl *Fn2)(void*);
    ((Fn1)ext_007DFDC0)(a1, a2);
    ((Fn2)(*(void**)((char*)a2 + 0x0c)))(a1);
}

// [0x007D47B0] sub_007D47B0 (29 bytes)
extern "C" void ext_007D58E0();

extern "C" void __cdecl fn_007D47B0(char* self) {
    typedef void (__cdecl *Fn)(int, void*, int, int);
    ((Fn)ext_007D58E0)(1, *(void**)(self + 0x1c), 0x0099DE5C, 0x0099DE60);
}

// [0x007D4650] sub_007D4650 (35 bytes)
extern "C" void __cdecl fn_007D4650(char* p) {
    int base = *(int*)(p + 0x4);
    int i = 0;
    if (*(int*)(p + 0x14) > 0) {
        do {
            *(int*)(*(char**)(p + 0x8) + i * 4) = base;
            base += *(int*)(p + 0x10);
            i++;
        } while (i < *(int*)(p + 0x14));
    }
}

// [0x007D4A70] sub_007D4A70 (35 bytes)
extern "C" void* __cdecl fn_007D4A70(void* self) {
    void** edx = (void**)self;
    void** ecx = (void**)*edx;
    if (ecx != edx) {
        void** eax = (void**)*ecx;
        if (eax != edx) {
            do {
                ecx = eax;
                eax = (void**)*eax;
            } while (eax != edx);
        }
    }
    return (ecx != edx) ? (void*)ecx : 0;
}

// [0x007DC8C0] sub_007DC8C0 (37 bytes)
extern "C" __declspec(naked) void fn_007DC8C0() {
    __asm {
        movzx ecx, word ptr [eax]
        cmp cx, 0x24
        je done
        movzx ecx, cx
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
loop_top:
        movsx ecx, cx
        cmp ecx, edx
        je done
        movzx ecx, word ptr [eax + 0xc]
        add eax, 0xc
        cmp cx, 0x24
        jne loop_top
done:
        ret
    }
}

// [0x007D48C0] sub_007D48C0 (38 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D48C0(void) {
    __asm {
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [edx + 0x8], eax
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], edx
        cmp eax, dword ptr [edx]
        jne short notequal
        mov dword ptr [edx], ecx
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x8], ecx
        ret
    notequal:
        mov dword ptr [edx + 0x4], ecx
        mov dword ptr [ecx], eax
        mov dword ptr [eax + 0x8], ecx
        ret
    }
}

// [0x007D6260] sub_007D6260 (38 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D6260(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 1Ch]
        mov edx, dword ptr [ecx + 10h]
        push eax
        call edx
        add esp, 4
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
    done:
        pop esi
        ret
    }
}

// [0x007D5DA0] sub_007D5DA0 (39 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D5DA0(void) {
    __asm {
        push ecx
        mov dword ptr [esp], 0x0
        fnstcw word ptr [esp]
        mov eax, dword ptr [esp + 8]
        and eax, 0x3
        shl eax, 8
        mov edx, dword ptr [esp]
        and edx, 0x7f
        or eax, edx
        mov dword ptr [esp], eax
        fnclex
        fldcw word ptr [esp]
        pop ecx
        ret
    }
}

// [0x007DEC80] sub_007DEC80 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DEC80(void* self) {
    __asm {
        mov dx, word ptr [esp + 4]
        fld dword ptr [esp + 8]
        mov word ptr [eax + 14h], dx
        fstp dword ptr [eax + 8]
        lea edx, [ecx + 8]
        mov dword ptr [eax], edx
        lea edx, [ecx + 14h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + 0ch], ecx
        ret
    }
}

// [0x007D48F0] sub_007D48F0 (40 bytes)
extern "C" __declspec(naked) void fn_007D48F0() {
    __asm {
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax], edx
        mov dword ptr [edx + 0x8], eax
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], edx
        cmp eax, dword ptr [edx + 0x4]
        jne not_left
        mov dword ptr [edx + 0x4], ecx
        mov dword ptr [ecx + 0x4], eax
        mov dword ptr [eax + 0x8], ecx
        ret
    not_left:
        mov dword ptr [edx], ecx
        mov dword ptr [ecx + 0x4], eax
        mov dword ptr [eax + 0x8], ecx
        ret
    }
}

// [0x007DAD70] sub_007DAD70 (40 bytes)
extern "C" void ext_007D5950();

extern "C" __declspec(naked) void __cdecl fn_007DAD70(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0xc]
        mov eax, dword ptr [edx + 0xb0]
        mov dword ptr [esp + 0xc], 0x99e1e0
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 4], 0
        jmp ext_007D5950
    }
}

// [0x007DB060] sub_007DB060 (40 bytes)
extern "C" int __cdecl fn_007DB060(float* src, float* out_xyz, float* out_w) {
    out_xyz[0] = src[0x40 / 4];
    out_xyz[1] = src[0x44 / 4];
    out_xyz[2] = src[0x48 / 4];
    *out_w = src[0x3c / 4];
    return 1;
}

// [0x007DB8B0] sub_007DB8B0 (40 bytes)
extern "C" int __cdecl fn_007DB8B0(float* src, float* out_xyz, float* out_w) {
    out_xyz[0] = src[0x24 / 4];
    out_xyz[1] = src[0x28 / 4];
    out_xyz[2] = src[0x2c / 4];
    *out_w = src[0x20 / 4];
    return 1;
}

// [0x007DFD80] sub_007DFD80 (42 bytes)
extern "C" __declspec(naked) void __cdecl fn_007DFD80(void** out, int n, void* obj) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [esi*4]
        push eax
        call edx
        mov ecx, dword ptr [esp + 0xc]
        add esp, 4
        mov dword ptr [ecx + 4], esi
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 8], 0
        pop esi
        ret
    }
}

// [0x007DFE00] sub_007DFE00 (34 bytes)
extern "C" void ext_007DFD80();

extern "C" void* __cdecl fn_007DFE00(int a1, void* a2) {
    typedef void* (__cdecl *AllocFn)(int);
    typedef void (__cdecl *FillFn)(void*, int, void*);
    void* esi = ((AllocFn)(*(void**)a2))(0xc);
    ((FillFn)ext_007DFD80)(esi, a1, a2);
    return esi;
}

// [0x007DAE50] sub_007DAE50 (43 bytes)
extern "C" void ext_007DAD50();

extern "C" __declspec(naked) void __cdecl fn_007DAE50(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 8]
        push 0x10
        push 0x20
        call ecx
        add esp, 8
        test eax, eax
        je zero
        push esi
        push eax
        call ext_007DAD50
        add esp, 8
        pop esi
        ret
    zero:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007D8420] sub_007D8420 (43 bytes)
extern "C" void* __cdecl ext_007C9270(void* a0);
extern "C" void __cdecl ext_007D8400(void* a0);
extern "C" int mem_00AB28C8;

extern "C" void __cdecl fn_007D8420(void* a0) {
    char* self = (char*)a0;
    char* edi = (char*)ext_007C9270(*(void**)(self + 0x68));
    ext_007D8400(self);
    reinterpret_cast<void (__cdecl*)(void*, void*)>(mem_00AB28C8)(edi + 0x15c, self);
}

// [0x007D86C0] sub_007D86C0 (36 bytes)
extern "C" void __cdecl fn_007D86C0(void* self) {
    typedef void (__cdecl *Fn)(void*);
    char* cur = *(char**)((char*)self + 0x168);
    while (cur) {
        char* next = *(char**)(cur + 0x5c);
        ((Fn)ext_007D8420)(cur);
        cur = next;
    }
}

// [0x007D5B30] sub_007D5B30 (45 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D5B30(void* a1, void* a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [ecx + 0x20]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        and eax, 0xff
        lea eax, [eax + 4*eax]
        push esi
        push edx
        mov edx, dword ptr [ecx + 8*eax + 0xc]
        call edx
        add esp, 0xc
        pop esi
        ret
    }
}

// [0x007DD130] sub_007DD130 (45 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_007DD130(void* self, int edx_unused, int index) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl fail
        cmp eax, dword ptr [ecx + 0xc]
        jge fail
        mov ecx, dword ptr [ecx + 0x10]
        mov edx, eax
        imul edx, edx, 0x9c
        add ecx, edx
        cmp dword ptr [ecx + 0x8], eax
        je found
    fail:
        xor al, al
        ret 4
    found:
        mov eax, dword ptr [ecx + 0x10]
        and eax, 1
        ret 4
    }
}

// [0x007D47D0] sub_007D47D0 (46 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D47D0(void) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x1c], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax], 0x2
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], 0x0
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x10], edx
        ret
    }
}

// [0x007D8860] sub_007D8860 (46 bytes)
extern "C" void ext_007C9260();
extern "C" void ext_007D8700();

extern "C" __declspec(naked) void __cdecl fn_007D8860(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        jne done
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x94], eax
        mov dword ptr [esi + 0x98], ecx
    done:
        pop esi
        ret
    }
}

// [0x007D8890] sub_007D8890 (43 bytes)
extern "C" void ext_007D8710();
extern "C" void ext_007D8860();

extern "C" __declspec(naked) void __cdecl fn_007D8890(void) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x40]
        mov edx, dword ptr [ecx + 0x5f0]
        mov ecx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        call ext_007D8710
        add esp, 0x4
        push eax
        call ext_007D8860
        add esp, 0x10
        ret
    }
}

// [0x007DB9E0] sub_007DB9E0 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DB9E0(void* self) {
    __asm {
        fldz
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x10]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fchs
        fstp dword ptr [eax + 0xc]
        fld dword ptr [ecx + 0x4]
        fchs
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [ecx]
        fchs
        fstp dword ptr [eax + 0x1c]
        ret
    }
}

// [0x007D6290] sub_007D6290 (52 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D6290(void* self, int state) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp eax, edi
        je done
        cmp dword ptr [esi + 0x14], 0
        jne store
        cmp eax, 1
        jne store
        mov eax, dword ptr [esi]
        test eax, eax
        je store
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 0x10]
        push eax
        call edx
        add esp, 4
    store:
        mov dword ptr [esi + 0x10], edi
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x007D6220] sub_007D6220 (53 bytes)
extern "C" void __cdecl fn_007D6220(void* self, unsigned int a1, int a2) {
    char* p = reinterpret_cast<char*>(self);
    *reinterpret_cast<unsigned int*>(p + 0xc) = (a1 < 4) ? 4u : a1;
    *reinterpret_cast<int*>(p + 0x14) = 0;
    *reinterpret_cast<int*>(p + 0x8) = 0;
    *reinterpret_cast<int*>(p + 0x0) = 0;
    *reinterpret_cast<int*>(p + 0x4) = 0;
    *reinterpret_cast<int*>(p + 0x18) = 1;
    *reinterpret_cast<int*>(p + 0x10) = 1;
    *reinterpret_cast<int*>(p + 0x1c) = a2;
}

// [0x007D4860] sub_007D4860 (54 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D4860(void) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        push esi
        mov esi, dword ptr [esp + 0x8]
        je done
        cmp dword ptr [esi + 0x10], 0x0
        jne alt
        mov eax, dword ptr [esi + 0x1c]
        mov eax, dword ptr [eax + 0xc]
        jmp docall
    alt:
        mov edx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [edx + 0x10]
    docall:
        push ecx
        call eax
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x4
        test eax, eax
        jle done
        add eax, -0x1
        mov dword ptr [esi + 0x4], eax
    done:
        pop esi
        ret
    }
}

// [0x007D4720] sub_007D4720 (55 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D4720(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        cmp dword ptr [esi + 0x14], 0
        jle done
        cmp dword ptr [esi + 0x18], 0
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi + 0x1c]
        push ecx
        je use_c
        mov edx, dword ptr [eax + 0x10]
        jmp do_call
    use_c:
        mov edx, dword ptr [eax + 0xc]
    do_call:
        call edx
        mov eax, dword ptr [esi + 0x1c]
        mov ecx, dword ptr [esi + 0x8]
        add esp, 4
        pop esi
        mov dword ptr [esp + 4], ecx
        mov edx, dword ptr [eax + 0xc]
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x007D6360] sub_007D6360 (55 bytes)
extern "C" void __cdecl fn_007D6360(char* self, void* a2) {
    if (*(int*)(self + 0x14) != 0) {
        if (*(int*)(self + 0x10) == 2) {
            void* obj = *(void**)(self + 0x1c);
            void (*fp)(void*) = *(void (**)(void*))((char*)obj + 0x10);
            fp(a2);
            *(int*)(self + 0x0) = 0;
            *(int*)(self + 0x4) = 0;
        }
        *(int*)(self + 0x14) = 0;
    }
}

// [0x007D4B50] sub_007D4B50 (59 bytes)
extern "C" void fn_007D4B10();
extern "C" void fn_007D4B20();

extern "C" void __cdecl fn_007D4B50(void* self, unsigned int a1, unsigned int a2) {
    char* p = (char*)self;
    *(unsigned int*)(p + 0x20) = a2;
    *(void**)(p + 0x24) = (void*)fn_007D4B10;
    *(void**)(p + 0x28) = (void*)fn_007D4B20;
    *(unsigned int*)(p + 0x2c) = 0;
    *(unsigned int*)(p + 0x18) = 0;
    *(unsigned int*)(p + 0x1c) = a1;
    *(void**)(p + 0x0) = self;
    *(void**)(p + 0x4) = self;
    *(void**)(p + 0x8) = self;
    *(unsigned int*)(p + 0xc) = 1;
    *(unsigned int*)(p + 0x30) = 0;
}

// [0x007D5AF0] sub_007D5AF0 (59 bytes)
typedef int (__cdecl *fn_007D5AF0_cb)(void*, void*, void*);
extern "C" void __cdecl fn_007D5AF0(void* a1, void* a2, void* a3) {
    unsigned char* obj = (unsigned char*)a1;
    unsigned char* inner = *(unsigned char**)obj;
    unsigned int idx = (*(unsigned int*)inner) & 0xff;
    unsigned char* mid = *(unsigned char**)(inner + 0xc);
    unsigned char* table = *(unsigned char**)(mid + 0x20);
    fn_007D5AF0_cb cb = *(fn_007D5AF0_cb*)(table + 40 * idx + 4);
    if (cb(a1, a2, a3)) {
        *(unsigned int*)(obj + 0x24) |= 1;
    } else {
        *(unsigned int*)(obj + 0x24) &= ~1u;
    }
}

// [0x007D4820] sub_007D4820 (60 bytes)
extern "C" __declspec(naked) int __cdecl fn_007D4820(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [esi + 0xc]
        jl fn4820_body
    fn4820_zero:
        xor eax, eax
        pop esi
        ret
    fn4820_body:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [esi + 0x8]
        jne fn4820_two
        mov eax, dword ptr [ecx]
        push edx
        call eax
        add esp, 4
        jmp fn4820_after
    fn4820_two:
        push eax
        mov eax, dword ptr [ecx + 8]
        push edx
        call eax
        add esp, 8
    fn4820_after:
        test eax, eax
        je fn4820_zero
        add dword ptr [esi + 4], 1
        pop esi
        ret
    }
}

// [0x007D59C0] sub_007D59C0 (60 bytes)
extern "C" int mem_0099D148;
extern "C" int mem_0093C1A8;
extern "C" __declspec(naked) void __cdecl fn_007D59C0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [mem_0099D148]
        xor ecx, ecx
        mov dword ptr [eax + 0x20], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x24], ecx
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [mem_0093C1A8]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x18]
        fstp dword ptr [eax + 0x1c]
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], ecx
        ret
    }
}

// [0x007D5B60] sub_007D5B60 (61 bytes)
extern "C" int __cdecl fn_007D5B60(void* self, void* out_a, void* out_b) {
    unsigned char* p = (unsigned char*)self;
    if (!(p[0x24] & 1)) {
        return 0;
    }
    float* f = (float*)self;
    float* a = (float*)out_a;
    float* b = (float*)out_b;
    a[0] = f[2];
    a[1] = f[3];
    a[2] = f[4];
    b[0] = f[5];
    b[1] = f[6];
    b[2] = f[7];
    return 1;
}

// [0x007DCAC0] sub_007DCAC0 (61 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DCAC0(void* self) {
    __asm {
        push esi
        mov ecx, edx
        sar ecx, 0x10
        mov esi, edx
        and esi, 0xffff
        xor ecx, esi
        mov esi, dword ptr [eax + 0x8]
        mov eax, dword ptr [eax]
        sub esi, 0x1
        and ecx, esi
        cmp dword ptr [eax + 4*ecx], 0x0
        lea ecx, [eax + 4*ecx]
        pop esi
        je not_found
chain_loop:
        mov eax, dword ptr [ecx]
        cmp dword ptr [eax + 0x8], edx
        je found
        cmp dword ptr [eax + 0x10], 0x0
        lea ecx, [eax + 0x10]
        jne chain_loop
not_found:
        xor eax, eax
        ret
found:
        mov edx, dword ptr [eax + 0x10]
        mov dword ptr [ecx], edx
        ret
    }
}

// [0x007D4AA0] sub_007D4AA0 (64 bytes)
extern "C" __declspec(naked) void* __cdecl fn_007D4AA0(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 4]
        cmp ecx, edx
        je r4aa0_root
        mov eax, ecx
        mov ecx, dword ptr [eax]
        cmp ecx, edx
        je r4aa0_out
    r4aa0_l1:
        mov eax, ecx
        mov ecx, dword ptr [ecx]
        cmp ecx, edx
        jne r4aa0_l1
        ret
    r4aa0_root:
        mov ecx, dword ptr [eax + 8]
        cmp ecx, edx
        je r4aa0_tail
    r4aa0_l2:
        cmp eax, dword ptr [ecx + 4]
        jne r4aa0_tail
        mov eax, ecx
        mov ecx, dword ptr [ecx + 8]
        cmp ecx, edx
        jne r4aa0_l2
    r4aa0_tail:
        mov eax, ecx
        sub eax, edx
        neg eax
        sbb eax, eax
        and eax, ecx
    r4aa0_out:
        ret
    }
}

// [0x007DA820] sub_007DA820 (46 bytes)
extern "C" void ext_007D4AA0();
extern "C" __declspec(naked) void* __cdecl fn_007DA820(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        push esi
        je da820_zero
        mov esi, dword ptr [esp + 8]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    da820_loop:
        mov ecx, dword ptr [eax + 0x14]
        test byte ptr [ecx + 0x1c4], 2
        je da820_done
        push eax
        push esi
        call ext_007D4AA0
        add esp, 8
        test eax, eax
        jne da820_loop
    da820_zero:
        xor eax, eax
    da820_done:
        pop esi
        ret
    }
}

// [0x007DFD30] sub_007DFD30 (65 bytes)
typedef void (__cdecl *Fn007DFD30Cb)(void*);
extern "C" void __cdecl fn_007DFD30(void* self) {
    char* esi = (char*)self;
    char* edi = *(char**)(*(char**)esi);
    Fn007DFD30Cb cb0 = *(Fn007DFD30Cb*)(esi + 0x14);
    if (cb0) {
        cb0(esi);
    }
    Fn007DFD30Cb cb1 = *(Fn007DFD30Cb*)(edi + 0x90);
    if (cb1) {
        cb1(esi);
    }
    Fn007DFD30Cb cb2 = *(Fn007DFD30Cb*)(edi + 0x94);
    if (cb2) {
        cb2(esi);
    }
    *(void**)(esi + 0x14) = 0;
}

// [0x007DFCE0] sub_007DFCE0 (68 bytes)
extern "C" void ext_007C8880();
extern "C" __declspec(naked) void __cdecl fn_007DFCE0(void* self, void* a, void* b) {
    __asm {
        mov eax, dword ptr [esp+8]
        mov ecx, dword ptr [esp+0xc]
        push esi
        mov esi, dword ptr [esp+8]
        mov dword ptr [esi], eax
        mov dword ptr [esi+4], ecx
        mov edx, dword ptr [eax]
        push edx
        call ext_007C8880
        xor ecx, ecx
        mov dword ptr [esi+0xc], eax
        mov eax, dword ptr [esi]
        mov dword ptr [esi+0x10], ecx
        mov dword ptr [esi+0x1c], ecx
        mov dword ptr [esi+0x18], ecx
        mov dword ptr [esi+0x14], ecx
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax+0x98]
        add esp, 4
        cmp eax, ecx
        je fn_007DFCE0_done
        push esi
        call eax
        add esp, 4
fn_007DFCE0_done:
        pop esi
        ret
    }
}
