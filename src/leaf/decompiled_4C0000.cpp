// Decompiled translation unit: src/leaf/decompiled_4C0000.cpp

// [0x004CEA30] sub_004CEA30 (13 bytes)
extern "C" void __stdcall ext_004CE810(int value);

extern "C" void __fastcall fn_004CEA30(void* self) {
    ext_004CE810(*reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x180));
}

// [0x004C4E80] sub_004C4E80 (18 bytes)
extern "C" void ext_004C0340();

extern "C" void __fastcall fn_004C4E80(void* self, int edx_unused, float value) {
    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x180) = value;
    ext_004C0340();
}

// [0x004CCC60] sub_004CCC60 (22 bytes)
extern "C" void ext_004CC9E0();
extern "C" void ext_0050BE20();

extern "C" __declspec(naked) void __fastcall fn_004CCC60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x14], 0
        je skip_004CCC60
        call ext_004CC9E0
    skip_004CCC60:
        mov ecx, esi
        pop esi
        jmp ext_0050BE20
    }
}

// [0x004CA1A0] sub_004CA1A0 (23 bytes)
extern "C" void ext_004C98C0(void* p, int a, int b);

extern "C" void __cdecl fn_004CA1A0(void* self) {
    ext_004C98C0(reinterpret_cast<char*>(self) + 0x180, 0, 1);
}

// [0x004CEA10] sub_004CEA10 (23 bytes)
extern "C" int __stdcall ext_004CE7B0(int value);

extern "C" void __fastcall fn_004CEA10(void* self, int edx_unused, int a1) {
    *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x180) = ext_004CE7B0(a1);
}

// [0x004CCDC0] sub_004CCDC0 (25 bytes)
extern "C" void ext_0046AC30();
extern "C" void ext_006A5C5C();

extern "C" void __fastcall fn_004CCDC0(void* self) {
    void* esi = *reinterpret_cast<void**>(self);
    if (esi != 0) {
        reinterpret_cast<void (__fastcall*)(void*)>(ext_0046AC30)(esi);
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(esi);
    }
}

// [0x004CFFE0] sub_004CFFE0 (34 bytes)
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_004CFFE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x947ac0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004C1BF0] sub_004C1BF0 (35 bytes)
extern "C" int mem_00AE3050;
extern "C" int mem_00AE304C;

extern "C" void* __cdecl fn_004C1BF0() {
    if ((mem_00AE3050 & 1) == 0) {
        mem_00AE3050 |= 1;
        mem_00AE304C = 0x944708;
    }
    return &mem_00AE304C;
}

// [0x004C5FE0] sub_004C5FE0 (35 bytes)
extern "C" int mem_00AE370C;
extern "C" int mem_00AE3708;

extern "C" void* __cdecl fn_004C5FE0() {
    if ((mem_00AE370C & 1) == 0) {
        mem_00AE370C |= 1;
        mem_00AE3708 = 0x9453e4;
    }
    return &mem_00AE3708;
}

extern "C" void ext_004C0340();

// [0x004C1AC0] sub_004C1AC0 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1AC0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx + 0x15c]
        cmp edx, eax
        mov dword ptr [ecx + 0x160], edx
        jg L_004C1ADD
        add eax, 0x1
        mov dword ptr [ecx + 0x160], eax
L_004C1ADD:
        call ext_004C0340
        ret 0x4
    }
}

// [0x004C4D80] sub_004C4D80 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C4D80(void* self, int edx_unused, float* out, float s) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fldz
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        fld dword ptr [ecx]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [eax]
        fld dword ptr [ecx + 0x4]
        fmul st, st(1)
        fstp dword ptr [eax + 0x4]
        fmul dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x8]
        ret 0x8
    }
}

// [0x004CCC30] sub_004CCC30 (47 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CCC30(void* self) {
    __asm {
        fldz
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x10], ecx
        mov byte ptr [eax + 0x14], cl
        mov byte ptr [eax + 0x15], 0x1
        mov byte ptr [eax + 0x16], cl
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x24]
        ret
    }
}

// [0x004CCB10] sub_004CCB10 (50 bytes)
extern "C" void ext_004CC610();

extern "C" __declspec(naked) void __fastcall fn_004CCB10(void* self, int edx_unused, const float* v) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x180]
        test ecx, ecx
        je copy_004CCB10
        jmp ext_004CC610
    copy_004CCB10:
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x188]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x18c]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x190]
        ret 0x4
    }
}

// [0x004CCB50] sub_004CCB50 (50 bytes)
extern "C" void ext_004CC6A0();

extern "C" __declspec(naked) void __fastcall fn_004CCB50(void* self, int edx_unused, const float* v) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x180]
        test ecx, ecx
        __asm _emit 0x74 __asm _emit 0x05 // je +5
        jmp ext_004CC6A0
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [ecx]
        fstp dword ptr [eax + 0x194]
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [eax + 0x198]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [eax + 0x19c]
        ret 0x4
    }
}

// [0x004C6490] sub_004C6490 (55 bytes)
extern "C" void __fastcall fn_004C6490(void* self) {
    void* esi = *reinterpret_cast<void**>(self);
    if (esi != 0) {
        void* eax = *reinterpret_cast<void**>(reinterpret_cast<char*>(esi) + 0x4);
        if (eax != 0) {
            reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(eax);
        }
        *reinterpret_cast<int*>(reinterpret_cast<char*>(esi) + 0x4) = 0;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(esi) + 0x8) = 0;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(esi) + 0xC) = 0;
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(esi);
    }
}

// [0x004C7F10] sub_004C7F10 (55 bytes)
extern "C" void __fastcall fn_004C7F10(void* self) {
    void* esi = *reinterpret_cast<void**>(self);
    if (esi != 0) {
        void* eax = *reinterpret_cast<void**>(reinterpret_cast<char*>(esi) + 0x8);
        if (eax != 0) {
            reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(eax);
        }
        *reinterpret_cast<int*>(reinterpret_cast<char*>(esi) + 0x8) = 0;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(esi) + 0xC) = 0;
        *reinterpret_cast<int*>(reinterpret_cast<char*>(esi) + 0x10) = 0;
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(esi);
    }
}

// [0x004C4C40] sub_004C4C40 (44 bytes)
extern "C" void ext_0059F5C0();

extern "C" void* __fastcall fn_004C4C40(void* self) {
    char* esi = reinterpret_cast<char*>(self);
    char* eax = reinterpret_cast<char*>(reinterpret_cast<void* (__fastcall*)(void*)>(ext_0059F5C0)(self));
    *reinterpret_cast<char**>(esi + 0x4) = eax;
    eax[0x2d] = 1;
    eax = *reinterpret_cast<char**>(esi + 0x4);
    *reinterpret_cast<char**>(eax + 0x4) = eax;
    eax = *reinterpret_cast<char**>(esi + 0x4);
    *reinterpret_cast<char**>(eax) = eax;
    eax = *reinterpret_cast<char**>(esi + 0x4);
    *reinterpret_cast<char**>(eax + 0x8) = eax;
    *reinterpret_cast<int*>(esi + 0x8) = 0;
    *reinterpret_cast<int*>(esi + 0xc) = 0;
    return esi;
}

