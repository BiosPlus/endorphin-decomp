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
extern "C" void ext_007CC9E0();
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

// [0x007D9630] sub_007D9630 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_007D9630(void* ecx_unused, int edx_unused, int* out, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        cdq
        idiv esi
        cmp esi, 0x1
        mov ecx, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [ecx], edi
        mov dword ptr [ecx + 0x8], 0x0
        lea edx, [eax + edi]
        mov dword ptr [ecx + 0x4], edx
        jle fn_007D9630_done
        add ecx, 0x20
        add esi, -0x1
        nop
fn_007D9630_loop:
        mov edx, dword ptr [ecx - 0x1c]
        mov dword ptr [ecx - 0x8], edx
        add edx, eax
        mov dword ptr [ecx], 0x0
        mov dword ptr [ecx - 0x4], edx
        add ecx, 0x18
        sub esi, 0x1
        jne fn_007D9630_loop
fn_007D9630_done:
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x007D6660] sub_007D6660 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_007D6660(void* self) {
    __asm {
        mov ecx, eax
        and ecx, 0x80000003
        jns no_neg_fix
        dec ecx
        or ecx, -4
        inc ecx
no_neg_fix:
        je no_adjust
        sub eax, ecx
        add eax, 4
no_adjust:
        mov ecx, dword ptr [esi + 0x14]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ecx, -1
        cmp eax, ecx
        mov edx, eax
        jl clamp_lo
        mov edx, ecx
clamp_lo:
        test edx, edx
        jge in_range
        mov ecx, dword ptr [esi + 0x10]
        xor eax, eax
        add dword ptr [ecx + 4*eax], 1
        lea eax, [ecx + 4*eax]
        ret
in_range:
        cmp eax, ecx
        jl index_ok
        mov eax, ecx
index_ok:
        mov ecx, dword ptr [esi + 0x10]
        add dword ptr [ecx + 4*eax], 1
        lea eax, [ecx + 4*eax]
        ret
    }
}

// [0x007DB130] sub_007DB130 (83 bytes)
extern "C" __declspec(naked) void __stdcall fn_007DB130(void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0x14]
        add esp, 0x14
        pop esi
        mov dword ptr [esp + 0x4], ecx
        mov edx, dword ptr [eax + 0xc]
        jmp edx
    }
}

// [0x007D6AA0] sub_007D6AA0 (89 bytes)
struct Dec007D6AA0Buf {
    int* data;
    int count;
};

extern "C" void __cdecl fn_007D6AA0(Dec007D6AA0Buf* a1, Dec007D6AA0Buf* a2, const int* src, int n) {
    int i = 0;
    if (n != 0) {
        do {
            a1->data[i] = src[i] + 0x10;
            a2->data[i] = src[i] + 0x30;
            ++i;
        } while (i != n);
    }
    a1->count = n;
    a2->count = n;
}

// [0x007DFE30] sub_007DFE30 (96 bytes)
extern "C" int __fastcall fn_007DFE30(float* self) {
    int esi = self[0] > self[1];
    int edx = self[0] > self[2];
    int eax = self[1] > self[2];
    int sh = (esi << 4) | (edx << 3) | (eax << 2);
    return (0x21312300 >> sh) & 3;
}

// [0x007DB6C0] sub_007DB6C0 (96 bytes)
extern "C" __declspec(naked) void __cdecl fn_007DB6C0(void* self) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        test edi, edi
        je short L_end
        push esi
        xor esi, esi
        cmp dword ptr [edi + 0x1c], esi
        jle short L_post
L_loop:
        mov eax, dword ptr [edi + 0x14]
        cmp dword ptr [eax + 4*esi], 0x0
        lea eax, [eax + 4*esi]
        je short L_post
        mov ecx, dword ptr [eax]
        push ecx
        call ext_007CC9E0
        add esi, 0x1
        add esp, 0x4
        cmp esi, dword ptr [edi + 0x1c]
        jl short L_loop
L_post:
        mov edx, dword ptr [edi + 0xc]
        mov eax, dword ptr [edx + 0xb0]
        mov ecx, dword ptr [edi + 0x14]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [edi + 0xc]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [edi + 0x10]
        mov eax, dword ptr [ecx + 0x10]
        push edx
        call eax
        push edi
        call ext_007CC930
        add esp, 0xc
        pop esi
L_end:
        pop edi
        ret
    }
}

// [0x007DCBB0] sub_007DCBB0 (97 bytes)
extern "C" void ext_007D6260(void* a);
extern "C" void ext_007D6360(void* a, int b);
extern "C" void ext_007DCAA0(int a, void* b);
extern "C" int mem_00AB28BC;

extern "C" void __cdecl fn_007DCBB0(void* self) {
    char* s = (char*)self;
    typedef void (__cdecl *fn_int)(int);
    typedef void (__cdecl *fn_self)(void*);
    ext_007DCAA0(*(int*)(s + 0x28), *(void**)(s + 0x64));
    ((fn_int)mem_00AB28BC)(*(int*)(s + 0x30));
    (*(fn_int*)(*(char**)(s + 0x64) + 0xc))(*(int*)(s + 0x30));
    ((fn_int)mem_00AB28BC)(*(int*)(s + 0x2c));
    (*(fn_int*)(*(char**)(s + 0x64) + 0xc))(*(int*)(s + 0x2c));
    ext_007D6360(s + 0x44, *(int*)(s + 0x44));
    ext_007D6260(s + 0x44);
    (*(fn_self*)(*(char**)(s + 0x64) + 0xc))(self);
}

// [0x007DD040] sub_007DD040 (81 bytes)
extern "C" void ext_007DCBB0(int a);

extern "C" __declspec(naked) void __fastcall fn_007DD040(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ecx + 0xc]
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx + 0xb0]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [edx + 0xc]
        push eax
        call ecx
        mov edx, dword ptr [esi + 0x2c]
        push edx
        call ext_007DCBB0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        add esp, 0xc
        push 0
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [ecx + 0xc]
        push esi
        call edx
        add esp, 4
        pop esi
        ret
    }
}

// [0x007D8760] sub_007D8760 (98 bytes)
extern "C" int mem_0099E0B0;

extern "C" void __cdecl fn_007D8760(void* a, void* b) {
    char* p = reinterpret_cast<char*>(a);
    char* n = reinterpret_cast<char*>(b);
    if (*reinterpret_cast<int*>(p + 0x168) == mem_0099E0B0) {
        *reinterpret_cast<char**>(p + 0x16c) = n;
        *reinterpret_cast<char**>(p + 0x168) = n;
        *reinterpret_cast<int*>(n + 0x60) = mem_0099E0B0;
        *reinterpret_cast<int*>(n + 0x5c) = mem_0099E0B0;
        *reinterpret_cast<char**>(n + 0x68) = p;
        ++*reinterpret_cast<int*>(p + 0x164);
    } else {
        *reinterpret_cast<char**>(n + 0x60) = *reinterpret_cast<char**>(p + 0x16c);
        *reinterpret_cast<char**>(*reinterpret_cast<char**>(p + 0x16c) + 0x5c) = n;
        *reinterpret_cast<char**>(p + 0x16c) = n;
        *reinterpret_cast<char**>(n + 0x68) = p;
        ++*reinterpret_cast<int*>(p + 0x164);
    }
}

// [0x007D83B0] sub_007D83B0 (68 bytes)
extern "C" void __cdecl ext_006A6E8C(void* dst, int value, unsigned int count);
extern "C" void __cdecl ext_007CCAB0(char* self);
extern "C" void __cdecl ext_007D8760(void* a, void* b);

extern "C" __declspec(naked) void* __cdecl fn_007D83B0(void* self, void* arg2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0xd8
        push 0x0
        push esi
        call ext_006A6E8C
        fld1
        fst dword ptr [esi + 0x6c]
        lea eax, [esi + 0x84]
        fstp dword ptr [esi + 0x50]
        push eax
        fld dword ptr [mem_0099D148]
        fstp dword ptr [esi + 0xd0]
        call ext_007CCAB0
        mov ecx, dword ptr [esp + 0x1c]
        push esi
        push ecx
        call ext_007D8760
        add esp, 0x18
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007D8680] sub_007D8680 (51 bytes)
extern "C" void ext_007D83B0();
extern "C" int mem_00AB28C4;

extern "C" int __cdecl fn_007D8680(int a0) {
    typedef int (__cdecl *FnB)(int);
    typedef void (__cdecl *FnC)(int, int);
    int r = (int)ext_007C9270((void*)a0) + 0x15c;
    int esi = ((FnB)mem_00AB28C4)(r);
    if (esi == 0) {
        return 0;
    }
    ((FnC)ext_007D83B0)(esi, a0);
    return esi;
}

// [0x007D87D0] sub_007D87D0 (99 bytes)
extern "C" int mem_0099E0B0;

extern "C" void __cdecl fn_007D87D0(char* self, char* node) {
    if (*(char**)(self + 0x168) == node) {
        *(int*)(self + 0x168) = *(int*)(node + 0x5c);
    } else {
        *(int*)(*(char**)(node + 0x60) + 0x5c) = *(int*)(node + 0x5c);
    }
    if (*(char**)(self + 0x16c) == node) {
        *(int*)(self + 0x16c) = *(int*)(node + 0x60);
    } else {
        *(int*)(*(char**)(node + 0x5c) + 0x60) = *(int*)(node + 0x60);
    }
    *(int*)(node + 0x60) = mem_0099E0B0;
    *(int*)(node + 0x5c) = mem_0099E0B0;
    *(int*)(node + 0x68) = 0;
    *(int*)(self + 0x164) -= 1;
}

// [0x007D5870] sub_007D5870 (105 bytes)
extern "C" int mem_009252FC;

extern "C" void __cdecl fn_007D5870(int p0, char* sink, const char* fmt, ...) {
    char buf[0x1388];
    char* ap = reinterpret_cast<char*>(&fmt) + sizeof(fmt);
    typedef int (__cdecl *vsnprintf_t)(char*, unsigned int, const char*, char*);
    reinterpret_cast<vsnprintf_t>(mem_009252FC)(buf, 0x1388, fmt, ap);
    typedef void (__cdecl *cb_t)(int, char*, int);
    cb_t cb = *reinterpret_cast<cb_t*>(sink + 0x18);
    cb(0, buf, *reinterpret_cast<int*>(sink + 0x1c));
}

// [0x007D58E0] sub_007D58E0 (105 bytes)
extern "C" void __cdecl fn_007D58E0(int p0, char* sink, const char* fmt, ...) {
    char buf[0x1388];
    char* ap = reinterpret_cast<char*>(&fmt) + sizeof(fmt);
    typedef int (__cdecl *vsnprintf_t)(char*, unsigned int, const char*, char*);
    reinterpret_cast<vsnprintf_t>(mem_009252FC)(buf, 0x1388, fmt, ap);
    typedef void (__cdecl *cb_t)(int, char*, int);
    cb_t cb = *reinterpret_cast<cb_t*>(sink + 0x18);
    cb(1, buf, *reinterpret_cast<int*>(sink + 0x1c));
}

// [0x007D5950] sub_007D5950 (105 bytes)
extern "C" void __cdecl fn_007D5950(int p0, char* sink, const char* fmt, ...) {
    char buf[0x1388];
    char* ap = reinterpret_cast<char*>(&fmt) + sizeof(fmt);
    typedef int (__cdecl *vsnprintf_t)(char*, unsigned int, const char*, char*);
    reinterpret_cast<vsnprintf_t>(mem_009252FC)(buf, 0x1388, fmt, ap);
    typedef void (__cdecl *cb_t)(int, char*, int);
    cb_t cb = *reinterpret_cast<cb_t*>(sink + 0x18);
    cb(2, buf, *reinterpret_cast<int*>(sink + 0x1c));
}

// [0x007DADD0] sub_007DADD0 (49 bytes)
extern "C" void ext_007D58E0();
extern "C" int mem_00AB29F0;

extern "C" void __cdecl fn_007DADD0(char* a1) {
    typedef void (__cdecl *Fn)(int, void*, int);
    if (mem_00AB29F0) {
        void* edx = *(void**)(*(char**)(a1 + 0x0c) + 0xb0);
        ((Fn)ext_007D58E0)(0, edx, 0x0099E250);
    }
    mem_00AB29F0 = 0;
}

// [0x007D4800] sub_007D4800 (32 bytes)
extern "C" void ext_007D5950();

extern "C" __declspec(naked) void __cdecl fn_007D4800(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        je done
        push eax
        mov eax, dword ptr [ecx + 0x1c]
        push 0x99de84
        push eax
        push 0
        call ext_007D5950
        add esp, 0x10
done:
        ret
    }
}

// [0x007DADA0] sub_007DADA0 (33 bytes)
extern "C" __declspec(naked) void __cdecl fn_007DADA0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [ecx + 0xb0]
        push 0x99e218
        push edx
        push 0
        call ext_007D5950
        add esp, 0xc
        xor ax, ax
        ret
    }
}

// [0x007D7190] sub_007D7190 (55 bytes)
extern "C" void ext_007D5950();

extern "C" __declspec(naked) void __cdecl fn_007D7190(int* p, int a2, int a3, int a4, int a5) {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 0x10]
        push esi
        add ecx, eax
        xor esi, esi
        cmp ecx, dword ptr [esp + 0x10]
        jg slow
        mov esi, dword ptr [esp + 0xc]
        add eax, esi
        mov dword ptr [edx], ecx
        pop esi
        ret
    slow:
        mov edx, dword ptr [esp + 0x1c]
        push 0x99df2c
        push edx
        push 0
        call ext_007D5950
        add esp, 0xc
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007D9680] sub_007D9680 (59 bytes)
extern "C" void ext_007D5950();

extern "C" __declspec(naked) void __cdecl fn_007D9680(unsigned int* self, unsigned int n, int a3, int a4) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esp + 0x10]
        add eax, edi
        cmp eax, ecx
        jbe skip
        mov edx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        push ecx
        push 0x99e0d8
        push edx
        push 3
        call ext_007D5950
        add esp, 0x1c
    skip:
        mov eax, dword ptr [esi]
        lea ecx, [eax + edi]
        pop edi
        mov dword ptr [esi], ecx
        pop esi
        ret
    }
}

// [0x007DCA30] sub_007DCA30 (106 bytes)
extern "C" __declspec(naked) void* __cdecl fn_007DCA30(int a1, int n, void* alloc) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov eax, dword ptr [edi]
        push 0xc
        call eax
        mov ecx, dword ptr [esp + 0x10]
        mov esi, eax
        mov eax, dword ptr [esp + 0x14]
        add esp, 4
        cmp eax, 1
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi + 8], 1
        jle done_cap
        mov ecx, 1
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx]
    cap_loop:
        sar eax, 1
        add ecx, ecx
        cmp eax, 1
        jg cap_loop
        mov dword ptr [esi + 8], ecx
    done_cap:
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edi]
        add edx, edx
        add edx, edx
        push edx
        call eax
        mov dword ptr [esi], eax
        xor eax, eax
        add esp, 4
        cmp dword ptr [esi + 8], eax
        jle done_zero
    zero_loop:
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 4*eax], 0
        add eax, 1
        cmp eax, dword ptr [esi + 8]
        jl zero_loop
    done_zero:
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007DD160] sub_007DD160 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DD160(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0Ch]
        push ebp
        push edi
        mov edi, dword ptr [esp + 10h]
        cmp edi, ebx
        mov ebp, ecx
        jne short L_007DD179
        pop edi
        pop ebp
        xor al, al
        pop ebx
        ret 8
