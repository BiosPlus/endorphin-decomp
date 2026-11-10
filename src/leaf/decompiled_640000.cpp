// Decompiled translation unit: src/leaf/decompiled_640000.cpp

// [0x00648480] sub_00648480 (15 bytes)
extern "C" void ext_007C6F70();

extern "C" __declspec(naked) void __fastcall fn_00648480(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x5c]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C6F70
        add esp, 4
        ret
    }
}

// [0x00647F00] sub_00647F00 (18 bytes)
extern "C" void ext_007C5F80();

extern "C" __declspec(naked) void __fastcall fn_00647F00(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C5F80
        add esp, 4
        ret
    }
}

// [0x00647F30] sub_00647F30 (18 bytes)
extern "C" void ext_007C5F90();

extern "C" __declspec(naked) void __fastcall fn_00647F30(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C5F90
        add esp, 4
        ret
    }
}

// [0x006481C0] sub_006481C0 (18 bytes)
extern "C" void ext_007C6120();

extern "C" __declspec(naked) void __fastcall fn_006481C0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C6120
        add esp, 4
        ret
    }
}

// [0x006481E0] sub_006481E0 (18 bytes)
extern "C" void ext_007C6110();

extern "C" __declspec(naked) void __fastcall fn_006481E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [ecx]
        push eax
        call ext_007C6110
        add esp, 4
        ret
    }
}

// [0x0064DE80] sub_0064DE80 (18 bytes)
extern "C" void __stdcall ext_0064DE00(int a, float b);

extern "C" void __fastcall fn_0064DE80(void* self, int edx_unused, float a1) {
    ext_0064DE00(0, a1);
}

// [0x0064DEA0] sub_0064DEA0 (18 bytes)
extern "C" void __fastcall fn_0064DEA0(void* self, int edx_unused, float a1) {
    ext_0064DE00(1, a1);
}

// [0x0064DEC0] sub_0064DEC0 (18 bytes)
extern "C" void __fastcall fn_0064DEC0(void* self, int edx_unused, float a1) {
    ext_0064DE00(2, a1);
}

// [0x00642630] sub_00642630 (19 bytes)
extern "C" void ext_00648900();

extern "C" __declspec(naked) void __fastcall fn_00642630(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        call ext_00648900
        ret 0x4
    }
}

// [0x00642600] sub_00642600 (19 bytes)
extern "C" void ext_00648DB0();
extern "C" void ext_006425E0();

extern "C" __declspec(naked) void __fastcall fn_00642600(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc]
        call ext_00648DB0
        mov ecx, esi
        pop esi
        jmp ext_006425E0
    }
}

// [0x006426D0] sub_006426D0 (19 bytes)
extern "C" void ext_006489F0();

extern "C" __declspec(naked) void __fastcall fn_006426D0(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        call ext_006489F0
        ret 4
    }
}

// [0x00642720] sub_00642720 (19 bytes)
extern "C" void ext_00648A60();

extern "C" __declspec(naked) void __fastcall fn_00642720(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp]
        call ext_00648A60
        ret 4
    }
}

// [0x00648940] sub_00648940 (20 bytes)
extern "C" void ext_0065BB70();
extern "C" void ext_0065B5E0();

extern "C" __declspec(naked) void __fastcall fn_00648940(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x2c]
        call ext_0065BB70
        mov ecx, dword ptr [esi + 0x30]
        pop esi
        jmp ext_0065B5E0
    }
}

// [0x00647BF0] sub_00647BF0 (20 bytes)
extern "C" void ext_0065AA30();

extern "C" __declspec(naked) void __fastcall fn_00647BF0(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065AA30
        ret
    }
}

// [0x00647C10] sub_00647C10 (20 bytes)
extern "C" void ext_0065ABE0();

extern "C" __declspec(naked) void __fastcall fn_00647C10(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065ABE0
        ret
    }
}

// [0x00647C30] sub_00647C30 (20 bytes)
extern "C" void ext_0065AAB0();

extern "C" __declspec(naked) void __fastcall fn_00647C30(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065AAB0
        ret
    }
}

// [0x00647C50] sub_00647C50 (20 bytes)
extern "C" void ext_0065AB40();