// [0x004C72D0] sub_004C72D0 (57 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_004C72D0(void* first, void* last, void* dest) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp ebx, esi
        je skip_004C72D0
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_004C72D0:
        sub esi, 0x20
        sub edi, 0x20
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        cmp esi, ebx
        mov eax, dword ptr [esi + 0x1c]
        mov dword ptr [edi + 0x1c], eax
        jne loop_004C72D0
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    skip_004C72D0:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x004C4390] sub_004C4390 (70 bytes)
extern "C" int mem_00924FE8;
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __fastcall fn_004C4390(void* self) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call dword ptr [mem_00924FE8]
        xor eax, eax
        mov ecx, esi
        mov dword ptr [esp + 0x10], eax
        mov byte ptr [esi + 0x1c], al
        call dword ptr [mem_00924EA8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004C64D0] sub_004C64D0 (73 bytes)
extern "C" void ext_006A5C5C();
typedef void (__cdecl *ReleaseFn_004C64D0)(void*);
extern "C" void __fastcall fn_004C64D0(void* self, int edx_unused, void* a1) {
    void** slot = (void**)self;
    void** old = (void**)*slot;
    if (a1 != (void*)old && old != 0) {
        if (old[1] != 0) {
            ((ReleaseFn_004C64D0)ext_006A5C5C)(old[1]);
        }
        old[1] = 0;
        old[2] = 0;
        old[3] = 0;
        ((ReleaseFn_004C64D0)ext_006A5C5C)((void*)old);
    }
    *slot = a1;
}

// [0x004C7F50] sub_004C7F50 (73 bytes)
extern "C" void ext_006A5C5C();
typedef void (__cdecl *ReleaseFn_004C7F50)(void*);
extern "C" void __fastcall fn_004C7F50(void* self, int edx_unused, void* a1) {
    void** slot = (void**)self;
    void** old = (void**)*slot;
    if (a1 != (void*)old && old != 0) {
        if (old[2] != 0) {
            ((ReleaseFn_004C7F50)ext_006A5C5C)(old[2]);
        }
        old[2] = 0;
        old[3] = 0;
        old[4] = 0;
        ((ReleaseFn_004C7F50)ext_006A5C5C)((void*)old);
    }
    *slot = a1;
}

// [0x004CA590] sub_004CA590 (75 bytes)
extern "C" void ext_004CA570();
extern "C" int mem_00924FC0;
extern "C" int mem_00945F78;

extern "C" __declspec(naked) void __fastcall fn_004CA590(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ebp, ecx
        xor esi, esi
    loop_004CA590:
        mov eax, dword ptr [4*esi + mem_00945F78]
        push eax
        push edi
        call ebx
        add esp, 0x8
        test al, al
        jne found_004CA590
        add esi, 0x1
        cmp esi, 0x5
        jl loop_004CA590
        push 0x2
        mov ecx, ebp
        call ext_004CA570
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    found_004CA590:
        push esi
        mov ecx, ebp
        call ext_004CA570
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004CE7B0] sub_004CE7B0 (84 bytes)
extern "C" int mem_00924FC4;
extern "C" int mem_00AE51C8;
extern "C" int mem_00AE5290;

extern "C" __declspec(naked) int __fastcall fn_004CE7B0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00924FC4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        xor ebp, ebp
        xor esi, esi
    loop_top:
        lea eax, mem_00AE51C8[esi]
        push edi
        push eax
        call ebx
        add esp, 0x8
        test al, al
        jne found
        lea ecx, mem_00AE5290[esi]
        push edi
        push ecx
        call ebx
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1c
        add ebp, 0x1
        cmp esi, 0xa8
        jle loop_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    found:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004C0E40] sub_004C0E40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3008;
extern "C" int mem_00AE3004;

extern "C" __declspec(naked) void* __fastcall fn_004C0E40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88b01e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3008], al
        jne L_done
        or dword ptr [mem_00AE3008], eax
        mov ecx, offset mem_00AE3004
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE3004], 0x9443d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3004
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004C1BD0] sub_004C1BD0 (30 bytes)
extern "C" void ext_004C0E40();

extern "C" __declspec(naked) void __fastcall fn_004C1BD0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004C0E40
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004C1CC0] sub_004C1CC0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3058;
extern "C" int mem_00AE3054;

extern "C" __declspec(naked) void* __fastcall fn_004C1CC0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88b0de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3058], al
        jne L_done
        or dword ptr [mem_00AE3058], eax
        mov ecx, offset mem_00AE3054
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE3054], 0x944744
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3054
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004C2230] sub_004C2230 (30 bytes)
extern "C" void ext_004C1CC0();

extern "C" __declspec(naked) void __fastcall fn_004C2230(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004C1CC0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004C1D20] sub_004C1D20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3060;
extern "C" int mem_00AE305C;

extern "C" __declspec(naked) void* __fastcall fn_004C1D20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88b0fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3060], al
        jne L_done
        or dword ptr [mem_00AE3060], eax
        mov ecx, offset mem_00AE305C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE305C], 0x9448f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE305C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004C2250] sub_004C2250 (30 bytes)
extern "C" void ext_004C1D20();

extern "C" __declspec(naked) void __fastcall fn_004C2250(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004C1D20
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004C1D80] sub_004C1D80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3068;
extern "C" int mem_00AE3064;

extern "C" __declspec(naked) void* __fastcall fn_004C1D80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88b11e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3068], al
        jne L_done
        or dword ptr [mem_00AE3068], eax
        mov ecx, offset mem_00AE3064
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE3064], 0x944aa4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3064
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004C2270] sub_004C2270 (30 bytes)
extern "C" void ext_004C1D80();

extern "C" __declspec(naked) void __fastcall fn_004C2270(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004C1D80
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004C6010] sub_004C6010 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE3714;
extern "C" int mem_00AE3710;

extern "C" __declspec(naked) void* __fastcall fn_004C6010(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88b85e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3714], al
        jne L_done
        or dword ptr [mem_00AE3714], eax
        mov ecx, offset mem_00AE3710
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE3710], 0x94541c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3710
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004C6360] sub_004C6360 (30 bytes)
extern "C" void ext_004C6010();

extern "C" __declspec(naked) void __fastcall fn_004C6360(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004C6010
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004C6070] sub_004C6070 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE371C;
extern "C" int mem_00AE3718;

extern "C" __declspec(naked) void* __fastcall fn_004C6070(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88b87e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE371C], al
        jne L_done
        or dword ptr [mem_00AE371C], eax
        mov ecx, offset mem_00AE3718
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE3718], 0x9455cc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3718
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004C6380] sub_004C6380 (30 bytes)
extern "C" void ext_004C6070();

extern "C" __declspec(naked) void __fastcall fn_004C6380(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004C6070
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004CADD0] sub_004CADD0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44A4;
extern "C" int mem_00AE44A0;

extern "C" __declspec(naked) void* __fastcall fn_004CADD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88c08e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE44A4], al
        jne L_done
        or dword ptr [mem_00AE44A4], eax
        mov ecx, offset mem_00AE44A0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE44A0], 0x94667c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE44A0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004CAE30] sub_004CAE30 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44AC;
extern "C" int mem_00AE44A8;