L_007DD179:
        mov eax, ebx
        sub eax, edi
        sar eax, 1Fh
        mov edx, eax
        mov ecx, eax
        not edx
        push esi
        mov esi, edx
        and eax, edi
        and ecx, ebx
        and edx, ebx
        or eax, edx
        and esi, edi
        or esi, ecx
        lea ecx, [esi + 1]
        lea edx, [esi + 2]
        imul edx, ecx
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr [ebp + 0Ch]
        imul edx, esi
        add eax, edx
        mov edx, dword ptr [ebp + 20h]
        mov ecx, eax
        sar eax, 1
        movzx eax, byte ptr [eax + edx]
        and cl, 1
        add cl, cl
        add cl, cl
        shr eax, cl
        pop esi
        pop edi
        pop ebp
        shr eax, 2
        not eax
        and eax, 1
        pop ebx
        ret 8
    }
}

// [0x007DCC20] sub_007DCC20 (110 bytes)
extern "C" __declspec(naked) int __cdecl fn_007DCC20(void* a1, void* a2, void* a3) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x8], 0x0
    L32:
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [eax + 0x28]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        jne L60
    L40:
        add dword ptr [ecx], 0x1
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx + 0x8]
        jge L55
        mov ebx, dword ptr [edx]
        cmp dword ptr [ebx + 4*eax], 0x0
        je L40
        cmp eax, dword ptr [edx + 0x8]
    L55:
        jne L5B
        xor eax, eax
        jmp L75
    L5B:
        mov edx, dword ptr [edx]
        mov eax, dword ptr [edx + 4*eax]
    L60:
        mov edx, dword ptr [eax + 0x10]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [esi + 0x8]
        mov ebp, dword ptr [eax + 0xc]
        mov ebx, dword ptr [esi]
        mov dword ptr [ebx + 4*edx], ebp
        add dword ptr [esi + 0x8], 0x1
    L75:
        mov edx, dword ptr [esi + 0x8]
        cmp edx, dword ptr [esi + 0x4]
        jge L81
        test eax, eax
        jne L32
    L81:
        xor ecx, ecx
        test eax, eax
        setne cl
        pop esi
        pop ebp
        pop ebx
        mov eax, ecx
        ret
    }
}

// [0x007DA8E0] sub_007DA8E0 (52 bytes)
extern "C" void ext_007C9280();

extern "C" __declspec(naked) void __cdecl fn_007DA8E0(void) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_007D8710
        push edi
        mov esi, eax
        call ext_007C9280
        mov ecx, dword ptr [esp + 0x14]
        add dword ptr [ecx], eax
        add esp, 0x8
        test esi, esi
        je L_007DA8E0_zero
        mov eax, dword ptr [esi + 0x164]
        add dword ptr [ecx + 0x4], eax
        pop edi
        pop esi
        ret
    L_007DA8E0_zero:
        add dword ptr [ecx + 0x8], 1
        pop edi
        pop esi
        ret
    }
}

// [0x007D5DD0] sub_007D5DD0 (117 bytes)
extern "C" int mem_009241A0;
extern "C" int mem_0092419C;
extern "C" __declspec(naked) void __cdecl fn_007D5DD0(void* self) {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0xc]
        xor ebx, ebx
        cmp dword ptr [edi + 0x294], ebx
        je epilogue
        cmp dword ptr [edi + 0x29c], ebx
        mov dword ptr [edi + 0x294], ebx
        jle epilogue
        push ebp
        mov ebp, dword ptr [mem_009241A0]
        push esi
        lea esi, [edi + 0x56c]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
loop_top:
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        call dword ptr [mem_0092419C]
        mov edx, dword ptr [esi]
        push eax
        push edx
        call ebp
        add ebx, 1
        add esi, 4
        cmp ebx, dword ptr [edi + 0x29c]
        jl loop_top
        pop esi
        xor ebx, ebx
        pop ebp
epilogue:
        mov dword ptr [edi + 0x298], ebx
        mov dword ptr [edi + 0x2a0], ebx
        mov dword ptr [edi + 0x294], ebx
        mov dword ptr [edi + 0x29c], 1
        pop edi
        pop ebx
        ret
    }
}

// [0x007D5BD0] sub_007D5BD0 (118 bytes)
extern "C" __declspec(naked) int __cdecl fn_007D5BD0(const char* a, const char* b) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx + 0x24]
        mov edx, dword ptr [esp + 0x8]
        and eax, dword ptr [edx + 0x24]
        and eax, 0x1
        je reject_007D5BD0
        fld dword ptr [ecx + 0x8]
        fld dword ptr [edx + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne reject_007D5BD0
        fld dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0x14]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne reject_007D5BD0
        fld dword ptr [ecx + 0xc]
        fld dword ptr [edx + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne reject_007D5BD0
        fld dword ptr [edx + 0xc]
        fld dword ptr [ecx + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne reject_007D5BD0
        fld dword ptr [ecx + 0x10]
        fld dword ptr [edx + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne reject_007D5BD0
        fld dword ptr [edx + 0x10]
        fld dword ptr [ecx + 0x1c]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne reject_007D5BD0
        mov eax, 0x1
        ret
reject_007D5BD0:
        xor eax, eax
        ret
    }
}

// [0x007DB640] sub_007DB640 (120 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DB640(void* self) {
    __asm {
        sub esp, 0ch
        fld dword ptr [ecx]
        fsub dword ptr [eax + 30h]
        fstp dword ptr [esp]
        fld dword ptr [ecx + 4]
        fsub dword ptr [eax + 34h]
        fstp dword ptr [esp + 4]
        fld dword ptr [ecx + 8]
        fsub dword ptr [eax + 38h]
        fstp dword ptr [esp + 8]
        fld dword ptr [eax + 4]
        fld dword ptr [esp + 4]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [eax]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [eax + 8]
        fld dword ptr [esp + 8]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [edx]
        fld dword ptr [eax + 14h]
        fmul st, st(2)
        fld dword ptr [eax + 10h]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [eax + 18h]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [edx + 4]
        fld dword ptr [eax + 24h]
        fmulp st(2), st
        fld dword ptr [eax + 20h]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [eax + 28h]
        faddp st(1), st
        fstp dword ptr [edx + 8]
        add esp, 0ch
        ret
    }
}

// [0x007D8600] sub_007D8600 (123 bytes)
extern "C" int mem_0092A278;
extern "C" int mem_0099E0B4;
extern "C" __declspec(naked) void __cdecl fn_007D8600(void* self, float x, float y, float z) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [ecx + 0x78]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [ecx + 0x7c]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [ecx + 0x80]
        fld dword ptr [ecx + 0x7c]
        fld dword ptr [ecx + 0x78]
        fld dword ptr [ecx + 0x80]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcomp dword ptr [mem_0099E0B4]
        fnstsw ax
        test ah, 0x41
        jne short L_7D8670
        or dword ptr [ecx + 0x90], 0x100
        ret
L_7D8670:
        and dword ptr [ecx + 0x90], 0xfffffeff
        ret
    }
}

// [0x007DB0B0] sub_007DB0B0 (123 bytes)
extern "C" void __cdecl fn_007DB0B0(char* self, void* (__cdecl** alloc)(unsigned int)) {
    *(void* (__cdecl***)(unsigned int))(self + 0x24) = alloc;
    *(void**)(self + 0x00) = (*alloc)(*(unsigned int*)(self + 0x18) * 12);
    *(void**)(self + 0x04) = (*alloc)(4 * *(unsigned int*)(self + 0x18) + 4);
    *(void**)(self + 0x08) = (*alloc)(*(unsigned int*)(self + 0x1C) * 12);
    *(void**)(self + 0x0C) = (*alloc)(4 * *(unsigned int*)(self + 0x1C) + 4);
    *(void**)(self + 0x10) = (*alloc)(*(unsigned int*)(self + 0x20) * 20);
    *(void**)(self + 0x14) = (*alloc)(*(unsigned int*)(self + 0x20) * 4);
}

// [0x007DEC00] sub_007DEC00 (124 bytes)
extern "C" double mem_00993830;

extern "C" __declspec(naked) void __fastcall fn_007DEC00(void* unused, void* self) {
    __asm {
        fld dword ptr [edx + 0x10]
        push esi
        fld qword ptr [mem_00993830]
        xor esi, esi
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [edx + 0x10]
        fld dword ptr [edx + 0x14]
        fmul st, st(1)
        fstp dword ptr [edx + 0x14]
        fld dword ptr [edx + 0x18]
        fmul st, st(1)
        fstp dword ptr [edx + 0x18]
        cmp dword ptr [edx + 0xc], esi
        jle L_7DEC78
        push ebx
        push edi
        xor edi, edi
    L_7DEC2C:
        mov eax, dword ptr [edx + 0x4]
        mov ecx, dword ptr [eax + edi + 0x20]
        mov ebx, dword ptr [eax + edi + 0x24]
        add eax, edi
        mov dword ptr [eax + 0x24], ecx
        movzx ecx, word ptr [eax + 0x1c]
        mov dword ptr [eax + 0x20], ebx
        mov ebx, ecx
        shl ebx, 8
        sar cx, 8
        add bx, cx
        mov word ptr [eax + 0x1c], bx
        add esi, 1
        fld dword ptr [eax + 0xc]
        add edi, 0x28
        fmul st, st(1)
        fstp dword ptr [eax + 0xc]
        fld dword ptr [eax + 0x10]
        fmul st, st(1)
        fstp dword ptr [eax + 0x10]
        fld dword ptr [eax + 0x14]
        fmul st, st(1)
        fstp dword ptr [eax + 0x14]
        cmp esi, dword ptr [edx + 0xc]
        jl L_7DEC2C
        pop edi
        pop ebx
    L_7DEC78:
        fstp st(0)
        pop esi
        ret
    }
}

// [0x007D62D0] sub_007D62D0 (131 bytes)
extern "C" int mem_0099DEF8;
extern "C" void ext_007D58E0();

extern "C" __declspec(naked) void __cdecl fn_007D62D0(void* self, int n) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp edi, dword ptr [esi + 0x4]
        jle L_7D6347
        cmp dword ptr [esi + 0x18], 0x0
        jne L_7D62F8
        mov eax, dword ptr [esi + 0x1c]
        push offset mem_0099DEF8
        push eax
        push 0x0
        call ext_007D58E0
        add esp, 0xc
    L_7D62F8:
        mov eax, dword ptr [esi]
        test eax, eax
        je L_7D6317
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [ecx + 0x10]
        push eax
        call edx
        add esp, 0x4
        mov dword ptr [esi], 0x0
        mov dword ptr [esi + 0x4], 0x0
    L_7D6317:
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi + 0x1c]
        mov edx, dword ptr [eax + 0x8]
        push ecx
        push edi
        call edx
        add esp, 0x8
        test eax, eax
        mov dword ptr [esi], eax
        je L_7D6330
        mov dword ptr [esi + 0x4], edi
    L_7D6330:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esi + 0x14], 0x1
        jle L_7D634E
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        ret
    L_7D6347:
        mov dword ptr [esi + 0x14], 0x1
    L_7D634E:
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        ret
    }
}

// [0x007DA850] sub_007DA850 (114 bytes)
extern "C" void* __cdecl ext_007D62D0(void* a0, int n);

extern "C" __declspec(naked) void* __cdecl fn_007DA850(void* a1, int n, int m) {
    __asm {
        push ebx
        mov ecx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        lea ebx, [edi + 2*edi]
        lea esi, [4*edi]
        add ebx, ebx
        add ebx, ebx
        lea eax, [ebx + 4*ebp + 0x40]
        add eax, esi
        add eax, esi
        add eax, esi
        add eax, esi
        add eax, esi
        push eax
        push ecx
        call ext_007D62D0
        lea ecx, [eax + 0x40]
        mov dword ptr [eax + 0x18], ecx
        add ecx, esi
        mov dword ptr [eax + 0x1c], ecx
        add ecx, esi
        mov dword ptr [eax + 0x14], ecx
        add ecx, esi
        mov dword ptr [eax + 0x4], ecx
        add ecx, esi
        add esp, 0x8
        mov dword ptr [eax + 0x8], ecx
        add ecx, esi
        mov dword ptr [eax + 0x28], ecx
        add ecx, ebx
        mov dword ptr [eax + 0x30], edi
        mov dword ptr [eax + 0x24], edi
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x10], ebp
        pop ebp
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [eax + 0x20], ecx
        mov dword ptr [eax + 0xc], ecx
        pop ebx
        ret
    }
}

// [0x007D7990] sub_007D7990 (135 bytes)
extern "C" void ext_007D5950();

extern "C" __declspec(naked) void __cdecl fn_007D7990(void) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebx + 0x10]
        test eax, eax
        push esi
        jne mode_nonzero
        mov eax, dword ptr [esp + 0x2c]
        test eax, eax
        jbe done
        mov ecx, dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x20]
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x24]
        sub esi, ecx
        mov ebp, eax
    div_loop:
        test edi, edi
        je zero_loop
        mov eax, dword ptr [esi + ecx]
        imul eax, dword ptr [ebx + 0x14]
        xor edx, edx
        div edi
        mov dword ptr [ecx], eax
        jmp next_elem
    zero_loop:
        mov dword ptr [ecx], 0
    next_elem:
        add ecx, 4
        sub ebp, 1
        jne div_loop
        pop edi
        pop ebp
        pop esi
        pop ebx
        ret
    mode_nonzero:
        cmp eax, 1
        jne bad_mode
        mov ecx, dword ptr [esp + 0x2c]
        xor eax, eax
        test ecx, ecx
        jbe done
        mov edx, dword ptr [esp + 0xc]
    fill_loop:
        mov esi, dword ptr [ebx + 0x18]
        mov dword ptr [edx + 4*eax], esi
        add eax, 1
        cmp eax, ecx
        jb fill_loop
        pop esi
        pop ebx
        ret
    bad_mode:
        mov eax, dword ptr [esp + 0x30]
        push 0x99e03c
        push eax
        push 0
        call ext_007D5950
        add esp, 0xc
    done:
        pop esi
        pop ebx
        ret
    }
}

// [0x007DC770] sub_007DC770 (83 bytes)
extern "C" void ext_007C8960();
extern "C" void ext_007DC220();
extern "C" void ext_007DC440();

extern "C" int __cdecl fn_007DC770(int* self) {
    typedef void (__cdecl *Fn)(int*, int, int, int*);
    int cell[6];
    int i;
    cell[0] = 0;
    cell[1] = (int)ext_007DC220;
    cell[2] = (int)ext_007DC440;
    cell[4] = 1;
    for (i = 0; i < self[0]; i++) {
        ((Fn)ext_007C8960)(self, 8, i, cell);
    }
    return 1;
}

// [0x007DD0A0] sub_007DD0A0 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DD0A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        push esi
        jl L_fail
        cmp eax, dword ptr [ecx + 0xc]
        jge L_fail
        mov esi, dword ptr [ecx + 0x10]
        mov edx, eax
        imul edx, edx, 0x9c
        add esi, edx
        cmp dword ptr [esi + 0x8], eax
        je L_idok
    L_fail:
        xor al, al
        pop esi
        ret 0x8
    L_idok:
        cmp byte ptr [esp + 0xc], 0x0
        je L_clear
        test byte ptr [esi + 0x10], 0x1
        jne L_done
        mov eax, dword ptr [ecx + 0x10]
        or dword ptr [eax + edx + 0x10], 0x1
        lea eax, [eax + edx + 0x10]
        mov eax, dword ptr [ecx + 0x10]
        add eax, edx
        add ecx, 0xc0
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 0x4], eax
        mov al, 0x1
        pop esi
        ret 0x8
    L_clear:
        test byte ptr [esi + 0x10], 0x1
        je L_done
        mov eax, dword ptr [ecx + 0x10]
        and dword ptr [eax + edx + 0x10], -0x2
        lea eax, [eax + edx + 0x10]
        mov eax, dword ptr [ecx + 0x10]
        mov ecx, dword ptr [eax + edx]
        add eax, edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov dword ptr [eax + 0x4], eax
        mov dword ptr [eax], eax
    L_done:
        mov al, 0x1
        pop esi
        ret 0x8
    }
}

