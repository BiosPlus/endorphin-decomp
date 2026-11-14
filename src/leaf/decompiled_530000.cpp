// Decompiled translation unit: src/leaf/decompiled_530000.cpp

extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" void ext_0054D2A0();
extern "C" void ext_00539800();
extern "C" void ext_006A5C62();
extern "C" int mem_00A44B84;
extern "C" int mem_00925134;
extern "C" void ext_00539740();
extern "C" void ext_0053AD10();
extern "C" void ext_00543640();
extern "C" void ext_00532CC0();
extern "C" int mem_009240C0;
extern "C" int mem_009240C4;
extern "C" void ext_0041A920();
extern "C" void ext_0044CB90();
extern "C" void ext_0053FFC0();
extern "C" void ext_00543220();
extern "C" void ext_00543300();
extern "C" void ext_00543790();
extern "C" void ext_005447E0();
extern "C" void ext_00544B30();
extern "C" void ext_00544FD0();
extern "C" void ext_00545680();
extern "C" void ext_00545940();
extern "C" void ext_005459D0();
extern "C" void ext_00546FA0();
extern "C" void ext_00547220();
extern "C" void ext_0065C5F0();
extern "C" void ext_00539860();
extern "C" void ext_00539F00();

extern "C" void ext_00539F00();
extern "C" __declspec(naked) void __fastcall fn_00532C30(void* self) {
    __asm {
        push esi
        push 0x1701
        mov esi, ecx
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        pop esi
        jmp edx
    }
}
extern "C" void ext_00539B50();

// [0x00534380] sub_00534380 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00534380(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x38]
        lea eax, [ecx + 0x9c]
        mov dword ptr [ecx + 0x40c], eax
        mov dword ptr [ecx + 0x410], edx
        add ecx, 0x33c
        jmp ext_0054D2A0
    }
}

// [0x0053ACF0] sub_0053ACF0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053ACF0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        and edx, esi
        cmp edx, esi
        sete dl
        cmp dl, byte ptr [esp + 0xc]
        je L_done
        xor eax, esi
        mov dword ptr [ecx + 0x4], eax
    L_done:
        pop esi
        ret 0x8
    }
}

// [0x00533D50] sub_00533D50 (33 bytes)
extern "C" int mem_009253E8;
extern "C" int mem_009547FC;
extern "C" void ext_00532B40();

extern "C" __declspec(naked) void __fastcall fn_00533D50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        mov dword ptr [esi], offset mem_009547FC
        je L_skip
        push 1
        push eax
        call dword ptr [mem_009253E8]
    L_skip:
        mov ecx, esi
        pop esi
        jmp ext_00532B40
    }
}

// [0x00533E00] sub_00533E00 (33 bytes)
extern "C" int mem_00954864;
extern "C" void ext_0054C5E0();

extern "C" __declspec(naked) void __fastcall fn_00533E00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        mov dword ptr [esi], offset mem_00954864
        je L_skip
        push 1
        push eax
        call dword ptr [mem_009253E8]
    L_skip:
        mov ecx, esi
        pop esi
        jmp ext_0054C5E0
    }
}

extern "C" void ext_0063E006();

// [0x00537EC0] sub_00537EC0 (9 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537EC0(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push eax
        call ext_0063E006
        ret
    }
}

// [0x00533DC1] sub_00533DC1 (16 bytes)
extern "C" void ext_00538FC0();
extern "C" __declspec(naked) void __fastcall fn_00533DC1(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_00538FC0
        pop esi
        ret 0x4
    }
}

// [0x00533E71] sub_00533E71 (16 bytes)
extern "C" void ext_0054C160();
extern "C" __declspec(naked) void __fastcall fn_00533E71(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        call ext_0054C160
        pop esi
        ret 4
    }
}

// [0x00530250] sub_00530250 (17 bytes)
extern "C" void ext_00541B50();

extern "C" __declspec(naked) void __fastcall fn_00530250(void* self) {
    __asm {
        __asm _emit 0x80 __asm _emit 0xB9 __asm _emit 0x3D __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // cmp byte ptr [ecx + 0x13d], 0x0
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC0 // sete al
        __asm _emit 0x50 // push eax
        call ext_00541B50
        ret
    }
}

// [0x00537360] sub_00537360 (17 bytes)
extern "C" void ext_005371F0();

extern "C" __declspec(naked) void __fastcall fn_00537360(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        call ext_005371F0
        lea ecx, [eax + 0x18]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        ret 0x10
    }
}

// [0x00538EE0] sub_00538EE0 (18 bytes)
extern "C" int mem_00955114;
extern "C" void ext_00532B60();
extern "C" void* __fastcall fn_00538EE0(void* self) {
    ext_00532B60();
    *(void**)self = (void*)&mem_00955114;
    return self;
}

// [0x0053B7E0] sub_0053B7E0 (18 bytes)
extern "C" int mem_00955714;
extern "C" void ext_00532B60();
extern "C" void* __fastcall fn_0053B7E0(void* self) {
    ext_00532B60();
    *(void**)self = (void*)&mem_00955714;
    return self;
}

// [0x0053C8F0] sub_0053C8F0 (18 bytes)
extern "C" int mem_00955B6C;
extern "C" void ext_00532B60();

extern "C" __declspec(naked) void __fastcall fn_0053C8F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00532B60
        mov dword ptr [esi], offset mem_00955B6C
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00537E70] sub_00537E70 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00537E70(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x14);
    *(void**)self = (void*)0x954fb4;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x00538CD0] sub_00538CD0 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00538CD0(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x14);
    *(void**)self = (void*)0x95509c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x00538F00] sub_00538F00 (26 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00538F00(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x18);
    *(void**)self = (void*)0x95517c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x00532B40] sub_00532B40 (28 bytes)
extern "C" void ext_00528B90();
extern "C" __declspec(naked) void __fastcall fn_00532B40(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        mov dword ptr [eax], 0x9543e4
        je L_ret
        cmp dword ptr [ecx + 0x4], eax
        jne L_ret
        push 0
        call ext_00528B90
    L_ret:
        ret
    }
}

// [0x00538530] sub_00538530 (31 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538530(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00532B60
        fld1
        mov al, 1
        fstp dword ptr [esi + 0x14]
        mov byte ptr [esi + 0x18], al
        mov byte ptr [esi + 0x19], al
        mov dword ptr [esi], 0x0095501c
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00537E50] sub_00537E50 (31 bytes)
extern "C" void* __cdecl ext_0063E000();
extern "C" int mem_00954FB4;

extern "C" void* __fastcall fn_00537E50(void* self) {
    typedef void (__fastcall *ThisFn)(void*);
    char* p = (char*)self;
    ((ThisFn)ext_00532B60)(self);
    *(int*)p = (int)&mem_00954FB4;
    void* q = ext_0063E000();
    *(void**)(p + 0x14) = q;
    *(float*)(p + 0x18) = 1.0f;
    return self;
}

// [0x00530270] sub_00530270 (32 bytes)
extern "C" void ext_0065C640();

extern "C" void* __fastcall fn_00530270(void* self, int edx_unused, void* a1) {
    typedef void* (__thiscall *VFn)(void*);
    void* r = ((VFn)(*(void***)a1)[0x1d8 / 4])(a1);
    *(void**)self = r;
    ((void (__thiscall *)(void*))ext_0065C640)(r);
    return self;
}

// [0x0053F6A0] sub_0053F6A0 (32 bytes)
extern "C" void ext_00533D40();

extern "C" __declspec(naked) void __fastcall fn_0053F6A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [ecx + 0xb4]
        call ext_00533D40
        ret 0x8
    }
}

// [0x0053B710] sub_0053B710 (33 bytes)
extern "C" void ext_0053A810();
extern "C" void ext_0063E006();
extern "C" void __fastcall fn_0053B710(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x44);
    *(void**)self = (void*)0x955694;
    *(void**)((unsigned char*)self + 0x14) = (void*)0x955688;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_0053A810)(self);
}

// [0x0053B850] sub_0053B850 (33 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_0053A810();
extern "C" void __fastcall fn_0053B850(void* self) {
    void* quadric = *(void**)((unsigned char*)self + 0x4c);
    *(void**)self = (void*)0x955784;
    *(void**)((unsigned char*)self + 0x14) = (void*)0x95577c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_0053A810)(self);
}

// [0x0053BA10] sub_0053BA10 (33 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_0053A810();

extern "C" __declspec(naked) void __fastcall fn_0053BA10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x48]
        push eax
        mov dword ptr [esi], 0x95580c
        mov dword ptr [esi + 0x14], 0x955804
        call ext_0063E006
        mov ecx, esi
        pop esi
        jmp ext_0053A810
    }
}

// [0x0053BBF0] sub_0053BBF0 (33 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_0053A810();

extern "C" void __fastcall fn_0053BBF0(void* self) {
    unsigned char* s = (unsigned char*)self;
    void* quadric = *(void**)(s + 0x44);
    *(void**)s = (void*)0x955894;
    *(void**)(s + 0x14) = (void*)0x95588c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_0053A810)(self);
}

// [0x0053C060] sub_0053C060 (33 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_0053A810();

extern "C" __declspec(naked) void __fastcall fn_0053C060(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x48]
        push eax
        mov dword ptr [esi], 0x955a5c
        mov dword ptr [esi + 0x14], 0x955a54
        call ext_0063E006
        mov ecx, esi
        pop esi
        jmp ext_0053A810
    }
}

// [0x00532DD0] sub_00532DD0 (34 bytes)
extern "C" void ext_0054C6E0();
extern "C" __declspec(naked) void __fastcall fn_00532DD0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        push esi
        mov esi, ecx
        je skip
        push eax
        lea ecx, [esi + 0x460]
        call ext_0054C6E0
    skip:
        mov byte ptr [esi + 0x464], 0x1
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0052F920();

// [0x0053BE80] sub_0053BE80 (36 bytes)
extern "C" void __fastcall fn_0053BE80(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* quadric = *(void**)(p + 0xd4);
    *(int*)p = 0x9559b4;
    *(int*)(p + 0x14) = 0x9559ac;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    ((void (__fastcall*)(void*))ext_0052F920)(self);
}

// [0x00536290] sub_00536290 (38 bytes)
extern "C" void __fastcall fn_00536290(void* self, int edx_unused, void* first, void* last) {
    char* esi = (char*)first;
    char* edi = (char*)last;
    if (esi != edi) {
        do {
            void** vtbl = *(void***)esi;
            ((void (__thiscall*)(void*, int))vtbl[0])(esi, 0);
            esi += 0x68;
        } while (esi != edi);
    }
}

// [0x00537E90] sub_00537E90 (38 bytes)
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();

extern "C" void* __fastcall fn_00537E90(void** self) {
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    *self = ext_0063E000();
    ((QuadricArgFn)ext_0063E012)(*self, 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(*self, 0x186a0);
    return self;
}

// [0x00533FB0] sub_00533FB0 (39 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00533FB0(void* self, int edx_unused, float* out) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax]
        mov dword ptr [esp], 0x0
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x10]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0x14]
        fstp dword ptr [eax + 0xc]
        pop ecx
        ret 0x4
    }
}

// [0x005356C0] sub_005356C0 (39 bytes)
// cdecl(first, last, dest): n = last - first; if n > 0, memmove_s(dest, n, first, n); returns dest + n.
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void* __cdecl fn_005356C0(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0xc]
        sub eax, ecx
        test eax, eax
        push esi
        lea esi, [eax + edx]
        jle skip_copy
        push eax
        push ecx
        push eax
        push edx
        call dword ptr [mem_009251EC]
        add esp, 0x10
    skip_copy:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00539830] sub_00539830 (41 bytes)
extern "C" void __cdecl fn_00539830(float* first, float* last, float* src) {
    char* p = reinterpret_cast<char*>(first);
    char* end = reinterpret_cast<char*>(last);
    if (p == end) return;
    do {
        float* d = reinterpret_cast<float*>(p);
        d[0] = src[0];
        d[1] = src[1];
        d[2] = src[2];
        p += 12;
    } while (p != end);
}

// [0x00538D10] sub_00538D10 (41 bytes)
extern "C" void ext_00538CF0();

extern "C" __declspec(naked) void __fastcall fn_00538D10(void* self, int edx_unused, float a1, float a2, float a3, int a4) {
    __asm {
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call ext_00538CF0
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x24], eax
        ret 0x10
    }
}

// [0x00539310] sub_00539310 (41 bytes)
extern "C" int mem_009551E4;
extern "C" void ext_00532B60();
extern "C" void* __fastcall fn_00539310(void* self, int edx_unused, int a1, int a2) {
    char* p = (char*)self;
    ext_00532B60();
    *(int*)(p + 0x14) = a1;
    *(int*)p = (int)&mem_009551E4;
    *(int*)(p + 0x1c) = 0;
    *(int*)(p + 0x18) = a2;
    return self;
}

extern "C" int mem_00AF140C;
extern "C" int mem_00AF1410;
extern "C" int mem_00AF1414;
extern "C" int mem_00AF1418;

// [0x005305E0] sub_005305E0 (42 bytes)
extern "C" void __stdcall fn_005305E0(void* src) {
    const float* p = (const float*)src;
    *(float*)&mem_00AF140C = p[0];
    *(float*)&mem_00AF1410 = p[1];
    *(float*)&mem_00AF1414 = p[2];
    *(float*)&mem_00AF1418 = p[3];
}

// [0x0053A5E0] sub_0053A5E0 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053A5E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        je skip
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax], 0x93a444
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x38]
        call eax
        mov byte ptr [esi + 0xc], al
skip:
        pop esi
        ret 0x8
    }
}

// [0x0053F960] sub_0053F960 (46 bytes)
extern "C" __declspec(naked) int __fastcall fn_0053F960(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0xc4]
        sub edx, dword ptr [ecx + 0xbc]
        mov eax, dword ptr [mem_00A44B84]
        cmp edx, eax
        jg short L_0053F988
        mov edx, dword ptr [ecx + 0xc8]
        sub edx, dword ptr [ecx + 0xc0]
        cmp edx, eax
        jg short L_0053F988
        xor eax, eax
        ret
    L_0053F988:
        mov eax, 1
        ret
    }
}

// [0x00539800] sub_00539800 (47 bytes)
extern "C" __declspec(naked) void __cdecl fn_00539800(float* first, float* last, float* dst) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        cmp ecx, edx
        mov eax, dword ptr [esp + 0xc]
        je done
    loop_top:
        test eax, eax
        je skip
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 4]
        fstp dword ptr [eax + 4]
        fld dword ptr [ecx + 8]
        fstp dword ptr [eax + 8]
    skip:
        add ecx, 0xc
        add eax, 0xc
        cmp ecx, edx
        jne loop_top
    done:
        ret
    }
}

// [0x00539860] sub_00539860 (47 bytes)
extern "C" void __cdecl fn_00539860(float* dst, unsigned int count, float* src) {
    if (count > 0) {
        do {
            if (dst) {
                dst[0] = src[0];
                dst[1] = src[1];
                dst[2] = src[2];
            }
            --count;
            dst += 3;
        } while (count > 0);
    }
}

// [0x00539B00] sub_00539B00 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539B00(void* self, int edx_unused, float* a1, float* a2, float* a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0
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
        call ext_00539800
        add esp, 0x1c
        ret 0xc
    }
}

// [0x005304E0] sub_005304E0 (50 bytes)
extern "C" __declspec(naked) void __fastcall fn_005304E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        call edx
        test al, al
        jne done_true
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc4]
        call edx
        test al, al
        jne done_true
        mov ecx, dword ptr [esi + 0x4c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x80]
        pop esi
        jmp edx
    done_true:
        pop esi
        ret
    }
}

// [0x005331B0] sub_005331B0 (50 bytes)
extern "C" int mem_009255A0;
extern "C" int mem_009255A4;
extern "C" int mem_009255A8;
extern "C" __declspec(naked) void __fastcall fn_005331B0(void* self) {
    __asm {
        sub esp, 0x1c
        push 0x1
        push 0x0
        push 0x0
        push 0x0
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_009255A0]
        test eax, eax
        je short loc_005331DE
        lea ecx, [esp]
        push ecx
        call dword ptr [mem_009255A4]
        lea edx, [esp]
        push edx
        call dword ptr [mem_009255A8]
loc_005331DE:
        add esp, 0x1c
        ret
    }
}

// [0x005396E0] sub_005396E0 (51 bytes)
extern "C" void ext_00532B60();
extern "C" void* __cdecl ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();

extern "C" void* __fastcall fn_005396E0(void* self) {
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    typedef void (__fastcall *InitFn)(void*);
    ((InitFn)ext_00532B60)(self);
    *(void**)self = (void*)0x95517c;
    ((void**)self)[6] = ext_0063E000();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[6], 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[6], 0x186a0);
    return self;
}

// [0x005398C0] sub_005398C0 (54 bytes)
extern "C" void ext_00539860();
extern "C" __declspec(naked) void* __fastcall fn_005398C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0x0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_00539860
        lea ecx, [esi + 2*esi]
        add esp, 0x18
        lea eax, [edi + 4*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0053B470] sub_0053B470 (56 bytes)
extern "C" void __fastcall fn_0053B470(float* self, int edx_unused, float* out, float s) {
    out[3] = 0.0f;
    out[2] = 0.0f;
    out[1] = 0.0f;
    out[0] = 0.0f;
    out[0] = self[0] * s;
    out[1] = self[1] * s;
    out[2] = self[2] * s;
    out[3] = self[3] * s;
}

// [0x0053F990] sub_0053F990 (56 bytes)
extern "C" void ext_0053F960();
extern "C" __declspec(naked) void __fastcall fn_0053F990(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xd0]
        cmp eax, dword ptr [ecx + 0xd8]
        jne short L_0053F9BD
        mov edx, dword ptr [ecx + 0xd4]
        cmp edx, dword ptr [ecx + 0xdc]
        jne short L_0053F9BD
        call ext_0053F960
        test al, al
        jne short L_0053F9BD
        add dword ptr [ecx + 0xe0], 1
        ret
L_0053F9BD:
        mov dword ptr [ecx + 0xe0], 0
        ret
    }
}

// [0x00533FE0] sub_00533FE0 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00533FE0(void* self, int edx_unused, float* out) {
    __asm {
        push ecx
        fldz
        mov dword ptr [esp], 0
        fcomp dword ptr [ecx + 0x24]
        fnstsw ax
        test ah, 0x41
        jp short L_alt
        add ecx, 0x18
        jmp short L_copy
L_alt:
        add ecx, 0x8
L_copy:
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
        pop ecx
        ret 0x4
    }
}

// [0x00534020] sub_00534020 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00534020(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        fldz
        mov dword ptr [esp], 0x0
        fcomp dword ptr [ecx + 0x34]
        fnstsw ax
        test ah, 0x41
        jp short L_534039
        add ecx, 0x28
        jmp short L_53403C
L_534039:
        add ecx, 0x8
L_53403C:
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [ecx]
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [ecx + 0xc]
        fstp dword ptr [eax + 0xc]
        pop ecx
        ret 4
    }
}

// [0x00533F10] sub_00533F10 (61 bytes)
extern "C" int mem_00925400;
extern "C" int mem_009253FC;

extern "C" __declspec(naked) void __fastcall fn_00533F10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        sub eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push eax
        mov eax, dword ptr [esi + 0x4]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00925400]
        mov ecx, dword ptr [esi + 0x10]
        sub ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0xc]
        sub edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi + 0x8]
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        push edx
        push eax
        push ecx
        call dword ptr [mem_009253FC]
        pop esi
        ret
    }
}

// [0x0053B4B0] sub_0053B4B0 (61 bytes)
extern "C" void ext_005B11D0();
extern "C" int mem_00955568;
extern "C" int mem_009555C8;

extern "C" __declspec(naked) void __fastcall fn_0053B4B0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, offset mem_00955568
        lea ebx, [ebp + 0x3c]
        mov edi, edi
    L_outer:
        xor esi, esi
    L_inner:
        mov ecx, dword ptr [ebp + 0x20]
        push esi
        call ext_005B11D0
        fld dword ptr [eax]
        fmul dword ptr [edi]
        add esi, 1
        add edi, 4
        add ebx, 4
        cmp esi, 3
        fstp dword ptr [ebx - 4]
        jl L_inner
        cmp edi, offset mem_009555C8
        jl L_outer
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0053F9D0] sub_0053F9D0 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053F9D0(void* self, int edx_unused, int* out, int x, int y, int size) {
    __asm {
        mov eax, dword ptr [ecx + 0xb4]
        mov ecx, dword ptr [eax + 0x1d4]
        sub ecx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov eax, edi
        cdq
        sub eax, edx
        mov edx, eax
        mov eax, dword ptr [esp + 0xc]
        __asm _emit 0xd1
        __asm _emit 0xfa
        sub esi, edx
        sub ecx, edx
        mov dword ptr [eax], esi
        add esi, edi
        mov dword ptr [eax + 0x4], ecx
        add ecx, edi
        pop edi
        mov dword ptr [eax + 0x8], esi
        mov dword ptr [eax + 0xc], ecx
        pop esi
        ret 0x10
    }
}

// [0x00539900] sub_00539900 (63 bytes)
extern "C" void ext_0063E006();
extern "C" void ext_006A5C5C();
extern "C" void ext_00532B40();
extern "C" void __fastcall fn_00539900(void* self) {
    int* p = reinterpret_cast<int*>(self);
    void* quadric = reinterpret_cast<void*>(p[5]);
    p[0] = 0x95526c;
    ((void (__stdcall*)(void*))ext_0063E006)(quadric);
    void* q = reinterpret_cast<void*>(p[14]);
    if (q) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(q);
    }
    p[14] = 0;
    p[15] = 0;
    p[16] = 0;
    ((void (__fastcall*)(void*))ext_00532B40)(self);
}

// [0x0053AFA0] sub_0053AFA0 (70 bytes)
extern "C" int mem_009553B8;
extern "C" __declspec(naked) void __fastcall fn_0053AFA0(void* self) {
    __asm {
        push esi
        push edi
        push 0x8
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short null_result
        mov dword ptr [eax], offset mem_009553B8
        mov dword ptr [eax + 0x4], 0x0
        mov esi, eax
        jmp short store_result
null_result:
        xor esi, esi
store_result:
        mov ecx, dword ptr [edi + 0x38]
        cmp esi, ecx
        je short skip_release
        test ecx, ecx
        je short skip_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
skip_release:
        mov dword ptr [edi + 0x38], esi
        mov ecx, esi
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        mov eax, dword ptr [eax + 0x20]
        jmp eax
    }
}

// [0x0053B040] sub_0053B040 (70 bytes)
extern "C" int mem_009553F4;
extern "C" __declspec(naked) void __fastcall fn_0053B040(void* self) {
    __asm {
        push esi
        push edi
        push 0x8
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short null_result
        mov dword ptr [eax], offset mem_009553F4
        mov dword ptr [eax + 0x4], 0xffffffff
        mov esi, eax
        jmp short store_result
null_result:
        xor esi, esi
store_result:
        mov ecx, dword ptr [edi + 0x38]
        cmp esi, ecx
        je short skip_release
        test ecx, ecx
        je short skip_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
skip_release:
        mov dword ptr [edi + 0x38], esi
        mov ecx, esi
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        mov eax, dword ptr [eax + 0x24]
        jmp eax
    }
}

// [0x0053AFF0] sub_0053AFF0 (71 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_0095546C;
extern "C" __declspec(naked) void __fastcall fn_0053AFF0(void* self) {
    __asm {
        push esi
        push edi
        push 0xc
        mov edi, ecx
        call ext_006A5C62
        xor edx, edx
        add esp, 0x4
        cmp eax, edx
        je short L_null
        mov dword ptr [eax], offset mem_0095546C
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0x4], edx
        mov esi, eax
        jmp short L_store
    L_null:
        xor esi, esi
    L_store:
        mov ecx, dword ptr [edi + 0x38]
        cmp esi, ecx
        je short L_noold
        cmp ecx, edx
        je short L_noold
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_noold:
        mov dword ptr [edi + 0x38], esi
        mov ecx, esi
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        mov eax, dword ptr [eax + 0x18]
        jmp eax
    }
}

// [0x0053B1F0] sub_0053B1F0 (75 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0053B1F0(void* self, int edx_unused, int a1) {
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
        mov ecx, dword ptr [esi + 0x50]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x4c
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

