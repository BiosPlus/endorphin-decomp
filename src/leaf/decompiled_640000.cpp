// Decompiled translation unit: src/leaf/decompiled_640000.cpp

#include <math.h>

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

// [0x00648300] sub_00648300 (110 bytes)
extern "C" void ext_005B1870();
extern "C" void ext_0065A9A0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00648300(void* self) {
    __asm {
        push -1
        push 0x8af9c4
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov [esp + 8], esi
        mov edi, [esi + 0xa4]
        test edi, edi
        mov dword ptr [esp + 0x14], 1
        je L_skip
        mov ecx, edi
        call ext_0065A9A0
        push edi
        call ext_006A5C5C
        add esp, 4
    L_skip:
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x14], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x14], -1
        call ext_005B1870
        mov ecx, [esp + 0xc]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00641F10] sub_00641F10 (112 bytes)
extern "C" int mem_00925068;
extern "C" int mem_00924EC4;
extern "C" int mem_00925060;
extern "C" int mem_0092505C;

extern "C" __declspec(naked) void __cdecl fn_00641F10(int a1) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        xor eax, eax
        cmp dword ptr [edi + 0x14], eax
        jbe short L_ret
        push esi
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
L_loop:
        push 4
        push eax
        push 0x97cdac
        mov ecx, edi
        call dword ptr [mem_00925068]
        mov esi, eax
        mov eax, dword ptr [mem_00924EC4]
        cmp esi, dword ptr [eax]
        je short L_pop
        push 4
        push esi
        push 0x97cdac
        mov ecx, edi
        call dword ptr [mem_00925060]
        mov ecx, dword ptr [mem_00924EC4]
        cmp eax, dword ptr [ecx]
        push 0x20
        push 1
        mov ecx, edi
        je short L_tail
        sub eax, esi
        push eax
        push esi
        call dword ptr [mem_0092505C]
        lea eax, [esi + 1]
        cmp eax, dword ptr [edi + 0x14]
        jb short L_loop
        pop esi
        pop edi
        ret
L_tail:
        mov edx, dword ptr [edi + 0x14]
        sub edx, esi
        push edx
        push esi
        call dword ptr [mem_0092505C]
L_pop:
        pop esi
L_ret:
        pop edi
        ret
    }
}

// [0x00641E90] sub_00641E90 (113 bytes)
extern "C" int mem_00925064;
extern "C" int mem_00925100;

extern "C" __declspec(naked) void __fastcall fn_00641E90(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x4
        push 0x0
        push 0x97cdac
        mov ecx, esi
        call dword ptr [mem_00925060]
        mov ecx, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [ecx]
        cmp eax, ecx
        jne short L_found
        push ecx
        push 0x0
        mov ecx, esi
        call dword ptr [mem_00925100]
        pop esi
        ret
    L_found:
        test eax, eax
        je short L_last
        push eax
        push 0x0
        mov ecx, esi
        call dword ptr [mem_00925100]
    L_last:
        mov edx, dword ptr [mem_00924EC4]
        mov eax, dword ptr [edx]
        push 0x4
        push eax
        push 0x97cdac
        mov ecx, esi
        call dword ptr [mem_00925064]
        mov ecx, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [ecx]
        cmp eax, ecx
        je short L_done
        push ecx
        add eax, 0x1
        push eax
        mov ecx, esi
        call dword ptr [mem_00925100]
    L_done:
        pop esi
        ret
    }
}

// [0x00641350] sub_00641350 (114 bytes)
extern "C" __declspec(naked) void __fastcall fn_00641350(void* self, int edx_unused, void* ret_out, const char* key) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x2d], 0x0
        push edi
        mov edi, dword ptr [esp + 0x20]
        jne L_after_00641350
        mov cl, byte ptr [edi]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop_00641350:
        cmp byte ptr [eax + 0xc], cl
        jge L_left_00641350
        mov eax, dword ptr [eax + 0x8]
        jmp L_chk_00641350
L_left_00641350:
        mov edx, eax
        mov eax, dword ptr [eax]
L_chk_00641350:
        cmp byte ptr [eax + 0x2d], 0x0
        je L_loop_00641350
L_after_00641350:
        mov eax, dword ptr [esi + 0x4]
        cmp edx, eax
        mov dword ptr [esp + 0xc], edx
        mov dword ptr [esp + 0x8], esi
        je L_head_00641350
        mov cl, byte ptr [edi]
        cmp cl, byte ptr [edx + 0xc]
        jl L_head_00641350
        lea ecx, [esp + 0x8]
        jmp L_fin_00641350
L_head_00641350:
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x10], esi
        lea ecx, [esp + 0x10]
L_fin_00641350:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

// [0x006497C0] sub_006497C0 (116 bytes)
extern "C" __declspec(naked) void __fastcall fn_006497C0(void* self, int edx_unused, float* out, const float* in) {
    __asm {
        __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08      // mov eax, [esp+8]
        __asm _emit 0xd9 __asm _emit 0x40 __asm _emit 0x04                  // fld dword ptr [eax+4]
        __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x24                  // sub esp, 0x24
        __asm _emit 0xd9 __asm _emit 0x00                             // fld dword ptr [eax]
        __asm _emit 0x56                                        // push esi
        __asm _emit 0xd9 __asm _emit 0x40 __asm _emit 0x08                  // fld dword ptr [eax+8]
        __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x2c      // mov eax, [esp+0x2c]
        __asm _emit 0x57                                        // push edi
        __asm _emit 0x8b __asm _emit 0xf1                             // mov esi, ecx
        __asm _emit 0xb9 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00  // mov ecx, 9
        __asm _emit 0x8d __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08      // lea edi, [esp+8]
        __asm _emit 0xf3 __asm _emit 0xa5                             // rep movsd
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08      // fld [esp+8]
        __asm _emit 0xd8 __asm _emit 0xca                             // fmul st, st(2)
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c      // fld [esp+0xc]
        __asm _emit 0xd8 __asm _emit 0xcc                             // fmul st, st(4)
        __asm _emit 0xde __asm _emit 0xc1                             // faddp st(1), st
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10      // fld [esp+0x10]
        __asm _emit 0xd8 __asm _emit 0xca                             // fmul st, st(2)
        __asm _emit 0xde __asm _emit 0xc1                             // faddp st(1), st
        __asm _emit 0x5f                                        // pop edi
        __asm _emit 0x5e                                        // pop esi
        __asm _emit 0xd9 __asm _emit 0x18                             // fstp [eax]
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c      // fld [esp+0xc]
        __asm _emit 0xd8 __asm _emit 0xca                             // fmul st, st(2)
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10      // fld [esp+0x10]
        __asm _emit 0xd8 __asm _emit 0xcc                             // fmul st, st(4)
        __asm _emit 0xde __asm _emit 0xc1                             // faddp st(1), st
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14      // fld [esp+0x14]
        __asm _emit 0xd8 __asm _emit 0xca                             // fmul st, st(2)
        __asm _emit 0xde __asm _emit 0xc1                             // faddp st(1), st
        __asm _emit 0xd9 __asm _emit 0x58 __asm _emit 0x04                  // fstp [eax+4]
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x18      // fld [esp+0x18]
        __asm _emit 0xde __asm _emit 0xca                             // fmulp st(2), st
        __asm _emit 0xd9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x1c      // fld [esp+0x1c]
        __asm _emit 0xde __asm _emit 0xcb                             // fmulp st(3), st
        __asm _emit 0xd9 __asm _emit 0xc9                             // fxch st(1)
        __asm _emit 0xde __asm _emit 0xc2                             // faddp st(2), st
        __asm _emit 0xd8 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x20      // fmul [esp+0x20]
        __asm _emit 0xde __asm _emit 0xc1                             // faddp st(1), st
        __asm _emit 0xd9 __asm _emit 0x58 __asm _emit 0x08                  // fstp [eax+8]
        __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x24                  // add esp, 0x24
        __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00                  // ret 8
    }
}