extern "C" __declspec(naked) void __fastcall fn_00647C50(void* self) {
    __asm {
        fld dword ptr [ecx + 0x68]
        push ecx
        fstp dword ptr [esp]
        push ecx
        mov ecx, dword ptr [ecx + 0xa4]
        call ext_0065AB40
        ret
    }
}

// [0x0064C950] sub_0064C950 (20 bytes)
extern "C" void __stdcall ext_0064BDE0(void* p, float f);

extern "C" __declspec(naked) void __fastcall fn_0064C950(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        lea eax, [ecx + 0x6c]
        fstp dword ptr [esp]
        push eax
        call ext_0064BDE0
        ret 0x4
    }
}

// [0x0064CB00] sub_0064CB00 (20 bytes)
extern "C" void ext_0064C970();

extern "C" __declspec(naked) void __fastcall fn_0064CB00(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        push ecx
        lea eax, [ecx + 0x6c]
        fstp dword ptr [esp]
        push eax
        call ext_0064C970
        ret 0x4
    }
}

// [0x0064DDE0] sub_0064DDE0 (20 bytes)
extern "C" void __cdecl ext_007C5C00(int a, int b);

extern "C" void __fastcall fn_0064DDE0(void* self, int edx_unused, int a1) {
    ext_007C5C00(*(int*)((char*)self + 0x64), a1);
}

// [0x00641F80] sub_00641F80 (22 bytes)
extern "C" void __cdecl ext_00641E90(int a1);
extern "C" void __cdecl ext_00641F10(int a1);

extern "C" void __cdecl fn_00641F80(int a1) {
    ext_00641F10(a1);
    ext_00641E90(a1);
}

// [0x0064DC20] sub_0064DC20 (23 bytes)
extern "C" void ext_007C5A40(int a1, float a2);