// [0x0053E290] sub_0053E290 (77 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_0053E290(void* self, int edx_unused, int a1) {
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
        mov ecx, dword ptr [esi + 0x10]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0xc
        test ecx, ecx
        je L_bad
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x6
        cmp edi, eax
        jb L_ok2
    L_bad:
        call ebx
    L_ok2:
        mov eax, edi
        shl eax, 0x6
        add eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0053B090] sub_0053B090 (77 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_00955430;
extern "C" __declspec(naked) void __fastcall fn_0053B090(void* self) {
    __asm {
        push esi
        push edi
        push 0xc
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short null_result
        mov dword ptr [eax], offset mem_00955430
        mov dword ptr [eax + 0x8], 0x0
        mov dword ptr [eax + 0x4], 0xffffffff
        mov esi, eax
        jmp short store_result
null_result:
        xor esi, esi
store_result:
        mov ecx, dword ptr [edi + 0x38]
        cmp esi, ecx
        je short skip_release
        test ecx, ecx
        je short skip_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
skip_release:
        mov dword ptr [edi + 0x38], esi
        mov ecx, esi
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        mov eax, dword ptr [eax + 0x14]
        jmp eax
    }
}

// [0x0053B0E0] sub_0053B0E0 (77 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_009554A8;
extern "C" __declspec(naked) void __fastcall fn_0053B0E0(void* self) {
    __asm {
        push esi
        push edi
        push 0xc
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short null_result
        mov dword ptr [eax], offset mem_009554A8
        mov dword ptr [eax + 0x8], 0x0
        mov dword ptr [eax + 0x4], 0xffffffff
        mov esi, eax
        jmp short store_result
    null_result:
        xor esi, esi
    store_result:
        mov ecx, dword ptr [edi + 0x38]
        cmp esi, ecx
        je short skip_release
        test ecx, ecx
        je short skip_release
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip_release:
        mov dword ptr [edi + 0x38], esi
        mov ecx, esi
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        mov eax, dword ptr [eax + 0x1c]
        jmp eax
    }
}

// [0x0053A580] sub_0053A580 (78 bytes)
extern "C" int mem_00AEFED0;
extern "C" int mem_00AEFED4;
extern "C" int mem_00AEFED8;
extern "C" int mem_00AEFEDC;
extern "C" int mem_00AEFEE0;
extern "C" int mem_00AEFEE4;
extern "C" int mem_00AEFEE8;
extern "C" int mem_00AEFEEC;
extern "C" int mem_00AEFEF0;
extern "C" int mem_00AEFEF4;
extern "C" int mem_00AEFEF8;
extern "C" int mem_00AEFEFC;
extern "C" int mem_00AEFF00;
extern "C" int mem_00AEFF04;
extern "C" int mem_00AEFF08;

extern "C" void __cdecl fn_0053A580() {
    mem_00AEFED0 = 0;
    mem_00AEFED4 = 0;
    mem_00AEFED8 = 0;
    mem_00AEFEDC = 0;
    mem_00AEFEE0 = 0;
    mem_00AEFEE4 = 0;
    mem_00AEFEE8 = 0;
    mem_00AEFEEC = 0;
    mem_00AEFEF0 = 0;
    mem_00AEFEF4 = 0;
    mem_00AEFEF8 = 0;
    mem_00AEFEFC = 0;
    mem_00AEFF00 = 0;
    mem_00AEFF04 = 0;
    mem_00AEFF08 = 0;
}

// [0x005361D0] sub_005361D0 (82 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009251EC;
extern "C" void __fastcall fn_005361D0(void* self, int edx_unused, unsigned int* out, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5) {
    unsigned int* p = (unsigned int*)self;
    if (a2 == 0 || a2 != a4) {
        ((void (__cdecl*)())mem_00925134)();
    }
    if (a3 != a5) {
        int diff = (int)(p[2] - a5);
        unsigned int ebx = (unsigned int)(diff + (int)a3);
        if (diff > 0) {
            ((void* (__cdecl*)(void*, size_t, const void*, size_t))mem_009251EC)((void*)a3, (size_t)diff, (const void*)a5, (size_t)diff);
        }
        p[2] = ebx;
    }
    out[0] = a2;
    out[1] = a3;
}

// [0x0053F8A0] sub_0053F8A0 (82 bytes)
extern "C" __declspec(naked) int __stdcall fn_0053F8A0(int count, void* ptr) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        push edi
        or eax, -0x1
        or edi, -0x1
        test edx, edx
        jne L_pos
        or eax, -0x1
        pop edi
        ret 0x8
    L_pos:
        jle L_done
        push ebx
        push esi
        mov ebx, edx
    L_loop:
        mov esi, dword ptr [ecx]
        mov edx, dword ptr [ecx + 0x4]
        add ecx, 0x4
        add ecx, 0xc
        cmp dword ptr [ecx], 0xbaadf00d
        jne L_skip
        add ecx, 0x4
        cmp edx, edi
        jae L_next
        mov eax, dword ptr [ecx]
        mov edi, edx
        jmp L_next
    L_skip:
        add ecx, 0x4
    L_next:
        sub ebx, 0x1
        lea ecx, [ecx + 4*esi - 0x8]
        jne L_loop
        pop esi
        pop ebx
    L_done:
        pop edi
        ret 0x8
    }
}

// [0x00530740] sub_00530740 (84 bytes)
extern "C" __declspec(naked) void __fastcall fn_00530740(void* self, int edx_unused, int arg1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, eax
        and edx, 0x1
        je L_758
        test al, 0x2
        je L_758
        mov byte ptr [ecx + 0x86], 0x1
        jmp L_781
L_758:
        push esi
        mov esi, eax
        and esi, 0x10
        je L_76d
        test al, 0x2
        je L_76d
        mov byte ptr [ecx + 0x86], 0x1
        jmp L_780
L_76d:
        test edx, edx
        jne L_780
        test esi, esi
        jne L_780
        test al, 0x2
        jne L_780
        mov byte ptr [ecx + 0x86], 0x0
L_780:
        pop esi
L_781:
        cmp byte ptr [ecx + 0x84], 0x0
        je L_791
        mov byte ptr [ecx + 0x86], 0x1
L_791:
        ret 0x4
    }
}

// [0x00530C00] sub_00530C00 (50 bytes)
extern "C" void ext_00530740();
extern "C" void ext_005435A0();
extern "C" __declspec(naked) void __fastcall fn_00530C00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4c]
        push edi
        lea eax, [esp + 0x14]
        push eax
        call ext_005435A0
        push edi
        mov ecx, esi
        call ext_00530740
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x158]
        push 0
        call eax
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x00539740] sub_00539740 (84 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00539740(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp esi, edi
        lea eax, [eax + 2*eax]
        lea eax, [ebx + 4*eax]
        mov edx, esi
        je done_00539740
        lea ecx, [ebx + 0x8]
        sub esi, ebx
    loop_00539740:
        fld dword ptr [edx]
        add edx, 0xc
        fstp dword ptr [ecx - 0x8]
        add ecx, 0xc
        cmp edx, edi
        fld dword ptr [edx - 0x8]
        fstp dword ptr [ecx - 0x10]
        fld dword ptr [esi + ecx - 0xc]
        fstp dword ptr [ecx - 0xc]
        jne loop_00539740
    done_00539740:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00532770] sub_00532770 (84 bytes)
extern "C" void ext_00493D90();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00532770(void* self) {
    __asm {
        push -1
        push 0x0089557B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x009543B4
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053AD70] sub_0053AD70 (88 bytes)
extern "C" double mem_00A44840;
extern "C" __declspec(naked) void __fastcall fn_0053AD70(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x24]
        test eax, eax
        je done
        fld dword ptr [eax + 0x14]
        fld1
        fsub qword ptr [mem_00A44840]
        fcompp
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr [ecx + 0x1c]
        jne pathb
        test eax, 0x100000
        jne pa_chk
        xor eax, 0x100000
        mov dword ptr [ecx + 0x1c], eax
pa_chk:
        mov eax, dword ptr [ecx + 0x1c]
        test al, 0x1
        je done
        xor eax, 0x1
        mov dword ptr [ecx + 0x1c], eax
        ret
pathb:
        test eax, 0x100000
        je pb_chk
        xor eax, 0x100000
        mov dword ptr [ecx + 0x1c], eax
pb_chk:
        mov eax, dword ptr [ecx + 0x1c]
        test al, 0x1
        jne done
        xor eax, 0x1
        mov dword ptr [ecx + 0x1c], eax
done:
        ret
    }
}

// [0x00539660] sub_00539660 (88 bytes)
extern "C" void ext_00532B60();
extern "C" void ext_00538D10();
extern "C" void* __cdecl ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();
extern "C" int mem_00955260;
extern "C" int mem_0093F8EC;
extern "C" int mem_0095509c;
extern "C" __declspec(naked) void __fastcall fn_00539660(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00532B60
        fld dword ptr [mem_00955260]
        push 0xc
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        mov ecx, esi
        fld dword ptr [mem_0093F8EC]
        mov dword ptr [esi], offset mem_0095509c
        fstp dword ptr [esp + 0x4]
        fld1
        fstp dword ptr [esp]
        call ext_00538D10
        call ext_0063E000
        push 0x186ac
        push eax
        mov dword ptr [esi + 0x14], eax
        call ext_0063E012
        mov eax, dword ptr [esi + 0x14]
        push 0x186a0
        push eax
        call ext_0063E00C
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00539AA0] sub_00539AA0 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539AA0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test ebx, ebx
        push esi
        push edi
        mov esi, ecx
        je bad_param
        cmp ebx, dword ptr [esp + 0x1c]
        je check_ok
bad_param:
        call dword ptr [mem_00925134]
check_ok:
        mov edi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x20]
        cmp edi, ecx
        je store_out
        mov eax, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x14], 0
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push edx
        push edi
        push eax
        push ecx
        call ext_00539740
        add esp, 0x18
        mov dword ptr [esi + 0x8], eax
store_out:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], edi
        pop edi
        pop esi
        mov dword ptr [eax], ebx
        pop ebx
        ret 0x14
    }
}

// [0x00536540] sub_00536540 (89 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00505D00();
extern "C" void ext_0065C660();

extern "C" __declspec(naked) void __fastcall fn_00536540(void* self) {
    __asm {
        push -1
        push 0x008959C3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x10], 0x1
        call ext_00505D00
        lea ecx, [esi + 0x4]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00493D90
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00536230] sub_00536230 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_00536230(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_head_00536230:
        test esi, esi
        je L_inv1_00536230
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_00536230
    L_inv1_00536230:
        call ebp
    L_ok1_00536230:
        cmp edi, dword ptr [esp + 0x20]
        je L_done_00536230
        test esi, esi
        mov ebx, edi
        jne L_ok2_00536230
        call ebp
    L_ok2_00536230:
        cmp edi, dword ptr [esi + 0x8]
        jb L_ok3_00536230
        call ebp
    L_ok3_00536230:
        add edi, 0x4
        test esi, esi
        jne L_ok4_00536230
        call ebp
    L_ok4_00536230:
        cmp ebx, dword ptr [esi + 0x8]
        jb L_ok5_00536230
        call ebp
    L_ok5_00536230:
        mov ecx, dword ptr [ebx]
        test ecx, ecx
        je L_head_00536230
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
        jmp L_head_00536230
    L_done_00536230:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x00530610] sub_00530610 (47 bytes)
extern "C" void ext_005432A0();
extern "C" __declspec(naked) void __fastcall fn_00530610(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je L_skip
        test esi, esi
        je L_null
        lea eax, [esi + 0xc]
        jmp L_call
    L_null:
        xor eax, eax
    L_call:
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, edi
        call eax
    L_skip:
        push edi
        lea ecx, [esi + 0x38]
        call ext_005432A0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00533F50] sub_00533F50 (92 bytes)
extern "C" int mem_00925400;
extern "C" int mem_009253FC;
extern "C" __declspec(naked) void __fastcall fn_00533F50(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov eax, ebx
        shl eax, 0x4
        sub eax, ebx
        mov ecx, dword ptr [edi + eax*4 + 0x18]
        sub ecx, dword ptr [edi + eax*4 + 0x10]
        mov edx, dword ptr [edi + eax*4 + 0x14]
        sub edx, dword ptr [edi + eax*4 + 0xc]
        lea esi, [edi + eax*4 + 0x8]
        mov eax, dword ptr [esi + 0x8]
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        push edx
        push eax
        push ecx
        call dword ptr [mem_00925400]
        mov edx, dword ptr [esi + 0x10]
        sub edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0xc]
        sub eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        mov edx, dword ptr [esi + 0x4]
        push eax
        push ecx
        push edx
        call dword ptr [mem_009253FC]
        mov dword ptr [edi + 0xfc], ebx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x005364D0] sub_005364D0 (85 bytes)
extern "C" void __fastcall ext_0050BE20(void* self);
extern "C" void __fastcall fn_005364D0(void* self) {
    ext_0050BE20((char*)self + 0x238);
    ext_0050BE20((char*)self + 0x474);
    *((unsigned char*)self + 0x464) = 1;
    ext_0050BE20((char*)self + 0x264);
    ext_0050BE20((char*)self + 0x290);
    ext_0050BE20((char*)self + 0x2BC);
    ext_0050BE20((char*)self + 0x2E8);
    *((int*)((char*)self + 0x40)) = 0;
}

// [0x005397A0] sub_005397A0 (95 bytes)
// cdecl(first, last, dst_end): copy_backward of 12-byte (3-float) elements from [first,last) to end at dst_end; returns dst_end - n.
extern "C" __declspec(naked) void* __cdecl fn_005397A0(void* first, void* last, void* dst_end) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2 * eax]
        add eax, eax
        add eax, eax
        mov ecx, eax
        mov eax, ebx
        sub eax, ecx
        cmp edi, esi
        mov edx, esi
        je done
        lea ecx, [ebx + 0x8]
        sub esi, ebx
        jmp loop_top
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop_top:
        fld dword ptr [edx - 0xc]
        sub edx, 0xc
        sub ecx, 0xc
        cmp edx, edi
        fstp dword ptr [ecx - 0x8]
        fld dword ptr [edx + 0x4]
        fstp dword ptr [ecx - 0x4]
        fld dword ptr [esi + ecx]
        fstp dword ptr [ecx]
        jne loop_top
    done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00539890] sub_00539890 (43 bytes)
extern "C" void ext_005397A0();

extern "C" __declspec(naked) void __fastcall fn_00539890(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_005397A0
        add esp, 0x1c
        ret
    }
}

// [0x00537A30] sub_00537A30 (83 bytes)
extern "C" void ext_00532B60();
extern "C" void ext_0054C570();

extern "C" __declspec(naked) void __fastcall fn_00537A30(void* self) {
    __asm {
        push -1
        push 0x895f03
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00532B60
        xor eax, eax
        mov dword ptr [esi], 0x954f24
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x10], 0x1
        call ext_0054C570
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x10], esi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00537380] sub_00537380 (100 bytes)
extern "C" void ext_0067B3D0();
extern "C" void ext_0067B530();
extern "C" int mem_00925664;

extern "C" __declspec(naked) void __fastcall fn_00537380(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c4]
        call edx
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        jne short L_537380_a
        mov eax, 0x21
L_537380_a:
        cmp byte ptr [esi + 0x376], 0x0
        je short L_537380_b
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1d0]
        mov ecx, esi
        call edx
        mov eax, dword ptr [esi + 0x1c]
        push offset fn_00537360
        push 0xa
        push 0x1
        push eax
        call dword ptr [mem_00925664]
        pop esi
        ret 0x4
L_537380_b:
        push edi
        lea edi, [esi + 0x48]
        push 0x4
        add esi, 0x18
        push esi
        push eax
        mov ecx, edi
        call ext_0067B3D0
        mov ecx, edi
        call ext_0067B530
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0053F5F0] sub_0053F5F0 (101 bytes)
extern "C" void ext_004275C0();
extern "C" int mem_00924FF0;
extern "C" int mem_009251E4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_0053F5F0() {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [esp]
        push eax
        call ext_004275C0
        mov ecx, eax
        mov dword ptr [esp + 0x24], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251E4]
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [ecx], eax
        add esp, 0x4
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00537B10] sub_00537B10 (101 bytes)
extern "C" void ext_0054C570();

extern "C" __declspec(naked) void __fastcall fn_00537B10(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x895f03
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00532B60
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi], 0x954f24
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi + 0x14], eax
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x10], 0x1
        call ext_0054C570
        mov eax, dword ptr [esi + 0x14]
        test eax, eax
        mov dword ptr [esi + 0x10], esi
        je L_skip
        mov dword ptr [eax + 0x10], esi
    L_skip:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00532BC0] sub_00532BC0 (102 bytes)
extern "C" void ext_00532B60();
extern "C" void ext_00538FA0();
extern "C" int mem_009518E0;
extern "C" int mem_0093C188;

extern "C" __declspec(naked) void __fastcall fn_00532BC0(void* self) {
    __asm {
        push -1
        push 0x8957a8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00532B60
        fld dword ptr [mem_009518E0]
        push 0x5
        push 0xa
        sub esp, 0x8
        fst dword ptr [esp + 0x4]
        mov ecx, esi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esi], 0x954674
        call ext_00538FA0
        fld dword ptr [mem_0093C188]
        mov ecx, dword ptr [esp + 0x8]
        fstp dword ptr [esi + 0x1c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053B240] sub_0053B240 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053B240(void* self) {
    __asm {
        push -1
        push 0x896153
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00532B60
        mov dword ptr [esi + 0x14], 0x9553a8
        xor eax, eax
        mov dword ptr [esi], 0x9554ec
        mov dword ptr [esi + 0x14], 0x9554e4
        mov dword ptr [esi + 0x18], 0x9553b0
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x34], eax
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x38], eax
        mov ecx, esi
        mov byte ptr [esp + 0x10], 1
        call ext_0053AD10
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053D280] sub_0053D280 (35 bytes)
extern "C" void ext_0053B240();

extern "C" void* __fastcall fn_0053D280(void* self) {
    unsigned int* p = (unsigned int*)self;
    ext_0053B240();
    p[0] = 0x955c94;
    p[0x14 / 4] = 0x955c8c;
    p[0x9c / 4] = 0;
    return self;
}

// [0x0053C4C0] sub_0053C4C0 (36 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0053C4C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0053B240
        fldz
        mov dword ptr [esi], 0x955aec
        mov dword ptr [esi + 0x14], 0x955ae4
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x40]
        mov eax, esi
        fstp dword ptr [esi + 0x3c]
        pop esi
        ret
    }
}

// [0x0053D220] sub_0053D220 (58 bytes)
extern "C" void ext_0053B240();
extern "C" void* ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();

extern "C" void* __fastcall fn_0053D220(void* self) {
    typedef void (__fastcall *InitFn)(void*);
    typedef void* (__stdcall *NewQuadricFn)();
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    ((InitFn)ext_0053B240)(self);
    *(void**)self = (void*)0x955a5c;
    ((void**)self)[5] = (void*)0x955a54;
    ((void**)self)[18] = ((NewQuadricFn)ext_0063E000)();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[18], 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[18], 0x186a0);
    return self;
}

// [0x0053B800] sub_0053B800 (69 bytes)
extern "C" void ext_0063E030();

extern "C" void* __fastcall fn_0053B800(void* self) {
    typedef void (__fastcall *InitFn)(void*);
    typedef void* (__stdcall *NewQuadricFn)();
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    ((InitFn)ext_0053B240)(self);
    *(void**)self = (void*)0x955784;
    ((void**)self)[5] = (void*)0x95577c;
    ((void**)self)[19] = ((NewQuadricFn)ext_0063E000)();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[19], 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[19], 0x186a0);
    ((QuadricArgFn)ext_0063E030)(((void**)self)[19], 1);
    return self;
}

// [0x0053B9C0] sub_0053B9C0 (69 bytes)
extern "C" void ext_0063E030();

extern "C" void* __fastcall fn_0053B9C0(void* self) {
    typedef void (__fastcall *InitFn)(void*);
    typedef void* (__stdcall *NewQuadricFn)();
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    ((InitFn)ext_0053B240)(self);
    *(void**)self = (void*)0x95580c;
    ((void**)self)[5] = (void*)0x955804;
    ((void**)self)[18] = ((NewQuadricFn)ext_0063E000)();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[18], 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[18], 0x186a0);
    ((QuadricArgFn)ext_0063E030)(((void**)self)[18], 1);
    return self;
}

// [0x0053BBA0] sub_0053BBA0 (69 bytes)
extern "C" void* ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();
extern "C" void ext_0063E030();

extern "C" void* __fastcall fn_0053BBA0(void* self) {
    typedef void (__fastcall *InitFn)(void*);
    typedef void* (__stdcall *NewQuadricFn)();
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    ((InitFn)ext_0053B240)(self);
    *(void**)self = (void*)0x955894;
    ((void**)self)[5] = (void*)0x95588c;
    ((void**)self)[17] = ((NewQuadricFn)ext_0063E000)();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[17], 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[17], 0x186a0);
    ((QuadricArgFn)ext_0063E030)(((void**)self)[17], 1);
    return self;
}

// [0x0053B6B0] sub_0053B6B0 (83 bytes)
extern "C" void ext_0053B240();
extern "C" void* ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();
extern "C" void ext_0063E01E();
extern "C" void ext_0063E030();

extern "C" void* __fastcall fn_0053B6B0(void* self) {
    typedef void (__fastcall *InitFn)(void*);
    typedef void* (__stdcall *NewQuadricFn)();
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    ((InitFn)ext_0053B240)(self);
    *(void**)self = (void*)0x955694;
    ((void**)self)[5] = (void*)0x955688;
    ((void**)self)[17] = ((NewQuadricFn)ext_0063E000)();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[17], 0x186ac);
    ((QuadricArgFn)ext_0063E01E)(((void**)self)[17], 0x186b4);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[17], 0x186a0);
    ((QuadricArgFn)ext_0063E030)(((void**)self)[17], 1);
    return self;
}

// [0x00530190] sub_00530190 (86 bytes)
extern "C" void ext_0052FC10();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00530190(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x48
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052FC10
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053C910] sub_0053C910 (88 bytes)
extern "C" void ext_00537E50();
extern "C" void ext_0053B240();
extern "C" __declspec(naked) void* __fastcall fn_0053C910(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_0053B240
        lea ecx, [esi + 0x40]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x955bdc
        mov dword ptr [esi + 0x14], 0x955bd4
        call ext_00537E50
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x5c], 0
        __asm _emit 0x8B __asm _emit 0xC6 // mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005300D0] sub_005300D0 (86 bytes)
extern "C" void ext_0052F9C0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005300D0(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x58
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052F9C0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005301F0] sub_005301F0 (87 bytes)
extern "C" void ext_0052F690();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005301F0(void* self) {
    __asm {
        push -1
        push 0x008a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x58
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 0x10], eax
        je done_005301F0
        mov ecx, esi
        call ext_0052F690
        mov dword ptr [esi], 0x0095423c
        mov dword ptr [esi + 0x14], 0x00954234
        mov eax, esi
    done_005301F0:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00531AE0] sub_00531AE0 (121 bytes)
extern "C" void ext_004080C0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00531AE0(void* self) {
    __asm {
        push -1
        push 0x8882e8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x8]
        xor ebp, ebp
        cmp dword ptr [esi + 0x4], edi
        mov dword ptr [esp + 0x18], ebp
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        push ebx
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        push edi
        push esi
        push ebx
        push esi
        mov ecx, esi
        call ext_004080C0
        mov eax, dword ptr [esi + 0x4]
        cmp eax, ebp
        pop ebx
        je L_skip
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        mov dword ptr [esi + 0x8], ebp
        mov dword ptr [esi + 0xc], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00537AB0] sub_00537AB0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537AB0(void* self) {
    __asm {
        push -1
        push 0x00895F03
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x10], 1
        call ext_0054C5E0
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0
        je L_00537AF1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_00537AF1:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00532B40
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00530290] sub_00530290 (56 bytes)
extern "C" void ext_00543220();

extern "C" __declspec(naked) void __fastcall fn_00530290(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        push esi
        mov esi, ecx
        jne short L530290_store
        cmp dword ptr [esi + 0x88], eax
        jne short L530290_store
        mov eax, 0x7
L530290_store:
        push 0x0
        push eax
        lea ecx, [esi + 0x38]
        mov dword ptr [esi + 0x70], eax
        call ext_00543220
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x154]
        call edx
        pop esi
        ret 0x4
    }
}

// [0x005327F0] sub_005327F0 (127 bytes)
extern "C" int mem_00924FE0;
extern "C" void ext_0066A330();

extern "C" __declspec(naked) void __fastcall fn_005327F0(void* self, int edx_unused, float a1, float a2, float a3, float a4, void* a5) {
    __asm {
        push -1
        push 0x0089557B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        fld dword ptr [esp + 0x20]
        push esi
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        mov esi, ecx
        fld dword ptr [esp + 0x30]
        mov byte ptr [esi + 0x4], 0x1
        fstp dword ptr [esp + 0x8]
        lea ecx, [esi + 0x8]
        fld dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x14], esi
        fstp dword ptr [esp + 0x4]
        mov dword ptr [esi], 0x009543B4
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ext_0066A330
        mov eax, dword ptr [esp + 0x28]
        push eax
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov byte ptr [esi + 0x34], 0x0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x14
    }
}