// [0x00645A00] sub_00645A00 (119 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00645A00(void* self) {
    __asm {
        fldz
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        xor ebx, ebx
    L_top:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je L_exit
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jae L_exit
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je L_fail
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_ok
    L_fail:
        fstp st(0)
        call ebp
        fldz
    L_ok:
        mov eax, dword ptr [esi + 0x10]
        fst qword ptr [eax + ebx + 0x10]
        add eax, ebx
        fst qword ptr [eax + 0x8]
        add edi, 1
        fst qword ptr [eax]
        add ebx, 0x18
        jmp L_top
    L_exit:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0064DF20] sub_0064DF20 (62 bytes)
extern "C" void ext_00693C30();
extern "C" void ext_007C5BD0();

extern "C" __declspec(naked) void __fastcall fn_0064DF20(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        fldz
        mov eax, dword ptr [esp + 0x14]
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        mov esi, ecx
        fst dword ptr [esp + 0x8]
        push eax
        lea ecx, [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        call ext_00693C30
        mov edx, dword ptr [esi + 0x64]
        lea ecx, [esp + 0x4]
        push ecx
        push edx
        call ext_007C5BD0
        add esp, 0x8
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x0064E630] sub_0064E630 (130 bytes)
extern "C" void ext_006A7250();
extern "C" double mem_009802F0;

extern "C" __declspec(naked) void __fastcall fn_0064E630(void* self, int edx_unused, float* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4c]
        push esi
        lea edx, [esp + 0x4]
        push edx
        call eax
        fld dword ptr [esp + 0x4]
        fmul qword ptr [mem_009802F0]
        mov esi, dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x4]
        fld dword ptr [esi]
        fld dword ptr [esi + 0x8]
        __asm _emit 0xD9 __asm _emit 0xC1                  // fld st(1)
        __asm _emit 0xDE __asm _emit 0xCA                  // fmulp st(2), st
        __asm _emit 0xD9 __asm _emit 0xC2                  // fld st(2)
        __asm _emit 0xDE __asm _emit 0xCB                  // fmulp st(3), st
        __asm _emit 0xD9 __asm _emit 0xC9                  // fxch st(1)
        __asm _emit 0xDE __asm _emit 0xC2                  // faddp st(2), st
        __asm _emit 0xDC __asm _emit 0xC8                  // fmul st(0), st
        __asm _emit 0xDE __asm _emit 0xC1                  // faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x4]
        __asm _emit 0xD8 __asm _emit 0xD1                  // fcom st(1)
        __asm _emit 0xDF __asm _emit 0xE0                  // fnstsw ax
        __asm _emit 0xF6 __asm _emit 0xC4 __asm _emit 0x05 // test ah, 0x5
        __asm _emit 0x7A __asm _emit 0x27                  // jp +0x27 (-> exit_skip)
        __asm _emit 0xDE __asm _emit 0xF1                  // fdivrp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi]
        fld dword ptr [esp + 0xc]
        __asm _emit 0xD9 __asm _emit 0xC0                  // fld st(0)
        __asm _emit 0xDE __asm _emit 0xCA                  // fmulp st(2), st
        __asm _emit 0xD9 __asm _emit 0xC9                  // fxch st(1)
        fstp dword ptr [esi]
        __asm _emit 0xD9 __asm _emit 0xC0                  // fld st(0)
        __asm _emit 0xD8 __asm _emit 0x4E __asm _emit 0x04 // fmul dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x4]
        __asm _emit 0xD8 __asm _emit 0x4E __asm _emit 0x08 // fmul dword ptr [esi + 0x8]
        fstp dword ptr [esi + 0x8]
        pop esi
        pop ecx
        ret 0x4
exit_skip:
        __asm _emit 0xDD __asm _emit 0xD9                  // fstp st(1)
        pop esi
        __asm _emit 0xDD __asm _emit 0xD8                  // fstp st(0)
        pop ecx
        ret 0x4
    }
}

// [0x0064E220] sub_0064E220 (35 bytes)
extern "C" int __cdecl ext_007D8700(int v);
extern "C" void __cdecl ext_007C93A0(int a0, int a1, void* a2);

extern "C" void* __fastcall fn_0064E220(char* self) {
    void* p = self + 0x8c;
    ext_007C93A0(ext_007D8700(*(int*)(self + 0x64)), 1, p);
    return p;
}

// [0x0064E250] sub_0064E250 (35 bytes)
extern "C" int __cdecl ext_007D8700(int v);
extern "C" void __cdecl ext_007C93A0(int a0, int a1, void* a2);

extern "C" void* __fastcall fn_0064E250(char* self) {
    void* p = self + 0x8c;
    ext_007C93A0(ext_007D8700(*(int*)(self + 0x64)), 0, p);
    return p;
}