// [0x007D4680] sub_007D4680 (150 bytes)
extern "C" void ext_007D4650();

extern "C" __declspec(naked) void __cdecl fn_007D4680(void* self, int count, int start, int div, void** ops) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0ch]
        push ebp
        mov ebp, dword ptr [esp+1ch]
        push esi
        mov esi, dword ptr [esp+10h]
        push edi
        xor edi, edi
        test ebx, ebx
        mov dword ptr [esi+1ch], ebp
        jle L_F5
        mov ecx, dword ptr [esp+20h]
        test ecx, ecx
        mov edi, dword ptr [esp+1ch]
        jne L_BC
        mov ecx, dword ptr [ebp]
        mov eax, ebx
        imul eax, edi
        push eax
        call ecx
        add esp, 4
        mov dword ptr [esi+18h], 0
        jmp L_DF
    L_BC:
        mov eax, edi
        cdq
        idiv ecx
        test edx, edx
        je L_SKIP
        sub edi, edx
        add edi, ecx
    L_SKIP:
        mov eax, dword ptr [ebp+8]
        mov edx, edi
        imul edx, ebx
        push ecx
        push edx
        call eax
        add esp, 8
        mov dword ptr [esi+18h], 1
    L_DF:
        lea ecx, [ebx*4]
        mov dword ptr [esi+4], eax
        mov edx, dword ptr [ebp]
        push ecx
        call edx
        add esp, 4
        mov dword ptr [esi+8], eax
    L_F5:
        mov dword ptr [esi+10h], edi
        mov dword ptr [esi+14h], ebx
        push esi
        mov dword ptr [esi], 1
        call ext_007D4650
        add esp, 4
        pop edi
        mov dword ptr [esi+0ch], 0
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007D5F50] sub_007D5F50 (158 bytes)
extern "C" int mem_009241BC;
extern "C" int mem_009242E0;

extern "C" __declspec(naked) int __cdecl fn_007D5F50(void* s, void* arg2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        jne L_7D5F6A
        mov edi, dword ptr [esi + 0x8]
        mov ebx, dword ptr [edi + 0xf4]
        jmp L_7D5F88
    L_7D5F6A:
        cmp eax, 1
        jne L_7D5F80
        mov eax, dword ptr [esi + 0xc]
        mov ebx, dword ptr [eax + 0x1fc]
        lea edi, [eax + 0x234]
        jmp L_7D5F88
    L_7D5F80:
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x14]
    L_7D5F88:
        mov eax, dword ptr [esi + 0x34]
        push eax
        call dword ptr [mem_009242E0]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 0x4]
        add eax, eax
        add eax, eax
        mov ecx, dword ptr [eax + edx]
        cmp ecx, dword ptr [ebx + 0xa8]
        jge L_7D5FDC
        mov eax, dword ptr [eax + edx]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 4*edx + 0x4]
        mov dword ptr [edi + 0x4], ecx
        mov eax, dword ptr [esi]
        add dword ptr [eax], 0x1
        mov edx, dword ptr [edi + 0x4]
        mov ecx, dword ptr [esi + 0x34]
        xor eax, eax
        cmp edx, dword ptr [edi]
        push ecx
        setne al
        mov edi, eax
        call dword ptr [mem_009241BC]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    L_7D5FDC:
        mov ecx, dword ptr [esi + 0x34]
        push ecx
        xor edi, edi
        call dword ptr [mem_009241BC]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x007D5A40] sub_007D5A40 (159 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D5A40(void* a1, void* a2, int a3) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [edx + 0x20]
        __asm _emit 0x25 __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        lea eax, [eax + 4*eax]
        mov eax, dword ptr [edx + 8*eax + 0x8]
        mov edx, dword ptr [esp + 0x1c]
        push edx
        lea edx, [esp + 0x8]
        push edx
        push ecx
        call eax
        add esp, 0xc
        test eax, eax
        je short L_done
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [ecx + 0x10]
        mov edx, dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ecx]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [ecx + 0x20]
        fld dword ptr [esp + 0xc]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [ecx + 0x30]
        fstp dword ptr [edx]
        fld dword ptr [ecx + 0x4]
        fmul st, st(3)
        fld dword ptr [ecx + 0x14]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [ecx + 0x24]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [ecx + 0x34]
        fstp dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0x8]
        fmulp st(3), st
        fld dword ptr [ecx + 0x18]
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld dword ptr [ecx + 0x28]
        fmulp st(2), st
        faddp st(1), st
        fadd dword ptr [ecx + 0x38]
        fstp dword ptr [edx + 0x8]
    L_done:
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x007DEB50] sub_007DEB50 (164 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DEB50(void* self) {
    __asm {
        push esi
        add edx, 8
        add eax, 8
        mov esi, 4
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top_007DEB50:
        fld dword ptr [ecx+10h]
        add edx, 10h
        fmul dword ptr [eax-4]
        add eax, 10h
        sub esi, 1
        fld dword ptr [ecx]
        fmul dword ptr [eax-18h]
        faddp st(1), st
        fld dword ptr [ecx+20h]
        fmul dword ptr [eax-10h]
        faddp st(1), st
        fld dword ptr [ecx+30h]
        fmul dword ptr [eax-0ch]
        faddp st(1), st
        fstp dword ptr [edx-18h]
        fld dword ptr [ecx+4]
        fmul dword ptr [eax-18h]
        fld dword ptr [ecx+14h]
        fmul dword ptr [eax-14h]
        faddp st(1), st
        fld dword ptr [ecx+24h]
        fmul dword ptr [eax-10h]
        faddp st(1), st
        fld dword ptr [ecx+34h]
        fmul dword ptr [eax-0ch]
        faddp st(1), st
        fstp dword ptr [edx-14h]
        fld dword ptr [ecx+18h]
        fmul dword ptr [eax-14h]
        fld dword ptr [ecx+8]
        fmul dword ptr [eax-18h]
        faddp st(1), st
        fld dword ptr [ecx+28h]
        fmul dword ptr [eax-10h]
        faddp st(1), st
        fld dword ptr [ecx+38h]
        fmul dword ptr [eax-0ch]
        faddp st(1), st
        fstp dword ptr [edx-10h]
        fld dword ptr [ecx+0ch]
        fmul dword ptr [eax-18h]
        fld dword ptr [ecx+1ch]
        fmul dword ptr [eax-14h]
        faddp st(1), st
        fld dword ptr [eax-10h]
        fmul dword ptr [ecx+2ch]
        faddp st(1), st
        fld dword ptr [ecx+3ch]
        fmul dword ptr [eax-0ch]
        faddp st(1), st
        fstp dword ptr [edx-0ch]
        jne loop_top_007DEB50
        pop esi
        ret
    }
}

// [0x007DCB00] sub_007DCB00 (164 bytes)
extern "C" void ext_007D6220();
extern "C" void ext_007D6290();
extern "C" void ext_007DCA30();
extern "C" int mem_00AB28B8;

extern "C" __declspec(naked) void* __cdecl fn_007DCB00(void) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [edi]
        push 0x68
        call eax
        mov esi, eax
        mov dword ptr [esi + 0x64], edi
        mov ecx, dword ptr [edi]
        push 0x20
        call ecx
        mov ebx, dword ptr [esp + 0x1c]
        push edi
        xor ebp, ebp
        push ebp
        push 0x14
        push ebx
        push eax
        mov dword ptr [esi + 0x30], eax
        call dword ptr [mem_00AB28B8]
        mov edx, dword ptr [edi]
        push 0x20
        call edx
        push edi
        push ebp
        push 0x20
        push ebx
        push eax
        mov dword ptr [esi + 0x2c], eax
        call dword ptr [mem_00AB28B8]
        mov eax, 0x66666667
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        push edi
        add eax, edx
        push eax
        push ebx
        mov dword ptr [esi + 0x3c], ebp
        mov dword ptr [esi + 0x38], ebp
        mov dword ptr [esi + 0x40], ebp
        call ext_007DCA30
        add esp, 0x40
        push edi
        mov dword ptr [esi + 0x28], eax
        lea eax, [esi + 0x14]
        lea ebp, [esi + 0x44]
        push 0
        push ebp
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [eax], eax
        mov dword ptr [esi + 4], esi
        mov dword ptr [esi], esi
        call ext_007D6220
        push 1
        push ebp
        call ext_007D6290
        lea ecx, [4 * ebx]
        push ecx
        push ebp
        call ext_007D62D0
        add esp, 0x1c
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007DC7D0] sub_007DC7D0 (97 bytes)
extern "C" void ext_007CCA80();
extern "C" void ext_007DB720();
extern "C" void ext_007DB740();
extern "C" void ext_007DB760();
extern "C" void ext_007DEB50();

extern "C" __declspec(naked) void __cdecl fn_007DC7D0(void) {
    __asm {
        sub esp, 0x40
        push edi
        mov edi, dword ptr [esp + 0x48]
        cmp byte ptr [edi], 8
        jne done_pop_edi
        push esi
        push edi
        xor esi, esi
        call ext_007DB720
        add esp, 4
        test eax, eax
        jle done_pop_esi
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x58]
    loop_top:
        push esi
        push edi
        call ext_007DB740
        push esi
        push edi
        mov ebx, eax
        call ext_007DB760
        mov ecx, ebp
        lea edx, [esp + 0x20]
        call ext_007DEB50
        lea eax, [esp + 0x20]
        push eax
        push ebx
        call ext_007CCA80
        push edi
        add esi, 1
        call ext_007DB720
        add esp, 0x1c
        cmp esi, eax
        jl loop_top
        pop ebp
        pop ebx
    done_pop_esi:
        pop esi
    done_pop_edi:
        pop edi
        add esp, 0x40
        ret
    }
}

// [0x007D8EB0] sub_007D8EB0 (172 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D8EB0(char** objs, float* mats, int unused_a3, int unused_a4, int count) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x18]
        xor edx, edx
        test edi, edi
        je done
        mov ecx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x8
        jmp loop_head
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop_head:
        mov eax, dword ptr [esi + 4*edx]
        fld dword ptr [eax + 0x30]
        add edx, 0x1
        fmul dword ptr [eax + 0x8]
        add ecx, 0x30
        cmp edx, edi
        fstp dword ptr [eax + 0xe0]
        fld dword ptr [eax + 0x34]
        fmul dword ptr [eax + 0x8]
        fstp dword ptr [eax + 0xe4]
        fld dword ptr [eax + 0x38]
        fmul dword ptr [eax + 0x8]
        fstp dword ptr [eax + 0xe8]
        fld dword ptr [ecx - 0x38]
        fmul dword ptr [eax + 0x40]
        fld dword ptr [ecx - 0x34]
        fmul dword ptr [eax + 0x44]
        faddp st(1), st
        fld dword ptr [eax + 0x48]
        fmul dword ptr [ecx - 0x30]
        faddp st(1), st
        fstp dword ptr [eax + 0xf0]
        fld dword ptr [ecx - 0x28]
        fmul dword ptr [eax + 0x40]
        fld dword ptr [ecx - 0x24]
        fmul dword ptr [eax + 0x44]
        faddp st(1), st
        fld dword ptr [ecx - 0x20]
        fmul dword ptr [eax + 0x48]
        faddp st(1), st
        fstp dword ptr [eax + 0xf4]
        fld dword ptr [ecx - 0x18]
        fmul dword ptr [eax + 0x40]
        fld dword ptr [ecx - 0x14]
        fmul dword ptr [eax + 0x44]
        faddp st(1), st
        fld dword ptr [ecx - 0x10]
        fmul dword ptr [eax + 0x48]
        faddp st(1), st
        fstp dword ptr [eax + 0xf8]
        jne loop_head
        pop esi
    done:
        pop edi
        ret
    }
}

// [0x007D6B00] sub_007D6B00 (176 bytes)
extern "C" void ext_007D8710();

extern "C" __declspec(naked) void __cdecl fn_007D6B00(void) {
    __asm {
        mov edx, dword ptr [esp + 0x14]
        sub esp, 8
        push edi
        xor edi, edi
        test edx, edx
        je loc_7d6bab
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        push ebp
        sub ecx, eax
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], edx
        nop

    loc_7d6b30:
        mov ebx, dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx + eax]
        lea ebp, [ebx + edx*4]
        xor ebx, ebx
        cmp dword ptr [eax], ebx
        je loc_7d6b9a

    loc_7d6b40:
        mov eax, dword ptr [ebp + ebx*4]
        push eax
        call ext_007D8710
        add esp, 4
        test eax, eax
        je loc_7d6b79
        cmp dword ptr [eax + 0x160], 0
        jne loc_7d6b79
        mov eax, dword ptr [eax + 0x168]
        test eax, eax
        je loc_7d6b89

    loc_7d6b64:
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + edi*4], eax
        add dword ptr [esi + 4], 1
        mov eax, dword ptr [eax + 0x5c]
        add edi, 1
        test eax, eax
        jne loc_7d6b64
        jmp loc_7d6b89

    loc_7d6b79:
        mov eax, dword ptr [ebp + ebx*4]
        mov edx, dword ptr [esi]
        mov dword ptr [edx + edi*4], eax
        add dword ptr [esi + 4], 1
        add edi, 1

    loc_7d6b89:
        mov ecx, dword ptr [esp + 0x2c]
        add ebx, 1
        cmp ebx, dword ptr [ecx]
        jne loc_7d6b40
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x14]

    loc_7d6b9a:
        add eax, 4
        sub dword ptr [esp + 0x10], 1
        mov dword ptr [esp + 0x2c], eax
        jne loc_7d6b30

        pop esi
        pop ebp
        pop ebx

    loc_7d6bab:
        pop edi
        add esp, 8
        ret
    }
}

// [0x007DFB60] sub_007DFB60 (186 bytes)
// Body reads its single argument from the stack ([esp+4] at entry), so declared __cdecl.
extern "C" __declspec(naked) void __cdecl fn_007DFB60(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0xc]
        push edi
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx + 0xb0]
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [edx + 0x10]
        push eax
        call ecx
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0xb0]
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        call edx
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0xb0]
        mov edx, dword ptr [esi + 0x20]
        mov eax, dword ptr [ecx + 0xc]
        push edx
        call eax
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx + 0xb0]
        mov eax, dword ptr [esi + 0x2c]
        mov ecx, dword ptr [edx + 0xc]
        push eax
        call ecx
        add esp, 0x14
        xor edi, edi
        jmp loop_body
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0xff
loop_body:
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0xb0]
        mov ecx, dword ptr [esi + 0x38]
        mov edx, dword ptr [edi + ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        add edi, 0xc
        add esp, 0x4
        cmp edi, 0x600
        jle loop_body
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx + 0xb0]
        mov eax, dword ptr [esi + 0x38]
        mov ecx, dword ptr [edx + 0xc]
        push eax
        call ecx
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0xb0]
        mov ecx, dword ptr [eax + 0xc]
        push esi
        call ecx
        add esp, 0x8
        pop edi
        pop esi
        ret
    }
}

// [0x007DFE90] sub_007DFE90 (190 bytes)
extern "C" __declspec(naked) void __cdecl fn_007DFE90(float* b, float* c, float t, float* a, float* out) {
    __asm {
        sub esp, 0ch
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        fld dword ptr [eax]
        fsub dword ptr [ecx]
        mov edx, dword ptr [esp + 14h]
        fstp dword ptr [esp]
        fld dword ptr [eax + 4]
        fsub dword ptr [ecx + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [eax + 8]
        fsub dword ptr [ecx + 8]
        fstp dword ptr [esp + 8]
        fld dword ptr [edx]
        fmul dword ptr [esp]
        fld dword ptr [esp + 4]
        fmul dword ptr [edx + 4]
        faddp st(1), st
        fld dword ptr [esp + 8]
        fmul dword ptr [edx + 8]
        faddp st(1), st
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esp + 1ch]
        fld dword ptr [esp + 18h]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne SHORT fe90_L1
        fxch st(1)
        fst dword ptr [esp + 1ch]
        jmp SHORT fe90_L2
fe90_L1:
        fst dword ptr [esp + 1ch]
        fxch st(1)
fe90_L2:
        fld st(1)
        fchs
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 1ch]
        fld dword ptr [esp + 10h]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 41h
        jne SHORT fe90_L3
        fstp st(2)
fe90_L5:
        fstp st(0)
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esp + 1ch]
        jmp SHORT fe90_L4