// [0x00532870] sub_00532870 (130 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532870(void* self, int edx_unused, float a1, float a2, float a3, float a4, unsigned char a5, void* a6) {
    __asm {
        push -1
        push 0x0089557B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        fld dword ptr [esp + 0x20]
        push esi
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        mov esi, ecx
        fld dword ptr [esp + 0x30]
        mov byte ptr [esi + 0x4], 0x1
        fstp dword ptr [esp + 0x8]
        lea ecx, [esi + 0x8]
        fld dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x14], esi
        fstp dword ptr [esp + 0x4]
        mov dword ptr [esi], 0x009543B4
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ext_0066A330
        mov eax, dword ptr [esp + 0x2c]
        push eax
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        mov cl, byte ptr [esp + 0x28]
        mov byte ptr [esi + 0x34], cl
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x18
    }
}

// [0x00536140] sub_00536140 (136 bytes)
// Box intersect: self (ecx), out (hidden return ptr), other (stack arg)
extern "C" __declspec(naked) void __fastcall fn_00536140(void* self, int edx_unused, void* out, const void* other) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        lea eax, [esi + 0xc]
        push edi
        mov edi, dword ptr [eax]
        cmp edi, dword ptr [ecx + 0xc]
        lea edx, [ecx + 0xc]
        mov ebx, eax
        jl L_d
        mov ebx, edx
L_d:
        mov edi, dword ptr [esi + 0x8]
        cmp edi, dword ptr [ecx + 0x8]
        lea eax, [esi + 0x8]
        lea edx, [ecx + 0x8]
        mov edi, eax
        jl L_c
        mov edi, edx
L_c:
        push ebp
        mov ebp, dword ptr [ecx + 0x4]
        cmp ebp, dword ptr [esi + 0x4]
        lea edx, [ecx + 0x4]
        lea eax, [esi + 0x4]
        pop ebp
        jl L_b
        mov eax, edx
L_b:
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [esi]
        jge L_a
        mov ecx, esi
L_a:
        mov edx, dword ptr [edi]
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ecx]
        mov edi, dword ptr [ebx]
        mov eax, edx
        sub eax, ecx
        test eax, eax
        jle L_empty
        mov eax, edi
        sub eax, esi
        test eax, eax
        jle L_empty
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], esi
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], edi
        pop edi
        pop esi
        pop ebx
        ret 0x8
L_empty:
        mov eax, dword ptr [esp + 0x10]
        xor ecx, ecx
        pop edi
        pop esi
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax], ecx
        pop ebx
        ret 0x8
    }
}

// [0x00532900] sub_00532900 (145 bytes)
extern "C" void ext_0066A310();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_00532900(void* self) {
    __asm {
        push -1
        push 0x8955a7
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, [esi + 0x8]
        mov byte ptr [esi + 0x4], 0x1
        push edi
        mov ecx, ebp
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0x9543b4
        call ext_0066A310
        lea ebx, [esi + 0x18]
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], 0x0
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x8]
        lea eax, [edi + 0x18]
        fstp dword ptr [ebp]
        push eax
        fld dword ptr [edi + 0xc]
        mov ecx, ebx
        fstp dword ptr [esi + 0xc]
        mov byte ptr [esp + 0x20], 0x1
        fld dword ptr [edi + 0x10]
        fstp dword ptr [esi + 0x10]
        fld dword ptr [edi + 0x14]
        fstp dword ptr [esi + 0x14]
        call dword ptr [mem_00924FDC]
        mov cl, byte ptr [edi + 0x34]
        pop edi
        mov byte ptr [esi + 0x34], cl
        mov ecx, dword ptr [esp + 0x10]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0053AC50] sub_0053AC50 (148 bytes)
extern "C" void* __fastcall fn_0053AC50(void* self) {
    unsigned int flags = *(unsigned int*)((char*)self + 0x1c);
    if ((flags & 0x18) == 0x18) {
        return (void*)(mem_00AEFED4 + 8);
    }
    if ((flags & 0x400008) == 0x400008) {
        return (void*)(mem_00AEFED8 + 8);
    }
    if ((flags & 0x800008) == 0x800008) {
        return (void*)(mem_00AEFEDC + 8);
    }
    if ((flags & 0x10008) == 0x10008) {
        return (void*)(mem_00AEFEE4 + 8);
    }
    if ((flags & 0x4008) == 0x4008) {
        return (void*)(mem_00AEFEE0 + 8);
    }
    int res = (flags & 0x8008) == 0x8008 ? mem_00AEFEE8 : mem_00AEFED0;
    return (void*)(res + 8);
}

// [0x005302D0] sub_005302D0 (156 bytes)
extern "C" void ext_005434F0();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005302D0(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, [esi + 0x98]
        mov ecx, ebp
        mov dword ptr [esp + 0x8], ebp
        call ext_0065C640
        xor eax, eax
        cmp byte ptr [esi + 0xa8], al
        mov dword ptr [esp + 0x14], eax
        je short L_unlock
        mov ecx, dword ptr [esi + 0x4c]
        push ebx
        push edi
        mov byte ptr [esi + 0xa8], al
        mov eax, dword ptr [esi + 0x9c]
        push eax
        lea edi, [esi + 0xa0]
        push edi
        lea ebx, [esi + 0x14]
        push ebx
        call ext_005434F0
        test eax, eax
        jne short L_copy
        mov ecx, dword ptr [esi + 0x9c]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        push edi
        push ebx
        call ext_005434F0
L_copy:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edi + 0x4]
        pop edi
        mov dword ptr [ebx], edx
        mov dword ptr [ebx + 0x4], eax
        pop ebx
L_unlock:
        mov ecx, ebp
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

struct Light_00534590 {
    void* vptr;
    unsigned char m_byte;
    float m_floats[24];
};

// [0x00534590] sub_00534590 (165 bytes)
extern "C" void* __fastcall fn_00534590(Light_00534590* self, int edx_unused, const Light_00534590* other) {
    self->vptr = (void*)0x009548FC;
    self->m_byte = other->m_byte;
    self->m_floats[0] = other->m_floats[0];
    self->m_floats[1] = other->m_floats[1];
    self->m_floats[2] = other->m_floats[2];
    self->m_floats[3] = other->m_floats[3];
    self->m_floats[4] = other->m_floats[4];
    self->m_floats[5] = other->m_floats[5];
    self->m_floats[6] = other->m_floats[6];
    self->m_floats[7] = other->m_floats[7];
    self->m_floats[8] = other->m_floats[8];
    self->m_floats[9] = other->m_floats[9];
    self->m_floats[10] = other->m_floats[10];
    self->m_floats[11] = other->m_floats[11];
    self->m_floats[12] = other->m_floats[12];
    self->m_floats[13] = other->m_floats[13];
    self->m_floats[14] = other->m_floats[14];
    self->m_floats[15] = other->m_floats[15];
    self->m_floats[16] = other->m_floats[16];
    self->m_floats[17] = other->m_floats[17];
    self->m_floats[18] = other->m_floats[18];
    self->m_floats[19] = other->m_floats[19];
    self->m_floats[20] = other->m_floats[20];
    self->m_floats[21] = other->m_floats[21];
    self->m_floats[22] = other->m_floats[22];
    self->m_floats[23] = other->m_floats[23];
    return self;
}

// [0x0053A810] sub_0053A810 (169 bytes)
extern "C" void ext_00528B90();
extern "C" void ext_00532B40();
extern "C" void ext_00661AB0();
extern "C" int mem_009253E8;
extern "C" int mem_00AEE8A8;
extern "C" __declspec(naked) void __fastcall fn_0053A810(void* self) {
    __asm {
        push -1
        push 0x896153
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9554ec
        mov dword ptr [esi + 0x14], 0x9554e4
        mov eax, dword ptr [esi + 0x34]
        test eax, eax
        mov dword ptr [esp + 0x10], 0x1
        je L_skip_list
        push 0x1
        push eax
        call dword ptr [mem_009253E8]
L_skip_list:
        mov eax, dword ptr [esi + 0x30]
        cmp eax, 0x7fffffff
        je L_skip_tiny
        mov ecx, dword ptr [mem_00AEE8A8]
        test ecx, ecx
        je L_skip_tiny
        push eax
        call ext_00661AB0
        mov dword ptr [esi + 0x30], 0x7fffffff
L_skip_tiny:
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_skip_link
        cmp dword ptr [ecx + 0x4], esi
        jne L_skip_link
        push 0x0
        call ext_00528B90
L_skip_link:
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x0
        je L_skip_virt
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
L_skip_virt:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00532B40
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053C9A0] sub_0053C9A0 (109 bytes)
extern "C" void ext_00537E70();
extern "C" void ext_0053A810();

extern "C" __declspec(naked) void __fastcall fn_0053C9A0(void* self) {
    __asm {
        push -1
        push 0x896453
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x955bdc
        mov dword ptr [esi + 0x14], 0x955bd4
        mov ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 1
        je skip_vcall
        __asm _emit 0x8B __asm _emit 0x01 // mov eax, [ecx]
        __asm _emit 0x8B __asm _emit 0x10 // mov edx, [eax]
        push 1
        call edx
    skip_vcall:
        lea ecx, [esi + 0x40]
        mov byte ptr [esp + 0x10], 0
        call ext_00537E70
        __asm _emit 0x8B __asm _emit 0xCE // mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0053A810
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053A3E0] sub_0053A3E0 (170 bytes)
extern "C" void ext_00532B60();
extern "C" void ext_00539AA0();
extern "C" void ext_0053A360();
extern "C" int mem_00896018;
extern "C" int mem_009552DC;
extern "C" int mem_00AEFEC4;
extern "C" int mem_00AEFEC0;
extern "C" int mem_00AEFEBC;
extern "C" __declspec(naked) void __fastcall fn_0053A3E0(void* self) {
    __asm {
        push -1
        push offset mem_00896018
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x10], esi
        call ext_00532B60
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esi], offset mem_009552DC
        mov dword ptr [esi + 0x14], ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push offset ext_0053A360
        mov dword ptr [esp + 0x24], 0x0
        call edx
        mov eax, dword ptr [mem_00AEFEC4]
        mov ecx, dword ptr [mem_00AEFEC0]
        cmp ecx, eax
        mov ebp, eax
        jbe skip_err1
        call dword ptr [mem_00925134]
        mov eax, dword ptr [mem_00AEFEC4]
        mov ecx, dword ptr [mem_00AEFEC0]
skip_err1:
        cmp ecx, eax
        mov edi, offset mem_00AEFEBC
        mov ebx, ecx
        jbe skip_err2
        call dword ptr [mem_00925134]
skip_err2:
        push ebp
        push edi
        push ebx
        mov eax, offset mem_00AEFEBC
        push eax
        lea eax, [esp + 0x20]
        push eax
        mov ecx, offset mem_00AEFEBC
        call ext_00539AA0
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret 0x4
    }
}

// [0x00530370] sub_00530370 (120 bytes)
extern "C" int mem_008A56C8;
extern "C" void ext_0065C640();
extern "C" void ext_00543BC0();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_00530370(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push offset mem_008A56C8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x64]
        push eax
        mov dword ptr [esp + 0x18], 0
        call ext_00543BC0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], -1
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x00531BB0] sub_00531BB0 (173 bytes)
extern "C" void ext_0065C620();
extern "C" void ext_0065C660();
extern "C" void ext_006A5C5C();
extern "C" void ext_00531AE0();
extern "C" __declspec(naked) void __fastcall fn_00531BB0(void* self) {
    __asm {
        push -1
        push 0x895129
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x954328
        mov dword ptr [esi + 0x4], 0x954320
        mov dword ptr [esi + 0x8], 0x95430c
        mov dword ptr [esi + 0xc], 0x954304
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x14], 0x3
        call ext_0065C620
        mov eax, dword ptr [esi + 0x58]
        xor edi, edi
        cmp eax, edi
        je L_skip1
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip1:
        lea ecx, [esi + 0x3c]
        mov dword ptr [esi + 0x58], edi
        mov dword ptr [esi + 0x5c], edi
        mov dword ptr [esi + 0x60], edi
        mov byte ptr [esp + 0x14], 0x1
        call ext_00531AE0
        mov eax, dword ptr [esi + 0x28]
        cmp eax, edi
        je L_skip2
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip2:
        mov ecx, esi
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00530660] sub_00530660 (46 bytes)
extern "C" __declspec(naked) void __fastcall fn_00530660(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x80]
        mov ecx, dword ptr [esi + 0x64]
        push eax
        call ext_00543640
        mov ecx, dword ptr [esi + 0x64]
        mov ecx, dword ptr [ecx + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x14]
        call eax
        mov dword ptr [esi + 0x80], 0
        pop esi
        ret
    }
}

// [0x00530940] sub_00530940 (175 bytes)
extern "C" void ext_00530740();
extern "C" void ext_00540F00();
extern "C" void ext_00543580();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_00530940(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov ebx, dword ptr [esp + 0x20]
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0x0
        call ext_00530740
        mov ecx, dword ptr [esi + 0x4c]
        push ebx
        lea eax, [esp + 0x28]
        push eax
        call ext_00543580
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, dword ptr [esi + 0x10]
        push edx
        add ecx, 0x9c
        call ext_00540F00
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x18], ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esi + 0x14], eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x158]
        push 0
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x0053B130] sub_0053B130 (178 bytes)
// Switch on arg0 (GL enum): 0x40 -> glColor4fv(&global+8); 1/0x40000/0x100000 -> glColor4fv(vfunc+0x78(this, arg2));
// 4 -> glColor4f(vfunc color floats + constant alpha); 8 -> glColor4fv(sub_0053AC50()); returns 0xc.
extern "C" void ext_0053AC50();
extern "C" int mem_009254A8;
extern "C" int mem_00954350;
extern "C" int mem_009254D0;
extern "C" int mem_00AEFEF8;
extern "C" __declspec(naked) void __fastcall fn_0053B130(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 0x40
        jg L_big
        je L_40
        sub eax, 1
        je L_vf
        sub eax, 3
        je L_4
        sub eax, 4
        jne L_out
        call ext_0053AC50
        push eax
        call dword ptr [mem_009254A8]
        ret 0xc
    L_4:
        mov edx, dword ptr [esp + 0xc]
        sub esp, 8
        mov eax, esp
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax], 0x009553B0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        call edx
        fld dword ptr [mem_00954350]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 8]
        fld dword ptr [eax + 4]
        fstp dword ptr [esp + 4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        ret 0xc
    L_40:
        mov eax, dword ptr [mem_00AEFEF8]
        add eax, 8
        push eax
        call dword ptr [mem_009254A8]
        ret 0xc
    L_big:
        cmp eax, 0x40000
        je L_vf
        cmp eax, 0x100000
        jne L_out
    L_vf:
        mov edx, dword ptr [esp + 0xc]
        sub esp, 8
        mov eax, esp
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax], 0x009553B0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x78]
        call edx
        push eax
        call dword ptr [mem_009254A8]
    L_out:
        ret 0xc
    }
}

extern "C" int (__stdcall * const mem_009255AC)(void*, unsigned int);
extern "C" int (__stdcall * const mem_009256A0)(int);
extern "C" int (__stdcall * const mem_009255E0)(void*, const void*, const void*, unsigned int);
extern "C" int (__stdcall * const mem_009253E0)(void*, void*);
extern "C" int (__stdcall * const mem_009253DC)(void*);
extern "C" int (__stdcall * const mem_00925620)(void*, void*);
extern "C" int (__stdcall * const mem_009255B0)(void*);
extern "C" int (__stdcall * const mem_009255B4)(const void*, void*);

extern "C" int mem_0095477C;
extern "C" int mem_0095475C;
extern "C" int mem_00954738;
extern "C" int mem_00954718;
extern "C" int mem_009546FC;
extern "C" int mem_009546F4;
extern "C" int mem_009546D8;

struct WindowContext_00532CC0 {
    char pad0[0x1c];
    void* hWnd;
    void* hInstance;
    void* hDC;
    void* hRC;
    char pad1[0x374 - 0x2c];
    char fullscreen;
    char pad2[0x492 - 0x375];
    char initialized;
};

// [0x00532CC0] sub_00532CC0 (230 bytes)
extern "C" void __fastcall fn_00532CC0(WindowContext_00532CC0* self) {
    if (!self->initialized) {
        return;
    }
    if (self->fullscreen) {
        mem_009255AC(0, 0);
        mem_009256A0(1);
    }
    int (__stdcall *msgBox)(void*, const void*, const void*, unsigned int) = mem_009255E0;
    if (self->hRC != 0) {
        if (!mem_009253E0(0, 0)) {
            msgBox(0, &mem_0095475C, &mem_0095477C, 0x40);
        }
        if (!mem_009253DC(self->hRC)) {
            msgBox(0, &mem_00954738, &mem_0095477C, 0x40);
        }
        self->hRC = 0;
    }
    if (self->hDC != 0) {
        if (!mem_00925620(self->hWnd, self->hDC)) {
            msgBox(0, &mem_00954718, &mem_0095477C, 0x40);
            self->hDC = 0;
        }
    }
    if (self->hWnd != 0) {
        if (!mem_009255B0(self->hWnd)) {
            msgBox(0, &mem_009546FC, &mem_0095477C, 0x40);
            self->hWnd = 0;
        }
    }
    if (!mem_009255B4(&mem_009546F4, self->hInstance)) {
        msgBox(0, &mem_009546D8, &mem_0095477C, 0x40);
        self->hInstance = 0;
    }
}

// [0x005306A0] sub_005306A0 (126 bytes)
extern "C" void ext_005426F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005306A0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x8], edi
        call ext_0065C640
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        push eax
        add ecx, 0x9c
        mov dword ptr [esp + 0x18], 0x0
        call ext_005426F0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00530B00] sub_00530B00 (242 bytes)
extern "C" void ext_00540F00();
extern "C" void ext_00543530();
extern "C" __declspec(naked) void __fastcall fn_00530B00(void* self) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [esi + 0x84], 0x0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push edi
        call edx
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0xc], ebp
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1dc]
        mov dword ptr [esp + 0x18], 0x0
        call edx
        mov edi, dword ptr [esp + 0x20]
        push edi
        mov ecx, esi
        call ext_00530740
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        push ecx
        mov dword ptr [esi + 0x18], ecx
        mov ecx, dword ptr [esi + 0x10]
        push eax
        add ecx, 0x9c
        mov dword ptr [esi + 0x14], eax
        mov byte ptr [esi + 0x7c], 0x1
        call ext_00540F00
        mov ecx, dword ptr [esi + 0x4c]
        push edi
        lea eax, [esp + 0x28]
        push eax
        call ext_00543530
        test eax, eax
        jne skip
        push edi
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esi + 0x68]
        call ext_00543530
        test eax, eax
        jl skip
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push eax
        lea eax, [esp + 0x28]
        push eax
        call edx
    skip:
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1e0]
        call edx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x158]
        push 0x0
        call edx
        mov ecx, ebp
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00532F80] sub_00532F80 (251 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00532F80(void* self, int edx_unused, void* hdc, unsigned char depth) {
    __asm {
        sub esp, 0x28
        mov al, byte ptr [esp + 0x30]
        push ebx
        xor ebx, ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        mov esi, ecx
        lea ecx, [esp + 0xc]
        push ecx
        push edi
        mov word ptr [esp + 0x14], 0x28
        mov word ptr [esp + 0x16], 0x1
        mov dword ptr [esp + 0x18], 0x25
        mov byte ptr [esp + 0x1c], bl
        mov byte ptr [esp + 0x1d], al
        mov byte ptr [esp + 0x1e], bl
        mov byte ptr [esp + 0x1f], bl
        mov byte ptr [esp + 0x20], bl
        mov byte ptr [esp + 0x21], bl
        mov byte ptr [esp + 0x22], bl
        mov byte ptr [esp + 0x23], bl
        mov byte ptr [esp + 0x24], bl
        mov byte ptr [esp + 0x25], bl
        mov byte ptr [esp + 0x26], bl
        mov byte ptr [esp + 0x27], bl
        mov byte ptr [esp + 0x28], bl
        mov byte ptr [esp + 0x29], bl
        mov byte ptr [esp + 0x2a], bl
        mov byte ptr [esp + 0x2b], 0x10
        mov byte ptr [esp + 0x2c], bl
        mov byte ptr [esp + 0x2d], bl
        mov byte ptr [esp + 0x2e], bl
        mov byte ptr [esp + 0x2f], bl
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], ebx
        call dword ptr [mem_009240C0]
        cmp eax, ebx
        jne short set_fmt
        mov ecx, esi
        call ext_00532CC0
        push 0x30
        push 0x9547cc
        push 0x9547a8
        push ebx
        call dword ptr [mem_009255E0]
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 8
set_fmt:
        lea edx, [esp + 0xc]
        push edx
        push eax
        push edi
        call dword ptr [mem_009240C4]
        test eax, eax
        jne short fmt_ok
        mov ecx, esi
        call ext_00532CC0
        push 0x30
        push 0x9547cc
        push 0x95478c
        push ebx
        call dword ptr [mem_009255E0]
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x28
        ret 8
fmt_ok:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        add esp, 0x28
        ret 8
    }
}

// [0x005309F0] sub_005309F0 (260 bytes)
extern "C" void ext_005435D0();
extern "C" void ext_00540F00();
extern "C" __declspec(naked) void __fastcall fn_005309F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8a56c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x7c], 0
        mov byte ptr [esi + 0x84], 0
        mov byte ptr [esi + 0x7d], 1
        jne L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        push ebx
        push edi
        call edx
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0xc], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1dc]
        mov dword ptr [esp + 0x18], 0
        call edx
        mov ebx, dword ptr [esp + 0x20]
        push ebx
        mov ecx, esi
        call ext_00530740
        mov ecx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        push ecx
        mov dword ptr [esi + 0x18], ecx
        mov ecx, dword ptr [esi + 0x10]
        push eax
        add ecx, 0x9c
        mov dword ptr [esi + 0x14], eax
        call ext_00540F00
        test bl, 8
        je L_a
        test bl, 4
        je L_a
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x1c], eax
        mov dword ptr [esi + 0x20], ecx
        jmp L_b
L_a:
        mov ecx, dword ptr [esi + 0x4c]
        push ebx
        lea edx, [esp + 0x28]
        push edx
        call ext_005435D0
        test eax, eax
        jne L_b
        mov ecx, dword ptr [esi + 0x68]
        push ebx
        lea eax, [esp + 0x28]
        push eax
        call ext_005435D0
L_b:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1e0]
        call eax
        mov esi, dword ptr [esi + 0x10]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x158]
        push 0
        mov ecx, esi
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0065C650
        pop edi
        pop ebx
L_end:
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00530130] sub_00530130 (89 bytes)
extern "C" void ext_0052FA40();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00530130(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x124
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052FA40
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00530820] sub_00530820 (288 bytes)
extern "C" void ext_005434F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_00530820(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b37d8
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp eax, dword ptr [esi + 0x14]
        push edi
        lea edi, [esi + 0x14]
        jne l_854
        mov ecx, dword ptr [esp + 0x28]
        cmp ecx, dword ptr [edi + 0x4]
        je l_92b
    l_854:
        mov ecx, dword ptr [esi + 0x10]
        mov al, byte ptr [ecx + 0x493]
        test al, al
        mov ebx, dword ptr [esp + 0x20]
        je l_8a5
        cmp dword ptr [esi + 0x38], 0
        je l_870
        test bl, 3
        jne l_8a5
    l_870:
        lea edi, [esi + 0x98]
        mov ecx, edi
        call ext_0065C640
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [esi + 0x9c], ebx
        mov dword ptr [esi + 0xa0], edx
        mov dword ptr [esi + 0xa4], eax
        mov byte ptr [esi + 0xa8], 1
        mov ecx, edi
        jmp l_926
    l_8a5:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov ebp, eax
        mov ecx, ebp
        mov dword ptr [esp + 0x20], ebp
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1dc]
        mov dword ptr [esp + 0x18], 0
        call eax
        mov ecx, dword ptr [esi + 0x4c]
        push ebx
        lea edx, [esp + 0x28]
        push edx
        push edi
        call ext_005434F0
        test eax, eax
        jne l_8f3
        mov ecx, dword ptr [esi + 0x68]
        push ebx
        lea eax, [esp + 0x28]
        push eax
        push edi
        call ext_005434F0
    l_8f3:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [edi], ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [edi + 0x4], edx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1e0]
        call edx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x158]
        push 0
        call edx
        mov dword ptr [esp + 0x18], -1
        mov ecx, ebp
    l_926:
        call ext_0065C650
    l_92b:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}

extern "C" void ext_0053A810();
extern "C" void ext_0054FCB0();
extern "C" void ext_0054FD10();