// [0x00645E20] sub_00645E20 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_00645E20(void* self) {
    __asm {
        push -1
        push 0x8af6ab
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, ecx
        mov dword ptr [eax + 0x4], 0x928eac
        mov dword ptr [eax + 0x8], 0x93bf24
        fld1
        fst dword ptr [eax + 0x1c]
        xor ecx, ecx
        fldz
        mov dword ptr [eax], 0x97d99c
        fst dword ptr [eax + 0x20]
        mov dword ptr [eax + 0x4], 0x97d988
        fst dword ptr [eax + 0x24]
        mov dword ptr [eax + 0x8], 0x97d954
        fst dword ptr [eax + 0x28]
        mov dword ptr [eax + 0x10], ecx
        fst dword ptr [eax + 0x2c]
        mov dword ptr [eax + 0x14], ecx
        fst dword ptr [eax + 0x34]
        mov dword ptr [eax + 0x18], ecx
        fst dword ptr [eax + 0x38]
        mov dword ptr [eax + 0x5c], ecx
        fst dword ptr [eax + 0x3c]
        mov dword ptr [eax + 0x60], ecx
        mov ecx, dword ptr [esp + 0x4]
        fst dword ptr [eax + 0x40]
        fst dword ptr [eax + 0x48]
        fst dword ptr [eax + 0x4c]
        fst dword ptr [eax + 0x50]
        fstp dword ptr [eax + 0x54]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x44]
        fstp dword ptr [eax + 0x58]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_00645E20();

// [0x006465F0] sub_006465F0 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_006465F0(void* self) {
    __asm {
        mov edx, ecx
        call ext_00645E20
        fld1
        mov dword ptr [edx], 0x97df8c
        mov dword ptr [edx + 0x4], 0x97df74
        mov dword ptr [edx + 0x8], 0x97df40
        mov byte ptr [edx + 0x64], 0x0
        fst dword ptr [edx + 0x6c]
        fldz
        mov eax, edx
        fst dword ptr [edx + 0x70]
        fst dword ptr [edx + 0x74]
        fst dword ptr [edx + 0x78]
        fst dword ptr [edx + 0x7c]
        fst dword ptr [edx + 0x84]
        fst dword ptr [edx + 0x88]
        fst dword ptr [edx + 0x8c]
        fst dword ptr [edx + 0x90]
        fst dword ptr [edx + 0x98]
        fst dword ptr [edx + 0x9c]
        fst dword ptr [edx + 0xa0]
        fstp dword ptr [edx + 0xa4]
        fst dword ptr [edx + 0x80]
        fst dword ptr [edx + 0x94]
        fstp dword ptr [edx + 0xa8]
        ret
    }
}

// [0x0064DEE0] sub_0064DEE0 (62 bytes)
extern "C" void ext_00693F40();
extern "C" void ext_007C5BD0();

extern "C" __declspec(naked) void __fastcall fn_0064DEE0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        fldz
        mov eax, dword ptr [esp + 0x14]
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        mov esi, ecx
        fst dword ptr [esp + 0x8]
        push eax
        lea ecx, [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        call ext_00693F40
        mov edx, dword ptr [esi + 0x64]
        lea ecx, [esp + 0x4]
        push ecx
        push edx
        call ext_007C5BD0
        add esp, 0x8
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x00645670] sub_00645670 (178 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00645670(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        fld dword ptr [edi]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        fstp dword ptr [esp + 0x14]
        test eax, eax
        je call1
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne store1
    call1:
        call ebx
    store1:
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x10]
        fstp qword ptr [ecx + 0x8]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x14]
        je call2
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja store2
    call2:
        call ebx
    store2:
        fld dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x10]
        fstp qword ptr [edx + 0x20]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x14]
        je call3
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x2
        ja store3
    call3:
        call ebx
    store3:
        mov eax, dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x14]
        pop edi
        fstp qword ptr [eax + 0x38]
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x00645730] sub_00645730 (182 bytes)
extern "C" __declspec(naked) void __fastcall fn_00645730(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        fld dword ptr [edi]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        fstp dword ptr [esp + 0x10]
        test eax, eax
        je call1
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x3
        ja store1
call1:
        call ebx
store1:
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x10]
        fstp qword ptr [eax + 0x50]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x10]
        je call2
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x4
        ja store2
call2:
        call ebx
store2:
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x10]
        fstp qword ptr [ecx + 0x68]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x10]
        je call3
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x5
        ja store3
call3:
        call ebx
store3:
        mov edx, dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        pop edi
        fstp qword ptr [edx + 0x80]
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00649080] sub_00649080 (38 bytes)
extern "C" void ext_00645670();
extern "C" void ext_00645730();

struct TargetClass_00649080 {
    virtual void vfunc0();
    char pad_04[0x74];
    int field_78;
    char pad_7c[0x8];
    int field_84;
};

extern "C" void __fastcall fn_00649080(TargetClass_00649080* self, int edx_unused, void* a1) {
    ((void (__thiscall *)(void*, void*))ext_00645670)(self, &self->field_84);
    ((void (__thiscall *)(void*, void*))ext_00645730)(self, &self->field_78);
    self->vfunc0();
}

// [0x00647CE0] sub_00647CE0 (70 bytes)
extern "C" void ext_007C6880();

extern "C" __declspec(naked) void __fastcall fn_00647CE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        sub esp, 0x18
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        mov eax, dword ptr [ecx + 0xa4]
        mov ecx, dword ptr [eax]
        fstp dword ptr [esp]
        push ecx
        call ext_007C6880
        add esp, 0x1c
        ret 0x8
    }
}

// [0x00647EE0] sub_00647EE0 (30 bytes)
extern "C" void ext_007C6CF0(int a, int b, int c);

extern "C" void __fastcall fn_00647EE0(void* self, int edx_unused, int a1, int a2) {
    ext_007C6CF0(**(int**)((char*)self + 0xa4), a2, a1);
}

// [0x00648B40] sub_00648B40 (156 bytes)
extern "C" void ext_0063F530();
extern "C" int mem_00A9F418;
extern "C" int mem_00A9F2A0;