fe90_L3:
        fstp st(0)
        fcom st(1)
        fnstsw ax
        test ah, 5
        jp SHORT fe90_L5
        fstp st(1)
fe90_L4:
        fld dword ptr [edx]
        mov eax, dword ptr [esp + 20h]
        fmul st, st(1)
        fadd dword ptr [ecx]
        fstp dword ptr [eax]
        fld st(0)
        fmul dword ptr [edx + 4]
        fadd dword ptr [ecx + 4]
        fstp dword ptr [eax + 4]
        fmul dword ptr [edx + 8]
        fadd dword ptr [ecx + 8]
        fstp dword ptr [eax + 8]
        add esp, 0ch
        ret
    }
}

// [0x007D84A0] sub_007D84A0 (202 bytes)
extern "C" void ext_007C6CF0(void* a, void* b, float* c);

extern "C" void __cdecl fn_007D84A0(char* self, void* a1, void* a2, float* out) {
    float v1[3] = { 0.0f, 0.0f, 0.0f };
    float v2[3] = { 0.0f, 0.0f, 0.0f };
    if (a1) {
        ext_007C6CF0(a1, self + 0x40, v1);
    } else if (*(int*)(self + 0x90) & 0x100) {
        v1[0] = *(float*)(self + 0x78);
        v1[1] = *(float*)(self + 0x7c);
        v1[2] = *(float*)(self + 0x80);
    }
    if (a2) {
        ext_007C6CF0(a2, self + 0x40, v2);
    } else if (*(int*)(self + 0x90) & 0x100) {
        v2[0] = *(float*)(self + 0x78);
        v2[1] = *(float*)(self + 0x7c);
        v2[2] = *(float*)(self + 0x80);
    }
    out[0] = v1[0] - v2[0];
    out[1] = v1[1] - v2[1];
    out[2] = v1[2] - v2[2];
}

// [0x007DB560] sub_007DB560 (219 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DB560(void* self) {
    __asm {
        fld dword ptr [ecx]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fmul dword ptr [eax + 0xc]
        faddp st(1), st
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax + 0x18]
        faddp st(1), st
        fstp dword ptr [edx]
        fld dword ptr [eax + 0x10]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x4]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax + 0x1c]
        faddp st(1), st
        fstp dword ptr [edx + 0x4]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [ecx + 0x8]
        fmul dword ptr [eax + 0x20]
        faddp st(1), st
        fstp dword ptr [edx + 0x8]
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [eax + 0xc]
        faddp st(1), st
        fld dword ptr [eax + 0x18]
        fmul dword ptr [ecx + 0x14]
        faddp st(1), st
        fstp dword ptr [edx + 0xc]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x14]
        fmul dword ptr [eax + 0x1c]
        faddp st(1), st
        fstp dword ptr [edx + 0x10]
        fld dword ptr [ecx + 0x10]
        fmul dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0xc]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fld dword ptr [ecx + 0x14]
        fmul dword ptr [eax + 0x20]
        faddp st(1), st
        fstp dword ptr [edx + 0x14]
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax]
        fld dword ptr [ecx + 0x1c]
        fmul dword ptr [eax + 0xc]
        faddp st(1), st
        fld dword ptr [eax + 0x18]
        fmul dword ptr [ecx + 0x20]
        faddp st(1), st
        fstp dword ptr [edx + 0x18]
        fld dword ptr [ecx + 0x1c]
        fmul dword ptr [eax + 0x10]
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax + 0x4]
        faddp st(1), st
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [eax + 0x1c]
        faddp st(1), st
        fstp dword ptr [edx + 0x1c]
        fld dword ptr [ecx + 0x1c]
        fmul dword ptr [eax + 0x14]
        fld dword ptr [ecx + 0x18]
        fmul dword ptr [eax + 0x8]
        faddp st(1), st
        fld dword ptr [ecx + 0x20]
        fmul dword ptr [eax + 0x20]
        faddp st(1), st
        fstp dword ptr [edx + 0x20]
        ret
    }
}

extern "C" void ext_007DB560();

// [0x007DBA20] sub_007DBA20 (166 bytes)
extern "C" __declspec(naked) void __cdecl fn_007DBA20(void) {
    __asm {
        sub esp, 48h
        fld dword ptr [ebx]
        push esi
        fstp dword ptr [esp + 4h]
        push edi
        fld dword ptr [ebx + 4h]
        mov ecx, 9h
        fstp dword ptr [esp + 0Ch]
        lea esi, [esp + 8h]
        fld dword ptr [ebx + 8h]
        lea edi, [esp + 2Ch]
        fstp dword ptr [esp + 10h]
        lea eax, [esp + 8h]
        fld dword ptr [ebx + 0Ch]
        lea edx, [esp + 2Ch]
        fstp dword ptr [esp + 14h]
        fld dword ptr [ebx + 10h]
        fstp dword ptr [esp + 18h]
        fld dword ptr [ebx + 14h]
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [ebx + 18h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [ebx + 1Ch]
        fstp dword ptr [esp + 24h]
        fld dword ptr [ebx + 20h]
        fstp dword ptr [esp + 28h]
        rep movsd
        fld dword ptr [esp + 14h]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 44h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 48h]
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [esp + 34h]
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 54h]
        fstp dword ptr [esp + 24h]
        call ext_007DB560
        mov eax, edx
        mov edx, dword ptr [esp + 58h]
        mov ecx, ebx
        call ext_007DB560
        pop edi
        pop esi
        add esp, 48h
        ret
    }
}

// [0x007DDF30] sub_007DDF30 (225 bytes)
extern "C" int mem_0099EBF0;
extern "C" __declspec(naked) void* __fastcall fn_007DDF30(void* self, int edx_unused, unsigned int a1, unsigned int a2, unsigned int a3) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [ecx - 0x1]
        imul eax, ecx
        mov ecx, dword ptr [esp + 0x14]
        sar eax, 1
        mov edx, eax
        and eax, 1
        shr edx, 1
        add eax, edx
        mov dword ptr [esi], offset mem_0099EBF0
        mov dword ptr [esi + 0x28], ecx
        mov dword ptr [esi + 0x24], eax
        push eax
        mov eax, dword ptr [ecx]
        call eax
        mov ecx, dword ptr [esi + 0x24]
        add ecx, eax
        add esp, 4
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr [esi + 0x20], eax
        jae short L_skip_memset
        sub ecx, eax
        push ecx
        push ebx
        push eax
        call ext_006A6E8C
        add esp, 0xc
L_skip_memset:
        fldz
        mov dword ptr [esi + 0x3c], ebx
        fst dword ptr [esi + 0x38]
        mov byte ptr [esi + 0x40], bl
        fst dword ptr [esi + 0x4c]
        mov dword ptr [esi + 0x50], ebx
        mov byte ptr [esi + 0x54], bl
        fst dword ptr [esi + 0x60]
        mov dword ptr [esi + 0x64], ebx
        mov byte ptr [esi + 0x68], bl
        lea eax, [esi + 0x30]
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax], eax
        lea ecx, [eax + 0x14]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [ecx], ecx
        lea ecx, [eax + 0x28]
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [ecx], ecx
        fst dword ptr [esi + 0x74]
        lea eax, [esi + 0x6c]
        fst dword ptr [eax + 0x1c]
        mov dword ptr [eax + 0xc], ebx
        mov byte ptr [eax + 0x10], bl
        fstp dword ptr [eax + 0x30]
        mov dword ptr [eax + 0x20], ebx
        mov byte ptr [eax + 0x24], bl
        mov dword ptr [eax + 0x34], ebx
        mov byte ptr [eax + 0x38], bl
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax], eax
        lea ecx, [eax + 0x14]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [ecx], ecx
        lea ecx, [eax + 0x28]
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [ecx], ecx
        lea eax, [esi + 0xa8]
        lea ecx, [eax + 8]
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [ecx], ecx
        lea ecx, [eax + 0x10]
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax], eax
        mov dword ptr [eax + 0x14], ecx
        lea eax, [esi + 0xc0]
        mov dword ptr [ecx], ecx
        mov dword ptr [eax + 4], eax
        mov dword ptr [eax], eax
        mov eax, esi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x007D70A0] sub_007D70A0 (230 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D70A0(void* self, int i) {
    __asm {
        fldz
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov eax, dword ptr [ebx + 18h]
        mov edx, dword ptr [ebx + 1Ch]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax + 4*ebp]
        push esi
        lea esi, [eax + 4*ebp]
        mov eax, dword ptr [edx + 4*ebp]
        push edi
        lea edi, [edx + 4*ebp]
        add eax, ecx
        cmp ecx, eax
        jge short L_blk2
        mov edx, dword ptr [ebx + 14h]
        lea edx, [edx + 4*ecx]
L_blk1:
        mov eax, dword ptr [edx]
        fst dword ptr [eax + 30h]
        add ecx, 1
        fst dword ptr [eax + 34h]
        add edx, 4
        fst dword ptr [eax + 38h]
        fst dword ptr [eax + 40h]
        fst dword ptr [eax + 44h]
        fst dword ptr [eax + 48h]
        fst dword ptr [eax + 0e0h]
        fst dword ptr [eax + 0e4h]
        fst dword ptr [eax + 0e8h]
        fst dword ptr [eax + 0f0h]
        fst dword ptr [eax + 0f4h]
        fst dword ptr [eax + 0f8h]
        fst dword ptr [eax + 0b0h]
        fst dword ptr [eax + 0b4h]
        fst dword ptr [eax + 0b8h]
        fst dword ptr [eax + 0c0h]
        fst dword ptr [eax + 0c4h]
        fst dword ptr [eax + 0c8h]
        mov eax, dword ptr [edi]
        add eax, dword ptr [esi]
        cmp ecx, eax
        jl short L_blk1
L_blk2:
        mov ecx, dword ptr [ebx + 4]
        mov edx, dword ptr [ebx + 8]
        mov eax, dword ptr [edx + 4*ebp]
        lea edi, [ecx + 4*ebp]
        mov ecx, dword ptr [edi]
        lea ebp, [edx + 4*ebp]
        add eax, ecx
        cmp ecx, eax
        jge short L_done
        mov edx, dword ptr [ebx]
        lea esi, [edx + 4*ecx]
L_outer:
        mov eax, dword ptr [esi]
        add eax, 20h
        mov edx, 3
L_kloop:
        fst dword ptr [eax - 20h]
        add eax, 4
        sub edx, 1
        fst dword ptr [eax - 14h]
        fst dword ptr [eax - 4]
        fst dword ptr [eax + 0ch]
        jne short L_kloop
        mov eax, dword ptr [edi]
        add eax, dword ptr [ebp]
        add ecx, 1
        add esi, 4
        cmp ecx, eax
        jl short L_outer
L_done:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007DB8E0] sub_007DB8E0 (245 bytes)
extern "C" void ext_007CCA20();
extern "C" void ext_007F56E0();
extern "C" int mem_0093C1A8;
extern "C" __declspec(naked) void __cdecl fn_007DB8E0(void* a0, void* a1) {
    __asm {
        sub esp, 0x14
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [mem_0093C1A8]
        push ebx
        fstp dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [eax]
        xor ebx, ebx
        cmp dword ptr [edi + 0x18], ebx
        jle fn7db8e0_epilogue
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x2c]
        xor ebp, ebp
        jmp fn7db8e0_loop
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
fn7db8e0_loop:
        mov edx, dword ptr [edi + 0x10]
        mov eax, dword ptr [edi + 0x14]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [eax + 4*ebx]
        push esi
        add edx, ebp
        push edx
        push ecx
        call ext_007CCA20
        mov edx, dword ptr [edi + 0x14]
        mov eax, dword ptr [edx + 4*ebx]
        push eax
        call ext_007F56E0
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi + 4]
        add esp, 0x14
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esi]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esi + 8]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x14]
        fld st(0)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x28]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp fn7db8e0_skip
        mov eax, dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esi]
        fmul st, st(1)
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [eax]
        fld dword ptr [esi + 4]
        fmul st, st(3)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 4]
        fld dword ptr [esi + 8]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [eax + 8]
        jmp fn7db8e0_next
fn7db8e0_skip:
        fstp st(1)
        fstp st(2)
        fstp st(2)
        fstp st(1)
        fstp st(0)
fn7db8e0_next:
        add ebx, 1
        add ebp, 0x40
        cmp ebx, dword ptr [edi + 0x18]
        jl fn7db8e0_loop
        pop esi
        pop ebp
fn7db8e0_epilogue:
        pop edi
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007DCDD0] sub_007DCDD0 (247 bytes)
extern "C" void ext_007DCAC0();
extern "C" int mem_00AB28C8;

extern "C" __declspec(naked) int __cdecl fn_007DCDD0(void* a1, void* a2, void* a3) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, dword ptr [eax + 0x20]
        push edi
        mov edi, dword ptr [ecx + 0x20]
        mov eax, edi
        sub eax, esi
        shr eax, 0x1f
        sub eax, 0x1
        mov edx, eax
        not edx
        mov ecx, edx
        and edx, esi
        mov ebx, eax
        and ebx, esi
        and ecx, edi
        and eax, edi
        mov edi, dword ptr [esp + 0x10]
        or eax, edx
        or ecx, ebx
        shl ecx, 0x10
        or ecx, eax
        mov eax, dword ptr [edi + 0x28]
        mov edx, ecx
        sar edx, 0x10
        mov esi, ecx
        and esi, 0xffff
        xor edx, esi
        mov esi, dword ptr [eax + 0x8]
        sub esi, 0x1
        and edx, esi
        mov esi, dword ptr [eax]
        mov esi, dword ptr [esi + 4*edx]
        test esi, esi
        je dd0_ret1
        nop
dd0_chain:
        cmp dword ptr [esi + 0x8], ecx
        je dd0_found
        mov esi, dword ptr [esi + 0x10]
        test esi, esi
        jne dd0_chain
dd0_not_found:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
dd0_found:
        mov edx, dword ptr [esi + 0xc]
        mov edx, dword ptr [edx + 0x8]
        cmp edx, 0x1
        je dd0_state1
        cmp edx, 0x2
        je dd0_state2
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
dd0_state2:
        cmp edx, 0x1
        jne dd0_insert
dd0_state1:
        mov edx, ecx
        call ext_007DCAC0
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        mov dword ptr [edx], eax
        add dword ptr [edi + 0x3c], -0x1
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [edi + 0x2c]
        push ecx
        push edx
        call dword ptr [mem_00AB28C8]
        mov eax, dword ptr [edi + 0x30]
        push esi
        push eax
        call dword ptr [mem_00AB28C8]
        add esp, 0x10
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
dd0_insert:
        mov ecx, dword ptr [edi + 0x14]
        lea eax, [edi + 0x14]
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 0x4], eax
        mov edx, ecx
        mov dword ptr [edx + 0x4], esi
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax], esi
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ecx + 0x8], 0x3
dd0_ret1:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    }
}