// [0x0053BCA0] sub_0053BCA0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053BCA0(void* self) {
    __asm {
        push    -1
        push    0x896433
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [esi], 0x95591c
        mov     dword ptr [esi + 0x14], 0x955914
        lea     eax, [esi + 0x86c]
        lea     edi, [esi + 0x3c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 1
        call    ext_0054FD10
        mov     ecx, edi
        mov     byte ptr [esp + 0x14], 0
        call    ext_0054FCB0
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], -1
        call    ext_0053A810
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00530C40] sub_00530C40 (320 bytes)
extern "C" void ext_00468180();
extern "C" void ext_00468C80();
extern "C" void ext_00530740();
extern "C" void ext_00543550();
extern "C" void ext_005435F0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" __declspec(naked) void __fastcall fn_00530C40(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b37d8
        push eax
        mov dword ptr fs:[0], esp
        push ebp
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x7c], 0
        push edi
        je L_ca2
        mov ecx, dword ptr [esi + 0x4c]
        test ecx, ecx
        je L_ca2
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        je L_ca2
        cmp eax, 1
        je L_ca2
        mov eax, dword ptr [esp + 0x1c]
        push eax
        lea edx, [esp + 0x24]
        push edx
        call ext_00543550
        call ext_00468180
        mov ecx, eax
        call ext_00468C80
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xc
        ret 0xc
L_ca2:
        cmp byte ptr [esi + 0x85], 0
        mov ebp, dword ptr [esp + 0x1c]
        je L_ce6
        cmp byte ptr [esi + 0x86], 0
        jne L_ce6
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [esi + 0x84], 1
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x158]
        push 0
        call edx
        mov ecx, dword ptr [esi + 0x78]
        test ecx, ecx
        je L_d60
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax]
        lea edx, [esp + 0x20]
        push edx
        call eax
        jmp L_d60
L_ce6:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1d8]
        call eax
        mov edi, eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edi
        call ext_0065C640
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1dc]
        mov dword ptr [esp + 0x14], 0
        call eax
        mov ecx, dword ptr [esi + 0x4c]
        push ebp
        lea edx, [esp + 0x24]
        push edx
        call ext_005435F0
        test eax, eax
        jne L_d35
        mov ecx, dword ptr [esi + 0x68]
        push ebp
        lea eax, [esp + 0x24]
        push eax
        call ext_005435F0
L_d35:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1e0]
        call eax
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x158]
        push 0
        call eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], -1
        call ext_0065C650
L_d60:
        push ebp
        mov ecx, esi
        mov byte ptr [esi + 0x7d], 0
        call ext_00530740
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebp
        add esp, 0xc
        ret 0xc
    }
}

// [0x0053F740] sub_0053F740 (340 bytes)
extern "C" void ext_0063E03C();
extern "C" int mem_00925424;
extern "C" int mem_00925438;
extern "C" int mem_00925494;
extern "C" int mem_00925418;
extern "C" int mem_009253D8;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_0092551C;
extern "C" int mem_00AF140C;
extern "C" int mem_0092540C;
extern "C" int mem_00925490;
extern "C" int mem_009254E0;
extern "C" int mem_00925488;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_0053F740(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xcc]
        test eax, eax
        jle loc_0053F894
        add eax, -1
        push 0xb50
        mov dword ptr [esi + 0xcc], eax
        call dword ptr [mem_00925424]
        movzx eax, al
        test eax, eax
        mov dword ptr [esp + 4], eax
        je loc_0053F77C
        push 0xb50
        call dword ptr [mem_00925438]
loc_0053F77C:
        push ebx
        push ebp
        push edi
        push 0xaaaa
        push 2
        call dword ptr [mem_00925494]
        push 0xb24
        call dword ptr [mem_00925418]
        mov edi, dword ptr [mem_009253D8]
        push 0x1701
        call edi
        mov ebx, dword ptr [mem_00925414]
        call ebx
        mov ebp, dword ptr [mem_009253D4]
        call ebp
        mov eax, dword ptr [esp + 0x18]
        fild dword ptr [eax + 0x10]
        sub esp, 0x20
        fstp qword ptr [esp + 0x18]
        fild dword ptr [eax + 8]
        fstp qword ptr [esp + 0x10]
        fild dword ptr [eax + 0xc]
        fstp qword ptr [esp + 8]
        fild dword ptr [eax + 4]
        fstp qword ptr [esp]
        call ext_0063E03C
        push 0x1700
        call edi
        call ebx
        call ebp
        push 0x1b01
        push 0x408
        call dword ptr [mem_0092551C]
        push offset mem_00AF140C
        call dword ptr [mem_0092540C]
        push 7
        call dword ptr [mem_00925490]
        mov eax, dword ptr [esi + 0xc0]
        mov ecx, dword ptr [esi + 0xbc]
        mov ebx, dword ptr [mem_009254E0]
        push eax
        push ecx
        call ebx
        mov edx, dword ptr [esi + 0xc0]
        mov eax, dword ptr [esi + 0xc4]
        push edx
        push eax
        call ebx
        mov ecx, dword ptr [esi + 0xc8]
        mov edx, dword ptr [esi + 0xc4]
        push ecx
        push edx
        call ebx
        mov eax, dword ptr [esi + 0xc8]
        mov ecx, dword ptr [esi + 0xbc]
        push eax
        push ecx
        call ebx
        call dword ptr [mem_00925488]
        push 0x1701
        call edi
        mov esi, dword ptr [mem_00925404]
        call esi
        push 0x1700
        call edi
        call esi
        push 0xb24
        call dword ptr [mem_00925438]
        cmp dword ptr [esp + 0x10], 0
        pop edi
        pop ebp
        pop ebx
        je loc_0053F894
        pop esi
        add esp, 4
        mov dword ptr [esp + 4], 0xb50
        jmp dword ptr [mem_00925418]
loc_0053F894:
    }
}

extern "C" void ext_0053F740();
extern "C" int mem_009253CC;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925524;
extern "C" int mem_0092552C;

// [0x00530520] sub_00530520 (177 bytes)
extern "C" __declspec(naked) void __fastcall fn_00530520(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, 0x1c02
        mov esi, ecx
        jne loc_0053053B
        push 0xbaadf00d
        call dword ptr [mem_009253CC]
loc_0053053B:
        push ebx
        mov ebx, dword ptr [mem_0092546C]
        push 0x8
        call ebx
        push 0x4
        call ebx
        cmp dword ptr [esi + 0x4c], 0x0
        pop ebx
        je loc_0053057D
        push 0x1b02
        push 0x408
        call dword ptr [mem_0092551C]
        fld1
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x7c]
        push edx
        push edi
        call eax
loc_0053057D:
        cmp edi, 0x1c02
        jne loc_0053059A
        call dword ptr [mem_00925524]
        mov esi, dword ptr [mem_0092552C]
        call esi
        call esi
        pop edi
        pop esi
        ret 0x8
loc_0053059A:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 0x194]
        cmp ecx, dword ptr [eax + 0x198]
        jne loc_005305C2
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov ecx, dword ptr [esi + 0x68]
        lea eax, [eax + 4*edx + 0xa4]
        push eax
        call ext_0053F740
loc_005305C2:
        mov esi, dword ptr [mem_0092552C]
        call esi
        call esi
        pop edi
        pop esi
        ret 0x8
    }
}

extern "C" int mem_00924208;
extern "C" int mem_0092565C;
extern "C" int mem_0092571C;
extern "C" int mem_0092558C;
extern "C" int mem_00925590;
extern "C" int mem_00925594;
extern "C" int mem_00925598;

// [0x00537430] sub_00537430 (349 bytes)
extern "C" __declspec(naked) void __fastcall fn_00537430(void* self) {
    __asm {
        sub esp, 0x38
        mov eax, dword ptr [esp + 0x40]
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x4c]
        push ebx
        mov dword ptr [esp + 0xc], ebx
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x18], ecx
        call dword ptr [mem_00924208]
        push 0x7f05
        push ebx
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esp + 0x20], 0x23
        mov dword ptr [esp + 0x24], 0x537290
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], eax
        call dword ptr [mem_0092565C]
        push 0x7f00
        push ebx
        mov dword ptr [esp + 0x34], eax
        call dword ptr [mem_0092571C]
        lea edx, dword ptr [esp + 0x18]
        push edx
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        mov dword ptr [esp + 0x40], 0x9546f4
        call dword ptr [mem_0092558C]
        test ax, ax
        jne short L_registered
        push 0x30
        push 0x9547cc
        push 0x954d98
        push ebx
        call dword ptr [mem_009255E0]
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 0x10
L_registered:
        cmp byte ptr [esi + 0x374], bl
        push ebp
        push edi
        je short L_windowed
        push 1
        mov ebp, 0x40000
        mov edi, 0x80000000
        call dword ptr [mem_009256A0]
        jmp short L_adjust
L_windowed:
        mov ebp, 0x40100
        mov edi, 0xcf0000
L_adjust:
        push ebp
        push ebx
        push edi
        lea eax, dword ptr [esp + 0x1c]
        push eax
        call dword ptr [mem_00925590]
        mov ecx, dword ptr [esi + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        sub edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        sub eax, dword ptr [esp + 0x10]
        push ebx
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        push ebx
        push ebx
        push edx
        push eax
        push ebx
        push ebx
        or edi, 0x6000000
        push edi
        push ecx
        push 0x9546f4
        push ebp
        call dword ptr [mem_00925594]
        cmp eax, ebx
        pop edi
        mov dword ptr [esi + 0x1c], eax
        pop ebp
        jne short L_shown
        mov ecx, esi
        call ext_00532CC0
        push 0x30
        push 0x9547cc
        push 0x954d80
        push ebx
        call dword ptr [mem_009255E0]
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 0x10
L_shown:
        push 5
        push eax
        call dword ptr [mem_00925598]
        mov edx, dword ptr [esi + 0x1c]
        mov dword ptr [esi + 0x2c], edx
        mov byte ptr [esi + 0x492], 1
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x38
        ret 0x10
    }
}

// [0x00532A10] sub_00532A10 (191 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0066A550();
extern "C" int mem_00A9F324;
extern "C" int mem_00A9EDD0;
extern "C" int mem_00A9F5F4;

extern "C" __declspec(naked) void __fastcall fn_00532A10(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F324]
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        push 1
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0b53a34h
        je L_00532A4C
        cmp eax, 0b53b30h
        je L_00532A4C
        cmp eax, 0b53ab0h
        je L_00532A4C
        cmp eax, 0b53a70h
        je L_00532A4C
        cmp eax, 0b53af0h
        jne L_00532A51
    L_00532A4C:
        mov eax, 0b53b30h
    L_00532A51:
        push eax
        lea ecx, [esi + 18h]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9EDD0]
        add esp, 8
        push 1
        push 0
        push edx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0b53a34h
        je L_00532A93
        cmp eax, 0b53b30h
        je L_00532A93
        cmp eax, 0b53ab0h
        je L_00532A93
        cmp eax, 0b53a70h
        je L_00532A93
        cmp eax, 0b53af0h
        jne L_00532A98
    L_00532A93:
        mov eax, 0b53b30h
    L_00532A98:
        push eax
        lea ecx, [esi + 8]
        call ext_0066A550
        mov eax, dword ptr [mem_00A9F5F4]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0ch]
        push ecx
        lea edx, [esi + 34h]
        push edx
        mov dword ptr [esp + 14h], eax
        call ext_00427640
        mov al, byte ptr [esp + 18h]
        add esp, 8
        pop edi
        mov byte ptr [esi + 4], al
        pop esi
        ret 8
    }
}

extern "C" void ext_00532A10();

// [0x00532AD0] sub_00532AD0 (106 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00532AD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8955a7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x4], 1
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9543b4
        call ext_0066A310
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x18], 1
        call ext_00532A10
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00535330] sub_00535330 (182 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00925444;
extern "C" int mem_00925240;
extern "C" int mem_00924FE4;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00535330(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x008b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push 0x1f03
        call dword ptr [mem_00925444]
        mov esi, dword ptr [esp + 0x34]
        push esi
        push eax
        call dword ptr [mem_00925240]
        add esp, 0x8
        test eax, eax
        setne bl
        test bl, bl
        jne L_done_00535330
        push 0x00954954
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        push esi
        push 0x00954948
        push edx
        mov dword ptr [esp + 0x40], 0x0
        call ext_00435D00
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_done_00535330:
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x00535AC0] sub_00535AC0 (360 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00532CC0();
extern "C" void ext_00532F80();
extern "C" void ext_0063DFF4();
extern "C" void ext_00679C60();
extern "C" int mem_00925658;
extern "C" int mem_00925528;
extern "C" int mem_00925468;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E90;
extern "C" int mem_00924E98;

extern "C" __declspec(naked) bool __fastcall fn_00535AC0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push 0x00954af4
        mov esi, ecx
        call ext_00679C60
        mov eax, dword ptr [esp + 0xc]
        add esp, 4
        push eax
        mov dword ptr [esi + 0x1c], eax
        call dword ptr [mem_00925658]
        push 0x00954ad8
        mov dword ptr [esi + 0x24], eax
        call ext_00679C60
        mov eax, dword ptr [esi + 0x350]
        mov ecx, dword ptr [esi + 0x24]
        add esp, 4
        push eax
        push ecx
        mov ecx, esi
        call ext_00532F80
        push 0x00954abc
        call ext_00679C60
        mov edx, dword ptr [esi + 0x24]
        add esp, 4
        push edx
        call dword ptr [mem_00925528]
        test eax, eax
        mov dword ptr [esi + 0x28], eax
        jne L_535b59
        push 0x00954aa0
        call ext_00679C60
        add esp, 4
        mov ecx, esi
        call ext_00532CC0
        push 0x00954a84
        call ext_00679C60
        add esp, 4
        push 0x30
        push 0x009547cc
        push 0x00954a5c
        push 0
        call dword ptr [mem_009255E0]
        xor al, al
        pop esi
        ret 4
    L_535b59:
        push ebx
        push edi
        push 0x00954a40
        call ext_00679C60
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [esi + 0x24]
        mov ebx, dword ptr [mem_009253E0]
        add esp, 4
        push eax
        push ecx
        call ebx
        push 0x00954a24
        call ext_00679C60
        mov edi, dword ptr [mem_00925468]
        add esp, 4
        call edi
        test eax, eax
        je L_535c00
    L_535b91:
        push eax
        call ext_0063DFF4
        mov edx, dword ptr [mem_00924FA0]
        push 0x00954a10
        push 0x35b
        push 0x0093bf10
        push 0x009549fc
        push edx
        mov esi, eax
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        push eax
        call ext_00435D00
        push esi
        push eax
        call ext_00435D00
        mov ecx, dword ptr [mem_00924E90]
        add esp, 0x10
        push ecx
        push 0x009549f8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        call edi
        test eax, eax
        jne L_535b91
    L_535c00:
        push 0x009549dc
        call ext_00679C60
        add esp, 4
        push 0
        push 0
        call ebx
        push 0x009549c0
        call ext_00679C60
        add esp, 4
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x005317D0] sub_005317D0 (520 bytes)
extern "C" void ext_00489320();
extern "C" void ext_00530290();
extern "C" void ext_00540F00();
extern "C" void ext_00543530();
extern "C" void ext_00543620();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005317D0(void* self) {
    __asm {
        push    -0x1
        push    0x8950e8
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1d8]
        push    edi
        call    edx
        mov     edi, eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], edi
        call    ext_0065C640
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0x10]
        add     ecx, 0x9c
        mov     dword ptr [esp + 0x3c], 0x0
        call    ext_00540F00
        mov     ecx, edi
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    ext_0065C650
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x1dc]
        call    eax
        mov     edi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esi + 0x4c]
        push    edi
        lea     edx, [esp + 0x44]
        push    edx
        call    ext_00543620
        test    eax, eax
        jne     loc_5319A5
        mov     ecx, dword ptr [esi + 0x68]
        push    edi
        lea     eax, [esp + 0x44]
        push    eax
        call    ext_00543530
        test    eax, eax
        jl      loc_5319A5
        mov     ecx, dword ptr [esi + 0x4c]
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x70]
        push    eax
        lea     eax, [esp + 0x44]
        push    eax
        call    edx
        mov     ecx, dword ptr [esi + 0x4c]
        push    edi
        lea     eax, [esp + 0x44]
        push    eax
        call    ext_00543620
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx]
        test    eax, eax
        mov     eax, dword ptr [edx + 0x1e0]
        setne   bl
        call    eax
        test    bl, bl
        jne     loc_5319B2
        mov     ecx, dword ptr [esi + 0x4c]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x38]
        call    eax
        test    al, al
        je      loc_5319B2
        mov     ecx, dword ptr [esi + 0x38]
        lea     edx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], ecx
        lea     ecx, [esi + 0x54]
        push    edx
        call    ext_00489320
    loc_5318D2:
        mov     eax, dword ptr [esi + 0x5c]
        cmp     dword ptr [esi + 0x58], eax
        lea     ebp, [esi + 0x54]
        mov     dword ptr [esp + 0x3c], eax
        jbe     loc_5318E7
        call    dword ptr [mem_00925134]
    loc_5318E7:
        mov     ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        je      loc_5318F3
        cmp     ebx, ebp
        je      loc_5318F9
    loc_5318F3:
        call    dword ptr [mem_00925134]
    loc_5318F9:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, dword ptr [esp + 0x3c]
        je      loc_5319B2
        test    ebx, ebx
        jne     loc_531911
        call    dword ptr [mem_00925134]
    loc_531911:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      loc_53191C
        call    dword ptr [mem_00925134]
    loc_53191C:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [edi]
        jne     loc_53198E
        cmp     edi, dword ptr [ebx + 0x8]
        mov     dword ptr [esp + 0x20], edi
        jb      loc_531933
        call    dword ptr [mem_00925134]
    loc_531933:
        mov     ebp, dword ptr [ebp + 0x8]
        add     edi, 0x4
        cmp     dword ptr [esi + 0x58], ebp
        jbe     loc_531944
        call    dword ptr [mem_00925134]
    loc_531944:
        lea     eax, [esi + 0x54]
        cmp     ebx, eax
        je      loc_531951
        call    dword ptr [mem_00925134]
    loc_531951:
        cmp     edi, ebp
        jne     loc_531967
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esi + 0x54]
        call    ext_00489320
        mov     ebx, dword ptr [eax]
        mov     edi, dword ptr [eax + 0x4]
    loc_531967:
        test    ebx, ebx
        jne     loc_531971
        call    dword ptr [mem_00925134]
    loc_531971:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      loc_53197C
        call    dword ptr [mem_00925134]
    loc_53197C:
        mov     edx, dword ptr [edi]
        push    edx
        mov     ecx, esi
        call    ext_00530290
        mov     edi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x14]
    loc_53198E:
        cmp     edi, dword ptr [ebx + 0x8]
        jb      loc_531999
        call    dword ptr [mem_00925134]
    loc_531999:
        add     edi, 0x4
        mov     dword ptr [esp + 0x18], edi
        jmp     loc_5318D2
    loc_5319A5:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x1e0]
        call    edx
    loc_5319B2:
        mov     esi, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x158]
        push    0x0
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x28
        ret     0xc
    }
}

// [0x0053FAD0] sub_0053FAD0 (107 bytes)
extern "C" void ext_0055C5D0();
extern "C" __declspec(naked) void __fastcall fn_0053FAD0(void* self) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x15], 0x0
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, edx
        mov byte ptr [esp + 0x8], 0x1
        jne L_call
        push edi
        mov edi, dword ptr [ebp]
    L_loop:
        cmp edi, dword ptr [eax + 0xc]
        mov esi, eax
        setl dl
        test dl, dl
        mov byte ptr [esp + 0xc], dl
        je L_right
        mov eax, dword ptr [eax]
        jmp L_chk
    L_right:
        mov eax, dword ptr [eax + 0x8]
    L_chk:
        cmp byte ptr [eax + 0x15], 0x0
        je L_loop
        pop edi
    L_call:
        mov eax, dword ptr [esp + 0x8]
        push ebp
        push esi
        push eax
        lea edx, [esp + 0x14]
        push edx
        call ext_0055C5D0
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx + 0x4]
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        mov byte ptr [eax + 0x8], 0x1
        pop ebp
        add esp, 0x8
        ret 0x8
    }
}

extern "C" void ext_00468180();
extern "C" void ext_004685F0();
extern "C" void ext_00468630();
extern "C" void ext_00468660();
extern "C" void ext_0046F930();
extern "C" void ext_00472350();
extern "C" void ext_00530290();
extern "C" int mem_00AD89B4;

// [0x005311E0] sub_005311E0 (544 bytes)
extern "C" __declspec(naked) void __fastcall fn_005311E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8950c8
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8c]
        cmp ecx, 0x6
        push edi
        jne loc_005312A9
        cmp dword ptr [esi + 0x88], ecx
        je loc_005312A9
        call ext_00468180
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov ebx, 0x1
        mov dword ptr [esp + 0xc], edi
        mov byte ptr [esp + 0x10], bl
        je loc_0053124D
        cmp dword ptr [mem_00AD89B4], 0x0
        jne loc_00531247
        mov ecx, edi
        mov byte ptr [edi + 0x153], bl
        call ext_00472350
    loc_00531247:
        add dword ptr [mem_00AD89B4], ebx
    loc_0053124D:
        push ebp
        mov eax, dword ptr [esi + 0x68]
        mov ecx, dword ptr [eax + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        mov ebp, dword ptr [esi + 0x38]
        mov dword ptr [esp + 0x20], 0x0
        call eax
        push ebx
        mov ecx, esi
        call ext_00530290
        push ebp
        mov ecx, esi
        call ext_00530290
        test edi, edi
        mov dword ptr [esp + 0x20], 0xffffffff
        pop ebp
        je loc_005313B9
        sub dword ptr [mem_00AD89B4], ebx
        jne loc_005313B9
        mov ecx, edi
        mov byte ptr [edi + 0x153], 0x0
        call ext_0046F930
        jmp loc_005313B9
    loc_005312A9:
        mov eax, dword ptr [esi + 0x88]
        cmp eax, 0x6
        jne loc_00531353
        cmp ecx, eax
        je loc_00531353
        call ext_00468180
        mov edi, dword ptr [eax + 0x14]
        test edi, edi
        mov dword ptr [esp + 0xc], edi
        mov byte ptr [esp + 0x10], 0x0
        mov ebx, 0x1
        je loc_005312F6
        cmp dword ptr [mem_00AD89B4], 0x0
        jne loc_005312F0
        mov ecx, edi
        mov byte ptr [edi + 0x153], bl
        call ext_00472350
    loc_005312F0:
        add dword ptr [mem_00AD89B4], ebx
    loc_005312F6:
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x20], ebx
        call ext_00530290
        mov ecx, dword ptr [esi + 0x68]
        mov ecx, dword ptr [ecx + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc4]
        call eax
        push 0x6
        mov ecx, esi
        call ext_00530290
        call ext_00468180
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xb4]
        call eax
        test edi, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je loc_005313B9
        sub dword ptr [mem_00AD89B4], ebx
        jne loc_005313B9
        mov byte ptr [edi + 0x153], 0x0
        jmp loc_005313B9
    loc_00531353:
        cmp byte ptr [esi + 0x94], 0x0
        jne loc_005313B9
        cmp eax, 0x6
        jne loc_005313B9
        cmp ecx, eax
        jne loc_005313B9
        call ext_00468180
        mov eax, dword ptr [eax + 0x14]
        push 0x0
        push eax
        lea ecx, [esp + 0x14]
        call ext_004685F0
        mov ecx, dword ptr [esi + 0x68]
        mov ecx, dword ptr [ecx + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc4]
        mov edi, dword ptr [esi + 0x38]
        mov dword ptr [esp + 0x1c], 0x2
        call eax
        push 0x1
        mov ecx, esi
        call ext_00530290
        push edi
        mov ecx, esi
        call ext_00530290
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_00468630
    loc_005313B9:
        mov eax, 0x3
        cmp dword ptr [esi + 0x88], eax
        jne loc_005313CF
        cmp dword ptr [esi + 0x38], eax
        jne loc_005313DD
        push 0x7
        jmp loc_005313D6
    loc_005313CF:
        cmp dword ptr [esi + 0x38], 0x7
        jne loc_005313DD
        push eax
    loc_005313D6:
        mov ecx, esi
        call ext_00530290
    loc_005313DD:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x154]
        call eax
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov byte ptr [esi + 0x7e], 0x0
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

extern "C" void ext_005311E0();

// [0x00531400] sub_00531400 (191 bytes)
extern "C" __declspec(naked) void __fastcall fn_00531400(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1dc]
        push edi
        call edx
        mov edi, dword ptr [esp + 0x10]
        push edi
        mov ecx, esi
        call ext_00530740
        mov ecx, dword ptr [esi + 0x4c]
        mov byte ptr [esi + 0x7f], 0x1
        mov dword ptr [esi + 0x80], 0x1
        mov byte ptr [esi + 0x7c], 0x0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        call edx
        mov ecx, dword ptr [esi + 0x4c]
        mov byte ptr [esp + 0x10], al
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        mov ecx, dword ptr [esi + 0x4c]
        mov bl, al
        push edi
        lea eax, [esp + 0x18]
        push eax
        call ext_00543550
        test eax, eax
        jne L_148C
        test bl, bl
        je L_1470
        cmp byte ptr [esp + 0x10], al
        jne L_1470
        mov ecx, dword ptr [esi + 0x68]
        mov byte ptr [ecx + 0xe4], 0x1