extern "C" void __fastcall fn_0064DC20(void* self, int edx_unused, float a1) {
    ext_007C5A40(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DCA0] sub_0064DCA0 (23 bytes)
extern "C" void __cdecl ext_007C5AC0(int a, float b);

extern "C" void __fastcall fn_0064DCA0(void* self, int edx_unused, float a1) {
    ext_007C5AC0(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DD20] sub_0064DD20 (23 bytes)
extern "C" void ext_007C5B30(int a, float b);

extern "C" void __fastcall fn_0064DD20(void* self, int edx_unused, float a1) {
    ext_007C5B30(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DD40] sub_0064DD40 (23 bytes)
extern "C" void ext_007C6310(int a, float b);

extern "C" void __fastcall fn_0064DD40(void* self, int edx_unused, float a1) {
    ext_007C6310(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DD60] sub_0064DD60 (23 bytes)
extern "C" void ext_007C5B40(int a, float b);

extern "C" void __fastcall fn_0064DD60(void* self, int edx_unused, float a1) {
    ext_007C5B40(*(int*)((char*)self + 0x64), a1);
}

extern "C" void ext_007C5B50(int a, float b);

// [0x0064DD80] sub_0064DD80 (23 bytes)
extern "C" void __fastcall fn_0064DD80(void* self, int edx_unused, float a1) {
    ext_007C5B50(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DDA0] sub_0064DDA0 (23 bytes)
extern "C" void ext_007C6320(int a, float b);

extern "C" void __fastcall fn_0064DDA0(void* self, int edx_unused, float a1) {
    ext_007C6320(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DDC0] sub_0064DDC0 (23 bytes)
extern "C" void ext_007C5B60(int a, float b);

extern "C" void __fastcall fn_0064DDC0(void* self, int edx_unused, float a1) {
    ext_007C5B60(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DC40] sub_0064DC40 (23 bytes)
extern "C" void ext_007C5A50(int a, float b);

extern "C" void __fastcall fn_0064DC40(void* self, int edx_unused, float a1) {
    ext_007C5A50(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DC60] sub_0064DC60 (23 bytes)
extern "C" void __cdecl ext_007C5A70(int a1, float a2);

extern "C" void __fastcall fn_0064DC60(void* self, int edx_unused, float a1) {
    ext_007C5A70(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DC80] sub_0064DC80 (23 bytes)
extern "C" void ext_007C5A90();

extern "C" __declspec(naked) void __fastcall fn_0064DC80(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 0x64]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_007C5A90
        add esp, 8
        ret 4
    }
}

// [0x0064DCC0] sub_0064DCC0 (23 bytes)
extern "C" void ext_007C5AD0(int a1, float a2);

extern "C" void __fastcall fn_0064DCC0(void* self, int edx_unused, float a1) {
    ext_007C5AD0(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DCE0] sub_0064DCE0 (23 bytes)
extern "C" void ext_007C5AF0(int a, float b);

extern "C" void __fastcall fn_0064DCE0(void* self, int edx_unused, float a1) {
    ext_007C5AF0(*(int*)((char*)self + 0x64), a1);
}

// [0x0064DD00] sub_0064DD00 (23 bytes)
extern "C" void ext_007C5B10(int a1, float a2);

extern "C" void __fastcall fn_0064DD00(void* self, int edx_unused, float a1) {
    ext_007C5B10(*(int*)((char*)self + 0x64), a1);
}

// [0x00642660] sub_00642660 (24 bytes)
extern "C" void ext_00648860();

extern "C" __declspec(naked) void __fastcall fn_00642660(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0xc]
        push eax
        call ext_00648860
        mov byte ptr [esi + 0x10], 0x1
        pop esi
        ret 0x4
    }
}

// [0x00647EA0] sub_00647EA0 (25 bytes)
extern "C" void __cdecl ext_007C6130(void* a, int b);

extern "C" void __fastcall fn_00647EA0(void* self, int edx_unused, int a1) {
    void* inner = *(void**)((char*)self + 0xa4);
    void* vt = *(void**)inner;
    ext_007C6130(vt, a1);
}

// [0x00647EC0] sub_00647EC0 (25 bytes)
extern "C" void ext_007D8450();
extern "C" void __fastcall fn_00647EC0(void* self, int edx_unused, int a1) {
    void* inner = *(void**)((char*)self + 0xa4);
    void* vt = *(void**)inner;
    typedef void (__cdecl *Callee)(void*, int);
    ((Callee)&ext_007D8450)(vt, a1);
}

// [0x00647E00] sub_00647E00 (25 bytes)
extern "C" void __cdecl ext_007C5FA0(int first, int second);

extern "C" void __fastcall fn_00647E00(void* self, int edx_unused, int a1) {
    char* p = *(char**)((char*)self + 0xa4);
    ext_007C5FA0(*(int*)p, a1);
}

// [0x00647E20] sub_00647E20 (25 bytes)
extern "C" void ext_007C6030(int, int);

extern "C" void __fastcall fn_00647E20(char* self, int edx_unused, int a1) {
    int* p = *(int**)(self + 0xa4);
    ext_007C6030(*p, a1);
}

// [0x00647E40] sub_00647E40 (25 bytes)
extern "C" void ext_007C6070();

extern "C" void __fastcall fn_00647E40(void* self, int edx_unused, int a1) {
    int inner = *(int*)(*(int*)((char*)self + 0xa4));
    ((void (__cdecl*)(int, int))ext_007C6070)(inner, a1);
}

// [0x00647E60] sub_00647E60 (25 bytes)
extern "C" void __cdecl ext_007C60B0(int a, int b);

extern "C" void __fastcall fn_00647E60(char* self, int edx_unused, int a1) {
    int* p = *(int**)(self + 0xa4);
    ext_007C60B0(*p, a1);
}

// [0x00647E80] sub_00647E80 (25 bytes)
extern "C" void ext_007C60E0();

extern "C" __declspec(naked) void __fastcall fn_00647E80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0xa4]
        mov edx, dword ptr [ecx]
        push eax
        push edx
        call ext_007C60E0
        add esp, 0x8
        ret 0x4
    }
}

// [0x00647FB0] sub_00647FB0 (25 bytes)
extern "C" void __cdecl ext_007C6250(int a, int b);

extern "C" void __fastcall fn_00647FB0(void* self, int edx_unused, int a1) {
    int* p = *(int**)((char*)self + 0xa4);
    ext_007C6250(*p, a1);
}

// [0x00648620] sub_00648620 (25 bytes)
extern "C" void __stdcall ext_00401C60(int arg);

extern "C" void* __fastcall fn_00648620(void* self, int edx_unused, int a1) {
    ext_00401C60(a1);
    *(int*)self = 0x97e32c;
    return self;
}

// [0x00648200] sub_00648200 (25 bytes)
extern "C" void ext_0065A9A0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00648200(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_0065A9A0
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x00648510] sub_00648510 (25 bytes)
extern "C" void ext_0065ACB0();

extern "C" __declspec(naked) void __fastcall fn_00648510(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_0065ACB0
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x00642020] sub_00642020 (25 bytes)
extern "C" void __fastcall ext_00648AB0(void* self);

typedef void (__cdecl *fn_006A5C5C_t)(void*);

extern "C" void __fastcall fn_00642020(void* self) {
    void* p = *(void**)self;
    if (p) {
        ext_00648AB0(p);
        ((fn_006A5C5C_t)ext_006A5C5C)(p);
    }
}

// [0x00648A90] sub_00648A90 (25 bytes)
extern "C" void __fastcall ext_0065B550(void* self);

typedef void (__cdecl *fn_006A5C5C_t)(void*);

extern "C" void __fastcall fn_00648A90(void* self) {
    void* p = *(void**)self;
    if (p) {
        ext_0065B550(p);
        ((fn_006A5C5C_t)ext_006A5C5C)(p);
    }
}

// [0x00648180] sub_00648180 (28 bytes)
extern "C" void ext_007C6320(int a, float b);

extern "C" void __fastcall fn_00648180(void* self, int edx_unused, float a1) {
    ext_007C6320(**(int**)((char*)self + 0xa4), a1);
}

// [0x006481A0] sub_006481A0 (28 bytes)
extern "C" void ext_007C6310(int a, float b);

extern "C" void __fastcall fn_006481A0(void* self, int edx_unused, float a1) {
    ext_007C6310(**(int**)((char*)self + 0xa4), a1);
}

// [0x00640A80] sub_00640A80 (28 bytes)
extern "C" void ext_00427550();
extern "C" int mem_0092F10C;
extern "C" int mem_0093A808;

extern "C" __declspec(naked) void __fastcall fn_00640A80(void* self) {
    __asm {
        cmp byte ptr [esp + 0x8], 0x0
        mov eax, offset mem_0092F10C
        jne short skip_alt
        mov eax, offset mem_0093A808
skip_alt:
        push eax
        lea ecx, [esp + 0x8]
        call ext_00427550
        ret
    }
}

// [0x00642510] sub_00642510 (28 bytes)
extern "C" void ext_006488A0();

extern "C" void __fastcall fn_00642510(void* self) {
    char* p = (char*)self;
    if (p[0x10] != 0) {
        ((void (__fastcall*)(void*))ext_006488A0)(*(void**)(p + 0xc));
    }
    *(int*)(p + 0x14) = 0;
    p[0x10] = 0;
}

// [0x00647F50] sub_00647F50 (28 bytes)
extern "C" void ext_007C6330();

extern "C" void __fastcall fn_00647F50(void* self, int edx_unused, float a1) {
    void* inner = *(void**)((char*)self + 0xa4);
    void* p = *(void**)inner;
    ((void (__cdecl*)(void*, float))ext_007C6330)(p, a1);
}

// [0x00647DE0] sub_00647DE0 (28 bytes)
extern "C" void __cdecl ext_007C6790(unsigned int a);
extern "C" void __cdecl ext_007C67D0(unsigned int a);

extern "C" void __fastcall fn_00647DE0(void* self) {
    unsigned int* esi = *(unsigned int**)((char*)self + 0xa4);
    ext_007C6790(*esi);
    ext_007C67D0(*esi);
}

// [0x00648960] sub_00648960 (28 bytes)
extern "C" void ext_0065BB70();
extern "C" void ext_0065BF70();
extern "C" void ext_0065B5E0();

extern "C" __declspec(naked) void __fastcall fn_00648960(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x28]
        call ext_0065BF70
        mov ecx, dword ptr [esi + 0x2c]
        call ext_0065BB70
        mov ecx, dword ptr [esi + 0x30]
        pop esi
        jmp ext_0065B5E0
    }
}

// [0x00644F30] sub_00644F30 (29 bytes)
extern "C" void ext_00644F00();

extern "C" __declspec(naked) void __fastcall fn_00644F30(void* self) {
    __asm {
        push 0x0
        mov edx, ecx
        call ext_00644F00
        mov edx, dword ptr [edx + 0x4]
        test edx, edx
        je short done
        mov eax, dword ptr [edx + 0x8]
        lea ecx, [edx + 0x8]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
done:
        ret
    }
}

// [0x00648980] sub_00648980 (32 bytes)
extern "C" void ext_007C76E0();

extern "C" void __fastcall fn_00648980(void* self) {
    char* eax = *(char**)((char*)self + 0x28);
    void* ecx = *(void**)(eax + 0x40);
    ((void (__cdecl*)(void*, float, float, float))ext_007C76E0)(ecx, 0.0f, 0.0f, 0.0f);
}

// [0x00649050] sub_00649050 (39 bytes)
extern "C" void __fastcall fn_00649050(void* self, int edx_unused, float a1) {
    for (int i = 0; i < 3; ++i) {
        void** vtbl = *(void***)self;
        ((void (__thiscall*)(void*, int, double))vtbl[3])(self, i, (double)a1);
    }
}

// [0x006489A0] sub_006489A0 (39 bytes)
extern "C" void ext_007C76E0();

extern "C" void __fastcall fn_006489A0(void* self) {
    char* p = *(char**)((char*)self + 0x28);
    ((void (__cdecl*)(int, float, float, float))ext_007C76E0)(*(int*)(p + 0x40), *(float*)(p + 0x20), *(float*)(p + 0x24), *(float*)(p + 0x28));
}

// [0x006489F0] sub_006489F0 (38 bytes)
extern "C" void ext_006488F0();
extern "C" void ext_00648930();
extern "C" void ext_0065BF00();

extern "C" __declspec(naked) void __fastcall fn_006489F0(void* self, int edx_unused, float a1) {
    __asm {
        call ext_00648930
        call ext_006488F0
        _emit 0xde
        _emit 0xd9
        fnstsw ax
        test ah, 0x41
        jne skip_006489F0
        fld dword ptr [esp + 0x4]
        push ecx
        mov ecx, dword ptr [ecx + 0x28]
        fstp dword ptr [esp]
        call ext_0065BF00
skip_006489F0:
        ret 0x4
    }
}

// [0x006408C0] sub_006408C0 (45 bytes)
extern "C" int mem_0092F67C;

extern "C" __declspec(naked) void __fastcall fn_006408C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 08h]
        xor edx, edx
        cmp ecx, edx
        jne short L_skip
        mov ecx, offset mem_0092F67C