// [0x007D5E50] sub_007D5E50 (253 bytes)
extern "C" __declspec(naked) int __cdecl fn_007D5E50(void* a, void* b) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ebp + 0xa8]
        push edi
        mov edi, dword ptr [esp + 0x14]
        xor eax, eax
        cmp ecx, dword ptr [edi + 0x8]
        jl L_end
        test ecx, ecx
        push ebx
        push esi
        jle L_91
        mov edx, dword ptr [ebp + 0x7c]
        mov esi, ecx
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_80:
        mov ecx, dword ptr [edx]
        mov ebx, ecx
        imul ebx, ecx
        add eax, ebx
        add edx, 0x4
        sub esi, 0x1
        jne L_80
    L_91:
        mov ecx, dword ptr [edi + 0x2d0]
        imul ecx, dword ptr [edi + 0x8]
        cdq
        idiv ecx
        cmp eax, 0x80
        jge L_af
        pop esi
        pop ebx
        pop edi
        xor eax, eax
        pop ebp
        add esp, 0x8
        ret
    L_af:
        xor edx, edx
        lea ecx, [edi + 0x1d0]
        mov dword ptr [ecx], edx
        mov ebx, dword ptr [ebp + 0xa8]
        test ebx, ebx
        mov dword ptr [esp + 0x10], edx
        jle L_27
        mov dword ptr [esp + 0x14], ecx
        jmp L_d0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_d0:
        xor ecx, ecx
        xor edi, edi
        test eax, eax
        jle L_f6
    L_d8:
        cmp edx, ebx
        jge L_f6
        mov esi, dword ptr [ebp + 0x7c]
        mov esi, dword ptr [esi + 4*edx]
        mov ebp, esi
        imul ebp, esi
        mov edi, ecx
        add ecx, ebp
        mov ebp, dword ptr [esp + 0x20]
        add edx, 0x1
        cmp ecx, eax
        jl L_d8
    L_f6:
        mov esi, eax
        sub esi, edi
        sub ecx, eax
        cmp esi, ecx
        jge L_07
        test edi, edi
        je L_07
        sub edx, 0x1
    L_07:
        mov ecx, dword ptr [esp + 0x14]
        add dword ptr [esp + 0x10], 0x1
        add ecx, 0x4
        mov dword ptr [ecx], edx
        mov ebx, dword ptr [ebp + 0xa8]
        cmp edx, ebx
        mov dword ptr [esp + 0x14], ecx
        jl L_d0
        mov edi, dword ptr [esp + 0x1c]
    L_27:
        mov edx, dword ptr [esp + 0x10]
        pop esi
        mov dword ptr [edi + 4*edx + 0x1d4], 0xffffffff
        mov dword ptr [edi + 0x2d4], 0x0
        mov eax, 0x1
        pop ebx
    L_end:
        pop edi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x007D4970] sub_007D4970 (254 bytes)
extern "C" void ext_007D48C0();
extern "C" void ext_007D48F0();
extern "C" __declspec(naked) void __cdecl fn_007D4970(void* head, void* node, int key) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [ebp]
        cmp edi, ebp
        mov esi, ebp
        mov dword ptr [ebx + 0x10], eax
        je short L_empty
    L_loop:
        mov ecx, dword ptr [edi + 0x10]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ebp + 0x20]
        push ecx
        push edx
        mov esi, edi
        call eax
        xor edx, edx
        add esp, 0x8
        cmp eax, edx
        jge short L_right
        mov edi, dword ptr [edi]
        jmp short L_next
    L_right:
        mov edi, dword ptr [edi + 0x4]
    L_next:
        cmp edi, ebp
        jne short L_loop
        cmp eax, edx
        jl short L_setleft
        mov dword ptr [esi + 0x4], ebx
    L_link:
        mov dword ptr [ebx + 0x8], esi
        mov dword ptr [ebx], ebp
        mov dword ptr [ebx + 0x4], ebp
        mov ecx, 0x1
        add dword ptr [ebp + 0x18], ecx
        mov dword ptr [ebx + 0xc], edx
        cmp dword ptr [esi + 0xc], edx
        jne short L_done
    L_top:
        mov edi, dword ptr [esi + 0x8]
        mov eax, dword ptr [edi]
        cmp esi, eax
        jne short L_rcase
        mov eax, dword ptr [edi + 0x4]
        cmp dword ptr [eax + 0xc], edx
        je short L_recolor
        cmp ebx, dword ptr [esi + 0x4]
        jne short L_lrot
        mov eax, esi
        call ext_007D48C0
        mov esi, ebx
        mov ecx, 0x1
        xor edx, edx
    L_lrot:
        mov dword ptr [esi + 0xc], ecx
        mov eax, edi
        mov dword ptr [edi + 0xc], edx
        call ext_007D48F0
        mov eax, dword ptr [ebp]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0xc], 0x1
        pop ebx
        ret
    L_empty:
        xor edx, edx
    L_setleft:
        mov dword ptr [esi], ebx
        jmp short L_link
    L_rcase:
        cmp dword ptr [eax + 0xc], edx
        jne short L_rnr
    L_recolor:
        mov dword ptr [esi + 0xc], ecx
        mov dword ptr [eax + 0xc], ecx
        mov esi, dword ptr [edi + 0x8]
        mov dword ptr [edi + 0xc], edx
        cmp dword ptr [esi + 0xc], edx
        mov ebx, edi
        je short L_top
    L_done:
        mov edx, dword ptr [ebp]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx + 0xc], ecx
        pop ebx
        ret
    L_rnr:
        cmp ebx, dword ptr [esi]
        jne short L_rrot
        mov eax, esi
        call ext_007D48F0
        mov esi, ebx
        mov ecx, 0x1
        xor edx, edx
    L_rrot:
        mov dword ptr [esi + 0xc], ecx
        mov eax, edi
        mov dword ptr [edi + 0xc], edx
        call ext_007D48C0
        mov ecx, dword ptr [ebp]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0xc], 0x1
        pop ebx
        ret
    }
}

// [0x007DFA40] sub_007DFA40 (260 bytes)
extern "C" __declspec(naked) void* __cdecl fn_007DFA40(char* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [edi + 0xb0]
        mov ecx, dword ptr [eax]
        push 0x50
        call ecx
        mov esi, eax
        mov dword ptr [esi + 0x8], edi
        mov edx, dword ptr [edi]
        mov dword ptr [esi + 0xc], edx
        mov eax, dword ptr [edi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0xfa00
        call ecx
        mov dword ptr [esi + 0x10], eax
        mov edx, dword ptr [edi + 0xb0]
        mov eax, dword ptr [edx]
        push 0xfa0
        call eax
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esi + 0xc]
        mov edx, eax
        imul edx, eax
        mov ebx, 0x3e8
        mov dword ptr [esi + 0x18], ebx
        mov ecx, dword ptr [edi + 0xb0]
        mov eax, dword ptr [ecx]
        add edx, edx
        add edx, edx
        push edx
        call eax
        mov dword ptr [esi + 0x4], eax
        mov ecx, dword ptr [edi + 0xb0]
        mov edx, dword ptr [ecx]
        push 0x17700
        call edx
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], ebx
        mov eax, dword ptr [edi + 0xb0]
        mov ecx, dword ptr [eax]
        push 0x4e20
        call ecx
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x30], ebx
        mov edx, dword ptr [edi + 0xb0]
        mov eax, dword ptr [edx]
        push 0x60c
        call eax
        mov dword ptr [esi + 0x38], eax
        mov dword ptr [esi + 0x40], 0x81
        mov ecx, dword ptr [edi + 0xb0]
        mov edx, dword ptr [ecx]
        push 0xa000
        call edx
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [esi + 0x38]
        add esp, 0x24
        mov dword ptr [edx + 0x8], 0x400
        mov ebx, 0xc
        nop
    loop_top_7DFA40:
        mov eax, dword ptr [edi + 0xb0]
        mov ecx, dword ptr [eax]
        push 0x1400
        call ecx
        mov edx, dword ptr [esi + 0x38]
        mov dword ptr [ebx + edx], eax
        mov eax, dword ptr [esi + 0x38]
        mov dword ptr [eax + ebx + 0x8], 0x80
        add ebx, 0xc
        add esp, 0x4
        cmp ebx, 0x600
        jle loop_top_7DFA40
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}

// [0x007DCED0] sub_007DCED0 (274 bytes)
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();
extern "C" void ext_007DFD30();
extern "C" void ext_007F63D0();
extern "C" int mem_00AB28C8;
extern "C" __declspec(naked) void __cdecl fn_007DCED0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+0x10]
        lea eax, [esi+0x14]
        push edi
        mov edi, dword ptr [eax]
        cmp edi, eax
        je L_7DCED0_empty
L_7DCED0_loop:
        mov ecx, dword ptr [edi+8]
        mov eax, dword ptr [esi+0x28]
        mov ebx, dword ptr [edi]
        mov edx, ecx
        sar edx, 0x10
        mov ebp, ecx
        and ebp, 0xffff
        xor edx, ebp
        mov ebp, dword ptr [eax+8]
        mov eax, dword ptr [eax]
        sub ebp, 1
        and edx, ebp
        cmp dword ptr [eax+4*edx], 0
        lea eax, [eax+4*edx]
        je L_7DCED0_ins
        jmp L_7DCED0_top
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
L_7DCED0_top:
        mov edx, dword ptr [eax]
        cmp dword ptr [edx+8], ecx
        je L_7DCED0_found
        cmp dword ptr [edx+0x10], 0
        lea eax, [edx+0x10]
        jne L_7DCED0_top
        jmp L_7DCED0_ins
L_7DCED0_found:
        mov ecx, edx
        mov edx, dword ptr [ecx+0x10]
        mov dword ptr [eax], edx
L_7DCED0_ins:
        mov eax, dword ptr [edi+0xc]
        push eax
        call ext_007DFD30
        mov ecx, dword ptr [edi+0xc]
        mov edx, dword ptr [esi+0x2c]
        push ecx
        push edx
        call dword ptr [mem_00AB28C8]
        mov eax, dword ptr [esi+0x30]
        push edi
        push eax
        call dword ptr [mem_00AB28C8]
        add dword ptr [esi+0x38], -1
        lea eax, [esi+0x14]
        add esp, 0x14
        cmp ebx, eax
        mov edi, ebx
        jne L_7DCED0_loop
L_7DCED0_empty:
        lea edi, [esi+0x44]
        push edi
        mov dword ptr [eax], eax
        mov dword ptr [esi+0x18], eax
        call ext_007D5AE0
        push eax
        push edi
        call ext_007D6360
        mov ecx, dword ptr [esi+0x3c]
        add ecx, ecx
        add ecx, ecx
        push ecx
        push edi
        call ext_007D62D0
        push edi
        mov ebx, eax
        call ext_007D48A0
        mov edi, dword ptr [esi]
        mov ebp, eax
        add esp, 0x18
        shr ebp, 2
        cmp edi, esi
        mov dword ptr [esi+0x40], 0
        je L_7DCED0_end
        jmp L_7DCED0_l2
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
L_7DCED0_l2:
        mov edx, dword ptr [edi+0xc]
        push edx
        call ext_007F63D0
        add esp, 4
        test ebx, ebx
        je L_7DCED0_skip
        mov eax, dword ptr [esi+0x40]
        cmp eax, ebp
        jge L_7DCED0_skip
        mov ecx, dword ptr [edi+0xc]
        mov dword ptr [ebx+4*eax], ecx
        add dword ptr [esi+0x40], 1
L_7DCED0_skip:
        mov edx, dword ptr [edi+0xc]
        mov dword ptr [edx+8], 2
        mov edi, dword ptr [edi]
        cmp edi, esi
        jne L_7DCED0_l2
L_7DCED0_end:
        pop edi
        mov dword ptr [esi+0x3c], 0
        mov dword ptr [esi], esi
        mov dword ptr [esi+4], esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x007D6980] sub_007D6980 (287 bytes)
extern "C" void ext_007CA240();

extern "C" __declspec(naked) void __cdecl fn_007D6980(void* a1, int idx, void* s) {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 4Ch
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 60h]
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4*eax]
        mov ecx, dword ptr [ebp + 14h]
        push esi
        lea ebx, [ecx + 4*edx]
        mov edx, dword ptr [ebp + 1Ch]
        xor esi, esi
        cmp dword ptr [edx + 4*eax], esi
        jle done
        push edi
        mov edi, dword ptr [esp + 60h]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop_top:
        mov eax, dword ptr [ebx + 4*esi]
        add eax, 110h
        push edi
        push eax
        call ext_007CA240
        mov eax, dword ptr [ebx + 4*esi]
        add esp, 8
        test dword ptr [eax + 1C4h], 200h
        je skip
        fld dword ptr [eax + 170h]
        lea ecx, [esp + 1Ch]
        fld qword ptr [mem_00993830]
        push edi
        fmul st(1), st
        push ecx
        fxch st(1)
        fstp dword ptr [esp + 18h]
        fld dword ptr [eax + 174h]
        fmul st, st(1)
        fstp dword ptr [esp + 1Ch]
        fmul dword ptr [eax + 178h]
        fstp dword ptr [esp + 20h]
        call ext_007CA240
        fld dword ptr [esp + 24h]
        mov eax, dword ptr [ebx + 4*esi]
        fld dword ptr [esp + 18h]
        add esp, 8
        fld st(0)
        add eax, 140h
        fmulp st(2), st
        fld dword ptr [esp + 2Ch]
        fld dword ptr [esp + 14h]
        fld st(0)
        fmulp st(2), st
        fxch st(3)
        faddp st(1), st
        fld dword ptr [esp + 3Ch]
        fld dword ptr [esp + 18h]
        fld st(0)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fadd dword ptr [esp + 4Ch]
        fstp dword ptr [eax]
        fld dword ptr [esp + 20h]
        fmul st, st(2)
        fld dword ptr [esp + 30h]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [esp + 40h]
        fmul st, st(2)
        faddp st(1), st
        fadd dword ptr [esp + 50h]
        fstp dword ptr [eax + 4]
        fld dword ptr [esp + 24h]
        fmulp st(2), st
        fld dword ptr [esp + 34h]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [esp + 44h]
        faddp st(1), st
        fadd dword ptr [esp + 54h]
        fstp dword ptr [eax + 8]
    skip:
        mov edx, dword ptr [ebp + 1Ch]
        mov eax, dword ptr [esp + 64h]
        add esi, 1
        add edi, 40h
        cmp esi, dword ptr [edx + 4*eax]
        jl loop_top
        pop edi
    done:
        pop esi
        pop ebp
        pop ebx
        add esp, 4Ch
        ret
    }
}

// [0x007DB390] sub_007DB390 (295 bytes)
extern "C" __declspec(naked) void __cdecl fn_007DB390(void* a1, void* a2) {
    __asm {
        sub     esp, 0x18
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     byte ptr [edi], 0x7
        jne     loc_7db4b2
        push    ebp
        xor     ebp, ebp
        cmp     dword ptr [edi + 0x30], ebp
        jle     loc_7db4b1
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        xor     ebx, ebx

    loc_7db3b5:
        mov     eax, dword ptr [edi + 0x20]
        lea     ecx, [eax + ebx]
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        cmp     eax, ecx
        jl      loc_7db4a0
        mov     edx, dword ptr [edi + 0x10]
        lea     eax, [eax + 2*eax]
        fld     dword ptr [edx + 4*eax + 0x4]
        lea     eax, [edx + 4*eax]
        fmul    dword ptr [esi + 0x10]
        lea     ecx, [ecx + 2*ecx]
        fld     dword ptr [eax]
        fmul    dword ptr [esi]
        faddp   st(1), st
        fld     dword ptr [eax + 0x8]
        fmul    dword ptr [esi + 0x20]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x30]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esi + 0x14]
        fmul    dword ptr [eax + 0x4]
        fld     dword ptr [esi + 0x4]
        fmul    dword ptr [eax]
        faddp   st(1), st
        fld     dword ptr [eax + 0x8]
        fmul    dword ptr [esi + 0x24]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [esi + 0x18]
        fld     dword ptr [esi + 0x8]
        fmul    dword ptr [eax]
        faddp   st(1), st
        fld     dword ptr [eax + 0x8]
        lea     eax, [edx + 4*ecx]
        fmul    dword ptr [esi + 0x28]
        mov     edx, dword ptr [edi + 0xc]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [eax]
        fmul    dword ptr [esi]
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [esi + 0x10]
        faddp   st(1), st
        fld     dword ptr [esi + 0x20]
        fmul    dword ptr [eax + 0x8]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x30]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [esi + 0x14]
        fld     dword ptr [esi + 0x4]
        fmul    dword ptr [eax]
        faddp   st(1), st
        fld     dword ptr [esi + 0x24]
        fmul    dword ptr [eax + 0x8]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [esi + 0x18]
        fld     dword ptr [esi + 0x8]
        fmul    dword ptr [eax]
        faddp   st(1), st
        fld     dword ptr [eax + 0x8]
        fmul    dword ptr [esi + 0x28]
        faddp   st(1), st
        fadd    dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [edx + 0xb0]
        mov     ecx, dword ptr [eax + 0x24]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [eax + 0x20]
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x4
        call    edx
        add     esp, 0x10

    loc_7db4a0:
        add     ebp, 0x1
        add     ebx, 0x14
        cmp     ebp, dword ptr [edi + 0x30]
        jl      loc_7db3b5
        pop     esi
        pop     ebx

    loc_7db4b1:
        pop     ebp

    loc_7db4b2:
        pop     edi
        add     esp, 0x18
        ret
    }
}