extern "C" __declspec(naked) void* __fastcall fn_004CAE30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88c0ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE44AC], al
        jne L_done
        or dword ptr [mem_00AE44AC], eax
        mov ecx, offset mem_00AE44A8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE44A8], 0x946754
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE44A8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004CB580] sub_004CB580 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44E4;
extern "C" int mem_00AE44E0;

extern "C" __declspec(naked) void* __fastcall fn_004CB580(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88c18e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE44E4], al
        jne L_done
        or dword ptr [mem_00AE44E4], eax
        mov ecx, offset mem_00AE44E0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE44E0], 0x946d3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE44E0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004CBBB0] sub_004CBBB0 (30 bytes)
extern "C" void ext_004CB580();

extern "C" __declspec(naked) void __fastcall fn_004CBBB0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004CB580
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004CEAC0] sub_004CEAC0 (87 bytes)
extern "C" void ext_00594000();
extern "C" int mem_009849C0;

extern "C" __declspec(naked) void __fastcall fn_004CEAC0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00594000
        mov eax, dword ptr [eax + 0x26c]
        mov ecx, dword ptr [eax + 0x538]
        cmp ecx, dword ptr [mem_009849C0]
        jae skip_004CEAC0
        mov ecx, dword ptr [esp + 0x8]
        cmp byte ptr [ecx + 0x17c], 0
        je store_004CEAC0
        mov eax, dword ptr [esi]
        test eax, eax
        je store_004CEAC0
        mov dword ptr [eax + 0x5f0], 0
    store_004CEAC0:
        fld dword ptr [ecx + 0x18c]
        fstp dword ptr [esi + 0x8]
        pop esi
        ret 0x4
    skip_004CEAC0:
        mov edx, dword ptr [esp + 0x8]
        fld dword ptr [edx + 0x18c]
        fstp dword ptr [esi + 0x8]
        pop esi
        ret 0x4
    }
}

// [0x004CF910] sub_004CF910 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE4B88;
extern "C" int mem_00AE4B84;

extern "C" __declspec(naked) void* __fastcall fn_004CF910(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88c66e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE4B88], al
        jne L_done
        or dword ptr [mem_00AE4B88], eax
        mov ecx, offset mem_00AE4B84
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE4B84], 0x9473d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE4B84
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004CFDC0] sub_004CFDC0 (30 bytes)
extern "C" void ext_004CF910();

extern "C" __declspec(naked) void __fastcall fn_004CFDC0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004CF910
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004CF970] sub_004CF970 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE4B90;
extern "C" int mem_00AE4B8C;

extern "C" __declspec(naked) void* __fastcall fn_004CF970(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x88c68e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE4B90], al
        jne L_done
        or dword ptr [mem_00AE4B90], eax
        mov ecx, offset mem_00AE4B8C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00AE4B8C], 0x947584
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE4B8C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x004CFDE0] sub_004CFDE0 (30 bytes)
extern "C" void ext_004CF970();

extern "C" __declspec(naked) void __fastcall fn_004CFDE0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_004CF970
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x004CE590] sub_004CE590 (95 bytes)
extern "C" int mem_00924FC4;

extern "C" __declspec(naked) int __cdecl fn_004CE590(void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0x00AE51C8
    loop_004CE590:
        push esi
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne found_004CE590
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0x00AE528C
        jl loop_004CE590
        xor edi, edi
        mov esi, 0x00AE5290
    loop2_004CE590:
        push esi
        push ebx
        call ebp
        add esp, 0x8
        test al, al
        jne found_004CE590
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0x00AE5354
        jl loop2_004CE590
        pop edi
        pop esi
        pop ebp
        mov eax, 0x7
        pop ebx
        ret
    found_004CE590:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_0067DAD0();
extern "C" void ext_006A7250();

// [0x004C50C0] sub_004C50C0 (96 bytes)
// Builds a 3x3 identity block on the stack, passes its address to sub_0067DAD0 (stdcall-style,
// callee pops), then returns the Euclidean length of row 0 via CIsqrt.
extern "C" __declspec(naked) float __cdecl fn_004C50C0(void) {
    __asm {
        sub esp, 0x28
        fldz
        lea eax, [esp + 0x4]
        fst dword ptr [esp + 0xc]
        push eax
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        call ext_0067DAD0
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp]
        fld dword ptr [esp]
        add esp, 0x28
        ret
    }
}

// [0x004C70F0] sub_004C70F0 (97 bytes)
extern "C" void ext_00401BB0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004C70F0(void* self) {
    __asm {
        push -1
        push 0x0088BC14
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00945A5C
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401BB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004C7200] sub_004C7200 (106 bytes)
extern "C" int mem_00924FE0;
extern "C" void ext_00401C60();
extern "C" __declspec(naked) void* __fastcall fn_004C7200(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x88bc14
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00401C60
        lea eax, [edi + 0x28]
        push eax
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x945a5c
        call dword ptr [mem_00924FE0]
        add edi, 0x44
        push edi
        lea ecx, [esi + 0x44]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004C4650] sub_004C4650 (113 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004C4650(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [ecx]
        push edi
        mov edi, esi
        mov ebp, eax
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], ebp
    L_loop:
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je L_chk1
        cmp edi, esi
        je L_chk2
    L_chk1:
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebp, ebx
        je L_done
        test edi, edi
        jne L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp ebp, dword ptr [edi + 0x4]
        jne L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        mov edx, dword ptr [ebp + 0x28]
        mov eax, dword ptr [esi + 0xc]
        lea ecx, [esp + 0x10]
        mov dword ptr [edx + 0x24], eax
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
        jmp L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004CCDE0] sub_004CCDE0 (63 bytes)
extern "C" void ext_00406510();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004CCDE0(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x16c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe skip_a
        call ebp
    skip_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe skip_b
        call ebp
    skip_b:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x004CC6A0] sub_004CC6A0 (126 bytes)
extern "C" __declspec(naked) void __fastcall fn_004CC6A0(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax]
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        fstp dword ptr [esi + 0x24]
        push edi
        fld dword ptr [eax + 4]
        fstp dword ptr [esi + 0x28]
        fld dword ptr [eax + 8]
        fstp dword ptr [esi + 0x2c]
        mov edi, dword ptr [esi + 4]
        cmp edi, dword ptr [esi + 8]
        mov byte ptr [esi + 0x15], 1
        jbe L_a
        call ebp
        nop
    L_a:
        mov ebx, dword ptr [esi + 8]
        cmp dword ptr [esi + 4], ebx
        jbe L_b
        call ebp
    L_b:
        test esi, esi
        je L_c
        cmp esi, esi
        je L_d
    L_c:
        call ebp
    L_d:
        cmp edi, ebx
        je L_done
        test esi, esi
        jne L_e
        call ebp
    L_e:
        cmp edi, dword ptr [esi + 8]
        jb L_f
        call ebp
    L_f:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax + 0x234]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0xa8]
        lea eax, [esi + 0x18]
        push eax
        call edx
        cmp edi, dword ptr [esi + 8]
        jb L_g
        call ebp
    L_g:
        add edi, 4
        jmp L_a
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x004C0350] sub_004C0350 (44 bytes)
extern "C" void ext_0055DA20();
extern "C" void ext_00681E50();

