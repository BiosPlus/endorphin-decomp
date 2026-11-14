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

// [0x007DFF50] sub_007DFF50 (447 bytes)
extern "C" void ext_007FC440();

extern "C" __declspec(naked) void __cdecl fn_007DFF50(void) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        mov ah, byte ptr [esp + 0x14]
        sub esp, 0xc
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        mov dword ptr [esi + 0x1c], 1
        or eax, dword ptr [esp + 0x24]
        movzx edi, ax
        mov eax, dword ptr [esp + 0x34]
        test eax, eax
        je m_identity
        fld dword ptr [eax + 0x10]
        fmul dword ptr [ecx + 4]
        fld dword ptr [eax]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x20]
        fmul dword ptr [ecx + 8]
        faddp st(1), st
        fstp dword ptr [esp + 8]
        fld dword ptr [eax + 0x14]
        fmul dword ptr [ecx + 4]
        fld dword ptr [eax + 4]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x24]
        fmul dword ptr [ecx + 8]
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x18]
        fmul dword ptr [ecx + 4]
        fld dword ptr [eax + 8]
        fmul dword ptr [ecx]
        faddp st(1), st
        fld dword ptr [eax + 0x28]
        fmul dword ptr [ecx + 8]
        faddp st(1), st
        jmp m_accum
    m_identity:
        fld dword ptr [ecx]
        fstp dword ptr [esp + 8]
        fld dword ptr [ecx + 4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 8]
    m_accum:
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x10]
        fadd dword ptr [esp + 8]
        fstp dword ptr [esi + 0x10]
        fld dword ptr [esi + 0x14]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x14]
        fld dword ptr [esi + 0x18]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x18]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [esi + 8]
        jge m_end
        test eax, eax
        je m_copy
        mov edx, dword ptr [esi + 4]
        lea ecx, [ecx + 4 * ecx]
        lea edx, [edx + 8 * ecx]
        mov ecx, dword ptr [esp + 0x18]
        call ext_007FC440
        jmp m_after
    m_copy:
        lea eax, [ecx + 4 * ecx]
        mov ecx, dword ptr [esi + 4]
        lea eax, [ecx + 8 * eax]
        mov ecx, dword ptr [esp + 0x18]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 4]
        fstp dword ptr [eax + 4]
        fld dword ptr [ecx + 8]
        fstp dword ptr [eax + 8]
    m_after:
        mov eax, dword ptr [esi + 0xc]
        fld dword ptr [esp + 8]
        lea edx, [eax + 4 * eax]
        mov eax, dword ptr [esi + 4]
        fstp dword ptr [eax + 8 * edx + 0xc]
        fld dword ptr [esp + 0xc]
        lea eax, [eax + 8 * edx + 0xc]
        fstp dword ptr [eax + 4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 8]
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [esi + 4]
        fld dword ptr [esp + 0x20]
        lea ecx, [eax + 4 * eax]
        fst dword ptr [edx + 8 * ecx + 0x18]
        mov eax, dword ptr [esi + 0xc]
        fldz
        mov ecx, dword ptr [esi + 4]
        fld dword ptr [esp + 0x30]
        lea eax, [eax + 4 * eax]
        fucom st(1)
        mov word ptr [ecx + 8 * eax + 0x1c], di
        add dword ptr [esi + 0xc], 1
        mov edx, dword ptr [esi + 0xc]
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp m_tail
        mov ecx, dword ptr [esp + 0x2c]
        test ecx, ecx
        je m_tail
        cmp edx, dword ptr [esi + 8]
        jge m_tail
        fld dword ptr [ecx]
        mov eax, dword ptr [esi + 4]
        fmul st, st(1)
        lea edx, [edx + 4 * edx]
        lea eax, [eax + 8 * edx]
        fadd dword ptr [eax - 0x28]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 4]
        fmul st, st(1)
        fadd dword ptr [eax - 0x24]
        fstp dword ptr [eax + 4]
        fmul dword ptr [ecx + 8]
        fadd dword ptr [eax - 0x20]
        fstp dword ptr [eax + 8]
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [esi + 4]
        lea ecx, [eax + 4 * eax]
        fld dword ptr [edx + 8 * ecx - 0x1c]
        lea eax, [edx + 8 * ecx]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [eax - 0x18]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [eax - 0x14]
        fstp dword ptr [eax + 0x14]
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 4]
        lea eax, [eax + 4 * eax]
        fstp dword ptr [ecx + 8 * eax + 0x18]
        mov eax, dword ptr [esi + 0xc]
        lea edx, [eax + 4 * eax]
        mov eax, dword ptr [esi + 4]
        mov word ptr [eax + 8 * edx + 0x1c], di
        add dword ptr [esi + 0xc], 1
        pop edi
        pop esi
        add esp, 0xc
        ret
    m_tail:
        fstp st(0)
        fstp st(0)
    m_end:
        pop edi
        pop esi
        add esp, 0xc
        ret
    }
}

extern "C" void ext_007C8F80(void*, void*);
extern "C" int mem_0099E0B0;

// [0x007D88C0] sub_007D88C0 (127 bytes)
extern "C" void* __cdecl fn_007D88C0(void* self, void* arg) {
    char* p = (char*)self;
    ext_007C8F80(self, arg);
    *(int*)(p + 0xA4) = 0;
    *(int*)(p + 0xB0) = 5;
    *(int*)(p + 0xA0) = 0x007CEA00;
    *(int*)(p + 0xA8) = 0x007D8890;
    *(int*)(p + 0xAC) = 0x007C9130;
    *(int*)(p + 0x168) = mem_0099E0B0;
    *(int*)(p + 0x16C) = mem_0099E0B0;
    *(float*)(p + 0x17C) = 0.0f;
    *(int*)(p + 0x164) = 0;
    *(float*)(p + 0x174) = 0.0f;
    *(int*)(p + 0x170) = 0;
    *(int*)(p + 0x178) = 0;
    return self;
}

// [0x007D8940] sub_007D8940 (46 bytes)
extern "C" void ext_007D88C0();
extern "C" int mem_00AB28C4;

extern "C" void* __cdecl fn_007D8940(void* a0) {
    typedef void* (__cdecl *FnB)(void*);
    typedef void (__cdecl *FnC)(void*, void*);
    void* esi = ((FnB)mem_00AB28C4)((char*)a0 + 0x15c);
    if (esi == 0) {
        return 0;
    }
    ((FnC)ext_007D88C0)(esi, a0);
    return esi;
}

// [0x007DC440] sub_007DC440 (447 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007C6F60();
extern "C" void ext_007D5AE0();
extern "C" void ext_007D5BD0();
extern "C" void ext_007DB640();
extern "C" void ext_007DB720();
extern "C" void ext_007DEB50();
extern "C" void ext_007F65D0();
extern "C" int mem_00AA7E40;

extern "C" __declspec(naked) void fn_007DC440() {
    __asm {
        push    ebp
        lea     ebp, [esp - 0x6c]
        sub     esp, 0xe0
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp + 0x68], eax
        push    ebx
        mov     ebx, dword ptr [ebp + 0x74]
        mov     eax, dword ptr [ebx]
        push    esi
        push    edi
        push    eax
        mov     dword ptr [ebp + 0x5c], 0
        call    ext_007C6F60
        push    eax
        mov     dword ptr [ebp + 0x58], eax
        call    ext_007D5AE0
        fld     dword ptr [ebp + 0x78]
        mov     dword ptr [ebp + 0x60], eax
        mov     eax, dword ptr [ebp + 0x7c]
        fstp    dword ptr [eax + 0x4]
        mov     dword ptr [eax], ebx
        add     esp, 0x8
        mov     eax, 0x50
        call    ext_006A6EC0
        mov     esi, dword ptr [ebx]
        mov     eax, esp
        add     eax, 0xf
        and     eax, -0x10
        mov     ecx, 0x20
        lea     edi, [ebp - 0x74]
        rep movsd
        lea     ecx, [ebp + 0xc]
        lea     edx, [ebp - 0x74]
        mov     dword ptr [ebp + 0x48], eax
        mov     eax, dword ptr [ebx + 0x4]
        mov     dword ptr [ebp - 0x5c], ecx
        mov     ecx, dword ptr [ebx + 0xc]
        mov     dword ptr [ebp + 0x18], edx
        lea     edx, [ebp + 0x18]
        push    eax
        mov     dword ptr [ebp - 0x4c], 0
        mov     dword ptr [ebp + 0x1c], eax
        mov     dword ptr [ebp + 0x24], ecx
        mov     dword ptr [ebp + 0x38], edx
        call    ext_007C6F60
        mov     dword ptr [ebp + 0x50], eax
        mov     eax, dword ptr [ebx]
        push    eax
        call    ext_007DB720
        mov     ecx, dword ptr [ebp + 0x58]
        mov     ebx, dword ptr [ecx + 0x34]
        mov     ecx, dword ptr [ebp + 0x60]
        mov     dword ptr [ebp + 0x4c], eax
        xor     eax, eax
        add     esp, 0x8
        cmp     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ebp + 0x54], eax
        jle     loc_7DC5CD
        mov     dword ptr [ebp + 0x64], eax
loc_7DC4FB:
        mov     edx, dword ptr [ecx + 0x14]
        cmp     dword ptr [edx + 4*eax], 0
        je      loc_7DC5A4
        mov     eax, dword ptr [ebp + 0x50]
        push    ebx
        push    eax
        call    ext_007D5BD0
        add     esp, 0x8
        test    eax, eax
        je      loc_7DC5A4
        mov     ecx, 0xe
        mov     esi, ebx
        lea     edi, [ebp - 0x30]
        rep movsd
        cmp     dword ptr [ebp - 0x2c], 0
        jne     loc_7DC54B
        mov     ecx, dword ptr [ebp + 0x60]
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ebp + 0x58]
        mov     ecx, dword ptr [edx + 0x4]
        mov     esi, dword ptr [ebp + 0x48]
        add     eax, dword ptr [ebp + 0x64]
        mov     edx, esi
        call    ext_007DEB50
        mov     dword ptr [ebp - 0x2c], esi
loc_7DC54B:
        mov     eax, dword ptr [ebp + 0x60]
        mov     eax, dword ptr [eax + 0x10]
        add     eax, dword ptr [ebp + 0x64]
        mov     ecx, dword ptr [ebp + 0x4c]
        mov     edx, dword ptr [ebp - 0x5c]
        call    ext_007DB640
        fld     dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x38]
        push    ecx
        push    ecx
        lea     edx, [ebp + 0x18]
        fstp    dword ptr [esp]
        push    edx
        call    ext_007F65D0
        mov     ecx, dword ptr [ebp + 0x7c]
        fld     dword ptr [ecx + 0x4]
        add     esp, 0xc
        fld     dword ptr [ebp + 0x3c]
        neg     eax
        sbb     eax, eax
        fcom    st(1)
        add     eax, 1
        add     dword ptr [ebp + 0x5c], eax
        fnstsw  ax
        fstp    st(1)
        test    ah, 5
        jp      loc_7DC5A2
        mov     eax, dword ptr [ebp + 0x44]
        fstp    dword ptr [ecx + 0x4]
        mov     dword ptr [ecx + 0x8], ebx
        mov     dword ptr [ecx + 0xc], eax
        jmp     loc_7DC5A4
loc_7DC5A2:
        fstp    st(0)
loc_7DC5A4:
        mov     eax, dword ptr [ebp + 0x54]
        mov     ecx, dword ptr [ebp + 0x60]
        add     dword ptr [ebp + 0x64], 0x40
        mov     ebx, dword ptr [ebx + 0x2c]
        add     eax, 1
        cmp     eax, dword ptr [ecx + 0x1c]
        mov     dword ptr [ebp + 0x54], eax
        jl      loc_7DC4FB
        cmp     dword ptr [ebp + 0x5c], 0
        je      loc_7DC5CD
        mov     eax, 2
        jmp     loc_7DC5E8
loc_7DC5CD:
        mov     ecx, dword ptr [ebp + 0x7c]
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [ebp + 0x78]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     loc_7DC5E6
        mov     eax, 1
        jmp     loc_7DC5E8
loc_7DC5E6:
        xor     eax, eax
loc_7DC5E8:
        lea     esp, [ebp - 0x80]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp + 0x68]
        xor     ecx, ebp
        call    ext_006A745E
        add     ebp, 0x6c
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007DE040] sub_007DE040 (457 bytes)
extern "C" void ext_007DDF30();
extern "C" void ext_007DCB00();
extern "C" int mem_00AA7E40;
extern "C" int mem_0093C1A8;
extern "C" int mem_0099D148;

extern "C" __declspec(naked) void __cdecl fn_007DE040(void* self, int a1, int n, int m) {
    __asm {
        push -1
        push 0x8c1cf1
        mov eax, dword ptr fs:[0]
        push eax
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, esp
        push eax
        lea eax, [esp+0x1c]
        mov dword ptr fs:[0], eax
        mov al, byte ptr [esp+0x30]
        sub al, 1
        cmp al, 6
        ja L_fail
        mov edi, dword ptr [esp+0x34]
        test edi, edi
        jle L_fail
        mov ebx, dword ptr [esp+0x38]
        test ebx, ebx
        jle L_fail
        mov ebp, dword ptr [esp+0x2c]
        mov ecx, dword ptr [ebp+0xb0]
        mov edx, dword ptr [ecx]
        push 0xd0
        call edx
        mov esi, eax
        add esp, 4
        test esi, esi
        mov dword ptr [esp+0x14], esi
        je L_fail
        mov dword ptr [esp+0x18], esi
        mov eax, dword ptr [ebp+0xb0]
        push eax
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr [esp+0x30], 0
        call ext_007DDF30
        xor eax, eax
        mov dword ptr [esi+0xc], edi
        mov dword ptr [esi+0xc8], eax
        mov dword ptr [esi+0xcc], eax
        mov dword ptr [esi+8], ebp
        mov ecx, dword ptr [ebp+0xb0]
        mov eax, dword ptr [ecx]
        lea edx, [edi*4]
        or ebx, -1
        push edx
        mov dword ptr [esp+0x28], ebx
        call eax
        mov edx, edi
        imul edx, edx, 0x9c
        mov dword ptr [esi+0x14], eax
        mov ecx, dword ptr [ebp+0xb0]
        mov eax, dword ptr [ecx]
        push edx
        call eax
        mov dword ptr [esi+0x10], eax
        add esp, 8
        xor eax, eax
        test edi, edi
        jle L_loop_end
        xor ecx, ecx
        mov edi, edi
    L_loop:
        mov edx, dword ptr [esi+0xc]
        mov ebp, dword ptr [esi+0x14]
        sub edx, eax
        sub edx, 1
        mov dword ptr [ebp+4*eax], edx
        mov edx, dword ptr [esi+0x10]
        mov dword ptr [edx+ecx+8], ebx
        add eax, 1
        add ecx, 0x9c
        cmp eax, edi
        jl L_loop
    L_loop_end:
        mov eax, dword ptr [esi+0xc]
        mov dword ptr [esi+0x18], eax
        mov al, byte ptr [esp+0x30]
        mov byte ptr [esi+5], al
        mov byte ptr [esi+4], 0
        xor cl, cl
    L_pop:
        mov dl, al
        sub dl, 1
        add cl, 1
        and al, dl
        jne L_pop
        fld dword ptr [mem_0093C1A8]
        mov byte ptr [esi+4], cl
        fld dword ptr [mem_0099D148]
        lea ecx, [esi+0xa8]
        lea eax, [esi+0x70]
        mov ebp, 3
        mov bl, -1
    L_link:
        mov byte ptr [eax-0x30], bl
        fxch st(1)
        fst dword ptr [eax-0x38]
        mov byte ptr [eax+0xc], bl
        lea edx, [eax-0x40]
        fxch st(1)
        fst dword ptr [eax+4]
        mov dword ptr [eax-0x3c], ecx
        mov edi, dword ptr [ecx]
        mov dword ptr [edx], edi
        mov dword ptr [ecx], edx
        mov edi, dword ptr [edx]
        mov dword ptr [edi+4], edx
        lea edx, [eax-4]
        mov dword ptr [edx], ecx
        mov edi, dword ptr [ecx+4]
        mov dword ptr [eax], edi
        mov dword ptr [edi], edx
        mov edi, dword ptr [edx]
        add ecx, 8
        add eax, 0x14
        sub ebp, 1
        mov dword ptr [edi+4], edx
        jne L_link
        mov eax, dword ptr [esp+0x2c]
        fstp st(1)
        mov ecx, dword ptr [eax+0xb0]
        fstp st(0)
        mov edx, dword ptr [esp+0x38]
        push ecx
        push edx
        call ext_007DCB00
        mov dword ptr [esi+0x2c], eax
        add esp, 8
        mov eax, esi
        mov ecx, dword ptr [esp+0x1c]
        mov dword ptr fs:[0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    L_fail:
        xor eax, eax
        mov ecx, dword ptr [esp+0x1c]
        mov dword ptr fs:[0], ecx
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret
    }
}

// [0x007DD4E0] sub_007DD4E0 (465 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DD4E0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 24h
        mov edx, dword ptr [esp + 28h]
        fld dword ptr [edx + 8h]
        mov eax, dword ptr [edx + 0Ch]
        fstp dword ptr [esp + 8h]
        push ebx
        fld dword ptr [esp + 0Ch]
        mov ebx, ecx
        mov ecx, dword ptr [edx + 4h]
        fst qword ptr [esp + 20h]
        fld dword ptr [ecx + 8h]
        push esi
        fcomp st(1)
        push edi
        mov edi, dword ptr [eax + 8h]
        mov dword ptr [esp + 1Ch], eax
        mov dword ptr [esp + 10h], ebx
        fnstsw ax
        mov dword ptr [esp + 0Ch], ecx
        mov dword ptr [esp + 18h], edi
        test ah, 1
        jne a_685
        push ebp
        jmp a_52F
a_527:
        mov ebx, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 1Ch]
a_52F:
        mov al, byte ptr [ecx + 10h]
        cmp al, -1
        je a_684
        cmp al, 1
        jne a_66D
        mov eax, dword ptr [ecx + 0Ch]
        mov edx, dword ptr [eax + 8h]
        mov dword ptr [esp + 18h], eax
        mov eax, edx
        sub eax, edi
        sar eax, 1Fh
        mov ecx, eax
        mov esi, eax
        and eax, edi
        not ecx
        and esi, edx
        mov ebp, ecx
        and ecx, edx
        or ecx, eax
        and ebp, edi
        or esi, ebp
        lea eax, [esi + 1]
        lea edx, [esi + 2]
        imul edx, eax
        mov eax, dword ptr [ebx + 0Ch]
        imul eax, esi
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr [ebx + 20h]
        add eax, ecx
        mov dword ptr [esp + 28h], ecx
        mov ecx, eax
        and al, 1
        add al, al
        add al, al
        sar ecx, 1
        lea edi, [ecx + edx]
        mov dl, byte ptr [edi]
        mov cl, al
        shr dl, cl
        movzx ebp, al
        and dl, 0Fh
        mov ecx, ebp
        add dl, 1
        mov eax, 0F0h
        sar eax, cl
        mov bl, dl
        shl bl, cl
        and al, byte ptr [edi]
        or al, bl
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 14h]
        cmp dl, byte ptr [eax + 4h]
        jne a_665
        mov edx, dword ptr [esp + 20h]
        mov edi, dword ptr [edx + 18h]
        test edi, edi
        mov dword ptr [esp + 24h], edi
        je a_6AD
        mov ecx, dword ptr [esp + 18h]
        cmp edi, dword ptr [ecx + 18h]
        jne a_6AD
        mov edi, dword ptr [edx + 1Ch]
        cmp edi, dword ptr [ecx + 1Ch]
        jne a_6AD
        mov edi, dword ptr [ecx + 20h]
        mov ebx, dword ptr [edx + 20h]
        mov eax, edi
        sub eax, ebx
        shr eax, 1Fh
        sub eax, 1
        mov ecx, eax
        not ecx
        mov edx, eax
        mov ebp, ecx
        and eax, edi
        and ecx, ebx
        or ecx, eax
        lea eax, [ecx + 1]
        imul eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        shr eax, 1
        add eax, edx
        mov ecx, eax
        and ecx, 1Fh
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr [esp + 24h]
        shr eax, 5
        test dword ptr [ecx + eax*4 + 8h], edx
        jne a_665
        mov eax, dword ptr [esp + 14h]
        fstp st(0)
a_638:
        mov ecx, dword ptr [esp + 28h]
        imul esi, esi, 9Ch
        mov edx, dword ptr [eax + 10h]
        imul ecx, ecx, 9Ch
        mov ecx, dword ptr [ecx + edx + 0Ch]
        mov edx, dword ptr [esi + edx + 0Ch]
        mov eax, dword ptr [eax + 2Ch]
        push ecx
        push edx
        push eax
        call ext_007DCC90
        add esp, 0Ch
        fld qword ptr [esp + 2Ch]
a_665:
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 38h]
a_66D:
        mov ecx, dword ptr [ecx + 4h]
        fld dword ptr [ecx + 8h]
        mov dword ptr [esp + 10h], ecx
        fcomp st(1)
        fnstsw ax
        test ah, 1
        je a_527
a_684:
        pop ebp
a_685:
        mov eax, dword ptr [edx]
        fstp st(0)
        mov esi, dword ptr [edx + 4h]
        mov dword ptr [eax + 4h], esi
        mov eax, dword ptr [edx + 4h]
        mov esi, dword ptr [edx]
        mov dword ptr [eax], esi
        mov dword ptr [edx + 4h], ecx
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        pop edi
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [edx]
        pop esi
        mov dword ptr [ecx + 4h], edx
        pop ebx
        add esp, 24h
        ret 4
a_6AD:
        fstp st(0)
        jmp a_638
    }
}

// [0x007DD6C0] sub_007DD6C0 (472 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DD6C0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 24h
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 2Ch]
        fld dword ptr [ecx + 8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 0Ch]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        push edi
        mov edi, dword ptr [eax + 8h]
        fst qword ptr [esp + 24h]
        fld dword ptr [edx + 8h]
        mov dword ptr [esp + 18h], eax
        fcomp st(1)
        mov dword ptr [esp + 0Ch], ebx
        mov dword ptr [esp + 8h], edx
        mov dword ptr [esp + 14h], edi
        fnstsw ax
        test ah, 41h
        jp loc_7DD868
        push ebp
        push esi
        jmp loc_7DD70E

loc_7DD706:
        mov edi, dword ptr [esp + 1Ch]
        mov ebx, dword ptr [esp + 14h]

loc_7DD70E:
        mov edx, dword ptr [esp + 10h]
        mov al, byte ptr [edx + 10h]
        cmp al, -1
        je loc_7DD866
        test al, al
        jne loc_7DD84C
        mov eax, dword ptr [edx + 0Ch]
        mov edx, dword ptr [eax + 8h]
        mov dword ptr [esp + 18h], eax
        mov eax, edx
        sub eax, edi
        sar eax, 1Fh
        mov ecx, eax
        mov esi, eax
        and eax, edi
        not ecx
        and esi, edx
        mov ebp, ecx
        and ecx, edx
        or ecx, eax
        and ebp, edi
        or esi, ebp
        lea eax, [esi + 1]
        lea edx, [esi + 2]
        imul edx, eax
        mov eax, dword ptr [ebx + 0Ch]
        imul eax, esi
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr [ebx + 20h]
        add eax, ecx
        mov dword ptr [esp + 28h], ecx
        mov ecx, eax
        and al, 1
        add al, al
        add al, al
        sar ecx, 1
        lea edi, [ecx + edx]
        mov dl, byte ptr [edi]
        mov cl, al
        shr dl, cl
        movzx ebp, al
        and dl, 0Fh
        mov ecx, ebp
        add dl, 1
        mov eax, 0F0h
        sar eax, cl
        mov bl, dl
        shl bl, cl
        and al, byte ptr [edi]
        or al, bl
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 14h]
        cmp dl, byte ptr [eax + 4h]
        jne loc_7DD848
        mov edx, dword ptr [esp + 20h]
        mov edi, dword ptr [edx + 18h]
        test edi, edi
        mov dword ptr [esp + 24h], edi
        je loc_7DD894
        mov ecx, dword ptr [esp + 18h]
        cmp edi, dword ptr [ecx + 18h]
        jne loc_7DD894
        mov edi, dword ptr [edx + 1Ch]
        cmp edi, dword ptr [ecx + 1Ch]
        jne loc_7DD894
        mov edi, dword ptr [ecx + 20h]
        mov ebx, dword ptr [edx + 20h]
        mov eax, edi
        sub eax, ebx
        shr eax, 1Fh
        sub eax, 1
        mov ecx, eax
        not ecx
        mov edx, eax
        mov ebp, ecx
        and eax, edi
        and ecx, ebx
        or ecx, eax
        lea eax, [ecx + 1]
        imul eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        shr eax, 1
        add eax, edx
        mov ecx, eax
        and ecx, 1Fh
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr [esp + 24h]
        shr eax, 5
        test dword ptr [ecx + eax*4 + 8h], edx
        jne loc_7DD848
        mov eax, dword ptr [esp + 14h]
        fstp st(0)

loc_7DD81B:
        mov ecx, dword ptr [esp + 28h]
        imul esi, esi, 9Ch
        mov edx, dword ptr [eax + 10h]
        imul ecx, ecx, 9Ch
        mov ecx, dword ptr [ecx + edx + 0Ch]
        mov edx, dword ptr [esi + edx + 0Ch]
        mov eax, dword ptr [eax + 2Ch]
        push ecx
        push edx
        push eax
        call ext_007DCC90
        add esp, 0Ch
        fld qword ptr [esp + 2Ch]

loc_7DD848:
        mov ecx, dword ptr [esp + 38h]

loc_7DD84C:
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        fld dword ptr [eax + 8h]
        mov dword ptr [esp + 10h], eax
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jnp loc_7DD706

loc_7DD866:
        pop esi
        pop ebp

loc_7DD868:
        mov eax, dword ptr [ecx]
        fstp st(0)
        mov edx, dword ptr [ecx + 4h]
        mov dword ptr [eax + 4h], edx
        mov eax, dword ptr [ecx + 4h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 8h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [eax + 4h]
        mov dword ptr [ecx + 4h], eax
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ecx]
        pop edi
        mov dword ptr [eax + 4h], ecx
        pop ebx
        add esp, 24h
        ret 4

loc_7DD894:
        fstp st(0)
        jmp loc_7DD81B
    }
}

// [0x007DD8A0] sub_007DD8A0 (473 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DD8A0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 24h
        mov edx, dword ptr [esp + 28h]
        fld dword ptr [edx + 8h]
        mov eax, dword ptr [edx + 0Ch]
        fstp dword ptr [esp + 8h]
        push ebx
        fld dword ptr [esp + 0Ch]
        mov ebx, ecx
        mov ecx, dword ptr [edx + 4h]
        fst qword ptr [esp + 20h]
        fld dword ptr [ecx + 8h]
        push esi
        fcomp st(1)
        push edi
        mov edi, dword ptr [eax + 8h]
        mov dword ptr [esp + 1Ch], eax
        mov dword ptr [esp + 10h], ebx
        fnstsw ax
        mov dword ptr [esp + 0Ch], ecx
        mov dword ptr [esp + 18h], edi
        test ah, 41h
        jne near ptr L7DDA4D
        push ebp
        jmp L7DD8EF
L7DD8E7:
        mov edi, dword ptr [esp + 1Ch]
        mov ebx, dword ptr [esp + 14h]
L7DD8EF:
        cmp byte ptr [ecx + 10h], -1
        je near ptr L7DDA4C
        cmp byte ptr [ecx + 10h], 0
        jne near ptr L7DDA35
        mov eax, dword ptr [ecx + 0Ch]
        mov edx, dword ptr [eax + 8h]
        mov dword ptr [esp + 18h], eax
        mov eax, edx
        sub eax, edi
        sar eax, 1Fh
        mov ecx, eax
        mov esi, eax
        and eax, edi
        not ecx
        mov ebp, ecx
        and ecx, edx
        or ecx, eax
        and esi, edx
        and ebp, edi
        or esi, ebp
        lea eax, [esi + 1]
        lea edx, [esi + 2]
        imul edx, eax
        mov eax, dword ptr [ebx + 0Ch]
        imul eax, esi
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr [ebx + 20h]
        add eax, ecx
        mov dword ptr [esp + 28h], ecx
        mov ecx, eax
        sar ecx, 1
        lea edi, [ecx + edx]
        mov dl, byte ptr [edi]
        mov cl, al
        and al, 1
        and cl, 1
        add al, al
        add cl, cl
        add al, al
        add cl, cl
        movzx ebp, al
        shr dl, cl
        mov ecx, ebp
        mov eax, 0F0h
        sar eax, cl
        and dl, 0Fh
        mov bl, dl
        sub bl, 1
        and al, byte ptr [edi]
        shl bl, cl
        or al, bl
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 14h]
        cmp dl, byte ptr [eax + 4h]
        jne near ptr L7DDA2D
        mov edx, dword ptr [esp + 20h]
        mov edi, dword ptr [edx + 18h]
        test edi, edi
        mov dword ptr [esp + 24h], edi
        je near ptr L7DDA75
        mov ecx, dword ptr [esp + 18h]
        cmp edi, dword ptr [ecx + 18h]
        jne near ptr L7DDA75
        mov edi, dword ptr [edx + 1Ch]
        cmp edi, dword ptr [ecx + 1Ch]
        jne near ptr L7DDA75
        mov edi, dword ptr [ecx + 20h]
        mov ebx, dword ptr [edx + 20h]
        mov eax, edi
        sub eax, ebx
        shr eax, 1Fh
        sub eax, 1
        mov ecx, eax
        not ecx
        mov edx, eax
        mov ebp, ecx
        and eax, edi
        and ecx, ebx
        or ecx, eax
        lea eax, [ecx + 1]
        imul eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        shr eax, 1
        add eax, edx
        mov ecx, eax
        and ecx, 1Fh
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr [esp + 24h]
        shr eax, 5
        test dword ptr [ecx + eax * 4 + 8h], edx
        jne short L7DDA2D
        mov eax, dword ptr [esp + 14h]
        fstp st(0)
L7DDA00:
        mov ecx, dword ptr [esp + 28h]
        imul esi, esi, 9Ch
        mov edx, dword ptr [eax + 10h]
        imul ecx, ecx, 9Ch
        mov ecx, dword ptr [ecx + edx + 0Ch]
        mov edx, dword ptr [esi + edx + 0Ch]
        mov eax, dword ptr [eax + 2Ch]
        push ecx
        push edx
        push eax
        call ext_007DCDD0
        add esp, 0Ch
        fld qword ptr [esp + 2Ch]
L7DDA2D:
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 38h]
L7DDA35:
        mov ecx, dword ptr [ecx + 4h]
        fld dword ptr [ecx + 8h]
        mov dword ptr [esp + 10h], ecx
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        je near ptr L7DD8E7
L7DDA4C:
        pop ebp
L7DDA4D:
        mov eax, dword ptr [edx]
        fstp st(0)
        mov esi, dword ptr [edx + 4h]
        mov dword ptr [eax + 4h], esi
        mov eax, dword ptr [edx + 4h]
        mov esi, dword ptr [edx]
        mov dword ptr [eax], esi
        mov dword ptr [edx + 4h], ecx
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        pop edi
        mov dword ptr [ecx], edx
        mov ecx, dword ptr [edx]
        pop esi
        mov dword ptr [ecx + 4h], edx
        pop ebx
        add esp, 24h
        ret 4
L7DDA75:
        fstp st(0)
        jmp L7DDA00
    }
}

// [0x007DD300] sub_007DD300 (479 bytes)
extern "C" void ext_007DCDD0();

extern "C" __declspec(naked) void __fastcall fn_007DD300(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 24h
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 2Ch]
        fld dword ptr [ecx + 8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 0Ch]
        fstp dword ptr [esp + 0Ch]
        fld dword ptr [esp + 0Ch]
        push edi
        mov edi, dword ptr [eax + 8h]
        fst qword ptr [esp + 24h]
        fld dword ptr [edx + 8h]
        mov dword ptr [esp + 18h], eax
        fcomp st(1)
        mov dword ptr [esp + 0Ch], ebx
        mov dword ptr [esp + 8h], edx
        mov dword ptr [esp + 14h], edi
        fnstsw ax
        test ah, 5
        jp L7DD4AF
        push ebp
        push esi
        jmp L7DD34E
L7DD346:
        mov ebx, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 1Ch]
L7DD34E:
        mov edx, dword ptr [esp + 10h]
        mov al, byte ptr [edx + 10h]
        cmp al, -1
        je L7DD4AD
        cmp al, 1
        jne L7DD493
        mov eax, dword ptr [edx + 0Ch]
        mov edx, dword ptr [eax + 8h]
        mov dword ptr [esp + 18h], eax
        mov eax, edx
        sub eax, edi
        sar eax, 1Fh
        mov ecx, eax
        mov esi, eax
        and eax, edi
        not ecx
        mov ebp, ecx
        and ecx, edx
        or ecx, eax
        and esi, edx
        and ebp, edi
        or esi, ebp
        lea eax, [esi + 1]
        lea edx, [esi + 2]
        imul edx, eax
        mov eax, dword ptr [ebx + 0Ch]
        imul eax, esi
        sar edx, 1
        sub eax, edx
        mov edx, dword ptr [ebx + 20h]
        add eax, ecx
        mov dword ptr [esp + 28h], ecx
        mov ecx, eax
        sar ecx, 1
        lea edi, [ecx + edx]
        mov dl, byte ptr [edi]
        mov cl, al
        and al, 1
        and cl, 1
        add al, al
        add cl, cl
        add al, al
        add cl, cl
        movzx ebp, al
        shr dl, cl
        mov ecx, ebp
        mov eax, 0F0h
        sar eax, cl
        and dl, 0Fh
        mov bl, dl
        sub bl, 1
        and al, byte ptr [edi]
        shl bl, cl
        or al, bl
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 14h]
        cmp dl, byte ptr [eax + 4h]
        jne L7DD48F
        mov edx, dword ptr [esp + 20h]
        mov edi, dword ptr [edx + 18h]
        test edi, edi
        mov dword ptr [esp + 24h], edi
        je L7DD4DB
        mov ecx, dword ptr [esp + 18h]
        cmp edi, dword ptr [ecx + 18h]
        jne L7DD4DB
        mov edi, dword ptr [edx + 1Ch]
        cmp edi, dword ptr [ecx + 1Ch]
        jne L7DD4DB
        mov edi, dword ptr [ecx + 20h]
        mov ebx, dword ptr [edx + 20h]
        mov eax, edi
        sub eax, ebx
        shr eax, 1Fh
        sub eax, 1
        mov ecx, eax
        not ecx
        mov edx, eax
        mov ebp, ecx
        and eax, edi
        and ecx, ebx
        or ecx, eax
        lea eax, [ecx + 1]
        imul eax, ecx
        and edx, ebx
        and ebp, edi
        or edx, ebp
        shr eax, 1
        add eax, edx
        mov ecx, eax
        and ecx, 1Fh
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr [esp + 24h]
        shr eax, 5
        test dword ptr [ecx + eax * 4 + 8h], edx
        jne L7DD48F
        mov eax, dword ptr [esp + 14h]
        fstp st(0)
L7DD462:
        mov ecx, dword ptr [esp + 28h]
        imul esi, esi, 9Ch
        mov edx, dword ptr [eax + 10h]
        imul ecx, ecx, 9Ch
        mov ecx, dword ptr [ecx + edx + 0Ch]
        mov edx, dword ptr [esi + edx + 0Ch]
        mov eax, dword ptr [eax + 2Ch]
        push ecx
        push edx
        push eax
        call ext_007DCDD0
        add esp, 0Ch
        fld qword ptr [esp + 2Ch]
L7DD48F:
        mov ecx, dword ptr [esp + 38h]
L7DD493:
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        fld dword ptr [eax + 8h]
        mov dword ptr [esp + 10h], eax
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jnp L7DD346
L7DD4AD:
        pop esi
        pop ebp
L7DD4AF:
        mov eax, dword ptr [ecx]
        fstp st(0)
        mov edx, dword ptr [ecx + 4h]
        mov dword ptr [eax + 4h], edx
        mov eax, dword ptr [ecx + 4h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [esp + 8h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [eax + 4h]
        mov dword ptr [ecx + 4h], eax
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ecx]
        pop edi
        mov dword ptr [eax + 4h], ecx
        pop ebx
        add esp, 24h
        ret 4
L7DD4DB:
        fstp st(0)
        jmp L7DD462
    }
}

// [0x007DB190] sub_007DB190 (500 bytes)
extern "C" void ext_007E46B0();
extern "C" __declspec(naked) void __fastcall fn_007DB190(void* self) {
    __asm {
        sub esp, 0x18
        mov ecx, dword ptr [esp + 0x20]
        fld dword ptr [ecx]
        mov edx, dword ptr [esp + 0x24]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        mov edi, dword ptr [esp + 0x2c]
        mov eax, dword ptr [edi]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [edx]
        fstp dword ptr [eax + 0xc]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [eax + 0x10]
        fld dword ptr [edx + 0x8]
        fstp dword ptr [eax + 0x14]
        fld dword ptr [esi]
        fstp dword ptr [eax + 0x18]
        fld dword ptr [esi + 0x4]
        fstp dword ptr [eax + 0x1c]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [eax + 0x20]
        fld dword ptr [edx]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [edx + 0x4]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [edx + 0x8]
        fsub dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esi]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x8]
        mov esi, dword ptr [edi + 0x8]
        fsub dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld st(0)
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0x14]
        fld st(0)
        fld dword ptr [esp + 0x24]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        __asm _emit 0xde
        __asm _emit 0xe1
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(4), st
        fld dword ptr [esp + 0x1c]
        fld st(0)
        fmulp st(6), st
        fxch st(4)
        __asm _emit 0xde
        __asm _emit 0xe5
        fxch st(4)
        fstp dword ptr [esi + 0x4]
        fmulp st(2), st
        fmulp st(2), st
        __asm _emit 0xde
        __asm _emit 0xe1
        fstp dword ptr [esi + 0x8]
        call ext_007E46B0
        mov eax, dword ptr [edi + 0x8]
        fstp st(0)
        fld dword ptr [eax]
        fld qword ptr [mem_00993830]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [eax + 0xc]
        fld dword ptr [eax + 0x4]
        xor ecx, ecx
        fmul st, st(1)
        mov ebx, 0x3
        mov esi, 0x6
        fstp dword ptr [eax + 0x10]
        fmul dword ptr [eax + 0x8]
        fstp dword ptr [eax + 0x14]
        mov eax, dword ptr [edi + 0xc]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [edi + 0xc]
        mov dword ptr [edx + 0x4], ebx
        mov eax, dword ptr [edi + 0xc]
        mov dword ptr [eax + 0x8], esi
        mov edx, dword ptr [edi + 0x10]
        mov dword ptr [edx + 0x4], ecx
        mov edx, dword ptr [edi + 0x10]
        mov eax, 0x1
        mov dword ptr [edx + 0x8], eax
        mov edx, dword ptr [edi + 0x10]
        mov dword ptr [edx + 0xc], eax
        mov edx, dword ptr [edi + 0x10]
        mov dword ptr [edx + 0x10], ecx
        mov edx, dword ptr [edi + 0x10]
        mov dword ptr [edx + 0x18], eax
        mov ebp, dword ptr [edi + 0x10]
        mov edx, 0x2
        mov dword ptr [ebp + 0x1c], edx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x20], eax
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x24], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x2c], edx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x30], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x34], eax
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x38], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x40], eax
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x44], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x48], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x4c], eax
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x54], edx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x58], eax
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x5c], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x60], eax
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x68], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x6c], edx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x70], ecx
        mov ebp, dword ptr [edi + 0x10]
        mov dword ptr [ebp + 0x74], eax
        mov ebp, dword ptr [edi + 0x14]
        mov dword ptr [ebp], ecx
        mov ebp, dword ptr [edi + 0x14]
        mov dword ptr [ebp + 0x4], 0x5
        mov ebp, dword ptr [edi + 0x14]
        mov dword ptr [ebp + 0x8], eax
        mov eax, dword ptr [edi + 0x14]
        mov dword ptr [eax + 0xc], ebx
        mov eax, dword ptr [edi + 0x14]
        mov dword ptr [eax + 0x10], edx
        mov ebx, dword ptr [edi + 0x14]
        mov eax, 0x4
        mov dword ptr [ebx + 0x14], eax
        mov ebx, dword ptr [edi + 0x4]
        mov dword ptr [ebx], ecx
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [edx + 0x8], eax
        mov eax, dword ptr [edi + 0x4]
        pop edi
        mov dword ptr [eax + 0xc], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x007DF3A0] sub_007DF3A0 (620 bytes)
extern "C" void ext_007C8850();
extern "C" void ext_007C89F0();
extern "C" void ext_007C8A10();
extern "C" void ext_007C8A30();
extern "C" void ext_007D58E0();
extern "C" void ext_007DAD40();
extern "C" __declspec(naked) void fn_007DF3A0() {
    __asm {
        sub esp, 0x148
        push ebp
        mov ebp, dword ptr [esp + 0x150]
        push esi
        mov esi, dword ptr [ebx + 0xc]
        imul esi, ebp
        push edi
        mov edi, eax
        mov eax, dword ptr [ebx + 0x8]
        push edi
        push ebp
        add esi, edi
        push eax
        mov dword ptr [esp + 0x1c], esi
        call ext_007C89F0
        mov eax, dword ptr [eax + 0x4]
        add esp, 0xc
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        jne L443
        mov ecx, dword ptr [ebx + 0x8]
        push edi
        push ebp
        push ecx
        call ext_007C8A10
        add esp, 0xc
        test eax, eax
        jne L443
        call ext_007DAD40
        movsx edx, ax
        cmp ebp, edx
        je L443
        call ext_007DAD40
        movsx eax, ax
        cmp edi, eax
        je L443
        mov ecx, dword ptr [ebx + 0x8]
        push edi
        push ecx
        call ext_007C8850
        mov edx, dword ptr [ebx + 0x8]
        add esp, 0x8
        push eax
        push ebp
        push edx
        call ext_007C8850
        add esp, 0x8
        push eax
        mov eax, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [eax + 0xb0]
        push 0x99ebf4
        push ecx
        push 0x1
        call ext_007D58E0
        mov edx, dword ptr [ebx + 0x8]
        push 0x1
        push edi
        push ebp
        push edx
        call ext_007C8A30
        add esp, 0x24
L443:
        mov eax, dword ptr [ebx + 0x4]
        mov esi, dword ptr [eax + 4*esi]
        test esi, esi
        je L5F1
L451:
        mov eax, dword ptr [esi + 0x50]
        mov edx, dword ptr [ebx + 0x38]
        mov edi, dword ptr [esi + 0x5c]
        lea ecx, [eax + 2*eax]
        lea ebp, [edx + 4*ecx]
        xor ecx, ecx
        cmp eax, ecx
        jne L477
        mov eax, dword ptr [ebp + 0x4]
        add eax, 0x80
        cmp dword ptr [ebp + 0x8], eax
        jl L600
L477:
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x9c], edx
        mov eax, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x98], eax
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x70]
        mov edx, dword ptr [esi + 0x24]
        mov dword ptr [esp + 0x11c], edx
        mov eax, dword ptr [esi + 0x28]
        mov dword ptr [esp + 0x118], eax
        fld dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0xf0]
        test byte ptr [esi + 0x54], 0x1
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax + 0x7c]
        jne L4D5
        mov dword ptr [esp + 0xd0], edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [edx + 0x7c]
        mov dword ptr [esp + 0x150], eax
        jmp L4EB
L4D5:
        mov dword ptr [esp + 0x150], edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [edx + 0x7c]
        mov dword ptr [esp + 0xd0], eax
L4EB:
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0xd4], eax
        mov dword ptr [esp + 0x54], eax
        lea edx, [esp + 0x54]
        mov dword ptr [esp + 0x34], edx
        lea eax, [esp + 0xd4]
        mov dword ptr [esp + 0x38], eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0xc]
        mov dword ptr [esp + 0x40], eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x1c]
        mov dword ptr [esp + 0x50], eax
        test byte ptr [edi + 0x10], 0x10
        je L52A
        mov dword ptr [esp + 0x44], ecx
        jmp L533
L52A:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x10]
        mov dword ptr [esp + 0x44], eax
L533:
        mov eax, dword ptr [ebp + 0x4]
        lea edx, [eax + 4*eax]
        mov eax, dword ptr [ebp]
        lea edx, [eax + 8*edx]
        mov dword ptr [esp + 0x18], edx
        mov eax, dword ptr [ebp + 0x8]
        sub eax, dword ptr [ebp + 0x4]
        lea edx, [esp + 0x34]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [esp + 0xc]
        cmp eax, ecx
        mov dword ptr [esp + 0x14], edx
        je L56C
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        call eax
        add esp, 0x8
        xor ecx, ecx
        jmp L574
L56C:
        mov dword ptr [esp + 0x30], ecx
        mov dword ptr [esp + 0x20], ecx
L574:
        mov edx, dword ptr [esp + 0x44]
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 0x10], edx
        mov eax, dword ptr [ebp + 0x4]
        mov edx, dword ptr [ebp]
        lea eax, [eax + 4*eax]
        lea eax, [edx + 8*eax]
        mov dword ptr [esi + 0x44], eax
        mov edx, dword ptr [esp + 0x30]
        mov dword ptr [esi + 0x3c], edx
        mov dword ptr [esi + 0x40], ecx
        add dword ptr [edi + 0xc], 0x1
        mov eax, dword ptr [edi + 0xc]
        cmp eax, dword ptr [edi + 0x8]
        jne L5AE
        mov eax, dword ptr [edi + 0x10]
        and eax, 0x10
        or eax, 0x2
        mov dword ptr [edi + 0x10], eax
L5AE:
        cmp dword ptr [esi + 0x3c], ecx
        je L5D6
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [esi + 0x40], edx
        mov eax, dword ptr [esp + 0x20]
        add dword ptr [ebp + 0x4], eax
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esi + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi + 0x34]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esi + 0x38]
L5D6:
        mov edx, dword ptr [ebx + 0x4]
        mov esi, dword ptr [esi + 0x58]
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edx + 4*eax], esi
        mov edx, dword ptr [ebx + 0x4]
        mov esi, dword ptr [edx + 4*eax]
        cmp esi, ecx
        jne L451
L5F1:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebp
        add esp, 0x148
        ret
L600:
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x148
        ret
    }
}

// [0x007DE8C0] sub_007DE8C0 (644 bytes)
extern "C" void ext_007DD0A0();
extern "C" void ext_007DCDD0();
extern "C" __declspec(naked) bool __fastcall fn_007DE8C0(void* self, int edx_unused, int idx) {
    __asm {
        sub esp, 0x14
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        jl L_exit
        cmp ebp, dword ptr [esi + 0xc]
        jge L_exit
        mov eax, dword ptr [esi + 0x10]
        mov edi, ebp
        imul edi, edi, 0x9c
        cmp dword ptr [edi + eax + 0x8], ebp
        mov dword ptr [esp + 0x14], edi
        jne L_exit
        push ebx
        push 0
        push ebp
        call ext_007DD0A0
        mov edx, dword ptr [esi + 0x10]
        add edx, edi
        lea eax, [edx + 0x24]
        mov ecx, eax
        mov edi, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov dword ptr [edi + 0x4], ebx
        mov ebx, dword ptr [ecx]
        mov edi, dword ptr [ecx + 0x4]
        mov dword ptr [edi], ebx
        mov dword ptr [ecx], ecx
        mov dword ptr [ecx + 0x4], ecx
        add eax, 0x14
        mov ecx, eax
        mov edi, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov dword ptr [edi + 0x4], ebx
        mov ebx, dword ptr [ecx]
        mov edi, dword ptr [ecx + 0x4]
        mov dword ptr [edi], ebx
        mov dword ptr [ecx], ecx
        mov dword ptr [ecx + 0x4], ecx
        add eax, 0x14
        mov ecx, eax
        mov edi, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov dword ptr [edi + 0x4], ebx
        mov edi, dword ptr [ecx + 0x4]
        mov ebx, dword ptr [ecx]
        mov dword ptr [edi], ebx
        mov dword ptr [ecx + 0x4], ecx
        mov dword ptr [ecx], ecx
        add eax, 0x14
        mov ecx, eax
        mov edi, dword ptr [ecx]
        mov ebx, dword ptr [ecx + 0x4]
        mov dword ptr [edi + 0x4], ebx
        mov edi, dword ptr [ecx + 0x4]
        mov ebx, dword ptr [ecx]
        mov dword ptr [edi], ebx
        mov dword ptr [ecx + 0x4], ecx
        mov dword ptr [ecx], ecx
        mov ecx, dword ptr [eax + 0x14]
        mov edi, dword ptr [eax + 0x18]
        mov dword ptr [ecx + 0x4], edi
        mov ecx, dword ptr [eax + 0x18]
        mov edi, dword ptr [eax + 0x14]
        add eax, 0x14
        mov dword ptr [ecx], edi
        mov dword ptr [eax + 0x4], eax
        mov dword ptr [eax], eax
        mov ecx, dword ptr [eax + 0x14]
        mov edi, dword ptr [eax + 0x18]
        add eax, 0x14
        mov dword ptr [ecx + 0x4], edi
        mov ecx, dword ptr [eax + 0x4]
        mov edi, dword ptr [eax]
        mov dword ptr [ecx], edi
        xor ecx, ecx
        cmp ebp, ecx
        mov dword ptr [eax + 0x4], eax
        mov dword ptr [esp + 0x1c], edx
        mov dword ptr [eax], eax
        jle L_loop1_done
        mov dword ptr [esp + 0x10], ecx
        jmp L_loop1_body
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00
L_loop1_body:
        mov eax, dword ptr [esi + 0xc]
        lea ebx, [ecx + 0x1]
        imul eax, ecx
        mov ecx, dword ptr [esi + 0x20]
        lea edx, [ebx + 0x1]
        imul edx, ebx
        sar edx, 1
        sub eax, edx
        add eax, ebp
        mov edi, eax
        and al, 0x1
        sar edi, 1
        mov dl, byte ptr [edi + ecx]
        add al, al
        add al, al
        mov cl, al
        shr dl, cl
        mov dword ptr [esp + 0x14], edi
        mov byte ptr [esp + 0x28], al
        and dl, 0xf
        cmp dl, byte ptr [esi + 0x4]
        jne L_skip1
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + eax + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        push edx
        mov edx, dword ptr [ecx + eax + 0xc]
        mov eax, dword ptr [esi + 0x2c]
        push edx
        push eax
        call ext_007DCDD0
        mov al, byte ptr [esp + 0x34]
        add esp, 0xc
L_skip1:
        mov edi, dword ptr [esi + 0x20]
        add edi, dword ptr [esp + 0x14]
        add dword ptr [esp + 0x10], 0x9c
        movzx ecx, al
        mov edx, 0xf0
        sar edx, cl
        xor al, al
        shl al, cl
        mov ecx, ebx
        and dl, byte ptr [edi]
        or dl, al
        cmp ecx, ebp
        mov byte ptr [edi], dl
        jl L_loop1_body
        mov edx, dword ptr [esp + 0x1c]
L_loop1_done:
        lea ebx, [ebp + 0x1]
        cmp ebx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x10], ebx
        jge L_tail_test
        lea ecx, [ebp + 0x2]
        imul ecx, ebx
        sar ecx, 1
        mov edi, ebx
        imul edi, edi, 0x9c
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x14], edi
        jmp L_loop2_cond
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_loop2_body:
        mov edi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x10]
L_loop2_cond:
        mov eax, dword ptr [esi + 0xc]
        imul eax, ebp
        sub eax, ecx
        mov ecx, dword ptr [esi + 0x20]
        add eax, ebx
        mov ebx, eax
        and al, 0x1
        add al, al
        sar ebx, 1
        mov dl, byte ptr [ebx + ecx]
        add al, al
        mov cl, al
        shr dl, cl
        mov byte ptr [esp + 0x28], al
        and dl, 0xf
        cmp dl, byte ptr [esi + 0x4]
        jne L_skip2
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [edi + eax + 0xc]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx + eax + 0xc]
        push ecx
        mov ecx, dword ptr [esi + 0x2c]
        push eax
        push ecx
        call ext_007DCDD0
        mov al, byte ptr [esp + 0x34]
        add esp, 0xc
L_skip2:
        mov edi, dword ptr [esi + 0x20]
        add dword ptr [esp + 0x14], 0x9c
        movzx ecx, al
        mov edx, 0xf0
        sar edx, cl
        xor al, al
        shl al, cl
        add edi, ebx
        and dl, byte ptr [edi]
        or dl, al
        mov eax, dword ptr [esp + 0x10]
        add eax, 0x1
        mov byte ptr [edi], dl
        cmp eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x10], eax
        jl L_loop2_body
L_tail:
        mov edx, dword ptr [esp + 0x1c]
L_tail_test:
        test byte ptr [edx + 0x10], 0x1
        pop ebx
        je L_nounlink
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov ecx, dword ptr [edx + 0x4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov dword ptr [edx + 0x4], edx
        mov dword ptr [edx], edx
L_nounlink:
        mov ecx, dword ptr [esi + 0x18]
        mov eax, dword ptr [esi + 0x14]
        mov edi, dword ptr [edx + 0x8]
        mov dword ptr [eax + 4 * ecx], edi
        add dword ptr [esi + 0x18], 0x1
        mov dword ptr [edx + 0x8], 0xffffffff
        mov dword ptr [edx + 0xc], 0x0
L_exit:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        add esp, 0x14
        ret 4
    }
}

// [0x007DF610] sub_007DF610 (96 bytes)
extern "C" void ext_007DF3A0();

extern "C" __declspec(naked) void __fastcall fn_007DF610(void* self) {
    __asm {
        push ebx
        mov ebx, eax
        mov eax, dword ptr [ebx + 0x38]
        push esi
        mov dword ptr [eax + 0x4], 0x0
        mov eax, dword ptr [ebx + 0xc]
        push edi
        xor edi, edi
        test eax, eax
        jbe L_done
    L_outer:
        xor esi, esi
        test eax, eax
        jbe L_outer_next
        __asm _emit 0x8b
        __asm _emit 0xff
    L_inner:
        mov ecx, dword ptr [ebx + 0x4]
        imul eax, edi
        add eax, esi
        cmp dword ptr [ecx + 4*eax], 0x0
        je L_inner_next
        push edi
        mov eax, esi
        call ext_007DF3A0
        add esp, 0x4
        test eax, eax
        je L_fail
    L_inner_next:
        mov eax, dword ptr [ebx + 0xc]
        add esi, 0x1
        cmp esi, eax
        jb L_inner
    L_outer_next:
        mov eax, dword ptr [ebx + 0xc]
        add edi, 0x1
        cmp edi, eax
        jb L_outer
    L_done:
        pop edi
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    L_fail:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007D7700] sub_007D7700 (652 bytes)
extern "C" void ext_007D7190();

extern "C" __declspec(naked) void __fastcall fn_007D7700(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x14]
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        lea edi, [ecx*4]
        mov eax, edi
        and eax, 0x3f
        je L1
        lea edi, [ecx*4 + 0x40]
        sub edi, eax
    L1:
        mov ecx, dword ptr [esp + 0x48]
        lea ebp, [ecx*4]
        mov ebx, ebp
        and ebx, 0x3f
        jne L2
        mov dword ptr [esp + 0x10], ebp
        jmp L3
    L2:
        lea eax, [ecx*4 + 0x40]
        sub eax, ebx
        mov dword ptr [esp + 0x10], eax
    L3:
        mov eax, dword ptr [esp + 0x44]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, eax
        shl edx, 4
        mov esi, edx
        and esi, 0x3f
        jne L4
        mov dword ptr [esp + 0x14], edx
        jmp L5
    L4:
        add eax, 4
        shl eax, 4
        sub eax, esi
        mov dword ptr [esp + 0x14], eax
    L5:
        mov edx, dword ptr [esp + 0x4c]
        lea eax, [edx*4]
        mov esi, eax
        and esi, 0x3f
        mov dword ptr [esp + 0x28], eax
        je L6
        lea eax, [edx*4 + 0x40]
        sub eax, esi
    L6:
        test ebx, ebx
        mov dword ptr [esp + 0x18], eax
        jne L7
        mov dword ptr [esp + 0x1c], ebp
        jmp L8
    L7:
        lea eax, [ecx*4 + 0x40]
        sub eax, ebx
        mov dword ptr [esp + 0x1c], eax
    L8:
        mov eax, ecx
        neg eax
        lea edx, [ecx + ecx*2]
        shl eax, 4
        shl edx, 4
        and eax, 0x3f
        je L9
        sub edx, eax
        add edx, 0x40
    L9:
        mov eax, ecx
        neg eax
        shl eax, 5
        and eax, 0x3f
        mov dword ptr [esp + 0x20], edx
        jne L10
        shl ecx, 5
        jmp L11
    L10:
        add ecx, 2
        shl ecx, 5
        sub ecx, eax
    L11:
        test esi, esi
        mov dword ptr [esp + 0x24], ecx
        jne L12
        mov eax, dword ptr [esp + 0x28]
        jmp L13
    L12:
        mov eax, dword ptr [esp + 0x4c]
        lea eax, [eax*4 + 0x40]
        sub eax, esi
    L13:
        lea esi, [eax + ecx]
        mov ecx, dword ptr [esp + 0x3c]
        add esi, edx
        add esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x28], eax
        add esi, dword ptr [esp + 0x18]
        add esi, dword ptr [esp + 0x14]
        add esi, dword ptr [esp + 0x10]
        add esi, edi
        push esi
        push ecx
        call ext_007D62D0
        mov ebp, dword ptr [esp + 0x58]
        mov ebx, dword ptr [esp + 0x40]
        push ebp
        push 0x99e02c
        push edi
        push esi
        push eax
        lea edx, [esp + 0x54]
        push edx
        mov dword ptr [ebx], eax
        mov dword ptr [esp + 0x58], 0
        call ext_007D7190
        mov edi, dword ptr [esp + 0x50]
        push ebp
        mov dword ptr [edi + 0x18], eax
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [ebx]
        push 0x99e020
        push eax
        push esi
        push ecx
        lea edx, [esp + 0x6c]
        push edx
        call ext_007D7190
        push ebp
        mov dword ptr [edi + 0xc], eax
        mov eax, dword ptr [esp + 0x50]
        mov ecx, dword ptr [ebx]
        push 0x99e018
        push eax
        push esi
        push ecx
        lea edx, [esp + 0x84]
        push edx
        call ext_007D7190
        add esp, 0x50
        push ebp
        mov dword ptr [edi], eax
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ebx]
        push 0x99e008
        push eax
        push esi
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        call ext_007D7190
        mov ecx, dword ptr [esp + 0x60]
        mov dword ptr [edi + 0x24], eax
        mov eax, dword ptr [esp + 0x58]
        mov dword ptr [edi + 0x14], ecx
        mov ecx, dword ptr [esp + 0x5c]
        mov dword ptr [edi + 0x20], eax
        mov eax, ecx
        add esp, 0x18
        and eax, 0x8000000f
        jns L14
        dec eax
        or eax, -0x10
        inc eax
    L14:
        je L15
        sub ecx, eax
        add ecx, 0x10
    L15:
        mov eax, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x1c]
        push ebp
        mov dword ptr [edi + 0x8], ecx
        xor ecx, ecx
        push 0x99dff8
        push edx
        mov dword ptr [edi + 0x1c], ecx
        mov dword ptr [edi + 0x10], ecx
        mov dword ptr [edi + 0x4], ecx
        mov dword ptr [edi + 0x2c], eax
        mov dword ptr [edi + 0x28], eax
        mov eax, dword ptr [ebx]
        push esi
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        call ext_007D7190
        mov edx, dword ptr [esp + 0x38]
        mov edi, dword ptr [esp + 0x4c]
        push ebp
        push 0x99dfec
        push edx
        mov dword ptr [edi + 0x4], eax
        mov eax, dword ptr [ebx]
        push esi
        push eax
        lea ecx, [esp + 0x64]
        push ecx
        call ext_007D7190
        mov edx, dword ptr [esp + 0x54]
        push ebp
        push 0x99dfe0
        push edx
        mov dword ptr [edi + 0x1c], eax
        mov eax, dword ptr [ebx]
        push esi
        push eax
        lea ecx, [esp + 0x7c]
        push ecx
        call ext_007D7190
        mov edx, dword ptr [esp + 0x70]
        add esp, 0x48
        push ebp
        push 0x99dfcc
        push edx
        mov dword ptr [edi + 0x10], eax
        mov eax, dword ptr [ebx]
        push esi
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        call ext_007D7190
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [edi + 0x2c], eax
        mov eax, dword ptr [esp + 0x60]
        add esp, 0x18
        mov dword ptr [edi + 0xc], eax
        mov dword ptr [edi + 0x24], eax
        mov dword ptr [edi + 0x18], eax
        xor eax, eax
        mov dword ptr [edi + 0x34], edx
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0x20], eax
        mov dword ptr [edi + 0x14], eax
        mov dword ptr [edi + 0x30], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret
    }
}

// [0x007D5490] sub_007D5490 (653 bytes)
extern "C" void ext_007FC4E0();

extern "C" __declspec(naked) void __cdecl fn_007D5490(void* self, float b, float a, const float* p, const float* v, const float* s) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x4c
        push ebx
        mov ebx, dword ptr [ebp + 0x18]
        fld dword ptr [ebx + 0x4]
        push esi
        fld dword ptr [ebx]
        push edi
        fld dword ptr [ebx + 0x8]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        call ext_006A7250
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ebp + 0x10]
        fst qword ptr [esp + 0x28]
        fld dword ptr [ebp + 0xc]
        fcom st(1)
        fnstsw ax
        test ah, 0x41
        je L_007D56DE
        fld dword ptr [esp + 0x10]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_007D56DE
        mov eax, dword ptr [ebp + 0x14]
        fld dword ptr [eax]
        mov edi, dword ptr [ebp + 0x1c]
        mov esi, dword ptr [ebp + 0x8]
        fmul st, st(2)
        fadd dword ptr [edi + 0x30]
        fstp dword ptr [esi + 0x30]
        fld dword ptr [eax + 0x4]
        fmul st, st(2)
        fadd dword ptr [edi + 0x34]
        fstp dword ptr [esi + 0x34]
        fld dword ptr [eax + 0x8]
        fmul st, st(2)
        fadd dword ptr [edi + 0x38]
        fstp dword ptr [esi + 0x38]
        fld1
        fstp dword ptr [esi + 0x3c]
        fldz
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x1c]
        fstp dword ptr [esi + 0x2c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fdivr qword ptr [mem_00993830]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x18]
        fst qword ptr [esp + 0x28]
        fld dword ptr [esp + 0x10]
        fstp qword ptr [esp + 0x10]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fld1
        fsubrp st(1), st
        fld qword ptr [esp + 0x10]
        fmul st(0), st
        fstp dword ptr [esp + 0x18]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x20]
        fld qword ptr [esp + 0x28]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fmul qword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ebx + 0x8]
        fld st(0)
        fmul st, st(1)
        fld dword ptr [ebx + 0x4]
        fld st(0)
        fmul st, st(1)
        fld dword ptr [esp + 0x20]
        fld st(1)
        fadd st, st(4)
        fmul st, st(1)
        fld1
        fld st(0)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ebx]
        fld st(0)
        fmul st, st(1)
        fst qword ptr [esp + 0x28]
        faddp st(6), st
        fxch st(5)
        fmul st, st(2)
        fsubr st, st(1)
        fstp dword ptr [esp + 0x44]
        fxch st(2)
        fadd qword ptr [esp + 0x28]
        fmul st, st(1)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x54]
        fld st(1)
        fmul st, st(3)
        fmul st, st(1)
        fld dword ptr [esp + 0x10]
        fld st(5)
        lea eax, [edi + 0x8]
        fmul st, st(1)
        lea ecx, [esi + 0x8]
        fld st(2)
        mov edx, 0x3
        fsub st, st(1)
        fstp dword ptr [esp + 0x38]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x40]
        fld st(4)
        fmul st, st(4)
        fmul st, st(2)
        fld st(3)
        fmul st, st(2)
        fld st(0)
        fadd st, st(2)
        fstp dword ptr [esp + 0x3c]
        fsubp st(1), st
        fstp dword ptr [esp + 0x4c]
        fxch st(2)
        fmulp st(4), st
        fmulp st(3), st
        fmulp st(1), st
        fld st(1)
        fsub st, st(1)
        fstp dword ptr [esp + 0x48]
        faddp st(1), st
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x50]
        fstp qword ptr [esp + 0x28]
        fld dword ptr [esp + 0x48]
        fstp qword ptr [esp + 0x18]
        fld dword ptr [esp + 0x3c]
        fstp qword ptr [esp + 0x20]
        fld dword ptr [esp + 0x54]
        fstp qword ptr [esp + 0x10]
L_007D5678:
        fld dword ptr [eax - 0x8]
        add eax, 0x10
        fmul st, st(4)
        add ecx, 0x10
        sub edx, 0x1
        fld dword ptr [eax - 0x14]
        fmul st, st(6)
        faddp st(1), st
        fld dword ptr [eax - 0x10]
        fmul st, st(4)
        faddp st(1), st
        fstp dword ptr [ecx - 0x18]
        fld dword ptr [eax - 0x18]
        fmul st, st(1)
        fld dword ptr [eax - 0x14]
        fmul st, st(3)
        faddp st(1), st
        fld dword ptr [eax - 0x10]
        fmul qword ptr [esp + 0x28]
        faddp st(1), st
        fstp dword ptr [ecx - 0x14]
        fld dword ptr [eax - 0x18]
        fmul qword ptr [esp + 0x20]
        fld dword ptr [eax - 0x14]
        fmul qword ptr [esp + 0x18]
        faddp st(1), st
        fld dword ptr [eax - 0x10]
        fmul qword ptr [esp + 0x10]
        faddp st(1), st
        fstp dword ptr [ecx - 0x10]
        jne L_007D5678
        fstp st(4)
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_007D56DE:
        mov eax, dword ptr [ebp + 0x1c]
        fstp st(1)
        mov ecx, dword ptr [ebp + 0x8]
        fstp st(0)
        call ext_007FC4E0
        mov edx, dword ptr [ebp + 0x14]
        fld dword ptr [edx]
        pop edi
        fld qword ptr [esp + 0x24]
        pop esi
        fmul st(1), st
        pop ebx
        fld dword ptr [eax + 0x30]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0x30]
        fld dword ptr [edx + 0x4]
        fmul st, st(1)
        fadd dword ptr [eax + 0x34]
        fstp dword ptr [ecx + 0x34]
        fmul dword ptr [edx + 0x8]
        fadd dword ptr [eax + 0x38]
        fstp dword ptr [ecx + 0x38]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007D66B0] sub_007D66B0 (717 bytes)
extern "C" void ext_007CA260();
extern "C" void ext_007CDB20();
extern "C" void ext_007CDB70();
extern "C" void ext_007CDBC0();
extern "C" void ext_007D64B0();
extern "C" void ext_007D6660();

extern "C" __declspec(naked) int __fastcall fn_007D66B0(void* self) {
    __asm {
        sub esp, 0x24
        mov eax, dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x18]
        push ebx
        fld dword ptr [eax + 0x4]
        push esi
        fstp dword ptr [esp + 0x24]
        xor esi, esi
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x4c]
        push eax
        fstp dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], esi
        call ext_007CDB20
        mov ecx, dword ptr [esp + 0x34]
        mov ebx, dword ptr [esp + 0x38]
        mov edx, dword ptr [ecx + 0x18]
        mov eax, dword ptr [edx + 4*ebx]
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [esp + 0x18], eax
        lea eax, [edx + 4*eax]
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [eax]
        mov edx, dword ptr [eax + 0x1bc]
        add esp, 4
        cmp ebx, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x44], ebx
        jge L_early
        push ebp
        push edi
        mov edi, edi
    L_outer:
        mov edi, dword ptr [ecx + 0x4]
        mov edi, dword ptr [edi + 4*ebx]
        mov eax, dword ptr [ecx + 0x18]
        mov ebp, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0x14]
        mov eax, dword ptr [eax + 4*ebx]
        lea ebp, [ebp + 4*edi]
        mov edi, dword ptr [ecx + 0x8]
        mov edi, dword ptr [edi + 4*ebx]
        lea esi, [edx + 4*eax]
        mov edx, dword ptr [ecx + 0x1c]
        mov edx, dword ptr [edx + 4*ebx]
        mov dword ptr [esp + 0x3c], edi
        xor edi, edi
        test edx, edx
        mov dword ptr [esp + 0x20], edx
        jle L_683F
        sub eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x50]
        shl eax, 6
        lea ebx, [eax + ecx + 0x38]
    L_inner:
        mov edx, dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x44]
        mov eax, dword ptr [esi + 4*edi]
        push edx
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_007D64B0
        mov edx, dword ptr [esi + 4*edi]
        lea ecx, [ebx - 0x38]
        push ecx
        add edx, 0x110
        push edx
        call ext_007CA260
        mov eax, dword ptr [esi + 4*edi]
        fld dword ptr [eax + 0x120]
        add edi, 1
        fmul dword ptr [eax + 0x174]
        add esp, 0x14
        fld dword ptr [eax + 0x110]
        add ebx, 0x40
        cmp edi, dword ptr [esp + 0x20]
        fmul dword ptr [eax + 0x170]
        faddp st(1), st
        fld dword ptr [eax + 0x130]
        fmul dword ptr [eax + 0x178]
        faddp st(1), st
        fadd dword ptr [eax + 0x140]
        fstp dword ptr [ebx - 0x48]
        fld dword ptr [eax + 0x124]
        fmul dword ptr [eax + 0x174]
        fld dword ptr [eax + 0x114]
        fmul dword ptr [eax + 0x170]
        faddp st(1), st
        fld dword ptr [eax + 0x134]
        fmul dword ptr [eax + 0x178]
        faddp st(1), st
        fadd dword ptr [eax + 0x144]
        fstp dword ptr [ebx - 0x44]
        fld dword ptr [eax + 0x128]
        fmul dword ptr [eax + 0x174]
        fld dword ptr [eax + 0x118]
        fmul dword ptr [eax + 0x170]
        faddp st(1), st
        fld dword ptr [eax + 0x138]
        fmul dword ptr [eax + 0x178]
        faddp st(1), st
        fadd dword ptr [eax + 0x148]
        fstp dword ptr [ebx - 0x40]
        jl L_inner
        mov ebx, dword ptr [esp + 0x4c]
        mov ecx, dword ptr [esp + 0x38]
    L_683F:
        xor eax, eax
        cmp dword ptr [esp + 0x3c], eax
        jle L_694A
        jmp L_6850
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_6850:
        mov edx, dword ptr [ebp + 4*eax]
        cmp dword ptr [edx + 0x94], 0
        jne L_6869
        mov dword ptr [edx + 0xb4], 0xffffffff
        jmp L_687F
    L_6869:
        mov esi, dword ptr [edx + 0x94]
        mov esi, dword ptr [esi + 0x1bc]
        sub esi, dword ptr [esp + 0x18]
        mov dword ptr [edx + 0xb4], esi
    L_687F:
        mov edx, dword ptr [ebp + 4*eax]
        cmp dword ptr [edx + 0x98], 0
        jne L_6898
        mov dword ptr [edx + 0xb8], 0xffffffff
        jmp L_68AE
    L_6898:
        mov esi, dword ptr [edx + 0x98]
        mov esi, dword ptr [esi + 0x1bc]
        sub esi, dword ptr [esp + 0x18]
        mov dword ptr [edx + 0xb8], esi
    L_68AE:
        mov edx, dword ptr [esp + 0x3c]
        add eax, 1
        cmp eax, edx
        jl L_6850
        test edx, edx
        jle L_694A
        mov esi, dword ptr [esp + 0x54]
        push esi
        call ext_007CDBC0
        add esp, 4
        xor edi, edi
    L_68D0:
        mov eax, dword ptr [ebp + 4*edi]
        push eax
        call ext_007D8710
        add esp, 4
        test eax, eax
        je L_68EB
        mov dword ptr [eax + 0x160], 1
    L_68EB:
        mov ecx, dword ptr [esp + 0x5c]
        mov eax, dword ptr [ebp + 4*edi]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        lea edx, [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x58]
        push ecx
        push edx
        push eax
        mov eax, dword ptr [eax + 0xa0]
        push esi
        call eax
        add edi, 1
        add esp, 0x18
        cmp edi, dword ptr [esp + 0x3c]
        jl L_68D0
        push esi
        call ext_007CDB70
        mov ecx, dword ptr [esi + 0x80]
        mov edx, dword ptr [esi + 0x7c]
        mov esi, dword ptr [esp + 0x4c]
        mov eax, dword ptr [edx + 4*ecx - 0x4]
        add esp, 4
        cmp dword ptr [esi + 0x10], 0
        mov dword ptr [esp + 0x10], eax
        je L_6942
        call ext_007D6660
    L_6942:
        mov ecx, dword ptr [esp + 0x38]
        mov ebx, dword ptr [esp + 0x4c]
    L_694A:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [esp + 0x14]
        jbe L_6958
        mov dword ptr [esp + 0x14], eax
    L_6958:
        add ebx, 1
        cmp ebx, dword ptr [esp + 0x40]
        mov dword ptr [esp + 0x4c], ebx
        jl L_outer
        mov eax, dword ptr [esp + 0x14]
        pop edi
        pop ebp
        pop esi
        pop ebx
        add esp, 0x24
        ret
    L_early:
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x007D6DD0] sub_007D6DD0 (718 bytes)
extern "C" __declspec(naked) void __fastcall fn_007D6DD0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x10]
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x38]
        push esi
        lea eax, [ebp + 2*ebp]
        lea esi, [eax + edx]
        mov ecx, esi
        and ecx, 0x80000003
        push edi
        jns L_7d6df5
        dec ecx
        or ecx, -0x4
        inc ecx
    L_7d6df5:
        je L_7d6dfd
        sub eax, ecx
        lea esi, [eax + edx + 0x4]
    L_7d6dfd:
        lea ebx, [4*esi]
        mov edx, esi
        shl edx, 0x6
        mov eax, ebx
        and eax, 0x3f
        mov dword ptr [esp + 0x30], edx
        jne L_7d6e1a
        mov dword ptr [esp + 0x44], ebx
        jmp L_7d6e27
    L_7d6e1a:
        lea ecx, [4*esi + 0x40]
        sub ecx, eax
        mov dword ptr [esp + 0x44], ecx
    L_7d6e27:
        xor edi, edi
        cmp eax, edi
        jne L_7d6e33
        mov dword ptr [esp + 0x10], ebx
        jmp L_7d6e40
    L_7d6e33:
        lea ecx, [4*esi + 0x40]
        sub ecx, eax
        mov dword ptr [esp + 0x10], ecx
    L_7d6e40:
        cmp eax, edi
        jne L_7d6e4a
        mov dword ptr [esp + 0x14], ebx
        jmp L_7d6e57
    L_7d6e4a:
        lea ecx, [4*esi + 0x40]
        sub ecx, eax
        mov dword ptr [esp + 0x14], ecx
    L_7d6e57:
        cmp eax, edi
        jne L_7d6e61
        mov dword ptr [esp + 0x18], ebx
        jmp L_7d6e6e
    L_7d6e61:
        lea ecx, [4*esi + 0x40]
        sub ecx, eax
        mov dword ptr [esp + 0x18], ecx
    L_7d6e6e:
        cmp eax, edi
        jne L_7d6e78
        mov dword ptr [esp + 0x1c], ebx
        jmp L_7d6e85
    L_7d6e78:
        lea ecx, [4*esi + 0x40]
        sub ecx, eax
        mov dword ptr [esp + 0x1c], ecx
    L_7d6e85:
        cmp eax, edi
        jne L_7d6e8f
        mov dword ptr [esp + 0x20], ebx
        jmp L_7d6e9c
    L_7d6e8f:
        lea ecx, [4*esi + 0x40]
        sub ecx, eax
        mov dword ptr [esp + 0x20], ecx
    L_7d6e9c:
        lea eax, [8*ebp]
        mov ecx, eax
        and ecx, 0x3f
        je L_7d6eb3
        lea eax, [8*ebp + 0x40]
        sub eax, ecx
    L_7d6eb3:
        mov dword ptr [esp + 0x24], eax
        lea eax, [4*ebp]
        mov ecx, eax
        and ecx, 0x3f
        je L_7d6ece
        lea eax, [4*ebp + 0x40]
        sub eax, ecx
    L_7d6ece:
        mov ebx, dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x28], eax
        lea eax, [4*ebx]
        mov ecx, eax
        and ecx, 0x3f
        jne L_7d6eea
        mov dword ptr [esp + 0x3c], eax
        jmp L_7d6ef7
    L_7d6eea:
        lea ebp, [4*ebx + 0x40]
        sub ebp, ecx
        mov dword ptr [esp + 0x3c], ebp
    L_7d6ef7:
        cmp ecx, edi
        jne L_7d6f01
        mov dword ptr [esp + 0x2c], eax
        jmp L_7d6f0e
    L_7d6f01:
        lea ebp, [4*ebx + 0x40]
        sub ebp, ecx
        mov dword ptr [esp + 0x2c], ebp
    L_7d6f0e:
        cmp ecx, edi
        jne L_7d6f16
        mov ebp, eax
        jmp L_7d6f1f
    L_7d6f16:
        lea ebp, [4*ebx + 0x40]
        sub ebp, ecx
    L_7d6f1f:
        cmp ecx, edi
        je L_7d6f2c
        lea eax, [4*ebx + 0x40]
        sub eax, ecx
    L_7d6f2c:
        add eax, ebp
        add eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x38]
        add eax, dword ptr [esp + 0x3c]
        add eax, dword ptr [esp + 0x28]
        add eax, dword ptr [esp + 0x24]
        add eax, dword ptr [esp + 0x20]
        add eax, dword ptr [esp + 0x1c]
        add eax, dword ptr [esp + 0x18]
        add eax, dword ptr [esp + 0x14]
        add eax, dword ptr [esp + 0x10]
        add eax, dword ptr [esp + 0x44]
        lea eax, [eax + edx + 0x438]
        push eax
        push ecx
        call ext_007D62D0
        mov ecx, dword ptr [esp + 0x48]
        mov edx, dword ptr [esp + 0x38]
        mov dword ptr [eax + 0x60], ecx
        mov dword ptr [eax + 0x6c], ecx
        lea ecx, [eax + 0xf7]
        and ecx, -0x40
        mov dword ptr [eax], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x4c]
        and ecx, -0x40
        mov dword ptr [eax + 0x10], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x18]
        and ecx, -0x40
        mov dword ptr [eax + 0x1c], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x1c]
        and ecx, -0x40
        mov dword ptr [eax + 0x28], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x20]
        and ecx, -0x40
        mov dword ptr [eax + 0x34], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x24]
        and ecx, -0x40
        mov dword ptr [eax + 0x40], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x28]
        and ecx, -0x40
        mov dword ptr [eax + 0x4c], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x2c]
        and ecx, -0x40
        mov dword ptr [eax + 0x58], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x30]
        add esp, 0x8
        and ecx, -0x40
        mov dword ptr [eax + 0x64], ecx
        mov dword ptr [eax + 0xc], esi
        mov dword ptr [eax + 0x18], esi
        mov dword ptr [eax + 0x24], esi
        mov dword ptr [eax + 0x30], esi
        mov dword ptr [eax + 0x3c], esi
        mov dword ptr [eax + 0x48], esi
        mov dword ptr [eax + 0x54], esi
        mov dword ptr [eax + 0x78], ebx
        mov dword ptr [eax + 0x84], ebx
        mov dword ptr [eax + 0x90], ebx
        mov dword ptr [eax + 0x9c], ebx
        mov dword ptr [eax + 0x4], edi
        mov dword ptr [eax + 0x14], edi
        mov dword ptr [eax + 0x20], edi
        mov dword ptr [eax + 0x2c], edi
        mov dword ptr [eax + 0x38], edi
        mov dword ptr [eax + 0x44], edi
        mov dword ptr [eax + 0x50], edi
        mov dword ptr [eax + 0x5c], edi
        mov dword ptr [eax + 0x68], edi
        mov dword ptr [eax + 0x74], edi
        mov dword ptr [eax + 0x80], edi
        mov dword ptr [eax + 0x8c], edi
        mov dword ptr [eax + 0x98], edi
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x3c]
        and ecx, -0x40
        mov dword ptr [eax + 0x70], ecx
        lea ecx, [ecx + edx + 0x3f]
        mov edx, dword ptr [esp + 0x2c]
        and ecx, -0x40
        mov dword ptr [eax + 0x7c], ecx
        lea ecx, [ecx + edx + 0x3f]
        and ecx, -0x40
        mov dword ptr [eax + 0xa4], edi
        mov dword ptr [eax + 0xa8], edi
        mov dword ptr [eax + 0xac], edi
        pop edi
        mov dword ptr [eax + 0x88], ecx
        lea ecx, [ecx + ebp + 0x3f]
        pop esi
        and ecx, -0x40
        pop ebp
        mov dword ptr [eax + 0x94], ecx
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x007DAED0] sub_007DAED0 (282 bytes)
extern "C" void ext_007F53C0();
extern "C" int mem_0099D148;
extern "C" double mem_00993830;
extern "C" __declspec(naked) void __fastcall fn_007DAED0(void* self) {
    __asm {
        sub esp, 0x14
        mov eax, dword ptr [esp + 0x24]
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push ebp
        mov ebp, dword ptr [esp + 0x28]
        push esi
        mov esi, dword ptr [esp + 0x28]
        add ebx, 0x10
        add esi, 0x20
        sub eax, ebp
        push edi
        mov edi, ebp
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x30], 3
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loop_top_7DAED0:
        fld dword ptr [esi - 0x20]
        lea eax, [esp + 0x14]
        fstp dword ptr [esp + 0x18]
        push eax
        fld dword ptr [esi - 0x10]
        push ecx
        fstp dword ptr [esp + 0x24]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [mem_0099D148]
        fstp dword ptr [esp]
        push 0
        push ecx
        push ebx
        call ext_007F53C0
        mov edx, dword ptr [esp + 0x24]
        fstp dword ptr [edx + edi]
        add esp, 0x14
        fld dword ptr [esp + 0x18]
        lea eax, [esp + 0x14]
        fld qword ptr [mem_00993830]
        push eax
        fmul st(1), st
        push ecx
        fxch st(1)
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x24]
        fmul st, st(1)
        fstp dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [mem_0099D148]
        fstp dword ptr [esp]
        push 0
        push ecx
        push ebx
        call ext_007F53C0
        fstp dword ptr [edi]
        add esp, 0x14
        add esi, 0x4
        add edi, 0x4
        sub dword ptr [esp + 0x30], 0x1
        jne loop_top_7DAED0
        mov ecx, dword ptr [esp + 0x2c]
        fld dword ptr [ecx + 0x30]
        mov edx, dword ptr [esp + 0x28]
        fsub dword ptr [ebp]
        mov eax, dword ptr [esp + 0x34]
        pop edi
        pop esi
        fsub dword ptr [edx + 0x38]
        fstp dword ptr [ebp]
        fld dword ptr [ecx + 0x34]
        fsub dword ptr [ebp + 0x4]
        fsub dword ptr [edx + 0x38]
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [ecx + 0x38]
        fsub dword ptr [ebp + 0x8]
        fsub dword ptr [edx + 0x38]
        fstp dword ptr [ebp + 0x8]
        pop ebp
        fld dword ptr [edx + 0x38]
        pop ebx
        fadd dword ptr [ecx + 0x30]
        fadd dword ptr [eax]
        fstp dword ptr [eax]
        fld dword ptr [edx + 0x38]
        fadd dword ptr [ecx + 0x34]
        fadd dword ptr [eax + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edx + 0x38]
        fadd dword ptr [ecx + 0x38]
        fadd dword ptr [eax + 0x8]
        fstp dword ptr [eax + 0x8]
        add esp, 0x14
        ret
    }
}

// [0x007DAFF0] sub_007DAFF0 (106 bytes)
extern "C" void ext_007CA280();
extern "C" void ext_007CB8D0();
extern "C" void ext_007D48A0();
extern "C" void ext_007D5AE0();
extern "C" void ext_007DAED0();
extern "C" __declspec(naked) void __fastcall fn_007DAFF0(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x24]
        push edi
        push esi
        call ext_007D5AE0
        push esi
        mov ebx, eax
        call ext_007D48A0
        lea edi, [esi + 0x14]
        push edi
        add esi, 0x8
        push esi
        push eax
        push ebx
        call ext_007DAED0
        mov eax, dword ptr [esp + 0x44]
        add esp, 0x18
        test eax, eax
        je done_7DAFF0
        lea ecx, [esp + 0x18]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        push eax
        push ebx
        call ext_007DAED0
        add esp, 0x10
        lea ecx, [esp + 0xc]
        mov edx, esi
        call ext_007CA280
        lea ecx, [esp + 0x18]
        mov edx, edi
        mov esi, edi
        call ext_007CB8D0
done_7DAFF0:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x007DA920] sub_007DA920 (1047 bytes)
extern "C" void ext_007C5F50();
extern "C" void ext_007C6710();
extern "C" void ext_007C6780();
extern "C" void ext_007D4A70();
extern "C" void ext_007DA820();
extern "C" void ext_007DA8D0();
extern "C" void ext_007DA8E0();
extern "C" __declspec(naked) void __fastcall fn_007DA920(void* self) {
    __asm {
        push	ebp // 7DA920: 55
        mov	ebp, esp // 7DA921: 8b ec
        sub	esp, 0x28 // 7DA923: 83 ec 28
        mov	eax, dword ptr [mem_00AA7E40] // 7DA926: a1 40 7e aa 00
        xor	eax, ebp // 7DA92B: 33 c5
        mov	dword ptr [ebp - 0x4], eax // 7DA92D: 89 45 fc
        push	ebx // 7DA930: 53
        push	esi // 7DA931: 56
        mov	esi, dword ptr [ebp + 0xc] // 7DA932: 8b 75 0c
        mov	eax, dword ptr [esi + 0x24] // 7DA935: 8b 46 24
        add	eax, eax // 7DA938: 03 c0
        push	edi // 7DA93A: 57
        add	eax, eax // 7DA93B: 03 c0
        call ext_006A6EC0 // 7DA93D: e8 7e c5 ec ff
        mov	eax, dword ptr [esi + 0x10] // 7DA942: 8b 46 10
        add	eax, eax // 7DA945: 03 c0
        add	eax, eax // 7DA947: 03 c0
        mov	dword ptr [ebp - 0x14], esp // 7DA949: 89 65 ec
        xor	ebx, ebx // 7DA94C: 33 db
        call ext_006A6EC0 // 7DA94E: e8 6d c5 ec ff
        xor	eax, eax // 7DA953: 33 c0
        mov	dword ptr [esi + 0x2c], eax // 7DA955: 89 46 2c
        mov	dword ptr [esi + 0x20], eax // 7DA958: 89 46 20
        mov	dword ptr [esi + 0xc], eax // 7DA95B: 89 46 0c
        mov	dword ptr [esi + 0x38], eax // 7DA95E: 89 46 38
        mov	dword ptr [esi + 0x3c], eax // 7DA961: 89 46 3c
        mov	dword ptr [esi + 0x34], eax // 7DA964: 89 46 34
        mov	eax, dword ptr [ebp + 0x8] // 7DA967: 8b 45 08
        mov	dword ptr [ebp - 0x24], esp // 7DA96A: 89 65 dc
        xor	edi, edi // 7DA96D: 33 ff
        push	eax // 7DA96F: 50
        mov	dword ptr [ebp - 0x1c], edi // 7DA970: 89 7d e4
        call ext_007D4A70 // 7DA973: e8 f8 a0 ff ff
        add	esp, 0x4 // 7DA978: 83 c4 04
        test	eax, eax // 7DA97B: 85 c0
        mov	dword ptr [ebp - 0x20], eax // 7DA97D: 89 45 e0
        je loc_7DACE0 // 7DA980: 0f 84 5a 03 00 00
        jmp loc_7DA993 // 7DA986: eb 0b
        jmp loc_7DA990 // 7DA988: eb 06
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00 // 7DA98A: 8d 9b 00 00 00 00
    loc_7DA990:
        mov	eax, dword ptr [ebp - 0x20] // 7DA990: 8b 45 e0
    loc_7DA993:
        mov	edx, dword ptr [eax + 0x14] // 7DA993: 8b 50 14
        mov	ecx, dword ptr [esi + 0x2c] // 7DA996: 8b 4e 2c
        mov	eax, dword ptr [esi + 0x1c] // 7DA999: 8b 46 1c
        mov	dword ptr [eax + 4*ecx], 0x0 // 7DA99C: c7 04 88 00 00 00 00
        mov	ecx, dword ptr [esi + 0x2c] // 7DA9A3: 8b 4e 2c
        mov	eax, dword ptr [esi + 0x8] // 7DA9A6: 8b 46 08
        mov	dword ptr [eax + 4*ecx], 0x0 // 7DA9A9: c7 04 88 00 00 00 00
        mov	eax, dword ptr [esi + 0x2c] // 7DA9B0: 8b 46 2c
        lea	ecx, [eax + 2*eax] // 7DA9B3: 8d 0c 40
        mov	eax, dword ptr [esi + 0x28] // 7DA9B6: 8b 46 28
        lea	ecx, [eax + 4*ecx] // 7DA9B9: 8d 0c 88
        push	ecx // 7DA9BC: 51
        call ext_007DA8D0 // 7DA9BD: e8 0e ff ff ff
        mov	edi, dword ptr [esi + 0x20] // 7DA9C2: 8b 7e 20
        mov	eax, dword ptr [esi + 0x2c] // 7DA9C5: 8b 46 2c
        mov	ecx, dword ptr [esi + 0x18] // 7DA9C8: 8b 4e 18
        mov	dword ptr [ecx + 4*eax], edi // 7DA9CB: 89 3c 81
        mov	eax, dword ptr [esi + 0x2c] // 7DA9CE: 8b 46 2c
        mov	ecx, dword ptr [esi + 0x4] // 7DA9D1: 8b 4e 04
        mov	edi, dword ptr [esi + 0xc] // 7DA9D4: 8b 7e 0c
        mov	dword ptr [ecx + 4*eax], edi // 7DA9D7: 89 3c 81
        mov	ecx, dword ptr [esi + 0x18] // 7DA9DA: 8b 4e 18
        mov	eax, dword ptr [esi + 0x2c] // 7DA9DD: 8b 46 2c
        mov	eax, dword ptr [ecx + 4*eax] // 7DA9E0: 8b 04 81
        mov	ecx, dword ptr [esi + 0x14] // 7DA9E3: 8b 4e 14
        mov	dword ptr [ecx + 4*eax], edx // 7DA9E6: 89 14 81
        mov	ecx, dword ptr [esi + 0x2c] // 7DA9E9: 8b 4e 2c
        mov	dword ptr [ebp - 0xc], eax // 7DA9EC: 89 45 f4
        add	eax, 0x1 // 7DA9EF: 83 c0 01
        mov	dword ptr [ebp - 0x10], eax // 7DA9F2: 89 45 f0
        mov	eax, dword ptr [ebp - 0x14] // 7DA9F5: 8b 45 ec
        mov	dword ptr [eax + 4*ebx], edx // 7DA9F8: 89 14 98
        mov	eax, dword ptr [esi + 0x1c] // 7DA9FB: 8b 46 1c
        mov	ecx, dword ptr [eax + 4*ecx] // 7DA9FE: 8b 0c 88
        mov	dword ptr [edx + 0x1c0], ecx // 7DAA01: 89 8a c0 01 00 00
        mov	eax, dword ptr [esi + 0x2c] // 7DAA07: 8b 46 2c
        mov	ecx, dword ptr [esi + 0x1c] // 7DAA0A: 8b 4e 1c
        mov	edi, dword ptr [esi + 0x18] // 7DAA0D: 8b 7e 18
        add	eax, eax // 7DAA10: 03 c0
        add	eax, eax // 7DAA12: 03 c0
        mov	ecx, dword ptr [eax + ecx] // 7DAA14: 8b 0c 08
        add	ecx, dword ptr [eax + edi] // 7DAA17: 03 0c 38
        add	esp, 0x4 // 7DAA1A: 83 c4 04
        mov	dword ptr [edx + 0x1bc], ecx // 7DAA1D: 89 8a bc 01 00 00
        mov	eax, dword ptr [esi + 0x2c] // 7DAA23: 8b 46 2c
        or	dword ptr [edx + 0x1c4], 0x2 // 7DAA26: 83 8a c4 01 00 00 02
        mov	dword ptr [edx + 0x1b8], eax // 7DAA2D: 89 82 b8 01 00 00
        mov	ecx, dword ptr [esi + 0x2c] // 7DAA33: 8b 4e 2c
        mov	edx, dword ptr [esi + 0x1c] // 7DAA36: 8b 56 1c
        add	dword ptr [esi + 0x20], 0x1 // 7DAA39: 83 46 20 01
        add	dword ptr [edx + 4*ecx], 0x1 // 7DAA3D: 83 04 8a 01
        lea	eax, [edx + 4*ecx] // 7DAA41: 8d 04 8a
        mov	eax, dword ptr [esi + 0x2c] // 7DAA44: 8b 46 2c
        mov	ecx, dword ptr [esi + 0x1c] // 7DAA47: 8b 4e 1c
        mov	edx, dword ptr [esi + 0x18] // 7DAA4A: 8b 56 18
        add	eax, eax // 7DAA4D: 03 c0
        add	eax, eax // 7DAA4F: 03 c0
        mov	ecx, dword ptr [eax + ecx] // 7DAA51: 8b 0c 08
        add	ecx, dword ptr [eax + edx] // 7DAA54: 03 0c 10
        add	ebx, 0x1 // 7DAA57: 83 c3 01
        cmp	dword ptr [ebp - 0xc], ecx // 7DAA5A: 39 4d f4
        jge loc_7DAC57 // 7DAA5D: 0f 8d f4 01 00 00
    loc_7DAA63:
        mov	eax, dword ptr [ebp - 0xc] // 7DAA63: 8b 45 f4
        mov	edx, dword ptr [esi + 0x14] // 7DAA66: 8b 56 14
        mov	edi, dword ptr [edx + 4*eax] // 7DAA69: 8b 3c 82
        add	eax, 0x1 // 7DAA6C: 83 c0 01
        mov	dword ptr [ebp - 0xc], eax // 7DAA6F: 89 45 f4
        lea	eax, [edi + 0x1d4] // 7DAA72: 8d 87 d4 01 00 00
        push	eax // 7DAA78: 50
        mov	dword ptr [ebp - 0x8], edi // 7DAA79: 89 7d f8
        call ext_007D4A70 // 7DAA7C: e8 ef 9f ff ff
        add	esp, 0x4 // 7DAA81: 83 c4 04
        test	eax, eax // 7DAA84: 85 c0
        mov	dword ptr [ebp - 0x18], eax // 7DAA86: 89 45 e8
        je loc_7DAC02 // 7DAA89: 0f 84 73 01 00 00
    loc_7DAA8F:
        mov	eax, dword ptr [ebp - 0x18] // 7DAA8F: 8b 45 e8
        mov	edi, dword ptr [eax + 0x14] // 7DAA92: 8b 78 14
        test	byte ptr [edi + 0x9c], 0x2 // 7DAA95: f6 87 9c 00 00 00 02
        jne loc_7DABDF // 7DAA9C: 0f 85 3d 01 00 00
        mov	ecx, dword ptr [esi + 0xc] // 7DAAA2: 8b 4e 0c
        mov	edx, dword ptr [esi] // 7DAAA5: 8b 16
        mov	eax, dword ptr [ebp - 0x1c] // 7DAAA7: 8b 45 e4
        mov	dword ptr [edx + 4*ecx], edi // 7DAAAA: 89 3c 8a
        mov	ecx, dword ptr [ebp - 0x24] // 7DAAAD: 8b 4d dc
        mov	edx, dword ptr [esi + 0x2c] // 7DAAB0: 8b 56 2c
        add	dword ptr [esi + 0xc], 0x1 // 7DAAB3: 83 46 0c 01
        mov	dword ptr [ecx + 4*eax], edi // 7DAAB7: 89 3c 81
        add	eax, 0x1 // 7DAABA: 83 c0 01
        mov	dword ptr [ebp - 0x1c], eax // 7DAABD: 89 45 e4
        mov	eax, dword ptr [esi + 0x8] // 7DAAC0: 8b 46 08
        add	dword ptr [eax + 4*edx], 0x1 // 7DAAC3: 83 04 90 01
        lea	eax, [eax + 4*edx] // 7DAAC7: 8d 04 90
        mov	eax, dword ptr [esi + 0x2c] // 7DAACA: 8b 46 2c
        mov	edx, dword ptr [esi + 0x28] // 7DAACD: 8b 56 28
        lea	ecx, [eax + 2*eax] // 7DAAD0: 8d 0c 40
        lea	eax, [edx + 4*ecx] // 7DAAD3: 8d 04 8a
        push	edi // 7DAAD6: 57
        push	eax // 7DAAD7: 50
        call ext_007DA8E0 // 7DAAD8: e8 03 fe ff ff
        or	dword ptr [edi + 0x9c], 0x2 // 7DAADD: 83 8f 9c 00 00 00 02
        mov	eax, dword ptr [edi + 0x94] // 7DAAE4: 8b 87 94 00 00 00
        add	esp, 0x8 // 7DAAEA: 83 c4 08
        test	eax, eax // 7DAAED: 85 c0
        je loc_7DAB66 // 7DAAEF: 74 75
        cmp	eax, dword ptr [ebp - 0x8] // 7DAAF1: 3b 45 f8
        je loc_7DAB66 // 7DAAF4: 74 70
        test	byte ptr [eax + 0x1c4], 0x2 // 7DAAF6: f6 80 c4 01 00 00 02
        jne loc_7DAB66 // 7DAAFD: 75 67
        mov	edx, dword ptr [esi + 0x14] // 7DAAFF: 8b 56 14
        mov	ecx, dword ptr [ebp - 0x10] // 7DAB02: 8b 4d f0
        mov	dword ptr [edx + 4*ecx], eax // 7DAB05: 89 04 8a
        mov	edx, dword ptr [esi + 0x2c] // 7DAB08: 8b 56 2c
        add	ecx, 0x1 // 7DAB0B: 83 c1 01
        mov	dword ptr [ebp - 0x10], ecx // 7DAB0E: 89 4d f0
        mov	ecx, dword ptr [ebp - 0x14] // 7DAB11: 8b 4d ec
        mov	dword ptr [ecx + 4*ebx], eax // 7DAB14: 89 04 99
        mov	ecx, dword ptr [esi + 0x1c] // 7DAB17: 8b 4e 1c
        mov	edx, dword ptr [ecx + 4*edx] // 7DAB1A: 8b 14 91
        mov	dword ptr [eax + 0x1c0], edx // 7DAB1D: 89 90 c0 01 00 00
        mov	ecx, dword ptr [esi + 0x2c] // 7DAB23: 8b 4e 2c
        mov	edx, dword ptr [esi + 0x1c] // 7DAB26: 8b 56 1c
        add	ebx, 0x1 // 7DAB29: 83 c3 01
        add	ecx, ecx // 7DAB2C: 03 c9
        add	ecx, ecx // 7DAB2E: 03 c9
        mov	edx, dword ptr [ecx + edx] // 7DAB30: 8b 14 11
        mov	dword ptr [ebp - 0x28], ebx // 7DAB33: 89 5d d8
        mov	ebx, dword ptr [esi + 0x18] // 7DAB36: 8b 5e 18
        add	edx, dword ptr [ecx + ebx] // 7DAB39: 03 14 19
        mov	ebx, dword ptr [ebp - 0x28] // 7DAB3C: 8b 5d d8
        mov	dword ptr [eax + 0x1bc], edx // 7DAB3F: 89 90 bc 01 00 00
        mov	ecx, dword ptr [esi + 0x2c] // 7DAB45: 8b 4e 2c
        or	dword ptr [eax + 0x1c4], 0x2 // 7DAB48: 83 88 c4 01 00 00 02
        mov	dword ptr [eax + 0x1b8], ecx // 7DAB4F: 89 88 b8 01 00 00
        mov	edx, dword ptr [esi + 0x2c] // 7DAB55: 8b 56 2c
        mov	eax, dword ptr [esi + 0x1c] // 7DAB58: 8b 46 1c
        add	dword ptr [esi + 0x20], 0x1 // 7DAB5B: 83 46 20 01
        add	dword ptr [eax + 4*edx], 0x1 // 7DAB5F: 83 04 90 01
        lea	eax, [eax + 4*edx] // 7DAB63: 8d 04 90
    loc_7DAB66:
        mov	eax, dword ptr [edi + 0x98] // 7DAB66: 8b 87 98 00 00 00
        test	eax, eax // 7DAB6C: 85 c0
        je loc_7DABDF // 7DAB6E: 74 6f
        cmp	eax, dword ptr [ebp - 0x8] // 7DAB70: 3b 45 f8
        je loc_7DABDF // 7DAB73: 74 6a
        test	byte ptr [eax + 0x1c4], 0x2 // 7DAB75: f6 80 c4 01 00 00 02
        jne loc_7DABDF // 7DAB7C: 75 61
        mov	edx, dword ptr [esi + 0x14] // 7DAB7E: 8b 56 14
        mov	ecx, dword ptr [ebp - 0x10] // 7DAB81: 8b 4d f0
        mov	dword ptr [edx + 4*ecx], eax // 7DAB84: 89 04 8a
        mov	edx, dword ptr [esi + 0x2c] // 7DAB87: 8b 56 2c
        add	ecx, 0x1 // 7DAB8A: 83 c1 01
        mov	dword ptr [ebp - 0x10], ecx // 7DAB8D: 89 4d f0
        mov	ecx, dword ptr [ebp - 0x14] // 7DAB90: 8b 4d ec
        mov	dword ptr [ecx + 4*ebx], eax // 7DAB93: 89 04 99
        mov	ecx, dword ptr [esi + 0x1c] // 7DAB96: 8b 4e 1c
        mov	edx, dword ptr [ecx + 4*edx] // 7DAB99: 8b 14 91
        mov	dword ptr [eax + 0x1c0], edx // 7DAB9C: 89 90 c0 01 00 00
        mov	ecx, dword ptr [esi + 0x2c] // 7DABA2: 8b 4e 2c
        mov	edx, dword ptr [esi + 0x1c] // 7DABA5: 8b 56 1c
        mov	edi, dword ptr [esi + 0x18] // 7DABA8: 8b 7e 18
        add	ecx, ecx // 7DABAB: 03 c9
        add	ecx, ecx // 7DABAD: 03 c9
        mov	edx, dword ptr [ecx + edx] // 7DABAF: 8b 14 11
        add	edx, dword ptr [ecx + edi] // 7DABB2: 03 14 39
        add	ebx, 0x1 // 7DABB5: 83 c3 01
        mov	dword ptr [eax + 0x1bc], edx // 7DABB8: 89 90 bc 01 00 00
        mov	ecx, dword ptr [esi + 0x2c] // 7DABBE: 8b 4e 2c
        mov	dword ptr [eax + 0x1b8], ecx // 7DABC1: 89 88 b8 01 00 00
        or	dword ptr [eax + 0x1c4], 0x2 // 7DABC7: 83 88 c4 01 00 00 02
        mov	edx, dword ptr [esi + 0x2c] // 7DABCE: 8b 56 2c
        mov	eax, dword ptr [esi + 0x1c] // 7DABD1: 8b 46 1c
        add	dword ptr [esi + 0x20], 0x1 // 7DABD4: 83 46 20 01
        add	dword ptr [eax + 4*edx], 0x1 // 7DABD8: 83 04 90 01
        lea	eax, [eax + 4*edx] // 7DABDC: 8d 04 90
    loc_7DABDF:
        mov	ecx, dword ptr [ebp - 0x18] // 7DABDF: 8b 4d e8
        mov	eax, dword ptr [ebp - 0x8] // 7DABE2: 8b 45 f8
        push	ecx // 7DABE5: 51
        add	eax, 0x1d4 // 7DABE6: 05 d4 01 00 00
        push	eax // 7DABEB: 50
        call ext_007D4AA0 // 7DABEC: e8 af 9e ff ff
        add	esp, 0x8 // 7DABF1: 83 c4 08
        test	eax, eax // 7DABF4: 85 c0
        mov	dword ptr [ebp - 0x18], eax // 7DABF6: 89 45 e8
        jne loc_7DAA8F // 7DABF9: 0f 85 90 fe ff ff
        mov	edi, dword ptr [ebp - 0x8] // 7DABFF: 8b 7d f8
    loc_7DAC02:
        push	edi // 7DAC02: 57
        call ext_007C6780 // 7DAC03: e8 78 bb fe ff
        add	esp, 0x4 // 7DAC08: 83 c4 04
        test	eax, eax // 7DAC0B: 85 c0
        jne loc_7DAC31 // 7DAC0D: 75 22
        push	edi // 7DAC0F: 57
        call ext_007C5F50 // 7DAC10: e8 3b b3 fe ff
        add	esp, 0x4 // 7DAC15: 83 c4 04
        test	eax, eax // 7DAC18: 85 c0
        je loc_7DAC31 // 7DAC1A: 74 15
        push	edi // 7DAC1C: 57
        call ext_007C6710 // 7DAC1D: e8 ee ba fe ff
        add	esp, 0x4 // 7DAC22: 83 c4 04
        or	dword ptr [edi + 0x1c4], 0x100 // 7DAC25: 81 8f c4 01 00 00 00 01 00 00
        jmp loc_7DAC3B // 7DAC2F: eb 0a
    loc_7DAC31:
        and	dword ptr [edi + 0x1c4], 0xfffffeff // 7DAC31: 81 a7 c4 01 00 00 ff fe ff ff
    loc_7DAC3B:
        mov	eax, dword ptr [esi + 0x2c] // 7DAC3B: 8b 46 2c
        mov	edx, dword ptr [esi + 0x1c] // 7DAC3E: 8b 56 1c
        mov	ecx, dword ptr [esi + 0x18] // 7DAC41: 8b 4e 18
        add	eax, eax // 7DAC44: 03 c0
        add	eax, eax // 7DAC46: 03 c0
        mov	edx, dword ptr [eax + edx] // 7DAC48: 8b 14 10
        add	edx, dword ptr [eax + ecx] // 7DAC4B: 03 14 08
        cmp	dword ptr [ebp - 0xc], edx // 7DAC4E: 39 55 f4
        jl loc_7DAA63 // 7DAC51: 0f 8c 0c fe ff ff
    loc_7DAC57:
        mov	eax, dword ptr [esi + 0x2c] // 7DAC57: 8b 46 2c
        mov	ecx, dword ptr [esi + 0x28] // 7DAC5A: 8b 4e 28
        lea	eax, [eax + 2*eax] // 7DAC5D: 8d 04 40
        lea	ecx, [ecx + 4*eax] // 7DAC60: 8d 0c 81
        mov	eax, dword ptr [ecx] // 7DAC63: 8b 01
        mov	edx, eax // 7DAC65: 8b d0
        and	edx, 0x80000003 // 7DAC67: 81 e2 03 00 00 80
        jns loc_7DAC74 // 7DAC6D: 79 05
        dec	edx // 7DAC6F: 4a
        or	edx, -0x4 // 7DAC70: 83 ca fc
        inc	edx // 7DAC73: 42
    loc_7DAC74:
        je loc_7DAC8A // 7DAC74: 74 14
        mov	edx, eax // 7DAC76: 8b d0
        and	edx, 0x80000003 // 7DAC78: 81 e2 03 00 00 80
        jns loc_7DAC85 // 7DAC7E: 79 05
        dec	edx // 7DAC80: 4a
        or	edx, -0x4 // 7DAC81: 83 ca fc
        inc	edx // 7DAC84: 42
    loc_7DAC85:
        sub	eax, edx // 7DAC85: 2b c2
        add	eax, 0x4 // 7DAC87: 83 c0 04
    loc_7DAC8A:
        mov	dword ptr [ecx], eax // 7DAC8A: 89 01
        mov	eax, dword ptr [esi + 0x2c] // 7DAC8C: 8b 46 2c
        mov	edx, dword ptr [esi + 0x28] // 7DAC8F: 8b 56 28
        lea	ecx, [eax + 2*eax] // 7DAC92: 8d 0c 40
        lea	ecx, [edx + 4*ecx] // 7DAC95: 8d 0c 8a
        mov	edx, dword ptr [ecx] // 7DAC98: 8b 11
        add	dword ptr [esi + 0x34], edx // 7DAC9A: 01 56 34
        mov	edx, dword ptr [ecx + 0x8] // 7DAC9D: 8b 51 08
        add	dword ptr [esi + 0x3c], edx // 7DACA0: 01 56 3c
        mov	ecx, dword ptr [ecx + 0x4] // 7DACA3: 8b 49 04
        mov	edx, dword ptr [ebp - 0x20] // 7DACA6: 8b 55 e0
        add	dword ptr [esi + 0x38], ecx // 7DACA9: 01 4e 38
        add	eax, 0x1 // 7DACAC: 83 c0 01
        mov	dword ptr [esi + 0x2c], eax // 7DACAF: 89 46 2c
        mov	eax, dword ptr [ebp + 0x8] // 7DACB2: 8b 45 08
        push	edx // 7DACB5: 52
        push	eax // 7DACB6: 50
        call ext_007DA820 // 7DACB7: e8 64 fb ff ff
        mov	edi, eax // 7DACBC: 8b f8
        mov	eax, dword ptr [ebp + 0x10] // 7DACBE: 8b 45 10
        add	esp, 0x8 // 7DACC1: 83 c4 08
        test	eax, eax // 7DACC4: 85 c0
        mov	dword ptr [ebp - 0x20], edi // 7DACC6: 89 7d e0
        je loc_7DACD5 // 7DACC9: 74 0a
        mov	ecx, dword ptr [ebp + 0x14] // 7DACCB: 8b 4d 14
        push	ecx // 7DACCE: 51
        push	esi // 7DACCF: 56
        call	eax // 7DACD0: ff d0
        add	esp, 0x8 // 7DACD2: 83 c4 08
    loc_7DACD5:
        test	edi, edi // 7DACD5: 85 ff
        jne loc_7DA990 // 7DACD7: 0f 85 b3 fc ff ff
        mov	edi, dword ptr [ebp - 0x1c] // 7DACDD: 8b 7d e4
    loc_7DACE0:
        xor	eax, eax // 7DACE0: 33 c0
        test	edi, edi // 7DACE2: 85 ff
        mov	edx, 0xfffffffd // 7DACE4: ba fd ff ff ff
        jle loc_7DAD03 // 7DACE9: 7e 18
        jmp loc_7DACF0 // 7DACEB: eb 03
        _emit 0x8d
        _emit 0x49
        _emit 0x00 // 7DACED: 8d 49 00
    loc_7DACF0:
        mov	ecx, dword ptr [ebp - 0x24] // 7DACF0: 8b 4d dc
        mov	ecx, dword ptr [ecx + 4*eax] // 7DACF3: 8b 0c 81
        and	dword ptr [ecx + 0x9c], edx // 7DACF6: 21 91 9c 00 00 00
        add	eax, 0x1 // 7DACFC: 83 c0 01
        cmp	eax, edi // 7DACFF: 3b c7
        jl loc_7DACF0 // 7DAD01: 7c ed
    loc_7DAD03:
        xor	eax, eax // 7DAD03: 33 c0
        test	ebx, ebx // 7DAD05: 85 db
        jle loc_7DAD23 // 7DAD07: 7e 1a
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00 // 7DAD09: 8d a4 24 00 00 00 00
    loc_7DAD10:
        mov	ecx, dword ptr [ebp - 0x14] // 7DAD10: 8b 4d ec
        mov	ecx, dword ptr [ecx + 4*eax] // 7DAD13: 8b 0c 81
        and	dword ptr [ecx + 0x1c4], edx // 7DAD16: 21 91 c4 01 00 00
        add	eax, 0x1 // 7DAD1C: 83 c0 01
        cmp	eax, ebx // 7DAD1F: 3b c3
        jl loc_7DAD10 // 7DAD21: 7c ed
    loc_7DAD23:
        lea	esp, [ebp - 0x34] // 7DAD23: 8d 65 cc
        pop	edi // 7DAD26: 5f
        pop	esi // 7DAD27: 5e
        pop	ebx // 7DAD28: 5b
        mov	ecx, dword ptr [ebp - 0x4] // 7DAD29: 8b 4d fc
        xor	ecx, ebp // 7DAD2C: 33 cd
        call ext_006A745E // 7DAD2E: e8 2b c7 ec ff
        mov	esp, ebp // 7DAD33: 8b e5
        pop	ebp // 7DAD35: 5d
        ret // 7DAD36: c3
    }
}

extern "C" void ext_006A7250();

// [0x007D4D40] sub_007D4D40 (1067 bytes)
extern "C" __declspec(naked) void __fastcall fn_007D4D40(void* self) {
    __asm {
        sub esp, 0x28
        
        mov	ecx, dword ptr [esp + 0x34]
        mov	eax, dword ptr [esp + 0x38]
        fld	dword ptr [eax]
        mov	edx, dword ptr [esp + 0x30]
        fsub	dword ptr [ecx]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [eax + 0x4]
        fsub	dword ptr [ecx + 0x4]
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [eax + 0x8]
        mov	eax, dword ptr [esp + 0x3c]
        fsub	dword ptr [ecx + 0x8]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [eax]
        fsub	dword ptr [ecx]
        fstp	dword ptr [esp + 0x4]
        fld	dword ptr [eax + 0x4]
        fsub	dword ptr [ecx + 0x4]
        fstp	dword ptr [esp + 0x8]
        fld	dword ptr [eax + 0x8]
        fsub	dword ptr [ecx + 0x8]
        fstp	dword ptr [esp + 0xc]
        fld	dword ptr [ecx]
        fsub	dword ptr [edx]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [ecx + 0x4]
        fsub	dword ptr [edx + 0x4]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [ecx + 0x8]
        fsub	dword ptr [edx + 0x8]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esp + 0x10]
        fld	st(0)
        fld	dword ptr [esp + 0x14]
        fld	st(0)
        fld	dword ptr [esp + 0x18]
        fld	st(0)
        fld	st(2)
        fmulp	st(3), st
        fld	st(4)
        fmulp	st(5), st
        fxch	st(2)
        faddp	st(4), st
        fld	st(1)
        fmulp	st(2), st
        fxch	st(3)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0x4]
        fld	st(0)
        fmul	st, st(4)
        fld	dword ptr [esp + 0x8]
        fld	st(0)
        fmul	st, st(4)
        faddp	st(2), st
        fld	dword ptr [esp + 0xc]
        fmul	st, st(5)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	st(1)
        fld	dword ptr [esp + 0xc]
        fld	st(2)
        fmulp	st(3), st
        fld	st(1)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fld	st(1)
        fmulp	st(2), st
        faddp	st(1), st
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x20]
        fld	st(0)
        fmulp	st(3), st
        fld	dword ptr [esp + 0x1c]
        fld	st(0)
        fmulp	st(6), st
        fxch	st(3)
        faddp	st(5), st
        fld	dword ptr [esp + 0x24]
        fld	st(0)
        fmulp	st(5), st
        fxch	st(5)
        faddp	st(4), st
        fxch	st(3)
        fstp	dword ptr [esp]
        fld	dword ptr [esp + 0x8]
        fmulp	st(3), st
        fmulp	st(1), st
        faddp	st(1), st
        fld	dword ptr [esp + 0xc]
        fmulp	st(2), st
        faddp	st(1), st
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [esp + 0x38]
        fld	st(0)
        fld	dword ptr [esp + 0x34]
        fld	st(0)
        fld	dword ptr [esp + 0x3c]
        fld	st(0)
        fmulp	st(2), st
        fld	st(3)
        fmulp	st(4), st
        fxch	st(1)
        fsubrp	st(3), st
        fxch	st(2)
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0x30]
        fld	st(0)
        fmul	st, st(4)
        fld	dword ptr [esp]
        fld	st(0)
        fmul	st, st(4)
        fsubp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	st(0)
        fmul	st, st(5)
        fld	st(2)
        fmul	st, st(5)
        fsubp	st(1), st
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x38]
        fld	st(0)
        faddp	st(2), st
        fld	dword ptr [esp + 0x3c]
        fcomp	st(2)
        fnstsw	ax
        fstp	st(1)
        fldz
        test	ah, 0x5
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        jp loc_007D4EFE
        test	ah, 0x41
        jne loc_007D4ED3
        fstp	st(0)
        fld	st(1)
        fadd	st, st(3)
        fld	st(1)
        fadd	st, st(6)
        fcompp
        fnstsw	ax
        fldz
        test	ah, 0x41
        jne loc_007D4EF7
        mov	eax, 0x1
        jmp loc_007D4F38
    loc_007D4ED3:
        fcom	dword ptr [esp + 0x34]
        fnstsw	ax
        test	ah, 0x41
        jne loc_007D4EF7
        fstp	st(0)
        fld	st(0)
        fadd	st, st(4)
        fld	st(2)
        fadd	st, st(6)
        fcompp
        fnstsw	ax
        fldz
        test	ah, 0x41
        jne loc_007D4EF7
    loc_007D4EF3:
        xor	eax, eax
        jmp loc_007D4F38
    loc_007D4EF7:
        mov	eax, 0x2
        jmp loc_007D4F38
    loc_007D4EFE:
        test	ah, 0x41
        jne loc_007D4F17
        fld	st(2)
        fchs
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007D4EF3
    loc_007D4F10:
        mov	eax, 0x1
        jmp loc_007D4F38
    loc_007D4F17:
        fcom	dword ptr [esp + 0x34]
        fnstsw	ax
        test	ah, 0x41
        jne loc_007D4F33
        fld	st(1)
        fchs
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jne loc_007D4F10
        xor	eax, eax
        jmp loc_007D4F38
    loc_007D4F33:
        mov	eax, 0x3
    loc_007D4F38:
        sub	eax, 0x0
        je loc_007D504A
        sub	eax, 0x1
        je loc_007D5002
        sub	eax, 0x1
        je loc_007D4F8D
        fstp	st(5)
        fstp	st(1)
        fstp	st(0)
        fstp	st(0)
        fstp	st(0)
        fld	dword ptr [esp + 0x3c]
        fcom	st(1)
        fnstsw	ax
        fstp	st(1)
        test	ah, 0x41
        jne loc_007D4F6E
        fld1
        fdivrp	st(1), st
        jmp loc_007D4F72
    loc_007D4F6E:
        fstp	st(0)
        fldz
    loc_007D4F72:
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0x3c]
        fld	st(0)
        fmul	dword ptr [esp + 0x38]
        fstp	dword ptr [esp + 0x38]
        fmul	dword ptr [esp + 0x34]
        jmp loc_007D5082
    loc_007D4F8D:
        fld	st(3)
        faddp	st(3), st
        fld	st(5)
        fsubp	st(3), st
        fxch	st(2)
        fsubrp	st(1), st
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0x3c]
        fcom	st(1)
        fnstsw	ax
        fld1
        test	ah, 0x41
        jp loc_007D4FC1
        fstp	st(5)
        fstp	st(0)
        fstp	st(1)
        fstp	st(1)
        fstp	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x38]
        jmp loc_007D5082
    loc_007D4FC1:
        fstp	st(2)
        fxch	st(4)
        fadd	st(0), st
        fsubp	st(3), st
        fxch	st(2)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(2)
        fnstsw	ax
        test	ah, 0x41
        jp loc_007D4FF1
        fstp	st(0)
        fstp	st(1)
        fld	st(0)
        fstp	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x38]
        jmp loc_007D5082
    loc_007D4FF1:
        fdivp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fsub	dword ptr [esp + 0x38]
        jmp loc_007D5082
    loc_007D5002:
        fstp	st(5)
        fstp	st(0)
        fstp	st(2)
        fxch	st(2)
        fst	dword ptr [esp + 0x38]
        fcomp	st(1)
        fnstsw	ax
        test	ah, 0x41
        jp loc_007D5023
        fstp	st(0)
        fstp	st(0)
        fldz
        fstp	dword ptr [esp + 0x34]
        jmp loc_007D5086
    loc_007D5023:
        fchs
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x34]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x1
        jne loc_007D5042
        fstp	st(0)
        fstp	st(0)
        fld1
        fstp	dword ptr [esp + 0x34]
        jmp loc_007D5086
    loc_007D5042:
        fdivrp	st(1), st
        fstp	dword ptr [esp + 0x34]
        jmp loc_007D5086
    loc_007D504A:
        fstp	st(5)
        fstp	st(1)
        fstp	st(1)
        fcom	st(2)
        fnstsw	ax
        test	ah, 0x1
        jne loc_007D5061
        fstp	st(0)
        fstp	st(0)
        fldz
        jmp loc_007D507E
    loc_007D5061:
        fchs
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fcom	st(1)
        fnstsw	ax
        test	ah, 0x1
        jne loc_007D507C
        fstp	st(0)
        fstp	st(0)
        fld1
        jmp loc_007D507E
    loc_007D507C:
        fdivrp	st(1), st
    loc_007D507E:
        fstp	dword ptr [esp + 0x38]
    loc_007D5082:
        fstp	dword ptr [esp + 0x34]
    loc_007D5086:
        mov	eax, dword ptr [esp + 0x2c]
        fld	dword ptr [ecx]
        fstp	dword ptr [eax]
        fld	dword ptr [ecx + 0x4]
        fstp	dword ptr [eax + 0x4]
        fld	dword ptr [ecx + 0x8]
        fstp	dword ptr [eax + 0x8]
        fld	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x38]
        fld	st(0)
        fmulp	st(2), st
        fld	dword ptr [eax]
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x4]
        fld	dword ptr [esp + 0x34]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fadd	dword ptr [esp + 0x38]
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fst	dword ptr [eax]
        fld	dword ptr [esp + 0x14]
        fmul	st, st(3)
        fadd	dword ptr [eax + 0x4]
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x8]
        fmul	st, st(3)
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fst	dword ptr [eax + 0x4]
        fld	dword ptr [esp + 0x18]
        fmulp	st(4), st
        fld	dword ptr [eax + 0x8]
        faddp	st(4), st
        fxch	st(3)
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0xc]
        fmulp	st(3), st
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        fst	dword ptr [eax + 0x8]
        fld	dword ptr [edx]
        fsubrp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [edx + 0x4]
        fsubrp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x20]
        fsubr	dword ptr [edx + 0x8]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esp + 0x20]
        fld	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x24]
        fld	st(1)
        fmulp	st(2), st
        fld	st(2)
        fmulp	st(3), st
        fxch	st(1)
        faddp	st(2), st
        fmul	st(0), st
        faddp	st(1), st
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        call ext_006A7250
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x38]
        add	esp, 0x28
        ret
    }
}

// [0x007D3A50] sub_007D3A50 (1091 bytes)
extern "C" void ext_007CE490();
extern "C" int mem_0093F7B8;
extern "C" double mem_00993830;
extern "C" int mem_0093C1A8;
extern "C" int mem_0099D148;

extern "C" __declspec(naked) void __fastcall fn_007D3A50(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x2c]
        push edi
        mov edi, dword ptr [esp + 0x48]
        push edi
        push esi
        push 0x0
        call ext_007CE490
        push edi
        push esi
        push 0x1
        call ext_007CE490
        push edi
        push esi
        push 0x2
        call ext_007CE490
        fld1
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        shl eax, 0x6
        fst dword ptr [eax + ecx]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x44]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        add esp, 0x24
        shl ecx, 0x6
        fstp dword ptr [ecx + edx + 0x88]
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x3c]
        fldz
        lea edi, [esp + 0xc]
        lea eax, [ecx + 0x20]
        mov ebx, 0x4
    loc_7d3aba:
        fld dword ptr [eax - 0x20]
        add edi, 0x4
        fmul dword ptr [edx]
        add eax, 0x4
        sub ebx, 0x1
        fadd st, st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fld dword ptr [eax - 0x14]
        fmul dword ptr [edx + 0x4]
        faddp st(1), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        fld dword ptr [eax - 0x4]
        fmul dword ptr [edx + 0x8]
        faddp st(1), st
        fstp dword ptr [edi - 0x4]
        jne loc_7d3aba
        mov eax, dword ptr [esi + 0x4]
        fldz
        mov edx, dword ptr [esi]
        shl eax, 0x6
        fst dword ptr [eax + edx + 0x10]
        add eax, edx
        cmp dword ptr [esp + 0x44], 0x0
        fld dword ptr [esp + 0x14]
        fst dword ptr [eax + 0x14]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fchs
        fstp dword ptr [eax + 0x18]
        fld st(1)
        fchs
        fstp dword ptr [eax + 0x50]
        fxch st(2)
        fst dword ptr [eax + 0x54]
        fld dword ptr [esp + 0xc]
        fst dword ptr [eax + 0x58]
        fxch st(3)
        fst dword ptr [eax + 0x90]
        fld st(3)
        fchs
        fstp dword ptr [eax + 0x94]
        fxch st(1)
        fst dword ptr [eax + 0x98]
        jne loc_7d3bfd
        mov edi, dword ptr [esi + 0x2c]
        fstp st(0)
        mov ebx, dword ptr [esp + 0x40]
        fstp st(3)
        fld dword ptr [ecx + 0x30]
        mov eax, edi
        faddp st(2), st
        cdq
        fld dword ptr [ebx]
        and edx, 0x3
        add eax, edx
        fsubp st(2), st
        sar eax, 0x2
        and edi, 0x80000003
        fxch st(1)
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        jns loc_7d3b7f
        dec edi
        or edi, -0x4
        inc edi
    loc_7d3b7f:
        mov edx, dword ptr [esi + 0x28]
        lea eax, [edi + eax*4]
        fstp dword ptr [edx + eax*4]
        mov eax, dword ptr [esi + 0x2c]
        fld dword ptr [ecx + 0x34]
        lea edi, [eax + 0x1]
        faddp st(2), st
        mov eax, edi
        fld dword ptr [ebx + 0x4]
        cdq
        and edx, 0x3
        fsubp st(2), st
        add eax, edx
        fxch st(1)
        sar eax, 0x2
        and edi, 0x80000003
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        jns loc_7d3bba
        dec edi
        or edi, -0x4
        inc edi
    loc_7d3bba:
        mov edx, dword ptr [esi + 0x28]
        lea eax, [edi + eax*4]
        fstp dword ptr [edx + eax*4]
        mov eax, dword ptr [esi + 0x2c]
        lea edi, [eax + 0x2]
        fadd dword ptr [ecx + 0x38]
        mov eax, edi
        cdq
        and edx, 0x3
        fsub dword ptr [ebx + 0x8]
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        jns loc_7d3bef
        dec edi
        or edi, -0x4
        inc edi
    loc_7d3bef:
        mov ecx, dword ptr [esi + 0x28]
        lea eax, [edi + eax*4]
        fstp dword ptr [ecx + eax*4]
        jmp loc_7d3d96
    loc_7d3bfd:
        mov edx, dword ptr [esi + 0x4]
        fstp st(1)
        mov eax, dword ptr [esi]
        fstp st(2)
        fld dword ptr [mem_0093F7B8]
        mov ebx, dword ptr [esp + 0x38]
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x20]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        shl edx, 0x6
        fst dword ptr [edx + eax + 0x64]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        shl edx, 0x6
        fstp dword ptr [edx + eax + 0xa8]
        mov edx, dword ptr [esp + 0x40]
        push ebp
        lea edi, [esp + 0x20]
        lea eax, [ebx + 0x20]
        mov ebp, 0x4
    loc_7d3c43:
        fld dword ptr [eax - 0x20]
        add edi, 0x4
        fmul dword ptr [edx]
        add eax, 0x4
        sub ebp, 0x1
        fadd st, st(3)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fld dword ptr [eax - 0x14]
        fmul dword ptr [edx + 0x4]
        faddp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        fld dword ptr [eax - 0x4]
        fmul dword ptr [edx + 0x8]
        faddp st(1), st
        fstp dword ptr [edi - 0x4]
        jne loc_7d3c43
        mov edx, dword ptr [esi + 0x4]
        fstp st(2)
        mov eax, dword ptr [esi]
        shl edx, 0x6
        fst dword ptr [eax + edx + 0x30]
        add eax, edx
        fld dword ptr [esp + 0x28]
        fld st(0)
        fld st(0)
        fld qword ptr [mem_00993830]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [eax + 0x34]
        fld dword ptr [esp + 0x24]
        fld st(0)
        fchs
        fmul st, st(2)
        fstp dword ptr [eax + 0x38]
        fxch st(3)
        fchs
        fmul st, st(1)
        fstp dword ptr [eax + 0x70]
        fxch st(3)
        fst dword ptr [eax + 0x74]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld st(0)
        fmul st, st(6)
        fstp dword ptr [eax + 0x78]
        fld st(4)
        fmul st, st(6)
        fstp dword ptr [eax + 0xb0]
        fxch st(1)
        fchs
        fmulp st(5), st
        fxch st(4)
        fstp dword ptr [eax + 0xb4]
        fstp dword ptr [eax + 0xb8]
        mov edi, dword ptr [esi + 0x2c]
        fld dword ptr [ecx + 0x30]
        mov eax, edi
        fadd dword ptr [esp + 0x10]
        cdq
        fld dword ptr [ebx + 0x30]
        and edx, 0x3
        faddp st(4), st
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        jns loc_7d3d16
        dec edi
        or edi, -0x4
        inc edi
    loc_7d3d16:
        lea edx, [edi + eax*4]
        mov eax, dword ptr [esi + 0x28]
        fstp dword ptr [eax + edx*4]
        mov eax, dword ptr [esi + 0x2c]
        fld dword ptr [ecx + 0x34]
        lea edi, [eax + 0x1]
        fadd dword ptr [esp + 0x14]
        mov eax, edi
        fld dword ptr [ebx + 0x34]
        cdq
        faddp st(2), st
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        fsubrp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        jns loc_7d3d53
        dec edi
        or edi, -0x4
        inc edi
    loc_7d3d53:
        lea edx, [edi + eax*4]
        mov eax, dword ptr [esi + 0x28]
        fstp dword ptr [eax + edx*4]
        mov eax, dword ptr [esi + 0x2c]
        fld dword ptr [ecx + 0x38]
        lea edi, [eax + 0x2]
        faddp st(2), st
        mov eax, edi
        cdq
        and edx, 0x3
        fadd dword ptr [ebx + 0x38]
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        fsubp st(1), st
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        jns loc_7d3d8c
        dec edi
        or edi, -0x4
        inc edi
    loc_7d3d8c:
        mov edx, dword ptr [esi + 0x28]
        lea ecx, [edi + eax*4]
        fstp dword ptr [edx + ecx*4]
        pop ebp
    loc_7d3d96:
        mov ecx, dword ptr [esi + 0x38]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns loc_7d3db1
        dec ecx
        or ecx, -0x4
        inc ecx
    loc_7d3db1:
        fld dword ptr [mem_0093C1A8]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [esi + 0x34]
        fst dword ptr [ecx + eax*4]
        mov ecx, dword ptr [esi + 0x44]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns loc_7d3ddb
        dec ecx
        or ecx, -0x4
        inc ecx
    loc_7d3ddb:
        fld dword ptr [mem_0099D148]
        lea edx, [ecx + eax*4]
        mov eax, dword ptr [esi + 0x40]
        fst dword ptr [eax + edx*4]
        mov eax, dword ptr [esi + 0x38]
        lea ecx, [eax + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns loc_7d3e08
        dec ecx
        or ecx, -0x4
        inc ecx
    loc_7d3e08:
        mov edx, dword ptr [esi + 0x34]
        fxch st(1)
        lea ecx, [ecx + eax*4]
        fst dword ptr [edx + ecx*4]
        mov eax, dword ptr [esi + 0x44]
        lea ecx, [eax + 0x1]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns loc_7d3e31
        dec ecx
        or ecx, -0x4
        inc ecx
    loc_7d3e31:
        lea eax, [ecx + eax*4]
        fxch st(1)
        mov ecx, dword ptr [esi + 0x40]
        fst dword ptr [ecx + eax*4]
        mov eax, dword ptr [esi + 0x38]
        lea ecx, [eax + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns loc_7d3e5a
        dec ecx
        or ecx, -0x4
        inc ecx
    loc_7d3e5a:
        lea edx, [ecx + eax*4]
        fxch st(1)
        mov eax, dword ptr [esi + 0x34]
        fstp dword ptr [eax + edx*4]
        mov eax, dword ptr [esi + 0x44]
        lea ecx, [eax + 0x2]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns loc_7d3e83
        dec ecx
        or ecx, -0x4
        inc ecx
    loc_7d3e83:
        mov edx, dword ptr [esi + 0x40]
        pop edi
        lea ecx, [ecx + eax*4]
        pop esi
        fstp dword ptr [edx + ecx*4]
        pop ebx
        add esp, 0x20
        ret
    }
}


// [0x007DDA80] sub_007DDA80 (1107 bytes)
extern "C" void ext_007C6F50();
extern "C" void ext_007DCDD0();
extern "C" void ext_007DD300();
extern "C" void ext_007DD4E0();
extern "C" void ext_007DD6C0();
extern "C" void ext_007DD8A0();
extern "C" int mem_0099D148;

extern "C" __declspec(naked) void __fastcall fn_007DDA80(void* self) {
    __asm {
        fld     dword ptr [esp + 0x8]
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        push    ecx
        mov     edi, ecx
        fstp    dword ptr [esp]
        mov     ecx, dword ptr [edi + 0xc8]
        push    eax
        call    ecx
        mov     ecx, dword ptr [esi + 0xc]
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        push    ecx
        call    ext_007C6F50
        add     esp, 0x14
        test    eax, eax
        jne     L_007DDDB3
        test    byte ptr [esi + 0x10], 0x2
        je      L_007DDEC9
        mov     ebx, dword ptr [esi + 0x8]
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, ebx
        imul    edx, edx, 0x9c
        mov     ecx, dword ptr [edx + eax + 0xc]
        mov     dword ptr [esp + 0x14], ecx
        xor     ecx, ecx
        cmp     ebx, ecx
        mov     dword ptr [esp + 0x3c], ebx
        jle     L_007DDB82
        mov     dword ptr [esp + 0x40], ecx
    L_007DDAF1:
        lea     eax, [ecx + 0x1]
        lea     edx, [eax + 0x1]
        imul    edx, eax
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [edi + 0xc]
        imul    eax, ecx
        sar     edx, 1
        sub     eax, edx
        add     eax, ebx
        mov     ebp, eax
        and     al, 0x1
        mov     bl, al
        mov     eax, dword ptr [edi + 0x20]
        add     bl, bl
        sar     ebp, 1
        mov     dl, byte ptr [eax + ebp]
        add     bl, bl
        mov     cl, bl
        shr     dl, cl
        and     dl, 0xf
        cmp     dl, byte ptr [edi + 0x4]
        jne     L_007DDB45
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [esp + 0x40]
        push    eax
        mov     eax, dword ptr [ecx + edx + 0xc]
        mov     ecx, dword ptr [edi + 0x2c]
        push    eax
        push    ecx
        call    ext_007DCDD0
        add     esp, 0xc
    L_007DDB45:
        mov     edx, dword ptr [edi + 0x20]
        add     dword ptr [esp + 0x40], 0x9c
        add     ebp, edx
        mov     dl, byte ptr [ebp]
        mov     cl, bl
        movzx   eax, bl
        shr     dl, cl
        mov     ecx, eax
        mov     ebx, 0xf0
        sar     ebx, cl
        and     dl, 0x4
        shl     dl, cl
        mov     ecx, dword ptr [esp + 0x10]
        and     bl, byte ptr [ebp]
        or      dl, bl
        mov     ebx, dword ptr [esp + 0x3c]
        cmp     ecx, ebx
        mov     byte ptr [ebp], dl
        jl      L_007DDAF1
    L_007DDB82:
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [ebx + 0x1]
        cmp     ecx, eax
        mov     dword ptr [esp + 0x40], ecx
        jge     L_007DDC40
        lea     ebp, [ebx + 0x2]
        imul    ebp, ecx
        sar     ebp, 1
        mov     edx, ecx
        imul    edx, edx, 0x9c
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x10], edx
        jmp     L_007DDBC0
        _emit   0x8b
        _emit   0xff
    L_007DDBB0:
        mov     ecx, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x3c]
    L_007DDBC0:
        imul    eax, ebx
        sub     eax, ebp
        add     eax, ecx
        mov     ebp, eax
        and     al, 0x1
        mov     bl, al
        mov     eax, dword ptr [edi + 0x20]
        add     bl, bl
        sar     ebp, 1
        mov     al, byte ptr [eax + ebp]
        add     bl, bl
        mov     cl, bl
        shr     al, cl
        and     al, 0xf
        cmp     al, byte ptr [edi + 0x4]
        jne     L_007DDBFD
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [ecx + edx + 0xc]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x2c]
        push    edx
        push    eax
        push    ecx
        call    ext_007DCDD0
        add     esp, 0xc
    L_007DDBFD:
        mov     edx, dword ptr [edi + 0x20]
        add     dword ptr [esp + 0x10], 0x9c
        add     ebp, edx
        mov     dl, byte ptr [ebp]
        movzx   eax, bl
        mov     cl, bl
        shr     dl, cl
        mov     ecx, eax
        mov     ebx, 0xf0
        sar     ebx, cl
        and     dl, 0x4
        shl     dl, cl
        mov     ecx, dword ptr [esp + 0x40]
        and     bl, byte ptr [ebp]
        add     ecx, 0x1
        or      dl, bl
        mov     byte ptr [ebp], dl
        mov     eax, dword ptr [edi + 0xc]
        cmp     ecx, eax
        mov     dword ptr [esp + 0x40], ecx
        jl      L_007DDBB0
    L_007DDC40:
        fld     dword ptr [mem_0099D148]
        lea     edx, [edi + 0xa8]
        fst     dword ptr [esi + 0x2c]
        mov     eax, dword ptr [edx + 0x4]
        mov     ebx, dword ptr [esi + 0x24]
        mov     ebp, dword ptr [esi + 0x28]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [esi + 0x24]
        mov     ebx, dword ptr [esi + 0x28]
        mov     dword ptr [ebx], ebp
        mov     ecx, eax
        sub     ecx, edx
        neg     ecx
        sbb     ecx, ecx
        and     ecx, eax
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x28], ecx
        lea     eax, [esi + 0x24]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        fst     dword ptr [esi + 0x40]
        mov     eax, dword ptr [edx + 0x4]
        mov     ebx, dword ptr [esi + 0x3c]
        mov     ecx, eax
        sub     ecx, edx
        mov     edx, dword ptr [esi + 0x38]
        mov     dword ptr [edx + 0x4], ebx
        mov     ebx, dword ptr [esi + 0x38]
        mov     edx, dword ptr [esi + 0x3c]
        mov     dword ptr [edx], ebx
        neg     ecx
        sbb     ecx, ecx
        and     ecx, eax
        mov     dword ptr [esi + 0x38], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x3c], ecx
        lea     eax, [esi + 0x38]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        fst     dword ptr [esi + 0x54]
        mov     eax, dword ptr [edi + 0xb4]
        mov     ebx, dword ptr [esi + 0x4c]
        mov     ebp, dword ptr [esi + 0x50]
        lea     edx, [edi + 0xb0]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebx, dword ptr [esi + 0x50]
        mov     ebp, dword ptr [esi + 0x4c]
        mov     ecx, eax
        sub     ecx, edx
        neg     ecx
        sbb     ecx, ecx
        and     ecx, eax
        mov     dword ptr [ebx], ebp
        mov     dword ptr [esi + 0x4c], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        lea     eax, [esi + 0x4c]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        fst     dword ptr [esi + 0x68]
        mov     eax, dword ptr [edx + 0x4]
        mov     ebx, dword ptr [esi + 0x64]
        mov     ecx, eax
        sub     ecx, edx
        mov     edx, dword ptr [esi + 0x60]
        neg     ecx
        sbb     ecx, ecx
        and     ecx, eax
        lea     eax, [esi + 0x60]
        mov     dword ptr [edx + 0x4], ebx
        mov     edx, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [eax]
        mov     dword ptr [edx], ebx
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        fst     dword ptr [esi + 0x7c]
        mov     eax, dword ptr [edi + 0xbc]
        mov     ebx, dword ptr [esi + 0x78]
        lea     edx, [edi + 0xb8]
        mov     edi, dword ptr [esi + 0x74]
        mov     dword ptr [edi + 0x4], ebx
        mov     edi, dword ptr [esi + 0x78]
        mov     ebx, dword ptr [esi + 0x74]
        mov     dword ptr [edi], ebx
        mov     ecx, eax
        sub     ecx, edx
        neg     ecx
        sbb     ecx, ecx
        and     ecx, eax
        mov     dword ptr [esi + 0x74], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [esi + 0x78], ecx
        lea     eax, [esi + 0x74]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        fstp    dword ptr [esi + 0x90]
        mov     eax, dword ptr [edx + 0x4]
        mov     edi, dword ptr [esi + 0x8c]
        mov     ecx, eax
        sub     ecx, edx
        mov     edx, dword ptr [esi + 0x88]
        neg     ecx
        sbb     ecx, ecx
        mov     dword ptr [edx + 0x4], edi
        mov     edi, dword ptr [esi + 0x88]
        mov     edx, dword ptr [esi + 0x8c]
        and     ecx, eax
        lea     eax, [esi + 0x88]
        mov     dword ptr [edx], edi
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [eax]
        pop     edi
        mov     dword ptr [ecx + 0x4], eax
        and     dword ptr [esi + 0x10], -0x3
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x8
    L_007DDDB3:
        or      dword ptr [esi + 0x10], -0x3
        xor     ebx, ebx
        add     esi, 0x40
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00
    L_007DDDC0:
        mov     al, byte ptr [edi + 0x5]
        mov     edx, 0x1
        mov     ecx, ebx
        shl     edx, cl
        _emit   0x84
        _emit   0xd0
        je      L_007DDEBA
        fld     dword ptr [esi - 0x14]
        xor     ebp, ebp
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esi]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 4*ebx + 0x20]
        fstp    dword ptr [esi - 0x14]
        fld     dword ptr [esp + 4*ebx + 0x2c]
        fstp    dword ptr [esi]
        fld     dword ptr [esp + 0x3c]
        fst     qword ptr [esp + 0x18]
        fld     dword ptr [esp + 4*ebx + 0x20]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jne     L_007DDE42
        fld     dword ptr [esp + 4*ebx + 0x2c]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x5
        jp      L_007DDE23
        lea     ecx, [esi - 0x8]
        fstp    st(1)
        push    ecx
        fstp    st(0)
        mov     ecx, edi
        call    ext_007DD8A0
        jmp     L_007DDE39
    L_007DDE23:
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007DDE3D
        lea     edx, [esi - 0x8]
        fstp    st(0)
        push    edx
        mov     ecx, edi
        call    ext_007DD6C0
    L_007DDE39:
        fld     qword ptr [esp + 0x18]
    L_007DDE3D:
        mov     ebp, 0x1
    L_007DDE42:
        fld     dword ptr [esp + 4*ebx + 0x20]
        fld     dword ptr [esp + 0x40]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     L_007DDE66
        fstp    st(2)
        lea     eax, [esi - 0x1c]
        fstp    st(0)
        push    eax
        mov     ecx, edi
        fstp    st(0)
        call    ext_007DD4E0
        jmp     L_007DDE7C
    L_007DDE66:
        fcompp
        fnstsw  ax
        test    ah, 0x5
        jp      L_007DDE80
        lea     ecx, [esi - 0x1c]
        fstp    st(0)
        push    ecx
        mov     ecx, edi
        call    ext_007DD300
    L_007DDE7C:
        fld     qword ptr [esp + 0x18]
    L_007DDE80:
        test    ebp, ebp
        jne     L_007DDEB8
        fld     dword ptr [esp + 4*ebx + 0x2c]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x5
        jp      L_007DDEA2
        lea     edx, [esi - 0x8]
        fstp    st(1)
        push    edx
        fstp    st(0)
        mov     ecx, edi
        call    ext_007DD8A0
        jmp     L_007DDEBA
    L_007DDEA2:
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L_007DDEBA
        lea     eax, [esi - 0x8]
        push    eax
        mov     ecx, edi
        call    ext_007DD6C0
        jmp     L_007DDEBA
    L_007DDEB8:
        fstp    st(0)
    L_007DDEBA:
        add     ebx, 0x1
        add     esi, 0x28
        cmp     ebx, 0x3
        jl      L_007DDDC0
    L_007DDEC9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x8
    }
}

// [0x007DAE80] sub_007DAE80 (80 bytes)
extern "C" void ext_007F4FE0(int, int, float*, float*);

struct S_007DAE80_Copy {
    int data[10];
};

struct S_007DAE80 {
    char pad0[0x10];
    S_007DAE80_Copy copy;
    float f38;
    float f3c;
    float f40;
};

extern "C" S_007DAE80* __cdecl fn_007DAE80(S_007DAE80* self, void* a1, S_007DAE80_Copy* a2, float a3) {
    ((void(__cdecl*)(void*, void*, int))ext_007CC8E0)(self, a1, 7);
    self->copy = *a2;
    self->f38 = a3;
    ext_007F4FE0(self->copy.data[0], self->copy.data[6], &self->f40, &self->f3c);
    self->f3c += a3;
    return self;
}

// [0x007DB4C0] sub_007DB4C0 (56 bytes)
extern "C" void ext_007DAE80();

extern "C" __declspec(naked) void* __cdecl fn_007DB4C0(void* self, int a2, float a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0xb0]
        mov ecx, dword ptr [eax + 0x8]
        push 0x10
        push 0x4c
        call ecx
        add esp, 0x8
        test eax, eax
        je short loc_zero_007DB4C0
        fld dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        fstp dword ptr [esp]
        push edx
        push esi
        push eax
        call ext_007DAE80
        add esp, 0x10
        pop esi
        ret
    loc_zero_007DB4C0:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007DDEE0] sub_007DDEE0 (66 bytes)
extern "C" void ext_007DDA80();

extern "C" __declspec(naked) bool __fastcall fn_007DDEE0(void* self, int edx_unused, float a2) {
    __asm {
        push    ebx
        mov     ebx, ecx
        cmp     dword ptr [ebx + 0xC8], 0
        jne     loc_7DDEF2
        xor     al, al
        pop     ebx
        ret     4

    loc_7DDEF2:
        push    esi
        mov     esi, dword ptr [ebx + 0xC0]
        push    edi
        lea     edi, [ebx + 0xC0]
        cmp     esi, edi
        je      loc_7DDF1A

    loc_7DDF04:
        fld     dword ptr [esp + 0x10]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        mov     ecx, ebx
        call    ext_007DDA80
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jne     loc_7DDF04

    loc_7DDF1A:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret     4
    }
}

// [0x007DBAD0] sub_007DBAD0 (1152 bytes)
extern "C" void ext_007DB560();
extern "C" void ext_007DB9E0();
extern "C" void ext_007DBA20();

extern "C" __declspec(naked) void __fastcall fn_007DBAD0(void* self) {
    __asm {
        sub	esp, 0xc4
        fld1
        push	ebx
        push	ebp
        mov	ebp, dword ptr [esp + 0xe8]
        fst	dword ptr [ebp]
        mov	eax, dword ptr [esp + 0xd0]
        fldz
        mov	edx, dword ptr [esp + 0xdc]
        fst	dword ptr [ebp + 0x4]
        push	esi
        fst	dword ptr [ebp + 0x8]
        push	edi
        fst	dword ptr [ebp + 0xc]
        lea	esi, [esp + 0x14]
        fst	dword ptr [ebp + 0x10]
        lea	edi, [esp + 0x8c]
        fst	dword ptr [ebp + 0x18]
        fst	dword ptr [ebp + 0x1c]
        fst	dword ptr [ebp + 0x20]
        fst	dword ptr [ebp + 0x24]
        fst	dword ptr [ebp + 0x2c]
        fst	dword ptr [ebp + 0x30]
        fst	dword ptr [ebp + 0x34]
        fstp	dword ptr [ebp + 0x38]
        fst	dword ptr [ebp + 0x14]
        fst	dword ptr [ebp + 0x28]
        fstp	dword ptr [ebp + 0x3c]
        fld	dword ptr [esp + 0xe0]
        fld	st(0)
        fld	dword ptr [esp + 0xec]
        fld	st(0)
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fst	dword ptr [ecx]
        fld	dword ptr [edx + 0x30]
        fmul	st, st(2)
        fld	st(3)
        fmul	dword ptr [eax + 0x30]
        faddp	st(1), st
        fdivrp	st(1), st
        fstp	dword ptr [ebp + 0x30]
        fld	dword ptr [eax + 0x34]
        fmul	st, st(2)
        fld	dword ptr [edx + 0x34]
        fmul	st, st(2)
        faddp	st(1), st
        fdiv	dword ptr [ecx]
        fstp	dword ptr [ebp + 0x34]
        fld	dword ptr [eax + 0x38]
        fmulp	st(2), st
        fmul	dword ptr [edx + 0x38]
        faddp	st(1), st
        fdiv	dword ptr [ecx]
        mov	ecx, 0x9
        fstp	dword ptr [ebp + 0x38]
        fld	dword ptr [eax]
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [eax + 0x4]
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [eax + 0x8]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [eax + 0x10]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [eax + 0x14]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [eax + 0x18]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [eax + 0x20]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [eax + 0x24]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [eax + 0x28]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x20]
        rep movsd
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0xa4]
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x90]
        mov	ecx, dword ptr [esp + 0xdc]
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esp + 0xa8]
        lea	eax, [esp + 0x8c]
        fstp	dword ptr [esp + 0x28]
        push	eax
        fld	dword ptr [esp + 0x98]
        push	ecx
        fstp	dword ptr [esp + 0x34]
        lea	ebx, [esp + 0x1c]
        fld	dword ptr [esp + 0xa8]
        fstp	dword ptr [esp + 0x38]
        call ext_007DBA20
        mov	eax, dword ptr [esp + 0xec]
        fld	dword ptr [eax]
        mov	ecx, 0x9
        fstp	dword ptr [esp + 0x1c]
        lea	esi, [esp + 0x1c]
        fld	dword ptr [eax + 0x4]
        lea	edi, [esp + 0x70]
        fstp	dword ptr [esp + 0x20]
        lea	edx, [esp + 0x70]
        fld	dword ptr [eax + 0x8]
        push	edx
        fstp	dword ptr [esp + 0x28]
        lea	ebx, [esp + 0x20]
        fld	dword ptr [eax + 0x10]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [eax + 0x14]
        fstp	dword ptr [esp + 0x30]
        fld	dword ptr [eax + 0x18]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [eax + 0x20]
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [eax + 0x24]
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [eax + 0x28]
        mov	eax, dword ptr [esp + 0xf4]
        fstp	dword ptr [esp + 0x40]
        rep movsd
        fld	dword ptr [esp + 0x2c]
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esp + 0x8c]
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x78]
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x90]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x7c]
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x88]
        push	eax
        fstp	dword ptr [esp + 0x40]
        call ext_007DBA20
        mov	eax, dword ptr [esp + 0xe8]
        fld	dword ptr [ebp + 0x30]
        add	esp, 0x10
        fsub	dword ptr [eax + 0x30]
        lea	ecx, [esp + 0x5c]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [ebp + 0x34]
        fsub	dword ptr [eax + 0x34]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [ebp + 0x38]
        fsub	dword ptr [eax + 0x38]
        lea	eax, [esp + 0x14]
        fstp	dword ptr [esp + 0x64]
        call ext_007DB9E0
        mov	ecx, eax
        lea	edx, [esp + 0x38]
        call ext_007DB560
        fld	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0xe0]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x3c]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x3c]
        fld	dword ptr [esp + 0x40]
        fmul	st, st(1)
        mov	eax, dword ptr [esp + 0xe4]
        lea	ecx, [esp + 0x5c]
        fstp	dword ptr [esp + 0x40]
        fld	dword ptr [esp + 0x44]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x44]
        fld	dword ptr [esp + 0x48]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x48]
        fld	dword ptr [esp + 0x4c]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x4c]
        fld	dword ptr [esp + 0x50]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x50]
        fld	dword ptr [esp + 0x54]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x54]
        fmul	dword ptr [esp + 0x58]
        fstp	dword ptr [esp + 0x58]
        fld	dword ptr [ebp + 0x30]
        fsub	dword ptr [eax + 0x30]
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [ebp + 0x34]
        fsub	dword ptr [eax + 0x34]
        fstp	dword ptr [esp + 0x60]
        fld	dword ptr [ebp + 0x38]
        fsub	dword ptr [eax + 0x38]
        lea	eax, [esp + 0xb0]
        fstp	dword ptr [esp + 0x64]
        call ext_007DB9E0
        mov	ecx, eax
        lea	edx, [esp + 0x14]
        call ext_007DB560
        fld	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0xec]
        mov	eax, dword ptr [esp + 0xf4]
        fld	st(0)
        fmulp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0x18]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x18]
        fld	dword ptr [esp + 0x1c]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x1c]
        fld	dword ptr [esp + 0x20]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x20]
        fld	dword ptr [esp + 0x24]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x24]
        fld	dword ptr [esp + 0x28]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x28]
        fld	dword ptr [esp + 0x2c]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x2c]
        fld	dword ptr [esp + 0x30]
        fmul	st, st(1)
        fstp	dword ptr [esp + 0x30]
        fmul	dword ptr [esp + 0x34]
        fstp	dword ptr [esp + 0x34]
        fld	dword ptr [esp + 0x68]
        fadd	dword ptr [esp + 0x8c]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fsub	dword ptr [esp + 0x38]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fsub	dword ptr [esp + 0x14]
        fstp	dword ptr [eax]
        fld	dword ptr [esp + 0x6c]
        fadd	dword ptr [esp + 0x90]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fsub	dword ptr [esp + 0x3c]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fsub	dword ptr [esp + 0x18]
        pop	edi
        pop	esi
        pop	ebp
        fstp	dword ptr [eax + 0x4]
        pop	ebx
        fld	dword ptr [esp + 0x60]
        fadd	dword ptr [esp + 0x84]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x30]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0xc]
        fstp	dword ptr [eax + 0x8]
        fld	dword ptr [esp + 0x64]
        fadd	dword ptr [esp + 0x88]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x34]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x10]
        fstp	dword ptr [eax + 0xc]
        fld	dword ptr [esp + 0x68]
        fadd	dword ptr [esp + 0x8c]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x38]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x14]
        fstp	dword ptr [eax + 0x10]
        fld	dword ptr [esp + 0x6c]
        fadd	dword ptr [esp + 0x90]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x3c]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x18]
        fstp	dword ptr [eax + 0x14]
        fld	dword ptr [esp + 0x70]
        fadd	dword ptr [esp + 0x94]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x40]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x1c]
        fstp	dword ptr [eax + 0x18]
        fld	dword ptr [esp + 0x74]
        fadd	dword ptr [esp + 0x98]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x44]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x20]
        fstp	dword ptr [eax + 0x1c]
        fld	dword ptr [esp + 0x78]
        fadd	dword ptr [esp + 0x9c]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x48]
        fstp	dword ptr [esp]
        fld	dword ptr [esp]
        fsub	dword ptr [esp + 0x24]
        fstp	dword ptr [eax + 0x20]
        add	esp, 0xc4
        ret
    }
}

// [0x007D8970] sub_007D8970 (1283 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_007D52F0();
extern "C" int mem_00993828;
extern "C" int mem_0092A278;
extern "C" int mem_0092C510;

extern "C" __declspec(naked) void __fastcall fn_007D8970(void* self) {
    __asm {
        push	ebp
        mov	ebp, esp
        and	esp, -0x8
        mov	edx, dword ptr [ebp + 0x10]
        fld	dword ptr [ebp + 0x14]
        sub	esp, 0x54
        push	ebx
        mov	ebx, dword ptr [ebp + 0x8]
        push	esi
        xor	ecx, ecx
        test	edx, edx
        push	edi
        je loc_007D8A19
        fld	st(0)
loc_007D8991:
        mov	eax, dword ptr [ebx + 4*ecx]
        fld	dword ptr [eax + 0xe0]
        add	ecx, 0x1
        cmp	ecx, edx
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xb0]
        fstp	dword ptr [eax + 0xb0]
        fld	dword ptr [eax + 0xe4]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xb4]
        fstp	dword ptr [eax + 0xb4]
        fld	dword ptr [eax + 0xe8]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xb8]
        fstp	dword ptr [eax + 0xb8]
        fld	dword ptr [eax + 0xf0]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xc0]
        fstp	dword ptr [eax + 0xc0]
        fld	dword ptr [eax + 0xf4]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xc4]
        fstp	dword ptr [eax + 0xc4]
        fld	dword ptr [eax + 0xf8]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xc8]
        fstp	dword ptr [eax + 0xc8]
        jne loc_007D8991
        fstp	st(0)
loc_007D8A19:
        xor	edi, edi
        test	edx, edx
        je loc_007D8E6A
        mov	esi, dword ptr [ebp + 0xc]
        fst	qword ptr [esp + 0x18]
        add	esi, 0x34
        jmp loc_007D8A34
        nop
loc_007D8A30:
        fld	qword ptr [esp + 0x18]
loc_007D8A34:
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0xb0]
        fmul	st, st(1)
        fadd	dword ptr [esi - 0x4]
        fstp	dword ptr [esi - 0x4]
        mov	ecx, dword ptr [ebx + 4*edi]
        fld	dword ptr [ecx + 0xb4]
        fmul	st, st(1)
        fadd	dword ptr [esi]
        fstp	dword ptr [esi]
        mov	edx, dword ptr [ebx + 4*edi]
        fld	dword ptr [edx + 0xb8]
        fmul	st, st(1)
        fadd	dword ptr [esi + 0x4]
        fstp	dword ptr [esi + 0x4]
        fld1
        fstp	dword ptr [esi + 0x8]
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0xc0]
        test	byte ptr [eax + 0xc], 0x1
        fstp	dword ptr [esp + 0x44]
        fld	dword ptr [eax + 0xc4]
        fstp	dword ptr [esp + 0x48]
        fld	dword ptr [eax + 0xc8]
        fstp	dword ptr [esp + 0x4c]
        je loc_007D8B30
        fld	dword ptr [esp + 0x48]
        mov	ecx, eax
        fst	qword ptr [esp + 0x30]
        lea	eax, [ecx + 0x100]
        fld	dword ptr [esp + 0x44]
        push	ecx
        fst	qword ptr [esp + 0x2c]
        add	ecx, 0xd0
        fld	dword ptr [esp + 0x50]
        fst	qword ptr [esp + 0x3c]
        fld	dword ptr [eax + 0x4]
        fmulp	st(3), st
        fld	dword ptr [eax]
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fld	dword ptr [eax + 0x8]
        fmulp	st(2), st
        faddp	st(1), st
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0x14]
        fst	qword ptr [esp + 0x24]
        fmulp	st(1), st
        fstp	dword ptr [esp + 0x14]
        fld	dword ptr [esp + 0x14]
        fstp	dword ptr [esp]
        push	eax
        push	ecx
        call ext_007D52F0
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0x100]
        add	esp, 0xc
        fld	qword ptr [esp + 0x20]
        fmul	st(1), st
        fld	qword ptr [esp + 0x28]
        fsubrp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x44]
        fld	dword ptr [eax + 0x104]
        fmul	st, st(1)
        fsubr	qword ptr [esp + 0x30]
        fstp	dword ptr [esp + 0x48]
        fmul	dword ptr [eax + 0x108]
        fsubr	qword ptr [esp + 0x38]
        fstp	dword ptr [esp + 0x4c]
        fld	qword ptr [esp + 0x18]
loc_007D8B30:
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [esp + 0x44]
        fld	dword ptr [eax + 0xd8]
        fld	dword ptr [esp + 0x48]
        fld	dword ptr [eax + 0xdc]
        fst	qword ptr [esp + 0x38]
        fld	dword ptr [esp + 0x4c]
        fld	dword ptr [eax + 0xd4]
        fchs
        fmul	st, st(5)
        fld	st(4)
        fmul	st, st(4)
        fsubp	st(1), st
        fld	st(2)
        fmul	st, st(2)
        fsubp	st(1), st
        fmul	qword ptr [mem_00993828]
        fstp	dword ptr [esp + 0x50]
        fld	dword ptr [eax + 0xd0]
        fld	st(0)
        fmul	st, st(6)
        fxch	st(3)
        fmul	st, st(4)
        faddp	st(3), st
        fld	st(4)
        fmul	st, st(2)
        fsubp	st(3), st
        fxch	st(2)
        fmul	qword ptr [mem_00993828]
        fstp	dword ptr [esp + 0x54]
        fld	dword ptr [eax + 0xd4]
        fstp	qword ptr [esp + 0x10]
        fld	st(1)
        fmul	st, st(3)
        fld	qword ptr [esp + 0x38]
        fmul	st, st(6)
        fsubp	st(1), st
        fld	qword ptr [esp + 0x10]
        fmul	st, st(2)
        faddp	st(1), st
        fld	qword ptr [mem_00993828]
        fmul	st(1), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x58]
        fxch	st(4)
        fmulp	st(5), st
        fld	qword ptr [esp + 0x10]
        fmulp	st(3), st
        fxch	st(4)
        fsubrp	st(2), st
        fld	st(0)
        fmulp	st(4), st
        fxch	st(1)
        faddp	st(3), st
        fxch	st(2)
        fmulp	st(1), st
        fstp	dword ptr [esp + 0x5c]
        fld	dword ptr [esp + 0x50]
        fmul	st, st(2)
        faddp	st(1), st
        fstp	dword ptr [eax + 0xd0]
        fld	dword ptr [esp + 0x54]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xd4]
        fstp	dword ptr [eax + 0xd4]
        fld	dword ptr [esp + 0x58]
        fmul	st, st(1)
        fadd	dword ptr [eax + 0xd8]
        fstp	dword ptr [eax + 0xd8]
        fmul	dword ptr [esp + 0x5c]
        fadd	dword ptr [eax + 0xdc]
        fstp	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd0]
        fld	dword ptr [eax + 0xd4]
        fld	dword ptr [eax + 0xd8]
        fld	dword ptr [eax + 0xdc]
        fld	st(3)
        fmulp	st(4), st
        fxch	st(3)
        fadd	qword ptr [mem_0092A278]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fld	st(2)
        fmulp	st(3), st
        faddp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esp + 0x10]
        fld	st(0)
        fmulp	st(1), st
        fadd	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x10]
        fld	st(0)
        fmulp	st(1), st
        fadd	dword ptr [esp + 0x10]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        call ext_006A7250
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fld1
        fdivrp	st(1), st
        fstp	dword ptr [esp + 0x10]
        fldz
        fst	dword ptr [esi - 0x28]
        fst	dword ptr [esi - 0x18]
        fstp	dword ptr [esi - 0x8]
        fld	dword ptr [esp + 0x10]
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0xd0]
        fmul	st, st(1)
        fstp	dword ptr [eax + 0xd0]
        fld	dword ptr [eax + 0xd4]
        fmul	st, st(1)
        fstp	dword ptr [eax + 0xd4]
        fld	dword ptr [eax + 0xd8]
        fmul	st, st(1)
        fstp	dword ptr [eax + 0xd8]
        fmul	dword ptr [eax + 0xdc]
        fstp	dword ptr [esp + 0x10]
        fld	dword ptr [esp + 0x10]
        fst	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd4]
        fld	dword ptr [eax + 0xd0]
        fld	dword ptr [eax + 0xd8]
        fld	st(2)
        fmulp	st(3), st
        fld	st(1)
        fmulp	st(2), st
        fxch	st(2)
        faddp	st(1), st
        fld	st(1)
        fmulp	st(2), st
        fsubrp	st(1), st
        fld	st(1)
        fmulp	st(2), st
        fsubrp	st(1), st
        fstp	dword ptr [esi - 0x34]
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0xd4]
        fld	qword ptr [mem_0092C510]
        fmul	st(1), st
        fld	dword ptr [eax + 0xd8]
        fmulp	st(2), st
        fld	dword ptr [eax + 0xd0]
        fmul	st, st(1)
        fmul	dword ptr [eax + 0xdc]
        fsubp	st(2), st
        fxch	st(1)
        fstp	dword ptr [esi - 0x24]
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0xd4]
        fmul	st, st(1)
        fmul	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd0]
        fmul	st, st(2)
        fmul	dword ptr [eax + 0xd8]
        faddp	st(1), st
        fstp	dword ptr [esi - 0x14]
        mov	eax, dword ptr [ebx + 4*edi]
        fld	dword ptr [eax + 0xd0]
        fmul	st, st(1)
        fmul	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd4]
        add	edi, 0x1
        fmul	st, st(2)
        add	esi, 0x40
        cmp	edi, dword ptr [ebp + 0x10]
        fmul	dword ptr [eax + 0xd8]
        faddp	st(1), st
        fstp	dword ptr [esi - 0x70]
        mov	eax, dword ptr [ebx + 4*edi - 0x4]
        fld	dword ptr [eax + 0xd0]
        fld	dword ptr [eax + 0xd4]
        fld	dword ptr [eax + 0xd8]
        fld	dword ptr [eax + 0xdc]
        fld	st(3)
        fmulp	st(4), st
        fld	st(2)
        fmulp	st(3), st
        fxch	st(3)
        fsubrp	st(2), st
        fmul	st(0), st
        faddp	st(1), st
        fld	st(1)
        fmulp	st(2), st
        fsubrp	st(1), st
        fstp	dword ptr [esi - 0x60]
        mov	eax, dword ptr [ebx + 4*edi - 0x4]
        fld	dword ptr [eax + 0xd8]
        fmul	st, st(1)
        fmul	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd0]
        fmul	st, st(2)
        fmul	dword ptr [eax + 0xd4]
        fsubp	st(1), st
        fstp	dword ptr [esi - 0x50]
        mov	eax, dword ptr [ebx + 4*edi - 0x4]
        fld	dword ptr [eax + 0xd4]
        fmul	st, st(1)
        fmul	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd0]
        fmul	st, st(2)
        fmul	dword ptr [eax + 0xd8]
        fsubp	st(1), st
        fstp	dword ptr [esi - 0x6c]
        mov	eax, dword ptr [ebx + 4*edi - 0x4]
        fld	dword ptr [eax + 0xd8]
        fmul	st, st(1)
        fmul	dword ptr [eax + 0xdc]
        fld	dword ptr [eax + 0xd0]
        fmulp	st(2), st
        fld	dword ptr [eax + 0xd4]
        fmulp	st(2), st
        faddp	st(1), st
        fstp	dword ptr [esi - 0x5c]
        mov	eax, dword ptr [ebx + 4*edi - 0x4]
        fld	dword ptr [eax + 0xd0]
        fld	dword ptr [eax + 0xd4]
        fld	dword ptr [eax + 0xd8]
        fld	dword ptr [eax + 0xdc]
        fld	st(3)
        fmulp	st(4), st
        fld	st(2)
        fmulp	st(3), st
        fxch	st(3)
        fsubrp	st(2), st
        fmul	st(0), st
        fsubp	st(1), st
        fld	st(1)
        fmulp	st(2), st
        faddp	st(1), st
        fstp	dword ptr [esi - 0x4c]
        jne loc_007D8A30
        pop	edi
        pop	esi
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret
loc_007D8E6A:
        pop	edi
        fstp	st(0)
        pop	esi
        pop	ebx
        mov	esp, ebp
        pop	ebp
        ret
    }
}

// [0x007DBF50] sub_007DBF50 (707 bytes)
extern "C" void ext_007CCA60();
extern "C" void ext_007DBAD0();
extern "C" void ext_007DEB50();
extern "C" __declspec(naked) void __fastcall fn_007DBF50(void* self) {
    __asm {
        fldz
        mov eax, dword ptr [esp + 0x10]
        fst dword ptr [eax]
        sub esp, 0x11c
        fld1
        push ebx
        push ebp
        mov ebx, dword ptr [esp + 0x128]
        push esi
        mov esi, dword ptr [esp + 0x130]
        fst dword ptr [esi]
        push edi
        mov edi, dword ptr [esp + 0x138]
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x28]
        xor ebp, ebp
        fst dword ptr [esi + 0x3c]
        fxch st(1)
        fst dword ptr [esi + 0x4]
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x10]
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x20]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x2c]
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x34]
        fst dword ptr [esi + 0x38]
        fst dword ptr [edi + 0x4]
        fst dword ptr [edi + 0x8]
        fst dword ptr [edi + 0xc]
        fst dword ptr [edi + 0x14]
        fst dword ptr [edi + 0x18]
        fst dword ptr [edi + 0x1c]
        fst dword ptr [edi]
        fst dword ptr [edi + 0x10]
        fst dword ptr [edi + 0x20]
        cmp dword ptr [ebx + 0x18], ebp
        jle loc_007DC00E
        fstp st(0)
        fstp st(0)
    loop_top_007DBFCF:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [ebx + 0x14]
        lea edx, [esp + 0xcc]
        push edx
        mov edx, dword ptr [ecx + 4*ebp]
        lea eax, [esp + 0xf4]
        push eax
        push edx
        call ext_007CCA60
        mov eax, dword ptr [esp + 0x14c]
        fld dword ptr [eax]
        add ebp, 0x1
        fadd dword ptr [esp + 0x20]
        add esp, 0x10
        fstp dword ptr [eax]
        cmp ebp, dword ptr [ebx + 0x18]
        jl loop_top_007DBFCF
        fld1
        fldz
    loc_007DC00E:
        mov eax, dword ptr [esp + 0x13c]
        fld dword ptr [eax]
        xor ebp, ebp
        cmp dword ptr [ebx + 0x18], ebp
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x10]
        jle loc_007DC1EF
        mov dword ptr [esp + 0x14], ebp
        jmp loc_007DC038
    loc_007DC034:
        fld1
        fldz
    loc_007DC038:
        mov ecx, dword ptr [ebx + 0x14]
        fxch st(1)
        mov eax, dword ptr [ecx + 4*ebp]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x38]
        lea edx, [esp + 0x1c]
        fst dword ptr [esp + 0x4c]
        push edx
        fstp dword ptr [esp + 0x64]
        lea ecx, [esp + 0xcc]
        push ecx
        fst dword ptr [esp + 0x30]
        lea edx, [esp + 0x2c]
        fst dword ptr [esp + 0x34]
        push edx
        fst dword ptr [esp + 0x3c]
        push eax
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x68]
        fstp dword ptr [esp + 0x6c]
        call ext_007CCA60
        mov ecx, dword ptr [ebx + 0x10]
        add ecx, dword ptr [esp + 0x24]
        add esp, 0x10
        lea eax, [esp + 0x24]
        lea edx, [esp + 0xec]
        call ext_007DEB50
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [esp + 0x20]
        lea eax, [esp + 0x64]
        push eax
        lea ecx, [esp + 0x8c]
        push ecx
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        push ecx
        fstp dword ptr [esp]
        lea edx, [esp + 0xd4]
        fld dword ptr [esp + 0x1c]
        push edx
        lea eax, [esp + 0xfc]
        push eax
        push ecx
        fstp dword ptr [esp]
        push edi
        push esi
        lea ecx, [esp + 0x30]
        call ext_007DBAD0
        fld dword ptr [esp + 0xa8]
        fstp dword ptr [esi]
        add esp, 0x20
        fld dword ptr [esp + 0x8c]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x90]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [esp + 0x94]
        fstp dword ptr [esi + 0xc]
        fld dword ptr [esp + 0x98]
        fstp dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x9c]
        fstp dword ptr [esi + 0x14]
        fld dword ptr [esp + 0xa0]
        fstp dword ptr [esi + 0x18]
        fld dword ptr [esp + 0xa4]
        fstp dword ptr [esi + 0x1c]
        fld dword ptr [esp + 0xa8]
        fstp dword ptr [esi + 0x20]
        fld dword ptr [esp + 0xac]
        fstp dword ptr [esi + 0x24]
        fld dword ptr [esp + 0xb0]
        fstp dword ptr [esi + 0x28]
        fld dword ptr [esp + 0xb4]
        fstp dword ptr [esi + 0x2c]
        fld dword ptr [esp + 0xb8]
        fstp dword ptr [esi + 0x30]
        fld dword ptr [esp + 0xbc]
        add dword ptr [esp + 0x14], 0x40
        fstp dword ptr [esi + 0x34]
        add ebp, 0x1
        fld dword ptr [esp + 0xc0]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [esp + 0xc4]
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [esp + 0x64]
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x68]
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x6c]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x70]
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esp + 0x74]
        fstp dword ptr [edi + 0x10]
        fld dword ptr [esp + 0x78]
        fstp dword ptr [edi + 0x14]
        fld dword ptr [esp + 0x7c]
        fstp dword ptr [edi + 0x18]
        fld dword ptr [esp + 0x80]
        fstp dword ptr [edi + 0x1c]
        fld dword ptr [esp + 0x84]
        fstp dword ptr [edi + 0x20]
        cmp ebp, dword ptr [ebx + 0x18]
        jl loc_007DC034
        jmp loc_007DC1F3
    loc_007DC1EF:
        fstp st(0)
        fstp st(0)
    loc_007DC1F3:
        fld dword ptr [edi + 0xc]
        xor ax, ax
        fstp dword ptr [edi + 0x4]
        fld dword ptr [edi + 0x18]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [edi + 0x14]
        fstp dword ptr [edi + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x11c
        ret
    }
}

// [0x007D71D0] sub_007D71D0 (1323 bytes)
extern "C" void ext_007D7190();
extern "C" int mem_0099DF60;
extern "C" int mem_0099DF6C;
extern "C" int mem_0099DF74;
extern "C" int mem_0099DF7C;
extern "C" int mem_0099DF80;
extern "C" int mem_0099DF84;
extern "C" int mem_0099DF8C;
extern "C" int mem_0099DF94;
extern "C" int mem_0099DF9C;
extern "C" int mem_0099DFA4;
extern "C" int mem_0099DFAC;
extern "C" int mem_0099DFB4;
extern "C" int mem_0099DFBC;
extern "C" int mem_0099DFC4;

extern "C" __declspec(naked) void __cdecl fn_007D71D0(void) {
    __asm {
        sub esp, 40h
        mov eax, dword ptr [esp + 50h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edx, eax
        shl edx, 4
        push esi
        mov esi, edx
        and esi, 3fh
        lea ecx, [eax + eax]
        mov dword ptr [esp + 3ch], eax
        mov dword ptr [esp + 4], ecx
        je L_7D7200
        lea edx, [eax + 4]
        shl edx, 4
        sub edx, esi
    L_7D7200:
        push ebx
        push ebp
        push edi
        mov edi, ecx
        neg edi
        lea esi, [ecx + ecx*2]
        shl edi, 5
        shl esi, 5
        and edi, 3fh
        je L_7D721A
        sub esi, edi
        add esi, 40h
    L_7D721A:
        lea ebp, [ecx*4]
        mov edi, ebp
        and edi, 3fh
        jne L_7D722E
        mov dword ptr [esp + 14h], ebp
        jmp L_7D723B
    L_7D722E:
        lea ebx, [ecx*4 + 40h]
        sub ebx, edi
        mov dword ptr [esp + 14h], ebx
    L_7D723B:
        test edi, edi
        jne L_7D7245
        mov dword ptr [esp + 18h], ebp
        jmp L_7D7252
    L_7D7245:
        lea ecx, [ecx*4 + 40h]
        sub ecx, edi
        mov dword ptr [esp + 18h], ecx
    L_7D7252:
        mov ecx, dword ptr [esp + 64h]
        imul eax, ecx
        lea ebx, [eax*4]
        mov edi, ebx
        and edi, 3fh
        mov dword ptr [esp + 4ch], eax
        jne L_7D7271
        mov dword ptr [esp + 1ch], ebx
        jmp L_7D727E
    L_7D7271:
        lea eax, [eax*4 + 40h]
        sub eax, edi
        mov dword ptr [esp + 1ch], eax
    L_7D727E:
        lea ebx, [ecx*4]
        mov eax, ebx
        and eax, 3fh
        jne L_7D7292
        mov dword ptr [esp + 20h], ebx
        jmp L_7D729F
    L_7D7292:
        lea edi, [ecx*4 + 40h]
        sub edi, eax
        mov dword ptr [esp + 20h], edi
    L_7D729F:
        test eax, eax
        jne L_7D72A9
        mov dword ptr [esp + 24h], ebx
        jmp L_7D72B6
    L_7D72A9:
        lea edi, [ecx*4 + 40h]
        sub edi, eax
        mov dword ptr [esp + 24h], edi
    L_7D72B6:
        test eax, eax
        jne L_7D72C0
        mov dword ptr [esp + 28h], ebx
        jmp L_7D72CD
    L_7D72C0:
        lea edi, [ecx*4 + 40h]
        sub edi, eax
        mov dword ptr [esp + 28h], edi
    L_7D72CD:
        test eax, eax
        jne L_7D72D7
        mov dword ptr [esp + 2ch], ebx
        jmp L_7D72E4
    L_7D72D7:
        lea ecx, [ecx*4 + 40h]
        sub ecx, eax
        mov dword ptr [esp + 2ch], ecx
    L_7D72E4:
        mov edi, dword ptr [esp + 68h]
        lea eax, [edi*4]
        mov ecx, eax
        and ecx, 3fh
        je L_7D72FF
        lea eax, [edi*4 + 40h]
        sub eax, ecx
    L_7D72FF:
        mov dword ptr [esp + 30h], eax
        mov eax, edx
        and eax, 8000003fh
        jns L_7D7311
        dec eax
        or eax, -40h
        inc eax
    L_7D7311:
        jne L_7D7319
        mov dword ptr [esp + 34h], edx
        jmp L_7D7324
    L_7D7319:
        mov ecx, edx
        sub ecx, eax
        add ecx, 40h
        mov dword ptr [esp + 34h], ecx
    L_7D7324:
        test eax, eax
        jne L_7D732E
        mov dword ptr [esp + 38h], edx
        jmp L_7D7339
    L_7D732E:
        mov ecx, edx
        sub ecx, eax
        add ecx, 40h
        mov dword ptr [esp + 38h], ecx
    L_7D7339:
        test eax, eax
        jne L_7D7343
        mov dword ptr [esp + 3ch], edx
        jmp L_7D734E
    L_7D7343:
        mov ecx, edx
        sub ecx, eax
        add ecx, 40h
        mov dword ptr [esp + 3ch], ecx
    L_7D734E:
        test eax, eax
        jne L_7D7358
        mov dword ptr [esp + 40h], edx
        jmp L_7D7363
    L_7D7358:
        mov ecx, edx
        sub ecx, eax
        add ecx, 40h
        mov dword ptr [esp + 40h], ecx
    L_7D7363:
        test eax, eax
        je L_7D736C
        sub edx, eax
        add edx, 40h
    L_7D736C:
        mov ecx, dword ptr [esp + 40h]
        mov eax, edx
        lea edi, [eax + ecx]
        add edi, dword ptr [esp + 3ch]
        mov dword ptr [esp + 44h], edx
        add edi, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 5ch]
        add edi, dword ptr [esp + 34h]
        add edi, dword ptr [esp + 30h]
        add edi, dword ptr [esp + 2ch]
        add edi, dword ptr [esp + 28h]
        add edi, dword ptr [esp + 24h]
        add edi, dword ptr [esp + 20h]
        add edi, dword ptr [esp + 1ch]
        add edi, dword ptr [esp + 18h]
        add edi, dword ptr [esp + 14h]
        add edi, esi
        push edi
        push edx
        call ext_007D62D0
        mov ebp, dword ptr [esp + 74h]
        mov ebx, dword ptr [esp + 60h]
        push ebp
        push offset mem_0099DFC4
        push esi
        push edi
        push eax
        mov dword ptr [ebx], eax
        lea eax, [esp + 74h]
        push eax
        mov dword ptr [esp + 78h], 0
        call ext_007D7190
        mov ecx, dword ptr [esp + 34h]
        mov esi, dword ptr [esp + 74h]
        push ebp
        push offset mem_0099DFBC
        push ecx
        mov dword ptr [esi], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 8ch]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 50h]
        push ebp
        push offset mem_0099DFB4
        push ecx
        mov dword ptr [esi + 1ch], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 0a4h]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 6ch]
        add esp, 50h
        push ebp
        push offset mem_0099DFAC
        push ecx
        mov dword ptr [esi + 28h], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 6ch]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 38h]
        push ebp
        push offset mem_0099DFA4
        push ecx
        mov dword ptr [esi + 34h], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 84h]
        push eax
        call ext_007D7190
        push ebp
        mov dword ptr [esi + 40h], eax
        push offset mem_0099DF9C
        mov ecx, dword ptr [esp + 5ch]
        mov edx, dword ptr [ebx]
        push ecx
        push edi
        push edx
        lea eax, [esp + 9ch]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 70h]
        add esp, 48h
        push ebp
        push offset mem_0099DF94
        push ecx
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 6ch]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 44h]
        push ebp
        push offset mem_0099DF8C
        push ecx
        mov dword ptr [esi + 4ch], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 84h]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 60h]
        push ebp
        push offset mem_0099DF84
        push ecx
        mov dword ptr [esi + 4], eax
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 9ch]
        push eax
        call ext_007D7190
        mov ecx, dword ptr [esp + 0ach]
        mov edx, dword ptr [esp + 58h]
        add esp, 48h
        push ebp
        mov dword ptr [esi + 58h], eax
        mov eax, dword ptr [esp + 4ch]
        mov dword ptr [esi + 70h], ecx
        mov ecx, dword ptr [esp + 38h]
        push offset mem_0099DF80
        push ecx
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 74h], edx
        mov edx, dword ptr [ebx]
        push edi
        push edx
        lea eax, [esp + 6ch]
        push eax
        call ext_007D7190
        mov edx, dword ptr [esp + 78h]
        xor ecx, ecx
        mov dword ptr [esi + 80h], edx
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esi + 7ch], eax
        mov eax, edx
        add esp, 18h
        and eax, 8000000fh
        mov dword ptr [esi + 20h], ecx
        mov dword ptr [esi + 2ch], ecx
        mov dword ptr [esi + 38h], ecx
        mov dword ptr [esi + 44h], ecx
        mov dword ptr [esi + 14h], ecx
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 5ch], ecx
        jns L_7D7545
        dec eax
        or eax, -10h
        inc eax
    L_7D7545:
        je L_7D754C
        sub edx, eax
        add edx, 10h
    L_7D754C:
        cmp eax, ecx
        mov dword ptr [esi + 24h], edx
        mov edx, dword ptr [esp + 10h]
        je L_7D755C
        sub edx, eax
        add edx, 10h
    L_7D755C:
        mov eax, dword ptr [esp + 4ch]
        mov dword ptr [esi + 30h], edx
        mov edx, eax
        and edx, 8000000fh
        jns L_7D7572
        dec edx
        or edx, -10h
        inc edx
    L_7D7572:
        je L_7D7579
        sub eax, edx
        add eax, 10h
    L_7D7579:
        mov edx, dword ptr [esp + 64h]
        mov dword ptr [esi + 3ch], eax
        mov eax, edx
        and eax, 8000000fh
        jns L_7D758E
        dec eax
        or eax, -10h
        inc eax
    L_7D758E:
        je L_7D7595
        sub edx, eax
        add edx, 10h
    L_7D7595:
        cmp eax, ecx
        mov dword ptr [esi + 48h], edx
        mov edx, dword ptr [esp + 64h]
        je L_7D75A5
        sub edx, eax
        add edx, 10h
    L_7D75A5:
        cmp eax, ecx
        mov dword ptr [esi + 18h], edx
        mov edx, dword ptr [esp + 64h]
        je L_7D75B5
        sub edx, eax
        add edx, 10h
    L_7D75B5:
        cmp eax, ecx
        mov ecx, dword ptr [esp + 64h]
        mov dword ptr [esi + 54h], edx
        je L_7D75C5
        sub ecx, eax
        add ecx, 10h
    L_7D75C5:
        mov eax, dword ptr [esp + 68h]
        mov dword ptr [esi + 0ch], ecx
        mov ecx, eax
        and ecx, 8000000fh
        jns L_7D75DB
        dec ecx
        or ecx, -10h
        inc ecx
    L_7D75DB:
        je L_7D75E2
        sub eax, ecx
        add eax, 10h
    L_7D75E2:
        mov dword ptr [esi + 60h], eax
        mov eax, dword ptr [esp + 60h]
        mov ecx, eax
        and ecx, 8000000fh
        jns L_7D75F8
        dec ecx
        or ecx, -10h
        inc ecx
    L_7D75F8:
        mov dword ptr [esp + 64h], ecx
        je L_7D7603
        sub eax, ecx
        add eax, 10h
    L_7D7603:
        push ebp
        mov dword ptr [esi + 84h], eax
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [ebx]
        push offset mem_0099DF7C
        push eax
        push edi
        push ecx
        lea edx, [esp + 6ch]
        push edx
        call ext_007D7190
        push ebp
        mov dword ptr [esi + 88h], eax
        mov eax, dword ptr [esp + 58h]
        mov ecx, dword ptr [ebx]
        push offset mem_0099DF74
        push eax
        push edi
        push ecx
        lea edx, [esp + 84h]
        push edx
        call ext_007D7190
        push ebp
        mov dword ptr [esi + 0a0h], eax
        mov eax, dword ptr [esp + 74h]
        mov ecx, dword ptr [ebx]
        push offset mem_0099DF6C
        push eax
        push edi
        push ecx
        lea edx, [esp + 9ch]
        push edx
        call ext_007D7190
        add esp, 48h
        push ebp
        mov dword ptr [esi + 0ach], eax
        mov eax, dword ptr [esp + 48h]
        mov ecx, dword ptr [ebx]
        push offset mem_0099DF60
        push eax
        push edi
        push ecx
        lea edx, [esp + 6ch]
        push edx
        call ext_007D7190
        mov ecx, dword ptr [esp + 7ch]
        add esp, 18h
        test ecx, ecx
        pop edi
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esp + 5ch]
        pop ebp
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 0a4h], eax
        mov dword ptr [esi + 0b0h], eax
        mov dword ptr [esi + 98h], eax
        pop ebx
        mov edx, eax
        je L_7D76BF
        sub edx, ecx
        add edx, 10h
    L_7D76BF:
        test ecx, ecx
        mov dword ptr [esi + 90h], edx
        mov edx, eax
        je L_7D76D0
        sub edx, ecx
        add edx, 10h
    L_7D76D0:
        test ecx, ecx
        mov dword ptr [esi + 0a8h], edx
        mov edx, eax
        je L_7D76E1
        sub edx, ecx
        add edx, 10h
    L_7D76E1:
        test ecx, ecx
        mov dword ptr [esi + 0b4h], edx
        je L_7D76F0
        sub eax, ecx
        add eax, 10h
    L_7D76F0:
        mov dword ptr [esi + 9ch], eax
        pop esi
        add esp, 40h
        ret
    }
}

extern "C" void ext_007D8970();

// [0x007D8E80] sub_007D8E80 (44 bytes)
extern "C" __declspec(naked) void __cdecl fn_007D8E80(void) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        mov edx, dword ptr [esp + 4]
        push esi
        push edi
        sub esp, 34h
        mov edi, esp
        mov ecx, 0Dh
        lea esi, [esp + 4Ch]
        rep movsd
        mov ecx, dword ptr [esp + 44h]
        push eax
        push ecx
        push edx
        call ext_007D8970
        add esp, 40h
        pop edi
        pop esi
        ret
    }
}

extern "C" void ext_007D9680();

// [0x007D96C0] sub_007D96C0 (1333 bytes)
extern "C" __declspec(naked) void __fastcall fn_007D96C0(void* self) {
    __asm {
        push ecx
        mov ecx, [esp+0x28]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        xor edi, edi
        test ecx, ecx
        mov [esp+0x10], ebp
        je s_done
        mov eax, [esp+0x1c]
        mov ebx, [esp+0x28]
        mov esi, eax
        sub ebx, eax
        mov [esp+0x10], ecx
    s_loop:
        cmp dword ptr [ebx+esi], 0
        jle s_next
        mov ecx, [esi]
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax+2*eax]
        add eax, eax
        add eax, eax
        mov edx, ecx
        sub edx, eax
        mov eax, ecx
        je s_a
        sub eax, edx
        add eax, 0xc
    s_a:
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add ebp, eax
        mov eax, ecx
        and eax, 0x80000003
        jns s_b
        dec eax
        or eax, -4
        inc eax
    s_b:
        je s_c
        sub ecx, eax
        add ecx, 4
    s_c:
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add edi, eax
    s_next:
        add esi, 4
        sub dword ptr [esp+0x10], 1
        jne s_loop
        mov [esp+0x10], ebp
    s_done:
        mov eax, ebp
        and eax, 0x8000000f
        jns s_d
        dec eax
        or eax, -0x10
        inc eax
    s_d:
        je s_e
        sub ebp, eax
        add ebp, 0x10
    s_e:
        mov eax, edi
        and eax, 0x8000000f
        jns s_f
        dec eax
        or eax, -0x10
        inc eax
    s_f:
        mov ebx, edi
        je s_g
        sub ebx, eax
        add ebx, 0x10
    s_g:
        lea ecx, [4*edi]
        mov eax, ecx
        and eax, 0x8000000f
        jns s_h
        dec eax
        or eax, -0x10
        inc eax
    s_h:
        je s_i
        lea ecx, [4*edi+0x10]
        sub ecx, eax
    s_i:
        mov esi, [esp+0x18]
        lea eax, [edi+4*edi]
        add eax, eax
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, edi
        and edx, 0x80000001
        mov [esi+0x14], eax
        mov [esi+0x20], eax
        mov [esi+0x2c], ecx
        mov [esi+0x80], ebp
        mov [esi+0x98], ebx
        jns s_j
        dec edx
        or edx, -2
        inc edx
    s_j:
        mov ebx, edi
        je s_k
        sub ebx, edx
        add ebx, 2
    s_k:
        mov [esi+0xb0], ebx
        mov ebx, [esp+0x10]
        mov ebp, ebx
        and ebp, 0x80000001
        jns s_l
        dec ebp
        or ebp, -2
        inc ebp
    s_l:
        je s_m
        sub ebx, ebp
        add ebx, 2
    s_m:
        xor ebp, ebp
        cmp edx, ebp
        mov [esi+0x8c], ebx
        je s_n
        sub edi, edx
        add edi, 2
    s_n:
        mov edx, [esp+0x38]
        mov [esi+0xa4], edi
        mov edi, edx
        and edi, 0x8000000f
        jns s_o
        dec edi
        or edi, -0x10
        inc edi
    s_o:
        je s_p
        sub edx, edi
        add edx, 0x10
    s_p:
        mov edi, [esp+0x40]
        mov ebx, [esp+0x3c]
        mov [esi+0x38], ecx
        mov [esi+0x44], ecx
        mov [esi+0x50], ecx
        mov [esi+0x5c], ecx
        mov [esi+0x68], ecx
        mov [esi+0x74], ecx
        lea ecx, [eax+2*eax]
        push edi
        shl ecx, 6
        push 0x99e1dc
        add ecx, 0x40
        push ecx
        push ebx
        mov [esi+0x8], edx
        call ext_007D9680
        mov [esi+0xc], eax
        mov eax, [esi+0x20]
        lea edx, [eax+2*eax]
        push edi
        shl edx, 6
        push 0x99e1d8
        add edx, 0x40
        push edx
        push ebx
        call ext_007D9680
        mov [esi+0x18], eax
        mov eax, [esi+0x2c]
        lea edx, [4*eax]
        mov ecx, edx
        add esp, 0x20
        and ecx, 0x3f
        je s_q
        lea edx, [4*eax+0x40]
        sub edx, ecx
    s_q:
        push edi
        push 0x99df80
        add edx, 0x40
        push edx
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x80]
        mov [esi+0x24], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_r
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_r:
        push edi
        push 0x99e1c8
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov [esi+0x78], eax
        mov eax, [esi+0x98]
        lea edx, [4*eax]
        mov ecx, edx
        add esp, 0x10
        and ecx, 0x3f
        jne s_t
        mov eax, edx
        jmp s_u
    s_t:
        lea eax, [4*eax+0x40]
        sub eax, ecx
    s_u:
        push edi
        push 0x99e1c0
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0xb0]
        mov [esi+0x90], eax
        mov eax, ecx
        neg eax
        shl eax, 5
        add esp, 0x10
        and eax, 0x3f
        jne s_v
        shl ecx, 5
        jmp s_w
    s_v:
        add ecx, 2
        shl ecx, 5
        sub ecx, eax
    s_w:
        push edi
        push 0x99e1b4
        add ecx, 0x40
        push ecx
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x8c]
        mov [esi+0xa8], eax
        mov eax, ecx
        neg eax
        shl eax, 5
        add esp, 0x10
        and eax, 0x3f
        jne s_x
        shl ecx, 5
        jmp s_y
    s_x:
        add ecx, 2
        shl ecx, 5
        sub ecx, eax
    s_y:
        push edi
        push 0x99e1a0
        add ecx, 0x40
        push ecx
        push ebx
        call ext_007D9680
        mov ecx, [esi+0xa4]
        mov [esi+0x84], eax
        mov eax, ecx
        neg eax
        shl eax, 5
        add esp, 0x10
        and eax, 0x3f
        jne s_z
        shl ecx, 5
        jmp s_z2
    s_z:
        add ecx, 2
        shl ecx, 5
        sub ecx, eax
    s_z2:
        push edi
        push 0x99e198
        add ecx, 0x40
        push ecx
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x8]
        mov [esi+0x9c], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_a2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_a2:
        push edi
        push 0x99e17c
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x38]
        mov [esi], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_b2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_b2:
        push edi
        push 0x99e174
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x44]
        mov [esi+0x30], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_c2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_c2:
        push edi
        push 0x99e170
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x50]
        mov [esi+0x3c], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_d2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_d2:
        push edi
        push 0x99e16c
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x5c]
        mov [esi+0x48], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_e2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_e2:
        push edi
        push 0x98ce1c
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x68]
        mov [esi+0x54], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_f2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_f2:
        push edi
        push 0x98ce44
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0x74]
        mov [esi+0x60], eax
        lea eax, [4*ecx]
        mov edx, eax
        add esp, 0x10
        and edx, 0x3f
        je s_g2
        lea eax, [4*ecx+0x40]
        sub eax, edx
    s_g2:
        push edi
        push 0x99e160
        add eax, 0x40
        push eax
        push ebx
        call ext_007D9680
        mov ecx, [esi+0xc]
        mov edx, [esi+0x18]
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        mov [esi+0xc], ecx
        mov ecx, [esi+0x24]
        mov [esi+0x18], edx
        mov edx, [esi+0x78]
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        mov [esi+0x24], ecx
        mov ecx, [esi+0x90]
        mov [esi+0x78], edx
        mov edx, [esi+0xa8]
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        mov [esi+0x90], ecx
        mov ecx, [esi+0x84]
        mov [esi+0xa8], edx
        mov edx, [esi+0x9c]
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        mov [esi+0x84], ecx
        mov ecx, [esi]
        mov [esi+0x9c], edx
        mov edx, [esi+0x30]
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        mov [esi], ecx
        mov ecx, [esi+0x3c]
        mov [esi+0x30], edx
        mov edx, [esi+0x48]
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        mov [esi+0x3c], ecx
        mov ecx, [esi+0x54]
        mov [esi+0x48], edx
        mov edx, [esi+0x60]
        add esp, 0x10
        add ecx, 0x3f
        add edx, 0x3f
        and ecx, -0x40
        and edx, -0x40
        add eax, 0x3f
        pop edi
        and eax, -0x40
        mov [esi+0x10], ebp
        mov [esi+0x1c], ebp
        mov [esi+0x4], ebp
        mov [esi+0x28], ebp
        mov [esi+0x34], ebp
        mov [esi+0x40], ebp
        mov [esi+0x4c], ebp
        mov [esi+0x58], ebp
        mov [esi+0x64], ebp
        mov [esi+0x70], ebp
        mov [esi+0x54], ecx
        mov [esi+0x60], edx
        mov [esi+0x6c], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007DA2D0] sub_007DA2D0 (1345 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DA2D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0xbc
        mov eax, dword ptr [ebp + 0x10]
        fldz
        mov ecx, dword ptr [ebp + 0x8]
        push ebx
        mov ebx, dword ptr [ecx]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ebp + 0x18]
        test eax, eax
        push esi
        push edi
        je loc_007DA6DC
        mov edx, dword ptr [ebp + 0x14]
        add edx, 0x20
        mov dword ptr [esp + 0x1c], eax
    loc_007DA302:
        mov ecx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [ecx]
        test byte ptr [ecx + 0xc], 0x4
        je loc_007DA490
        fstp st(0)
        mov eax, edx
        fld dword ptr [ecx + 0x60]
        lea esi, [esp + 0xa8]
        fld dword ptr [ecx + 0x50]
        mov edi, 0x3
        fld dword ptr [ecx + 0x70]
        fstp qword ptr [esp + 0x28]
        fld dword ptr [ecx + 0x64]
        fstp qword ptr [esp + 0x40]
        fld dword ptr [ecx + 0x54]
        fstp qword ptr [esp + 0x30]
        fld dword ptr [ecx + 0x74]
        fstp qword ptr [esp + 0x38]
        fld dword ptr [ecx + 0x68]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x58]
        fstp qword ptr [esp + 0x20]
        fld dword ptr [ecx + 0x78]
        fstp qword ptr [esp + 0x48]
    loc_007DA359:
        fld dword ptr [eax - 0x10]
        add eax, 0x4
        fld dword ptr [eax - 0x24]
        add esi, 0xc
        sub edi, 0x1
        fld dword ptr [eax - 0x4]
        fld st(1)
        fmul st, st(4)
        fld st(3)
        fmul st, st(6)
        faddp st(1), st
        fld st(1)
        fmul qword ptr [esp + 0x28]
        faddp st(1), st
        fstp dword ptr [esi - 0x10]
        fld st(1)
        fmul qword ptr [esp + 0x30]
        fld st(3)
        fmul qword ptr [esp + 0x40]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [esp + 0x38]
        faddp st(1), st
        fstp dword ptr [esi - 0xc]
        fxch st(1)
        fmul qword ptr [esp + 0x20]
        fxch st(2)
        fmul qword ptr [esp + 0x10]
        faddp st(2), st
        fmul qword ptr [esp + 0x48]
        faddp st(1), st
        fstp dword ptr [esi - 0x8]
        jne loc_007DA359
        fstp st(1)
        lea eax, [esp + 0xa4]
        fstp st(0)
        lea esi, [esp + 0x84]
        fld dword ptr [edx - 0x10]
        mov edi, 0x3
        fld dword ptr [edx - 0x20]
        fld dword ptr [edx]
        fstp qword ptr [esp + 0x38]
        fld dword ptr [edx - 0xc]
        fstp qword ptr [esp + 0x40]
        fld dword ptr [edx - 0x1c]
        fstp qword ptr [esp + 0x48]
        fld dword ptr [edx + 0x4]
        fstp qword ptr [esp + 0x30]
        fld dword ptr [edx - 0x8]
        fstp qword ptr [esp + 0x10]
        fld dword ptr [edx - 0x18]
        fstp qword ptr [esp + 0x28]
        fld dword ptr [edx + 0x8]
        fstp qword ptr [esp + 0x20]
    loc_007DA3FF:
        fld dword ptr [eax + 0x4]
        add eax, 0xc
        fld dword ptr [eax - 0xc]
        add esi, 0xc
        sub edi, 0x1
        fld dword ptr [eax - 0x4]
        fld st(2)
        fmul st, st(5)
        fld st(2)
        fmul st, st(5)
        faddp st(1), st
        fld st(1)
        fmul qword ptr [esp + 0x38]
        faddp st(1), st
        fstp dword ptr [esi - 0x10]
        fld st(2)
        fmul qword ptr [esp + 0x40]
        fld st(2)
        fmul qword ptr [esp + 0x48]
        faddp st(1), st
        fld st(1)
        fmul qword ptr [esp + 0x30]
        faddp st(1), st
        fstp dword ptr [esi - 0xc]
        fxch st(2)
        fmul qword ptr [esp + 0x10]
        fxch st(1)
        fmul qword ptr [esp + 0x28]
        faddp st(1), st
        fxch st(1)
        fmul qword ptr [esp + 0x20]
        faddp st(1), st
        fstp dword ptr [esi - 0x8]
        jne loc_007DA3FF
        fstp st(1)
        xor eax, eax
        fstp st(0)
        lea esi, [ebx + 0x20]
    loc_007DA463:
        fld dword ptr [esp + 4*eax + 0x80]
        add eax, 0x1
        fstp dword ptr [esi - 0x20]
        add esi, 0x4
        cmp eax, 0x3
        fld dword ptr [esp + 4*eax + 0x88]
        fstp dword ptr [esi - 0x14]
        fld dword ptr [esp + 4*eax + 0x94]
        fstp dword ptr [esi - 0x4]
        jl loc_007DA463
        fldz
        jmp loc_007DA4FE
    loc_007DA490:
        fld dword ptr [ecx + 0x80]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0x94]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp loc_007DA4B7
        fld dword ptr [ecx + 0x94]
        fstp dword ptr [esp + 0x10]
    loc_007DA4B7:
        fld dword ptr [ecx + 0xa8]
        fld dword ptr [esp + 0x10]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp loc_007DA4D4
        fld dword ptr [ecx + 0xa8]
        fstp dword ptr [esp + 0x10]
    loc_007DA4D4:
        fld dword ptr [esp + 0x10]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fst dword ptr [ebx + 0x28]
        fst dword ptr [ebx + 0x14]
        fstp dword ptr [ebx]
        fst dword ptr [ebx + 0x24]
        fst dword ptr [ebx + 0x20]
        fst dword ptr [ebx + 0x18]
        fst dword ptr [ebx + 0x10]
        fst dword ptr [ebx + 0x8]
        fst dword ptr [ebx + 0x4]
    loc_007DA4FE:
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [ebx + 0xc]
        fst dword ptr [ebx + 0x2c]
        fst dword ptr [ebx + 0x1c]
        test byte ptr [ecx + 0xc], 0x8
        je loc_007DA6C0
        fstp st(0)
        fld dword ptr [ecx + 0xc4]
        fld dword ptr [edx - 0x1c]
        fld dword ptr [ecx + 0xc0]
        fld dword ptr [edx - 0x20]
        fld dword ptr [ecx + 0xc8]
        fld dword ptr [edx - 0x18]
        fst qword ptr [esp + 0x28]
        fld st(5)
        fmul st, st(5)
        fld st(4)
        fmul st, st(4)
        faddp st(1), st
        fld st(2)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x50]
        fld dword ptr [edx - 0xc]
        fst qword ptr [esp + 0x40]
        fld dword ptr [edx - 0x10]
        fst qword ptr [esp + 0x48]
        fld dword ptr [edx - 0x8]
        fstp qword ptr [esp + 0x10]
        fld st(6)
        fmulp st(2), st
        fmul st, st(4)
        faddp st(1), st
        fld st(1)
        fmul qword ptr [esp + 0x10]
        faddp st(1), st
        fstp dword ptr [esp + 0x54]
        fld dword ptr [edx + 0x4]
        fst qword ptr [esp + 0x30]
        fld dword ptr [edx]
        fst qword ptr [esp + 0x38]
        fld dword ptr [edx + 0x8]
        fstp qword ptr [esp + 0x20]
        fmul st, st(4)
        fxch st(6)
        fmulp st(1), st
        faddp st(5), st
        fmul qword ptr [esp + 0x20]
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x58]
        fld dword ptr [ecx + 0x80]
        fmul st, st(2)
        fld dword ptr [ecx + 0x90]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [ecx + 0xa0]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x68]
        fld dword ptr [ecx + 0x84]
        fmul st, st(2)
        fld dword ptr [ecx + 0x94]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [ecx + 0xa4]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x6c]
        fld dword ptr [ecx + 0x88]
        fmulp st(2), st
        fld dword ptr [ecx + 0x98]
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul dword ptr [ecx + 0xa8]
        faddp st(1), st
        fstp dword ptr [esp + 0x70]
        fld dword ptr [esp + 0x6c]
        fld dword ptr [esp + 0x68]
        fld dword ptr [esp + 0x70]
        fld st(1)
        fmulp st(6), st
        fld st(2)
        fmul qword ptr [esp + 0x48]
        faddp st(6), st
        fld qword ptr [esp + 0x38]
        fmul st, st(1)
        faddp st(6), st
        fxch st(5)
        fstp dword ptr [esp + 0x74]
        fld st(0)
        fmulp st(4), st
        fld st(1)
        fmul qword ptr [esp + 0x40]
        faddp st(4), st
        fld st(4)
        fmul qword ptr [esp + 0x30]
        faddp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x78]
        fxch st(2)
        fmul qword ptr [esp + 0x28]
        fxch st(2)
        fmul qword ptr [esp + 0x10]
        faddp st(2), st
        fxch st(2)
        fmul qword ptr [esp + 0x20]
        faddp st(1), st
        fstp dword ptr [esp + 0x7c]
        fld dword ptr [ecx + 0xc8]
        fld dword ptr [esp + 0x78]
        fld dword ptr [ecx + 0xc4]
        fld dword ptr [esp + 0x7c]
        fld st(2)
        fmul st, st(4)
        fld st(1)
        fmul st, st(3)
        fsubp st(1), st
        fstp dword ptr [esp + 0x5c]
        fld dword ptr [esp + 0x74]
        fxch st(1)
        fmul st, st(5)
        fld st(1)
        fmulp st(5), st
        fsubrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x60]
        fmulp st(2), st
        fmulp st(2), st
        fsubrp st(1), st
        fstp dword ptr [esp + 0x64]
        fld dword ptr [ecx + 0x20]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [ecx + 0x20]
        fld dword ptr [ecx + 0x24]
        fadd dword ptr [esp + 0x60]
        fstp dword ptr [ecx + 0x24]
        fld dword ptr [esp + 0x64]
        fadd dword ptr [ecx + 0x28]
        fstp dword ptr [ecx + 0x28]
        fldz
    loc_007DA6C0:
        add dword ptr [esp + 0x18], 0x4
        add edx, 0x40
        add ebx, 0x30
        sub dword ptr [esp + 0x1c], 0x1
        jne loc_007DA302
        mov ecx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + 0x18]
    loc_007DA6DC:
        fld dword ptr [ebp + 0x1c]
        mov ebx, dword ptr [ebp + 0xc]
        fld1
        mov edi, dword ptr [ebx]
        fdivrp st(1), st
        mov esi, dword ptr [ecx]
        xor edx, edx
        test eax, eax
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x18], edx
        fstp dword ptr [esp + 0x1c]
        je loc_007DA802
        fld dword ptr [esp + 0x1c]
        lea ebx, [edi + 0x10]
        jmp loc_007DA713
    loc_007DA709:
        mov edi, dword ptr [esp + 0x10]
        fxch st(1)
        mov edx, dword ptr [esp + 0x18]
    loc_007DA713:
        mov eax, dword ptr [ebp + 0x10]
        mov eax, dword ptr [eax + 4*edx]
        xor ecx, ecx
        add eax, 0xb0
    loc_007DA720:
        fld dword ptr [eax - 0xa0]
        add ecx, 0x1
        fmul dword ptr [esi + 0xc]
        add eax, 0x4
        cmp ecx, 0x3
        fld dword ptr [eax - 0x4]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [edi + 4*ecx - 0x4]
        jne loc_007DA720
        mov ecx, dword ptr [ebp + 0x10]
        fxch st(1)
        mov edx, dword ptr [ecx + 4*edx]
        fst dword ptr [ebx - 0x4]
        mov ecx, ebx
        lea eax, [edx + 0xc0]
        mov edi, 0x3
    loc_007DA757:
        fld dword ptr [eax]
        add eax, 0x4
        fmul st, st(2)
        add ecx, 0x4
        sub edi, 0x1
        fstp dword ptr [ecx - 0x4]
        jne loc_007DA757
        xor eax, eax
        mov ecx, ebx
    loc_007DA76D:
        fld dword ptr [esi + 4*eax]
        add eax, 0x1
        fmul dword ptr [edx + 0x20]
        add ecx, 0x4
        cmp eax, 0x3
        fadd dword ptr [ecx - 0x4]
        fstp dword ptr [ecx - 0x4]
        jne loc_007DA76D
        mov ecx, esi
        sub ecx, dword ptr [esp + 0x10]
        mov eax, ebx
        mov edi, 0x3
    loc_007DA791:
        fld dword ptr [ecx + eax]
        add eax, 0x4
        sub edi, 0x1
        fmul dword ptr [edx + 0x24]
        fadd dword ptr [eax - 0x4]
        fstp dword ptr [eax - 0x4]
        jne loc_007DA791
        mov eax, ebx
        lea ecx, [esi + 0x20]
        mov edi, 0x3
    loc_007DA7AF:
        fld dword ptr [edx + 0x28]
        add ecx, 0x4
        fmul dword ptr [ecx - 0x4]
        add eax, 0x4
        sub edi, 0x1
        fadd dword ptr [eax - 0x4]
        fstp dword ptr [eax - 0x4]
        jne loc_007DA7AF
        mov eax, dword ptr [esp + 0x18]
        fst dword ptr [ebx + 0xc]
        add dword ptr [esp + 0x10], 0x20
        add eax, 0x1
        add ebx, 0x20
        add esi, 0x30
        cmp eax, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0x18], eax
        jne loc_007DA709
        mov eax, dword ptr [ebp + 0x18]
        fstp st(0)
        mov edx, dword ptr [ebp + 0xc]
        fstp st(0)
        mov ecx, dword ptr [ebp + 0x8]
        mov dword ptr [edx + 0x4], eax
        mov dword ptr [ecx + 0x4], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    loc_007DA802:
        pop edi
        fstp st(0)
        mov dword ptr [ebx + 0x4], eax
        pop esi
        mov dword ptr [ecx + 0x4], eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_007E46B0();
extern "C" void ext_007F7000();

// [0x007DF670] sub_007DF670 (389 bytes)
extern "C" __declspec(naked) void __fastcall fn_007DF670(void* self) {
    __asm {
        fldz
        mov     edx, dword ptr [esp + 8]
        xor     eax, eax
        mov     dword ptr [ebx + 0x1c], eax
        mov     dword ptr [ebx + 0xc], eax
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ebx + 8], eax
        fst     dword ptr [ebx + 0x10]
        fst     dword ptr [ebx + 0x14]
        sub     esp, 0xc
        fstp    dword ptr [ebx + 0x18]
        mov     ecx, dword ptr [edx + 8]
        cmp     ecx, 1
        mov     eax, dword ptr [edx + 4]
        push    esi
        push    edi
        jne     L_7df6a9
        mov     esi, dword ptr [eax + 0x44]
        mov     eax, dword ptr [eax + 0x40]
        jmp     L_7df6be
    L_7df6a9:
        mov     eax, dword ptr [eax + 0x50]
        mov     esi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esi + 0x38]
        lea     eax, [eax + eax*2]
        lea     eax, [esi + eax*4]
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [eax + 4]
    L_7df6be:
        lea     ecx, [ecx + ecx*2]
        mov     dword ptr [esp + 0x10], esi
        mov     esi, dword ptr [edx + 4]
        shl     ecx, 5
        add     ecx, esi
        cmp     esi, ecx
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 8], esi
        jae     L_7df7aa
        fld     qword ptr [mem_00993830]
        lea     ecx, [esi + 0x38]
        push    ebp
    L_7df6e7:
        cmp     dword ptr [ecx + 4], 0
        je      L_7df789
        xor     edi, edi
        mov     dword ptr [ebx + 0x1c], 1
        cmp     dword ptr [ecx + 8], edi
        jle     L_7df76f
        xor     ebp, ebp
    L_7df701:
        mov     eax, dword ptr [ecx + 0xc]
        add     eax, ebp
        test    byte ptr [ecx + 0x1c], 2
        je      L_7df712
        mov     esi, dword ptr [ecx + 0x10]
        mov     dword ptr [eax + 0x20], esi
    L_7df712:
        test    byte ptr [ecx + 0x1c], 4
        je      L_7df71e
        mov     esi, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x24], esi
    L_7df71e:
        test    byte ptr [ecx + 0x1c], 1
        je      L_7df760
        mov     edx, dword ptr [eax + 0x20]
        mov     esi, dword ptr [eax + 0x24]
        mov     dword ptr [eax + 0x24], edx
        movzx   edx, word ptr [eax + 0x1c]
        mov     dword ptr [eax + 0x20], esi
        mov     esi, edx
        sar     dx, 8
        shl     esi, 8
        add     si, dx
        mov     edx, dword ptr [esp + 0x20]
        mov     word ptr [eax + 0x1c], si
        fld     dword ptr [eax + 0xc]
        fmul    st, st(1)
        fstp    dword ptr [eax + 0xc]
        fld     dword ptr [eax + 0x10]
        fmul    st, st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [eax + 0x14]
        fmul    st, st(1)
        fstp    dword ptr [eax + 0x14]
    L_7df760:
        add     edi, 1
        add     ebp, 0x28
        cmp     edi, dword ptr [ecx + 8]
        jl      L_7df701
        mov     esi, dword ptr [esp + 0xc]
    L_7df76f:
        fld     dword ptr [ecx - 8]
        fadd    dword ptr [ebx + 0x10]
        fstp    dword ptr [ebx + 0x10]
        fld     dword ptr [ecx - 4]
        fadd    dword ptr [ebx + 0x14]
        fstp    dword ptr [ebx + 0x14]
        fld     dword ptr [ebx + 0x18]
        fadd    dword ptr [ecx]
        fstp    dword ptr [ebx + 0x18]
    L_7df789:
        mov     eax, dword ptr [edx + 8]
        lea     eax, [eax + eax*2]
        shl     eax, 5
        add     eax, dword ptr [edx + 4]
        add     esi, 0x60
        add     ecx, 0x60
        cmp     esi, eax
        mov     dword ptr [esp + 0xc], esi
        jb      L_7df6e7
        fstp    st(0)
        pop     ebp
    L_7df7aa:
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        jle     L_7df7ef
        lea     esi, [ebx + 0x10]
        call    ext_007E46B0
        fstp    st(0)
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edx + 8]
        fld     dword ptr [ecx + 0xa0]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [ebx + 4]
        fstp    dword ptr [esp]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edi
        push    edx
        push    esi
        call    ext_007F7000
        add     esp, 0x1c
        mov     dword ptr [ebx + 0xc], eax
    L_7df7ef:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }
}

// [0x007DC220] sub_007DC220 (544 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_006A6EF8();
extern "C" void ext_006A7270();
extern "C" void ext_006A745E();
extern "C" void ext_007C6F20();
extern "C" void ext_007C6F60();
extern "C" void ext_007D5AE0();
extern "C" void ext_007D5BD0();
extern "C" void ext_007DEB50();
extern "C" void ext_007E46B0();
extern "C" void ext_007F6420();
extern "C" int mem_00AA7E40;

extern "C" __declspec(naked) void __fastcall fn_007DC220(void* self) {
    __asm {
        push    ebp
        lea     ebp, [esp - 0x70]
        mov     eax, 0x3f6c
        call    ext_006A7270
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp + 0x6c], eax
        push    ebx
        push    esi
        push    edi
        mov     eax, 0x50
        call    ext_006A6EC0
        mov     ebx, dword ptr [ebp + 0x78]
        mov     eax, esp
        add     eax, 0xf
        and     eax, -0x10
        mov     dword ptr [ebp + 0x44], eax
        mov     eax, dword ptr [ebx]
        push    eax
        call    ext_007C6F60
        push    eax
        mov     dword ptr [ebp + 0x50], eax
        call    ext_007D5AE0
        xor     ecx, ecx
        mov     dword ptr [ebp + 0x54], eax
        mov     eax, dword ptr [ebp + 0x7c]
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [ebx + 0x4]
        mov     edx, dword ptr [ebx + 0xc]
        mov     dword ptr [ebp + 0x68], ecx
        mov     ecx, 0x20
        lea     edi, [ebp - 0x7c]
        rep     movsd
        lea     ecx, [ebp - 0x7c]
        mov     dword ptr [ebp + 0x4], ecx
        lea     ecx, [ebp + 0x4]
        push    eax
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0x10], edx
        mov     dword ptr [ebp + 0x24], ecx
        call    ext_007C6F60
        mov     ecx, dword ptr [ebp + 0x54]
        fldz
        mov     edx, dword ptr [ebp + 0x50]
        mov     ebx, dword ptr [edx + 0x34]
        fst     dword ptr [ebp + 0x5c]
        mov     dword ptr [ebp + 0x48], eax
        fst     dword ptr [ebp + 0x60]
        xor     eax, eax
        fstp    dword ptr [ebp + 0x64]
        add     esp, 0xc
        cmp     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ebp + 0x4c], eax
        jle     L_7dc3dc
        mov     dword ptr [ebp + 0x58], eax
    L_7dc2cb:
        mov     ecx, dword ptr [ecx + 0x14]
        cmp     dword ptr [ecx + 4*eax], 0x0
        je      L_7dc3c0
        mov     edx, dword ptr [ebp + 0x48]
        push    ebx
        push    edx
        call    ext_007D5BD0
        add     esp, 0x8
        test    eax, eax
        je      L_7dc3c0
        mov     ecx, 0xe
        mov     esi, ebx
        lea     edi, [ebp - 0x38]
        rep     movsd
        cmp     dword ptr [ebp - 0x34], 0x0
        jne     L_7dc319
        mov     edx, dword ptr [ebp + 0x44]
        mov     eax, dword ptr [ebp + 0x54]
        mov     ecx, dword ptr [ebp + 0x50]
        mov     dword ptr [ebp - 0x34], edx
        mov     eax, dword ptr [eax + 0x10]
        add     eax, dword ptr [ebp + 0x58]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_007DEB50
    L_7dc319:
        mov     esi, dword ptr [ebp + 0x68]
        lea     edx, [esi + 4*esi]
        lea     eax, [ebp + 8*edx - 0x3efc]
        lea     edx, [ebp + 0x24]
        mov     dword ptr [ebp + 0x28], eax
        mov     ecx, 0x190
        push    edx
        lea     eax, [ebp + 0x4]
        sub     ecx, esi
        push    eax
        mov     dword ptr [ebp + 0x40], 0x0
        mov     dword ptr [ebp + 0x2c], ecx
        call    ext_007F6420
        add     esp, 0x8
        cmp     dword ptr [ebp + 0x40], 0x0
        je      L_7dc3c0
        mov     ecx, dword ptr [ebp + 0x7c]
        lea     edx, [ebp - 0x7c]
        push    edx
        mov     dword ptr [ecx + 0x1c], 0x1
        call    ext_007C6F20
        movzx   eax, ax
        add     esp, 0x4
        cmp     ax, 0x6
        je      L_7dc392
        cmp     ax, 0x8
        je      L_7dc392
        xor     eax, eax
        cmp     dword ptr [ebp + 0x30], eax
        jle     L_7dc392
        xor     ecx, ecx
        mov     edi, edi
    L_7dc380:
        mov     edx, dword ptr [ebp + 0x28]
        mov     dword ptr [ecx + edx + 0x20], ebx
        add     eax, 0x1
        add     ecx, 0x28
        cmp     eax, dword ptr [ebp + 0x30]
        jl      L_7dc380
    L_7dc392:
        fild    dword ptr [ebp + 0x30]
        add     esi, dword ptr [ebp + 0x30]
        fstp    dword ptr [ebp + 0x68]
        fld     dword ptr [ebp + 0x68]
        mov     dword ptr [ebp + 0x68], esi
        fld     st(0)
        fmul    dword ptr [ebp + 0x34]
        fadd    dword ptr [ebp + 0x5c]
        fstp    dword ptr [ebp + 0x5c]
        fld     dword ptr [ebp + 0x38]
        fmul    st, st(1)
        fadd    dword ptr [ebp + 0x60]
        fstp    dword ptr [ebp + 0x60]
        fmul    dword ptr [ebp + 0x3c]
        fadd    dword ptr [ebp + 0x64]
        fstp    dword ptr [ebp + 0x64]
    L_7dc3c0:
        mov     eax, dword ptr [ebp + 0x4c]
        mov     ecx, dword ptr [ebp + 0x54]
        add     dword ptr [ebp + 0x58], 0x40
        mov     ebx, dword ptr [ebx + 0x2c]
        add     eax, 0x1
        cmp     eax, dword ptr [ecx + 0x1c]
        mov     dword ptr [ebp + 0x4c], eax
        jl      L_7dc2cb
    L_7dc3dc:
        lea     esi, [ebp + 0x5c]
        call    ext_007E46B0
        fstp    st(0)
        mov     esi, dword ptr [ebp + 0x7c]
        fld     dword ptr [ebp + 0x5c]
        mov     eax, dword ptr [ebp + 0x68]
        fstp    dword ptr [esi + 0x10]
        fld     dword ptr [ebp + 0x60]
        fstp    dword ptr [esi + 0x14]
        fld     dword ptr [ebp + 0x64]
        fstp    dword ptr [esi + 0x18]
        cmp     eax, dword ptr [esi + 0xc]
        jle     L_7dc406
        mov     dword ptr [esi + 0xc], eax
    L_7dc406:
        mov     edx, dword ptr [esi + 0x4]
        lea     eax, [eax + 4*eax]
        add     eax, eax
        add     eax, eax
        add     eax, eax
        push    eax
        lea     ecx, [ebp - 0x3efc]
        push    ecx
        push    edx
        call    ext_006A6EF8
        mov     eax, dword ptr [esi + 0x1c]
        add     esp, 0xc
        lea     esp, [ebp - 0x3f08]
        pop     edi
        pop     esi
        pop     ebx
        mov     ecx, dword ptr [ebp + 0x6c]
        xor     ecx, ebp
        call    ext_006A745E
        add     ebp, 0x70
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x007DF800] sub_007DF800 (576 bytes)
extern "C" void ext_006A6EF8();
extern "C" void ext_007C89F0();
extern "C" void ext_007D58E0();
extern "C" void ext_007DEC00();
extern "C" void ext_007DF670();
extern "C" void ext_007F7000();

extern "C" __declspec(naked) void __cdecl fn_007DF800() {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebp + 0x48]
        cmp     eax, dword ptr [ebp + 0x34]
        push    esi
        push    edi
        jge     L_7DF959
    L_7DF815:
        mov     eax, dword ptr [ebp + 0x48]
        mov     edx, dword ptr [ebp + 0x2c]
        lea     ecx, [eax + eax*4]
        cmp     dword ptr [edx + ecx*4 + 0x10], 2
        lea     ecx, [edx + ecx*4]
        mov     dword ptr [esp + 0x10], ecx
        jne     L_7DF949
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esp + 0x24]
        mov     edi, dword ptr [ecx + 4]
        mov     dword ptr [esp + 0x18], edx
        jge     L_7DF9FE
        mov     esi, dword ptr [edx]
        mov     ebx, dword ptr [esp + 0x2c]
        add     esi, dword ptr [ebx]
        cmp     esi, dword ptr [esp + 0x30]
        jge     L_7DF9FE
        mov     ebx, dword ptr [esp + 0x20]
        mov     esi, eax
        add     eax, 1
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [ecx]
        mov     ebx, dword ptr [esp + 0x28]
        shl     esi, 5
        add     esi, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [eax]
        lea     eax, [eax + eax*4]
        lea     eax, [ebx + eax*8]
        mov     dword ptr [esi + 4], eax
        mov     edx, dword ptr [edx]
        mov     dword ptr [esi + 8], edx
        cmp     dword ptr [edi + 0x3c], 0
        je      L_7DF942
        mov     dword ptr [esi + 0x1c], 1
        fld     dword ptr [edi + 0x30]
        fstp    dword ptr [esi + 0x10]
        lea     ebx, [esi + 0x10]
        fld     dword ptr [edi + 0x34]
        fstp    dword ptr [ebx + 4]
        fld     dword ptr [edi + 0x38]
        fstp    dword ptr [ebx + 8]
        movzx   eax, word ptr [edi + 0x2c]
        movzx   ecx, word ptr [edi + 0x14]
        mov     edx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        push    edx
        call    ext_007C89F0
        add     esp, 0xc
        cmp     dword ptr [eax + 0x10], 0
        je      L_7DF908
        mov     eax, dword ptr [ebp + 8]
        fld     dword ptr [eax + 0xa0]
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [eax + 4]
        fstp    dword ptr [esp]
        mov     eax, dword ptr [esi + 4]
        push    ecx
        mov     ecx, dword ptr [edi + 0x40]
        push    edx
        mov     edx, dword ptr [edi + 0x44]
        push    eax
        push    ecx
        push    edx
        push    ebx
        call    ext_007F7000
        add     esp, 0x1c
        mov     dword ptr [esi + 0xc], eax
        jmp     L_7DF928
    L_7DF908:
        mov     eax, dword ptr [edi + 0x40]
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esi + 0xc], eax
        mov     ecx, dword ptr [edi + 0x44]
        lea     eax, [eax + eax*4]
        add     eax, eax
        add     eax, eax
        add     eax, eax
        push    eax
        push    ecx
        push    edx
        call    ext_006A6EF8
        add     esp, 0xc
    L_7DF928:
        test    byte ptr [edi + 0x54], 1
        je      L_7DF935
        mov     edx, esi
        call    ext_007DEC00
    L_7DF935:
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0x2c]
        add     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x10]
    L_7DF942:
        mov     dword ptr [ecx + 0x10], 3
    L_7DF949:
        add     dword ptr [ebp + 0x48], 1
        mov     edx, dword ptr [ebp + 0x48]
        cmp     edx, dword ptr [ebp + 0x34]
        jl      L_7DF815
    L_7DF959:
        mov     edx, dword ptr [ebp + 0x4c]
        cmp     edx, dword ptr [ebp + 0x34]
        jge     L_7DF9F3
    L_7DF965:
        mov     eax, dword ptr [ebp + 0x4c]
        mov     ecx, dword ptr [ebp + 0x2c]
        lea     eax, [eax + eax*4]
        cmp     dword ptr [ecx + eax*4 + 0x10], 0x12
        lea     esi, [ecx + eax*4]
        jne     L_7DF9E3
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        cmp     eax, dword ptr [esp + 0x24]
        je      L_7DFA1F
        mov     edx, dword ptr [esi]
        mov     edx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edx]
        mov     edi, dword ptr [esp + 0x2c]
        add     edx, dword ptr [edi]
        cmp     edx, dword ptr [esp + 0x30]
        jge     L_7DFA1F
        mov     ebx, eax
        add     eax, 1
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esi]
        shl     ebx, 5
        add     ebx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 0x1c], ecx
        mov     dword ptr [ebx + 0xc], ecx
        mov     eax, dword ptr [edi]
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [esp + 0x28]
        lea     edx, [eax + edx*8]
        mov     dword ptr [ebx + 4], edx
        cmp     dword ptr [esi + 8], ecx
        je      L_7DF9DC
        push    esi
        push    ebp
        call    ext_007DF670
        mov     eax, dword ptr [ebx + 0xc]
        add     esp, 8
        add     dword ptr [edi], eax
    L_7DF9DC:
        mov     dword ptr [esi + 0x10], 0x13
    L_7DF9E3:
        add     dword ptr [ebp + 0x4c], 1
        mov     ecx, dword ptr [ebp + 0x4c]
        cmp     ecx, dword ptr [ebp + 0x34]
        jl      L_7DF965
    L_7DF9F3:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        pop     ecx
        ret
    L_7DF9FE:
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax + 0xb0]
        push    0x99ec1c
        push    ecx
        push    0
        call    ext_007D58E0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret
    L_7DFA1F:
        mov     edx, dword ptr [ebp + 8]
        mov     eax, dword ptr [edx + 0xb0]
        push    0x99ec1c
        push    eax
        push    0
        call    ext_007D58E0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret
    }
}

// [0x007D9C60] sub_007D9C60 (1462 bytes)
extern "C" __declspec(naked) void __fastcall fn_007D9C60(void* self) {
    __asm {
    L_007d9c60: mov	ecx, dword ptr [esp + 0x4]
    L_007d9c64: mov	eax, ecx
    L_007d9c66: sub	esp, 0x88
    L_007d9c6c: and	eax, 0x80000003
    L_007d9c71: jns	L_007d9c78
    L_007d9c73: dec	eax
    L_007d9c74: or	eax, -0x4
    L_007d9c77: inc	eax
    L_007d9c78: jne	L_007d9c80
    L_007d9c7a: mov	dword ptr [esp + 0xc], ecx
    L_007d9c7e: jmp	L_007d9c8b
    L_007d9c80: mov	edx, ecx
    L_007d9c82: sub	edx, eax
    L_007d9c84: add	edx, 0x4
    L_007d9c87: mov	dword ptr [esp + 0xc], edx
    L_007d9c8b: mov	eax, 0x2aaaaaab
    L_007d9c90: imul	ecx
    L_007d9c92: sar	edx, 1
    L_007d9c94: mov	eax, edx
    L_007d9c96: shr	eax, 0x1f
    L_007d9c99: add	eax, edx
    L_007d9c9b: lea	eax, [eax + 2*eax]
    L_007d9c9e: add	eax, eax
    L_007d9ca0: add	eax, eax
    L_007d9ca2: mov	edx, ecx
    L_007d9ca4: sub	edx, eax
    L_007d9ca6: mov	eax, ecx
    L_007d9ca8: je	L_007d9caf
    L_007d9caa: sub	eax, edx
    L_007d9cac: add	eax, 0xc
    L_007d9caf: and	eax, 0x8000000f
    L_007d9cb4: jns	L_007d9cbb
    L_007d9cb6: dec	eax
    L_007d9cb7: or	eax, -0x10
    L_007d9cba: inc	eax
    L_007d9cbb: jne	L_007d9cd2
    L_007d9cbd: test	edx, edx
    L_007d9cbf: jne	L_007d9cc7
    L_007d9cc1: mov	dword ptr [esp + 0x4], ecx
    L_007d9cc5: jmp	L_007d9cfc
    L_007d9cc7: sub	ecx, edx
    L_007d9cc9: add	ecx, 0xc
    L_007d9ccc: mov	dword ptr [esp + 0x4], ecx
    L_007d9cd0: jmp	L_007d9cfc
    L_007d9cd2: test	edx, edx
    L_007d9cd4: mov	eax, ecx
    L_007d9cd6: je	L_007d9ce6
    L_007d9cd8: sub	eax, edx
    L_007d9cda: add	eax, 0xc
    L_007d9cdd: test	edx, edx
    L_007d9cdf: je	L_007d9ce6
    L_007d9ce1: sub	ecx, edx
    L_007d9ce3: add	ecx, 0xc
    L_007d9ce6: and	ecx, 0x8000000f
    L_007d9cec: jns	L_007d9cf3
    L_007d9cee: dec	ecx
    L_007d9cef: or	ecx, -0x10
    L_007d9cf2: inc	ecx
    L_007d9cf3: sub	eax, ecx
    L_007d9cf5: add	eax, 0x10
    L_007d9cf8: mov	dword ptr [esp + 0x4], eax
    L_007d9cfc: mov	ecx, dword ptr [esp + 0x98]
    L_007d9d03: push	ebx
    L_007d9d04: push	ebp
    L_007d9d05: mov	eax, ecx
    L_007d9d07: and	eax, 0x8000000f
    L_007d9d0c: push	esi
    L_007d9d0d: push	edi
    L_007d9d0e: jns	L_007d9d15
    L_007d9d10: dec	eax
    L_007d9d11: or	eax, -0x10
    L_007d9d14: inc	eax
    L_007d9d15: mov	edi, ecx
    L_007d9d17: je	L_007d9d1e
    L_007d9d19: sub	edi, eax
    L_007d9d1b: add	edi, 0x10
    L_007d9d1e: mov	eax, dword ptr [esp + 0xac]
    L_007d9d25: mov	edx, eax
    L_007d9d27: and	edx, 0x8000000f
    L_007d9d2d: jns	L_007d9d34
    L_007d9d2f: dec	edx
    L_007d9d30: or	edx, -0x10
    L_007d9d33: inc	edx
    L_007d9d34: mov	ebp, eax
    L_007d9d36: je	L_007d9d3d
    L_007d9d38: sub	ebp, edx
    L_007d9d3a: add	ebp, 0x10
    L_007d9d3d: lea	esi, [4*eax]
    L_007d9d44: mov	edx, esi
    L_007d9d46: and	edx, 0x8000000f
    L_007d9d4c: jns	L_007d9d53
    L_007d9d4e: dec	edx
    L_007d9d4f: or	edx, -0x10
    L_007d9d52: inc	edx
    L_007d9d53: je	L_007d9d5e
    L_007d9d55: lea	esi, [4*eax + 0x10]
    L_007d9d5c: sub	esi, edx
    L_007d9d5e: mov	edx, ecx
    L_007d9d60: and	edx, 0x80000001
    L_007d9d66: mov	dword ptr [esp + 0x10], esi
    L_007d9d6a: jns	L_007d9d71
    L_007d9d6c: dec	edx
    L_007d9d6d: or	edx, -0x2
    L_007d9d70: inc	edx
    L_007d9d71: je	L_007d9d78
    L_007d9d73: sub	ecx, edx
    L_007d9d75: add	ecx, 0x2
    L_007d9d78: mov	ebx, ecx
    L_007d9d7a: mov	ecx, eax
    L_007d9d7c: and	ecx, 0x80000001
    L_007d9d82: jns	L_007d9d89
    L_007d9d84: dec	ecx
    L_007d9d85: or	ecx, -0x2
    L_007d9d88: inc	ecx
    L_007d9d89: mov	esi, eax
    L_007d9d8b: je	L_007d9d92
    L_007d9d8d: sub	esi, ecx
    L_007d9d8f: add	esi, 0x2
    L_007d9d92: mov	ecx, dword ptr [esp + 0xa4]
    L_007d9d99: lea	eax, [eax + 4*eax]
    L_007d9d9c: add	eax, eax
    L_007d9d9e: cdq
    L_007d9d9f: sub	eax, edx
    L_007d9da1: mov	edx, ecx
    L_007d9da3: sar	eax, 1
    L_007d9da5: and	edx, 0x8000000f
    L_007d9dab: jns	L_007d9db2
    L_007d9dad: dec	edx
    L_007d9dae: or	edx, -0x10
    L_007d9db1: inc	edx
    L_007d9db2: je	L_007d9db9
    L_007d9db4: sub	ecx, edx
    L_007d9db6: add	ecx, 0x10
    L_007d9db9: mov	edx, dword ptr [esp + 0x10]
    L_007d9dbd: mov	dword ptr [esp + 0x18], ecx
    L_007d9dc1: lea	ecx, [eax + 2*eax]
    L_007d9dc4: shl	ecx, 0x6
    L_007d9dc7: add	ecx, 0x40
    L_007d9dca: mov	dword ptr [esp + 0x94], ecx
    L_007d9dd1: lea	eax, [4*edx]
    L_007d9dd8: mov	ecx, eax
    L_007d9dda: and	ecx, 0x3f
    L_007d9ddd: je	L_007d9de8
    L_007d9ddf: lea	eax, [4*edx + 0x40]
    L_007d9de6: sub	eax, ecx
    L_007d9de8: add	eax, 0x40
    L_007d9deb: mov	dword ptr [esp + 0x8c], eax
    L_007d9df2: lea	eax, [4*edi]
    L_007d9df9: mov	ecx, eax
    L_007d9dfb: and	ecx, 0x3f
    L_007d9dfe: je	L_007d9e09
    L_007d9e00: lea	eax, [4*edi + 0x40]
    L_007d9e07: sub	eax, ecx
    L_007d9e09: add	eax, 0x40
    L_007d9e0c: mov	dword ptr [esp + 0x84], eax
    L_007d9e13: lea	eax, [4*ebp]
    L_007d9e1a: mov	ecx, eax
    L_007d9e1c: and	ecx, 0x3f
    L_007d9e1f: je	L_007d9e2a
    L_007d9e21: lea	eax, [4*ebp + 0x40]
    L_007d9e28: sub	eax, ecx
    L_007d9e2a: add	eax, 0x40
    L_007d9e2d: mov	dword ptr [esp + 0x7c], eax
    L_007d9e31: mov	eax, esi
    L_007d9e33: neg	eax
    L_007d9e35: shl	eax, 0x5
    L_007d9e38: and	eax, 0x3f
    L_007d9e3b: jne	L_007d9e44
    L_007d9e3d: mov	ecx, esi
    L_007d9e3f: shl	ecx, 0x5
    L_007d9e42: jmp	L_007d9e4c
    L_007d9e44: lea	ecx, [esi + 0x2]
    L_007d9e47: shl	ecx, 0x5
    L_007d9e4a: sub	ecx, eax
    L_007d9e4c: add	ecx, 0x40
    L_007d9e4f: mov	dword ptr [esp + 0x74], ecx
    L_007d9e53: mov	ecx, ebx
    L_007d9e55: neg	ecx
    L_007d9e57: shl	ecx, 0x5
    L_007d9e5a: and	ecx, 0x3f
    L_007d9e5d: jne	L_007d9e66
    L_007d9e5f: shl	ebx, 0x5
    L_007d9e62: mov	edx, ebx
    L_007d9e64: jmp	L_007d9e6e
    L_007d9e66: lea	edx, [ebx + 0x2]
    L_007d9e69: shl	edx, 0x5
    L_007d9e6c: sub	edx, ecx
    L_007d9e6e: add	edx, 0x40
    L_007d9e71: test	eax, eax
    L_007d9e73: mov	dword ptr [esp + 0x6c], edx
    L_007d9e77: jne	L_007d9e80
    L_007d9e79: shl	esi, 0x5
    L_007d9e7c: mov	ecx, esi
    L_007d9e7e: jmp	L_007d9e88
    L_007d9e80: lea	ecx, [esi + 0x2]
    L_007d9e83: shl	ecx, 0x5
    L_007d9e86: sub	ecx, eax
    L_007d9e88: mov	edx, dword ptr [esp + 0x18]
    L_007d9e8c: add	ecx, 0x40
    L_007d9e8f: mov	dword ptr [esp + 0x64], ecx
    L_007d9e93: lea	eax, [4*edx]
    L_007d9e9a: mov	ecx, eax
    L_007d9e9c: and	ecx, 0x3f
    L_007d9e9f: je	L_007d9eaa
    L_007d9ea1: lea	eax, [4*edx + 0x40]
    L_007d9ea8: sub	eax, ecx
    L_007d9eaa: mov	esi, dword ptr [esp + 0x10]
    L_007d9eae: add	eax, 0x40
    L_007d9eb1: mov	ecx, esi
    L_007d9eb3: shl	ecx, 0x4
    L_007d9eb6: mov	dword ptr [esp + 0x5c], eax
    L_007d9eba: mov	eax, ecx
    L_007d9ebc: and	eax, 0x3f
    L_007d9ebf: jne	L_007d9ec5
    L_007d9ec1: mov	edx, ecx
    L_007d9ec3: jmp	L_007d9ecd
    L_007d9ec5: lea	edx, [esi + 0x4]
    L_007d9ec8: shl	edx, 0x4
    L_007d9ecb: sub	edx, eax
    L_007d9ecd: add	edx, 0x40
    L_007d9ed0: test	eax, eax
    L_007d9ed2: mov	dword ptr [esp + 0x54], edx
    L_007d9ed6: jne	L_007d9edc
    L_007d9ed8: mov	edx, ecx
    L_007d9eda: jmp	L_007d9ee4
    L_007d9edc: lea	edx, [esi + 0x4]
    L_007d9edf: shl	edx, 0x4
    L_007d9ee2: sub	edx, eax
    L_007d9ee4: add	edx, 0x40
    L_007d9ee7: test	eax, eax
    L_007d9ee9: mov	dword ptr [esp + 0x4c], edx
    L_007d9eed: jne	L_007d9ef3
    L_007d9eef: mov	edx, ecx
    L_007d9ef1: jmp	L_007d9efb
    L_007d9ef3: lea	edx, [esi + 0x4]
    L_007d9ef6: shl	edx, 0x4
    L_007d9ef9: sub	edx, eax
    L_007d9efb: add	edx, 0x40
    L_007d9efe: test	eax, eax
    L_007d9f00: mov	dword ptr [esp + 0x44], edx
    L_007d9f04: jne	L_007d9f0a
    L_007d9f06: mov	edx, ecx
    L_007d9f08: jmp	L_007d9f12
    L_007d9f0a: lea	edx, [esi + 0x4]
    L_007d9f0d: shl	edx, 0x4
    L_007d9f10: sub	edx, eax
    L_007d9f12: add	edx, 0x40
    L_007d9f15: test	eax, eax
    L_007d9f17: mov	dword ptr [esp + 0x3c], edx
    L_007d9f1b: jne	L_007d9f21
    L_007d9f1d: mov	edx, ecx
    L_007d9f1f: jmp	L_007d9f29
    L_007d9f21: lea	edx, [esi + 0x4]
    L_007d9f24: shl	edx, 0x4
    L_007d9f27: sub	edx, eax
    L_007d9f29: add	edx, 0x40
    L_007d9f2c: test	eax, eax
    L_007d9f2e: mov	dword ptr [esp + 0x34], edx
    L_007d9f32: je	L_007d9f3c
    L_007d9f34: lea	ecx, [esi + 0x4]
    L_007d9f37: shl	ecx, 0x4
    L_007d9f3a: sub	ecx, eax
    L_007d9f3c: mov	esi, dword ptr [esp + 0x1c]
    L_007d9f40: add	ecx, 0x40
    L_007d9f43: lea	eax, [4*esi]
    L_007d9f4a: mov	dword ptr [esp + 0x2c], ecx
    L_007d9f4e: mov	ecx, eax
    L_007d9f50: and	ecx, 0xf
    L_007d9f53: mov	dword ptr [esp + 0x60], eax
    L_007d9f57: mov	dword ptr [esp + 0x90], ecx
    L_007d9f5e: je	L_007d9f69
    L_007d9f60: lea	eax, [4*esi + 0x10]
    L_007d9f67: sub	eax, ecx
    L_007d9f69: add	eax, 0x10
    L_007d9f6c: mov	dword ptr [esp + 0x28], eax
    L_007d9f70: mov	eax, esi
    L_007d9f72: imul	eax, esi
    L_007d9f75: lea	edx, [4*esi + 0x10]
    L_007d9f7c: mov	dword ptr [esp + 0x18], edx
    L_007d9f80: lea	ecx, [4*eax + 0x10]
    L_007d9f87: cdq
    L_007d9f88: and	edx, 0xf
    L_007d9f8b: add	eax, edx
    L_007d9f8d: mov	ebp, eax
    L_007d9f8f: sar	ebp, 0x4
    L_007d9f92: mov	edx, ebp
    L_007d9f94: and	edx, 0x8000000f
    L_007d9f9a: jns	L_007d9fa1
    L_007d9f9c: dec	edx
    L_007d9f9d: or	edx, -0x10
    L_007d9fa0: inc	edx
    L_007d9fa1: mov	dword ptr [esp + 0x30], edx
    L_007d9fa5: mov	eax, ebp
    L_007d9fa7: je	L_007d9fae
    L_007d9fa9: sub	eax, edx
    L_007d9fab: add	eax, 0x10
    L_007d9fae: add	eax, eax
    L_007d9fb0: add	eax, eax
    L_007d9fb2: test	edx, edx
    L_007d9fb4: mov	dword ptr [esp + 0x78], eax
    L_007d9fb8: mov	eax, ebp
    L_007d9fba: je	L_007d9fc1
    L_007d9fbc: sub	eax, edx
    L_007d9fbe: add	eax, 0x10
    L_007d9fc1: lea	edx, [4*eax]
    L_007d9fc8: mov	eax, esi
    L_007d9fca: mov	dword ptr [esp + 0x58], edx
    L_007d9fce: cdq
    L_007d9fcf: and	edx, 0x3
    L_007d9fd2: add	eax, edx
    L_007d9fd4: sar	eax, 0x2
    L_007d9fd7: mov	esi, eax
    L_007d9fd9: and	esi, 0x8000000f
    L_007d9fdf: mov	dword ptr [esp + 0x10], eax
    L_007d9fe3: jns	L_007d9fea
    L_007d9fe5: dec	esi
    L_007d9fe6: or	esi, -0x10
    L_007d9fe9: inc	esi
    L_007d9fea: mov	dword ptr [esp + 0x1c], esi
    L_007d9fee: mov	edx, eax
    L_007d9ff0: je	L_007d9ff7
    L_007d9ff2: sub	edx, esi
    L_007d9ff4: add	edx, 0x10
    L_007d9ff7: add	edx, edx
    L_007d9ff9: add	edx, edx
    L_007d9ffb: test	esi, esi
    L_007d9ffd: mov	dword ptr [esp + 0x24], edx
    L_007da001: mov	edx, eax
    L_007da003: je	L_007da00a
    L_007da005: sub	edx, esi
    L_007da007: add	edx, 0x10
    L_007da00a: mov	edi, dword ptr [esp + 0x14]
    L_007da00e: lea	eax, [4*edx]
    L_007da015: mov	dword ptr [esp + 0x50], eax
    L_007da019: lea	eax, [4*edi]
    L_007da020: mov	edx, eax
    L_007da022: and	edx, 0x3f
    L_007da025: mov	dword ptr [esp + 0x20], eax
    L_007da029: jne	L_007da02f
    L_007da02b: mov	esi, eax
    L_007da02d: jmp	L_007da038
    L_007da02f: lea	esi, [4*edi + 0x40]
    L_007da036: sub	esi, edx
    L_007da038: add	esi, 0x40
    L_007da03b: test	edx, edx
    L_007da03d: mov	dword ptr [esp + 0x70], esi
    L_007da041: jne	L_007da047
    L_007da043: mov	esi, eax
    L_007da045: jmp	L_007da050
    L_007da047: lea	esi, [4*edi + 0x40]
    L_007da04e: sub	esi, edx
    L_007da050: add	esi, 0x40
    L_007da053: test	edx, edx
    L_007da055: mov	dword ptr [esp + 0x48], esi
    L_007da059: jne	L_007da05f
    L_007da05b: mov	esi, eax
    L_007da05d: jmp	L_007da068
    L_007da05f: lea	esi, [4*edi + 0x40]
    L_007da066: sub	esi, edx
    L_007da068: add	esi, 0x40
    L_007da06b: test	edx, edx
    L_007da06d: mov	dword ptr [esp + 0x80], esi
    L_007da074: jne	L_007da07a
    L_007da076: mov	esi, eax
    L_007da078: jmp	L_007da083
    L_007da07a: lea	esi, [4*edi + 0x40]
    L_007da081: sub	esi, edx
    L_007da083: add	esi, 0x40
    L_007da086: test	edx, edx
    L_007da088: mov	dword ptr [esp + 0x40], esi
    L_007da08c: jne	L_007da092
    L_007da08e: mov	esi, eax
    L_007da090: jmp	L_007da09b
    L_007da092: lea	esi, [4*edi + 0x40]
    L_007da099: sub	esi, edx
    L_007da09b: add	esi, 0x40
    L_007da09e: test	edx, edx
    L_007da0a0: mov	dword ptr [esp + 0x68], esi
    L_007da0a4: jne	L_007da0aa
    L_007da0a6: mov	esi, eax
    L_007da0a8: jmp	L_007da0b3
    L_007da0aa: lea	esi, [4*edi + 0x40]
    L_007da0b1: sub	esi, edx
    L_007da0b3: add	esi, 0x40
    L_007da0b6: test	edx, edx
    L_007da0b8: mov	dword ptr [esp + 0x38], esi
    L_007da0bc: jne	L_007da0c2
    L_007da0be: mov	esi, eax
    L_007da0c0: jmp	L_007da0cb
    L_007da0c2: lea	esi, [4*edi + 0x40]
    L_007da0c9: sub	esi, edx
    L_007da0cb: mov	eax, dword ptr [esp + 0x14]
    L_007da0cf: add	esi, 0x40
    L_007da0d2: mov	dword ptr [esp + 0x88], esi
    L_007da0d9: mov	esi, eax
    L_007da0db: imul	esi, eax
    L_007da0de: lea	ebx, [4*esi]
    L_007da0e5: mov	edi, ebx
    L_007da0e7: and	edi, 0x3f
    L_007da0ea: je	L_007da0f5
    L_007da0ec: lea	ebx, [4*esi + 0x40]
    L_007da0f3: sub	ebx, edi
    L_007da0f5: add	ebx, 0x40
    L_007da0f8: test	edx, edx
    L_007da0fa: mov	dword ptr [esp + 0x14], ebx
    L_007da0fe: jne	L_007da106
    L_007da100: mov	esi, dword ptr [esp + 0x20]
    L_007da104: jmp	L_007da10f
    L_007da106: lea	esi, [4*eax + 0x40]
    L_007da10d: sub	esi, edx
    L_007da10f: mov	eax, dword ptr [esp + 0x90]
    L_007da116: add	esi, 0x40
    L_007da119: test	eax, eax
    L_007da11b: mov	dword ptr [esp + 0x20], esi
    L_007da11f: jne	L_007da127
    L_007da121: mov	ebx, dword ptr [esp + 0x60]
    L_007da125: jmp	L_007da12d
    L_007da127: mov	ebx, dword ptr [esp + 0x18]
    L_007da12b: sub	ebx, eax
    L_007da12d: mov	esi, dword ptr [esp + 0x30]
    L_007da131: add	ebx, 0x10
    L_007da134: test	esi, esi
    L_007da136: mov	edx, ebp
    L_007da138: je	L_007da13f
    L_007da13a: sub	edx, esi
    L_007da13c: add	edx, 0x10
    L_007da13f: test	esi, esi
    L_007da141: lea	edi, [4*edx]
    L_007da148: je	L_007da14f
    L_007da14a: sub	ebp, esi
    L_007da14c: add	ebp, 0x10
    L_007da14f: mov	eax, dword ptr [esp + 0x1c]
    L_007da153: test	eax, eax
    L_007da155: mov	edx, ebp
    L_007da157: lea	esi, [4*edx]
    L_007da15e: mov	edx, dword ptr [esp + 0x10]
    L_007da162: je	L_007da169
    L_007da164: sub	edx, eax
    L_007da166: add	edx, 0x10
    L_007da169: add	edx, edx
    L_007da16b: add	edx, edx
    L_007da16d: test	eax, eax
    L_007da16f: mov	eax, dword ptr [esp + 0x10]
    L_007da173: je	L_007da17c
    L_007da175: sub	eax, dword ptr [esp + 0x1c]
    L_007da179: add	eax, 0x10
    L_007da17c: lea	eax, [edx + 4*eax]
    L_007da17f: add	eax, esi
    L_007da181: add	eax, edi
    L_007da183: add	eax, ecx
    L_007da185: add	eax, ecx
    L_007da187: add	eax, ebx
    L_007da189: add	eax, dword ptr [esp + 0x20]
    L_007da18d: pop	edi
    L_007da18e: add	eax, dword ptr [esp + 0x10]
    L_007da192: pop	esi
    L_007da193: add	eax, dword ptr [esp + 0x80]
    L_007da19a: pop	ebp
    L_007da19b: add	eax, dword ptr [esp + 0x2c]
    L_007da19f: pop	ebx
    L_007da1a0: add	eax, dword ptr [esp + 0x58]
    L_007da1a4: add	eax, dword ptr [esp + 0x30]
    L_007da1a8: add	eax, dword ptr [esp + 0x70]
    L_007da1ac: add	eax, dword ptr [esp + 0x38]
    L_007da1b0: add	eax, dword ptr [esp + 0x60]
    L_007da1b4: add	eax, dword ptr [esp + 0x40]
    L_007da1b8: add	eax, dword ptr [esp + 0x14]
    L_007da1bc: add	eax, dword ptr [esp + 0x48]
    L_007da1c0: add	eax, dword ptr [esp + 0x68]
    L_007da1c4: add	eax, ecx
    L_007da1c6: add	eax, ecx
    L_007da1c8: add	eax, dword ptr [esp + 0x8]
    L_007da1cc: mov	ecx, dword ptr [esp + 0x84]
    L_007da1d3: add	eax, dword ptr [esp + 0x18]
    L_007da1d7: add	eax, dword ptr [esp + 0x1c]
    L_007da1db: add	eax, dword ptr [esp + 0x24]
    L_007da1df: add	eax, dword ptr [esp + 0x2c]
    L_007da1e3: add	eax, dword ptr [esp + 0x34]
    L_007da1e7: add	eax, dword ptr [esp + 0x3c]
    L_007da1eb: add	eax, dword ptr [esp + 0x44]
    L_007da1ef: add	eax, dword ptr [esp + 0x4c]
    L_007da1f3: add	eax, dword ptr [esp + 0x54]
    L_007da1f7: add	eax, dword ptr [esp + 0x5c]
    L_007da1fb: add	eax, dword ptr [esp + 0x64]
    L_007da1ff: add	eax, dword ptr [esp + 0x6c]
    L_007da203: add	eax, dword ptr [esp + 0x74]
    L_007da207: add	eax, dword ptr [esp + 0x7c]
    L_007da20b: add	eax, ecx
    L_007da20d: add	eax, ecx
    L_007da20f: add	esp, 0x88
    L_007da215: ret
    }
}

// [0x007D3490] sub_007D3490 (1471 bytes)
extern "C" void ext_006A7250(); extern "C" void ext_007CD780(); extern "C" void ext_007CD880(); extern "C" void ext_007CFEC0(); extern "C" void ext_007D5170(); extern "C" void ext_007E46B0(); extern "C" void ext_007FC2D0(); extern "C" void ext_007FC440(); extern "C" void ext_007FC4E0(); extern "C" int mem_0094CE80; extern "C" int mem_0093F8F0;
extern "C" __declspec(naked) void __fastcall fn_007D3490(void* self) {
    __asm {
    L_007D3490: sub	esp, 0x120
    L_007D3496: push	ebx
    L_007D3497: push	ebp
    L_007D3498: push	esi
    L_007D3499: push	edi
    L_007D349A: mov	edi, dword ptr [esp + 0x134]
    L_007D34A1: mov	eax, dword ptr [edi + 0x94]
    L_007D34A7: mov	ecx, dword ptr [edi + 0x98]
    L_007D34AD: lea	ebx, [eax + 0x110]
    L_007D34B3: lea	edx, [ecx + 0x110]
    L_007D34B9: lea	esi, [edi + 0xbc]
    L_007D34BF: lea	ebp, [eax + 0xd0]
    L_007D34C5: lea	eax, [esp + 0x90]
    L_007D34CC: add	ecx, 0xd0
    L_007D34D2: push	esi
    L_007D34D3: push	eax
    L_007D34D4: mov	dword ptr [esp + 0x1c], 0x0
    L_007D34DC: mov	dword ptr [esp + 0x24], edx
    L_007D34E0: mov	dword ptr [esp + 0x28], ecx
    L_007D34E4: call	ext_007D5170
    L_007D34E9: add	esp, 0x8
    L_007D34EC: lea	eax, [esp + 0x90]
    L_007D34F3: mov	ecx, ebp
    L_007D34F5: lea	edx, [esp + 0x34]
    L_007D34F9: call	ext_007CD880
    L_007D34FE: mov	eax, edx
    L_007D3500: lea	ecx, [esp + 0xf0]
    L_007D3507: call	ext_007FC2D0
    L_007D350C: lea	ecx, [esi + 0x30]
    L_007D350F: mov	eax, ebx
    L_007D3511: lea	edx, [esp + 0x44]
    L_007D3515: lea	esi, [esp + 0x120]
    L_007D351C: call	ext_007CFEC0
    L_007D3521: cmp	dword ptr [edi + 0xb8], -0x1
    L_007D3528: je	L_007D3581
    L_007D352A: cmp	dword ptr [edi + 0x98], 0x0
    L_007D3531: je	L_007D3581
    L_007D3533: lea	esi, [edi + 0xfc]
    L_007D3539: lea	ecx, [esp + 0xa0]
    L_007D3540: push	esi
    L_007D3541: push	ecx
    L_007D3542: call	ext_007D5170
    L_007D3547: mov	ecx, dword ptr [esp + 0x28]
    L_007D354B: add	esp, 0x8
    L_007D354E: lea	eax, [esp + 0xa0]
    L_007D3555: lea	edx, [esp + 0x24]
    L_007D3559: call	ext_007CD880
    L_007D355E: mov	eax, edx
    L_007D3560: lea	ecx, [esp + 0xb0]
    L_007D3567: call	ext_007FC2D0
    L_007D356C: mov	eax, dword ptr [esp + 0x1c]
    L_007D3570: lea	ecx, [esi + 0x30]
    L_007D3573: lea	edx, [esp + 0xe0]
    L_007D357A: call	ext_007FC440
    L_007D357F: jmp	L_007D35A3
    L_007D3581: lea	eax, [edi + 0xfc]
    L_007D3587: lea	ecx, [esp + 0xb0]
    L_007D358E: call	ext_007FC4E0
    L_007D3593: mov	edx, ecx
    L_007D3595: push	edx
    L_007D3596: lea	eax, [esp + 0x28]
    L_007D359A: push	eax
    L_007D359B: call	ext_007D5170
    L_007D35A0: add	esp, 0x8
    L_007D35A3: fld	dword ptr [esp + 0x24]
    L_007D35A7: xor	ecx, ecx
    L_007D35A9: fld	dword ptr [esp + 0x28]
    L_007D35AD: lea	eax, [esp + 0x54]
    L_007D35B1: fld	dword ptr [esp + 0x2c]
    L_007D35B5: fld	dword ptr [esp + 0x30]
    L_007D35B9: fld	dword ptr [esp + 4*ecx + 0x34]
    L_007D35BD: add	ecx, 0x1
    L_007D35C0: fld	st(4)
    L_007D35C2: add	eax, 0x10
    L_007D35C5: cmp	ecx, 0x4
    L_007D35C8: fmul	st, st(1)
    L_007D35CA: fstp	dword ptr [eax - 0x14]
    L_007D35CD: fld	st(3)
    L_007D35CF: fmul	st, st(1)
    L_007D35D1: fstp	dword ptr [eax - 0x10]
    L_007D35D4: fld	st(2)
    L_007D35D6: fmul	st, st(1)
    L_007D35D8: fstp	dword ptr [eax - 0xc]
    L_007D35DB: fmul	st, st(1)
    L_007D35DD: fstp	dword ptr [eax - 0x8]
    L_007D35E0: jb	L_007D35B9
    L_007D35E2: fstp	st(3)
    L_007D35E4: lea	eax, [esp + 0x34]
    L_007D35E8: fstp	st(1)
    L_007D35EA: lea	ecx, [esp + 0x50]
    L_007D35EE: fstp	st(0)
    L_007D35F0: fstp	st(0)
    L_007D35F2: fld	dword ptr [esp + 0x64]
    L_007D35F6: fadd	dword ptr [esp + 0x50]
    L_007D35FA: fadd	dword ptr [esp + 0x78]
    L_007D35FE: fadd	dword ptr [esp + 0x8c]
    L_007D3605: fstp	dword ptr [esp + 0x34]
    L_007D3609: fld	dword ptr [esp + 0x54]
    L_007D360D: fsub	dword ptr [esp + 0x60]
    L_007D3611: fadd	dword ptr [esp + 0x88]
    L_007D3618: fsub	dword ptr [esp + 0x7c]
    L_007D361C: fstp	dword ptr [esp + 0x38]
    L_007D3620: fld	dword ptr [esp + 0x58]
    L_007D3624: fld	dword ptr [esp + 0x84]
    L_007D362B: fadd	dword ptr [esp + 0x70]
    L_007D362F: fsubp	st(1), st
    L_007D3631: fadd	dword ptr [esp + 0x6c]
    L_007D3635: fstp	dword ptr [esp + 0x3c]
    L_007D3639: fld	dword ptr [esp + 0x74]
    L_007D363D: fsub	dword ptr [esp + 0x80]
    L_007D3644: fsub	dword ptr [esp + 0x68]
    L_007D3648: fadd	dword ptr [esp + 0x5c]
    L_007D364C: fstp	dword ptr [esp + 0x40]
    L_007D3650: call	ext_007CD780
    L_007D3655: fld	dword ptr [esp + 0x120]
    L_007D365C: mov	ebx, dword ptr [edi + 0x1a0]
    L_007D3662: fsub	dword ptr [esp + 0xe0]
    L_007D3669: mov	eax, ebx
    L_007D366B: and	eax, 0x100
    L_007D3670: mov	dword ptr [esp + 0x1c], eax
    L_007D3674: fstp	dword ptr [esp + 0x24]
    L_007D3678: mov	ebp, 0x1
    L_007D367D: fld	dword ptr [esp + 0x124]
    L_007D3684: fsub	dword ptr [esp + 0xe4]
    L_007D368B: fstp	dword ptr [esp + 0x28]
    L_007D368F: fld	dword ptr [esp + 0x128]
    L_007D3696: fsub	dword ptr [esp + 0xe8]
    L_007D369D: fstp	dword ptr [esp + 0x2c]
    L_007D36A1: jne	L_007D36A7
    L_007D36A3: mov	ebp, dword ptr [esp + 0x14]
    L_007D36A7: mov	eax, ebx
    L_007D36A9: and	eax, 0x200
    L_007D36AE: mov	dword ptr [esp + 0x20], eax
    L_007D36B2: je	L_007D36B7
    L_007D36B4: add	ebp, 0x1
    L_007D36B7: mov	eax, ebx
    L_007D36B9: and	eax, 0x400
    L_007D36BE: mov	dword ptr [esp + 0x18], eax
    L_007D36C2: je	L_007D36C7
    L_007D36C4: add	ebp, 0x1
    L_007D36C7: mov	eax, ebx
    L_007D36C9: and	eax, 0x1
    L_007D36CC: mov	dword ptr [esp + 0x10], eax
    L_007D36D0: je	L_007D36D5
    L_007D36D2: add	ebp, 0x1
    L_007D36D5: and	ebx, 0x6
    L_007D36D8: mov	eax, ebx
    L_007D36DA: sub	eax, 0x2
    L_007D36DD: je	L_007D36EE
    L_007D36DF: sub	eax, 0x2
    L_007D36E2: je	L_007D36EE
    L_007D36E4: sub	eax, 0x2
    L_007D36E7: jne	L_007D36F1
    L_007D36E9: add	ebp, 0x2
    L_007D36EC: jmp	L_007D36F1
    L_007D36EE: add	ebp, 0x1
    L_007D36F1: fld	dword ptr [esp + 0x24]
    L_007D36F5: lea	esi, [esp + 0x44]
    L_007D36F9: fstp	dword ptr [esp + 0x44]
    L_007D36FD: fld	dword ptr [esp + 0x28]
    L_007D3701: fstp	dword ptr [esp + 0x48]
    L_007D3705: fld	dword ptr [esp + 0x2c]
    L_007D3709: fstp	dword ptr [esp + 0x4c]
    L_007D370D: call	ext_007E46B0
    L_007D3712: mov	edx, dword ptr [edi + 0x1a4]
    L_007D3718: fstp	dword ptr [esp + 0x14]
    L_007D371C: test	edx, 0x700
    L_007D3722: fldz
    L_007D3724: fld	dword ptr [esp + 0x14]
    L_007D3728: je	L_007D3743
    L_007D372A: fld	st(0)
    L_007D372C: fsub	dword ptr [edi + 0x1a8]
    L_007D3732: fstp	dword ptr [esp + 0x14]
    L_007D3736: fld	dword ptr [esp + 0x14]
    L_007D373A: fcomp	st(2)
    L_007D373C: fnstsw	ax
    L_007D373E: test	ah, 0x41
    L_007D3741: je	L_007D376B
    L_007D3743: test	dword ptr [edi + 0x1b8], 0x700
    L_007D374D: je	L_007D3772
    L_007D374F: fsub	dword ptr [edi + 0x1bc]
    L_007D3755: fstp	dword ptr [esp + 0x14]
    L_007D3759: fld	dword ptr [esp + 0x14]
    L_007D375D: fcomp	st(1)
    L_007D375F: fnstsw	ax
    L_007D3761: test	ah, 0x41
    L_007D3764: jne	L_007D3774
    L_007D3766: add	ebp, 0x1
    L_007D3769: jmp	L_007D3774
    L_007D376B: fstp	st(0)
    L_007D376D: add	ebp, 0x1
    L_007D3770: jmp	L_007D3774
    L_007D3772: fstp	st(0)
    L_007D3774: fld	dword ptr [esp + 0x34]
    L_007D3778: fld	st(0)
    L_007D377A: fmul	st, st(1)
    L_007D377C: fst	dword ptr [esp + 0x14]
    L_007D3780: fld	dword ptr [esp + 0x14]
    L_007D3784: fabs
    L_007D3786: fstp	dword ptr [esp + 0x14]
    L_007D378A: fld	dword ptr [esp + 0x14]
    L_007D378E: fld	dword ptr [mem_0094CE80]
    L_007D3794: fcom	st(1)
    L_007D3796: fnstsw	ax
    L_007D3798: fstp	st(1)
    L_007D379A: test	ah, 0x1
    L_007D379D: fld	dword ptr [esp + 0x38]
    L_007D37A1: jne	L_007D37E2
    L_007D37A3: fld	st(0)
    L_007D37A5: fmul	st(0), st
    L_007D37A7: fstp	dword ptr [esp + 0x14]
    L_007D37AB: fld	dword ptr [esp + 0x14]
    L_007D37AF: fabs
    L_007D37B1: fstp	dword ptr [esp + 0x14]
    L_007D37B5: fld	dword ptr [esp + 0x14]
    L_007D37B9: fcomp	st(2)
    L_007D37BB: fnstsw	ax
    L_007D37BD: fstp	st(1)
    L_007D37BF: test	ah, 0x41
    L_007D37C2: jp	L_007D37E4
    L_007D37C4: fstp	st(2)
    L_007D37C6: fstp	st(1)
    L_007D37C8: fstp	st(0)
    L_007D37CA: fstp	st(0)
    L_007D37CC: test	ebp, ebp
    L_007D37CE: mov	eax, 0x1
    L_007D37D3: je	L_007D37D7
    L_007D37D5: mov	eax, ebp
    L_007D37D7: pop	edi
    L_007D37D8: pop	esi
    L_007D37D9: pop	ebp
    L_007D37DA: pop	ebx
    L_007D37DB: add	esp, 0x120
    L_007D37E1: ret
    L_007D37E2: fstp	st(1)
    L_007D37E4: cmp	dword ptr [esp + 0x1c], 0x0
    L_007D37E9: mov	ecx, 0x3
    L_007D37EE: jne	L_007D37FB
    L_007D37F0: test	byte ptr [edi + 0x1e4], cl
    L_007D37F6: je	L_007D37FB
    L_007D37F8: add	ebp, 0x1
    L_007D37FB: cmp	dword ptr [esp + 0x20], 0x0
    L_007D3800: jne	L_007D380D
    L_007D3802: test	byte ptr [edi + 0x1e4], cl
    L_007D3808: je	L_007D380D
    L_007D380A: add	ebp, 0x1
    L_007D380D: cmp	dword ptr [esp + 0x18], 0x0
    L_007D3812: jne	L_007D381F
    L_007D3814: test	byte ptr [edi + 0x1e4], cl
    L_007D381A: je	L_007D381F
    L_007D381C: add	ebp, 0x1
    L_007D381F: mov	eax, dword ptr [edi + 0x1f4]
    L_007D3825: fld1
    L_007D3827: _emit 0x84
    _emit 0xc1
    L_007D3829: je	L_007D388C
    L_007D382B: test	byte ptr [edi + 0x1a0], 0x7
    L_007D3832: jne	L_007D383C
    L_007D3834: test	al, 0x8
    L_007D3836: je	L_007D383C
    L_007D3838: add	ebp, ecx
    L_007D383A: jmp	L_007D388C
    L_007D383C: cmp	dword ptr [esp + 0x10], 0x0
    L_007D3841: jne	L_007D3846
    L_007D3843: add	ebp, 0x1
    L_007D3846: not	ebx
    L_007D3848: mov	ecx, ebx
    L_007D384A: test	ecx, ecx
    L_007D384C: je	L_007D388C
    L_007D384E: test	cl, 0x2
    L_007D3851: fld	dword ptr [esp + 0x50]
    L_007D3855: fadd	st, st(1)
    L_007D3857: fadd	st(0), st
    L_007D3859: fstp	dword ptr [esp + 0x10]
    L_007D385D: fld	dword ptr [mem_0093F8F0]
    L_007D3863: fld	dword ptr [esp + 0x10]
    L_007D3867: je	L_007D3875
    L_007D3869: fcom	st(1)
    L_007D386B: fnstsw	ax
    L_007D386D: test	ah, 0x41
    L_007D3870: jne	L_007D3875
    L_007D3872: add	ebp, 0x1
    L_007D3875: test	cl, 0x4
    L_007D3878: je	L_007D3888
    L_007D387A: fcompp
    L_007D387C: fnstsw	ax
    L_007D387E: test	ah, 0x41
    L_007D3881: jne	L_007D388C
    L_007D3883: add	ebp, 0x1
    L_007D3886: jmp	L_007D388C
    L_007D3888: fstp	st(1)
    L_007D388A: fstp	st(0)
    L_007D388C: test	dl, 0x1
    L_007D388F: fld	dword ptr [edi + 0x1ac]
    L_007D3895: fmul	st(0), st
    L_007D3897: fstp	dword ptr [esp + 0x18]
    L_007D389B: fld	dword ptr [edi + 0x1c8]
    L_007D38A1: fmul	st(0), st
    L_007D38A3: fstp	dword ptr [esp + 0x10]
    L_007D38A7: fld	dword ptr [esp + 0x10]
    L_007D38AB: fld	st(1)
    L_007D38AD: fsub	st, st(1)
    L_007D38AF: fstp	dword ptr [esp + 0x14]
    L_007D38B3: je	L_007D3921
    L_007D38B5: fstp	st(5)
    L_007D38B7: fld	dword ptr [esp + 0x18]
    L_007D38BB: fld	st(2)
    L_007D38BD: fld	st(1)
    L_007D38BF: fmul	st, st(1)
    L_007D38C1: fmulp	st(1), st
    L_007D38C3: fxch	st(2)
    L_007D38C5: fsubrp	st(1), st
    L_007D38C7: fstp	dword ptr [esp + 0x10]
    L_007D38CB: fld	dword ptr [esp + 0x10]
    L_007D38CF: fmul	st, st(4)
    L_007D38D1: fmul	st, st(4)
    L_007D38D3: fsubp	st(1), st
    L_007D38D5: fstp	dword ptr [esp + 0x10]
    L_007D38D9: fld	dword ptr [esp + 0x10]
    L_007D38DD: fldz
    L_007D38DF: fcom	st(1)
    L_007D38E1: fnstsw	ax
    L_007D38E3: fstp	st(1)
    L_007D38E5: test	ah, 0x5
    L_007D38E8: jnp	L_007D3925
    L_007D38EA: fxch	st(4)
    L_007D38EC: test	byte ptr [edi + 0x1b8], 0x1
    L_007D38F3: je	L_007D3930
    L_007D38F5: fld	st(1)
    L_007D38F7: fmul	st(1), st
    L_007D38F9: fmulp	st(1), st
    L_007D38FB: fld	dword ptr [esp + 0x14]
    L_007D38FF: fmul	st, st(4)
    L_007D3901: fmulp	st(4), st
    L_007D3903: fsubrp	st(3), st
    L_007D3905: fxch	st(2)
    L_007D3907: fstp	dword ptr [esp + 0x10]
    L_007D390B: fld	dword ptr [esp + 0x10]
    L_007D390F: fcomp	st(3)
    L_007D3911: fnstsw	ax
    L_007D3913: fstp	st(2)
    L_007D3915: test	ah, 0x41
    L_007D3918: jne	L_007D3936
    L_007D391A: fxch	st(1)
    L_007D391C: add	ebp, 0x1
    L_007D391F: jmp	L_007D3938
    L_007D3921: fstp	st(1)
    L_007D3923: jmp	L_007D38EC
    L_007D3925: fstp	st(3)
    L_007D3927: add	ebp, 0x1
    L_007D392A: fstp	st(3)
    L_007D392C: fstp	st(1)
    L_007D392E: jmp	L_007D3938
    L_007D3930: fstp	st(3)
    L_007D3932: fstp	st(2)
    L_007D3934: fstp	st(2)
    L_007D3936: fxch	st(1)
    L_007D3938: fld	st(1)
    L_007D393A: fmulp	st(2), st
    L_007D393C: faddp	st(1), st
    L_007D393E: fstp	dword ptr [esp + 0x10]
    L_007D3942: fld	dword ptr [esp + 0x10]
    L_007D3946: call	ext_006A7250
    L_007D394B: fstp	dword ptr [esp + 0x10]
    L_007D394F: test	byte ptr [edi + 0x1a4], 0x6
    L_007D3956: fld	dword ptr [esp + 0x10]
    L_007D395A: fstp	dword ptr [esp + 0x10]
    L_007D395E: fld	dword ptr [esp + 0x10]
    L_007D3962: fld	st(0)
    L_007D3964: fld1
    L_007D3966: fadd	st(1), st
    L_007D3968: fxch	st(2)
    L_007D396A: fadd	st(0), st
    L_007D396C: fmulp	st(1), st
    L_007D396E: fstp	dword ptr [esp + 0x10]
    L_007D3972: fld	dword ptr [esp + 0x10]
    L_007D3976: fmul	st(0), st
    L_007D3978: fstp	dword ptr [esp + 0x18]
    L_007D397C: fld	dword ptr [edi + 0x1d4]
    L_007D3982: fld	dword ptr [esp + 0x5c]
    L_007D3986: fld	dword ptr [edi + 0x1d8]
    L_007D398C: fld	dword ptr [esp + 0x68]
    L_007D3990: fld	st(1)
    L_007D3992: fadd	st, st(5)
    L_007D3994: fmul	st, st(1)
    L_007D3996: fld	st(5)
    L_007D3998: fsubrp	st(3), st
    L_007D399A: fdivrp	st(2), st
    L_007D399C: fxch	st(1)
    L_007D399E: fstp	dword ptr [esp + 0x10]
    L_007D39A2: fld	dword ptr [esp + 0x10]
    L_007D39A6: fmul	st, st(1)
    L_007D39A8: fld	st(3)
    L_007D39AA: fadd	st, st(5)
    L_007D39AC: fmul	st, st(3)
    L_007D39AE: fld	st(5)
    L_007D39B0: fsubrp	st(5), st
    L_007D39B2: fdivrp	st(4), st
    L_007D39B4: fxch	st(3)
    L_007D39B6: fstp	dword ptr [esp + 0x10]
    L_007D39BA: fld	dword ptr [esp + 0x10]
    L_007D39BE: fmul	st, st(2)
    L_007D39C0: faddp	st(3), st
    L_007D39C2: fxch	st(2)
    L_007D39C4: fstp	dword ptr [esp + 0x14]
    L_007D39C8: fld	dword ptr [esp + 0x18]
    L_007D39CC: je	L_007D3A23
    L_007D39CE: fld	dword ptr [edi + 0x1b0]
    L_007D39D4: fld	dword ptr [edi + 0x1b4]
    L_007D39DA: fld	st(0)
    L_007D39DC: fadd	st, st(6)
    L_007D39DE: fmul	st, st(5)
    L_007D39E0: fld	st(6)
    L_007D39E2: fsubrp	st(2), st
    L_007D39E4: fdivrp	st(1), st
    L_007D39E6: fstp	dword ptr [esp + 0x10]
    L_007D39EA: fld	dword ptr [esp + 0x10]
    L_007D39EE: fmulp	st(4), st
    L_007D39F0: fld	st(0)
    L_007D39F2: fadd	st, st(5)
    L_007D39F4: fmul	st, st(3)
    L_007D39F6: fxch	st(5)
    L_007D39F8: fsubrp	st(1), st
    L_007D39FA: fdivp	st(4), st
    L_007D39FC: fxch	st(3)
    L_007D39FE: fstp	dword ptr [esp + 0x10]
    L_007D3A02: fmul	dword ptr [esp + 0x10]
    L_007D3A06: faddp	st(1), st
    L_007D3A08: fstp	dword ptr [esp + 0x10]
    L_007D3A0C: fld	dword ptr [esp + 0x10]
    L_007D3A10: fcomp	st(1)
    L_007D3A12: fnstsw	ax
    L_007D3A14: test	ah, 0x41
    L_007D3A17: jne	L_007D3A29
    L_007D3A19: fstp	st(0)
    L_007D3A1B: add	ebp, 0x1
    L_007D3A1E: jmp	L_007D37CC
    L_007D3A23: fstp	st(3)
    L_007D3A25: fstp	st(0)
    L_007D3A27: fstp	st(0)
    L_007D3A29: test	byte ptr [edi + 0x1b8], 0x6
    L_007D3A30: je	L_007D37CA
    L_007D3A36: fld	dword ptr [esp + 0x14]
    L_007D3A3A: fcompp
    L_007D3A3C: fnstsw	ax
    L_007D3A3E: test	ah, 0x41
    L_007D3A41: jne	L_007D37CC
    L_007D3A47: add	ebp, 0x1
    L_007D3A4A: jmp	L_007D37CC
    }
}

extern "C" int ext_007D9C60(int a, int b, int c, int d, int e);

// [0x007DA220] sub_007DA220 (162 bytes)
extern "C" __declspec(naked) int __cdecl fn_007DA220(int* arr, unsigned int count, int unused, int a3, int a4, int a5) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        push edi
        xor edi, edi
        xor esi, esi
        cmp ebx, edi
        mov dword ptr [esp + 0x0c], edi
        je done_loop
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loop_start:
        mov ecx, dword ptr [ebp + esi * 4]
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + eax * 2]
        add eax, eax
        add eax, eax
        mov edx, ecx
        sub edx, eax
        mov eax, ecx
        je skip_round12
        sub eax, edx
        add eax, 0x0c
    skip_round12:
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add dword ptr [esp + 0x10], eax
        mov eax, ecx
        and eax, 0x80000003
        jns skip_neg4
        dec eax
        or eax, -4
        inc eax
    skip_neg4:
        je skip_round4
        sub ecx, eax
        add ecx, 4
    skip_round4:
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add esi, 1
        add edi, eax
        cmp esi, ebx
        jne loop_start
        pop ebp
    done_loop:
        mov ecx, dword ptr [esp + 0x0c]
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        push edi
        push ecx
        push ebx
        push edx
        push eax
        call ext_007D9C60
        add esp, 0x14
        imul eax, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x007D8F60] sub_007D8F60 (1676 bytes)
extern "C" void ext_006A7270();
extern "C" void ext_007D5E50();
extern "C" void ext_007F0290();
extern "C" void ext_007F4AB0();
extern "C" void ext_007F4CD0();
extern "C" int mem_00924260;
extern "C" int mem_009241AC;

extern "C" __declspec(naked) void __fastcall fn_007D8F60(void* self) {
    __asm {
        mov     eax, 0x2554
        call    ext_006A7270
        mov     eax, 0x99e0bc
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x2674]
        cmp     dword ptr [esi + 0x30], 2
        mov     dword ptr [esp + 0x1340], eax
        mov     dword ptr [esp + 0x1584], eax
        mov     dword ptr [esp + 0x17c8], eax
        mov     dword ptr [esp + 0x1a0c], eax
        mov     dword ptr [esp + 0x1c50], eax
        mov     dword ptr [esp + 0x1e94], eax
        mov     dword ptr [esp + 0x20d8], eax
        mov     dword ptr [esp + 0x231c], eax
        mov     eax, 0x99e0cc
        push    edi
        mov     dword ptr [esp + 0x124], eax
        mov     dword ptr [esp + 0x368], eax
        mov     dword ptr [esp + 0x5ac], eax
        mov     dword ptr [esp + 0x7f0], eax
        mov     dword ptr [esp + 0xa34], eax
        mov     dword ptr [esp + 0xc78], eax
        mov     dword ptr [esp + 0xebc], eax
        mov     dword ptr [esp + 0x1100], eax
        lea     ebp, [esp + 0x124]
        je      loc_7D9003
        lea     ebp, [esp + 0x1344]

    loc_7D9003:
        mov     ebx, dword ptr [esp + 0x2650]
        mov     eax, dword ptr [esp + 0x268c]
        mov     ecx, dword ptr [ebx + 0x94]
        mov     edx, dword ptr [ebx + 0x98]
        mov     dword ptr [ebp + 0x240], eax
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 0x9c]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ebx + 0x88]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx + 0x8c]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebx + 0x90]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [ebx + 4]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 8]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ebx + 0xc]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], edx
        lea     eax, [esp + 0x25c0]
        push    eax
        call    ext_007F4CD0
        fld     dword ptr [esi + 8]
        mov     ecx, dword ptr [esp + 0x268c]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esi]
        add     esp, 0x18
        fstp    dword ptr [esp + 0xc]
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x2678]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 0x267c]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 0x2680]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x2690]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 0x2694]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [ebp]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 0x2c]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx + 0x30]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx + 0x1c]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 0x20]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx + 0x24]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx + 0x10]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 0x14]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx + 0x18]
        sub     esp, 0x7c
        mov     dword ptr [eax + 8], ecx
        mov     ecx, 0x1f
        lea     esi, [esp + 0x2658]
        mov     edi, esp
        mov     edx, dword ptr [edx]
        rep movsd
        mov     ecx, dword ptr [esp + 0x26d4]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x26e4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 0x26e8]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, ebp
        call    edx
        mov     eax, dword ptr [esp + 0x2678]
        mov     ecx, dword ptr [ebx + 0x4c]
        fld     dword ptr [eax]
        sub     esp, 0x14
        fld1
        mov     edx, dword ptr [ebp]
        fdivrp  st(1), st
        mov     edx, dword ptr [edx + 4]
        lea     esi, [esp + 0x25ac]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 4]
        fstp    dword ptr [esp + 0xc]
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 0x50]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx + 0x54]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx + 8]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx + 0xc]
        mov     dword ptr [eax + 0xc], ecx
        sub     esp, 0x7c
        mov     edi, esp
        mov     ecx, 0x1f
        rep movsd
        mov     ecx, dword ptr [esp + 0x26cc]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x26dc]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 0x26e0]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, ebp
        call    edx
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [ebx + 8]
        mov     ecx, 0x1f
        lea     esi, [esp + 0x2598]
        lea     edi, [esp + 0x48]
        rep movsd
        mov     ecx, dword ptr [ebx + 4]
        mov     dword ptr [esp + 0xc4], eax
        mov     eax, dword ptr [ebx + 0xc]
        mov     dword ptr [esp + 0xc8], ecx
        mov     ecx, dword ptr [ebx + 0x34]
        mov     dword ptr [esp + 0xcc], edx
        mov     edx, dword ptr [ebx + 0x38]
        mov     dword ptr [esp + 0xd0], eax
        mov     eax, dword ptr [ebx + 0x3c]
        mov     dword ptr [esp + 0xd4], ecx
        mov     ecx, dword ptr [ebx + 0x40]
        mov     dword ptr [esp + 0xd8], edx
        mov     edx, dword ptr [ebx + 0x44]
        mov     dword ptr [esp + 0xdc], eax
        mov     eax, dword ptr [ebx + 0x48]
        mov     dword ptr [esp + 0xe0], ecx
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     dword ptr [esp + 0xe4], edx
        mov     dword ptr [esp + 0xe8], eax
        mov     eax, dword ptr [ebx + 0x54]
        mov     dword ptr [esp + 0xf4], eax
        mov     eax, dword ptr [esp + 0x261c]
        mov     dword ptr [esp + 0x100], eax
        mov     eax, dword ptr [esp + 0x2678]
        fld     dword ptr [eax + 4]
        mov     edx, dword ptr [ebx + 0x50]
        fstp    dword ptr [esp + 0x110]
        mov     esi, dword ptr [esp + 0x2688]
        cmp     dword ptr [esi + 4], 0
        fld     dword ptr [eax]
        fld1
        mov     edi, dword ptr [esp + 0x2568]
        fdivrp  st(1), st
        mov     dword ptr [esp + 0xec], ecx
        mov     ecx, dword ptr [esp + 0x2614]
        mov     dword ptr [esp + 0xf0], edx
        mov     edx, dword ptr [esp + 0x2618]
        mov     dword ptr [esp + 0xf8], ecx
        mov     ecx, dword ptr [esp + 0x262c]
        mov     dword ptr [esp + 0xfc], edx
        mov     edx, dword ptr [esp + 0x2630]
        mov     dword ptr [esp + 0x104], ecx
        mov     ecx, dword ptr [esp + 0x2620]
        mov     dword ptr [esp + 0x108], edx
        mov     edx, dword ptr [esp + 0x2624]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x2638]
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [esp + 0x263c]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x2644]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [esp + 0x2648]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x256c]
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [esp + 0x2570]
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        fstp    dword ptr [esp + 0x114]
        fld     dword ptr [eax + 0x1c]
        fstp    dword ptr [esp + 0x118]
        fld     dword ptr [eax + 0x20]
        fstp    dword ptr [esp + 0x11c]
        mov     eax, dword ptr [esp + 0x2634]
        mov     dword ptr [esp + 0x10c], eax
        mov     eax, dword ptr [esp + 0x2628]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x2640]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [esp + 0x264c]
        mov     dword ptr [esp + 0x44], eax
        je      loc_7D94B0
        push    ebx
        push    esi
        call    ext_007D5E50
        add     esp, 8
        test    eax, eax
        je      loc_7D94B0
        cmp     dword ptr [esi + 8], 0
        mov     dword ptr [esp + 0x10], 0
        jle     loc_7D9471
        lea     eax, [ebp + 0x14]
        mov     ebp, dword ptr [esp + 0x20]
        lea     edx, [esi + 0x24]
        jmp     loc_7D93C4
        _emit   0x8d
        _emit   0x64
        _emit   0x24
        _emit   0x00

    loc_7D93C0:
        mov     edi, dword ptr [esp + 0x14]

    loc_7D93C4:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [eax - 0x10], edi
        mov     dword ptr [eax - 0xc], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax - 8], ecx
        mov     edi, eax
        mov     ecx, 9
        lea     esi, [esp + 0x24]
        rep movsd
        lea     edi, [eax + 0x24]
        mov     ecx, 0x37
        lea     esi, [esp + 0x48]
        rep movsd
        lea     edi, [eax + 0x100]
        mov     ecx, 0xc
        lea     esi, [esp + 0x2568]
        rep movsd
        lea     edi, [eax + 0x130]
        mov     ecx, 0x2e
        lea     esi, [esp + 0x2598]
        rep movsd
        lea     edi, [eax + 0x1e8]
        mov     ecx, 0xe
        lea     esi, [esp + 0x2650]
        rep movsd
        mov     esi, dword ptr [esp + 0x2688]
        mov     dword ptr [edx - 4], 1
        mov     ecx, dword ptr [esi + 0x2d0]
        mov     dword ptr [edx], ecx
        lea     ecx, [eax - 0x14]
        mov     dword ptr [edx - 8], ecx
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, 1
        mov     dword ptr [eax - 4], ebp
        mov     dword ptr [eax + 0x228], 0
        add     eax, 0x244
        add     edx, 0x38
        cmp     ecx, dword ptr [esi + 8]
        mov     dword ptr [esp + 0x10], ecx
        jl      loc_7D93C0

    loc_7D9471:
        xor     edi, edi
        cmp     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0x2d4], edi
        jle     loc_7D9496
        lea     ebp, [esi + 0x3c]

    loc_7D9481:
        mov     edx, dword ptr [ebp]
        push    edx
        call    dword ptr [mem_00924260]
        add     edi, 1
        add     ebp, 0x38
        cmp     edi, dword ptr [esi + 8]
        jl      loc_7D9481

    loc_7D9496:
        mov     ecx, dword ptr [esi + 8]
        push    -1
        push    1
        lea     eax, [esi + 0x2f8]
        push    eax
        push    ecx
        call    dword ptr [mem_009241AC]
        jmp     loc_7D9554

    loc_7D94B0:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [ebp + 4], edi
        mov     dword ptr [ebp + 8], edx
        mov     edx, dword ptr [ebx + 0xa8]
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x10], ecx
        lea     edi, [ebp + 0x14]
        mov     ecx, 9
        lea     esi, [esp + 0x24]
        rep movsd
        lea     edi, [ebp + 0x38]
        mov     ecx, 0x37
        lea     esi, [esp + 0x48]
        rep movsd
        lea     edi, [ebp + 0x114]
        mov     ecx, 0xc
        lea     esi, [esp + 0x2568]
        rep movsd
        xor     eax, eax
        lea     edi, [ebp + 0x144]
        mov     ecx, 0x2e
        lea     esi, [esp + 0x2598]
        rep movsd
        mov     dword ptr [ebp + 0x23c], eax
        mov     dword ptr [ebp + 0x234], eax
        mov     eax, dword ptr [esp + 0x2688]
        lea     edi, [ebp + 0x1fc]
        mov     ecx, 0xe
        lea     esi, [esp + 0x2650]
        push    ebp
        rep movsd
        mov     dword ptr [ebp + 0x238], edx
        mov     dword ptr [eax + 0x20], 1
        mov     dword ptr [eax + 0x1c], ebp
        call    ext_007F0290
        add     esp, 4

    loc_7D9554:
        mov     ecx, dword ptr [esp + 0x2568]
        mov     edx, dword ptr [esp + 0x256c]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x257c]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ebx + 0x58]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [ebx + 0x5c]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebx + 0x60]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [ebx + 4]
        sub     esp, 0x10
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebx + 8]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ebx + 0xc]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 0x267c]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esp + 0x2680]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x2690]
        mov     dword ptr [eax + 4], edx
        lea     edx, [esp + 0x25b4]
        mov     dword ptr [eax + 8], ecx
        push    edx
        lea     eax, [esp + 0x25ac]
        push    eax
        call    ext_007F4AB0
        add     esp, 0x3c
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x2554
        ret
    }
}

// [0x007DE210] sub_007DE210 (1711 bytes)
extern "C" void ext_007DCC90();
extern "C" void ext_007DCED0();
extern "C" void ext_007DD0A0();
extern "C" int mem_0099D148;
extern "C" __declspec(naked) void __fastcall fn_007DE210(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+0x18]
        xor ecx, ecx
        cmp eax, ecx
        jne L_7DE229
        or eax, -1
        pop esi
        add esp, 8
        ret 0x14
L_7DE229:
        mov edx, dword ptr [esi+0x14]
        push ebx
        mov ebx, dword ptr [esp+0x20]
        add eax, -1
        mov dword ptr [esi+0x18], eax
        push ebp
        mov ebp, dword ptr [esp+0x28]
        push edi
        mov edi, dword ptr [edx+4*eax]
        mov edx, dword ptr [esi+0x10]
        mov eax, edi
        imul eax, eax, 0x9c
        add edx, eax
        cmp ebp, ecx
        mov dword ptr [edx+0x1c], ebx
        mov ebx, dword ptr [esp+0x24]
        mov dword ptr [edx+0x20], ebx
        mov ebx, dword ptr [esp+0x20]
        mov dword ptr [esp+0x10], eax
        mov eax, dword ptr [esp+0x1c]
        mov dword ptr [edx+0xc], eax
        mov dword ptr [edx+8], edi
        mov dword ptr [edx+0x18], ebx
        mov dword ptr [edx+0x10], ecx
        mov dword ptr [eax+0x20], edi
        mov dword ptr [eax+0xc], esi
        lea eax, [edx+0x24]
        jne L_7DE398
        mov byte ptr [eax+0x10], cl
        fld dword ptr [mem_0099D148]
        fst dword ptr [eax+8]
        mov dword ptr [eax+0xc], edx
        mov ebx, dword ptr [esi+0xac]
        lea ebp, [esi+0xa8]
        mov ecx, ebx
        sub ecx, ebp
        neg ecx
        sbb ecx, ecx
        and ecx, ebx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx+4], eax
        fst dword ptr [eax+0x1c]
        mov dword ptr [eax+0x20], edx
        mov byte ptr [eax+0x24], 1
        mov ebx, dword ptr [ebp+4]
        add eax, 0x14
        mov ecx, ebx
        sub ecx, ebp
        neg ecx
        sbb ecx, ecx
        and ecx, ebx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx+4], eax
        fst dword ptr [eax+0x1c]
        mov dword ptr [eax+0x20], edx
        mov byte ptr [eax+0x24], 0
        mov ebx, dword ptr [esi+0xb4]
        add eax, 0x14
        lea ebp, [esi+0xb0]
        mov ecx, ebx
        sub ecx, ebp
        neg ecx
        sbb ecx, ecx
        and ecx, ebx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx+4], eax
        fst dword ptr [eax+0x1c]
        mov dword ptr [eax+0x20], edx
        add eax, 0x14
        mov byte ptr [eax+0x10], 1
        mov ebx, dword ptr [ebp+4]
        mov ecx, ebx
        sub ecx, ebp
        neg ecx
        sbb ecx, ecx
        and ecx, ebx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx+4], eax
        fst dword ptr [eax+0x1c]
        add eax, 0x14
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 0
        mov ebp, dword ptr [esi+0xbc]
        lea ebx, [esi+0xb8]
        mov ecx, ebp
        sub ecx, ebx
        neg ecx
        sbb ecx, ecx
        and ecx, ebp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx+4], eax
        fstp dword ptr [eax+0x1c]
        add eax, 0x14
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 1
        mov edx, dword ptr [ebx+4]
        mov ecx, edx
        sub ecx, ebx
        neg ecx
        sbb ecx, ecx
        and ecx, edx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov edx, dword ptr [eax]
        mov dword ptr [edx+4], eax
        jmp L_7DE8A9
L_7DE398:
        mov ecx, dword ptr [ebp+0x20]
        mov ebx, dword ptr [esi+0x10]
        imul ecx, ecx, 0x9c
        fld dword ptr [ecx+ebx+0x2c]
        fstp dword ptr [eax+8]
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 0
        lea ecx, [ecx+ebx+0x24]
        mov dword ptr [eax], ecx
        mov ebx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ebx
        mov dword ptr [ebx], eax
        mov ebx, dword ptr [eax]
        mov dword ptr [ebx+4], eax
        add eax, 0x14
        fld dword ptr [ecx+0x1c]
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 1
        fstp dword ptr [eax+8]
        add ecx, 0x14
        mov dword ptr [eax], ecx
        mov ebx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ebx
        mov dword ptr [ebx], eax
        mov ebx, dword ptr [eax]
        mov dword ptr [ebx+4], eax
        add eax, 0x14
        fld dword ptr [ecx+0x1c]
        add ecx, 0x14
        fstp dword ptr [eax+8]
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 0
        mov dword ptr [eax], ecx
        mov ebx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ebx
        mov dword ptr [ebx], eax
        mov ebx, dword ptr [eax]
        mov dword ptr [ebx+4], eax
        fld dword ptr [ecx+0x1c]
        add eax, 0x14
        add ecx, 0x14
        fstp dword ptr [eax+8]
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 1
        mov dword ptr [eax], ecx
        mov ebx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ebx
        mov dword ptr [ebx], eax
        mov ebx, dword ptr [eax]
        mov dword ptr [ebx+4], eax
        fld dword ptr [ecx+0x1c]
        add eax, 0x14
        add ecx, 0x14
        fstp dword ptr [eax+8]
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 0
        mov dword ptr [eax], ecx
        mov ebx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ebx
        mov dword ptr [ebx], eax
        mov ebx, dword ptr [eax]
        mov dword ptr [ebx+4], eax
        fld dword ptr [ecx+0x1c]
        add eax, 0x14
        add ecx, 0x14
        fstp dword ptr [eax+8]
        mov dword ptr [eax+0xc], edx
        mov byte ptr [eax+0x10], 1
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ecx+4]
        mov dword ptr [eax+4], ecx
        mov dword ptr [ecx], eax
        mov edx, dword ptr [eax]
        mov dword ptr [edx+4], eax
        mov edx, dword ptr [ebp+0x20]
        cmp edi, edx
        jge L_7DE5BD
        lea eax, [edi+1]
        cmp eax, edx
        mov dword ptr [esp+0x1c], eax
        jge L_7DE562
        lea ebx, [edi+2]
        imul ebx, eax
        sar ebx, 1
        mov ecx, eax
        imul ecx, ecx, 0x9c
        lea ebp, [eax+1]
        mov dword ptr [esp+0x20], ebx
        mov dword ptr [esp+0x24], ecx
        mov dword ptr [esp+0x28], ebp
        jmp L_7DE4B8
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_7DE4B0:
        mov ebp, dword ptr [esp+0x28]
        mov ebx, dword ptr [esp+0x20]
L_7DE4B8:
        mov ecx, dword ptr [esi+0xc]
        mov eax, ecx
        imul ecx, dword ptr [esp+0x1c]
        imul eax, edi
        sub eax, ebx
        add eax, dword ptr [esp+0x1c]
        lea ebx, [ebp+1]
        imul ebx, ebp
        sar ebx, 1
        sub ecx, ebx
        mov ebx, dword ptr [esi+0x20]
        add ecx, edx
        mov ebp, eax
        mov edx, ecx
        and al, 1
        and cl, 1
        sar edx, 1
        mov dl, byte ptr [edx+ebx]
        add al, al
        add cl, cl
        add al, al
        add cl, cl
        shr dl, cl
        movzx ecx, al
        sar ebp, 1
        add ebp, ebx
        and dl, 3
        mov eax, 0xf0
        sar eax, cl
        mov bl, dl
        shl bl, cl
        mov dword ptr [esp+0x14], ecx
        and al, byte ptr [ebp]
        or al, bl
        mov byte ptr [ebp], al
        cmp dl, byte ptr [esi+4]
        jne L_7DE539
        mov eax, dword ptr [esi+0x10]
        mov ecx, dword ptr [esp+0x24]
        mov edx, dword ptr [eax+ecx+0xc]
        mov ecx, dword ptr [esp+0x10]
        push edx
        mov edx, dword ptr [ecx+eax+0xc]
        mov eax, dword ptr [esi+0x2c]
        push edx
        push eax
        call ext_007DCC90
        add esp, 0xc
L_7DE539:
        mov eax, dword ptr [esp+0x1c]
        mov ecx, dword ptr [esp+0x2c]
        mov edx, dword ptr [ecx+0x20]
        add dword ptr [esp+0x28], 1
        add dword ptr [esp+0x24], 0x9c
        add eax, 1
        cmp eax, edx
        mov dword ptr [esp+0x1c], eax
        jl L_7DE4B0
        mov ebp, ecx
L_7DE562:
        mov ecx, dword ptr [ebp+0x20]
        lea eax, [edi+1]
        mov bl, byte ptr [esi+4]
        lea edx, [edi+2]
        imul edx, eax
        mov eax, dword ptr [esi+0xc]
        imul eax, edi
        sar edx, 1
        sub eax, edx
        add eax, ecx
        mov edx, eax
        and al, 1
        add al, al
        add al, al
        mov dword ptr [esp+0x24], ecx
        movzx ecx, al
        sar edx, 1
        add edx, dword ptr [esi+0x20]
        mov eax, 0xf0
        sar eax, cl
        shl bl, cl
        mov dword ptr [esp+0x1c], edi
        and al, byte ptr [edx]
        or al, bl
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp+0x20]
        mov eax, dword ptr [esi+0x10]
        imul ecx, ecx, 0x9c
        mov edx, dword ptr [ecx+eax+0xc]
        mov ecx, dword ptr [esp+0x10]
        jmp L_7DE6F0
L_7DE5BD:
        add edx, 1
        cmp edx, edi
        mov dword ptr [esp+0x1c], edx
        jge L_7DE69A
        mov eax, edx
        imul eax, eax, 0x9c
        mov dword ptr [esp+0x24], eax
        lea eax, [edx+1]
        mov dword ptr [esp+0x28], eax
        jmp L_7DE5E9
L_7DE5E1:
        mov eax, dword ptr [esp+0x28]
        mov edx, dword ptr [esp+0x1c]
L_7DE5E9:
        mov ebx, dword ptr [esi+0xc]
        lea ecx, [eax+1]
        imul ecx, eax
        mov eax, ebx
        imul eax, edx
        sar ecx, 1
        sub eax, ecx
        mov ecx, dword ptr [ebp+0x20]
        lea ebp, [ecx+1]
        lea edx, [ecx+2]
        imul ecx, ebx
        mov ebx, dword ptr [esi+0x20]
        imul edx, ebp
        sar edx, 1
        sub ecx, edx
        add ecx, dword ptr [esp+0x1c]
        add eax, edi
        mov ebp, eax
        mov edx, ecx
        and al, 1
        and cl, 1
        sar edx, 1
        mov dl, byte ptr [edx+ebx]
        add al, al
        add cl, cl
        add al, al
        add cl, cl
        shr dl, cl
        movzx ecx, al
        sar ebp, 1
        add ebp, ebx
        and dl, 3
        mov eax, 0xf0
        sar eax, cl
        mov bl, dl
        shl bl, cl
        mov dword ptr [esp+0x20], ecx
        and al, byte ptr [ebp]
        or al, bl
        mov byte ptr [ebp], al
        cmp dl, byte ptr [esi+4]
        jne L_7DE676
        mov eax, dword ptr [esi+0x10]
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [ecx+eax+0xc]
        mov ecx, dword ptr [esp+0x24]
        push edx
        mov edx, dword ptr [eax+ecx+0xc]
        mov eax, dword ptr [esi+0x2c]
        push edx
        push eax
        call ext_007DCC90
        add esp, 0xc
L_7DE676:
        mov eax, dword ptr [esp+0x1c]
        add dword ptr [esp+0x28], 1
        add dword ptr [esp+0x24], 0x9c
        mov ebp, dword ptr [esp+0x2c]
        add eax, 1
        cmp eax, edi
        mov dword ptr [esp+0x1c], eax
        jl L_7DE5E1
L_7DE69A:
        mov ecx, dword ptr [ebp+0x20]
        lea eax, [ecx+1]
        lea edx, [ecx+2]
        imul edx, eax
        mov eax, dword ptr [esi+0xc]
        imul eax, ecx
        mov bl, byte ptr [esi+4]
        sar edx, 1
        sub eax, edx
        add eax, edi
        mov edx, eax
        and al, 1
        add al, al
        add al, al
        mov dword ptr [esp+0x1c], ecx
        movzx ecx, al
        sar edx, 1
        add edx, dword ptr [esi+0x20]
        mov eax, 0xf0
        sar eax, cl
        shl bl, cl
        mov ecx, dword ptr [esp+0x10]
        mov dword ptr [esp+0x24], edi
        and al, byte ptr [edx]
        or al, bl
        mov byte ptr [edx], al
        mov eax, dword ptr [esi+0x10]
        mov edx, dword ptr [ecx+eax+0xc]
        mov ecx, dword ptr [ebp+0x20]
        imul ecx, ecx, 0x9c
L_7DE6F0:
        push edx
        mov edx, dword ptr [ecx+eax+0xc]
        mov eax, dword ptr [esi+0x2c]
        push edx
        push eax
        call ext_007DCC90
        mov ecx, dword ptr [esp+0x28]
        add esp, 0xc
        test ecx, ecx
        jle L_7DE7BA
        mov dword ptr [esp+0x1c], 0
        mov eax, 1
        mov dword ptr [esp+0x28], ecx
        nop
L_7DE720:
        mov ebx, dword ptr [esi+0x20]
        lea ecx, [eax+1]
        mov dword ptr [esp+0x14], ecx
        imul ecx, eax
        add eax, -1
        imul eax, dword ptr [esi+0xc]
        sar ecx, 1
        sub eax, ecx
        mov ecx, dword ptr [ebp+0x20]
        add ecx, eax
        lea edx, [eax+edi]
        mov ebp, edx
        mov eax, ecx
        and dl, 1
        and cl, 1
        sar eax, 1
        mov al, byte ptr [eax+ebx]
        add dl, dl
        add cl, cl
        add dl, dl
        add cl, cl
        shr al, cl
        movzx ecx, dl
        sar ebp, 1
        add ebp, ebx
        and al, 3
        mov edx, 0xf0
        sar edx, cl
        mov bl, al
        shl bl, cl
        mov dword ptr [esp+0x20], ecx
        and dl, byte ptr [ebp]
        or dl, bl
        mov byte ptr [ebp], dl
        cmp al, byte ptr [esi+4]
        jne L_7DE79F
        mov eax, dword ptr [esi+0x10]
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [ecx+eax+0xc]
        mov ecx, dword ptr [esp+0x1c]
        push edx
        mov edx, dword ptr [eax+ecx+0xc]
        mov eax, dword ptr [esi+0x2c]
        push edx
        push eax
        call ext_007DCC90
        add esp, 0xc
L_7DE79F:
        add dword ptr [esp+0x1c], 0x9c
        sub dword ptr [esp+0x28], 1
        mov eax, dword ptr [esp+0x14]
        mov ebp, dword ptr [esp+0x2c]
        jne L_7DE720
L_7DE7BA:
        mov ebx, dword ptr [esp+0x24]
        add ebx, 1
        cmp ebx, dword ptr [esi+0xc]
        mov dword ptr [esp+0x1c], ebx
        jge L_7DE89D
        lea ecx, [edi+2]
        lea edx, [edi+1]
        imul ecx, edx
        sar ecx, 1
        mov eax, ebx
        imul eax, eax, 0x9c
        mov dword ptr [esp+0x20], ecx
        mov dword ptr [esp+0x28], eax
        jmp L_7DE7FC
        jmp L_7DE7F0
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
L_7DE7F0:
        mov ecx, dword ptr [esp+0x20]
        mov ebx, dword ptr [esp+0x1c]
        mov ebp, dword ptr [esp+0x2c]
L_7DE7FC:
        mov edx, dword ptr [esi+0xc]
        mov eax, edx
        imul eax, edi
        sub eax, ecx
        mov ecx, dword ptr [ebp+0x20]
        add eax, ebx
        lea ebp, [ecx+1]
        lea ebx, [ecx+2]
        imul ecx, edx
        imul ebx, ebp
        sar ebx, 1
        sub ecx, ebx
        add ecx, dword ptr [esp+0x1c]
        mov ebx, dword ptr [esi+0x20]
        mov ebp, eax
        mov edx, ecx
        and al, 1
        and cl, 1
        sar edx, 1
        mov dl, byte ptr [edx+ebx]
        add al, al
        add cl, cl
        add al, al
        add cl, cl
        shr dl, cl
        movzx ecx, al
        sar ebp, 1
        add ebp, ebx
        and dl, 3
        mov eax, 0xf0
        sar eax, cl
        mov bl, dl
        shl bl, cl
        mov dword ptr [esp+0x24], ecx
        and al, byte ptr [ebp]
        or al, bl
        mov byte ptr [ebp], al
        cmp dl, byte ptr [esi+4]
        jne L_7DE881
        mov eax, dword ptr [esi+0x10]
        mov ecx, dword ptr [esp+0x28]
        mov edx, dword ptr [eax+ecx+0xc]
        mov ecx, dword ptr [esp+0x10]
        push edx
        mov edx, dword ptr [ecx+eax+0xc]
        mov eax, dword ptr [esi+0x2c]
        push edx
        push eax
        call ext_007DCC90
        add esp, 0xc
L_7DE881:
        mov eax, dword ptr [esp+0x1c]
        add dword ptr [esp+0x28], 0x9c
        add eax, 1
        cmp eax, dword ptr [esi+0xc]
        mov dword ptr [esp+0x1c], eax
        jl L_7DE7F0
L_7DE89D:
        mov ecx, dword ptr [esi+0x2c]
        push ecx
        call ext_007DCED0
        add esp, 4
L_7DE8A9:
        push 1
        push edi
        mov ecx, esi
        call ext_007DD0A0
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 8
        ret 0x14
    }
}

// [0x007D5FF0] sub_007D5FF0 (185 bytes)
extern "C" void ext_006A6EC0();
extern "C" void ext_007D5DA0();
extern "C" void ext_007D5F50();
extern "C" void ext_007F0290();
extern "C" void ext_007F0370();
extern "C" int mem_00AA7E40;
extern "C" int mem_00924274;
extern "C" int mem_00924260;

extern "C" __declspec(naked) void __cdecl fn_007D5FF0(...) {
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [mem_00AA7E40]
        xor     eax, ebp
        mov     dword ptr [ebp - 0x4], eax
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi + 0x18]
        add     eax, 0x1
        push    edi
        shl     eax, 0xc
        call    ext_006A6EC0
        push    0x0
        call    ext_007D5DA0
        mov     edi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [mem_00924274]
        add     esp, 0x4
    loc_7D6025:
        mov     eax, dword ptr [esi + 0x2c]
        push    -0x1
        push    eax
        call    ebx
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jne     loc_7D6069
        push    eax
        push    esi
        call    ext_007D5F50
        add     esp, 0x8
        test    eax, eax
        je      loc_7D6098
    loc_7D6042:
        mov     ecx, dword ptr [esi + 0x8]
        push    edi
        push    ecx
        call    ext_007F0370
        push    0x0
        push    esi
        call    ext_007D5F50
        add     esp, 0x10
        test    eax, eax
        jne     loc_7D6042
        mov     eax, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    dword ptr [mem_00924260]
        jmp     loc_7D6025
    loc_7D6069:
        cmp     eax, 0x1
        jne     loc_7D6098
        push    eax
        push    esi
        call    ext_007D5F50
        add     esp, 0x8
        test    eax, eax
        je      loc_7D6098
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loc_7D6080:
        mov     edx, dword ptr [esi + 0xc]
        push    edx
        call    ext_007F0290
        push    0x1
        push    esi
        call    ext_007D5F50
        add     esp, 0xc
        test    eax, eax
        jne     loc_7D6080
    loc_7D6098:
        mov     eax, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [eax]
        push    ecx
        call    dword ptr [mem_00924260]
        _emit 0xe9
        _emit 0x7c
        _emit 0xff
        _emit 0xff
        _emit 0xff
    }
}

// [0x007D3EA0] sub_007D3EA0 (1963 bytes)
extern "C" void ext_007CD880();
extern "C" void ext_007CD900();
extern "C" void ext_007CD960();
extern "C" void ext_007CD9D0();
extern "C" void ext_007CDC00();
extern "C" void ext_007CE490();
extern "C" void ext_007D3A50();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_007D3EA0(void* self) {
    __asm {
        sub esp, 0xd4
        push ebx
        mov ebx, dword ptr [esp + 0xe0]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0xe4]
        push edi
        push ebx
        push esi
        push 0x0
        call ext_007CE490
        push ebx
        push esi
        push 0x1
        call ext_007CE490
        push ebx
        push esi
        push 0x2
        call ext_007CE490
        push ebx
        push esi
        push 0x3
        call ext_007CE490
        push ebx
        push esi
        push 0x4
        call ext_007CE490
        push ebx
        push esi
        push 0x5
        call ext_007CE490
        mov eax, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [ebx + 0xb4]
        mov dword ptr [ecx + 8*eax], edx
        mov eax, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [ebx + 0xb8]
        mov dword ptr [ecx + 8*eax + 0x4], edx
        add esp, 0x48
        xor eax, eax
        cmp dword ptr [ebx + 0xb8], -0x1
        push ebx
        setne al
        lea ecx, [ebx + 0x12c]
        lea edx, [ebx + 0xec]
        push eax
        mov eax, dword ptr [esp + 0xf8]
        push ecx
        mov ecx, dword ptr [ebx + 0xb8]
        push edx
        mov edx, dword ptr [ebx + 0xb4]
        shl ecx, 0x6
        add ecx, eax
        shl edx, 0x6
        push ecx
        add edx, eax
        push edx
        push esi
        call ext_007D3A50
        mov ebp, dword ptr [esp + 0x110]
        add esp, 0x1c
        cmp dword ptr [ebx + 0x170], 0x0
        je short L_007d3f87
        mov eax, dword ptr [ebx + 0xb4]
        mov edi, dword ptr [ebp + 4*eax]
        add edi, 0xd0
        lea eax, [ebx + 0x160]
        mov ecx, edi
        lea edx, [esp + 0x10]
        call ext_007CD880
        jmp short L_007d3fb6
    L_007d3f87:
        mov ecx, dword ptr [ebx + 0xb4]
        mov edi, dword ptr [ebp + 4*ecx]
        fld dword ptr [edi + 0xd0]
        add edi, 0xd0
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esp + 0x1c]
    L_007d3fb6:
        lea ecx, [esp + 0x10]
        lea eax, [esp + 0xb4]
        call ext_007CD900
        cmp dword ptr [ebx + 0xb8], -0x1
        je near ptr L_007d4117
        cmp dword ptr [ebx + 0x184], 0x0
        je near ptr L_007d40ad
        mov edx, dword ptr [ebx + 0xb8]
        mov eax, dword ptr [ebp + 4*edx]
        fld dword ptr [eax + 0xd0]
        lea ecx, [ebx + 0x174]
        fstp dword ptr [esp + 0x10]
        lea edx, [esp + 0x30]
        fld dword ptr [eax + 0xd4]
        fchs
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0xd8]
        fchs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0xdc]
        lea eax, [ebx + 0x1a4]
        fchs
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ecx]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [ebx + 0x178]
        fchs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [ebx + 0x17c]
        fchs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebx + 0x180]
        fchs
        fstp dword ptr [esp + 0x2c]
        call ext_007CD880
        mov eax, dword ptr [ebx + 0xb8]
        mov ecx, dword ptr [ebp + 4*eax]
        mov eax, edx
        add ecx, 0xd0
        lea edx, [esp + 0x40]
        call ext_007CD880
        lea eax, [ebx + 0x160]
        mov ecx, edi
        lea edx, [esp + 0x30]
        call ext_007CD880
        mov eax, edx
        lea ecx, [esp + 0x10]
        lea edx, [esp + 0xa4]
        call ext_007CD880
        mov eax, edx
        lea ecx, [esp + 0x20]
        lea edx, [esp + 0x10]
        call ext_007CD880
        lea ecx, [esp + 0x40]
        jmp near ptr L_007d4155
    L_007d40ad:
        mov eax, dword ptr [ebx + 0xb8]
        mov eax, dword ptr [ebp + 4*eax]
        fld dword ptr [eax + 0xd0]
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        lea edx, [esp + 0x10]
        fld dword ptr [eax + 0xd4]
        fchs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0xd8]
        fchs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax + 0xdc]
        mov eax, edi
        fchs
        fstp dword ptr [esp + 0x2c]
        call ext_007CD880
        mov ecx, dword ptr [ebx + 0xb8]
        mov ecx, dword ptr [ebp + 4*ecx]
        lea eax, [ebx + 0x1a4]
        add ecx, 0xd0
        lea edx, [esp + 0x40]
        call ext_007CD880
        mov ecx, edx
        jmp short L_007d4155
    L_007d4117:
        mov eax, dword ptr [ebx + 0x170]
        test eax, eax
        je short L_007d4134
        lea eax, [ebx + 0x160]
        mov ecx, edi
        lea edx, [esp + 0x10]
        call ext_007CD880
        jmp short L_007d414f
    L_007d4134:
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [esp + 0x1c]
    L_007d414f:
        lea ecx, [ebx + 0x1a4]
    L_007d4155:
        lea eax, [esp + 0x74]
        call ext_007CD960
        lea ecx, [esp + 0x50]
        push ecx
        lea edx, [esp + 0xb8]
        push edx
        push eax
        push 0x3
        mov edi, 0x4
        mov eax, 0x3
        call ext_007CD9D0
        fld qword ptr [mem_00993828]
        add esp, 0x10
        lea eax, [esp + 0x54]
        mov ecx, 0x3
    L_007d418f:
        fld dword ptr [eax - 0x4]
        add eax, 0xc
        sub ecx, 0x1
        fmul st, st(1)
        fstp dword ptr [eax - 0x10]
        fld dword ptr [eax - 0xc]
        fmul st, st(1)
        fstp dword ptr [eax - 0xc]
        fld dword ptr [eax - 0x8]
        fmul st, st(1)
        fstp dword ptr [eax - 0x8]
        jne short L_007d418f
        fstp st(0)
        xor eax, eax
        lea ecx, [esp + 0x54]
    L_007d41b7:
        mov edx, dword ptr [esi + 0x4]
        fld dword ptr [ecx - 0x4]
        mov edi, dword ptr [esi]
        add edx, eax
        shl edx, 0x6
        fstp dword ptr [edx + edi + 0xd0]
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        fld dword ptr [ecx]
        add edx, eax
        shl edx, 0x6
        fstp dword ptr [edx + edi + 0xd4]
        mov edx, dword ptr [esi + 0x4]
        fld dword ptr [ecx + 0x4]
        mov edi, dword ptr [esi]
        add edx, eax
        shl edx, 0x6
        add eax, 0x1
        fstp dword ptr [edx + edi + 0xd8]
        add ecx, 0xc
        cmp eax, 0x3
        jl short L_007d41b7
        cmp dword ptr [ebx + 0xb8], -0x1
        je short L_007d425c
        xor eax, eax
        lea ecx, [esp + 0x54]
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00 // lea esp, [esp]
    L_007d4210:
        mov edx, dword ptr [esi + 0x4]
        fld dword ptr [ecx - 0x4]
        mov edi, dword ptr [esi]
        fchs
        add edx, eax
        shl edx, 0x6
        fstp dword ptr [edx + edi + 0xf0]
        mov edx, dword ptr [esi + 0x4]
        fld dword ptr [ecx]
        mov edi, dword ptr [esi]
        add edx, eax
        fchs
        shl edx, 0x6
        fstp dword ptr [edx + edi + 0xf4]
        mov edx, dword ptr [esi + 0x4]
        fld dword ptr [ecx + 0x4]
        mov edi, dword ptr [esi]
        add edx, eax
        fchs
        shl edx, 0x6
        add eax, 0x1
        fstp dword ptr [edx + edi + 0xf8]
        add ecx, 0xc
        cmp eax, 0x3
        jl short L_007d4210
    L_007d425c:
        lea ecx, [ebx + 0x1a4]
        lea eax, [esp + 0x74]
        call ext_007CD960
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x7c]
        push edx
        push 0x1
        mov edi, 0x4
        mov eax, 0x3
        call ext_007CD9D0
        mov eax, dword ptr [esi + 0x2c]
        lea ecx, [eax + 0x3]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d42a9
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d42a9:
        fld dword ptr [esp + 0x30]
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [esi + 0x28]
        fstp dword ptr [ecx + 4*eax]
        mov eax, dword ptr [esi + 0x2c]
        lea ecx, [eax + 0x4]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d42d4
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d42d4:
        fld dword ptr [esp + 0x34]
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [esi + 0x28]
        fstp dword ptr [eax + 4*edx]
        mov eax, dword ptr [esi + 0x2c]
        lea ecx, [eax + 0x5]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d42ff
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d42ff:
        mov edx, dword ptr [esi + 0x28]
        fld dword ptr [esp + 0x38]
        lea ecx, [ecx + 4*eax]
        fstp dword ptr [edx + 4*ecx]
        lea ecx, [esp + 0x20]
        lea eax, [esp + 0xc4]
        call ext_007CD900
        lea eax, [esp + 0x60]
        push eax
        lea ecx, [esp + 0xc8]
        push ecx
        lea edx, [esp + 0x8c]
        push edx
        push 0x3
        mov eax, 0x3
        call ext_007CD9D0
        mov eax, dword ptr [esi + 0x20]
        lea ecx, [eax + 0x3]
        mov eax, ecx
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d435b
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d435b:
        lea eax, [ecx + 4*eax]
        mov ecx, dword ptr [esi + 0x1c]
        lea edx, [ecx + 4*eax]
        push edx
        lea eax, [ebx + 0x1b4]
        push eax
        lea ecx, [esp + 0x78]
        push ecx
        mov edi, 0x3
        push 0x1
        mov eax, edi
        call ext_007CD9D0
        mov eax, dword ptr [esi + 0x20]
        lea ecx, [eax + 0x3]
        mov eax, ecx
        cdq
        and edx, edi
        add eax, edx
        add esp, 0x30
        sar eax, 0x2
        and ecx, 0x80000003
        jns short L_007d439f
        dec ecx
        or ecx, -0x4
        inc ecx
    L_007d439f:
        lea edx, [ecx + 4*eax]
        mov eax, dword ptr [esi + 0x1c]
        fld dword ptr [eax + 4*edx]
        lea eax, [eax + 4*edx]
        fld qword ptr [mem_00993828]
        xor ecx, ecx
        fmul st(1), st
        lea ebp, [ebx + 0x1cc]
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fmul st, st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [eax + 0x8]
        fstp dword ptr [eax + 0x8]
        fldz
    L_007d43cf:
        mov edx, dword ptr [esi + 0x38]
        fld dword ptr [ebp]
        lea edi, [edx + ecx]
        fchs
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d43f2
        dec edi
        or edi, -0x4
        inc edi
    L_007d43f2:
        mov edx, dword ptr [esi + 0x34]
        lea eax, [edi + 4*eax]
        fstp dword ptr [edx + 4*eax]
        mov eax, dword ptr [esi + 0x44]
        lea edi, [eax + ecx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d4419
        dec edi
        or edi, -0x4
        inc edi
    L_007d4419:
        fld dword ptr [ebp]
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [esi + 0x40]
        fstp dword ptr [eax + 4*edx]
        mov edx, dword ptr [esi + 0x44]
        lea edi, [edx + ecx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d4443
        dec edi
        or edi, -0x4
        inc edi
    L_007d4443:
        mov edx, dword ptr [esi + 0x40]
        lea eax, [edi + 4*eax]
        fcom dword ptr [edx + 4*eax]
        fnstsw ax
        test ah, 0x44
        jp near ptr L_007d44ec
        mov eax, dword ptr [esi + 0x2c]
        lea edi, [eax + ecx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d4475
        dec edi
        or edi, -0x4
        inc edi
    L_007d4475:
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [esi + 0x28]
        fst dword ptr [eax + 4*edx]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + eax]
        or eax, -0x1
        cmp dword ptr [ebx + 0xb8], eax
        je short L_007d44a4
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x20]
    L_007d44a4:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x4]
        cmp dword ptr [ebx + 0xb8], eax
        je short L_007d44c8
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x24]
    L_007d44c8:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x8]
        cmp dword ptr [ebx + 0xb8], eax
        je short L_007d44ec
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        add eax, ecx
        shl eax, 0x6
        fst dword ptr [eax + edx + 0x28]
    L_007d44ec:
        add ecx, 0x1
        add ebp, 0x4
        cmp ecx, 0x3
        jl near ptr L_007d43cf
        mov ecx, 0x3
        lea ebp, [ebx + 0x1c0]
    L_007d4506:
        mov eax, dword ptr [esi + 0x38]
        fld dword ptr [ebp]
        lea edi, [eax + ecx]
        fchs
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d4529
        dec edi
        or edi, -0x4
        inc edi
    L_007d4529:
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [esi + 0x34]
        fstp dword ptr [eax + 4*edx]
        mov edx, dword ptr [esi + 0x44]
        lea edi, [edx + ecx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d4550
        dec edi
        or edi, -0x4
        inc edi
    L_007d4550:
        mov edx, dword ptr [esi + 0x40]
        fld dword ptr [ebp]
        lea eax, [edi + 4*eax]
        fstp dword ptr [edx + 4*eax]
        mov eax, dword ptr [esi + 0x44]
        lea edi, [eax + ecx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d457a
        dec edi
        or edi, -0x4
        inc edi
    L_007d457a:
        lea edx, [edi + 4*eax]
        mov eax, dword ptr [esi + 0x40]
        fcom dword ptr [eax + 4*edx]
        fnstsw ax
        test ah, 0x44
        jp near ptr L_007d4624
        mov edx, dword ptr [esi + 0x2c]
        lea edi, [edx + ecx]
        mov eax, edi
        cdq
        and edx, 0x3
        add eax, edx
        sar eax, 0x2
        and edi, 0x80000003
        jns short L_007d45ac
        dec edi
        or edi, -0x4
        inc edi
    L_007d45ac:
        mov edx, dword ptr [esi + 0x28]
        lea eax, [edi + 4*eax]
        fst dword ptr [edx + 4*eax]
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        add eax, ecx
        shl eax, 0x6
        fst dword ptr [eax + edx + 0x10]
        or eax, -0x1
        cmp dword ptr [ebx + 0xb8], eax
        je short L_007d45dc
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x30]
    L_007d45dc:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x14]
        cmp dword ptr [ebx + 0xb8], eax
        je short L_007d4600
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x34]
    L_007d4600:
        mov edx, dword ptr [esi + 0x4]
        mov edi, dword ptr [esi]
        add edx, ecx
        shl edx, 0x6
        fst dword ptr [edx + edi + 0x18]
        cmp dword ptr [ebx + 0xb8], eax
        je short L_007d4624
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        add eax, ecx
        shl eax, 0x6
        fst dword ptr [eax + edx + 0x38]
    L_007d4624:
        add ecx, 0x1
        add ebp, 0x4
        cmp ecx, 0x6
        jl near ptr L_007d4506
        push 0x6
        fstp st(0)
        push esi
        call ext_007CDC00
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd4
        ret
    }
}


// [0x007D7A50] sub_007D7A50 (2392 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_007D5E50();
extern "C" void ext_007D9630();
extern "C" void ext_007F0370();
extern "C" void ext_007F2440();
extern "C" void ext_007F2660();
extern "C" void ext_007F28F0();
extern "C" int mem_00924260;
extern "C" int mem_009241AC;
extern "C" int mem_0099E08C;
extern "C" int mem_0099E0A0;

extern "C" __declspec(naked) void __fastcall fn_007D7A50(void* self) {
    __asm {
        sub	esp, 0xd90
        mov	ecx, dword ptr [esp + 0xd94]
        mov	edx, dword ptr [esp + 0xd98]
        push	ebx
        push	ebp
        push	esi
        push	edi
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xdb8]
        mov	dword ptr [eax + 0x4], edx
        mov	dword ptr [eax + 0x8], ecx
        call ext_00493D90
        mov	edi, dword ptr [esp + 0xe0c]
        add	esp, 0xc
        cmp	dword ptr [edi + 0x30], 0x2
        mov	dword ptr [esp + 0x68], offset mem_0099E08C
        mov	dword ptr [esp + 0x64], offset mem_0099E0A0
        jne short L_7d7aab
        lea	esi, [esp + 0x64]
        mov	dword ptr [esp + 0x10], esi
        jmp short L_7d7ab5
    L_7d7aab:
        lea	edx, [esp + 0x68]
        mov	dword ptr [esp + 0x10], edx
        mov	esi, edx
    L_7d7ab5:
        mov	eax, dword ptr [esi]
        mov	edx, dword ptr [eax + 0x8]
        mov	ecx, esi
        call	edx
        mov	ebp, dword ptr [esp + 0xe10]
        mov	eax, dword ptr [ebp + 0x8]
        mov	ecx, dword ptr [edi + 0x2c]
        mov	edx, dword ptr [edi + 0x28]
        push	eax
        push	ecx
        push	edx
        lea	eax, [esp + 0x12c]
        push	eax
        mov	ecx, esi
        call ext_007D9630
        mov	ebx, dword ptr [esp + 0xdd8]
        mov	eax, dword ptr [esp + 0xe14]
        mov	ecx, dword ptr [ebx + 0xa8]
        push	eax
        mov	eax, dword ptr [ebx + 0xa0]
        push	ecx
        mov	ecx, dword ptr [ebx + 0x70]
        mov	edx, dword ptr [esi]
        push	eax
        mov	edx, dword ptr [edx + 0xc]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x74]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x78]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x7c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x80]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x84]
        mov	dword ptr [eax + 0x8], ecx
        lea	eax, [esp + 0x144]
        push	eax
        lea	ecx, [esp + 0x94]
        push	ecx
        mov	ecx, esi
        call	edx
        mov	ecx, dword ptr [ebx + 0x70]
        mov	edx, dword ptr [ebx + 0x74]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x78]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [ebx + 0x64]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x68]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x6c]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x58]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [ebx + 0x5c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x60]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [ebx]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x4]
        sub	esp, 0x10
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x8]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0xc]
        mov	dword ptr [eax + 0x8], edx
        mov	dword ptr [eax + 0xc], ecx
        lea	edx, [esp + 0x48]
        mov	ecx, dword ptr [esp + 0xa0]
        push	edx
        mov	edx, dword ptr [esp + 0xa8]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xb8]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [esp + 0xbc]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xc0]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [esp + 0xd0]
        mov	dword ptr [eax + 0x4], ecx
        mov	dword ptr [eax + 0x8], edx
        call ext_007F2660
        mov	ecx, dword ptr [ebx + 0x64]
        mov	edx, dword ptr [ebx + 0x68]
        add	esp, 0x44
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	dword ptr [eax + 0x4], edx
        mov	ecx, dword ptr [ebx + 0x6c]
        mov	dword ptr [eax + 0x8], ecx
        mov	edx, dword ptr [ebx + 0x70]
        mov	ecx, dword ptr [ebx + 0x74]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x78]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x4c]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [ebx + 0x50]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x54]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [ebx + 0x40]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x44]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x48]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x34]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [ebx + 0x38]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x3c]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [ebx + 0x28]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x2c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x30]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x1c]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [ebx + 0x20]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x24]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [ebx + 0x10]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x14]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x18]
        mov	dword ptr [eax + 0x4], ecx
        mov	dword ptr [eax + 0x8], edx
        mov	ecx, dword ptr [esp + 0x138]
        mov	edx, dword ptr [esp + 0x13c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0x14c]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [esp + 0x138]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0x13c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [esp + 0x14c]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0x138]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [esp + 0x13c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0x14c]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [esp + 0x138]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0x13c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [esp + 0x14c]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0x138]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [esp + 0x13c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0x14c]
        mov	dword ptr [eax + 0x4], edx
        mov	edx, dword ptr [esp + 0x138]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0x13c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [esp + 0x14c]
        mov	dword ptr [eax + 0x4], ecx
        mov	dword ptr [eax + 0x8], edx
        call ext_007F28F0
        mov	eax, dword ptr [ebx + 0xa8]
        mov	ecx, dword ptr [ebx + 0xa4]
        mov	edx, dword ptr [ebx + 0x70]
        add	esp, 0xa8
        push	eax
        push	ecx
        mov	ecx, dword ptr [ebx + 0x74]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x78]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0x80]
        mov	dword ptr [eax + 0x8], edx
        mov	eax, dword ptr [ebx + 0x7c]
        mov	edx, dword ptr [ebx + 0x64]
        push	eax
        push	ecx
        mov	ecx, dword ptr [ebx + 0x68]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], edx
        mov	edx, dword ptr [ebx + 0x6c]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x58]
        mov	dword ptr [eax + 0x8], edx
        mov	edx, dword ptr [ebx + 0x5c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	dword ptr [eax + 0x4], edx
        mov	ecx, dword ptr [ebx + 0x60]
        mov	edx, dword ptr [esp + 0x148]
        mov	dword ptr [eax + 0x8], ecx
        mov	eax, dword ptr [esp + 0x13c]
        mov	ecx, dword ptr [esp + 0x124]
        push	edx
        mov	edx, dword ptr [esp + 0x134]
        push	eax
        mov	eax, dword ptr [esp + 0x120]
        push	ecx
        push	edx
        push	eax
        mov	ecx, esi
        call ext_007F2440
        mov	ecx, dword ptr [ebx + 0xac]
        mov	eax, ecx
        and	eax, 0x80000003
        jns short L_7d7e19
        dec	eax
        or	eax, -0x4
        inc	eax
    L_7d7e19:
        je short L_7d7e20
        sub	ecx, eax
        add	ecx, 0x4
    L_7d7e20:
        fld	dword ptr [edi + 0x8]
        mov	eax, dword ptr [esp + 0x14]
        sub	esp, 0x8
        fstp	dword ptr [esp + 0x4]
        mov	edx, dword ptr [esi]
        fld	dword ptr [edi]
        mov	edx, dword ptr [edx]
        fstp	dword ptr [esp]
        push	eax
        push	ecx
        mov	ecx, dword ptr [ebx + 0xa0]
        mov	eax, dword ptr [esp + 0xdf8]
        push	ecx
        mov	ecx, dword ptr [esp + 0x110]
        push	eax
        mov	eax, dword ptr [esp + 0x120]
        push	ecx
        mov	ecx, dword ptr [esp + 0xe10]
        push	eax
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xe24]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xe28]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xe0]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xf0]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xf4]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xe0]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xf0]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xf4]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xe0]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xf0]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xf4]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xc8]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xd8]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xdc]
        mov	dword ptr [eax + 0x8], ecx
        lea	eax, [esp + 0xe0]
        push	eax
        lea	ecx, [esp + 0xf0]
        push	ecx
        mov	ecx, esi
        call	edx
        mov	eax, dword ptr [esp + 0xe4]
        mov	ecx, dword ptr [esp + 0xf0]
        mov	edx, dword ptr [esp + 0x84]
        mov	dword ptr [esp + 0x54], eax
        mov	eax, dword ptr [esp + 0x78]
        mov	dword ptr [esp + 0x2c], ecx
        mov	ecx, dword ptr [esp + 0x90]
        mov	dword ptr [esp + 0x44], edx
        mov	edx, dword ptr [esp + 0xda4]
        mov	dword ptr [esp + 0x34], eax
        mov	eax, dword ptr [esp + 0xda8]
        mov	dword ptr [esp + 0x18], ecx
        mov	ecx, dword ptr [esp + 0xdac]
        mov	dword ptr [esp + 0x38], edx
        mov	edx, dword ptr [esp + 0xc0]
        mov	dword ptr [esp + 0x3c], eax
        mov	dword ptr [esp + 0x40], ecx
        cmp	dword ptr [ebp + 0x4], 0x0
        mov	eax, dword ptr [esp + 0xc4]
        mov	ecx, dword ptr [esp + 0xc8]
        mov	dword ptr [esp + 0x48], edx
        mov	edx, dword ptr [esp + 0xcc]
        mov	dword ptr [esp + 0x4c], eax
        mov	eax, dword ptr [esp + 0xd0]
        mov	dword ptr [esp + 0x50], ecx
        mov	ecx, dword ptr [esp + 0xd4]
        mov	dword ptr [esp + 0x58], edx
        mov	edx, dword ptr [esp + 0xd8]
        mov	dword ptr [esp + 0x5c], eax
        mov	eax, dword ptr [esp + 0xdc]
        mov	dword ptr [esp + 0x60], ecx
        mov	ecx, dword ptr [esp + 0xe0]
        mov	dword ptr [esp + 0x1c], edx
        mov	dword ptr [esp + 0x20], eax
        mov	dword ptr [esp + 0x24], ecx
        je near ptr L_7d8174
        push	ebx
        push	ebp
        call ext_007D5E50
        add	esp, 0x8
        test	eax, eax
        je near ptr L_7d8174
        cmp	dword ptr [ebp + 0x8], 0x0
        mov	dword ptr [esp + 0x28], 0x0
        jle near ptr L_7d812b
        lea	edx, [esp + 0x120]
        mov	dword ptr [esp + 0x30], edx
        lea	eax, [esp + 0x2a4]
        lea	edx, [ebp + 0x24]
    L_7d8011:
        lea	edi, [eax - 0xb4]
        mov	ecx, 0x2d
        lea	esi, [esp + 0x6c]
        rep movsd
        mov	edi, eax
        mov	ecx, 0xc
        lea	esi, [esp + 0xda4]
        rep movsd
        lea	edi, [eax + 0x30]
        mov	ecx, 0xe
        lea	esi, [esp + 0xdd8]
        rep movsd
        mov	ecx, dword ptr [esp + 0x54]
        mov	dword ptr [eax + 0x68], ecx
        mov	ecx, dword ptr [esp + 0x2c]
        mov	dword ptr [eax + 0x6c], ecx
        mov	ecx, dword ptr [esp + 0x44]
        mov	dword ptr [eax + 0x70], ecx
        mov	ecx, dword ptr [esp + 0x34]
        mov	dword ptr [eax + 0x74], ecx
        mov	ecx, dword ptr [esp + 0x18]
        mov	dword ptr [eax + 0x78], ecx
        mov	ecx, dword ptr [esp + 0x38]
        mov	dword ptr [eax + 0x84], ecx
        mov	ecx, dword ptr [esp + 0x3c]
        mov	dword ptr [eax + 0x88], ecx
        mov	ecx, dword ptr [esp + 0x40]
        mov	dword ptr [eax + 0x8c], ecx
        mov	ecx, dword ptr [esp + 0x48]
        mov	dword ptr [eax + 0x90], ecx
        mov	ecx, dword ptr [esp + 0x4c]
        mov	dword ptr [eax + 0x94], ecx
        mov	ecx, dword ptr [esp + 0x50]
        mov	dword ptr [eax + 0x98], ecx
        mov	ecx, dword ptr [esp + 0x58]
        mov	dword ptr [eax + 0x9c], ecx
        mov	ecx, dword ptr [esp + 0x5c]
        mov	esi, dword ptr [esp + 0x30]
        mov	dword ptr [eax + 0xa0], ecx
        mov	ecx, dword ptr [esp + 0x60]
        mov	dword ptr [eax + 0xa4], ecx
        mov	ecx, dword ptr [esp + 0x1c]
        mov	dword ptr [eax + 0xa8], ecx
        mov	ecx, dword ptr [esp + 0x20]
        mov	dword ptr [eax + 0xac], ecx
        mov	ecx, dword ptr [esp + 0x24]
        mov	dword ptr [eax + 0xb0], ecx
        xor	ecx, ecx
        mov	dword ptr [edx - 0x4], ecx
        mov	dword ptr [eax - 0xbc], ecx
        mov	ecx, dword ptr [ebp + 0x2d0]
        mov	dword ptr [edx], ecx
        lea	ecx, [eax - 0xc4]
        mov	dword ptr [edx - 0xc], ecx
        mov	ecx, dword ptr [esp + 0x28]
        mov	dword ptr [eax - 0xb8], esi
        add	ecx, 0x1
        add	esi, 0x18
        add	eax, 0x178
        add	edx, 0x38
        cmp	ecx, dword ptr [ebp + 0x8]
        mov	dword ptr [esp + 0x28], ecx
        mov	dword ptr [esp + 0x30], esi
        jl near ptr L_7d8011
        mov	esi, dword ptr [esp + 0x10]
    L_7d812b:
        xor	edi, edi
        cmp	dword ptr [ebp + 0x8], edi
        mov	dword ptr [ebp + 0x2d4], edi
        jle short L_7d815a
        lea	edx, [ebp + 0x3c]
        mov	dword ptr [esp + 0x10], edx
        nop
    L_7d8140:
        mov	eax, dword ptr [esp + 0x10]
        mov	ecx, dword ptr [eax]
        push	ecx
        call	dword ptr [mem_00924260]
        add	dword ptr [esp + 0x10], 0x38
        add	edi, 0x1
        cmp	edi, dword ptr [ebp + 0x8]
        jl short L_7d8140
    L_7d815a:
        mov	eax, dword ptr [ebp + 0x8]
        push	-0x1
        push	0x1
        lea	edx, [ebp + 0x2f8]
        push	edx
        push	eax
        call	dword ptr [mem_009241AC]
        jmp near ptr L_7d82c0
    L_7d8174:
        mov	eax, dword ptr [esp + 0x44]
        mov	edx, dword ptr [esp + 0x2c]
        mov	ecx, 0x2d
        lea	esi, [esp + 0x6c]
        lea	edi, [esp + 0x1f0]
        rep movsd
        mov	ecx, 0xc
        lea	esi, [esp + 0xda4]
        lea	edi, [esp + 0x2a4]
        rep movsd
        mov	ecx, 0xe
        lea	esi, [esp + 0xdd8]
        lea	edi, [esp + 0x2d4]
        rep movsd
        mov	ecx, dword ptr [esp + 0x54]
        mov	dword ptr [esp + 0x30c], ecx
        mov	ecx, dword ptr [esp + 0x34]
        mov	dword ptr [esp + 0x314], eax
        mov	eax, dword ptr [esp + 0x38]
        mov	dword ptr [esp + 0x310], edx
        mov	edx, dword ptr [esp + 0x18]
        mov	dword ptr [esp + 0x318], ecx
        mov	ecx, dword ptr [esp + 0x3c]
        mov	dword ptr [esp + 0x328], eax
        mov	eax, dword ptr [esp + 0x48]
        mov	dword ptr [esp + 0x31c], edx
        mov	edx, dword ptr [esp + 0x40]
        mov	dword ptr [esp + 0x32c], ecx
        mov	ecx, dword ptr [esp + 0x4c]
        mov	dword ptr [esp + 0x334], eax
        mov	eax, dword ptr [esp + 0x58]
        mov	dword ptr [esp + 0x330], edx
        mov	edx, dword ptr [esp + 0x50]
        mov	dword ptr [esp + 0x338], ecx
        mov	ecx, dword ptr [esp + 0x5c]
        mov	dword ptr [esp + 0x340], eax
        mov	eax, dword ptr [esp + 0x1c]
        mov	dword ptr [esp + 0x33c], edx
        mov	edx, dword ptr [esp + 0x60]
        mov	dword ptr [esp + 0x344], ecx
        mov	ecx, dword ptr [esp + 0x20]
        mov	dword ptr [esp + 0x34c], eax
        mov	dword ptr [esp + 0x348], edx
        mov	edx, dword ptr [esp + 0x24]
        lea	eax, [esp + 0x120]
        mov	dword ptr [esp + 0x350], ecx
        mov	ecx, dword ptr [ebx + 0xa8]
        mov	dword ptr [esp + 0x1ec], eax
        xor	eax, eax
        mov	dword ptr [esp + 0x354], edx
        mov	edx, dword ptr [ebp + 0x2d0]
        mov	dword ptr [esp + 0x1e8], eax
        mov	dword ptr [esp + 0x1e0], eax
        mov	dword ptr [esp + 0x1e4], ecx
        mov	ecx, dword ptr [esp + 0xe14]
        lea	eax, [esp + 0x1e0]
        mov	dword ptr [ebp + 0x24], edx
        push	ecx
        mov	edx, eax
        push	edx
        mov	dword ptr [ebp + 0x18], eax
        call ext_007F0370
        mov	esi, dword ptr [esp + 0x18]
        add	esp, 0x8
    L_7d82c0:
        mov	eax, dword ptr [ebx + 0xac]
        mov	ecx, eax
        and	ecx, 0x80000003
        jns short L_7d82d5
        dec	ecx
        or	ecx, -0x4
        inc	ecx
    L_7d82d5:
        je short L_7d82dc
        sub	eax, ecx
        add	eax, 0x4
    L_7d82dc:
        mov	ecx, dword ptr [ebx + 0xa0]
        push	ecx
        mov	ecx, dword ptr [ebx + 0xa4]
        push	ecx
        mov	ecx, dword ptr [esp + 0x1c]
        push	ecx
        mov	ecx, dword ptr [esp + 0x120]
        push	eax
        mov	eax, dword ptr [esp + 0x10c]
        push	eax
        mov	eax, dword ptr [esp + 0x11c]
        push	ecx
        mov	ecx, dword ptr [esp + 0xdbc]
        push	eax
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xdd0]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xdd4]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [ebx + 0x58]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [ebx + 0x5c]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [ebx + 0x60]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xac]
        mov	edx, dword ptr [esi]
        mov	edx, dword ptr [edx + 0x4]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xbc]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xc0]
        mov	dword ptr [eax + 0x8], ecx
        mov	ecx, dword ptr [esp + 0xe1c]
        sub	esp, 0xc
        mov	eax, esp
        mov	dword ptr [eax], ecx
        mov	ecx, dword ptr [esp + 0xe2c]
        mov	dword ptr [eax + 0x4], ecx
        mov	ecx, dword ptr [esp + 0xe30]
        mov	dword ptr [eax + 0x8], ecx
        lea	eax, [esp + 0xe08]
        push	eax
        lea	ecx, [esp + 0xe00]
        push	ecx
        mov	ecx, esi
        call	edx
        pop	edi
        pop	esi
        pop	ebp
        pop	ebx
        add	esp, 0xd90
        ret
    }
}

// [0x007D5C80] sub_007D5C80 (34 bytes)
extern "C" void ext_007D5A00();
extern "C" int mem_00AB28C8;

extern "C" __declspec(naked) void __cdecl fn_007D5C80(void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        push esi
        push edi
        call ext_007D5A00
        push esi
        add edi, 0x6c
        push edi
        call dword ptr [mem_00AB28C8]
        add esp, 0x10
        pop edi
        pop esi
        ret
    }
}

// [0x007D5A00] sub_007D5A00 (54 bytes)
extern "C" void __cdecl fn_007D5C80(void* a1, void* a2);

extern "C" void __cdecl fn_007D5A00(void* a1, void* a2) {
    char* b = (char*)a2;
    void* cur = *(void**)(b + 0x34);
    if (cur) {
        void* next;
        do {
            next = *(void**)((char*)cur + 0x2c);
            fn_007D5C80(a1, cur);
            cur = next;
        } while (cur);
    }
    void* p = *(void**)b;
    if (p) {
        ((void (__cdecl*)(void*))ext_007CC9E0)(p);
    }
}

// [0x007D4920] sub_007D4920 (76 bytes)
extern "C" __declspec(naked) int __cdecl fn_007D4920(void* a0, void* a1, void* a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp esi, ebx
        je short loc_7D4967
        push edi
        mov edi, dword ptr [esp + 0x18]
        cmp esi, edi
        je short loc_7D495E
        mov eax, dword ptr [esi]
        push edi
        push eax
        push ebx
        call ext_007D4920
        add esp, 0xc
        test eax, eax
        jne short loc_7D495E
        mov ecx, dword ptr [esi + 4]
        push edi
        push ecx
        push ebx
        call ext_007D4920
        add esp, 0xc
        test eax, eax
        jne short loc_7D495E
        pop edi
        pop esi
        pop ebx
        ret
    loc_7D495E:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    loc_7D4967:
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x007DFC20] sub_007DFC20 (184 bytes)
extern "C" void ext_007DEF80();
extern "C" void ext_007DF610();
extern "C" void ext_007DF800();
extern "C" __declspec(naked) void __cdecl fn_007DFC20() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x20]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        xor ebp, ebp
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov dword ptr [esi], ebp
        mov dword ptr [ebx], ebp
        mov eax, dword ptr [edi]
        test al, 0x4
        jne L79
        test al, 0x6
        jne L60
        cmp eax, ebp
        jne L47
        mov dword ptr [edi + 0x44], ebp
    L47:
        mov eax, dword ptr [esp + 0x18]
        push eax
        call ext_007DEF80
        add esp, 4
        test eax, eax
        je L5D
        and dword ptr [edi], -2
        jmp L60
    L5D:
        or dword ptr [edi], 1
    L60:
        mov eax, edi
        call ext_007DF610
        test eax, eax
        je L70
        and dword ptr [edi], -3
        jmp L73
    L70:
        or dword ptr [edi], 2
    L73:
        mov dword ptr [edi + 0x48], ebp
        mov dword ptr [edi + 0x4c], ebp
    L79:
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push ebx
        push edx
        push eax
        push esi
        push ecx
        push edi
        call ext_007DF800
        add esp, 0x1c
        test eax, eax
        je LA1
        and dword ptr [edi], -5
        jmp LA4
    LA1:
        or dword ptr [edi], 4
    LA4:
        test byte ptr [edi], 0x6
        jne LD1
        xor eax, eax
        cmp dword ptr [edi + 0x1c], ebp
        jle LC0
    LB0:
        mov edx, dword ptr [edi + 0x14]
        mov ecx, dword ptr [edx + 4*eax]
        add eax, 1
        mov dword ptr [ecx], ebp
        cmp eax, dword ptr [edi + 0x1c]
        jl LB0
    LC0:
        cmp dword ptr [edi], ebp
        mov dword ptr [edi + 0x1c], ebp
        jne LD1
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    LD1:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}