// [0x007DB780] sub_007DB780 (304 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D5AE0();
extern "C" void ext_007D5AF0();
extern "C" void ext_007DEB50();
extern "C" int mem_00AA7E40;
extern "C" int mem_0099D148;
extern "C" int mem_0093C1A8;
extern "C" __declspec(naked) int __cdecl fn_007DB780(void* self, int flag, int x) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        push ebx
        push esi
        push edi
        mov eax, 0x90
        call ext_006A6EC0
        mov esi, dword ptr [ebp + 0x8]
        mov eax, esp
        add eax, 0xf
        and eax, -0x10
        mov dword ptr [ebp - 0x10], eax
        xor eax, eax
        push esi
        mov dword ptr [ebp - 0x14], eax
        mov dword ptr [ebp - 0xc], eax
        call ext_007D5AE0
        fld dword ptr [mem_0099D148]
        fst dword ptr [esi + 0x8]
        mov ebx, eax
        fst dword ptr [esi + 0xc]
        xor eax, eax
        fstp dword ptr [esi + 0x10]
        add esp, 0x4
        fld dword ptr [mem_0093C1A8]
        mov dword ptr [ebp - 0x18], eax
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x18]
        fstp dword ptr [esi + 0x1c]
        cmp dword ptr [ebx + 0x1c], eax
        mov edi, dword ptr [esi + 0x34]
        jle L_end
        mov dword ptr [ebp - 0x8], eax
L_loop:
        mov ecx, dword ptr [ebx + 0x14]
        cmp dword ptr [ecx + 4*eax], 0x0
        je L_next
        cmp dword ptr [edi + 0x4], 0x0
        jne L_skip1
        mov edx, dword ptr [ebp - 0x10]
        mov dword ptr [edi + 0x4], edx
L_skip1:
        mov eax, dword ptr [ebx + 0x10]
        add eax, dword ptr [ebp - 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x4]
        call ext_007DEB50
        mov ecx, dword ptr [ebp + 0xc]
        test ecx, ecx
        je L_skip2
        mov eax, dword ptr [ebx + 0x10]
        mov edx, dword ptr [ebp - 0x10]
        add eax, dword ptr [ebp - 0x8]
        add edx, 0x40
        mov dword ptr [ebp - 0x14], edx
        call ext_007DEB50
L_skip2:
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp - 0x14]
        push eax
        push ecx
        push edi
        call ext_007D5AF0
        add esp, 0xc
        test eax, eax
        je L_skip3
        mov dword ptr [ebp - 0xc], 0x1
L_skip3:
        lea edx, [esi + 0x8]
        lea ecx, [edi + 0x8]
        mov esi, edx
        call ext_007CA280
        mov edx, dword ptr [ebp + 0x8]
        add edx, 0x14
        lea ecx, [edi + 0x14]
        mov esi, edx
        call ext_007CB8D0
        mov edx, dword ptr [ebp - 0x10]
        cmp dword ptr [edi + 0x4], edx
        mov esi, dword ptr [ebp + 0x8]
        jne L_next
        mov dword ptr [edi + 0x4], 0x0
L_next:
        mov eax, dword ptr [ebp - 0x18]
        add dword ptr [ebp - 0x8], 0x40
        mov edi, dword ptr [edi + 0x2c]
        add eax, 0x1
        cmp eax, dword ptr [ebx + 0x1c]
        mov dword ptr [ebp - 0x18], eax
        jl L_loop
        mov eax, dword ptr [ebp - 0xc]
L_end:
        lea esp, [ebp - 0x24]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0x4]
        xor ecx, ebp
        call ext_006A745E
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007D6BB0] sub_007D6BB0 (306 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D6BB0(void* self, float* src, float* scale) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp+0xc]
        mov ecx, dword ptr [eax+0xb4]
        mov edx, dword ptr [eax+0xb8]
        push ebx
        mov ebx, dword ptr [eax+0x168]
        test ebx, ebx
        mov dword ptr [esp+4], ecx
        mov dword ptr [esp+8], edx
        je L_end
        fldz
        mov ecx, dword ptr [esp+0x18]
        push ebp
        push esi
        push edi
L_node:
        lea ebp, [ebx+0x20]
        mov esi, ebx
        xor edx, edx
        lea eax, [ebp+0x10]
        sub esi, ebp
L_zero:
        fst dword ptr [ebx+edx*4]
        add edx, 1
        fst dword ptr [esi+eax]
        add eax, 4
        cmp edx, 3
        fst dword ptr [eax-0x14]
        fst dword ptr [eax-4]
        jne L_zero
        mov eax, dword ptr [ebx+0x84]
        cmp eax, 1
        jne L_t2
        mov eax, 2
        jmp L_cnt
L_t2:
        xor edx, edx
        cmp eax, 2
        sete dl
        lea edx, [edx+edx+1]
        mov eax, edx
L_cnt:
        mov esi, dword ptr [esp+0x20]
        mov edi, esi
        sub edi, ebx
        mov dword ptr [esp+0x1c], eax
L_loop:
        cmp dword ptr [esp+0x10], -1
        je L_B
        mov eax, ebx
        mov edx, 3
L_A1:
        fld dword ptr [edi+eax]
        add eax, 4
        sub edx, 1
        fmul dword ptr [ecx]
        fadd dword ptr [eax-4]
        fstp dword ptr [eax-4]
        jne L_A1
        lea eax, [ebx+0x10]
        mov edx, 3
L_A2:
        fld dword ptr [edi+eax]
        add eax, 4
        sub edx, 1
        fmul dword ptr [ecx]
        fadd dword ptr [eax-4]
        fstp dword ptr [eax-4]
        jne L_A2
L_B:
        cmp dword ptr [esp+0x14], -1
        je L_adv
        xor eax, eax
        lea edx, [esi+0x20]
L_B1:
        fld dword ptr [edx]
        add eax, 1
        fmul dword ptr [ecx]
        add edx, 4
        cmp eax, 3
        fadd dword ptr [ebp+eax*4-4]
        fstp dword ptr [ebp+eax*4-4]
        jne L_B1
        lea edx, [esi+0x30]
        lea eax, [ebp+0x10]
        mov esi, 3
L_B2:
        fld dword ptr [edx]
        add edx, 4
        fmul dword ptr [ecx]
        add eax, 4
        sub esi, 1
        fadd dword ptr [eax-4]
        fstp dword ptr [eax-4]
        jne L_B2
        mov esi, dword ptr [esp+0x20]
L_adv:
        add esi, 0x40
        add edi, 0x40
        add ecx, 4
        sub dword ptr [esp+0x1c], 1
        mov dword ptr [esp+0x20], esi
        jne L_loop
        mov ebx, dword ptr [ebx+0x5c]
        test ebx, ebx
        jne L_node
        pop edi
        fstp st(0)
        pop esi
        pop ebp
L_end:
        pop ebx
        add esp, 8
        ret
    }
}

extern "C" void ext_007D6BB0();

// [0x007D6CF0] sub_007D6CF0 (224 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D6CF0(void) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebp + 4]
        mov eax, dword ptr [eax + ecx*4]
        push esi
        mov esi, dword ptr [ebp]
        lea eax, [esi + eax*4]
        mov esi, dword ptr [esp + 0x1c]
        xor edx, edx
        mov dword ptr [esp + 0x18], esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        cmp dword ptr [esi + ecx*4], edx
        mov dword ptr [esp + 0xc], edx
        jle L_7D6DC9
        mov esi, dword ptr [esp + 0x2c]
        sub eax, esi
        push edi
        mov edi, dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x20], eax
        jmp short L_7D6D39

L_7D6D35:
        mov eax, dword ptr [esp + 0x20]

L_7D6D39:
        mov ecx, dword ptr [eax + esi]
        push ecx
        call ext_007D8710
        add esp, 4
        test eax, eax
        je short L_7D6D96
        cmp dword ptr [eax + 0xb4], -1
        jne short L_7D6D80
        xor ecx, ecx

L_7D6D54:
        fld dword ptr [eax + ecx*4 + 0x20]
        add ecx, 1
        cmp ecx, 3
        fchs
        fstp dword ptr [eax + ecx*4 - 4]
        jne short L_7D6D54
        lea ecx, [eax + 0x10]
        mov edx, 3
        mov edi, edi

L_7D6D70:
        fld dword ptr [ecx + 0x20]
        add ecx, 4
        sub edx, 1
        fchs
        fstp dword ptr [ecx - 4]
        jne short L_7D6D70

L_7D6D80:
        cmp dword ptr [esp + 0x40], 0
        je short L_7D6D96
        mov edx, dword ptr [esp + 0x1c]
        push edi
        push edx
        push eax
        call ext_007D6BB0
        add esp, 0xc

L_7D6D96:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [ebp + 8]
        add dword ptr [esp + 0x10], 1
        mov ecx, eax
        shl ecx, 6
        add dword ptr [esp + 0x1c], ecx
        lea edi, [edi + eax*4]
        mov eax, dword ptr [esp + 0x18]
        add ebx, 1
        add esi, 4
        cmp ebx, dword ptr [edx + eax*4]
        jl L_7D6D35
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

L_7D6DC9:
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        pop ecx
        ret
    }
}

// [0x007DCC90] sub_007DCC90 (307 bytes)
extern "C" void ext_007DFCE0();
extern "C" int mem_00AB28C4;

extern "C" __declspec(naked) void __cdecl fn_007DCC90(void) {
    __asm {
        mov     eax, dword ptr [esp + 0x0c]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [ebp + 0x20]
        push    edi
        mov     edi, dword ptr [eax + 0x20]
        mov     eax, edi
        sub     eax, esi
        shr     eax, 0x1f
        sub     eax, 0x01
        mov     edx, eax
        not     edx
        mov     ecx, edx
        and     ecx, edi
        mov     ebx, eax
        and     eax, edi
        mov     edi, dword ptr [esp + 0x14]
        and     edx, esi
        or      eax, edx
        and     ebx, esi
        or      ecx, ebx
        shl     ecx, 0x10
        or      ecx, eax
        mov     eax, dword ptr [edi + 0x28]
        mov     ebx, ecx
        sar     ecx, 0x10
        mov     edx, ebx
        and     edx, 0xffff
        xor     ecx, edx
        mov     edx, dword ptr [eax + 0x08]
        mov     eax, dword ptr [eax]
        sub     edx, 0x01
        and     ecx, edx
        mov     eax, dword ptr [eax + 4*ecx]
        test    eax, eax
        je      L_7DCCFC
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_7DCCF0:
        cmp     dword ptr [eax + 0x08], ebx
        je      L_7DCD27
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        jne     L_7DCCF0
    L_7DCCFC:
        mov     eax, dword ptr [edi + 0x30]
        push    eax
        call    dword ptr [mem_00AB28C4]
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jne     L_7DCD57
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [edi + 0x34]
        push    ecx
        push    ebp
        call    edx
        add     esp, 0x08
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x01
        pop     ebx
        ret
    L_7DCD27:
        mov     ecx, dword ptr [eax + 0x0c]
        cmp     dword ptr [ecx + 0x08], 0x03
        je      L_7DCD37
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
    L_7DCD37:
        mov     dword ptr [ecx + 0x08], 0x02
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x04]
        pop     edi
        mov     dword ptr [ecx + 0x04], edx
        mov     ecx, dword ptr [eax + 0x04]
        mov     edx, dword ptr [eax]
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        mov     eax, 0x01
        pop     ebx
        ret
    L_7DCD57:
        mov     dword ptr [esi + 0x08], ebx
        mov     eax, dword ptr [edi + 0x2c]
        push    eax
        call    dword ptr [mem_00AB28C4]
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    ebp
        push    eax
        mov     dword ptr [esi + 0x0c], eax
        call    ext_007DFCE0
        mov     edx, dword ptr [esi + 0x0c]
        mov     ebx, 0x01
        mov     dword ptr [edx + 0x08], ebx
        add     dword ptr [edi + 0x3c], ebx
        mov     ecx, dword ptr [esi + 0x08]
        mov     edx, dword ptr [edi + 0x28]
        mov     eax, ecx
        and     ecx, 0xffff
        sar     eax, 0x10
        xor     eax, ecx
        mov     ecx, dword ptr [edx + 0x08]
        sub     ecx, ebx
        and     eax, ecx
        mov     ecx, dword ptr [edx]
        mov     ecx, dword ptr [ecx + 4*eax]
        mov     dword ptr [esi + 0x10], ecx
        mov     edx, dword ptr [edx]
        mov     dword ptr [edx + 4*eax], esi
        mov     eax, dword ptr [edi]
        mov     dword ptr [esi + 0x04], edi
        mov     dword ptr [esi], eax
        add     esp, 0x10
        mov     ecx, eax
        mov     dword ptr [ecx + 0x04], esi
        mov     edx, dword ptr [esi + 0x04]
        pop     edi
        mov     dword ptr [edx], esi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret
    }
}

// [0x007DD1D0] sub_007DD1D0 (303 bytes)
extern "C" void ext_007DCC90();
extern "C" void ext_007DCDD0();

extern "C" __declspec(naked) void __fastcall fn_007DD1D0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp edx, ebx
        push edi
        mov edi, ecx
        jne L_diff
        pop edi
        xor al, al
        pop ebx
        ret 0xc
    L_diff:
        mov eax, ebx
        sub eax, edx
        sar eax, 0x1f
        mov ecx, eax
        not ecx
        push ebp
        mov ebp, eax
        and eax, edx
        push esi
        mov esi, ecx
        and ecx, ebx
        or eax, ecx
        and esi, edx
        mov ecx, eax
        and ebp, ebx
        or esi, ebp
        lea eax, [esi + 0x1]
        lea edx, [esi + 0x2]
        imul edx, eax
        mov eax, dword ptr [edi + 0xc]
        imul eax, esi
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr [edi + 0x20]
        add eax, ecx
        mov dword ptr [esp + 0x14], ecx
        mov ecx, eax
        sar ecx, 1
        lea ebp, [ecx + edx]
        mov dl, byte ptr [ebp]
        mov cl, al
        and cl, 0x1
        add cl, cl
        add cl, cl
        shr dl, cl
        and dl, 0x0f
        cmp byte ptr [esp + 0x1c], 0
        je L_zero
        test dl, 0x4
        je L_end
        and al, 0x1
        add al, al
        add al, al
        movzx ecx, al
        and dl, 0xfb
        mov eax, 0xf0
        sar eax, cl
        mov bl, dl
        shl bl, cl
        and al, byte ptr [ebp]
        or al, bl
        mov byte ptr [ebp], al
        cmp dl, byte ptr [edi + 0x4]
        jne L_end
        mov eax, dword ptr [esp + 0x14]
        imul esi, esi, 0x9c
        mov ecx, dword ptr [edi + 0x10]
        imul eax, eax, 0x9c
        mov edx, dword ptr [eax + ecx + 0xc]
        mov eax, dword ptr [esi + ecx + 0xc]
        mov ecx, dword ptr [edi + 0x2c]
        push edx
        push eax
        push ecx
        call ext_007DCC90
        add esp, 0xc
        pop esi
        pop ebp
        pop edi
        mov al, 0x1
        pop ebx
        ret 0xc
    L_zero:
        test dl, 0x4
        jne L_end
        and al, 0x1
        add al, al
        add al, al
        movzx ecx, al
        mov eax, 0xf0
        sar eax, cl
        mov bl, dl
        or bl, 0x4
        shl bl, cl
        and al, byte ptr [ebp]
        or al, bl
        mov byte ptr [ebp], al
        cmp dl, byte ptr [edi + 0x4]
        jne L_end
        mov eax, dword ptr [esp + 0x14]
        imul esi, esi, 0x9c
        mov ecx, dword ptr [edi + 0x10]
        imul eax, eax, 0x9c
        mov edx, dword ptr [eax + ecx + 0xc]
        mov eax, dword ptr [esi + ecx + 0xc]
        mov ecx, dword ptr [edi + 0x2c]
        push edx
        push eax
        push ecx
        call ext_007DCDD0
        add esp, 0xc
    L_end:
        pop esi
        pop ebp
        pop edi
        mov al, 0x1
        pop ebx
        ret 0xc
    }
}

