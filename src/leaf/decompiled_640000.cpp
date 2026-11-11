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

// [0x0064C0A0] sub_0064C0A0 (86 bytes)
extern "C" void ext_00649730();

extern "C" __declspec(naked) void* __cdecl fn_0064C0A0(void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00649730
        sub esi, ebx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 2
        add esp, 0x18
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2*eax]
        lea eax, [edi + 8*eax]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0064CC10] sub_0064CC10 (69 bytes)
// __thiscall, ret 0x14. Validates arg1 against arg3 (invalid_parameter if arg1 is non-null and != arg3),
// then if arg4 != arg5 updates self->[+0x8] via sub_0064C0A0(arg5, old [+0x8], arg4).
// Writes (arg2, arg4) to the out buffer (arg0).
extern "C" int mem_00925134;

extern "C" void __fastcall fn_0064CC10(void* self, int edx_unused, int* out, int a2, int a3, int a4, int a5) {
    if (a2 == 0 || a2 != a4) {
        void (*invalid_parameter)() = reinterpret_cast<void (*)()>(mem_00925134);
        invalid_parameter();
    }
    if (a3 != a5) {
        *(int*)((char*)self + 0x8) = (int)fn_0064C0A0((void*)a5, *(void**)((char*)self + 0x8), (void*)a3);
    }
    out[0] = a2;
    out[1] = a3;
}

// [0x0064B0C0] sub_0064B0C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557A8;
extern "C" int mem_00B557A4;

extern "C" __declspec(naked) void* __fastcall fn_0064B0C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8affde
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557A8], al
        jne L_done
        or dword ptr [mem_00B557A8], eax
        mov ecx, offset mem_00B557A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557A4], 0x97e3ec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557A4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B120] sub_0064B120 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557B0;
extern "C" int mem_00B557AC;

extern "C" __declspec(naked) void* __fastcall fn_0064B120(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8afffe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557B0], al
        jne L_done
        or dword ptr [mem_00B557B0], eax
        mov ecx, offset mem_00B557AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557AC], 0x97e4c4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557AC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B180] sub_0064B180 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557B8;
extern "C" int mem_00B557B4;

extern "C" __declspec(naked) void* __fastcall fn_0064B180(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b001e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557B8], al
        jne L_done
        or dword ptr [mem_00B557B8], eax
        mov ecx, offset mem_00B557B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557B4], 0x97e59c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557B4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B1E0] sub_0064B1E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557C0;
extern "C" int mem_00B557BC;

extern "C" __declspec(naked) void* __fastcall fn_0064B1E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b003e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557C0], al
        jne L_done
        or dword ptr [mem_00B557C0], eax
        mov ecx, offset mem_00B557BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557BC], 0x97e674
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557BC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B240] sub_0064B240 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557C8;
extern "C" int mem_00B557C4;

extern "C" __declspec(naked) void* __fastcall fn_0064B240(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b005e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557C8], al
        jne L_done
        or dword ptr [mem_00B557C8], eax
        mov ecx, offset mem_00B557C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557C4], 0x97e74c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557C4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B2A0] sub_0064B2A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557D0;
extern "C" int mem_00B557CC;

extern "C" __declspec(naked) void* __fastcall fn_0064B2A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b007e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557D0], al
        jne L_done
        or dword ptr [mem_00B557D0], eax
        mov ecx, offset mem_00B557CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557CC], 0x97e824
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557CC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B300] sub_0064B300 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557D8;
extern "C" int mem_00B557D4;

extern "C" __declspec(naked) void* __fastcall fn_0064B300(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b009e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557D8], al
        jne L_done
        or dword ptr [mem_00B557D8], eax
        mov ecx, offset mem_00B557D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557D4], 0x97e8fc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557D4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B360] sub_0064B360 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557E0;
extern "C" int mem_00B557DC;

extern "C" __declspec(naked) void* __fastcall fn_0064B360(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b00be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557E0], al
        jne L_done
        or dword ptr [mem_00B557E0], eax
        mov ecx, offset mem_00B557DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557DC], 0x97e9d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557DC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B3C0] sub_0064B3C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557E8;