L_1470:
        mov ecx, dword ptr [esi + 0x68]
        push edi
        lea edx, [esp + 0x18]
        push edx
        call ext_00543550
        mov ecx, dword ptr [esi + 0x4c]
        push edi
        lea eax, [esp + 0x18]
        push eax
        call ext_00543550
L_148C:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1e0]
        call eax
        cmp byte ptr [esi + 0x7e], 0x0
        je L_14A6
        mov ecx, esi
        call ext_005311E0
L_14A6:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x158]
        push 0x0
        call eax
        pop edi
        mov byte ptr [esi + 0x7f], 0x0
        pop esi
        pop ebx
        ret 0x0c
    }
}

// [0x0053A930] sub_0053A930 (689 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00669E40();
extern "C" void ext_0066A2A0();
extern "C" void ext_0066A310();
extern "C" void ext_0066A500();
extern "C" void ext_006A6C87();
extern "C" int mem_00AEFF00;
extern "C" int mem_00AEFEEC;
extern "C" int mem_00AEFEF0;
extern "C" int mem_00AEFEF4;
extern "C" int mem_00AEFF04;
extern "C" int mem_00AEFF08;
extern "C" int mem_00AF056C;
extern "C" int mem_00AF055C;
extern "C" int mem_00AF0560;
extern "C" int mem_00AF0564;
extern "C" int mem_00AF0568;
extern "C" int mem_00AF054C;
extern "C" int mem_00AF0550;
extern "C" int mem_00AF0554;
extern "C" int mem_00AF0558;
extern "C" int mem_00AF053C;

extern "C" __declspec(naked) void* __fastcall fn_0053A930(void* self, int edx_unused, float t, int flags) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x89617c
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        test eax, 0x800
        push esi
        mov esi, ecx
        je L_c970
        mov eax, dword ptr [mem_00AEFF00]
        add eax, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_c970:
        test al, 0x20
        je L_c98e
        mov eax, dword ptr [mem_00AEFEEC]
        add eax, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_c98e:
        test eax, 0x400
        je L_c9af
        mov eax, dword ptr [mem_00AEFEF0]
        add eax, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_c9af:
        test eax, 0x2000
        je L_c9d0
        mov eax, dword ptr [mem_00AEFEF4]
        add eax, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_c9d0:
        test eax, 0x200000
        je L_c9f1
        mov eax, dword ptr [mem_00AEFF04]
        add eax, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_c9f1:
        test eax, 0x1000000
        je L_ca12
        mov eax, dword ptr [mem_00AEFF08]
        add eax, 0x8
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_ca12:
        test eax, 0x4000000
        je L_ab90
        cmp dword ptr [esi + 0x24], 0x0
        je L_ab90
        cmp dword ptr [esi + 0x28], 0x0
        je L_ab90
        cmp dword ptr [esi + 0x2c], 0x0
        je L_ab90
        test byte ptr [mem_00AF056C], 0x1
        jne L_aa72
        or dword ptr [mem_00AF056C], 0x1
        mov ecx, offset mem_00AF055C
        mov dword ptr [esp + 0x20], 0x0
        call ext_0066A310
        push 0x91a930
        call ext_006A6C87
        add esp, 0x4
        mov dword ptr [esp + 0x20], 0xffffffff
    L_aa72:
        mov eax, 0x2
        test byte ptr [mem_00AF056C], al
        jne L_aaac
        or dword ptr [mem_00AF056C], eax
        mov ecx, offset mem_00AF054C
        mov dword ptr [esp + 0x20], 0x1
        call ext_0066A310
        push 0x91a920
        call ext_006A6C87
        add esp, 0x4
        mov dword ptr [esp + 0x20], 0xffffffff
    L_aaac:
        mov ecx, dword ptr [esi + 0x2c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        fstp dword ptr [esp + 0x28]
        mov eax, dword ptr [esi + 0x24]
        fld dword ptr [eax + 0x8]
        add eax, 0x8
        fstp dword ptr [mem_00AF055C]
        push ecx
        fld dword ptr [eax + 0x4]
        mov ecx, offset mem_00AF055C
        fstp dword ptr [mem_00AF0560]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [mem_00AF0564]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [mem_00AF0568]
        mov eax, dword ptr [esi + 0x28]
        fld dword ptr [eax]
        fstp dword ptr [mem_00AF054C]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [mem_00AF0550]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [mem_00AF0554]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [mem_00AF0558]
        fld dword ptr [esp + 0x2c]
        fld1
        __asm _emit 0xde __asm _emit 0xe1
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esp]
        call ext_0066A2A0
        fld dword ptr [esp + 0x28]
        push ecx
        mov ecx, offset mem_00AF054C
        fstp dword ptr [esp]
        call ext_0066A2A0
        push offset mem_00AF054C
        lea eax, [esp + 0xc]
        push eax
        mov ecx, offset mem_00AF055C
        call ext_0066A500
        fld dword ptr [eax]
        fstp dword ptr [mem_00AF055C]
        lea ecx, [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [mem_00AF0560]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [mem_00AF0564]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [mem_00AF0568]
        call ext_00493D90
        mov eax, offset mem_00AF055C
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_ab90:
        mov esi, dword ptr [esi + 0x24]
        test esi, esi
        je L_abac
        lea eax, [esi + 0x8]
        pop esi
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    L_abac:
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        mov ecx, offset mem_00AF053C
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_00669E40
        mov ecx, dword ptr [esp + 0x18]
        mov eax, offset mem_00AF053C
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x8
    }
}

// [0x00534060] sub_00534060 (737 bytes)
extern "C" void ext_005405B0();
extern "C" void ext_00540720();
extern "C" void ext_00540E40();
extern "C" void ext_00547CE0();
extern "C" void ext_00547D00();
extern "C" void ext_0054C770();
extern "C" void ext_0054C7F0();
extern "C" void ext_0054C800();
extern "C" int mem_009253D8;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_0092C510;
extern "C" int mem_009548F0;
extern "C" int mem_00925410;
extern "C" int mem_0092540C;
extern "C" int mem_009939D8;
extern "C" int mem_00993828;
extern "C" int mem_00925408;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FC8;
extern "C" int mem_00993840;
extern "C" int mem_009548E0;
extern "C" int mem_00925404;
extern "C" int mem_009548E8;
extern "C" int mem_009548C8;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_00534060(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        cmp dword ptr [ebp + 0xc], 0x1c02
        push ebx
        push esi
        push edi
        mov ebx, ecx
        je L_END
        mov esi, dword ptr [ebp + 0x8]
        mov eax, dword ptr [esi]
        fld qword ptr [eax + 0xc0]
        push 0x1701
        fstp qword ptr [esp + 0x3c]
        call dword ptr [mem_009253D8]
        call dword ptr [mem_00925414]
        mov edi, dword ptr [mem_009253D4]
        call edi
        fld qword ptr [mem_0092C510]
        sub esp, 0x30
        fstp qword ptr [esp + 0x28]
        fld qword ptr [mem_009548F0]
        fstp qword ptr [esp + 0x20]
        fld1
        fstp qword ptr [esp + 0x18]
        fldz
        fst qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x68]
        fstp qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        call dword ptr [mem_00925410]
        push 0x1700
        call dword ptr [mem_009253D8]
        call edi
        mov ecx, esi
        call ext_005405B0
        mov ecx, esi
        call ext_00540E40
        cmp byte ptr [ebx + 0x490], 0
        je L_SKIP1
        mov ecx, esi
        call ext_00540720
L_SKIP1:
        mov ecx, dword ptr [ebx + 0x4b0]
        push ecx
        call dword ptr [mem_0092540C]
        fld qword ptr [esp + 0x38]
        fmul qword ptr [mem_009939D8]
        mov edx, dword ptr [esi + 0x10]
        sub edx, dword ptr [esi + 0x8]
        mov edi, dword ptr [esi]
        fst qword ptr [esp + 0x30]
        mov dword ptr [esp + 0x28], edx
        fild dword ptr [ebx + 0x1e0]
        sub esp, 0x10
        fld qword ptr [mem_00993828]
        fmul st, st(1)
        faddp st(1), st
        fild dword ptr [esp + 0x38]
        fdivp st(1), st
        fld1
        fsubrp st(1), st
        fstp qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        call dword ptr [mem_00925408]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, edi
        call edx
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0x9548e8
        call ext_0054C800
        lea eax, [ebx + 0x64]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x10
        test al, al
        jne L_B
        lea eax, [ebx + 0x80]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_C
L_B:
        fild dword ptr [ebx + 0x1e0]
        mov ecx, dword ptr [esi + 0x10]
        fld qword ptr [mem_00993840]
        sub ecx, dword ptr [esi + 0x8]
        sub esp, 0x10
        fmul st, st(1)
        mov dword ptr [esp + 0x38], ecx
        faddp st(1), st
        fild dword ptr [esp + 0x38]
        fdivp st(1), st
        fld1
        fsubrp st(1), st
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x40]
        fstp qword ptr [esp]
        call dword ptr [mem_00925408]
        lea ecx, [ebx + 0x1dc]
        call ext_0054C7F0
        mov edx, dword ptr [ebx + 0x24]
        lea ecx, [ebx + 0x200]
        push edx
        call ext_0054C770
        lea eax, [ebx + 0x80]
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        lea ecx, [ebx + 0x80]
        jne L_F
        lea ecx, [ebx + 0x64]
L_F:
        call dword ptr [mem_00924FF0]
        push eax
        push 0x9548e8
        call ext_0054C800
        add esp, 0x8
        lea ecx, [ebx + 0x200]
        call ext_0054C7F0
        mov eax, dword ptr [ebx + 0x24]
        push eax
        lea ecx, [ebx + 0x1dc]
        call ext_0054C770
L_C:
        mov ecx, edi
        call ext_00547CE0
        test al, al
        je L_D
        mov ecx, edi
        call ext_00547D00
        fild dword ptr [ebx + 0x1e0]
        mov edi, eax
        mov eax, 0x10624dd3
        imul edi
        sar edx, 0x6
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        mov edx, ecx
        imul edx, edx, 0x3e8
        sub edi, edx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov edx, eax
        shl edx, 0x4
        sub edx, eax
        mov dword ptr [esp + 0x2c], edi
        mov edi, eax
        mov eax, dword ptr [esi + 0x10]
        sub eax, dword ptr [esi + 0x8]
        add edx, edx
        mov dword ptr [esp + 0x28], eax
        add edx, edx
        sub ecx, edx
        fild dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x30], ecx
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, dword ptr [esi + 0x4]
        fdivr st, st(1)
        sub esp, 0x10
        mov dword ptr [esp + 0x38], ecx
        fstp qword ptr [esp + 0x8]
        fild dword ptr [esp + 0x38]
        fdivp st(1), st
        fmul qword ptr [mem_009548E0]
        fld1
        fsubrp st(1), st
        fmul qword ptr [esp + 0x48]
        fstp qword ptr [esp]
        call dword ptr [mem_00925408]
        mov eax, 0x88888889
        imul edi
        mov ecx, dword ptr [esp + 0x30]
        add edx, edi
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        mov edx, eax
        shl edx, 0x4
        sub edx, eax
        add edx, edx
        push ecx
        add edx, edx
        sub edi, edx
        push edi
        push eax
        push 0x9548c8
        call ext_0054C800
        add esp, 0x14
L_D:
        mov esi, dword ptr [mem_009253D8]
        push 0x1701
        call esi
        call dword ptr [mem_00925404]
        push 0x1700
        call esi
L_END:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

extern "C" void ext_00530250();
extern "C" void ext_00530270();
extern "C" void ext_00540D00();
extern "C" void ext_00541220();
extern "C" void ext_005427E0();
extern "C" void ext_00543220();
extern "C" void ext_005434F0();
extern "C" void ext_00543640();
extern "C" void ext_005438F0();
extern "C" void ext_00543900();
extern "C" void ext_0065C650();
extern "C" int mem_00A444C8;
extern "C" int mem_00924FE4;
extern "C" int mem_00A444D4;
extern "C" int mem_00924FC0;
extern "C" int mem_00A444E0;
extern "C" int mem_00A444D0;
extern "C" int mem_00A444DC;
extern "C" int mem_00A444CC;
extern "C" int mem_00A444D8;

// [0x00530D80] sub_00530D80 (1040 bytes)
extern "C" __declspec(naked) void __fastcall fn_00530D80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x895098
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x24
        push ebx
        xor ebx, ebx
        cmp eax, 0x13
        push esi
        mov esi, ecx
        ja L_53116F
        jmp dword ptr [eax*4 + 0x531190]

        cmp dword ptr [esi + 0x38], ebx
        lea ecx, [esi + 0x38]
        je L_53117D
        push 0x1
        push ebx
        call ext_00543220
        mov byte ptr [esi + 0x34], 0x1
        jmp L_53116F

        mov eax, dword ptr [esi + 0x70]
        push ebx
        push eax
        lea ecx, [esi + 0x38]
        call ext_00543220
        mov byte ptr [esi + 0x34], 0x1
        jmp L_53116F

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x64]
        push 0xe
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        mov dword ptr [esp + 0x40], ebx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], 0x32
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x24], ebx
        call ext_005434F0
        jmp L_53115E

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x64]
        push 0xe
        lea edx, [esp + 0x20]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov dword ptr [esp + 0x40], 0x1
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], 0xffffffce
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x34], ebx
        call ext_005434F0
        jmp L_53115E

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov eax, dword ptr [esi + 0x4c]
        mov ecx, dword ptr [eax + 0x88]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        mov dword ptr [esp + 0x34], 0x2
        call eax
        jmp L_53115E

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x4c]
        push ebx
        mov dword ptr [esp + 0x38], 0x3
        call ext_00543640
        jmp L_53115E

        mov edx, dword ptr [esi + 0x10]
        push edx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x160]
        mov dword ptr [esp + 0x34], 0x4
        call edx
        jmp L_53115E

        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x64]
        mov dword ptr [esp + 0x34], 0x5
        call ext_005438F0
        jmp L_53115E

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x64]
        mov dword ptr [esp + 0x34], 0x6
        call ext_00543900
        jmp L_53115E

        mov edx, dword ptr [esi + 0x10]
        push edx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov eax, dword ptr [mem_00A444C8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov dword ptr [esp + 0x54], 0x7
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x10]
        add ecx, 0x9c
        call ext_005427E0
        jmp L_53115E

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [mem_00A444D4]
        add ecx, 0x9c
        push edx
        mov dword ptr [esp + 0x38], 0x8
        call ext_00540D00
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        sub esp, 0x1c
        test al, al
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        je L_530FA3
        mov eax, dword ptr [mem_00A444E0]
        push eax
        jmp L_530FAA
L_530FA3:
        mov edx, dword ptr [mem_00A444D4]
L_530FA9:
        push edx
L_530FAA:
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [esi + 0x10]
        add ecx, 0x9c
        call ext_005427E0
        jmp L_53115E

        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [mem_00A444D0]
        add ecx, 0x9c
        push edx
        mov dword ptr [esp + 0x38], 0x9
        call ext_00540D00
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        sub esp, 0x1c
        test al, al
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        je L_53100C
        mov eax, dword ptr [mem_00A444DC]
        push eax
        jmp L_530FAA
L_53100C:
        mov edx, dword ptr [mem_00A444D0]
        jmp L_530FA9

        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [mem_00A444CC]
        add ecx, 0x9c
        push edx
        mov dword ptr [esp + 0x38], 0xa
        call ext_00540D00
        push eax
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        sub esp, 0x1c
        test al, al
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        je L_531060
        mov eax, dword ptr [mem_00A444D8]
        push eax
        jmp L_530FAA
L_531060:
        mov edx, dword ptr [mem_00A444CC]
        jmp L_530FA9

        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ecx + 0x194], 0x1
        jmp L_531166

        mov edx, dword ptr [esi + 0x10]
        push edx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov eax, dword ptr [esi + 0x10]
        mov dword ptr [eax + 0x194], ebx
        jmp L_531166

        mov ecx, dword ptr [esi + 0x10]
        push ecx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov edx, dword ptr [esi + 0x10]
        mov dword ptr [edx + 0x194], 0x3
        jmp L_531166

        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ecx + 0x194], 0x2
        jmp L_531166

        mov edx, dword ptr [esi + 0x10]
        push edx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov eax, dword ptr [esi + 0x10]
        add eax, 0x9c
        cmp byte ptr [eax + 0x13e], bl
        sete cl
        mov byte ptr [eax + 0x13e], cl
        jmp L_531166

        mov edx, dword ptr [esi + 0x10]
        push edx
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov ecx, dword ptr [esi + 0x10]
        add ecx, 0x9c
        mov dword ptr [esp + 0x34], 0xb
        call ext_00530250
        jmp L_53115E

        mov eax, dword ptr [esi + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        call ext_00530270
        mov eax, dword ptr [esi + 0x10]
        cmp dword ptr [eax + 0x1a4], ebx
        mov dword ptr [esp + 0x34], 0xc
        lea ecx, [eax + 0x9c]
        jne L_531158
        push 0x1
        jmp L_531159
L_531158:
        push ebx
L_531159:
        call ext_00541220
L_53115E:
        mov dword ptr [esp + 0x34], 0xffffffff
L_531166:
        mov ecx, dword ptr [esp + 0x3c]
        call ext_0065C650
L_53116F:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x158]
        push ebx
        call eax
L_53117D:
        mov ecx, dword ptr [esp + 0x2c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x30
        ret 0x4
    }
}

// [0x00537ED0] sub_00537ED0 (1625 bytes)
extern "C" void ext_0063E018();
extern "C" void ext_0063E01E();
extern "C" void ext_0067B7F0();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" int mem_00993828;
extern "C" int mem_00925490;
extern "C" int mem_0092549C;
extern "C" int mem_00925498;
extern "C" int mem_00925488;
extern "C" int mem_009253D0;
extern "C" int mem_00954FA0;
extern "C" __declspec(naked) void __fastcall fn_00537ED0(void* self) {
    __asm {
    push ebp
    mov ebp, esp
    and esp, -040h
    sub esp, 0b4h
    fld dword ptr [ebp + 0ch]
    push ebx
    fmul qword ptr [mem_00993828]
    push esi
    push edi
    mov edi, ecx
    fstp dword ptr [esp + 058h]
    push 07h
    fld dword ptr [ebp + 010h]
    mov dword ptr [esp + 06ch], edi
    fstp dword ptr [esp + 04ch]
    fld dword ptr [ebp + 014h]
    fidiv dword ptr [ebp + 018h]
    fstp dword ptr [esp + 064h]
    call dword ptr [mem_00925490]
    fld dword ptr [ebp + 010h]
    call ext_006A6EAA
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 050h]
    fld dword ptr [ebp + 010h]
    call ext_006A6EB0
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 04ch]
    fldz
    fst dword ptr [esp + 084h]
    fst dword ptr [esp + 088h]
    fld dword ptr [esp + 058h]
    fld st(0)
    fchs
    fstp dword ptr [esp + 054h]
    fld dword ptr [esp + 054h]
    fst dword ptr [esp + 08ch]
    fxch st(2)
    fst dword ptr [esp + 0a8h]
    fstp dword ptr [esp + 0ach]
    fst dword ptr [esp + 0b0h]
    fld dword ptr [esp + 04ch]
    fst dword ptr [esp + 09ch]
    fld dword ptr [esp + 050h]
    fst dword ptr [esp + 0a0h]
    fst dword ptr [esp + 0b8h]
    fxch st(2)
    fst dword ptr [esp + 0a4h]
    fxch st(1)
    fst dword ptr [esp + 0b4h]
    fxch st(3)
    fstp dword ptr [esp + 0bch]
    fldz
    fld st(0)
    fsub st(0), st(1)
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    fst dword ptr [esp + 078h]
    fstp dword ptr [esp + 07ch]
    fld dword ptr [esp + 08ch]
    fsubp st(2), st(0)
    fxch st(1)
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    fst dword ptr [esp + 080h]
    fxch st(3)
    fsub st(0), st(1)
    fstp dword ptr [esp + 06ch]
    fsubp st(1), st(0)
    fstp dword ptr [esp + 070h]
    fstp dword ptr [esp + 074h]
    fld dword ptr [esp + 074h]
    fld st(0)
    fld dword ptr [esp + 07ch]
    fld st(0)
    fmulp st(2), st(0)
    fld dword ptr [esp + 070h]
    fld st(0)
    fld dword ptr [esp + 080h]
    fld st(0)
    fmulp st(2), st(0)
    fxch st(4)
    fsubrp st(1), st(0)
    lea ecx, [esp + 090h]
    fstp dword ptr [esp + 090h]
    fld dword ptr [esp + 06ch]
    fld st(0)
    fmulp st(4), st(0)
    fld dword ptr [esp + 078h]
    fld st(0)
    fmulp st(6), st(0)
    fxch st(4)
    fsubrp st(5), st(0)
    fxch st(4)
    fstp dword ptr [esp + 094h]
    fmulp st(2), st(0)
    fmulp st(2), st(0)
    fsubrp st(1), st(0)
    fstp dword ptr [esp + 098h]
    call ext_0067B7F0
    lea eax, [esp + 090h]
    push eax
    call dword ptr [mem_0092549C]
    mov esi, dword ptr [mem_00925498]
    lea ecx, [esp + 084h]
    push ecx
    call esi
    lea edx, [esp + 0a8h]
    push edx
    call esi
    lea eax, [esp + 09ch]
    push eax
    call esi
    lea ecx, [esp + 0b4h]
    push ecx
    call esi
    call dword ptr [mem_00925488]
    fldz
    fcomp dword ptr [ebp + 014h]
    mov ebx, dword ptr [ebp + 018h]
    fnstsw ax
    test ah, 044h
    jnp L_005382BD
    push 08h
    call dword ptr [mem_00925490]
    xor edi, edi
    test ebx, ebx
    jl L_005382B3
    fld dword ptr [esp + 054h]
    fstp dword ptr [esp + 080h]
  L_005380C3:
    fld dword ptr [esp + 048h]
    call ext_006A6EAA
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 050h]
    fld dword ptr [esp + 048h]
    call ext_006A6EB0
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 04ch]
    fld dword ptr [esp + 04ch]
    fst dword ptr [esp + 0a8h]
    fld dword ptr [esp + 050h]
    fst dword ptr [esp + 0ach]
    fld dword ptr [esp + 054h]
    fstp dword ptr [esp + 0b0h]
    fxch st(1)
    fstp dword ptr [esp + 0b4h]
    fstp dword ptr [esp + 0b8h]
    fld dword ptr [esp + 058h]
    fstp dword ptr [esp + 0bch]
    fld dword ptr [esp + 048h]
    fsub dword ptr [esp + 060h]
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    call ext_006A6EB0
    fstp dword ptr [esp + 064h]
    fld dword ptr [esp + 064h]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 06ch]
    fld dword ptr [esp + 05ch]
    call ext_006A6EAA
    fstp dword ptr [esp + 064h]
    fld dword ptr [esp + 064h]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 070h]
    fld dword ptr [esp + 054h]
    fstp dword ptr [esp + 074h]
    fld dword ptr [esp + 060h]
    fadd dword ptr [esp + 048h]
    fstp dword ptr [esp + 05ch]
    fld dword ptr [esp + 05ch]
    call ext_006A6EB0
    fstp dword ptr [esp + 064h]
    fld dword ptr [esp + 064h]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 078h]
    fld dword ptr [esp + 05ch]
    call ext_006A6EAA
    fstp dword ptr [esp + 064h]
    fld dword ptr [esp + 064h]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 07ch]
    fld dword ptr [esp + 078h]
    fsub dword ptr [esp + 06ch]
    fstp dword ptr [esp + 090h]
    fld dword ptr [esp + 07ch]
    fsub dword ptr [esp + 070h]
    fstp dword ptr [esp + 094h]
    fld dword ptr [esp + 080h]
    fsub dword ptr [esp + 074h]
    fstp dword ptr [esp + 098h]
    fld dword ptr [esp + 04ch]
    fsubr st(0), st(0)
    fstp dword ptr [esp + 084h]
    fld dword ptr [esp + 050h]
    fsubr st(0), st(0)
    fstp dword ptr [esp + 088h]
    fld dword ptr [esp + 0b0h]
    fsub dword ptr [esp + 058h]
    fstp dword ptr [esp + 08ch]
    fld dword ptr [esp + 08ch]
    fld st(0)
    fld dword ptr [esp + 094h]
    fld st(0)
    fmulp st(2), st(0)
    fld dword ptr [esp + 088h]
    fld st(0)
    fld dword ptr [esp + 098h]
    fld st(0)
    lea ecx, [esp + 09ch]
    fmulp st(2), st(0)
    fxch st(4)
    fsubrp st(1), st(0)
    fstp dword ptr [esp + 09ch]
    fld dword ptr [esp + 084h]
    fld st(0)
    fmulp st(4), st(0)
    fld dword ptr [esp + 090h]
    fld st(0)
    fmulp st(6), st(0)
    fxch st(4)
    fsubrp st(5), st(0)
    fxch st(4)
    fstp dword ptr [esp + 0a0h]
    fmulp st(2), st(0)
    fmulp st(2), st(0)
    fsubrp st(1), st(0)
    fstp dword ptr [esp + 0a4h]
    call ext_0067B7F0
    lea edx, [esp + 09ch]
    push edx
    call dword ptr [mem_0092549C]
    lea eax, [esp + 0a8h]
    push eax
    call esi
    lea ecx, [esp + 0b4h]
    push ecx
    call esi
    cmp edi, ebx
    jge L_005382A8
    fld dword ptr [esp + 05ch]
    fstp dword ptr [esp + 048h]
  L_005382A8:
    add edi, 01h
    cmp edi, ebx
    jle L_005380C3
  L_005382B3:
    call dword ptr [mem_00925488]
    mov edi, dword ptr [esp + 068h]
  L_005382BD:
    push 07h
    call dword ptr [mem_00925490]
    fld dword ptr [esp + 048h]
    call ext_006A6EAA
    fstp dword ptr [esp + 068h]
    fld dword ptr [esp + 068h]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 050h]
    fld dword ptr [esp + 048h]
    call ext_006A6EB0
    fstp dword ptr [esp + 068h]
    fld dword ptr [esp + 068h]
    fmul dword ptr [ebp + 08h]
    fstp dword ptr [esp + 04ch]
    fld dword ptr [esp + 04ch]
    fst dword ptr [esp + 09ch]
    fld dword ptr [esp + 050h]
    fst dword ptr [esp + 0a0h]
    fld dword ptr [esp + 054h]
    fst dword ptr [esp + 0a4h]
    fxch st(2)
    fst dword ptr [esp + 0b4h]
    fxch st(1)
    fst dword ptr [esp + 0b8h]
    fld dword ptr [esp + 058h]
    fst dword ptr [esp + 0bch]
    fldz
    fst dword ptr [esp + 078h]
    fst dword ptr [esp + 07ch]
    fst dword ptr [esp + 06ch]
    fstp dword ptr [esp + 070h]
    fst dword ptr [esp + 080h]
    fxch st(3)
    fstp dword ptr [esp + 074h]
    fld st(1)
    fsub st(0), st(2)
    fstp dword ptr [esp + 084h]
    fld st(0)
    fsub st(0), st(1)
    fstp dword ptr [esp + 088h]
    fld dword ptr [esp + 0a4h]
    fsubp st(3), st(0)
    fxch st(2)
    fstp dword ptr [esp + 068h]
    fld dword ptr [esp + 068h]
    fst dword ptr [esp + 08ch]
    fldz
    fld st(0)
    fsubrp st(3), st(0)
    fxch st(2)
    fstp dword ptr [esp + 090h]
    fxch st(1)
    fsubrp st(2), st(0)
    fxch st(1)
    fstp dword ptr [esp + 094h]
    fstp dword ptr [esp + 098h]
    fld dword ptr [esp + 098h]
    fld st(0)
    fld dword ptr [esp + 088h]
    fld st(0)
    fmulp st(2), st(0)
    fld dword ptr [esp + 094h]
    fld st(0)
    fld dword ptr [esp + 08ch]
    fld st(0)
    fmulp st(2), st(0)
    fxch st(4)
    fsubrp st(1), st(0)
    fstp dword ptr [esp + 0a8h]
    fld dword ptr [esp + 090h]
    fld st(0)
    fmulp st(4), st(0)
    fld dword ptr [esp + 084h]
    fld st(0)
    fmulp st(6), st(0)
    fxch st(4)
    fsubrp st(5), st(0)
    fxch st(4)
    fstp dword ptr [esp + 0ach]
    fmulp st(2), st(0)
    fmulp st(2), st(0)
    fsubrp st(1), st(0)
    lea ecx, [esp + 0a8h]
    fstp dword ptr [esp + 0b0h]
    call ext_0067B7F0
    lea edx, [esp + 0a8h]
    push edx
    call dword ptr [mem_0092549C]
    lea eax, [esp + 09ch]
    push eax
    call esi
    lea ecx, [esp + 0b4h]
    push ecx
    call esi
    lea edx, [esp + 078h]
    push edx
    call esi
    lea eax, [esp + 06ch]
    push eax
    call esi
    call dword ptr [mem_00925488]
    fldz
    fcom dword ptr [ebp + 014h]
    fnstsw ax
    test ah, 044h
    jnp L_0053851E
    fld dword ptr [esp + 058h]
    mov esi, dword ptr [mem_009253D0]
    sub esp, 0ch
    fstp dword ptr [esp + 08h]
    fst dword ptr [esp + 04h]
    fstp dword ptr [esp]
    call esi
    mov ecx, dword ptr [edi]
    push 0186b4h
    push ecx
    call ext_0063E01E
    fld dword ptr [ebp + 014h]
    fld qword ptr [mem_00954FA0]
    mov edx, dword ptr [edi]
    fmul st(1), st(0)
    sub esp, 010h
    fxch st(1)
    fstp dword ptr [esp + 070h]
    fmul dword ptr [ebp + 010h]
    fstp dword ptr [esp + 06ch]
    fld dword ptr [esp + 070h]
    fstp qword ptr [esp + 08h]
    fld dword ptr [esp + 06ch]
    fstp qword ptr [esp]
    push 01h
    fld dword ptr [ebp + 08h]
    push ebx
    sub esp, 010h
    fstp qword ptr [esp + 08h]
    fldz
    fstp qword ptr [esp]
    push edx
    call ext_0063E018
    fld dword ptr [ebp + 0ch]
    sub esp, 0ch
    fchs
    fstp dword ptr [esp + 08h]
    fldz
    fst dword ptr [esp + 04h]
    fstp dword ptr [esp]
    call esi
    mov eax, dword ptr [edi]
    push 0186b5h
    push eax
    call ext_0063E01E
    fld dword ptr [esp + 060h]
    mov ecx, dword ptr [edi]
    sub esp, 010h
    fstp qword ptr [esp + 08h]
    fld dword ptr [esp + 06ch]
    fstp qword ptr [esp]
    push 01h
    fld dword ptr [ebp + 08h]
    push ebx
    sub esp, 010h
    fstp qword ptr [esp + 08h]
    fldz
    fstp qword ptr [esp]
    push ecx
    call ext_0063E018
    pop edi
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret 014h
  L_0053851E:
    pop edi
    fstp st(0)
    pop esi
    pop ebx
    mov esp, ebp
    pop ebp
    ret 014h
    }
}