extern "C" __declspec(naked) void* __fastcall fn_004C0350(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 12]
        push esi
        push eax
        push 2
        mov dword ptr [esp + 12], 0
        call ext_00681E50
        mov esi, dword ptr [esp + 20]
        add esp, 4
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x004CDE30] sub_004CDE30 (133 bytes)
extern "C" void ext_0041DD40();
extern "C" void ext_00672D10();
extern "C" void ext_0066AC80();

extern "C" __declspec(naked) void __fastcall fn_004CDE30(void* self) {
    __asm {
        push -1
        push 0x88c363
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x18]
        lea esi, [edi + 0x14]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], 0x1
        je skip_dd40
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        push esi
        push ecx
        push eax
        call ext_0041DD40
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x14
skip_dd40:
        lea ecx, [edi + 0x4]
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov byte ptr [esp + 0x18], bl
        call ext_00672D10
        mov ecx, edi
        mov dword ptr [esp + 0x18], -1
        call ext_0066AC80
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004CC610] sub_004CC610 (137 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004CC610(void* self, int edx_unused, const float* v) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        fstp dword ptr [esi + 0x18]
        lea ebp, [esi + 0x18]
        fld dword ptr [eax + 0x4]
        push edi
        fstp dword ptr [ebp + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ebp + 0x8]
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov byte ptr [esi + 0x15], 0x1
        jbe chk_begin_004CC610
        call dword ptr [mem_00925134]
    chk_begin_004CC610:
    loop_004CC610:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe chk_this_004CC610
        call dword ptr [mem_00925134]
    chk_this_004CC610:
        test esi, esi
        je chk_bad_004CC610
        cmp esi, esi
        je chk_end_004CC610
    chk_bad_004CC610:
        call dword ptr [mem_00925134]
    chk_end_004CC610:
        cmp edi, ebx
        je done_004CC610
        test esi, esi
        mov ebx, dword ptr [mem_00925134]
        jne chk_it_004CC610
        call ebx
    chk_it_004CC610:
        cmp edi, dword ptr [esi + 0x8]
        jb body_004CC610
        call ebx
    body_004CC610:
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax + 0x234]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xa4]
        push ebp
        call eax
        cmp edi, dword ptr [esi + 0x8]
        jb next_004CC610
        call ebx
    next_004CC610:
        add edi, 0x4
        jmp loop_004CC610
    done_004CC610:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x004C46D0] sub_004C46D0 (161 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004C46D0(void* self) {
    __asm {
        sub esp, 0x10
        fldz
        push ebx
        push ebp
        fstp dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax]
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], ebp
    L_loop:
        test esi, esi
        mov ebx, dword ptr [edi + 0x4]
        je L_chk1
        cmp esi, edi
        je L_chk2
    L_chk1:
        call dword ptr [mem_00925134]
    L_chk2:
        cmp ebp, ebx
        je L_done
        test esi, esi
        jne L_chk3
        call dword ptr [mem_00925134]
    L_chk3:
        cmp ebp, dword ptr [esi + 0x4]
        jne L_chk4
        call dword ptr [mem_00925134]
    L_chk4:
        mov ecx, dword ptr [ebp + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        call eax
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_else
        lea ecx, [esp + 0x18]
        fstp dword ptr [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_loop
    L_else:
        lea ecx, [esp + 0x18]
        fstp st(0)
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_loop
    L_done:
        fld dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x004C5010] sub_004C5010 (167 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_0067DB10();
extern "C" __declspec(naked) void __fastcall fn_004C5010(void* self, int edx_unused, float s) {
    __asm {
        sub esp, 24h
        fldz
        push esi
        fst dword ptr [esp + 0ch]
        lea eax, [esp + 4]
        fst dword ptr [esp + 8]
        push eax
        fst dword ptr [esp + 1ch]
        mov esi, ecx
        fst dword ptr [esp + 14h]
        fst dword ptr [esp + 24h]
        fstp dword ptr [esp + 20h]
        fld1
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 18h]
        fstp dword ptr [esp + 28h]
        call ext_0067DAD0
        fld dword ptr [esp + 2ch]
        fld dword ptr [esp + 4]
        lea ecx, [esp + 4]
        fmul st, st(1)
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0ch]
        fmul st, st(1)
        fstp dword ptr [esp + 0ch]
        fld dword ptr [esp + 10h]
        fmul st, st(1)
        fstp dword ptr [esp + 10h]
        fld dword ptr [esp + 14h]
        fmul st, st(1)
        fstp dword ptr [esp + 14h]
        fld dword ptr [esp + 18h]
        fmul st, st(1)
        fstp dword ptr [esp + 18h]
        fld dword ptr [esp + 1ch]
        fmul st, st(1)
        fstp dword ptr [esp + 1ch]
        fld dword ptr [esp + 20h]
        fmul st, st(1)
        fstp dword ptr [esp + 20h]
        fld dword ptr [esp + 24h]
        fmul st, st(1)
        fstp dword ptr [esp + 24h]
        fmul dword ptr [esp + 28h]
        fstp dword ptr [esp + 28h]
        call ext_0067DB10
        pop esi
        add esp, 24h
        ret 4
    }
}

// [0x004CC9E0] sub_004CC9E0 (185 bytes)
extern "C" void ext_00528BB0();
extern "C" void ext_005E12F0();
extern "C" void ext_006622D0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004CC9E0(void* self) {
    __asm {
        push edi
        mov edi, ecx
        cmp byte ptr [edi + 0x14], 0
        je fn_exit
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [edi + 0x4]
        cmp esi, dword ptr [edi + 0x8]
        jbe L1
        call ebp
L1:
        push ebx
loop_top:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe L2
        call ebp
L2:
        test edi, edi
        je L3
        cmp edi, edi
        je L4
L3:
        call ebp
L4:
        cmp esi, ebx
        je done
        cmp dword ptr [edi + 0x10], 3
        jne L_notype3
        test edi, edi
        jne L5
        call ebp
L5:
        cmp esi, dword ptr [edi + 0x8]
        jb L6
        call ebp
L6:
        mov eax, dword ptr [esi]
        test eax, eax
        je L7
        lea ebp, [eax + 0x154]
        jmp L8
L7:
        xor ebp, ebp
L8:
        call ext_00594000
        push ebp
        lea ecx, [eax + 0x168]
        call ext_006622D0
        mov ebp, dword ptr [mem_00925134]
L_notype3:
        test edi, edi
        jne L9
        call ebp
L9:
        cmp esi, dword ptr [edi + 0x8]
        jb L10
        call ebp
L10:
        mov ecx, dword ptr [esi]
        call ext_005E12F0
        cmp esi, dword ptr [edi + 0x8]
        jb L11
        call ebp
L11:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x22c]
        push 0
        push 0x20
        add ecx, 0xc
        call ext_00528BB0
        mov byte ptr [edi + 0x14], 0
        cmp esi, dword ptr [edi + 0x8]
        jb L12
        call ebp
L12:
        add esi, 4
        jmp loop_top
done:
        pop ebx
        pop esi
        pop ebp
fn_exit:
        pop edi
        ret
    }
}

// [0x004CA5E0] sub_004CA5E0 (189 bytes)
extern "C" void ext_006A6C87();
extern "C" void ext_006A6C99();
extern "C" int mem_00AE447C;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE8;
extern "C" int mem_00AE43EC;
extern "C" int mem_00924FD4;