extern "C" __declspec(naked) void __fastcall fn_00648B40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F418]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        push 0x1
        mov esi, ecx
        mov edi, dword ptr [esi + 0x28]
        push 0x0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_set1
        cmp eax, 0xb53b30
        je L_set1
        cmp eax, 0xb53ab0
        je L_set1
        cmp eax, 0xb53a70
        je L_set1
        cmp eax, 0xb53af0
        jne L_skip1
    L_set1:
        mov eax, 0xb53b30
    L_skip1:
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, edi
        call eax
        mov ecx, dword ptr [mem_00A9F2A0]
        mov esi, dword ptr [esi + 0x2c]
        push 0x1
        push 0x0
        push ecx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_set2
        cmp eax, 0xb53b30
        je L_set2
        cmp eax, 0xb53ab0
        je L_set2
        cmp eax, 0xb53a70
        je L_set2
        cmp eax, 0xb53af0
        jne L_skip2
    L_set2:
        mov eax, 0xb53b30
    L_skip2:
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006486B0] sub_006486B0 (210 bytes)
extern "C" void ext_00648400();
extern "C" void ext_0065AC90();
extern "C" void ext_0065ACB0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void* __fastcall fn_006486B0(void* self) {
    __asm {
        push -1
        push 0x8afc81
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        fld1
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fst dword ptr [esi]
        xor ebp, ebp
        fldz
        push edi
        fst dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x10], esi
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
        fstp dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x28]
        fstp dword ptr [esi + 0x3c]
        mov dword ptr [esi + 0x4c], ebp
        mov dword ptr [esi + 0x50], ebp
        mov dword ptr [esi + 0x54], ebp
        mov dword ptr [esi + 0x58], ebp
        mov dword ptr [esp + 0x20], ebp
        mov dword ptr [esi + 0x5c], ebp
        push 0xc
        mov byte ptr [esp + 0x24], 0x1
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebp
        mov byte ptr [esp + 0x20], 0x2
        je loc_null
        mov ecx, eax
        call ext_0065AC90
        mov ebx, eax
        jmp loc_join
    loc_null:
        xor ebx, ebx
    loc_join:
        mov edi, dword ptr [esi + 0x5c]
        cmp ebx, edi
        mov byte ptr [esp + 0x20], 0x1
        je loc_done
        cmp edi, ebp
        je loc_done
        mov ecx, edi
        call ext_0065ACB0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    loc_done:
        mov ecx, esi
        mov dword ptr [esi + 0x5c], ebx
        call ext_00648400
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00648220] sub_00648220 (212 bytes)
extern "C" void ext_005B3500();
extern "C" void ext_005CE4F0();
extern "C" void ext_0065A8B0();
extern "C" void ext_0065A9A0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_00648220(void* self) {
    __asm {
        push -1
        push 0x8af99d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_005B3500
        xor ebp, ebp
        lea ecx, [esi + 0x4c]
        mov dword ptr [esp + 0x1c], ebp
        call dword ptr [mem_00924FE8]
        fldz
        lea ecx, [esi + 0x6c]
        fst dword ptr [ecx + 0x8]
        fst dword ptr [ecx + 0x4]
        mov byte ptr [esp + 0x1c], 0x1
        fst dword ptr [ecx]
        fst dword ptr [ecx + 0x14]
        fst dword ptr [ecx + 0x10]
        fst dword ptr [ecx + 0xc]
        fst dword ptr [ecx + 0x28]
        fst dword ptr [ecx + 0x24]
        fst dword ptr [ecx + 0x20]
        fst dword ptr [ecx + 0x34]
        fst dword ptr [ecx + 0x30]
        fstp dword ptr [ecx + 0x2c]
        call ext_005CE4F0
        mov dword ptr [esi + 0xa4], ebp
        push 0x4
        mov byte ptr [esp + 0x20], 0x2
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x10], eax
        cmp eax, ebp
        mov byte ptr [esp + 0x1c], 0x3
        je short skip_new
        mov ecx, eax
        call ext_0065A8B0
        mov ebp, eax
    skip_new:
        mov edi, dword ptr [esi + 0xa4]
        cmp ebp, edi
        mov byte ptr [esp + 0x1c], 0x2
        je short skip_old
        test edi, edi
        je short skip_old
        mov ecx, edi
        call ext_0065A9A0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    skip_old:
        fld1
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0xa4], ebp
        fstp dword ptr [esi + 0x68]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0064DE00] sub_0064DE00 (119 bytes)
extern "C" void ext_007C59F0();
extern "C" void ext_00693FE0();
extern "C" void ext_00693C30();
extern "C" void ext_007C5BD0();

extern "C" __declspec(naked) void __fastcall fn_0064DE00(void* self, int edx_unused, int a1, float a2) {
    __asm {
        sub esp, 0x1c
        fldz
        push esi
        mov esi, ecx
        fst dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esi + 0x64]
        fst dword ptr [esp + 0x18]
        lea eax, [esp + 0x10]
        fst dword ptr [esp + 0x14]
        push eax
        fstp dword ptr [esp + 0x14]
        push ecx
        call ext_007C59F0
        fldz
        fst dword ptr [esp + 0x14]
        add esp, 0x8
        lea edx, [esp + 0x4]
        fst dword ptr [esp + 0x8]
        push edx
        fstp dword ptr [esp + 0x8]
        lea ecx, [esp + 0x14]
        call ext_00693FE0
        fld dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x4]
        fstp dword ptr [esp + eax * 4 + 0x4]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_00693C30
        mov eax, dword ptr [esi + 0x64]
        lea edx, [esp + 0x10]
        push edx
        push eax
        call ext_007C5BD0
        add esp, 0x8
        pop esi
        add esp, 0x1c
        ret 0x8
    }
}

// [0x0064F9B0] sub_0064F9B0 (229 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00993828;
extern "C" int mem_00982740;
extern "C" int mem_0098273C;

extern "C" __declspec(naked) void __stdcall fn_0064F9B0(void* self, float* o0, float* o1, float* o2, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr [esp + 0x30]
        push ebp
        push esi
        mov esi, dword ptr [eax + 0x17c]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x118]
        push edi
        mov edi, dword ptr [esp + 0x40]
        push edi
        push ebx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call edx
        fld dword ptr [eax + 8]
        fmul qword ptr [mem_00993828]
        mov ebp, dword ptr [esp + 0x30]
        lea ecx, [esp + 0x10]
        fstp dword ptr [ebp]
        call ext_0065F440
        fld dword ptr [mem_00982740]
        fcom dword ptr [ebp]
        fnstsw ax
        test ah, 0x41
        jne short L_0064FA0A
        fstp dword ptr [ebp]
        jmp short L_0064FA0C
    L_0064FA0A:
        fstp st(0)
    L_0064FA0C:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x118]
        push edi
        push ebx
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [eax + 0xc]
        mov ebp, dword ptr [esp + 0x34]
        lea ecx, [esp + 0x10]
        fstp dword ptr [ebp]
        call ext_0065F440
        fld dword ptr [mem_0098273C]
        fcom dword ptr [ebp]
        fnstsw ax
        test ah, 0x41
        jne short L_0064FA47
        fstp dword ptr [ebp]
        jmp short L_0064FA49
    L_0064FA47:
        fstp st(0)
    L_0064FA49:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x118]
        push edi
        push ebx
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [eax + 0x14]
        mov esi, dword ptr [esp + 0x38]
        lea ecx, [esp + 0x10]
        fstp dword ptr [esi]
        call ext_0065F440
        fld dword ptr [mem_0098273C]
        fcom dword ptr [esi]
        fnstsw ax
        test ah, 0x41
        jne short L_0064FA89
        pop edi
        fstp dword ptr [esi]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x18
    L_0064FA89:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x18
    }
}

