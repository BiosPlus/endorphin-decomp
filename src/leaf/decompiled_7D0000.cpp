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