extern "C" __declspec(naked) void __fastcall fn_004CA5E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88bfee
        push eax
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE447C], 1
        push ebx
        push esi
        push edi
        mov ebx, ecx
        jne L_check_table
        or dword ptr [mem_00AE447C], 1
        mov eax, dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00924FE8]
        push eax
        push ecx
        push 5
        push 1ch
        push 0xae43f0
        mov dword ptr [esp + 0x28], 0
        call ext_006A6C99
        push 0x918be0
        call ext_006A6C87
        add esp, 4
        mov dword ptr [esp + 0x14], 0xffffffff
L_check_table:
        cmp byte ptr [mem_00AE43EC], 0
        jne L_after_table
        mov edi, 0xae43f0
        mov esi, 0x945f78
L_loop:
        mov edx, dword ptr [esi]
        push edx
        mov ecx, edi
        call dword ptr [mem_00924FD4]
        add esi, 4
        add edi, 1ch
        cmp esi, 0x945f8c
        jl L_loop
        mov byte ptr [mem_00AE43EC], 1
L_after_table:
        mov eax, dword ptr [ebx + 0x184]
        lea ecx, [8 * eax]
        sub ecx, eax
        pop edi
        lea eax, [ecx * 4 + 0xae43f0]
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x0c
        ret
    }
}

// [0x004C4440] sub_004C4440 (185 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();

extern "C" __declspec(naked) void __fastcall fn_004C4440(void* self) {
    __asm {
        push ebx
        push esi
        push 0x1
        push 0x0
        mov ebx, ecx
        mov ecx, dword ptr [esp + 0x14]
        push 0x945338
        call ext_0063F530
        cmp eax, 0xb53a34
        je sel_004C4440
        cmp eax, 0xb53b30
        je sel_004C4440
        cmp eax, 0xb53ab0
        je sel_004C4440
        cmp eax, 0xb53a70
        je sel_004C4440
        cmp eax, 0xb53af0
        jne keep_004C4440
    sel_004C4440:
        mov esi, 0xb53b30
        jmp chk_004C4440
    keep_004C4440:
        mov esi, eax
    chk_004C4440:
        cmp esi, 0xb53a34
        je clr_004C4440
        cmp esi, 0xb53b30
        je clr_004C4440
        cmp esi, 0xb53ab0
        je clr_004C4440
        cmp esi, 0xb53a70
        je clr_004C4440
        cmp esi, 0xb53af0
        je clr_004C4440
        push edi
        push 0x945330
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea edi, [ebx + 0x1c]
        push edi
        call ext_00427640
        add esp, 0x8
        cmp byte ptr [edi], 0x0
        push 0x945328
        sete cl
        mov byte ptr [edi], cl
        mov ecx, esi
        call ext_0063EFE0
        push eax
        push ebx
        call ext_004275E0
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        ret 0x4
    clr_004C4440:
        pop esi
        mov byte ptr [ebx + 0x1c], 0x0
        pop ebx
        ret 0x4
    }
}

// [0x004C2330] sub_004C2330 (154 bytes)
extern "C" void ext_00401D20();
extern "C" void ext_004026E0();
extern "C" void ext_0065C660();

extern "C" __declspec(naked) void __fastcall fn_004C2330(void* self) {
    __asm {
        push -1
        push 0x88b181
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x158]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x944ff4
        mov dword ptr [esi + 0x4], 0x944fac
        mov dword ptr [esi + 0x8], 0x944f6c
        mov dword ptr [esi + 0xc], 0x944f1c
        mov dword ptr [esi + 0x150], 0x944f08
        mov dword ptr [esi + 0x154], 0x944ef8
        mov dword ptr [edi], 0x944ecc
        lea ecx, [esi + 0x16c]
        mov dword ptr [esp + 0x18], 0x1
        call ext_004026E0
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x0
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004CCF10] sub_004CCF10 (153 bytes)
extern "C" void ext_0046AC30();
extern "C" void ext_004C2330();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004CCF10(void* self) {
    __asm {
        push -1
        push 0x88c6a8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x9471c4
        mov dword ptr [esi + 0x4], 0x94717c
        mov dword ptr [esi + 0x8], 0x94713c
        mov dword ptr [esi + 0xc], 0x9470ec
        mov dword ptr [esi + 0x150], 0x9470d4
        mov dword ptr [esi + 0x154], 0x9470c4
        mov dword ptr [esi + 0x158], 0x947098
        mov edi, dword ptr [esi + 0x180]
        test edi, edi
        mov dword ptr [esp + 0x14], 0
        je skip_004CCF10
        mov ecx, edi
        call ext_0046AC30
        push edi
        call ext_006A5C5C
        add esp, 0x4
    skip_004CCF10:
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_004C2330
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004C80A0] sub_004C80A0 (183 bytes)
extern "C" void ext_004C2330();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004C80A0(void* self) {
    __asm {
        push -1
        push 0x88c6a8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x945da4
        mov dword ptr [esi + 0x4], 0x945d5c
        mov dword ptr [esi + 0x8], 0x945d1c
        mov dword ptr [esi + 0xc], 0x945ccc
        mov dword ptr [esi + 0x150], 0x945cb4
        mov dword ptr [esi + 0x154], 0x945ca4
        mov dword ptr [esi + 0x158], 0x945c78
        mov edi, dword ptr [esi + 0x19c]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr [esp + 0x18], ebx
        je loc_004C812A
        mov eax, dword ptr [edi + 0x8]
        cmp eax, ebx
        je loc_004C8118
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_004C8118:
        push edi
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov dword ptr [edi + 0x10], ebx
        call ext_006A5C5C
        add esp, 0x4
    loc_004C812A:
        lea ecx, [esi + 0x180]
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_004C2330
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_005DF5C0();

// [0x004C4880] sub_004C4880 (36 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C4880(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004C49C0] sub_004C49C0 (56 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C49C0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        jne loc_004C49EA
        fldz
        pop esi
        pop ecx
        ret 0x4
    loc_004C49EA:
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004C5120] sub_004C5120 (182 bytes)
extern "C" void ext_0067B7F0();
extern "C" void ext_0067DE10();
extern "C" void ext_004C5010();
extern "C" void ext_006A7250();
extern "C" int mem_00B40640;
extern "C" double sqrt(double);

extern "C" __declspec(naked) void __fastcall fn_004C5120(void* self, int edx_unused, const float* a1) {
    __asm {
        sub esp, 0xc
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 0x4]
        push edi
        fld dword ptr [eax + 0x4]
        mov edi, ecx
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x4]
        fld dword ptr [eax]
        fld dword ptr [eax + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x18]
        lea ecx, [esp + 0x8]
        call ext_0067B7F0
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [edi + 0x4]
        mov edx, dword ptr [eax + 0xc]
        lea esi, [edi + 0x4]
        push ecx
        mov ecx, esi
        call edx
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0x8]
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_0067DE10
        fld dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, dword ptr [mem_00B40640]
        fstp dword ptr [esp]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_004C5010
        mov ecx, edi
        call ext_004C0340
        pop edi
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x004C5FB0] sub_004C5FB0 (35 bytes)
extern "C" void ext_004C5120();
extern "C" int mem_0093F7B8;