// [0x00648530] sub_00648530 (230 bytes)
extern "C" void ext_00403560();
extern "C" void ext_00648500();
extern "C" void ext_0065ACD0();
extern "C" void ext_006A6DD2();
extern "C" void ext_00892ED9();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FEC;
extern "C" int mem_00B40640;
extern "C" int mem_0097E334;
extern "C" int mem_00A11FF4;
extern "C" int mem_0097E32C;
extern "C" int mem_00B5516C;

extern "C" __declspec(naked) void __fastcall fn_00648530(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, fs:[0]
        push -1
        push offset ext_00892ED9
        push eax
        mov fs:[0], esp
        sub esp, 44h
        push ebx
        mov ebx, dword ptr [esp + 58h]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov dword ptr [esi + 58h], edi
        mov eax, dword ptr [ebx + 15Ch]
        cmp eax, edi
        mov dword ptr [esi + 58h], eax
        jne short L_648571
        mov eax, dword ptr [esp + 64h]
        cmp eax, edi
        je short L_648571
        add eax, 24h
        mov dword ptr [esi + 58h], eax
L_648571:
        mov eax, dword ptr [esi + 58h]
        cmp eax, edi
        jne short L_6485B0
        push offset mem_0097E334
        lea ecx, [esp + 10h]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0ch]
        push eax
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 5ch], edi
        call ext_00403560
        push offset mem_00A11FF4
        lea ecx, [esp + 2ch]
        push ecx
        mov dword ptr [esp + 30h], offset mem_0097E32C
        call ext_006A6DD2
L_6485B0:
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 8h]
        push esi
        call eax
        lea edi, [ebx + 17Ch]
        mov ecx, edi
        call dword ptr [mem_00924FEC]
        test al, al
        mov ecx, esi
        jne short L_6485D3
        push edi
        jmp short L_6485D8
L_6485D3:
        push offset mem_00B5516C
L_6485D8:
        call ext_00648500
        mov edx, dword ptr [ebx + 4h]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 8h]
        lea ecx, [ebx + 4h]
        push eax
        call edx
        mov ecx, dword ptr [esp + 6ch]
        mov edx, dword ptr [esp + 68h]
        push ecx
        mov ecx, dword ptr [esi + 5ch]
        push esi
        push eax
        push edx
        call ext_0065ACD0
        mov ecx, dword ptr [esp + 50h]
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 50h
        ret 10h
    }
}

// [0x00647D60] sub_00647D60 (70 bytes)
extern "C" void ext_007C69B0();

extern "C" __declspec(naked) void __fastcall fn_00647D60(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        sub esp, 0x18
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        mov eax, dword ptr [ecx + 0xa4]
        mov ecx, dword ptr [eax]
        fstp dword ptr [esp]
        push ecx
        call ext_007C69B0
        add esp, 0x1c
        ret 0x8
    }
}

// [0x0064E6C0] sub_0064E6C0 (246 bytes)
extern "C" int mem_00B55748;
extern "C" void ext_0064E630();

extern "C" void ext_006488F0();

extern "C" __declspec(naked) void __fastcall fn_0064E6C0(void* self, int edx_unused, float* a1) {
    __asm {
        sub esp, 0x34
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [mem_00B55748]
        call ext_006488F0
        fstp dword ptr [esp + 0x8]
        fldz
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x3c]
        fst dword ptr [esp + 0x20]
        lea ecx, [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        push ecx
        fstp dword ptr [esp + 0x1c]
        mov ecx, edi
        call edx
        mov esi, dword ptr [esp + 0x40]
        fld dword ptr [esi]
        lea eax, [esp + 0x24]
        fld dword ptr [esp + 0x8]
        push eax
        fld st(0)
        mov ecx, edi
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        call ext_0064E630
        fld dword ptr [esp + 0x24]
        pop edi
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x4]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x3c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0x34
        ret 0x4
    }
}

// [0x0064E7C0] sub_0064E7C0 (248 bytes)
extern "C" void ext_006A7250();
extern "C" double mem_009802F0;

extern "C" __declspec(naked) void __fastcall fn_0064E7C0(void* self, int edx_unused, float* v) {
    __asm {
        sub esp, 10h
        fldz
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 48h]
        fst dword ptr [esp + 0Ch]
        push esi
        fst dword ptr [esp + 0Ch]
        lea edx, [esp + 8]
        fstp dword ptr [esp + 8]
        push edx
        call eax
        fld dword ptr [esp + 8]
        fld qword ptr [mem_009802F0]
        mov esi, dword ptr [esp + 18h]
        fmul st(1), st
        fxch st(1)
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0Ch]
        fmul st, st(1)
        fstp dword ptr [esp + 0Ch]
        fmul dword ptr [esp + 10h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 8]
        fld st(0)
        fchs
        fstp dword ptr [esp + 4]
        fld dword ptr [esi]
        fld dword ptr [esp + 4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 41h
        jne clampB
        fstp st(1)
        fstp dword ptr [esi]
        jmp clampEnd
clampB:
        fstp st(0)
        fld dword ptr [esi]
        fcomp st(1)
        fnstsw ax
        test ah, 41h
        jne clampC
        fstp dword ptr [esi]
        jmp clampEnd
clampC:
        fstp st(0)
clampEnd:
        fld dword ptr [esi + 4]
        fld dword ptr [esp + 0Ch]
        fld dword ptr [esi + 8]
        fld dword ptr [esp + 10h]
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        _emit 0xDE
        _emit 0xF9
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        _emit 0xDE
        _emit 0xF1
        faddp st(1), st
        fstp dword ptr [esp + 18h]
        fld1
        fld dword ptr [esp + 18h]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 41h
        jne rEarly
        fld1
        _emit 0xDE
        _emit 0xF1
        fstp dword ptr [esp + 18h]
        fld dword ptr [esp + 18h]
        call ext_006A7250
        fstp dword ptr [esp + 18h]
        fld dword ptr [esp + 18h]
        fstp dword ptr [esp + 18h]
        fld dword ptr [esi + 4]
        fld dword ptr [esp + 18h]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi + 4]
        fmul dword ptr [esi + 8]
        fstp dword ptr [esi + 8]
        pop esi
        add esp, 10h
        ret 4
rEarly:
        fstp st(0)
        pop esi
        add esp, 10h
        ret 4
    }
}

// [0x00648120] sub_00648120 (35 bytes)
extern "C" void ext_007C6710();
extern "C" void ext_007C6780();

extern "C" void __fastcall fn_00648120(void* self) {
    void** esi = *(void***)((char*)self + 0xa4);
    if (!((int (__cdecl*)(void*))ext_007C6780)(*esi)) {
        ((void (__cdecl*)(void*))ext_007C6710)(*esi);
    }
}

extern "C" void ext_0064E7C0();
extern "C" void ext_006946C0();

