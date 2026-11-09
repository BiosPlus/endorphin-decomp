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