L_skip:
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 04h]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0Ch], edx
        mov byte ptr [eax + 10h], dl
        mov byte ptr [eax + 11h], dl
        ret 0Ch
    }
}

// [0x00647BC0] sub_00647BC0 (46 bytes)
extern "C" void ext_007C62B0();

extern "C" void __fastcall fn_00647BC0(void* self, int edx_unused, const float* v) {
    int first = *(int*)*(void**)((char*)self + 0xa4);
    ((void (__cdecl*)(int, float, float, float))ext_007C62B0)(first, v[0], v[1], v[2]);
}

// [0x00647CB0] sub_00647CB0 (46 bytes)
extern "C" void ext_007C6850();

extern "C" void __fastcall fn_00647CB0(void* self, int edx_unused, const float* v) {
    int first = *(int*)*(void**)((char*)self + 0xa4);
    ((void (__cdecl*)(int, float, float, float))ext_007C6850)(first, v[0], v[1], v[2]);
}

// [0x00647DB0] sub_00647DB0 (46 bytes)
extern "C" void ext_007C6940();

extern "C" void __fastcall fn_00647DB0(void* self, int edx_unused, const float* v) {
    int first = *(int*)(*(int*)((char*)self + 0xa4));
    ((void (__cdecl*)(int, float, float, float))ext_007C6940)(first, v[0], v[1], v[2]);
}