// [0x0064E8C0] sub_0064E8C0 (276 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064E8C0(void* self, int edx_unused, float* a1) {
    __asm {
        sub esp, 0x38
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [mem_00B55748]
        call ext_006488F0
        fstp dword ptr [esp + 0x8]
        fldz
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x38]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x38]
        lea ecx, [esp + 0x30]
        fst dword ptr [esp + 0x34]
        push ecx
        fst dword ptr [esp + 0x34]
        mov ecx, edi
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x1c]
        call edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        call ext_006946C0
        mov esi, dword ptr [esp + 0x44]
        fld dword ptr [esi]
        lea ecx, [esp + 0x24]
        fld dword ptr [esp + 0x8]
        push ecx
        fld st(0)
        mov ecx, edi
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x14]
        fmul dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x14]
        fadd dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x18]
        fadd dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x30]
        call ext_0064E7C0
        fld dword ptr [esp + 0x24]
        pop edi
        fsub dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x4]
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x40]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fmul st, st(1)
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [esi]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x8]
        pop esi
        add esp, 0x38
        ret 0x4
    }
}

// [0x00645B50] sub_00645B50 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B54488;
extern "C" int mem_00B5446C;

extern "C" __declspec(naked) void __fastcall fn_00645B50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8af67e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B54488], al
        jne skip_init
        or dword ptr [mem_00B54488], eax
        push 0xa9bce8
        push offset mem_00B5446C
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x920910
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B5446C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00645630] sub_00645630 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9BCCC;
extern "C" int mem_00B5CE94;
extern "C" __declspec(naked) void* __fastcall fn_00645630(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A9BCCC
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE4]
        mov esi, dword ptr [esp + 0x28]
        push esi
        call ext_0066AC90
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00645350] sub_00645350 (94 bytes)
extern "C" void ext_00647F00();
extern "C" void ext_0067E020();
extern "C" __declspec(naked) void __fastcall fn_00645350(void* self) {
    __asm {
        sub esp, 0x40
        push ebx
        mov ebx, ecx
        mov eax, [ebx]
        mov ecx, [eax + 0x158]
        mov ecx, [ecx + 0xac]
        push esi
        push edi
        call ext_00647F00
        fld dword ptr [esp + 0x58]
        mov edx, [esp + 0x54]
        mov esi, eax
        mov eax, [esp + 0x50]
        mov ecx, 0x10
        lea edi, [esp + 0xc]
        rep movsd
        push ecx
        lea ecx, [esp + 0x10]
        fstp dword ptr [esp]
        push edx
        push eax
        call ext_0067E020
        mov ecx, [ebx + 4]
        mov edx, [ecx]
        mov edx, [edx + 0xac]
        lea eax, [esp + 0xc]
        push eax
        call edx
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret 0xc
    }
}

// [0x00648150] sub_00648150 (35 bytes)
extern "C" void ext_007C66A0();
extern "C" void ext_007C6780();

extern "C" void __fastcall fn_00648150(void* self) {
    void** esi = *(void***)((char*)self + 0xa4);
    if (((int (__cdecl*)(void*))ext_007C6780)(*esi)) {
        ((void (__cdecl*)(void*))ext_007C66A0)(*esi);
    }
}

extern "C" void ext_00645EB0();
extern "C" void ext_00648F90();

// [0x00649840] sub_00649840 (93 bytes)
extern "C" __declspec(naked) void __fastcall fn_00649840(void* self) {
    __asm {
        push -1
        push 0x8b1828
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x97dd2c
        mov dword ptr [esi + 0x4], 0x97dd14
        mov dword ptr [esi + 0x8], 0x97dce0
        mov dword ptr [esp + 0x10], 0x0
        call ext_00648F90
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00645EB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0064F950] sub_0064F950 (93 bytes)
extern "C" void ext_0064E320();
extern "C" __declspec(naked) void __fastcall fn_0064F950(void* self) {
    __asm {
        push -1
        push 0x8b1828
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x97e0bc
        mov dword ptr [esi + 0x4], 0x97e0a4
        mov dword ptr [esi + 0x8], 0x97e070
        mov dword ptr [esp + 0x10], 0x0
        call ext_0064E320
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00645EB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0064DF60] sub_0064DF60 (432 bytes)
extern "C" void ext_00401000();
extern "C" void ext_0044CCC0();
extern "C" void ext_007C6780();
extern "C" void ext_007C9300();
extern "C" void ext_007C93E0();
extern "C" void ext_007C9480();
extern "C" void ext_007C9490();
extern "C" void ext_007C9550();

extern "C" __declspec(naked) void __fastcall fn_0064DF60(void* self) {
    __asm {
        sub esp, 0x48
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x68]
        test eax, eax
        je L_exit
        push eax
        call ext_007C6780
        add esp, 4
        cmp eax, dword ptr [edi + 0x6c]
        je L_exit
        mov eax, dword ptr [edi + 0x64]
        push ebx
        push esi
        push eax
        call ext_007D8700
        mov esi, eax
        push 0
        push esi
        call ext_007C9300
        add esp, 0xc
        push offset ext_0044CCC0
        push 2
        push 0xc
        lea ecx, [esp + 0x30]
        push ecx
        mov ebx, eax
        call ext_00401000
        push offset ext_0044CCC0
        push 2
        push 0xc
        lea edx, [esp + 0x48]
        push edx
        call ext_00401000
        fldz
        lea eax, [esp + 0x30]
        fst dword ptr [esp + 0x14]
        push eax
        fst dword ptr [esp + 0x14]
        lea ecx, [esp + 0x28]
        fst dword ptr [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0x28]
        push 0
        fst dword ptr [esp + 0x28]
        push esi
        fstp dword ptr [esp + 0x28]
        call ext_007C93E0
        lea edx, [esp + 0x1c]
        push edx
        push 0
        push esi
        call ext_007C93A0
        lea eax, [esp + 0x64]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        push 1
        push esi
        call ext_007C93E0
        lea edx, [esp + 0x44]
        push edx
        push 1
        push esi
        call ext_007C93A0
        mov eax, dword ptr [edi + 0x68]
        push eax
        call ext_007C6780
        add esp, 0x3c
        test eax, eax
        mov dword ptr [edi + 0x6c], eax
        je L_zero
        mov ecx, dword ptr [edi + 0x68]
        mov edx, dword ptr [edi + 0x64]
        push ecx
        push ebx
        push edx
        jmp L_call
    L_zero:
        mov eax, dword ptr [edi + 0x64]
        push 0
        push ebx
        push eax
    L_call:
        call ext_007D8700
        add esp, 4
        push eax
        call ext_007C9480
        fld dword ptr [esp + 0x44]
        add esp, 0xc
        sub esp, 0x18
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x44]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp]
        push 0
        push esi
        call ext_007C9550
        fld dword ptr [esp + 0x34]
        add esp, 0x14
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push 0
        push esi
        call ext_007C9490
        fld dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x58]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push ecx
        fld dword ptr [esp + 0x54]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9550
        fld dword ptr [esp + 0x40]
        add esp, 0x14
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp]
        push 1
        push esi
        call ext_007C9490
        add esp, 0x14
        pop esi
        pop ebx
    L_exit:
        pop edi
        add esp, 0x48
        ret
    }
}

