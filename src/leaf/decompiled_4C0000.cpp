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