extern "C" void __fastcall fn_004C5FB0(void* self) {
    float v[3];
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = *(float*)&mem_0093F7B8;
    ((void (__thiscall*)(void*, const float*))ext_004C5120)(self, v);
}

// [0x004C6130] sub_004C6130 (279 bytes)
extern "C" void ext_005B68F0();
extern "C" int mem_009453C8;
extern "C" __declspec(naked) void __cdecl fn_004C6130(void* out, void* vec, int arg) {
    __asm {
        sub esp, 0x10
        fldz
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        fst dword ptr [esp + 4]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        fst dword ptr [esi + 8]
        push edi
        fst dword ptr [esi + 4]
        fstp dword ptr [esi]
        mov edi, dword ptr [ebx + 4]
        cmp edi, dword ptr [ebx + 8]
        jbe l1
        call dword ptr [mem_00925134]
        jmp l1
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    l1:
        mov ebp, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], ebp
        jbe l2
        call dword ptr [mem_00925134]
    l2:
        cmp edi, ebp
        _emit 0x0f
        _emit 0x84
        _emit 0x8a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        cmp edi, dword ptr [ebx + 8]
        mov ebp, dword ptr [mem_00925134]
        jb l3
        call ebp
    l3:
        mov ecx, dword ptr [edi]
        call ext_005B68F0
        fstp dword ptr [esp + 0x24]
        cmp edi, dword ptr [ebx + 8]
        jb l4
        call ebp
    l4:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 0x14]
        add ecx, 4
        push edx
        call eax
        fld dword ptr [eax + 0x30]
        fld dword ptr [esp + 0x24]
        add eax, 0x30
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 4]
        fmul st, st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esi]
        fadd dword ptr [esp + 0x14]
        fstp dword ptr [esi]
        fld dword ptr [esi + 4]
        fadd dword ptr [esp + 0x18]
        fstp dword ptr [esi + 4]
        fld dword ptr [esp + 0x1c]
        fadd dword ptr [esi + 8]
        fstp dword ptr [esi + 8]
        cmp edi, dword ptr [ebx + 8]
        fadd dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jb l5
        call ebp
    l5:
        add edi, 4
        _emit 0xe9
        _emit 0x60
        _emit 0xff
        _emit 0xff
        _emit 0xff
        fld dword ptr [esp + 0x10]
        fcom qword ptr [mem_009453C8]
        fnstsw ax
        test ah, 0x41
        jne l6
        fld1
        pop edi
        fdivrp st(1), st
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esi]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esi]
        fld dword ptr [esi + 4]
        fmul st, st(1)
        fstp dword ptr [esi + 4]
        fmul dword ptr [esi + 8]
        fstp dword ptr [esi + 8]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    l6:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x004C1740] sub_004C1740 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE3040;
extern "C" int mem_00AE3024;
extern "C" __declspec(naked) void __fastcall fn_004C1740(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x0088b09e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3040], al
        jne short L_done_004C1740
        or dword ptr [mem_00AE3040], eax
        push 0x00a3a080
        push offset mem_00AE3024
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x009187d0
        call ext_006A6C87
        add esp, 0x0c
    L_done_004C1740:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3024
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x004C73A0] sub_004C73A0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00AE3D80;
extern "C" int mem_00AE3D64;
extern "C" __declspec(naked) void __fastcall fn_004C73A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x0088bc2e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00AE3D80], al
        jne short L_done_004C73A0
        or dword ptr [mem_00AE3D80], eax
        push 0x00a3a6a4
        push offset mem_00AE3D64
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x00918ad0
        call ext_006A6C87
        add esp, 0x0c
    L_done_004C73A0:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00AE3D64
        mov dword ptr fs:[0x0], ecx
        add esp, 0x0c
        ret
    }
}

// [0x004C7270] sub_004C7270 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A3A44C;
extern "C" int mem_00B5CE94;
extern "C" __declspec(naked) void __fastcall fn_004C7270(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A3A44C
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

// [0x004CA3E0] sub_004CA3E0 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A2FBBC;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void __fastcall fn_004CA3E0(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A2FBBC
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

// [0x004C53E0] sub_004C53E0 (372 bytes)
extern "C" int mem_009453D8;
extern "C" int mem_0092A270;
extern "C" __declspec(naked) void __fastcall fn_004C53E0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x1c
        fld dword ptr [esp + 0x28]
        push esi
        fld dword ptr [esp + 0x28]
        mov esi, ecx
        fld dword ptr [esp + 0x30]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        _emit 0xde
        _emit 0xc1
        call ext_006A7250
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fcomp qword ptr [mem_009453D8]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr [esi + 0x10]
        fld dword ptr [eax]
        jp L_4C543A
        mov ecx, dword ptr [esp + 0x24]
        fstp dword ptr [ecx]
        pop esi
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x8]
        add esp, 0x1c
        ret 0x10
    L_4C543A:
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x4]
        lea ecx, [esp + 0x8]
        call ext_0067B7F0
        fld dword ptr [esp + 0x10]
        fld st(0)
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp + 0xc]
        fld st(0)
        fld dword ptr [esp + 0x30]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fmulp st(4), st
        fld dword ptr [esp + 0x28]
        fld st(0)
        fmulp st(6), st
        fxch st(4)
        _emit 0xde
        _emit 0xe5
        fxch st(4)
        fstp dword ptr [esp + 0x18]
        fmulp st(2), st
        fmulp st(2), st
        _emit 0xde
        _emit 0xe1
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x1c]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fmul dword ptr [esi + 0x14]
        fadd qword ptr [mem_0092A270]
        fmul dword ptr [esp + 0x4]
        fstp dword ptr [esp + 0x28]
        fldz
        fld dword ptr [esp + 0x28]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_4C5517
        fstp st(0)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        jmp L_4C5519
    L_4C5517:
        fstp st(1)
    L_4C5519:
        fld dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x24]
        fmul st, st(1)
        pop esi
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x8]
        fmul st, st(1)
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax + 0x8]
        add esp, 0x1c
        ret 0x10
    }
}

