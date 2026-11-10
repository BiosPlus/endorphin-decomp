// Decompiled translation unit: src/leaf/decompiled_530000.cpp

extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" void ext_0054D2A0();
extern "C" void ext_00539800();
extern "C" int mem_00A44B84;

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