// [0x007DC8F0] sub_007DC8F0 (316 bytes)
extern "C" void ext_007D5870();
extern "C" void ext_007DC8C0();
extern "C" int mem_00928B5D;
extern "C" int mem_00925218;
extern "C" int mem_0099EBD0;
extern "C" int mem_0099EBA0;
extern "C" int mem_0099EB74;

extern "C" __declspec(naked) void __cdecl fn_007DC8F0(void) {
    __asm {
        sub esp, 0x20c
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, esp
        mov dword ptr [esp + 0x208], eax
        mov edx, dword ptr [esp + 0x228]
        mov ecx, dword ptr [esp + 0x220]
        mov eax, dword ptr [esp + 0x210]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x224]
        push esi
        mov esi, dword ptr [esp + 0x220]
        push edi
        mov edi, dword ptr [esp + 0x228]
        mov dword ptr [esp + 0x10], edx
        mov edx, esi
        mov dword ptr [esp + 0x14], ecx
        call ext_007DC8C0
        push 0x1ff
        mov ebx, eax
        mov al, byte ptr [mem_00928B5D]
        lea ecx, [esp + 0x1d]
        push 0x0
        push ecx
        mov byte ptr [esp + 0x24], al
        call ext_006A6E8C
        add esi, -0x1
        add esp, 0xc
        cmp esi, 0x22
        ja loc_7DC96D
        mov eax, dword ptr [ebx + 0x8]
        jmp loc_7DC972
    loc_7DC96D:
        mov eax, offset mem_0099EBD0
    loc_7DC972:
        cmp word ptr [ebx + 0x4], 0x0
        jle loc_7DCA13
        mov edx, dword ptr [esp + 0x234]
        push edi
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push eax
        push ebp
        lea ecx, [esp + 0x2c]
        push offset mem_0099EBA0
        push ecx
        call dword ptr [mem_00925218]
        add esp, 0x1c
        cmp word ptr [ebx + 0x4], 0x1
        jne loc_7DC9C6
        lea edi, [esp + 0x18]
        add edi, -0x1
        mov edi, edi
    loc_7DC9B0:
        mov al, byte ptr [edi + 0x1]
        add edi, 0x1
        test al, al
        jne loc_7DC9B0
        mov ecx, 0xb
        mov esi, offset mem_0099EB74
        rep movsd
    loc_7DC9C6:
        movsx eax, word ptr [ebx + 0x2]
        sub eax, 0x0
        je loc_7DC9FF
        sub eax, 0x1
        je loc_7DC9EC
        sub eax, 0x1
        jne loc_7DCA13
        mov eax, dword ptr [esp + 0x10]
        lea edx, [esp + 0x18]
        push edx
        push eax
        push 0x0
        call ext_007D5870
        jmp loc_7DCA10
    loc_7DC9EC:
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        push 0x0
        call ext_007D58E0
        jmp loc_7DCA10
    loc_7DC9FF:
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x18]
        push eax
        push ecx
        push 0x0
        call ext_007D5950
    loc_7DCA10:
        add esp, 0xc
    loc_7DCA13:
        mov ecx, dword ptr [esp + 0x218]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        call ext_006A745E
        add esp, 0x20c
        ret
    }
}

// [0x007DAE10] sub_007DAE10 (51 bytes)
extern "C" void ext_007C8890();
extern "C" void __cdecl fn_007DAE10(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 0, 0x9868f4, 0x7ca820, 0x528530, 0x528530, 0x7dad70, 0x7dada0, 0x7dadd0);
}

// [0x007DB520] sub_007DB520 (51 bytes)
extern "C" void ext_007C8890();
extern "C" void __cdecl fn_007DB520(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 7, 0x99e284, 0x7db500, 0x7daff0, 0x7db060, 0x7db090, 0x7f6210, 0x7db390);
}

// [0x007DC880] sub_007DC880 (51 bytes)
extern "C" void __cdecl fn_007DC880(int a1) {
    typedef void (__cdecl *FnT)(int, int, int, int, int, int, int, int, int);
    ((FnT)ext_007C8890)(a1, 8, 0x99e294, 0x7db6c0, 0x7db780, 0x7db8b0, 0x7db8e0, 0x7dbf50, 0x7dc7d0);
}

// [0x007D5720] sub_007D5720 (330 bytes)
extern "C" void __cdecl fn_007D5720(float* out, float* a, float* b) {
    out[0] = a[0] * b[0] + a[1] * b[4] + a[2] * b[8];
    out[1] = a[0] * b[1] + a[1] * b[5] + a[2] * b[9];
    out[2] = a[0] * b[2] + a[1] * b[6] + a[2] * b[10];
    out[3] = 0.0f;
    out[4] = a[4] * b[0] + a[5] * b[4] + a[6] * b[8];
    out[5] = a[4] * b[1] + a[5] * b[5] + a[6] * b[9];
    out[6] = a[4] * b[2] + a[5] * b[6] + a[6] * b[10];
    out[7] = 0.0f;
    out[8] = a[8] * b[0] + a[9] * b[4] + a[10] * b[8];
    out[9] = a[8] * b[1] + a[9] * b[5] + a[10] * b[9];
    out[10] = a[8] * b[2] + a[9] * b[6] + a[10] * b[10];
    out[11] = 0.0f;
    out[12] = a[12] * b[0] + a[13] * b[4] + a[14] * b[8] + b[12];
    out[13] = a[12] * b[1] + a[13] * b[5] + a[14] * b[9] + b[13];
    out[14] = a[12] * b[2] + a[13] * b[6] + a[14] * b[10] + b[14];
    out[15] = 1.0f;
}

// [0x007DC600] sub_007DC600 (359 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007C6F60();
extern "C" void ext_007C6F70();
extern "C" void ext_007C7000();
extern "C" void ext_007DEB50();
extern "C" void ext_007F6690();
extern "C" int mem_00AA7E40;
extern "C" int mem_0099D148;
extern "C" int mem_0092C180;

extern "C" __declspec(naked) void fn_007DC600() {
    __asm {
        push    ebp
        lea     ebp, [esp - 0x68]
        sub     esp, 0xb8
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp + 0x64], eax
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x70]
        push    edi
        push    esi
        call    ext_007C7000
        mov     ebx, eax
        add     esp, 0x4
        mov     eax, 0x50
        call    ext_006A6EC0
        mov     eax, esp
        add     eax, 0xf
        and     eax, -0x10
        push    esi
        mov     dword ptr [ebp + 0x50], eax
        call    ext_007C6F60
        push    esi
        mov     dword ptr [ebp + 0x54], eax
        call    ext_007C6F70
        fld     dword ptr [mem_0099D148]
        mov     eax, dword ptr [ebp + 0x7c]
        fstp    dword ptr [eax + 0x1c]
        mov     ecx, 0x20
        lea     edi, [ebp - 0x50]
        rep movsd
        mov     ecx, dword ptr [ebp + 0x54]
        mov     edx, dword ptr [ecx + 0x34]
        xor     eax, eax
        add     esp, 0x8
        cmp     dword ptr [ebx + 0x1c], eax
        mov     dword ptr [ebp + 0x58], eax
        mov     dword ptr [ebp + 0x5c], edx
        jle     loc_7DC734
        mov     dword ptr [ebp + 0x60], eax
loc_7DC67D:
        mov     ecx, dword ptr [ebx + 0x14]
        cmp     dword ptr [ecx + 4*eax], 0
        je      loc_7DC715
        mov     esi, dword ptr [ebp + 0x5c]
        mov     ecx, 0xe
        lea     edi, [ebp - 0xc]
        rep movsd
        cmp     dword ptr [ebp - 0x8], 0
        jne     loc_7DC6B4
        mov     edx, dword ptr [ebp + 0x50]
        mov     ecx, dword ptr [ebp + 0x54]
        mov     dword ptr [ebp - 0x8], edx
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, dword ptr [ebp + 0x60]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_007DEB50
loc_7DC6B4:
        mov     eax, dword ptr [ebp + 0x78]
        mov     ecx, dword ptr [ebp + 0x74]
        lea     edx, [ebp + 0x30]
        push    edx
        push    eax
        push    ecx
        lea     edx, [ebp - 0x50]
        push    edx
        call    ext_007F6690
        add     esp, 0x10
        test    eax, eax
        je      loc_7DC715
        mov     eax, dword ptr [ebp + 0x7c]
        fld     dword ptr [ebp + 0x4c]
        fld     dword ptr [eax + 0x1c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     loc_7DC713
        mov     eax, dword ptr [ebp + 0x7c]
        fld     dword ptr [ebp + 0x40]
        mov     ecx, dword ptr [ebp + 0x70]
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [ebp + 0x44]
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [ebp + 0x48]
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [ebp + 0x34]
        fstp    dword ptr [eax + 0x04]
        fld     dword ptr [ebp + 0x38]
        fstp    dword ptr [eax + 0x08]
        fld     dword ptr [ebp + 0x3c]
        fstp    dword ptr [eax + 0x0c]
        mov     dword ptr [eax], ecx
        fstp    dword ptr [eax + 0x1c]
        jmp     loc_7DC715
loc_7DC713:
        fstp    st(0)
loc_7DC715:
        mov     eax, dword ptr [ebp + 0x58]
        mov     edx, dword ptr [ebp + 0x5c]
        add     dword ptr [ebp + 0x60], 0x40
        mov     ecx, dword ptr [edx + 0x2c]
        add     eax, 1
        cmp     eax, dword ptr [ebx + 0x1c]
        mov     dword ptr [ebp + 0x58], eax
        mov     dword ptr [ebp + 0x5c], ecx
        jl      loc_7DC67D
loc_7DC734:
        mov     edx, dword ptr [ebp + 0x7c]
        fld     dword ptr [edx + 0x1c]
        fcomp   qword ptr [mem_0092C180]
        fnstsw  ax
        test    ah, 0x44
        jnp     loc_7DC74E
        mov     eax, 1
        jmp     loc_7DC750
loc_7DC74E:
        xor     eax, eax
loc_7DC750:
        lea     esp, [ebp - 0x5c]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp + 0x64]
        xor     ecx, ebp
        call    ext_006A745E
        add     ebp, 0x68
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007D60B0] sub_007D60B0 (360 bytes)
extern "C" void ext_007D5870();
extern "C" void ext_007D5DA0();
extern "C" void ext_007F0860();
extern "C" void ext_007D5FF0();
extern "C" int mem_0099DED0;
extern "C" int mem_009241A8;
extern "C" int mem_009241A4;
extern "C" int mem_009241C0;

extern "C" __declspec(naked) void __cdecl fn_007D60B0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        xor ebx, ebx
        cmp dword ptr [ebp + 294h], ebx
        mov byte ptr [esp + 0bh], 0
        mov byte ptr [esp + 10h], 0
        je short loc_7D60F3
        mov eax, dword ptr [ebp + 5f0h]
        push offset mem_0099DED0
        push eax
        push ebx
        call ext_007D5870
        add esp, 0ch
        push ebx
        call ext_007D5DA0
        mov eax, dword ptr [ebp + 29ch]
        add esp, 4
        pop ebp
        pop ebx
        pop ecx
        ret

loc_7D60F3:
        lea ecx, [esp + 10h]
        push ecx
        lea edx, [esp + 0fh]
        push edx
        call ext_007F0860
        mov ecx, 1
        add esp, 8
        cmp dword ptr [esp + 14h], ecx
        jne short loc_7D6129
        cmp al, cl
        jne short loc_7D6129
        movzx eax, byte ptr [esp + 10h]
        movzx edx, byte ptr [esp + 0bh]
        imul eax, edx
        mov dword ptr [ebp + 2a0h], ecx
        jmp short loc_7D6134

loc_7D6129:
        movzx eax, byte ptr [esp + 10h]
        mov dword ptr [ebp + 2a0h], ebx

loc_7D6134:
        mov dword ptr [ebp + 29ch], eax
        mov eax, 8
        cmp dword ptr [ebp + 29ch], eax
        jle short loc_7D614D
        mov dword ptr [ebp + 29ch], eax

loc_7D614D:
        mov ecx, dword ptr [ebp + 29ch]
        lea eax, [ecx - 1]
        cmp eax, ebx
        mov dword ptr [ebp + 298h], eax
        mov dword ptr [ebp + 564h], 2
        je near ptr loc_7D6204
        cmp ecx, ebx
        jle short loc_7D61ED
        push esi
        push edi
        lea edi, [ebp + 58ch]
        lea esi, [ebp + 2d4h]

loc_7D6180:
        push 0
        push 0
        push 0
        push 0
        call dword ptr [mem_009241A8]
        push 0
        push 0
        push 0
        push 0
        mov dword ptr [esi - 4], eax
        mov dword ptr [esi], edi
        call dword ptr [mem_009241A8]
        mov dword ptr [edi], eax
        push 0
        lea eax, [ebp + 5ach]
        push 0
        mov dword ptr [esi + 4], eax
        lea eax, [esi - 30h]
        push eax
        push offset ext_007D5FF0
        lea ecx, [ebp + 568h]
        mov dword ptr [eax], ecx
        push 0
        lea ecx, [ebp + 464h]
        push 0
        mov dword ptr [esi - 18h], ebx
        mov dword ptr [esi - 2ch], ecx
        call dword ptr [mem_009241A4]
        mov dword ptr [edi - 20h], eax
        add ebx, 1
        add edi, 4
        add esi, 38h
        cmp ebx, dword ptr [ebp + 29ch]
        jl short loc_7D6180
        pop edi
        pop esi

loc_7D61ED:
        lea ecx, [ebp + 5ach]
        push ecx
        call dword ptr [mem_009241C0]
        mov dword ptr [ebp + 294h], 1

loc_7D6204:
        push 0
        call ext_007D5DA0
        mov eax, dword ptr [ebp + 29ch]
        add esp, 4
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007D5170] sub_007D5170 (371 bytes)
extern "C" void ext_006A7250();
extern "C" int mem_0092A270;
extern "C" int mem_00993828;
extern "C" int mem_0099DEB8;