// [0x004C6250] sub_004C6250 (260 bytes)
extern "C" void ext_004C53E0();
extern "C" void ext_004C6130();
extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" void ext_005B6780();
extern "C" int mem_00925134;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_004C6250(void* self) {
    __asm {
        sub esp, 0x0c
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_00594000
        lea ebp, [eax + 0x168]
        mov eax, dword ptr [edi + 0x10]
        push ebp
        add eax, 0x30
        push edi
        push eax
        call ext_004C6130
        mov ebx, dword ptr [edi + 0x04]
        add esp, 0x0c
        cmp ebx, dword ptr [edi + 0x08]
        jbe loc_004C6283
        call dword ptr [mem_00925134]
    loc_004C6283:
        mov esi, dword ptr [edi + 0x08]
        fldz
        cmp dword ptr [edi + 0x04], esi
        jbe loc_004C6297
        fstp st(0)
        call dword ptr [mem_00925134]
        fldz
    loc_004C6297:
        cmp ebx, esi
        je loc_004C634A
        cmp ebx, dword ptr [edi + 0x08]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x10]
        jb loc_004C62B6
        call dword ptr [mem_00925134]
    loc_004C62B6:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x04]
        mov esi, dword ptr [edi + 0x10]
        mov edx, dword ptr [edx + 0x14]
        lea ecx, [eax + 0x04]
        mov eax, dword ptr [mem_00B40640]
        push eax
        add esi, 0x30
        call edx
        fld dword ptr [eax + 0x30]
        sub esp, 0x0c
        mov ecx, esp
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [ecx + 0x04]
        fld dword ptr [eax + 0x38]
        lea eax, [esp + 0x1c]
        fstp dword ptr [ecx + 0x08]
        push eax
        fld dword ptr [ecx]
        fsub dword ptr [esi]
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 0x04]
        fsub dword ptr [esi + 0x04]
        fstp dword ptr [ecx + 0x04]
        fld dword ptr [ecx + 0x08]
        fsub dword ptr [esi + 0x08]
        fstp dword ptr [ecx + 0x08]
        mov ecx, edi
        call ext_004C53E0
        cmp ebx, dword ptr [edi + 0x08]
        mov esi, dword ptr [mem_00925134]
        jb loc_004C6316
        call esi
    loc_004C6316:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [ebx]
        call ext_005B6780
        cmp ebx, dword ptr [edi + 0x08]
        jb loc_004C6329
        call esi
    loc_004C6329:
        mov ecx, dword ptr [ebx]
        push ebp
        push 1
        push 0x400
        add ecx, 0x0c
        call ext_00528BF0
        cmp ebx, dword ptr [edi + 0x08]
        jb loc_004C6342
        call esi
    loc_004C6342:
        add ebx, 0x04
        jmp loc_004C6283
    loc_004C634A:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret
    }
}

// [0x004C6F60] sub_004C6F60 (397 bytes)
extern "C" void ext_00403560();
extern "C" void ext_0088BBEC();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" int mem_00945A7C;
extern "C" int mem_00945A64;
extern "C" int mem_00945A5C;

extern "C" __declspec(naked) void __fastcall fn_004C6F60(void* self) {
    __asm {
        push -1
        push offset ext_0088BBEC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x90
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        push offset mem_00945A7C
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0xa8], 1
        call dword ptr [mem_00924FE4]
        mov ebx, eax
        push offset mem_00945A64
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xa8], 2
        call dword ptr [mem_00924FE4]
        mov edi, dword ptr [mem_00924FD0]
        lea ecx, [esp + 0xc8]
        push ecx
        push eax
        lea edx, [esp + 0x34]
        push edx
        mov byte ptr [esp + 0xb0], 3
        call edi
        push ebx
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov byte ptr [esp + 0xbc], 4
        call edi
        lea ecx, [esp + 0xc4]
        push ecx
        push eax
        lea edx, [esp + 0x84]
        push edx
        mov byte ptr [esp + 0xc8], 5
        call edi
        add esp, 0x24
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xa8], 6
        call ext_00403560
        lea ecx, [esp + 0x64]
        mov byte ptr [esp + 0xa4], 8
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xa4], 9
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0xa4], 0xa
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0xa4], 0xb
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x80]
        mov byte ptr [esp + 0xa4], 0xc
        call dword ptr [mem_00924FF4]
        lea eax, [esp + 0xc8]
        push eax
        lea ecx, [esi + 0x28]
        mov dword ptr [esi], offset mem_00945A5C
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0xac]
        push ecx
        lea ecx, [esi + 0x44]
        mov byte ptr [esp + 0xa8], 0xd
        call dword ptr [mem_00924FE0]
        mov byte ptr [esp + 0xa4], 0
        lea ecx, [esp + 0xac]
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc8]
        mov dword ptr [esp + 0xa4], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x9c]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x9c
        ret 0x38
    }
}

// [0x004C0C80] sub_004C0C80 (442 bytes)
extern "C" void ext_00476530();
extern "C" void ext_00476630();
extern "C" void ext_00476AB0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_004C0C80(void* self) {
    __asm {
        push -1
        push 0x88b004
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0xd0
        push ebx
        mov ebx, [esp + 0xf8]
        push ebp
        mov ebp, [esp + 0xf8]
        push esi
        mov esi, [esp + 0xf0]
        push edi
        mov edi, [esp + 0xf0]
        mov [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], 0xffffffff
    loop_top:
        test edi, edi
        je L_bad1
        cmp edi, [esp + 0xf8]
        je L_ok1
    L_bad1:
        call dword ptr [mem_00925134]
    L_ok1:
        cmp esi, [esp + 0xfc]
        je L_exit_path
        test ebp, ebp
        je L_bad2
        cmp ebp, [esp + 0x108]
        je L_ok2
    L_bad2:
        call dword ptr [mem_00925134]
    L_ok2:
        cmp ebx, [esp + 0x10c]
        je L_exit_path
        add dword ptr [esp + 0x10], 1
        test ebp, ebp
        jne L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        cmp ebx, [ebp + 8]
        jb L_ok4
        call dword ptr [mem_00925134]
    L_ok4:
        test edi, edi
        jne L_ok5
        call dword ptr [mem_00925134]
    L_ok5:
        cmp esi, [edi + 8]
        jb L_ok6
        call dword ptr [mem_00925134]
    L_ok6:
        mov eax, [esp + 0x10]
        mov ecx, [esp + 0x110]
        push eax
        push ecx
        mov ecx, [esp + 0x1c]
        push ebx
        push esi
        call ext_00476AB0
        cmp esi, [edi + 8]
        jb L_ok7
        call dword ptr [mem_00925134]
    L_ok7:
        add esi, 0x1c
        cmp ebx, [ebp + 8]
        jb L_ok8
        call dword ptr [mem_00925134]
    L_ok8:
        add ebx, 0x1c
        jmp loop_top
    L_exit_path:
        test edi, edi
        je L_bad3
        cmp edi, [esp + 0xf8]
        je L_ok9
    L_bad3:
        call dword ptr [mem_00925134]
    L_ok9:
        cmp esi, [esp + 0xfc]
        jne L_throw
        test ebp, ebp
        je L_bad4
        cmp ebp, [esp + 0x108]
        je L_ok10
    L_bad4:
        call dword ptr [mem_00925134]
    L_ok10:
        cmp ebx, [esp + 0x10c]
        je L_done
    L_throw:
        mov edx, [esp + 0x110]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        call ext_00476630
        push 0x93c028
        push eax
        lea ecx, [esp + 0x60]
        push ecx
        mov dword ptr [esp + 0xfc], 0
        call dword ptr [mem_00924ECC]
        add esp, 0x14
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0xe8], 2
        call dword ptr [mem_00924FF4]
        push 0x93c008
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x50]
        push edx
        lea eax, [esp + 0x38]
        push eax
        lea ecx, [esp + 0x74]
        mov byte ptr [esp + 0xf0], 3
        call ext_00476530
        push 0x9dfd38
        lea ecx, [esp + 0x70]
        push ecx
        call ext_006A6DD2
    L_done:
        mov ecx, [esp + 0xe0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0xdc
        ret 0x28
    }
}