extern "C" void __fastcall ext_00537870(void* self);
extern "C" void __fastcall ext_00534F30(void* self);

// [0x005379A0] sub_005379A0 (32 bytes)
extern "C" void* __fastcall fn_005379A0(void* self) {
    unsigned char* obj = (unsigned char*)((void* (__cdecl *)())ext_005371F0)();
    if (obj[0x34] == 0) {
        ext_00537870(obj);
        ext_00534F30(obj);
    }
    return obj;
}

// [0x005379C0] sub_005379C0 (33 bytes)
extern "C" void ext_005371F0();
extern "C" __declspec(naked) void* __cdecl fn_005379C0(int value) {
    __asm {
        push esi
        call ext_005371F0
        mov esi, eax
        mov eax, dword ptr [esp + 8]
        mov ecx, esi
        mov dword ptr [esi + 0x2c], eax
        call ext_00537870
        mov ecx, esi
        call ext_00534F30
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0053FB40] sub_0053FB40 (52 bytes)
extern "C" void ext_005DF840();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0053FB40(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005DF840
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

// [0x00537250] sub_00537250 (53 bytes)
extern "C" void ext_0067AFB0();
extern "C" void ext_0067AE70();
extern "C" __declspec(naked) void __fastcall fn_00537250(void* self) {
    __asm {
        push esi
        call ext_005371F0
        mov esi, eax
        cmp byte ptr [esi + 0x34], 0
        jne short done_init
        push edi
        lea edi, [esi + 0x8]
        mov ecx, edi
        call ext_0067AFB0
        mov eax, dword ptr [esi + 0x4A0]
        push eax
        mov ecx, edi
        call ext_0067AE70
        pop edi
    done_init:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        call eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0053FF80] sub_0053FF80 (56 bytes)
extern "C" void ext_004B69A0();
extern "C" int mem_00AF1420;
extern "C" int mem_00AF1424;

extern "C" __declspec(naked) bool __fastcall fn_0053FF80(void* self, int dummy, int arg) {
    __asm {
        cmp dword ptr [esp + 4], -1
        jne loc_53ffb3
        mov ecx, dword ptr [mem_00AF1420]
        test ecx, ecx
        jne loc_53ff95
        xor eax, eax
        jmp loc_53ff9f
    loc_53ff95:
        mov eax, dword ptr [mem_00AF1424]
        sub eax, ecx
        sar eax, 2
    loc_53ff9f:
        push 0
        add eax, eax
        push eax
        mov ecx, offset mem_00AF1420 - 4
        call ext_004B69A0
        xor al, al
        ret 4
    loc_53ffb3:
        mov al, 1
        ret 4
    }
}

// [0x00531B70] sub_00531B70 (57 bytes)
extern "C" void ext_005319E0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00531B70(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x10]
        mov ecx, dword ptr [esp + 0x8]
        add esi, 0x9c
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        push ecx
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x10c]
        call ext_005319E0
    done:
        pop esi
        ret 4
    }
}

extern "C" void ext_005A6650();
extern "C" void ext_006A6D5C();

// [0x00536A30] sub_00536A30 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_00536A30(void* self) {
    __asm {
        push -1
        push 0x896d3c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x118]
        mov dword ptr [esp + 0x10], 2
        call ext_00493D90
        lea ecx, [esi + 0x10c]
        mov byte ptr [esp + 0x10], 1
        call ext_005A6650
        push 0x532c70
        push 4
        push 0x3c
        lea eax, [esi + 8]
        push eax
        mov byte ptr [esp + 0x20], 0
        call ext_006A6D5C
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0053D070] sub_0053D070 (64 bytes)
extern "C" void ext_0052F890();
extern "C" void* ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();

extern "C" void* __fastcall fn_0053D070(void* self) {
    typedef void (__fastcall *InitFn)(void*);
    typedef void* (__stdcall *NewQuadricFn)();
    typedef void (__stdcall *QuadricArgFn)(void*, int);
    ((InitFn)ext_0052F890)(self);
    *(void**)self = (void*)0x9559b4;
    ((void**)self)[5] = (void*)0x9559ac;
    ((void**)self)[53] = ((NewQuadricFn)ext_0063E000)();
    ((QuadricArgFn)ext_0063E012)(((void**)self)[53], 0x186ac);
    ((QuadricArgFn)ext_0063E00C)(((void**)self)[53], 0x186a0);
    return self;
}

// [0x00537290] sub_00537290 (86 bytes)
extern "C" int mem_009255BC;
extern "C" int mem_0092559C;
extern "C" void ext_00535160();
extern "C" void ext_005371F0();

extern "C" __declspec(naked) int __fastcall fn_00537290(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        call ext_005371F0
        mov ebx, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        push ebx
        mov esi, eax
        push ebp
        push edi
        mov ecx, esi
        call ext_00535160
        test al, al
        jne L_handled
        mov eax, edi
        sub eax, 0x2
        je L_quit
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        push edi
        push eax
        call dword ptr [mem_009255BC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    L_quit:
        push 0x0
        mov byte ptr [esi + 0xc], 0x0
        call dword ptr [mem_0092559C]
    L_handled:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
    }
}

// [0x00530070] sub_00530070 (89 bytes)
extern "C" void ext_0052F890();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00530070(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0xcc
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je null_path
        mov ecx, eax
        call ext_0052F890
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    null_path:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005371F0] sub_005371F0 (90 bytes)
extern "C" void ext_00536F10();
extern "C" int mem_00AEF41C;

extern "C" __declspec(naked) void __fastcall fn_005371F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x895c4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEF41C], al
        jne done_005371F0
        or dword ptr [mem_00AEF41C], eax
        mov ecx, 0xaeef60
        mov dword ptr [esp + 8], 0
        call ext_00536F10
        push 0x91a710
        call ext_006A6C87
        add esp, 4
    done_005371F0:
        mov ecx, dword ptr [esp]
        mov eax, 0xaeef60
        mov dword ptr fs:[0], ecx
        add esp, 0Ch
        ret
    }
}

// [0x0053CAA0] sub_0053CAA0 (155 bytes)
extern "C" void ext_0053B240();
extern "C" void ext_0053BD10();
extern "C" void ext_0054FBB0();
extern "C" __declspec(naked) void* __fastcall fn_0053CAA0(void* self) {
    __asm {
        push -1
        push 0x896433
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_0053B240
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x95591c
        mov dword ptr [esi + 0x14], 0x955914
        call ext_0054FBB0
        xor eax, eax
        mov dword ptr [esi + 0x86c], eax
        mov dword ptr [esi + 0x870], eax
        mov dword ptr [esi + 0x874], eax
        mov dword ptr [esi + 0x878], eax
        mov dword ptr [esi + 0x87c], eax
        mov dword ptr [esi + 0x880], eax
        mov dword ptr [esi + 0x884], eax
        mov dword ptr [esi + 0x888], eax
        mov dword ptr [esi + 0x88c], eax
        mov ecx, esi
        mov byte ptr [esp + 0x10], 1
        mov dword ptr [esi + 0x890], eax
        call ext_0053BD10
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005329A0] sub_005329A0 (106 bytes)
extern "C" int mem_00A9F324;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9EDD0;
extern "C" int mem_00A9F5F4;
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_00640A80();
extern "C" void ext_0066A350();
extern "C" __declspec(naked) void* __fastcall fn_005329A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F324]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640390
        lea ecx, [esi + 0x18]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9EDD0]
        push 0
        push ecx
        mov ecx, edi
        call ext_00640390
        push eax
        lea ecx, [esi + 0x8]
        call ext_0066A350
        mov edx, dword ptr [mem_00A9F5F4]
        push edx
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x34]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00535880] sub_00535880 (573 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_00532C50();
extern "C" void ext_00533FB0();
extern "C" void ext_00533FE0();
extern "C" void ext_00534020();
extern "C" void ext_00534590();
extern "C" void ext_0054E360();
extern "C" void ext_0054EFF0();
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F02C;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925464;
extern "C" int mem_00925418;
extern "C" int mem_00925460;
extern "C" int mem_0092545C;
extern "C" __declspec(naked) void __fastcall fn_00535880(void* self) {
    __asm {
        push -1
        push 0x89599c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xd0
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0x9549b0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x14], ebp
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [mem_00A9F02C]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0xec], 0
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        lea eax, [esp + 0x54]
        push eax
        mov byte ptr [esp + 0xf4], 1
        call ext_006690D0
        mov ecx, eax
        call ext_00669AD0
        mov esi, dword ptr [ebp + 0x314]
        lea ebx, [ebp + 0x314]
        push 0
        mov ecx, eax
        mov byte ptr [esp + 0xec], 2
        add esi, 0x20
        call dword ptr [mem_00924FF0]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, ebx
        call edx
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xe8], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0xe8], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xe8], -1
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [mem_00925464]
        mov esi, 0x4000
        jmp L_check
L_head:
        mov ebp, dword ptr [esp + 0x10]
L_check:
        mov eax, dword ptr [ebp + 0x330]
        test eax, eax
        je L_after_loop
        mov ecx, dword ptr [ebp + 0x334]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea ebp, [esi - 0x4000]
        cmp ebp, eax
        jae L_fix
        push ebp
        mov ecx, ebx
        call ext_0054EFF0
        push eax
        lea ecx, [esp + 0x7c]
        call ext_00534590
        lea eax, [esp + 0x4c]
        push eax
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0xec], 3
        call ext_00534020
        push eax
        push 0x1200
        push esi
        call edi
        lea ecx, [esp + 0x4c]
        call ext_00493D90
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x7c]
        call ext_00533FB0
        push eax
        push 0x1201
        push esi
        call edi
        lea ecx, [esp + 0x14]
        call ext_00493D90
        lea edx, [esp + 0x30]
        push edx
        lea ecx, [esp + 0x7c]
        call ext_00533FE0
        push eax
        push 0x1202
        push esi
        call edi
        lea ecx, [esp + 0x30]
        call ext_00493D90
        lea eax, [esp + 0x68]
        push eax
        push ebp
        mov ecx, ebx
        call ext_0054EFF0
        mov ecx, eax
        call ext_00532C50
        push eax
        push 0x1203
        push esi
        call edi
        cmp byte ptr [esp + 0x7c], 0
        je L_noenable
        push esi
        call dword ptr [mem_00925418]
L_noenable:
        lea ecx, [esp + 0x78]
        mov dword ptr [esp + 0xe8], -1
        call ext_0054E360
        add esi, 1
        cmp esi, 0x4007
        jbe L_head
L_fix:
        mov ebp, dword ptr [esp + 0x10]
L_after_loop:
        lea ecx, [ebp + 0x318]
        push ecx
        push 0xb53
        call dword ptr [mem_00925460]
        cmp byte ptr [ebp + 0x32a], 0
        mov esi, dword ptr [mem_0092545C]
        je L_skip1
        push 1
        push 0xb51
        call esi
L_skip1:
        cmp byte ptr [ebp + 0x329], 0
        je L_skip2
        push 1
        push 0xb52
        call esi
L_skip2:
        mov ecx, dword ptr [esp + 0xe0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xdc
        ret
    }
}

// [0x005348E0] sub_005348E0 (1076 bytes)
extern "C" void ext_004BF6A0();
extern "C" void ext_004BF710();
extern "C" void ext_004BF760();
extern "C" void ext_00530520();
extern "C" void ext_00532B80();
extern "C" void ext_00540510();
extern "C" void ext_00540C30();
extern "C" void ext_00547B70();
extern "C" void ext_00547BA0();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();
extern "C" int mem_00925418;
extern "C" int mem_00925414;
extern "C" int mem_00925404;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925438;
extern "C" int mem_00925434;
extern "C" int mem_00925430;
extern "C" int mem_00925424;
extern "C" int mem_0092552C;
extern "C" int mem_0092542C;
extern "C" int mem_00925428;
extern "C" int mem_0092551C;
extern "C" int mem_00925420;
extern "C" int mem_0093C188;
extern "C" int mem_0092C8C8;
extern "C" int mem_00AEFEF8;

extern "C" __declspec(naked) void __fastcall fn_005348E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x895926
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        push ebx
        mov ebx, dword ptr [mem_00925418]
        push ebp
        push esi
        push edi
        push 0xb71
        mov edi, ecx
        call ebx
        push 0x1700
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov esi, dword ptr [esp + 0xb4]
        mov ecx, dword ptr [esi]
        call ext_00547BA0
        mov ebp, dword ptr [esp + 0xb8]
        cmp ebp, 0x1c00
        jne L_496F
        cmp byte ptr [edi + 0x378], 0
        je L_496F
        call dword ptr [mem_00925414]
        lea ecx, [edi + 0x9c]
        call ext_00540C30
        mov eax, dword ptr [edi + 0x42c]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [edi + 0x42c]
        push 1
        call edx
        call dword ptr [mem_00925404]
L_496F:
        mov ecx, dword ptr [esi]
        call ext_00547B70
        push ebp
        mov ecx, esi
        call ext_00540510
        push 4
        call dword ptr [mem_0092546C]
        fld1
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        call ext_00532B80
        mov ecx, 0xaee8ac
        mov dword ptr [esp + 0x20], ecx
        call ext_0065C640
        cmp ebp, 0x1c02
        mov eax, dword ptr [esi + 0x38]
        mov dword ptr [esp + 0xac], 0
        mov dword ptr [esp + 0x28], eax
        jne L_49C8
        mov eax, dword ptr [edi + 0x498]
        mov dword ptr [esi + 0x38], eax
L_49C8:
        sub esp, 8
        mov eax, esp
        mov dword ptr [eax], 0x93a444
        mov ecx, dword ptr [esi + 0x38]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [edi + 0x224]
        mov eax, dword ptr [edx + 0x5c]
        lea esi, [edi + 0x224]
        mov ecx, esi
        mov dword ptr [esp + 0x18], esp
        call eax
        mov eax, dword ptr [edi + 0x40]
        test eax, eax
        lea ecx, [eax - 1]
        mov dword ptr [edi + 0x40], ecx
        jle L_4A06
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        call eax
L_4A06:
        cmp ebp, 0x1c00
        mov ebp, dword ptr [mem_00925438]
        jne L_4C6D
        cmp byte ptr [edi + 0x328], 0
        je L_4A36
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x58]
        push 0x40000
        mov ecx, esi
        call eax
        push 0xb50
        call ebx
L_4A36:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x58]
        push 1
        mov ecx, esi
        call eax
        push 0xbe2
        call ebx
        push 0xbc0
        call ebx
        push 0
        call dword ptr [mem_00925434]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x58]
        push 0x100000
        mov ecx, esi
        call eax
        push 1
        call dword ptr [mem_00925434]
        cmp byte ptr [edi + 0x424], 0
        je L_4B52
        cmp dword ptr [edi + 0x420], 0
        jbe L_4B52
        mov ecx, dword ptr [edi + 0x194]
        cmp ecx, dword ptr [edi + 0x198]
        jne L_4B52
        lea edx, [edi + 0x41c]
        push edx
        lea ecx, [esp + 0x30]
        call ext_004BF760
        mov ecx, dword ptr [edi + 0x4b4]
        test ecx, ecx
        mov byte ptr [esp + 0xac], 1
        je L_4B00
        mov eax, dword ptr [mem_00AEFEF8]
        fld dword ptr [eax + 0x14]
        sub esp, 0x10
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0x10]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call ecx
L_4B00:
        lea ecx, [esp + 0x2c]
        call ext_004BF6A0
        test al, al
        je L_4B28
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_4B10:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x58]
        push 0x40
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x2c]
        call ext_004BF6A0
        test al, al
        jne L_4B10
L_4B28:
        cmp dword ptr [edi + 0x4b4], 0
        je L_4B41
        push 0x303
        push 0x302
        call dword ptr [mem_00925430]
L_4B41:
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0xac], 0
        call ext_004BF710
L_4B52:
        push 0xbe2
        call ebp
        push 0xbc0
        call ebp
        mov eax, dword ptr [edi + 0x460]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [edi + 0x460]
        push 1
        call edx
        push 8
        call dword ptr [mem_0092546C]
        push 4
        call dword ptr [mem_0092546C]
        push 0xbe2
        call ebx
        push 0xb44
        call ebx
        push 0x203
        call dword ptr [mem_0092542C]
        push 0x405
        call dword ptr [mem_00925428]
        push 0x1b02
        push 0x404
        call dword ptr [mem_0092551C]
        push 0x1b01
        push 0x405
        call dword ptr [mem_0092551C]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x58]
        push 8
        mov ecx, esi
        call edx
        push 0xbe2
        call ebp
        push 0xb50
        call dword ptr [mem_00925424]
        test al, al
        je L_4BEF
        push 0xb50
        call ebp
L_4BEF:
        fld dword ptr [mem_0093C188]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        push 0x404
        call dword ptr [mem_00925428]
        push 0x203
        call dword ptr [mem_0092542C]
        push 0x2a02
        call ebx
        fld1
        sub esp, 8
        fstp dword ptr [esp + 4]
        fld dword ptr [mem_0092C8C8]
        fstp dword ptr [esp]
        call dword ptr [mem_00925420]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x58]
        push 8
        mov ecx, esi
        call edx
        push 0x2a02
        call ebp
        push 0x201
        call dword ptr [mem_0092542C]
        cmp byte ptr [edi + 0x328], 0
        je L_4C61
        push 0xb50
        call ebx
L_4C61:
        mov esi, dword ptr [mem_0092552C]
        call esi
        call esi
        jmp L_4C78
L_4C6D:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x58]
        push 2
        mov ecx, esi
        call edx
L_4C78:
        mov esi, dword ptr [esp + 0xb8]
        mov ecx, dword ptr [edi + 0x38]
        push 0
        push esi
        call ext_00530520
        push 0xb50
        call ebp
        push 0xb71
        call ebp
        push 0xb44
        call ebp
        cmp esi, 0x1c00
        jne L_4CD0
        push 0xbc0
        call ebx
        push 0xbe2
        call ebx
        mov edi, dword ptr [edi + 0x38]
        push 1
        push esi
        mov ecx, edi
        call ext_00530520
        push 0xbe2
        call ebp
        push 0xbc0
        call ebp
L_4CD0:
        call dword ptr [mem_0092552C]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0xb4]
        mov dword ptr [ecx + 0x38], eax
        mov ecx, 0xaee8ac
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0xa4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xa0
        ret 8
    }
}

