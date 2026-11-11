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

// [0x00532C30] sub_00532C30 (30 bytes)
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