extern "C" int mem_00B557E4;

extern "C" __declspec(naked) void* __fastcall fn_0064B3C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b00de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557E8], al
        jne L_done
        or dword ptr [mem_00B557E8], eax
        mov ecx, offset mem_00B557E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557E4], 0x97eaac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557E4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B420] sub_0064B420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557F0;
extern "C" int mem_00B557EC;

extern "C" __declspec(naked) void* __fastcall fn_0064B420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b00fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557F0], al
        jne L_done
        or dword ptr [mem_00B557F0], eax
        mov ecx, offset mem_00B557EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557EC], 0x97eb84
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B480] sub_0064B480 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557F8;
extern "C" int mem_00B557F4;

extern "C" __declspec(naked) void* __fastcall fn_0064B480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b011e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B557F8], al
        jne L_done
        or dword ptr [mem_00B557F8], eax
        mov ecx, offset mem_00B557F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557F4], 0x97ec5c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557F4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B4E0] sub_0064B4E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B557FC;
extern "C" int mem_00B55800;

extern "C" __declspec(naked) void* __fastcall fn_0064B4E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b013e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55800], al
        jne L_done
        or dword ptr [mem_00B55800], eax
        mov ecx, offset mem_00B557FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B557FC], 0x97ed34
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B557FC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B540] sub_0064B540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55808;
extern "C" int mem_00B55804;

extern "C" __declspec(naked) void* __fastcall fn_0064B540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b015e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55808], al
        jne L_done
        or dword ptr [mem_00B55808], eax
        mov ecx, offset mem_00B55804
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55804], 0x97ee0c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55804
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B5A0] sub_0064B5A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55810;
extern "C" int mem_00B5580C;

extern "C" __declspec(naked) void* __fastcall fn_0064B5A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b017e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55810], al
        jne L_done
        or dword ptr [mem_00B55810], eax
        mov ecx, offset mem_00B5580C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5580C], 0x97eee4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5580C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B600] sub_0064B600 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55818;
extern "C" int mem_00B55814;

extern "C" __declspec(naked) void* __fastcall fn_0064B600(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b019e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55818], al
        jne L_done
        or dword ptr [mem_00B55818], eax
        mov ecx, offset mem_00B55814
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55814], 0x97efbc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55814
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B660] sub_0064B660 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55820;
extern "C" int mem_00B5581C;

extern "C" __declspec(naked) void* __fastcall fn_0064B660(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b01be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55820], al
        jne L_done
        or dword ptr [mem_00B55820], eax
        mov ecx, offset mem_00B5581C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5581C], 0x97f094
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5581C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B6C0] sub_0064B6C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55828;
extern "C" int mem_00B55824;

extern "C" __declspec(naked) void* __fastcall fn_0064B6C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b01de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55828], al
        jne L_done
        or dword ptr [mem_00B55828], eax
        mov ecx, offset mem_00B55824
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55824], 0x97f16c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55824
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B720] sub_0064B720 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55830;
extern "C" int mem_00B5582C;

extern "C" __declspec(naked) void* __fastcall fn_0064B720(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b01fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55830], al
        jne L_done
        or dword ptr [mem_00B55830], eax
        mov ecx, offset mem_00B5582C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B5582C], 0x97f244
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5582C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0064B780] sub_0064B780 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55838;
extern "C" int mem_00B55834;

extern "C" __declspec(naked) void* __fastcall fn_0064B780(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b021e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B55838], al
        jne L_done
        or dword ptr [mem_00B55838], eax
        mov ecx, offset mem_00B55834
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B55834], 0x97f31c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B55834
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00648A60] sub_00648A60 (38 bytes)
extern "C" void ext_006488F0();
extern "C" void ext_00648930();
extern "C" void ext_0065B040();

extern "C" __declspec(naked) void __fastcall fn_00648A60(void* self, int edx_unused, float a1) {
    __asm {
        call ext_00648930
        call ext_006488F0
        _emit 0xde
        _emit 0xd9
        fnstsw ax
        test ah, 0x41
        jne skip_00648A60
        fld dword ptr [esp + 0x4]
        push ecx
        mov ecx, dword ptr [ecx + 0x30]
        fstp dword ptr [esp]
        call ext_0065B040
    skip_00648A60:
        ret 0x4
    }
}