// [0x00647F80] sub_00647F80 (46 bytes)
extern "C" void ext_007C6220();

extern "C" void __fastcall fn_00647F80(void* self, int edx_unused, const float* v) {
    int first = *(int*)(*(int*)((char*)self + 0xa4));
    ((void (__cdecl*)(int, float, float, float))ext_007C6220)(first, v[0], v[1], v[2]);
}

// [0x00649010] sub_00649010 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_00649010(void* self, int edx_unused, float a1) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, 0x3
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loop_top:
        mov eax, dword ptr [edi]
        fld dword ptr [esp + 0xc]
        mov edx, dword ptr [eax + 0xc]
        sub esp, 0x8
        fstp qword ptr [esp]
        push esi
        mov ecx, edi
        call edx
        add esi, 0x1
        cmp esi, 0x6
        jl loop_top
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00648A20] sub_00648A20 (55 bytes)
extern "C" void ext_0065BF30();

extern "C" __declspec(naked) void __fastcall fn_00648A20(void* self, int edx_unused, float a1, float a2, float a3) {
    __asm {
        call ext_00648930
        call ext_006488F0
        fcompp
        fnstsw ax
        test ah, 0x41
        jne skip
        fld dword ptr [esp + 0x4]
        sub esp, 0x0c
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x8]
        mov ecx, dword ptr [ecx + 0x28]
        call ext_0065BF30
    skip:
        ret 0x0c
    }
}