extern "C" __declspec(naked) void __fastcall fn_007D5170(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x14]
        fadd dword ptr [esi]
        fadd dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x1c]
        fldz
        fld dword ptr [esp + 0x1c]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_else
        fadd qword ptr [mem_0092A270]
        call ext_006A7250
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        fld st(0)
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [eax]
        fdivrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 0x18]
        fsub dword ptr [esi + 0x24]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax + 4]
        fld dword ptr [esi + 0x20]
        fsub dword ptr [esi + 8]
        fmul st, st(1)
        fstp dword ptr [eax + 8]
        fld dword ptr [esi + 4]
        fsub dword ptr [esi + 0x10]
        pop esi
        fmulp st(1), st
        fstp dword ptr [eax + 0xc]
        add esp, 0x10
        ret
    L_else:
        fstp st(0)
        push ebx
        fld dword ptr [esi + 0x14]
        push ebp
        fld dword ptr [esi]
        push edi
        fcompp
        xor edi, edi
        fnstsw ax
        test ah, 5
        jp L_skip1
        mov edi, 1
    L_skip1:
        fld dword ptr [esi + 0x28]
        lea eax, [edi + 4 * edi]
        fld dword ptr [esi + 4 * eax]
        fcompp
        fnstsw ax
        test ah, 5
        jp L_skip2
        mov edi, 2
    L_skip2:
        mov ebx, dword ptr [mem_0099DEB8 + edi * 4]
        mov ebp, dword ptr [mem_0099DEB8 + ebx * 4]
        lea ecx, [edi + 4 * edi]
        fld dword ptr [esi + 4 * ecx]
        lea edx, [ebx + 4 * ebx]
        fsub dword ptr [esi + 4 * edx]
        lea eax, [ebp + 4 * ebp]
        fsub dword ptr [esi + 4 * eax]
        fadd qword ptr [mem_0092A270]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        call ext_006A7250
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld st(0)
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + edi * 4 + 0x10]
        fldz
        fucomp st(2)
        fnstsw ax
        test ah, 0x44
        jnp L_skip3
        fdivrp st(1), st
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        jmp L_skip4
    L_skip3:
        fstp st(0)
    L_skip4:
        lea ecx, [ebp + 4 * ebx]
        fld dword ptr [esi + 4 * ecx]
        lea edx, [ebx + 4 * ebp]
        fsub dword ptr [esi + 4 * edx]
        lea eax, [edi + 4 * ebx]
        lea ecx, [ebx + 4 * edi]
        lea edx, [edi + 4 * ebp]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi + 4 * eax]
        lea eax, [ebp + 4 * edi]
        fadd dword ptr [esi + 4 * ecx]
        pop edi
        fmul st, st(1)
        fstp dword ptr [esp + 4 * ebx + 0xc]
        fld dword ptr [esi + 4 * edx]
        fadd dword ptr [esi + 4 * eax]
        mov eax, dword ptr [esp + 0x20]
        fmulp st(1), st
        fstp dword ptr [esp + 4 * ebp + 0xc]
        pop ebp
        fld dword ptr [esp + 8]
        pop ebx
        fstp dword ptr [eax + 4]
        pop esi
        fld dword ptr [esp + 4]
        fstp dword ptr [eax + 8]
        fld dword ptr [esp + 8]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        add esp, 0x10
        ret
    }
}

// [0x007D52F0] sub_007D52F0 (410 bytes)
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A7250();
extern "C" int mem_0092A278;
extern "C" int mem_0099DEC8;
extern "C" int mem_00993828;
extern "C" __declspec(naked) void __cdecl fn_007D52F0() {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp+0x30]
        fld dword ptr [esi+4]
        fld dword ptr [esi]
        fst qword ptr [esp+4]
        fld dword ptr [esi+8]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp+0x30]
        fld dword ptr [esp+0x30]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp+0x30]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp+0x30]
        fstp dword ptr [esp+0x30]
        fld dword ptr [esp+0x30]
        call ext_006A7250
        fstp dword ptr [esp+0x30]
        fld dword ptr [esp+0x30]
        fld st(0)
        fabs
        fstp dword ptr [esp+0x30]
        fld dword ptr [esp+0x30]
        fcomp qword ptr [mem_0099DEC8]
        fnstsw ax
        test ah, 5
        jnp done
        fld1
        fdiv st, st(1)
        fstp dword ptr [esp+0x30]
        fld dword ptr [esp+0x30]
        fld qword ptr [esp+4]
        fmul st, st(1)
        fstp dword ptr [esp+0x1c]
        fld dword ptr [esi+4]
        fmul st, st(1)
        fstp dword ptr [esp+0x20]
        fmul dword ptr [esi+8]
        fstp dword ptr [esp+0x24]
        fmul dword ptr [esp+0x34]
        fmul qword ptr [mem_00993828]
        fst qword ptr [esp+0xc]
        call ext_006A6EB0
        fstp dword ptr [esp+4]
        fld qword ptr [esp+0xc]
        call ext_006A6EAA
        fstp dword ptr [esp+0x30]
        mov eax, dword ptr [esp+0x2c]
        fld dword ptr [eax]
        fst qword ptr [esp+0x14]
        fld dword ptr [esp+0x30]
        fld dword ptr [esp+0x20]
        fld dword ptr [esp+0x1c]
        fld dword ptr [esp+0x24]
        fld dword ptr [esp+4]
        fld st(4)
        fmulp st(6), st
        fld dword ptr [eax+8]
        fmul st, st(4)
        fld dword ptr [eax+4]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [eax+0xc]
        fmul st, st(3)
        faddp st(1), st
        fstp dword ptr [esp+0x30]
        fld dword ptr [esp+0x30]
        fmul st, st(1)
        fsubp st(6), st
        fxch st(5)
        fstp dword ptr [esp+0x30]
        fld dword ptr [eax+0xc]
        fld dword ptr [eax+8]
        fst qword ptr [esp+0xc]
        fld st(1)
        fmul st, st(5)
        fxch st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+4]
        fld st(0)
        fmul st, st(3)
        fxch st(2)
        fmul st, st(4)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp+0x20]
        fld qword ptr [esp+0xc]
        fmul st, st(3)
        fxch st(1)
        fmul st, st(4)
        fsubp st(1), st
        fstp dword ptr [esp+0x24]
        fld st(4)
        fmul qword ptr [esp+0x14]
        fmulp st(2), st
        fld dword ptr [eax+4]
        fmul st, st(4)
        faddp st(2), st
        fld dword ptr [esp+0x1c]
        fmul st, st(5)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [eax+4]
        fld dword ptr [eax]
        fmul st, st(4)
        fmulp st(2), st
        fld dword ptr [eax+8]
        pop esi
        fmul st, st(3)
        faddp st(2), st
        fld dword ptr [esp+0x1c]
        fmul st, st(4)
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [eax+8]
        fld dword ptr [eax]
        fmul st, st(3)
        fmulp st(1), st
        fld dword ptr [eax+0xc]
        fmulp st(2), st
        faddp st(1), st
        fld dword ptr [esp+0x20]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [eax+0xc]
        fld dword ptr [esp+0x2c]
        fstp dword ptr [eax]
        add esp, 0x24
        ret
    done:
        fstp st(0)
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x007D64B0] sub_007D64B0 (419 bytes)
extern "C" int mem_00993840;
extern "C" __declspec(naked) void __cdecl fn_007D64B0(void* self, float t, float* v) {
    __asm {
        mov eax, dword ptr [esp+4]
        cmp dword ptr [eax+0x1ec], 0
        je L_clear
        or dword ptr [eax+0xc], 2
        jmp L_after
L_clear:
        and dword ptr [eax+0xc], -3
L_after:
        test dword ptr [eax+0x1c4], 0x400
        fld dword ptr [eax+0x94]
        fadd dword ptr [eax+0x80]
        mov ecx, dword ptr [esp+0xc]
        fadd dword ptr [eax+0xa8]
        fdiv qword ptr [mem_00993840]
        fstp dword ptr [esp+4]
        fld dword ptr [eax+0x1d0]
        fld dword ptr [esp+4]
        fld dword ptr [eax+0x20]
        fld dword ptr [eax+0xc0]
        fmul st, st(3)
        fmul st, st(2)
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [eax+0x20]
        fld dword ptr [eax+0x24]
        fld dword ptr [eax+0xc4]
        fmul st, st(3)
        fmul st, st(2)
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [eax+0x24]
        fld dword ptr [eax+0x28]
        fld dword ptr [eax+0xc8]
        _emit 0xde
        _emit 0xcb
        _emit 0xd9
        _emit 0xca
        _emit 0xde
        _emit 0xc9
        _emit 0xde
        _emit 0xe9
        fstp dword ptr [eax+0x28]
        fld dword ptr [eax+0x1cc]
        _emit 0xd9
        _emit 0xe0
        fld dword ptr [eax+0x1c8]
        fld dword ptr [eax+0xb0]
        fmul st, st(2)
        fadd dword ptr [ecx]
        fmul st, st(1)
        fadd dword ptr [eax+0x10]
        fstp dword ptr [eax+0x10]
        fld dword ptr [eax+0xb4]
        fmul st, st(2)
        fadd dword ptr [ecx+4]
        fmul st, st(1)
        fadd dword ptr [eax+0x14]
        fstp dword ptr [eax+0x14]
        fld dword ptr [eax+0xb8]
        _emit 0xde
        _emit 0xca
        fld dword ptr [ecx+8]
        _emit 0xde
        _emit 0xc2
        _emit 0xde
        _emit 0xc9
        fadd dword ptr [eax+0x18]
        fstp dword ptr [eax+0x18]
        fld dword ptr [esp+8]
        fld dword ptr [eax+0x20c]
        fadd st, st(1)
        fstp dword ptr [eax+0x20c]
        je L_zero
        fld1
        _emit 0xde
        _emit 0xf1
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        fld dword ptr [eax+0x150]
        fmul st, st(1)
        fadd dword ptr [eax+0x10]
        fstp dword ptr [eax+0x10]
        fld dword ptr [eax+0x160]
        fmul st, st(1)
        fadd dword ptr [eax+0x20]
        fstp dword ptr [eax+0x20]
        fldz
        fst dword ptr [eax+0x150]
        fst dword ptr [eax+0x160]
        fld dword ptr [eax+0x154]
        fmul st, st(2)
        fadd dword ptr [eax+0x14]
        fstp dword ptr [eax+0x14]
        fld dword ptr [eax+0x164]
        fmul st, st(2)
        fadd dword ptr [eax+0x24]
        fstp dword ptr [eax+0x24]
        fst dword ptr [eax+0x154]
        fst dword ptr [eax+0x164]
        fld dword ptr [eax+0x158]
        fmul st, st(2)
        fadd dword ptr [eax+0x18]
        fstp dword ptr [eax+0x18]
        fld dword ptr [eax+0x168]
        fmul st, st(2)
        fadd dword ptr [eax+0x28]
        fstp dword ptr [eax+0x28]
        fst dword ptr [eax+0x158]
        fst dword ptr [eax+0x168]
        fld dword ptr [eax+0x15c]
        fmul st, st(2)
        fadd dword ptr [eax+0x1c]
        fstp dword ptr [eax+0x1c]
        fld dword ptr [eax+0x16c]
        _emit 0xde
        _emit 0xca
        fld dword ptr [eax+0x2c]
        _emit 0xde
        _emit 0xc2
        _emit 0xd9
        _emit 0xc9
        fstp dword ptr [eax+0x2c]
        fst dword ptr [eax+0x15c]
        fstp dword ptr [eax+0x16c]
        and dword ptr [eax+0x1c4], 0xfffffbff
        ret
L_zero:
        fstp st(0)
        ret
    }
}

extern "C" void ext_007D48C0();
extern "C" void ext_007D48F0();
extern "C" void ext_007D4AA0();

// [0x007D4B90] sub_007D4B90 (426 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D4B90(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        push esi
        mov esi, dword ptr [ebx + 8]
        push edi
        mov edi, dword ptr [ebx]
        cmp edi, eax
        je r4b90_l1
        cmp dword ptr [ebx + 4], eax
        je r4b90_l2
        push ebx
        push eax
        call ext_007D4AA0
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 0xc]
        add esp, 8
        mov dword ptr [edi + 8], ecx
        cmp dword ptr [ecx], eax
        jne r4b90_a
        mov dword ptr [ecx], edi
        jmp r4b90_b
    r4b90_a:
        mov dword ptr [ecx + 4], edi
    r4b90_b:
        mov dword ptr [eax + 8], esi
        mov ecx, dword ptr [ebx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebx + 0xc]
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [ebx + 0xc], edx
        cmp dword ptr [esi], ebx
        jne r4b90_c
        mov dword ptr [esi], eax
        jmp r4b90_d
    r4b90_c:
        mov dword ptr [esi + 4], eax
        jmp r4b90_d
    r4b90_l1:
        mov edi, dword ptr [ebx + 4]
    r4b90_l2:
        mov dword ptr [edi + 8], esi
        cmp ebx, dword ptr [esi]
        jne r4b90_e
        mov dword ptr [esi], edi
        jmp r4b90_d
    r4b90_e:
        mov dword ptr [esi + 4], edi
    r4b90_d:
        mov eax, dword ptr [esp + 0x14]
        xor ebp, ebp
        mov dword ptr [ebx + 8], ebp
        mov dword ptr [ebx + 4], ebp
        mov dword ptr [ebx], ebp
        add dword ptr [eax + 0x18], -1
        mov eax, dword ptr [esp + 0x18]
        mov ebx, 1
        cmp dword ptr [eax + 0xc], ebx
        jne r4b90_bail
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [edx]
        mov dword ptr [eax + 0xc], ebp
        cmp dword ptr [edi + 0xc], ebx
        jne r4b90_tail
    r4b90_loop:
        mov esi, dword ptr [edi + 8]
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne r4b90_mirror
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [eax + 0xc], ebp
        jne r4b90_s1
        mov dword ptr [eax + 0xc], ebx
        mov eax, esi
        mov dword ptr [esi + 0xc], ebp
        call ext_007D48C0
        mov eax, dword ptr [esi + 4]
    r4b90_s1:
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 0xc], ebx
        jne r4b90_s2
        mov edx, dword ptr [eax + 4]
        cmp dword ptr [edx + 0xc], ebx
        je r4b90_s4
    r4b90_s2:
        mov ecx, dword ptr [eax + 4]
        cmp dword ptr [ecx + 0xc], ebx
        jne r4b90_s3
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 0xc], ebx
        mov dword ptr [eax + 0xc], ebp
        call ext_007D48F0
        mov eax, dword ptr [esi + 4]
    r4b90_s3:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [edx + 0xc], ebx
        mov eax, esi
        mov dword ptr [esi + 0xc], ebx
        call ext_007D48C0
    r4b90_done:
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [edi + 0xc], ebx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0xc], ebx
        pop ebx
        ret
    r4b90_mirror:
        cmp dword ptr [eax + 0xc], ebp
        jne r4b90_m1
        mov dword ptr [eax + 0xc], ebx
        mov eax, esi
        mov dword ptr [esi + 0xc], ebp
        call ext_007D48F0
        mov eax, dword ptr [esi]
    r4b90_m1:
        mov ecx, dword ptr [eax + 4]
        cmp dword ptr [ecx + 0xc], ebx
        jne r4b90_m2
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 0xc], ebx
        jne r4b90_m2
    r4b90_s4:
        mov dword ptr [eax + 0xc], ebp
        cmp dword ptr [esi + 0xc], ebx
        mov edi, esi
        je r4b90_loop
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [edi + 0xc], ebx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0xc], ebx
        pop ebx
        ret
    r4b90_m2:
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 0xc], ebx
        jne r4b90_m3
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edx + 0xc], ebx
        mov dword ptr [eax + 0xc], ebp
        call ext_007D48C0
        mov eax, dword ptr [esi]
    r4b90_m3:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax]
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [edx + 0xc], ebx
        mov eax, esi
        mov dword ptr [esi + 0xc], ebx
        call ext_007D48F0
    r4b90_tail:
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [edi + 0xc], ebx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [ecx + 0xc], ebx
    r4b90_bail:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