// [0x00648DB0] sub_00648DB0 (73 bytes)
extern "C" void ext_0065BEF0();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00648DB0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x28]
        push edi
        call ext_0065BEF0
        mov esi, dword ptr [esi + 0x30]
        mov edi, dword ptr [esi + 0x20]
        mov ebp, dword ptr [mem_00925134]
        add esi, 0x18
        cmp dword ptr [esi + 0x4], edi
        jbe L_chk1
        call ebp
L_chk1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_chk2
        call ebp
L_chk2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00648800] sub_00648800 (74 bytes)
extern "C" void ext_0065ACC0();
extern "C" void ext_00596660();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00648800(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x5c]
        push edi
        call ext_0065ACC0
        mov ebp, dword ptr [mem_00925134]
        mov byte ptr [esi + 0x46], 0x0
        mov edi, dword ptr [esi + 0x50]
        add esi, 0x48
        cmp dword ptr [esi + 0x4], edi
        jbe L_chk1
        call ebp
    L_chk1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_chk2
        call ebp
    L_chk2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0064B7E0] sub_0064B7E0 (95 bytes)
extern "C" void ext_00649770();

extern "C" __declspec(naked) int __cdecl fn_0064B7E0(int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_00649770
        sub esi, ebx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2*eax]
        add eax, eax
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x0064CA20] sub_0064CA20 (43 bytes)
extern "C" void ext_0064B7E0();

extern "C" __declspec(naked) void __fastcall fn_0064CA20(void* self) {
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
        call ext_0064B7E0
        add esp, 0x1c
        ret
    }
}

// [0x00648640] sub_00648640 (102 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __fastcall fn_00648640(void* self, int edx_unused, int value) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 0x50]
        cmp dword ptr [ecx + 0x4c], ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x48]
        push edi
        jbe SHORT L_chk1
        call ebp
    L_chk1:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe SHORT L_chk2
        call ebp
    L_chk2:
        cmp edi, ebx
        mov dword ptr [esp + 0x14], edi
        je SHORT L_found
        mov eax, dword ptr [esp + 0x1c]
    L_loop:
        cmp dword ptr [edi], eax
        je SHORT L_found
        add edi, 4
        cmp edi, ebx
        jne SHORT L_loop
    L_found:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe SHORT L_chk3
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_chk3:
        test esi, esi
        je SHORT L_bad
        cmp esi, esi
        je SHORT L_ok
    L_bad:
        call ebp
    L_ok:
        xor eax, eax
        cmp edi, ebx
        pop edi
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x006452E0] sub_006452E0 (103 bytes)
extern "C" void ext_00647F00();

extern "C" __declspec(naked) void __fastcall fn_006452E0(void* self) {
    __asm {
        sub esp, 0x40
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [eax + 0x158]
        mov ecx, dword ptr [ecx + 0xac]
        push esi
        push edi
        call ext_00647F00
        fld dword ptr [esp + 0x50]
        mov esi, eax
        mov ecx, 0x10
        lea edi, [esp + 0xc]
        rep movsd
        fadd dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x54]
        fadd dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x58]
        fadd dword ptr [esp + 0x44]
        mov ecx, dword ptr [ebx + 0x4]
        lea eax, [esp + 0xc]
        fstp dword ptr [esp + 0x44]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xac]
        push eax
        call edx
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret 0x10
    }
}

// [0x00648790] sub_00648790 (103 bytes)
extern "C" void ext_0065ACB0();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00648790(void* self) {
    __asm {
        push -1
        push 0x8afc9b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x5c]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 0x18], ebx
        je skip_a
        mov ecx, edi
        call ext_0065ACB0
        push edi
        call ext_006A5C5C
        add esp, 4
    skip_a:
        mov eax, dword ptr [esi + 0x4c]
        cmp eax, ebx
        je skip_b
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_b:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x50], ebx
        mov dword ptr [esi + 0x54], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}