// [0x006426F0] sub_006426F0 (36 bytes)
extern "C" void ext_00648A20();

extern "C" __declspec(naked) void __fastcall fn_006426F0(void* self, int edx_unused, float a1, float a2, float a3) {
    __asm {
        fld dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x0c]
        sub esp, 0x0c
        mov eax, esp
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [eax + 0x8]
        call ext_00648A20
        ret 0x0c
    }
}

// [0x006490B0] sub_006490B0 (60 bytes)
extern "C" void __cdecl fn_006490B0(unsigned int* dst, unsigned int* dst_end, unsigned int* src) {
    if (dst == dst_end) return;
    do {
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
        dst += 6;
    } while (dst != dst_end);
}

// [0x00649730] sub_00649730 (63 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00649730(const void* first, const void* last, void* dst) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        cmp ecx, edx
        mov eax, dword ptr [esp + 0xc]
        je done_00649730
        push esi
    copy_00649730:
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], esi
        mov esi, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], esi
        mov esi, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], esi
        mov esi, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], esi
        mov esi, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0x14], esi
        add ecx, 0x18
        add eax, 0x18
        cmp ecx, edx
        jne copy_00649730
        pop esi
    done_00649730:
        ret
    }
}

// [0x00647D30] sub_00647D30 (46 bytes)
extern "C" void ext_007C6970();

extern "C" void __fastcall fn_00647D30(void* self, int edx_unused, const float* v) {
    int a = **(int**)((char*)self + 0xa4);
    ((void (__cdecl*)(int, float, float, float))ext_007C6970)(a, v[0], v[1], v[2]);
}

// [0x00649770] sub_00649770 (65 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00649770(const void* first, const void* last, void* dst) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        cmp edx, ecx
        mov eax, dword ptr [esp + 0xc]
        je done_00649770
        push esi
    copy_00649770:
        mov esi, dword ptr [ecx - 0x18]
        sub ecx, 0x18
        mov dword ptr [eax - 0x18], esi
        mov esi, dword ptr [ecx + 0x4]
        sub eax, 0x18
        cmp ecx, edx
        mov dword ptr [eax + 0x4], esi
        mov esi, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], esi
        mov esi, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], esi
        mov esi, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], esi
        mov esi, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0x14], esi
        jne copy_00649770
        pop esi
    done_00649770:
        ret
    }
}

// [0x0064B840] sub_0064B840 (67 bytes)
extern "C" __declspec(naked) void __cdecl fn_0064B840(void* first, void* last, void* result) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        cmp ecx, edx
        mov eax, dword ptr [esp + 0Ch]
        je done
        push esi
loop_top:
        test eax, eax
        je skip
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], esi
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], esi
        mov esi, dword ptr [ecx + 0Ch]
        mov dword ptr [eax + 0Ch], esi
        mov esi, dword ptr [ecx + 10h]
        mov dword ptr [eax + 10h], esi
        mov esi, dword ptr [ecx + 14h]
        mov dword ptr [eax + 14h], esi