// [0x00648BE0] sub_00648BE0 (104 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_0097E3A8;
extern "C" int mem_0097E39C;
extern "C" int mem_0097E390;

extern "C" __declspec(naked) void __fastcall fn_00648BE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_00648C17
        sub eax, 1
        je L_00648C05
        sub eax, 1
        jne L_00648C47
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [esp + 8]
        push eax
        push ecx
        push offset mem_0097E3A8
        jmp L_00648C27
    L_00648C05:
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [esp + 8]
        push eax
        push ecx
        push offset mem_0097E39C
        jmp L_00648C27
    L_00648C17:
        mov eax, dword ptr [mem_00924E90]
        mov ecx, dword ptr [esp + 8]
        push eax
        push ecx
        push offset mem_0097E390
    L_00648C27:
        mov edx, dword ptr [mem_00924FA0]
        push edx
        call ext_00435D00
        add esp, 8
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
    L_00648C47:
        ret
    }
}

struct Mat3_0064B890 {
    float m[9];
};

extern "C" bool __fastcall ext_005E0C10(void* self, int edx_unused, float a1);
extern "C" bool __fastcall ext_00694900(void* self);

// [0x0064B890] sub_0064B890 (105 bytes)
extern "C" bool __fastcall fn_0064B890(Mat3_0064B890* self, int edx_unused, float a1) {
    if (ext_005E0C10(self, edx_unused, a1)) {
        Mat3_0064B890 tmp = *self;
        self->m[1] = tmp.m[3];
        self->m[2] = tmp.m[6];
        self->m[3] = tmp.m[1];
        self->m[5] = tmp.m[7];
        self->m[6] = tmp.m[2];
        self->m[7] = tmp.m[5];
        return true;
    }
    return ext_00694900(self);
}

// [0x0064BDE0] sub_0064BDE0 (545 bytes)
extern "C" void ext_00552A90();
extern "C" void ext_005542B0();
extern "C" void ext_0067B7F0();
extern "C" void ext_0067DB10();
extern "C" void ext_0067E110();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_0064BDE0(void* self, int edx_unused, void* a1, float a2) {
    __asm {
        sub esp, 0xf8
        fld1
        push ebx
        fst dword ptr [esp + 0x10]
        push ebp
        fldz
        push esi
        fst dword ptr [esp + 0x1c]
        mov esi, ecx
        mov eax, dword ptr [esi]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        mov edx, dword ptr [eax + 0xbc]
        fst dword ptr [esp + 0x28]
        push edi
        fst dword ptr [esp + 0x34]
        lea ecx, [esp + 0x80]
        fst dword ptr [esp + 0x38]
        push ecx
        fst dword ptr [esp + 0x40]
        mov ecx, esi
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x88]
        fst dword ptr [esp + 0x8c]
        fst dword ptr [esp + 0x90]
        fst dword ptr [esp + 0x94]
        fst dword ptr [esp + 0x9c]
        fst dword ptr [esp + 0xa0]
        fst dword ptr [esp + 0xa4]
        fst dword ptr [esp + 0xa8]
        fst dword ptr [esp + 0xb0]
        fst dword ptr [esp + 0xb4]
        fst dword ptr [esp + 0xb8]
        fstp dword ptr [esp + 0xbc]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x84]
        fst dword ptr [esp + 0x98]
        fst dword ptr [esp + 0xac]
        fstp dword ptr [esp + 0xc0]
        call edx
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        mov ebp, dword ptr [mem_00925134]
        je short loc_64bedc
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 5
        ja short loc_64bede
    loc_64bedc:
        call ebp
    loc_64bede:
        mov ebx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add ebx, 0x78
        test eax, eax
        je short loc_64bf06
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 4
        ja short loc_64bf08
    loc_64bf06:
        call ebp
    loc_64bf08:
        mov edi, dword ptr [esi + 0x10]
        mov eax, dword ptr [esi + 0x10]
        add edi, 0x60
        test eax, eax
        je short loc_64bf30
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 3
        ja short loc_64bf32
    loc_64bf30:
        call ebp
    loc_64bf32:
        mov eax, dword ptr [esi + 0x10]
        fld qword ptr [eax + 0x50]
        fstp dword ptr [esp + 0x10]
        fld qword ptr [edi + 8]
        mov edi, dword ptr [esp + 0x10c]
        fstp dword ptr [esp + 0x14]
        mov ecx, edi
        fld qword ptr [ebx + 8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x54]
        fld1
        fst dword ptr [esp + 0x58]
        fldz
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x70]
        fst dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x78]
        fstp dword ptr [esp + 0x74]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x7c]
        call ext_0067B7F0
        fld dword ptr [esp + 0x110]
        push ecx
        fstp dword ptr [esp]
        push edi
        lea ecx, [esp + 0x64]
        call ext_00552A90
        lea ecx, [esp + 0x5c]
        push ecx
        lea edx, [esp + 0xc4]
        push edx
        lea eax, [esp + 0xec]
        push eax
        lea ecx, [esp + 0x8c]
        call ext_0067E110
        mov ecx, eax
        call ext_005542B0
        push eax
        lea ecx, [esp + 0x20]
        call ext_0067DB10
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0xac]
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xf8
        ret 8
    }
}

extern "C" void ext_0064B890();
extern "C" void ext_0067DAD0();
extern "C" void ext_0067DB10();

// [0x0064B900] sub_0064B900 (98 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0064B900(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        fldz
        push ebx
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0x1c]
        push eax
        fst dword ptr [esp + 0x18]
        mov esi, ecx
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        fld1
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        call ext_0067DAD0
        fld dword ptr [esp + 0x30]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0xc]
        call ext_0064B890
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov bl, al
        call ext_0067DB10
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x24
        ret 0x4
    }
}

extern "C" void ext_006497C0();

extern "C" void ext_006497C0();