// [0x004C1B50] sub_004C1B50 (127 bytes)
extern "C" void ext_004C0C80();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_004C1B50(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        push edi
        mov dword ptr [esp + 0x14], ecx
        mov byte ptr [esp + 0x10], 0x0
        jbe L_004C1B74
        call ebx
    L_004C1B74:
        mov eax, dword ptr [esi + 0x4]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x20], eax
        jbe L_004C1B82
        call ebx
    L_004C1B82:
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], eax
        mov dword ptr [esp + 0x1c], eax
        jbe L_004C1B94
        call ebx
    L_004C1B94:
        mov ebx, dword ptr [edi + 0x4]
        cmp ebx, dword ptr [edi + 0x8]
        jbe L_004C1BA2
        call dword ptr [mem_00925134]
    L_004C1BA2:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push ebp
        push esi
        push edx
        push esi
        push eax
        push edi
        push ebx
        push edi
        call ext_004C0C80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

// [0x004C4780] sub_004C4780 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00A3A0E8;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004C4780(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push -1
        push 0x8a3e82
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x88]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x88], 0
        call ext_005A07A0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebp, dword ptr [esi + 4]
        je loc_4c47cc
        cmp edi, esi
        je loc_4c47d2
    loc_4c47cc:
        call dword ptr [mem_00925134]
    loc_4c47d2:
        mov ebx, dword ptr [esp + 0x14]
        cmp ebx, ebp
        jne loc_4c4818
        mov edx, dword ptr [mem_00A3A0E8]
        push edx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x88]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x88], 1
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x38]
        push edx
        call ext_006A6DD2
    loc_4c4818:
        test edi, edi
        jne loc_4c4822
        call dword ptr [mem_00925134]
    loc_4c4822:
        cmp ebx, dword ptr [edi + 4]
        jne loc_4c482d
        call dword ptr [mem_00925134]
    loc_4c482d:
        mov ecx, dword ptr [ebx + 0x28]
        test ecx, ecx
        je loc_4c483c
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    loc_4c483c:
        push ebx
        push edi
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_005AE1B0
        lea ecx, [esp + 0x88]
        mov dword ptr [esp + 0x80], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x74
        ret 0x1c
    }
}

extern "C" void ext_004C4780();
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

// [0x004C4970] sub_004C4970 (65 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C4970(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push edi
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_4c49ab
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push edi
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_004C4780
    loc_4c49ab:
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x004CA2B0] sub_004CA2B0 (36 bytes)
extern "C" void ext_004CA220();
extern "C" void ext_004C97B0();
extern "C" int mem_0093E1B8;
extern "C" int mem_00945F28;
extern "C" __declspec(naked) void __cdecl fn_004CA2B0(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    offset mem_0093E1B8
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004CA220
        push    offset mem_00945F28
        lea     ecx, [esp + 0x4]
        call    ext_004C97B0
        pop     ecx
        ret
    }
}

// [0x004CE540] sub_004CE540 (38 bytes)
extern "C" void ext_004CD940();
extern "C" void ext_004CE420();
extern "C" int mem_0093E1B8;
extern "C" int mem_00A9F788;
extern "C" __declspec(naked) void __cdecl fn_004CE540(void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    offset mem_0093E1B8
        lea     eax, [esp + 0x4]
        push    eax
        call    ext_004CE420
        mov     ecx, dword ptr [mem_00A9F788]
        push    ecx
        lea     ecx, [esp + 0x4]
        call    ext_004CD940
        pop     ecx
        ret
    }
}

extern "C" void ext_0040ECB0();
extern "C" void ext_004C0340();

// [0x004C2760] sub_004C2760 (42 bytes)
extern "C" void __fastcall fn_004C2760(void* self, int edx_unused, int a1) {
    ((void (__thiscall*)(void*, int))ext_0040ECB0)((char*)self + 0x16c, a1);
    (*(void (__thiscall**)(void*))(*(int*)self + 0x16c))(self);
    ((void (__thiscall*)(void*))ext_004C0340)(self);
}

extern "C" void ext_00406940();

// [0x004C28C0] sub_004C28C0 (42 bytes)
extern "C" void __fastcall fn_004C28C0(void* self, int edx_unused, int a1) {
    ((void (__thiscall*)(void*, int))ext_00406940)((char*)self + 0x16c, a1);
    (*(void (__thiscall**)(void*))(*(int*)self + 0x16c))(self);
    ((void (__thiscall*)(void*))ext_004C0340)(self);
}

extern "C" void ext_004C6B10();
extern "C" void ext_00660A50();

// [0x004C6E30] sub_004C6E30 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C6E30(void* self) {
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    0
        lea     eax, [edi + 0x16c]
        push    esi
        push    eax
        call    ext_00660A50
        mov     ecx, eax
        call    ext_004C6B10
        fld     dword ptr [edi + 0x180]
        pop     edi
        fstp    dword ptr [esi + 0x14]
        pop     esi
        ret     4
    }
}

// [0x004C4500] sub_004C4500 (228 bytes)
extern "C" void ext_006404E0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004C4500(void* self) {
    __asm {
        sub esp, 0x0c
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp dword ptr [esi + 0x08], 0
        jne loc_4c4518
        mov eax, 0x00b53b30
        pop esi
        add esp, 0x0c
        ret
    loc_4c4518:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        push ebx
        push ebp
        push edi
        je loc_4c4531
        mov ecx, dword ptr [esp + 0x24]
        push eax
        call ext_006404E0
        mov ebx, eax
        jmp loc_4c4535
    loc_4c4531:
        mov ebx, dword ptr [esp + 0x24]
    loc_4c4535:
        mov eax, dword ptr [esi + 0x04]
        mov edi, dword ptr [eax]
        mov ebp, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_4c4550:
        test esi, esi
        je loc_4c455a
        cmp esi, dword ptr [esp + 0x20]
        je loc_4c4560
    loc_4c455a:
        call dword ptr [mem_00925134]
    loc_4c4560:
        cmp edi, dword ptr [esp + 0x10]
        je loc_4c45da
        test ebp, ebp
        je loc_4c4596
        test esi, esi
        jne loc_4c4574
        call dword ptr [mem_00925134]
    loc_4c4574:
        cmp edi, dword ptr [esi + 0x04]
        jne loc_4c457f
        call dword ptr [mem_00925134]
    loc_4c457f:
        mov edi, dword ptr [edi + 0x28]
        mov esi, dword ptr [edi]
        push ebp
        mov ecx, ebx
        add esi, 0x08
        call ext_006404E0
        push eax
        mov eax, dword ptr [esi]
        mov ecx, edi
        jmp loc_4c45b4
    loc_4c4596:
        test esi, esi
        jne loc_4c45a0
        call dword ptr [mem_00925134]
    loc_4c45a0:
        cmp edi, dword ptr [esi + 0x04]
        jne loc_4c45ab
        call dword ptr [mem_00925134]
    loc_4c45ab:
        mov ecx, dword ptr [edi + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x08]
        push ebx
    loc_4c45b4:
        call eax
        mov ecx, dword ptr [esp + 0x30]
        test ecx, ecx
        je loc_4c45c4
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    loc_4c45c4:
        lea ecx, [esp + 0x14]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        jmp loc_4c4550
    loc_4c45da:
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        pop esi
        add esp, 0x0c
        ret
    }
}

// [0x004C4A00] sub_004C4A00 (59 bytes)
extern "C" void ext_005A0910();
extern "C" void ext_005AE480();
extern "C" __declspec(naked) void __fastcall fn_004C4A00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], 0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 4]
        mov dword ptr [esi + 8], esi
        pop esi
        ret
    }
}