// [0x005362C0] sub_005362C0 (518 bytes)
extern "C" void ext_005348E0();
extern "C" void ext_00536140();
extern "C" void ext_0063DFFA();
extern "C" int mem_00925440;
extern "C" int mem_00925134;
extern "C" int mem_00925484;
extern "C" int mem_00925480;
extern "C" int mem_0092547C;
extern "C" int mem_009253CC;
extern "C" int mem_009253D8;
extern "C" int mem_00925414;
extern "C" int mem_009253D4;
extern "C" int mem_00925418;
extern "C" int mem_00925400;
extern "C" int mem_009253FC;
extern "C" int mem_00925474;
extern "C" int mem_00925438;
extern "C" int mem_00925478;
extern "C" int mem_00925404;
extern "C" int mem_00925524;
extern "C" __declspec(naked) void __fastcall fn_005362C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        push 0x4100
        mov edi, ecx
        call dword ptr [mem_00925440]
        mov ebx, dword ptr [esp + 0x3c]
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [mem_00925134]
        jbe L_a
        call ebp
        cmp esi, dword ptr [ebx + 0x8]
    L_a:
        jb L_b
        call ebp
    L_b:
        mov ecx, dword ptr [ebx + 0x4]
        test ecx, ecx
        jne L_c
        xor eax, eax
        jmp L_d
    L_c:
        mov eax, dword ptr [ebx + 0x8]
        sub eax, ecx
        sar eax, 2
    L_d:
        push esi
        push eax
        call dword ptr [mem_00925484]
        push 0x1c02
        call dword ptr [mem_00925480]
        call dword ptr [mem_0092547C]
        push 0
        call dword ptr [mem_009253CC]
        push 0x1701
        call dword ptr [mem_009253D8]
        call dword ptr [mem_00925414]
        call dword ptr [mem_009253D4]
        mov eax, dword ptr [edi + 0x194]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [edi + ecx*4 + 0xa8]
        mov ecx, dword ptr [esp + 0x40]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        call ext_00536140
        mov ecx, dword ptr [esp + 0x18]
        mov ebx, dword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x24]
        lea eax, [ebx + ecx]
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 0x1c]
        sar eax, 1
        mov dword ptr [esp + 0x10], eax
        lea eax, [edx + ebp]
        cdq
        sub eax, edx
        sar eax, 1
        push 0xc11
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_00925418]
        mov eax, dword ptr [edi + 0x194]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        mov edx, dword ptr [edi + ecx*4 + 0xb4]
        sub edx, dword ptr [edi + ecx*4 + 0xac]
        mov eax, dword ptr [edi + ecx*4 + 0xb0]
        sub eax, dword ptr [edi + ecx*4 + 0xa8]
        lea esi, [edi + ecx*4 + 0xa4]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        mov edx, dword ptr [esi + 0x4]
        push eax
        push ecx
        push edx
        call dword ptr [mem_00925400]
        mov eax, dword ptr [esi + 0x10]
        sub eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi + 0x8]
        push eax
        mov eax, dword ptr [esi + 0x4]
        push ecx
        push edx
        push eax
        call dword ptr [mem_009253FC]
        lea ecx, [esp + 0x28]
        push ecx
        push 0xba2
        call dword ptr [mem_00925474]
        sub ebp, dword ptr [esp + 0x1c]
        lea edx, [esp + 0x28]
        push edx
        mov dword ptr [esp + 0x40], ebp
        fild dword ptr [esp + 0x40]
        sub esp, 0x20
        sub ebx, dword ptr [esp + 0x3c]
        fstp qword ptr [esp + 0x18]
        mov dword ptr [esp + 0x60], ebx
        fild dword ptr [esp + 0x60]
        fstp qword ptr [esp + 0x10]
        fild dword ptr [esp + 0x38]
        fstp qword ptr [esp + 0x8]
        fild dword ptr [esp + 0x34]
        fstp qword ptr [esp]
        call ext_0063DFFA
        mov eax, dword ptr [edi + 0x194]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        mov ecx, dword ptr [edi + ecx*4 + 0xa4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        call eax
        mov ecx, dword ptr [edi + 0x194]
        mov eax, ecx
        mov edx, ecx
        shl edx, 4
        sub edx, eax
        push 0x1c02
        lea eax, [edi + edx*4 + 0xa4]
        mov dword ptr [edi + 0x198], ecx
        push eax
        mov ecx, edi
        call ext_005348E0
        push 0xc11
        call dword ptr [mem_00925438]
        call dword ptr [mem_00925478]
        push 0x1c00
        call dword ptr [mem_00925480]
        mov edi, dword ptr [mem_009253D8]
        push 0x1701
        mov esi, eax
        call edi
        call dword ptr [mem_00925404]
        push 0x1700
        call edi
        call dword ptr [mem_00925524]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 8
    }
}

// [0x00534F30] sub_00534F30 (552 bytes)
extern "C" void ext_00530270();
extern "C" void ext_005302D0();
extern "C" void ext_00530660();
extern "C" void ext_00532C30();
extern "C" void ext_00533F10();
extern "C" void ext_00533F50();
extern "C" void ext_00534060();
extern "C" void ext_005348E0();
extern "C" void ext_00540890();
extern "C" void ext_005409C0();
extern "C" void ext_0065C650();
extern "C" void ext_00679A30();
extern "C" int mem_00AEDC30;
extern "C" int mem_00925440;
extern "C" int mem_00925418;
extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" int mem_00925438;
extern "C" int mem_0092543C;
extern "C" int mem_009240BC;

extern "C" __declspec(naked) void __fastcall fn_00534F30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x895940
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x49c], 0
        je L_EPI_NOESI
        cmp byte ptr [edi + 0x37], 0
        jne L_EPI_NOESI
        cmp byte ptr [edi + 0x493], 0
        push esi
        lea esi, [edi + 0x493]
        jne L_EPI_ESI
        cmp byte ptr [mem_00AEDC30], 0
        jne L_EPI_ESI
        push ebx
        push ebp
        push edi
        lea ecx, [esp + 0x18]
        call ext_00530270
        mov ebx, esi
        xor ebp, ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esp + 0x10], ebx
        mov byte ptr [ebx], 1
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x1dc]
        mov ecx, edi
        mov byte ptr [esp + 0x20], 1
        call edx
        mov ecx, dword ptr [edi + 0x38]
        call ext_005302D0
        add dword ptr [edi + 4], 1
        push 0x4100
        mov byte ptr [edi + 0x49c], 0
        call dword ptr [mem_00925440]
        cmp byte ptr [edi + 0x375], 0
        je L_AFTER_CLEAR
        mov ecx, dword ptr [edi + 0x38]
        call ext_00530660
L_AFTER_CLEAR:
        cmp dword ptr [edi + 0x1a4], ebp
        jne L_ELSE
        mov eax, dword ptr [edi + 0x194]
        lea esi, [edi + 0x9c]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea ecx, [esi + 4*ecx + 8]
        mov dword ptr [esi + 0xfc], eax
        call ext_00533F10
        mov eax, dword ptr [esi + 0xf8]
        mov edx, eax
        shl edx, 4
        sub edx, eax
        lea ecx, [esi + 4*edx + 8]
        call ext_00532C30
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_005348E0
        mov eax, dword ptr [esi + 0xf8]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_00534060
        mov ecx, esi
        call ext_00540890
        jmp L_FINISH
L_ELSE:
        push 0xc11
        call dword ptr [mem_00925418]
        lea esi, [edi + 0x9c]
        jmp short L_LOOP_HEAD
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_LOOP_HEAD:
        push ebp
        mov ecx, esi
        call ext_00533F50
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        push 0x1701
        lea ebx, [esi + 4*ecx + 8]
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x10]
        call eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_005348E0
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, eax
        shl ecx, 4
        sub ecx, eax
        lea edx, [esi + 4*ecx + 8]
        push 0x1c00
        push edx
        mov ecx, edi
        call ext_00534060
        add ebp, 1
        cmp ebp, 4
        jl L_LOOP_HEAD
        push 0xc11
        call dword ptr [mem_00925438]
        mov ecx, esi
        call ext_005409C0
        mov ebx, dword ptr [esp + 0x10]
L_FINISH:
        call dword ptr [mem_0092543C]
        mov eax, dword ptr [edi + 0x24]
        push eax
        call dword ptr [mem_009240BC]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x1e0]
        mov ecx, edi
        call eax
        lea ecx, [edi + 0x3c]
        call ext_00679A30
        mov ecx, dword ptr [esp + 0x14]
        mov byte ptr [ebx], 0
        mov dword ptr [esp + 0x20], -1
        call ext_0065C650
        pop ebp
        pop ebx
L_EPI_ESI:
        pop esi
L_EPI_NOESI:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0053A360] sub_0053A360 (118 bytes)
extern "C" void ext_00539FB0();
extern "C" int mem_00AEFEBC;
extern "C" void __cdecl fn_0053A360(const float* a, const float* b, float x, float y, float z) {
    typedef void (__thiscall *Fn)(void*, float*);
    Fn f = (Fn)ext_00539FB0;
    float v[3];
    v[0] = x;
    v[1] = y;
    v[2] = z;
    f(&mem_00AEFEBC, v);
    v[0] = a[0];
    v[1] = a[1];
    v[2] = a[2];
    f(&mem_00AEFEBC, v);
    v[0] = b[0];
    v[1] = b[1];
    v[2] = b[2];
    f(&mem_00AEFEBC, v);
}

// [0x0053FBF0] sub_0053FBF0 (118 bytes)
extern "C" void ext_004B69A0();
extern "C" void ext_00543350();
extern "C" int mem_00AF141C;

extern "C" __declspec(naked) void __fastcall fn_0053FBF0(void* self) {
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_00543350
        xor     edi, edi
        cmp     dword ptr [esi + 0xbc], edi
        jge     loc_53fc0a
        mov     dword ptr [esi + 0xbc], edi
loc_53fc0a:
        cmp     dword ptr [esi + 0xc0], edi
        jge     loc_53fc18
        mov     dword ptr [esi + 0xc0], edi
loc_53fc18:
        mov     ebx, 1
        cmp     dword ptr [esi + 0xc4], ebx
        jle     loc_53fc2b
        mov     dword ptr [esi + 0xc4], ebx
loc_53fc2b:
        cmp     dword ptr [esi + 0xc8], ebx
        jle     loc_53fc39
        mov     dword ptr [esi + 0xc8], ebx
loc_53fc39:
        push    edi
        push    0x200
        mov     ecx, offset mem_00AF141C
        mov     dword ptr [esi + 0xcc], edi
        call    ext_004B69A0
        mov     dword ptr [esi + 0xe0], edi
        pop     edi
        mov     byte ptr [esi + 0xe4], bl
        mov     byte ptr [esi + 0xe5], 0
        pop     esi
        pop     ebx
        ret
    }
}

// [0x0053FFC0] sub_0053FFC0 (216 bytes)
extern "C" void ext_00538530();
extern "C" void ext_00538550();
extern "C" void ext_0053FBF0();
extern "C" void ext_005436B0();

extern "C" __declspec(naked) void* __fastcall fn_0053FFC0(void* self) {
    __asm {
        push    -1
        push    0x897376
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x20]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], esi
        call    ext_005436B0
        lea     edi, [esi + 0x98]
        xor     ebx, ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esi], 0x955f94
        call    ext_00538530
        mov     dword ptr [edi], 0x953b8c
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0xb4], edx
        mov     dword ptr [esi + 0xb8], eax
        mov     dword ptr [esi + 0xc8], ebx
        mov     dword ptr [esi + 0xc4], ebx
        mov     dword ptr [esi + 0xc0], ebx
        mov     dword ptr [esi + 0xbc], ebx
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xd8], ebx
        mov     dword ptr [esi + 0xdc], ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 1
        mov     dword ptr [esi + 0xe0], ebx
        mov     byte ptr [esi + 0xe4], 1
        mov     byte ptr [esi + 0xe5], bl
        call    ext_0053FBF0
        fld1
        push    1
        push    ebx
        push    ecx
        mov     ecx, edi
        fstp    dword ptr [esp]
        call    ext_00538550
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0x10
    }
}

// [0x00536AB0] sub_00536AB0 (491 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_0046FAC0();
extern "C" void ext_0052ED40();
extern "C" void ext_00532B40();
extern "C" void ext_00532F60();
extern "C" void ext_00536540();
extern "C" void ext_005365A0();
extern "C" void ext_00536A30();
extern "C" void ext_0054C5E0();
extern "C" void ext_0054C760();
extern "C" void ext_0054C890();
extern "C" void ext_0067B050();
extern "C" void ext_0067B1F0();
extern "C" void ext_0067B450();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_009253E8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00536AB0(void* self) {
    __asm {
        push -1
        push 0x895b11
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, [esi + 0x8]
        push edi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esi], 0x954b5c
        mov dword ptr [ebx], 0x954b4c
        mov dword ptr [esi + 0x18], 0x954b44
        mov dword ptr [esp + 0x20], 0x13
        call ext_00532F60
        mov ecx, esi
        call ext_005365A0
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [mem_00924FA0]
        push eax
        push 0x954b2c
        push ecx
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, ebx
        call ext_0067B050
        mov eax, dword ptr [esi + 0x48c]
        test eax, eax
        mov ebp, dword ptr [mem_009253E8]
        lea edi, [esi + 0x460]
        mov byte ptr [esp + 0x20], 0x12
        mov dword ptr [edi], 0x954864
        je L_536B4B
        push 0x1
        push eax
        call ebp
L_536B4B:
        mov ecx, edi
        call ext_0054C5E0
        mov eax, dword ptr [esi + 0x45c]
        test eax, eax
        lea edi, [esi + 0x42c]
        mov byte ptr [esp + 0x20], 0x11
        mov dword ptr [edi], 0x9547fc
        je L_536B72
        push 0x1
        push eax
        call ebp
L_536B72:
        mov ecx, edi
        call ext_00532B40
        lea ecx, [esi + 0x33c]
        mov byte ptr [esp + 0x20], 0x10
        call ext_0054C890
        lea ecx, [esi + 0x314]
        mov byte ptr [esp + 0x20], 0xf
        call ext_00536540
        lea ecx, [esi + 0x300]
        mov byte ptr [esp + 0x20], 0xe
        call ext_0052ED40
        lea ecx, [esi + 0x2d4]
        mov byte ptr [esp + 0x20], 0xd
        call ext_0054C5E0
        lea ecx, [esi + 0x2a8]
        mov byte ptr [esp + 0x20], 0xc
        call ext_0054C5E0
        lea ecx, [esi + 0x27c]
        mov byte ptr [esp + 0x20], 0xb
        call ext_0054C5E0
        lea ecx, [esi + 0x250]
        mov byte ptr [esp + 0x20], 0xa
        call ext_0054C5E0
        lea ecx, [esi + 0x224]
        mov byte ptr [esp + 0x20], 0x9
        call ext_0054C5E0
        lea ecx, [esi + 0x200]
        mov byte ptr [esp + 0x20], 0x8
        call ext_0054C760
        lea ecx, [esi + 0x1dc]
        mov byte ptr [esp + 0x20], 0x7
        call ext_0054C760
        lea ecx, [esi + 0x9c]
        mov byte ptr [esp + 0x20], 0x6
        call ext_00536A30
        lea ecx, [esi + 0x80]
        mov byte ptr [esp + 0x20], 0x5
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x64]
        mov byte ptr [esp + 0x20], 0x4
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x20], 0x3
        call ext_0067B450
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x20], 0x2
        call ext_0046FAC0
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        mov byte ptr [esp + 0x20], 0x1
        je L_536C76
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
L_536C76:
        mov ecx, ebx
        mov byte ptr [esp + 0x20], 0x0
        call ext_0067B1F0
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [esi], 0x954474
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00531C80] sub_00531C80 (1066 bytes)
extern "C" __declspec(naked) void __fastcall fn_00531C80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 8951E5h
        mov eax, dword ptr fs:[0]
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+10h], esi
        mov eax, dword ptr [esp+24h]
        mov dword ptr [esi+4], 9542ECh
        mov dword ptr [esi+8], 9355DCh
        mov dword ptr [esi+0Ch], 934BECh
        xor ebx, ebx
        mov dword ptr [esi], 954328h
        mov dword ptr [esi+4], 954320h
        mov dword ptr [esi+8], 95430Ch
        mov dword ptr [esi+0Ch], 954304h
        mov dword ptr [esi+10h], eax
        mov dword ptr [esi+14h], ebx
        mov dword ptr [esi+18h], ebx
        lea ebp, [esi+24h]
        mov dword ptr [esi+1Ch], ebx
        mov dword ptr [esi+20h], ebx
        mov dword ptr [esp+1Ch], ebx
        mov dword ptr [ebp+4], ebx
        mov dword ptr [ebp+8], ebx
        mov dword ptr [ebp+0Ch], ebx
        mov byte ptr [ebp+10h], 1
        lea edi, [esi+38h]
        mov ecx, edi
        mov byte ptr [esp+1Ch], 1
        call ext_00543300
        mov dword ptr [esi+58h], ebx
        mov dword ptr [esi+5Ch], ebx
        mov dword ptr [esi+60h], ebx
        mov eax, 0Ah
        lea ecx, [esi+98h]
        mov byte ptr [esp+1Ch], 3
        mov dword ptr [esi+70h], eax
        mov dword ptr [esi+74h], ebx
        mov dword ptr [esi+78h], ebx
        mov byte ptr [esi+7Ch], bl
        mov byte ptr [esi+7Dh], bl
        mov byte ptr [esi+7Eh], bl
        mov byte ptr [esi+7Fh], bl
        mov dword ptr [esi+80h], ebx
        mov byte ptr [esi+84h], bl
        mov byte ptr [esi+85h], 1
        mov byte ptr [esi+86h], bl
        mov dword ptr [esi+88h], eax
        mov dword ptr [esi+8Ch], eax
        mov dword ptr [esi+90h], ebx
        mov byte ptr [esi+94h], bl
        call ext_0065C5F0
        mov dword ptr [esi+9Ch], ebx
        mov dword ptr [esi+0A0h], ebx
        mov dword ptr [esi+0A4h], ebx
        push 0E8h
        mov byte ptr [esp+20h], 4
        mov byte ptr [esi+0A8h], bl
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+24h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 5
        je L531DBA
        lea ecx, [esi+74h]
        push ecx
        mov ecx, dword ptr [esi+10h]
        push ebp
        mov ebp, dword ptr [esp+30h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_0053FFC0
        jmp L531DC0
    L531DBA:
        mov ebp, dword ptr [esp+28h]
        xor eax, eax
    L531DC0:
        push 0C8h
        mov byte ptr [esp+20h], 4
        mov dword ptr [esi+68h], eax
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 6
        je L531DF0
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00543790
        jmp L531DF2
    L531DF0:
        xor eax, eax
    L531DF2:
        push 0ECh
        mov byte ptr [esp+20h], 4
        mov dword ptr [esi+64h], eax
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 7
        je L531E26
        mov edx, dword ptr [esi+68h]
        lea ecx, [esi+74h]
        push ecx
        push edx
        push ebp
        mov ecx, eax
        call ext_005447E0
        jmp L531E28
    L531E26:
        xor eax, eax
    L531E28:
        mov dword ptr [esi+6Ch], eax
        mov eax, dword ptr [esi+64h]
        mov dword ptr [esp+28h], eax
        mov dword ptr [edi+14h], eax
        lea eax, [esp+28h]
        push eax
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        call ext_0041A920
        mov eax, dword ptr [esi+68h]
        lea ecx, [esp+28h]
        push ecx
        lea ecx, [edi+4]
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [edi+14h], eax
        call ext_0041A920
        push 0C8h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 8
        je L531E86
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00547220
        jmp L531E88
    L531E86:
        xor eax, eax
    L531E88:
        lea edx, [esp+28h]
        push edx
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [edi+14h], eax
        call ext_0041A920
        push 0E8h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 9
        je L531EC9
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00546FA0
        jmp L531ECB
    L531EC9:
        xor eax, eax
    L531ECB:
        mov dword ptr [esp+28h], eax
        mov dword ptr [edi+14h], eax
        lea eax, [esp+28h]
        push eax
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        call ext_0041A920
        push 0D0h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 0Ah
        je L531F0C
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_005459D0
        jmp L531F0E
    L531F0C:
        xor eax, eax
    L531F0E:
        lea ecx, [esp+28h]
        push ecx
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [edi+14h], eax
        call ext_0041A920
        push 0B8h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 0Bh
        je L531F4F
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00545940
        jmp L531F51
    L531F4F:
        xor eax, eax
    L531F51:
        lea edx, [esp+28h]
        push edx
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [edi+14h], eax
        call ext_0041A920
        push 354h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 0Ch
        je L531F92
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00545680
        jmp L531F94
    L531F92:
        xor eax, eax
    L531F94:
        mov dword ptr [esp+28h], eax
        mov dword ptr [edi+14h], eax
        lea eax, [esp+28h]
        push eax
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        call ext_0041A920
        mov eax, dword ptr [esi+6Ch]
        lea ecx, [esp+28h]
        push ecx
        lea ecx, [edi+4]
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [edi+14h], eax
        call ext_0041A920
        push 264h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 0Dh
        je L531FEC
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00544FD0
        jmp L531FEE
    L531FEC:
        xor eax, eax
    L531FEE:
        lea edx, [esp+28h]
        push edx
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [edi+14h], eax
        call ext_0041A920
        push 300h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+28h], eax
        cmp eax, ebx
        mov byte ptr [esp+1Ch], 0Eh
        je L53202F
        lea ecx, [esi+74h]
        push ecx
        push ebp
        mov ecx, eax
        call ext_00544B30
        jmp L532031
    L53202F:
        xor eax, eax
    L532031:
        mov dword ptr [esp+28h], eax
        mov dword ptr [edi+14h], eax
        lea eax, [esp+28h]
        push eax
        lea ecx, [edi+4]
        mov byte ptr [esp+20h], 4
        call ext_0041A920
        push ebx
        push 1
        mov ecx, edi
        call ext_00543220
        lea ecx, [esp+28h]
        push ecx
        lea edi, [esi+54h]
        mov ecx, edi
        mov dword ptr [esp+2Ch], 2
        call ext_0044CB90
        lea edx, [esp+28h]
        push edx
        mov ecx, edi
        mov dword ptr [esp+2Ch], 3
        call ext_0044CB90
        lea eax, [esp+28h]
        push eax
        mov ecx, edi
        mov dword ptr [esp+2Ch], 4
        call ext_0044CB90
        mov ecx, dword ptr [esp+14h]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 10h
        ret 8
    }
}