// [0x0064C970] sub_0064C970 (171 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064C970(void* self) {
    __asm {
        sub esp, 0x70
        fld1
        push esi
        fst dword ptr [esp + 0x34]
        mov esi, ecx
        fldz
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xbc]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x3c]
        push edi
        fst dword ptr [esp + 0x44]
        lea ecx, [esp + 0x38]
        fst dword ptr [esp + 0x48]
        push ecx
        fst dword ptr [esp + 0x54]
        mov ecx, esi
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x6c]
        fst dword ptr [esp + 0x70]
        fstp dword ptr [esp + 0x74]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x78]
        call edx
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x3c]
        call ext_0067E110
        lea ecx, [esp + 0x14]
        call ext_00694900
        lea edi, [esi + 0x6c]
        mov ecx, edi
        call ext_0067B7F0
        push edi
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esp + 0x1c]
        call ext_006497C0
        fld dword ptr [esp + 0x80]
        push ecx
        lea edx, [esp + 0xc]
        fstp dword ptr [esp]
        push edx
        mov ecx, esi
        call ext_0064BDE0
        pop edi
        pop esi
        add esp, 0x70
        ret 0x8
    }
}

// [0x00641490] sub_00641490 (709 bytes)
extern "C" void ext_00476B80();
extern "C" void ext_00476EC0();
extern "C" void ext_0055E8C0();
extern "C" void ext_006244E0();
extern "C" void ext_00673C20();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00641490(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x2d], 0x0
        push ebp
        mov ebp, ecx
        je L_64150e
        push 0x929218
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x1
        mov dword ptr [esp + 0x28], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x5c], 0x0
        mov dword ptr [esp + 0x2c], 0x928ee4
        call ext_006A6DD2
    L_64150e:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00673C20
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x2d], 0x0
        je L_64152d
        mov edi, dword ptr [ebx + 0x8]
        jmp L_641545
    L_64152d:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x2d], 0x0
        je L_64153a
        mov edi, eax
        jmp L_641545
    L_64153a:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_6415b0
    L_641545:
        cmp byte ptr [edi + 0x2d], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_641551
        mov dword ptr [edi + 0x4], esi
    L_641551:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_64155e
        mov dword ptr [eax + 0x4], edi
        jmp L_641569
    L_64155e:
        cmp dword ptr [esi], ebx
        jne L_641566
        mov dword ptr [esi], edi
        jmp L_641569
    L_641566:
        mov dword ptr [esi + 0x8], edi
    L_641569:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_641589
        cmp byte ptr [edi + 0x2d], 0x0
        je L_64157e
        mov eax, esi
        jmp L_641587
    L_64157e:
        push edi
        call ext_0055E8C0
        add esp, 0x4
    L_641587:
        mov dword ptr [ebx], eax
    L_641589:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_641607
        cmp byte ptr [edi + 0x2d], 0x0
        je L_6415a2
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_641607
    L_6415a2:
        push edi
        call ext_00476B80
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_641607
    L_6415b0:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_6415c0
        mov esi, ecx
        jmp L_6415da
    L_6415c0:
        cmp byte ptr [edi + 0x2d], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_6415cc
        mov dword ptr [edi + 0x4], esi
    L_6415cc:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_6415da:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_6415e7
        mov dword ptr [eax + 0x4], ecx
        jmp L_6415f5
    L_6415e7:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_6415f2
        mov dword ptr [eax], ecx
        jmp L_6415f5
    L_6415f2:
        mov dword ptr [eax + 0x8], ecx
    L_6415f5:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x2c]
        mov al, byte ptr [ecx + 0x2c]
        mov byte ptr [ecx + 0x2c], dl
        mov byte ptr [ebx + 0x2c], al
    L_641607:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x2c], bl
        jne L_641708
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_641705
    L_641622:
        cmp byte ptr [edi + 0x2c], bl
        jne L_641705
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_641694
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x2c], 0x0
        jne L_64164c
        mov byte ptr [eax + 0x2c], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x2c], 0x0
        call ext_00476EC0
        mov eax, dword ptr [esi + 0x8]
    L_64164c:
        cmp byte ptr [eax + 0x2d], 0x0
        jne L_6416c4
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x2c], bl
        jne L_641661
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x2c], bl
        je L_6416c0
    L_641661:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x2c], bl
        jne L_64167b
        mov byte ptr [edx + 0x2c], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x2c], 0x0
        call ext_006244E0
        mov eax, dword ptr [esi + 0x8]
    L_64167b:
        mov cl, byte ptr [esi + 0x2c]
        mov byte ptr [eax + 0x2c], cl
        mov byte ptr [esi + 0x2c], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x2c], bl
        call ext_00476EC0
        jmp L_641705
    L_641694:
        cmp byte ptr [eax + 0x2c], 0x0
        jne L_6416ab
        mov byte ptr [eax + 0x2c], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x2c], 0x0
        call ext_006244E0
        mov eax, dword ptr [esi]
    L_6416ab:
        cmp byte ptr [eax + 0x2d], 0x0
        jne L_6416c4
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x2c], bl
        jne L_6416d7
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x2c], bl
        jne L_6416d7
    L_6416c0:
        mov byte ptr [eax + 0x2c], 0x0
    L_6416c4:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_641622
        jmp L_641705
    L_6416d7:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x2c], bl
        jne L_6416ef
        mov byte ptr [edx + 0x2c], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x2c], 0x0
        call ext_00476EC0
        mov eax, dword ptr [esi]
    L_6416ef:
        mov cl, byte ptr [esi + 0x2c]
        mov byte ptr [eax + 0x2c], cl
        mov byte ptr [esi + 0x2c], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x2c], bl
        call ext_006244E0
    L_641705:
        mov byte ptr [edi + 0x2c], bl
    L_641708:
        mov ecx, dword ptr [esp + 0x10]
        add ecx, 0x10
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_641732
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_641732:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc
    }
}

extern "C" void ext_00694D80();

// [0x006457F0] sub_006457F0 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_006457F0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x3c
        push esi
        mov esi, dword ptr [esp + 0x44]
        fld dword ptr [esi + 0x30]
        push edi
        fstp dword ptr [esp + 0x14]
        lea eax, [esp + 0x14]
        fld dword ptr [esi + 0x34]
        push eax
        fstp dword ptr [esp + 0x1c]
        mov edi, ecx
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x20]
        call ext_00645730
        fldz
        lea ecx, [esp + 0x20]
        fst dword ptr [esp + 0x10]
        push ecx
        fst dword ptr [esp + 0x10]
        mov ecx, esi
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x3c]
        fld1
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x44]
        call ext_0067DAD0
        lea edx, [esp + 0x8]
        push edx
        lea ecx, [esp + 0x24]
        call ext_00694D80
        lea eax, [esp + 0x8]
        push eax
        mov ecx, edi
        call ext_00645670
        pop edi
        pop esi
        add esp, 0x3c
        ret 0x4
    }
}