skip:
        add ecx, 18h
        add eax, 18h
        cmp ecx, edx
        jne loop_top
        pop esi
done:
        ret
    }
}

// [0x0064C900] sub_0064C900 (67 bytes)
extern "C" __declspec(naked) void __cdecl fn_0064C900(void* dst, unsigned int count, const void* src) {
    __asm {
        mov edx, dword ptr [esp + 8]
        test edx, edx
        jbe done
        mov ecx, dword ptr [esp + 0Ch]
        mov eax, dword ptr [esp + 4]
        push esi
    loop_top:
        test eax, eax
        je skip
        mov esi, dword ptr [ecx]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], esi
        mov esi, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], esi
        mov esi, dword ptr [ecx + 0Ch]
        mov dword ptr [eax + 0Ch], esi
        mov esi, dword ptr [ecx + 10h]
        mov dword ptr [eax + 10h], esi
        mov esi, dword ptr [ecx + 14h]
        mov dword ptr [eax + 14h], esi
    skip:
        sub edx, 1
        add eax, 18h
        test edx, edx
        ja loop_top
        pop esi
    done:
        ret
    }
}

// [0x0064CC60] sub_0064CC60 (41 bytes)
extern "C" void ext_0064B840();

extern "C" __declspec(naked) void __fastcall fn_0064CC60(void* self) {
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
        call ext_0064B840
        add esp, 0x1c
        ret 0xc
    }
}

// [0x0064CB20] sub_0064CB20 (54 bytes)
extern "C" void ext_0064C900(int, int, int, int, int, int);

extern "C" __declspec(naked) int __fastcall fn_0064CB20(int self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0x8], 0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push edx
        push ecx
        push eax
        push esi
        push edi
        call ext_0064C900
        lea ecx, [esi + 2*esi]
        add esp, 0x18
        lea eax, [edi + 8*ecx]
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00647FD0] sub_00647FD0 (68 bytes)
extern "C" void ext_007C62E0();
extern "C" void ext_007C62B0();

extern "C" void __fastcall fn_00647FD0(void* self) {
    int first = *(int*)*(void**)((char*)self + 0xa4);
    ((void (__cdecl*)(int, float, float, float))ext_007C62E0)(first, 0.0f, 0.0f, 0.0f);
    int second = *(int*)*(void**)((char*)self + 0xa4);
    ((void (__cdecl*)(int, float, float, float))ext_007C62B0)(second, 0.0f, 0.0f, 0.0f);
}

// [0x00645EB0] sub_00645EB0 (72 bytes)
extern "C" int mem_0097D99C;
extern "C" int mem_0097D988;
extern "C" int mem_0097D954;
extern "C" void ext_006A5C5C();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_00645EB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x8]
        mov dword ptr [esi], offset mem_0097D99C
        mov dword ptr [esi + 0x4], offset mem_0097D988
        mov dword ptr [edi], offset mem_0097D954
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je skip_release
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_release:
        mov ecx, edi
        pop edi
        mov dword ptr [esi + 0x10], 0
        mov dword ptr [esi + 0x14], 0
        mov dword ptr [esi + 0x18], 0
        pop esi
        jmp ext_0065F440
    }
}

// [0x00640960] sub_00640960 (74 bytes)
extern "C" char mem_0097CD00;

extern "C" char* __cdecl fn_00640960(int value, char* buf, int size) {
    char* p = buf + size - 2;
    p[1] = 0;
    while (value > 0) {
        *p = (&mem_0097CD00)[value % 16];
        value /= 16;
        --p;
    }
    return p;
}

// [0x006483A0] sub_006483A0 (85 bytes)
extern "C" void ext_00647BC0();
extern "C" void ext_00647E20();

extern "C" __declspec(naked) void __fastcall fn_006483A0(void* self, int edx_unused, const float* in) {
    __asm {
        sub esp, 0xc
        fldz
        push esi
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0x8]
        mov esi, ecx
        call ext_00647E20
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        lea ecx, [esp + 0x4]
        fadd dword ptr [esp + 0x4]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        call ext_00647BC0
        pop esi
        add esp, 0xc
        ret 4
    }
}