// [0x00536F10] sub_00536F10 (697 bytes)
extern "C" void ext_00435D00(); extern "C" void ext_004BF680(); extern "C" void ext_0052EC80(); extern "C" void ext_00531C80(); extern "C" void ext_00532BC0(); extern "C" void ext_0053A580(); extern "C" void ext_005430B0(); extern "C" void ext_0054C570(); extern "C" void ext_0054C700(); extern "C" void ext_0054D220(); extern "C" void ext_0054F3A0(); extern "C" void ext_006799F0(); extern "C" void ext_0067B140(); extern "C" void ext_0067B280(); extern "C" void ext_0067B3B0(); extern "C" void ext_006A5C62();
extern "C" int mem_00924FE4; extern "C" int mem_00AF6108; extern "C" int mem_00924E90; extern "C" int mem_00924FA0; extern "C" int mem_00924E98;
extern "C" __declspec(naked) void __fastcall fn_00536F10(void* self) {
    __asm {
        push -1
        push 0x895c30
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esi], 0x954474
        lea ebp, [esi + 8]
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr [esp + 0x20], ebx
        call ext_0067B140
        mov dword ptr [esi + 0x18], 0x93a744
        mov dword ptr [esi], 0x954b5c
        mov dword ptr [ebp], 0x954b4c
        mov dword ptr [esi + 0x18], 0x954b44
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov byte ptr [esi + 0x34], bl
        mov byte ptr [esi + 0x35], bl
        mov byte ptr [esi + 0x36], bl
        mov byte ptr [esi + 0x37], bl
        mov dword ptr [esi + 0x38], ebx
        lea ecx, [esi + 0x3c]
        mov byte ptr [esp + 0x20], 2
        call ext_006799F0
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x20], 3
        mov dword ptr [esi + 0x40], ebx
        call ext_0067B3B0
        push 0x928b5d
        lea ecx, [esi + 0x64]
        mov byte ptr [esp + 0x24], 4
        call dword ptr [mem_00924FE4]
        push 0x928b5d
        lea ecx, [esi + 0x80]
        mov byte ptr [esp + 0x24], 5
        call dword ptr [mem_00924FE4]
        lea ecx, [esi + 0x9c]
        mov byte ptr [esp + 0x20], 6
        call ext_005430B0
        lea ecx, [esi + 0x1dc]
        mov byte ptr [esp + 0x20], 7
        call ext_0054C700
        lea ecx, [esi + 0x200]
        mov byte ptr [esp + 0x20], 8
        call ext_0054C700
        lea ecx, [esi + 0x224]
        mov byte ptr [esp + 0x20], 9
        call ext_0054C570
        lea ecx, [esi + 0x250]
        mov byte ptr [esp + 0x20], 0xa
        call ext_0054C570
        lea ecx, [esi + 0x27c]
        mov byte ptr [esp + 0x20], 0xb
        call ext_0054C570
        lea ecx, [esi + 0x2a8]
        mov byte ptr [esp + 0x20], 0xc
        call ext_0054C570
        lea ecx, [esi + 0x2d4]
        mov byte ptr [esp + 0x20], 0xd
        call ext_0054C570
        lea ecx, [esi + 0x300]
        mov byte ptr [esp + 0x20], 0xe
        call ext_0052EC80
        lea ecx, [esi + 0x314]
        mov byte ptr [esp + 0x20], 0xf
        call ext_0054F3A0
        lea ecx, [esi + 0x33c]
        mov byte ptr [esp + 0x20], 0x10
        call ext_0054D220
        lea ecx, [esi + 0x41c]
        mov byte ptr [esp + 0x20], 0x11
        call ext_004BF680
        lea edi, [esi + 0x42c]
        mov ecx, edi
        call ext_00532BC0
        mov dword ptr [edi], 0x9547fc
        mov dword ptr [edi + 0x30], ebx
        lea edi, [esi + 0x460]
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x12
        call ext_0054C570
        mov dword ptr [edi], 0x954864
        mov dword ptr [edi + 0x2c], ebx
        mov byte ptr [esi + 0x490], bl
        mov byte ptr [esi + 0x491], bl
        mov byte ptr [esi + 0x492], bl
        mov byte ptr [esi + 0x493], bl
        mov dword ptr [esi + 0x494], 0x93a444
        mov dword ptr [esi + 0x498], ebx
        lea edi, [esi + 0x494]
        push 0xac
        mov byte ptr [esp + 0x24], 0x13
        mov byte ptr [esi + 0x49c], bl
        mov dword ptr [esi + 0x4a4], ebx
        mov dword ptr [esi + 0x4a8], ebx
        mov dword ptr [esi + 0x4b4], ebx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebx
        mov byte ptr [esp + 0x20], 0x14
        je L_null
        lea ecx, [esi + 0x9c]
        push ecx
        push esi
        mov ecx, eax
        call ext_00531C80
        mov dword ptr [esp + 0x10], eax
        jmp L_after
    L_null:
        mov dword ptr [esp + 0x10], ebx
    L_after:
        mov ecx, dword ptr [esi + 0x38]
        cmp dword ptr [esp + 0x10], ecx
        mov byte ptr [esp + 0x20], 0x13
        je L_skip_del
        cmp ecx, ebx
        je L_skip_del
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    L_skip_del:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x38], eax
        cmp byte ptr [esi + 0x288], bl
        sete cl
        mov byte ptr [esi + 0x288], cl
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx]
        mov ecx, edi
        call eax
        lea eax, [esi + 0x33c]
        mov dword ptr [mem_00AF6108], eax
        call ext_0053A580
        push 1
        mov ecx, ebp
        call ext_0067B280
        mov ecx, dword ptr [mem_00924E90]
        push ecx
        mov dword ptr [esi + 0x4a0], eax
        mov edx, dword ptr [mem_00924FA0]
        push 0x954d54
        push edx
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov byte ptr [esi + 0x4b8], bl
        mov byte ptr [esi + 0x49c], 1
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x14
        ret
    }
}

// [0x0053FC70] sub_0053FC70 (776 bytes)
extern "C" void ext_00419F50();
extern "C" void ext_0043D780();
extern "C" void ext_0053FAD0();
extern "C" void ext_00596660();
extern "C" void ext_0059A140();
extern "C" void ext_005DF840();
extern "C" void ext_006A5C5C();
extern "C" int mem_009251EC;
extern "C" __declspec(naked) void __fastcall fn_0053FC70(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        mov eax, fs:[0]
        push 0x896938
        push eax
        mov fs:[0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov esi, dword ptr [ebp + 0xb8]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L70_a
        call dword ptr [mem_00925134]
L70_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L70_b
        call dword ptr [mem_00925134]
L70_b:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        mov edi, dword ptr [esp + 0x40]
        xor ebx, ebx
        cmp edi, ebx
        jne L70_c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp + 0x20]
        mov fs:[0], ecx
        add esp, 0x2c
        ret 0xc
L70_c:
        mov esi, dword ptr [esp + 0x44]
        lea ecx, [esp + 0x24]
        call ext_0043D780
        mov dword ptr [esp + 0x28], eax
        mov byte ptr [eax + 0x15], 0x1
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [eax], eax
        mov eax, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [esp + 0x2c], ebx
        cmp edi, ebx
        mov dword ptr [esp + 0x38], ebx
        jle L70_d
        mov ebx, edi
L70_loop:
        mov edi, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        add esi, 0x4
        mov eax, dword ptr [esi + 0xc]
        add esi, 0xc
        cmp eax, 0xbaadf00d
        je L70_e
        mov dword ptr [esp + 0x10], ecx
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x1c], eax
        call ext_0053FAD0
L70_e:
        sub ebx, 0x1
        lea esi, [esi + edi*4 - 0x4]
        jne L70_loop
L70_d:
        mov eax, dword ptr [esp + 0x28]
        mov ebx, dword ptr [eax]
        lea esi, [esp + 0x24]
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x10], esi
L70_f:
        test esi, esi
        mov edi, eax
        je L70_g
        lea ecx, [esp + 0x24]
        cmp esi, ecx
        je L70_h
L70_g:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x28]
L70_h:
        cmp ebx, edi
        je L70_i
        cmp byte ptr [esp + 0x48], 0x0
        jne L70_j
        test esi, esi
        mov edi, dword ptr [eax]
        je L70_k
        lea edx, [esp + 0x24]
        cmp esi, edx
        je L70_l
L70_k:
        call dword ptr [mem_00925134]
L70_l:
        cmp ebx, edi
        jne L70_m
L70_j:
        test esi, esi
        jne L70_n
        call dword ptr [mem_00925134]
L70_n:
        cmp ebx, dword ptr [esi + 0x4]
        jne L70_o
        call dword ptr [mem_00925134]
L70_o:
        mov esi, dword ptr [ebp + 0xb8]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        mov ebx, dword ptr [ebx + 0x10]
        mov dword ptr [esp + 0x40], ebx
        jne L70_p
        xor edx, edx
        jmp L70_q
L70_p:
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 0x2
L70_q:
        test eax, eax
        je L70_r
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
        cmp edx, ecx
        jae L70_r
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], ebx
        add eax, 0x4
        mov dword ptr [esi + 0x8], eax
        jmp L70_m
L70_r:
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        jbe L70_s
        call dword ptr [mem_00925134]
L70_s:
        lea eax, [esp + 0x40]
        push eax
        push edi
        push esi
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        call ext_0059A140
L70_m:
        lea ecx, [esp + 0x10]
        call ext_00419F50
        mov eax, dword ptr [esp + 0x28]
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L70_f
L70_i:
        mov ecx, dword ptr [ebp + 0xe0]
        cmp ecx, dword ptr [esp + 0x2c]
        jb L70_t
        mov dword ptr [ebp + 0xe0], 0x0
        jmp L70_u
L70_t:
        test ecx, ecx
        jbe L70_u
        mov dword ptr [esp + 0x48], 0x0
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L70_v:
        mov edi, dword ptr [ebp + 0xb8]
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L70_w
        call dword ptr [mem_00925134]
        cmp esi, dword ptr [edi + 0x8]
L70_w:
        jb L70_x
        call dword ptr [mem_00925134]
L70_x:
        mov eax, dword ptr [ebp + 0xb8]
        mov edi, dword ptr [eax + 0x4]
        cmp edi, dword ptr [eax + 0x8]
        mov ebx, dword ptr [esi]
        mov dword ptr [esp + 0x40], ebx
        jbe L70_y
        call dword ptr [mem_00925134]
L70_y:
        mov esi, dword ptr [ebp + 0xb8]
        mov eax, dword ptr [esi + 0x8]
        lea ecx, [edi + 0x4]
        sub eax, ecx
        sar eax, 0x2
        test eax, eax
        jle L70_z
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push edi
        call dword ptr [mem_009251EC]
        add esp, 0x10
L70_z:
        add dword ptr [esi + 0x8], -0x4
        mov esi, dword ptr [ebp + 0xb8]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L70_aa
        xor edx, edx
        jmp L70_bb
L70_aa:
        mov edx, dword ptr [esi + 0x8]
        sub edx, eax
        sar edx, 0x2
L70_bb:
        test eax, eax
        je L70_cc
        mov ecx, dword ptr [esi + 0xc]
        sub ecx, eax
        sar ecx, 0x2
        cmp edx, ecx
        jae L70_cc
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], ebx
        add eax, 0x4
        mov dword ptr [esi + 0x8], eax
        jmp L70_dd
L70_cc:
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        jbe L70_ee
        call dword ptr [mem_00925134]
L70_ee:
        lea edx, [esp + 0x40]
        push edx
        push edi
        push esi
        lea eax, [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_0059A140
L70_dd:
        mov eax, dword ptr [esp + 0x48]
        add eax, 0x1
        cmp eax, dword ptr [ebp + 0xe0]
        mov dword ptr [esp + 0x48], eax
        jb L70_v
        mov eax, dword ptr [esp + 0x28]
L70_u:
        mov edx, dword ptr [eax]
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        mov esi, ecx
        push edx
        push esi
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x4c], -1
        call ext_005DF840
        mov edx, dword ptr [esp + 0x28]
        push edx
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x34]
        add esp, 0x4
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        mov fs:[0], ecx
        add esp, 0x2c
        ret 0xc
    }
}

// [0x0053A4B0] sub_0053A4B0 (145 bytes)
extern "C" void ext_00532B60();
extern "C" void ext_0053A050();
extern "C" void* __cdecl ext_0063E000();
extern "C" void ext_0063E00C();
extern "C" void ext_0063E012();
extern "C" int mem_00896043;
extern "C" int mem_0095526C;

extern "C" __declspec(naked) void* __fastcall fn_0053A4B0(void* self) {
    __asm {
        push -1
        push offset mem_00896043
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00532B60
        fldz
        mov dword ptr [esi], offset mem_0095526C
        fst dword ptr [esi + 0x30]
        xor eax, eax
        fst dword ptr [esi + 0x2c]
        fstp dword ptr [esi + 0x28]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x38], eax
        mov dword ptr [esi + 0x3c], eax
        mov dword ptr [esi + 0x40], eax
        mov byte ptr [esp + 0x10], 1
        call ext_0063E000
        push 0x186ac
        push eax
        mov dword ptr [esi + 0x14], eax
        call ext_0063E012
        mov eax, dword ptr [esi + 0x14]
        push 0x186a0
        push eax
        call ext_0063E00C
        fld1
        push 0xa
        push 0xa
        sub esp, 8
        fst dword ptr [esp + 4]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0053A050
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00539FB0] sub_00539FB0 (159 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539FB0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        jne L_nonnull
        xor ecx, ecx
        jmp L_after_first
L_nonnull:
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
L_after_first:
        test edi, edi
        je L_slow
        mov edx, dword ptr [esi + 0xc]
        sub edx, edi
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ecx, eax
        jae L_slow
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0x8]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        push ecx
        push esi
        push edx
        push 1
        push edi
        call ext_00539860
        add esp, 0x18
        add edi, 0xc
        mov dword ptr [esi + 0x8], edi
        pop edi
        pop esi
        add esp, 8
        ret 4
L_slow:
        push ebx
        mov ebx, dword ptr [esi + 0x8]
        cmp edi, ebx
        jbe L_noinvalid
        call dword ptr [mem_00925134]
L_noinvalid:
        mov eax, dword ptr [esp + 0x18]
        push eax
        push ebx
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_00539F00
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x005343A0] sub_005343A0 (164 bytes)
extern "C" void ext_0052AD00();
extern "C" void ext_00532DB0();
extern "C" void ext_00532DD0();
extern "C" void ext_00532E00();

extern "C" __declspec(naked) void __fastcall fn_005343A0(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        cmp byte ptr [ebx + 0x44], 0x0
        push edi
        mov edi, ecx
        jne has_flag
        pop edi
        xor eax, eax
        pop ebx
        ret 0xc
    has_flag:
        mov ecx, dword ptr [ebx + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x18]
        push ebp
        push esi
        call edx
        mov esi, eax
        lea eax, [ebx + 0x28]
        push eax
        lea ecx, [edi + 0x300]
        call ext_0052AD00
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x64]
        mov ebp, eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        lea ecx, [edi + 0x33c]
        push ecx
        push ebx
        mov ecx, esi
        mov dword ptr [esi + 0x24], ebp
        call edx
        cmp byte ptr [edi + 0x491], 0x0
        push esi
        mov ecx, edi
        je no_flag
        call ext_00532DD0
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr [edi + 0x40], 0x2
        pop edi
        pop ebx
        ret 0xc
    no_flag:
        fld1
        fcomp dword ptr [ebp + 0x14]
        fnstsw ax
        test ah, 0x41
        jne use_db
        call ext_00532E00
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr [edi + 0x40], 0x2
        pop edi
        pop ebx
        ret 0xc
    use_db:
        call ext_00532DB0
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr [edi + 0x40], 0x2
        pop edi
        pop ebx
        ret 0xc
    }
}

// [0x00539F00] sub_00539F00 (172 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539F00(void* self, int edx_unused, int* out, char* cont, char* where, int val) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        test edi, edi
        je L_zero
        mov ebx, dword ptr [esi + 0x8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne L_nz
    L_zero:
        mov ebx, dword ptr [esp + 0x1c]
        xor edi, edi
        jmp L_call
    L_nz:
        cmp edi, ebx
        jbe L_ok1
        call dword ptr [mem_00925134]
    L_ok1:
        mov ebx, dword ptr [esp + 0x1c]
        test ebx, ebx
        je L_bad2
        cmp ebx, esi
        je L_ok2
    L_bad2:
        call dword ptr [mem_00925134]
    L_ok2:
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
    L_call:
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        push 1
        push ebp
        push ebx
        mov ecx, esi
        call ext_00539B50
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        lea edx, [edi + 2 * edi]
        lea edi, [ebx + 4 * edx]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], ebx
        ja L_bad4
        cmp edi, dword ptr [esi + 0x4]
        jae L_ok4
    L_bad4:
        call dword ptr [mem_00925134]
    L_ok4:
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x10
    }
}

// [0x00536600] sub_00536600 (173 bytes)
extern "C" void ext_0041A260();
extern "C" void ext_005361D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00536600(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        push    edi
        jne     L_536614
        xor     ecx, ecx
        jmp     L_536619
L_536614:
        mov     ecx, dword ptr [esi + 0x8]
        sub     ecx, eax
L_536619:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     ecx, edi
        jae     L_536656
        test    eax, eax
        jne     L_536629
        xor     ebx, ebx
        jmp     L_53662E
L_536629:
        mov     ebx, dword ptr [esi + 0x8]
        sub     ebx, eax
L_53662E:
        mov     ebp, dword ptr [esi + 0x8]
        cmp     eax, ebp
        jbe     L_53663B
        call    dword ptr [mem_00925134]
L_53663B:
        lea     eax, [esp + 0x20]
        push    eax
        sub     edi, ebx
        push    edi
        push    ebp
        push    esi
        mov     ecx, esi
        call    ext_0041A260
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
L_536656:
        test    eax, eax
        je      L_5366A3
        mov     ebp, dword ptr [esi + 0x8]
        mov     ecx, ebp
        sub     ecx, eax
        cmp     edi, ecx
        jae     L_5366A3
        cmp     eax, ebp
        jbe     L_53666F
        call    dword ptr [mem_00925134]
L_53666F:
        mov     ebx, dword ptr [esi + 0x4]
        cmp     ebx, dword ptr [esi + 0x8]
        jbe     L_53667D
        call    dword ptr [mem_00925134]
L_53667D:
        add     edi, ebx
        cmp     edi, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x14], ebx
        ja      L_53668D
        cmp     edi, dword ptr [esi + 0x4]
        jae     L_536693
L_53668D:
        call    dword ptr [mem_00925134]
L_536693:
        push    ebp
        push    esi
        push    edi
        push    esi
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    ext_005361D0
L_5366A3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}

// [0x00534E60] sub_00534E60 (199 bytes)
extern "C" void ext_0052AD00();
extern "C" void ext_0052FD90();

extern "C" __declspec(naked) void __fastcall fn_00534E60(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 0x88d648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        xor eax, eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], eax
        mov ebx, dword ptr [esp + 0x20]
        cmp byte ptr [ebx + 0x44], al
        mov dword ptr [esp + 0x18], eax
        je L_else
        mov ecx, dword ptr [ebx + 0xc]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x18]
        call edx
        mov edi, eax
        lea eax, [ebx + 0x28]
        push eax
        lea ecx, [esi + 0x300]
        mov dword ptr [esp + 0x10], edi
        call ext_0052AD00
        mov dword ptr [edi + 0x24], eax
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x64]
        push eax
        lea ecx, [esi + 0x33c]
        push ecx
        push ebx
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1dc]
        mov ecx, esi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x60]
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1e0]
        mov ecx, esi
        call edx
        jmp L_end
    L_else:
        call ext_0052FD90
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x64]
        push ecx
        lea ecx, [esi + 0x33c]
        push ecx
        mov edi, eax
        push ebx
        mov ecx, eax
        mov dword ptr [esp + 0x18], edi
        call edx
    L_end:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, edi
        pop edi
        mov dword ptr [esi + 0x40], 2
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00532E90] sub_00532E90 (208 bytes)
extern "C" void ext_0052AD00();
extern "C" void ext_00532E20();
extern "C" void ext_00539310();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00532E90(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x8957e5
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebx
        xor ebx, ebx
        push ebp
        mov dword ptr [esp + 0x8], ebx
        mov ebp, dword ptr [esp + 0x38]
        cmp ebp, ebx
        push edi
        mov edi, ecx
        je L_00532F4A
        push esi
        push 0x20
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x40], esi
        cmp esi, ebx
        mov dword ptr [esp + 0x38], ebx
        je L_00532F12
        push 0x928d10
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x14]
        mov ebx, 0x1
        push eax
        lea ecx, [edi + 0x300]
        mov byte ptr [esp + 0x3c], 0x1
        mov dword ptr [esp + 0x14], ebx
        call ext_0052AD00
        push eax
        push ebp
        mov ecx, esi
        call ext_00539310
        mov esi, eax
        jmp L_00532F14
L_00532F12:
        xor esi, esi
L_00532F14:
        test bl, 0x1
        mov dword ptr [esp + 0x38], 0xffffffff
        je L_00532F2B
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FF4]
L_00532F2B:
        push esi
        mov ecx, edi
        call ext_00532E20
        mov eax, esi
        pop esi
        pop edi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
L_00532F4A:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00537870] sub_00537870 (213 bytes)
extern "C" void ext_00537590();

extern "C" __declspec(naked) void __fastcall fn_00537870(void* self) {
    __asm {
        push esi
        push edi
        push 0x954edc
        mov esi, ecx
        call ext_00679C60
        call fn_005371F0
        push 0x954ec0
        mov edi, eax
        call ext_00679C60
        add esp, 0x8
        mov ecx, edi
        call fn_00534380
        push 0x954ea4
        call ext_00679C60
        add esp, 0x4
        cmp dword ptr [esi + 0x2c], 0
        jne short L_53792A
        cmp byte ptr [esi + 0x374], 0
        mov eax, dword ptr [esi + 0x350]
        push eax
        je short L_5378F0
        mov ecx, dword ptr [esi + 0x34c]
        mov edx, dword ptr [esi + 0x348]
        push ecx
        push edx
        lea ecx, [esi + 0x354]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call fn_00537430
        test eax, eax
        jne short L_53792A
        push 0x40
        push 0x95477c
        push 0x954e80
        jmp short L_537922
L_5378F0:
        mov ecx, dword ptr [esi + 0x344]
        mov edx, dword ptr [esi + 0x340]
        push ecx
        push edx
        lea ecx, [esi + 0x354]
        call dword ptr [mem_00924FF0]
        push eax
        mov ecx, esi
        call fn_00537430
        test eax, eax
        jne short L_53792A
        push 0x40
        push 0x95477c
        push 0x954e68
L_537922:
        push 0
        call dword ptr [mem_009255E0]
L_53792A:
        push 0x954e4c
        call ext_00679C60
        mov eax, dword ptr [esi + 0x2c]
        add esp, 0x4
        push eax
        mov ecx, esi
        call ext_00537590
        pop edi
        pop esi
        ret
    }
}

// [0x0053E570] sub_0053E570 (217 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053E570(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        push edi
        jne L_53e581
        xor eax, eax
        jmp L_53e596
    L_53e581:
        mov edx, dword ptr [esi + 0x8]
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_53e596:
        mov ebx, dword ptr [esp + 0x14]
        cmp eax, ebx
        jae L_53e5e0
        test ecx, ecx
        jne L_53e5a6
        xor edi, edi
        jmp L_53e5bb
    L_53e5a6:
        mov edx, dword ptr [esi + 0x8]
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov edi, edx
        shr edi, 0x1f
        add edi, edx
    L_53e5bb:
        mov ebp, dword ptr [esi + 0x8]
        cmp ecx, ebp
        jbe L_53e5c8
        call dword ptr [mem_00925134]
    L_53e5c8:
        lea eax, [esp + 0x18]
        push eax
        sub ebx, edi
        push ebx
        push ebp
        push esi
        mov ecx, esi
        call ext_00539B50
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    L_53e5e0:
        test ecx, ecx
        je L_53e642
        mov edi, dword ptr [esi + 0x8]
        mov edx, edi
        sub edx, ecx
        mov eax, 0x2aaaaaab
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebx, eax
        jae L_53e642
        cmp ecx, edi
        jbe L_53e609
        call dword ptr [mem_00925134]
    L_53e609:
        mov ebp, dword ptr [esi + 0x4]
        cmp ebp, dword ptr [esi + 0x8]
        jbe L_53e617
        call dword ptr [mem_00925134]
    L_53e617:
        lea ecx, [ebx + 2*ebx]
        lea ebx, [ebp + 4*ecx]
        cmp ebx, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x1c], ebp
        ja L_53e62c
        cmp ebx, dword ptr [esi + 0x4]
        jae L_53e632
    L_53e62c:
        call dword ptr [mem_00925134]
    L_53e632:
        push edi
        push esi
        push ebx
        push esi
        lea edx, [esp + 0x28]
        push edx
        mov ecx, esi
        call ext_00539AA0
    L_53e642:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x005320B0] sub_005320B0 (230 bytes)
extern "C" void ext_00493D90();
extern "C" void ext_004B69A0();
extern "C" void ext_00543220();
extern "C" void ext_0066A330();
extern "C" int mem_0087BA58;
extern "C" int mem_00A44B84;
extern "C" int mem_00AF140C;
extern "C" int mem_00AF1410;
extern "C" int mem_00AF1414;
extern "C" int mem_00AF1418;
extern "C" int mem_00AF141C;
extern "C" int mem_00954358;
extern "C" int mem_00954354;
extern "C" int mem_00954350;

extern "C" __declspec(naked) void __fastcall fn_005320B0(void* self) {
    __asm {
        push -1
        push offset mem_0087BA58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push esi
        push 0
        mov esi, ecx
        push 0x200
        mov ecx, offset mem_00AF141C
        mov dword ptr [mem_00A44B84], 0xa
        call ext_004B69A0
        fld1
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x8]
        lea ecx, [esp + 0x14]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ext_0066A330
        fld dword ptr [esp + 0x4]
        fstp dword ptr [mem_00AF140C]
        push 0
        fld dword ptr [esp + 0xc]
        push 1
        fstp dword ptr [mem_00AF1410]
        lea ecx, [esi + 0x38]
        fld dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x24], 0
        fstp dword ptr [mem_00AF1414]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [mem_00AF1418]
        mov eax, dword ptr [esi + 0x64]
        fld dword ptr [mem_00954358]
        fstp dword ptr [eax + 0xb4]
        fld1
        fstp dword ptr [eax + 0xb8]
        fld dword ptr [mem_00954354]
        fstp dword ptr [eax + 0xc0]
        fld dword ptr [mem_00954350]
        fstp dword ptr [eax + 0xbc]
        mov byte ptr [eax + 0xc4], 1
        call ext_00543220
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x1c], -1
        call ext_00493D90
        mov ecx, dword ptr [esp + 0x14]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x005319E0] sub_005319E0 (254 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" void ext_005DF5C0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE0;
extern "C" int mem_00AF166C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005319E0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8a1712
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je L_005319E0_tail
        mov ecx, dword ptr [mem_00AF166C]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 2
        call ext_004142E0
        push 0x9d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
L_005319E0_tail:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}
