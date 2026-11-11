// Decompiled translation unit: src/leaf/decompiled_5F0000.cpp

// [0x005F3570] sub_005F3570 (24 bytes)
extern "C" void ext_006798D0();
extern "C" void ext_005F34E0();

extern "C" __declspec(naked) void __fastcall fn_005F3570(void* self) {
    __asm {
        push ecx
        lea eax, [esp]
        push 0x945310
        push eax
        call ext_006798D0
        mov ecx, eax
        call ext_005F34E0
        pop ecx
        ret
    }
}

// [0x005F5BA0] sub_005F5BA0 (25 bytes)
extern "C" void ext_005F5240();
extern "C" void ext_005F5470();

extern "C" __declspec(naked) void __fastcall fn_005F5BA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005F5240
        push eax
        mov ecx, esi
        call ext_005F5470
        pop esi
        ret 4
    }
}

// [0x005F53E0] sub_005F53E0 (44 bytes)
extern "C" void __fastcall fn_005F53E0(void* self, int edx_unused, const float* src) {
    (void)edx_unused;
    char* p = (char*)self;
    *(float*)(p + 0x170) = src[0];
    *(float*)(p + 0x174) = src[1];
    *(float*)(p + 0x178) = src[2];
    char* sub = *(char**)(p + 0x10);
    if (sub) {
        sub[0x4] = 1;
    }
}

// [0x005F5670] sub_005F5670 (44 bytes)
extern "C" int mem_00B40640;

extern "C" void __fastcall fn_005F5670(void* self, int edx_unused, const float* src) {
    (void)edx_unused;
    char* p = (char*)self;
    char* obj = *(char**)(p + 0x4);
    typedef char* (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(obj + 0xc);
    char* dst = fn(p + 0x4, mem_00B40640);
    dst += 0x30;
    *(float*)(dst + 0x0) = src[0];
    *(float*)(dst + 0x4) = src[1];
    *(float*)(dst + 0x8) = src[2];
}

// [0x005FEFD0] sub_005FEFD0 (45 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_005FEFD0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je done
        push edi
        mov edi, dword ptr [esp + 0x18]
    loop_top:
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [edi + 0x1c]
        mov dword ptr [esi + 0x1c], eax
        add esi, 0x20
        cmp esi, ebx
        jne loop_top
        pop edi
    done:
        pop esi
        pop ebx
        ret
    }
}

// [0x005F5470] sub_005F5470 (47 bytes)
extern "C" void ext_005B11D0();

extern "C" void __fastcall fn_005F5470(void* self, int edx_unused, int a1) {
    (void)edx_unused;
    char* p = (char*)self;
    *(int*)(p + 0x210) = a1;
    typedef float* (__thiscall *Fn)(void*, int);
    Fn fn = (Fn)ext_005B11D0;
    float* dst = fn(p + 0x1c0, 2);
    *dst = (float)a1;
    char* q = *(char**)(p + 0x10);
    if (q) {
        q[0x4] = 1;
    }
}

// [0x005F53A0] sub_005F53A0 (49 bytes)
extern "C" void ext_005B11D0();
typedef float* (__thiscall *GetFloatPtrFn5F53A0)(void* self, int idx);

extern "C" void __fastcall fn_005F53A0(char* self, int edx_unused, float value) {
    *(float*)(self + 0x160) = value;
    float* p = ((GetFloatPtrFn5F53A0)ext_005B11D0)(self + 0x1c0, 0);
    *p = *(float*)(self + 0x160);
    char* child = *(char**)(self + 0x10);
    if (child) {
        child[4] = 1;
    }
}

// [0x005F05E0] sub_005F05E0 (52 bytes)
extern "C" void ext_005EF450();
extern "C" __declspec(naked) void __fastcall fn_005F05E0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x96ba3c
        mov dword ptr [ecx + 0x4], 0x96b9f4
        mov dword ptr [ecx + 0x8], 0x96b9b4
        mov dword ptr [ecx + 0xc], 0x96b964
        mov dword ptr [ecx + 0x150], 0x96b950
        mov dword ptr [ecx + 0x154], 0x96b948
        jmp ext_005EF450
    }
}

// [0x005F09E0] sub_005F09E0 (52 bytes)
extern "C" void ext_005EF450();
extern "C" __declspec(naked) void __fastcall fn_005F09E0(void* self) {
    __asm {
        mov dword ptr [ecx], 0x95a52c
        mov dword ptr [ecx + 0x4], 0x95a4e4
        mov dword ptr [ecx + 0x8], 0x95a4a4
        mov dword ptr [ecx + 0xc], 0x95a454
        mov dword ptr [ecx + 0x150], 0x95a440
        mov dword ptr [ecx + 0x154], 0x95a438
        jmp ext_005EF450
    }
}

// [0x005F0F60] sub_005F0F60 (52 bytes)
extern "C" void ext_005EF450();

extern "C" void __fastcall fn_005F0F60(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned int*)(p + 0x00) = 0x0096bc4cu;
    *(unsigned int*)(p + 0x04) = 0x0096bc04u;
    *(unsigned int*)(p + 0x08) = 0x0096bbc4u;
    *(unsigned int*)(p + 0x0c) = 0x0096bb74u;
    *(unsigned int*)(p + 0x150) = 0x0096bb60u;
    *(unsigned int*)(p + 0x154) = 0x0096bb58u;
    ext_005EF450();
}

// [0x005FF040] sub_005FF040 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_005FF040(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x96eaec
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je skip_release
        push eax
        call ext_006A5C5C
        add esp, 4
skip_release:
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [esi + 0xc], 0
        mov dword ptr [esi + 0x10], 0
        mov ecx, esi
        pop esi
        jmp ext_0065F440
    }
}

extern "C" int mem_00B46790;

// [0x005F3A30] sub_005F3A30 (59 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F3A30(void* self, int edx_unused, void* arg) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        test edx, edx
        mov eax, ecx
        je L_nonnull_zero
        push esi
        mov esi, dword ptr [edx + 0x4]
        test esi, esi
        je L_store_zero
        mov ecx, dword ptr [edx + 0x8]
        sub ecx, esi
        sar ecx, 0x2
        jne L_store_arg
L_store_zero:
        xor ecx, ecx
        mov dword ptr [mem_00B46790], ecx
        pop esi
        ret 0x4
L_nonnull_zero:
        mov dword ptr [mem_00B46790], edx
        ret 0x4
L_store_arg:
        mov dword ptr [mem_00B46790], edx
        pop esi
        ret 0x4
    }
}

// [0x005F5240] sub_005F5240 (64 bytes)
// Linear search over 6 entries (stride 0x1c) starting at 0x00B46F80, comparing each
// with the std::string argument via the imported basic_string operator==.
// Returns the index of the first match, or 0 if none matched.
extern "C" int mem_00924FC4;
extern "C" __declspec(naked) int __stdcall fn_005F5240(const void* name) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [mem_00924FC4]
        push esi
        push edi
        xor edi, edi
        mov esi, 0xb46f80
loop_top:
        push ebx
        push esi
        call ebp
        add esp, 0x8
        test al, al
        jne found
        add esi, 0x1c
        add edi, 0x1
        cmp esi, 0xb47028
        jl loop_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x005FF240] sub_005FF240 (65 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF240(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008A6088
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x10], ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x28], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax], 0x0096F154
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005F51D0] sub_005F51D0 (69 bytes)
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005F51D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        mov byte ptr [esi + 0x20c], al
        je done
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [mem_00B40640]
        push edi
        push eax
        mov eax, dword ptr [edx + 0x30]
        push 0x1000
        call eax
        movzx eax, byte ptr [esi + 0x20c]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push eax
        push 0x1000
        call edx
        pop edi
    done:
        pop esi
        ret 4
    }
}

// [0x005F5350] sub_005F5350 (74 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_005F5350(void* self, int edx_unused, const void* src) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je zero_src
        lea eax, [edi + 0x4]
        jmp load_byte
    zero_src:
        xor eax, eax
    load_byte:
        mov al, byte ptr [eax]
        mov byte ptr [esi + 0x4], al
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esi + 0x8]
        lea ecx, [edi + 0x18]
        fld dword ptr [edi + 0xc]
        push ecx
        fstp dword ptr [esi + 0xc]
        lea ecx, [esi + 0x18]
        fld dword ptr [edi + 0x10]
        fstp dword ptr [esi + 0x10]
        fld dword ptr [edi + 0x14]
        fstp dword ptr [esi + 0x14]
        call dword ptr [mem_00924FDC]
        mov dl, byte ptr [edi + 0x34]
        pop edi
        mov byte ptr [esi + 0x34], dl
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x005F5410] sub_005F5410 (81 bytes)
extern "C" int mem_00B46878;
extern "C" float mem_00B4686C;
extern "C" float mem_00B46870;
extern "C" float mem_00B46874;

extern "C" __declspec(naked) void __fastcall fn_005F5410(void* self) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00B46878], al
        jne skip_init
        fldz
        or dword ptr [mem_00B46878], eax
        fst dword ptr [mem_00B46874]
        fst dword ptr [mem_00B46870]
        fstp dword ptr [mem_00B4686C]
    skip_init:
        fld dword ptr [ecx + 0x170]
        mov eax, offset mem_00B4686C
        fstp dword ptr [mem_00B4686C]
        fld dword ptr [ecx + 0x174]
        fstp dword ptr [mem_00B46870]
        fld dword ptr [ecx + 0x178]
        fstp dword ptr [mem_00B46874]
        ret
    }
}

// [0x005F3730] sub_005F3730 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B467F0;
extern "C" int mem_00B467EC;

extern "C" __declspec(naked) void* __fastcall fn_005F3730(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a6f4e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B467F0], al
        jne L_done
        or dword ptr [mem_00B467F0], eax
        mov ecx, offset mem_00B467EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B467EC], 0x96be94
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B467EC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F3790] sub_005F3790 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B467F8;
extern "C" int mem_00B467F4;

extern "C" __declspec(naked) void* __fastcall fn_005F3790(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a6f6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B467F8], al
        jne L_done
        or dword ptr [mem_00B467F8], eax
        mov ecx, offset mem_00B467F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B467F4], 0x96bf6c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B467F4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F37F0] sub_005F37F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46800;
extern "C" int mem_00B467FC;

extern "C" __declspec(naked) void* __fastcall fn_005F37F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a6f8e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B46800], al
        jne L_done
        or dword ptr [mem_00B46800], eax
        mov ecx, offset mem_00B467FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B467FC], 0x96c044
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B467FC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F3850] sub_005F3850 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46808;
extern "C" int mem_00B46804;

extern "C" __declspec(naked) void* __fastcall fn_005F3850(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a6fae
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B46808], al
        jne L_done
        or dword ptr [mem_00B46808], eax
        mov ecx, offset mem_00B46804
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B46804], 0x96c11c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B46804
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F38B0] sub_005F38B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46810;
extern "C" int mem_00B4680C;

extern "C" __declspec(naked) void* __fastcall fn_005F38B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a6fce
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B46810], al
        jne L_done
        or dword ptr [mem_00B46810], eax
        mov ecx, offset mem_00B4680C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4680C], 0x96c1f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4680C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F3910] sub_005F3910 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46818;
extern "C" int mem_00B46814;

extern "C" __declspec(naked) void* __fastcall fn_005F3910(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a6fee
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B46818], al
        jne L_done
        or dword ptr [mem_00B46818], eax
        mov ecx, offset mem_00B46814
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B46814], 0x96c2cc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B46814
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F3970] sub_005F3970 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46820;
extern "C" int mem_00B4681C;

extern "C" __declspec(naked) void* __fastcall fn_005F3970(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a700e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B46820], al
        jne L_done
        or dword ptr [mem_00B46820], eax
        mov ecx, offset mem_00B4681C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4681C], 0x96c3a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4681C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005F39D0] sub_005F39D0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46828;
extern "C" int mem_00B46824;

extern "C" __declspec(naked) void* __fastcall fn_005F39D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a702e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B46828], al
        jne L_done
        or dword ptr [mem_00B46828], eax
        mov ecx, offset mem_00B46824
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B46824], 0x96c47c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B46824
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FD090] sub_005FD090 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4702C;
extern "C" int mem_00B47028;

extern "C" __declspec(naked) void* __fastcall fn_005FD090(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a797e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4702C], al
        jne L_done
        or dword ptr [mem_00B4702C], eax
        mov ecx, offset mem_00B47028
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47028], 0x96e5dc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47028
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FD0F0] sub_005FD0F0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47034;
extern "C" int mem_00B47030;

extern "C" __declspec(naked) void* __fastcall fn_005FD0F0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a799e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47034], al
        jne L_done
        or dword ptr [mem_00B47034], eax
        mov ecx, offset mem_00B47030
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47030], 0x96e6b4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47030
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FD150] sub_005FD150 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4703C;
extern "C" int mem_00B47038;

extern "C" __declspec(naked) void* __fastcall fn_005FD150(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a79be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4703C], al
        jne L_done
        or dword ptr [mem_00B4703C], eax
        mov ecx, offset mem_00B47038
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47038], 0x96e78c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47038
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FD1B0] sub_005FD1B0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B47044;
extern "C" int mem_00B47040;

extern "C" __declspec(naked) void* __fastcall fn_005FD1B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a79de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47044], al
        jne L_done
        or dword ptr [mem_00B47044], eax
        mov ecx, offset mem_00B47040
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47040], 0x96e864
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47040
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FD210] sub_005FD210 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4704C;
extern "C" int mem_00B47048;

extern "C" __declspec(naked) void* __fastcall fn_005FD210(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a79fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4704C], al
        jne L_done
        or dword ptr [mem_00B4704C], eax
        mov ecx, offset mem_00B47048
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47048], 0x96e93c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47048
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FD270] sub_005FD270 (87 bytes)
extern "C" int mem_00B47054;
extern "C" int mem_00B47050;

extern "C" __declspec(naked) void* __fastcall fn_005FD270(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7a1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47054], al
        jne L_done
        or dword ptr [mem_00B47054], eax
        mov ecx, offset mem_00B47050
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B47050], 0x96ea14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47050
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FF080] sub_005FF080 (93 bytes)
extern "C" double mem_00993828;

extern "C" double __cdecl fn_005FF080(double a, double b, double c, double d, double e) {
    if (e >= b) {
        return d;
    }
    if (a >= e) {
        return c;
    }
    double s = (d - c) / (b - a);
    double x = e - (b + a) * mem_00993828;
    return x * s + mem_00993828 * (c + d);
}

// [0x005F3E70] sub_005F3E70 (109 bytes)
extern "C" void ext_004AB940();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __cdecl fn_005F3E70(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) {
    __asm {
        mov ecx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push 0
        push ecx
        push ebp
        push ebx
        push eax
        mov dword ptr [esp + 0x2c], eax
        call ext_004AB940
        add esp, 0x14
        test esi, esi
        mov edi, eax
        je L_005F3EA6
        cmp esi, dword ptr [esp + 0x1c]
        je L_005F3EAC
    L_005F3EA6:
        call dword ptr [mem_00925134]
    L_005F3EAC:
        cmp edi, ebx
        je L_005F3ED6
        test esi, esi
        jne L_005F3EBA
        call dword ptr [mem_00925134]
    L_005F3EBA:
        cmp edi, dword ptr [esi + 0x8]
        jb L_005F3EC5
        call dword ptr [mem_00925134]
    L_005F3EC5:
        mov edx, dword ptr [ebp]
        cmp edx, dword ptr [edi]
        jb L_005F3ED6
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret
    L_005F3ED6:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    }
}

// [0x005FF290] sub_005FF290 (112 bytes)
// SEH-framed `new` + construct: allocates 0x40 bytes via 0x006A5C62, then (if non-null) calls the
// base ctor 0x00627240 with the 4 stack args (ret 0 => caller cleans), sets vtable 0x96EB5C, returns block.
extern "C" void ext_006A5C62();
extern "C" void ext_00627240();
extern "C" void ext_00629370();

extern "C" __declspec(naked) void __fastcall fn_005FF290(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF290
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96EB5Ch
        mov eax, esi
    done_5FF290:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF300] sub_005FF300 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF300(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF300
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96EBCCh
        mov eax, esi
    done_5FF300:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF370] sub_005FF370 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF370(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF370
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96EC3Ch
        mov eax, esi
    done_5FF370:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF3E0] sub_005FF3E0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF3E0(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF3E0
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96ECACh
        mov eax, esi
    done_5FF3E0:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF450] sub_005FF450 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF450(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF450
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96ED1Ch
        mov eax, esi
    done_5FF450:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF4C0] sub_005FF4C0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF4C0(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF4C0
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96ED8Ch
        mov eax, esi
    done_5FF4C0:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF530] sub_005FF530 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF530(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF530
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00629370
        mov dword ptr [esi], 96EDFCh
        mov eax, esi
    done_5FF530:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF5A0] sub_005FF5A0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF5A0(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF5A0
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00629370
        mov dword ptr [esi], 96EE6Ch
        mov eax, esi
    done_5FF5A0:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF920] sub_005FF920 (112 bytes)
extern "C" void ext_006271A0();
extern "C" __declspec(naked) void __fastcall fn_005FF920(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF920
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_006271A0
        mov dword ptr [esi], 96F1C4h
        mov eax, esi
    done_5FF920:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF990] sub_005FF990 (112 bytes)
extern "C" void ext_006271A0();
extern "C" __declspec(naked) void __fastcall fn_005FF990(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF990
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_006271A0
        mov dword ptr [esi], 96F234h
        mov eax, esi
    done_5FF990:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FFA00] sub_005FFA00 (112 bytes)
extern "C" void ext_00627240();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FFA00(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FFA00
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00627240
        mov dword ptr [esi], 96F2A4h
        mov eax, esi
    done_5FFA00:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FFA70] sub_005FFA70 (112 bytes)
extern "C" void ext_00629370();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FFA70(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FFA70
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00629370
        mov dword ptr [esi], 96F314h
        mov eax, esi
    done_5FFA70:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FFC40] sub_005FFC40 (112 bytes)
extern "C" void ext_006271A0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FFC40(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 40h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FFC40
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_006271A0
        mov dword ptr [esi], 96F3FCh
        mov eax, esi
    done_5FFC40:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF790] sub_005FF790 (115 bytes)
extern "C" void ext_00629AA0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FF790(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 80h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF790
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00629AA0
        mov dword ptr [esi], 96F074h
        mov eax, esi
    done_5FF790:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF810] sub_005FF810 (115 bytes)
extern "C" void ext_00629AA0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FF810(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 80h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF810
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00629AA0
        mov dword ptr [esi], 96F0E4h
        mov eax, esi
    done_5FF810:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FFAE0] sub_005FFAE0 (115 bytes)
extern "C" void ext_00629AA0();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FFAE0(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 80h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FFAE0
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 1Ch]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [eax + 8], ecx
        mov ecx, esi
        mov dword ptr [eax + 0Ch], edx
        call ext_00629AA0
        mov dword ptr [esi], 96F384h
        mov eax, esi
    done_5FFAE0:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FC090] sub_005FC090 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls the
// thiscall ctor fn_006271A0 (ret 0x10) on the new object. Returns the ctor's eax (this),
// or NULL if the allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_006271A0();

extern "C" __declspec(naked) void __fastcall fn_005FC090(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC090
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_006271A0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC090:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC110] sub_005FC110 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00627240 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00627240();

extern "C" __declspec(naked) void __fastcall fn_005FC110(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC110
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00627240
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC110:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC310] sub_005FC310 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00629370 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00629370();

extern "C" __declspec(naked) void __fastcall fn_005FC310(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC310
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00629370
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC310:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC390] sub_005FC390 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_006293A0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_006293A0();

extern "C" __declspec(naked) void __fastcall fn_005FC390(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC390
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_006293A0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC390:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC410] sub_005FC410 (118 bytes)
// Allocates 0x38 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_006294D0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_006294D0();

extern "C" __declspec(naked) void __fastcall fn_005FC410(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 38h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC410
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_006294D0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC410:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC510] sub_005FC510 (118 bytes)
// Allocates 0x38 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00624E50 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00624E50();

extern "C" __declspec(naked) void __fastcall fn_005FC510(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 38h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC510
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00624E50
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC510:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC590] sub_005FC590 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00624EA0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00624EA0();

extern "C" __declspec(naked) void __fastcall fn_005FC590(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC590
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00624EA0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC590:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC610] sub_005FC610 (118 bytes)
// Allocates 0x58 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_006296D0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_006296D0();

extern "C" __declspec(naked) void __fastcall fn_005FC610(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 58h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC610
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_006296D0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC610:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC690] sub_005FC690 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_006296A0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006296A0();

extern "C" __declspec(naked) void __fastcall fn_005FC690(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC690
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_006296A0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC690:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC710] sub_005FC710 (118 bytes)
// Allocates 0x78 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00629850 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00629850();

extern "C" __declspec(naked) void __fastcall fn_005FC710(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 78h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC710
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00629850
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC710:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC810] sub_005FC810 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00629D00 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00629D00();

extern "C" __declspec(naked) void __fastcall fn_005FC810(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC810
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00629D00
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC810:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC890] sub_005FC890 (118 bytes)
// Allocates 0x38 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00629E20 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00629E20();

extern "C" __declspec(naked) void __fastcall fn_005FC890(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 38h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC890
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_00629E20
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC890:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC910] sub_005FC910 (118 bytes)
// Allocates 0x40 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_0062A0C0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_0062A0C0();

extern "C" __declspec(naked) void __fastcall fn_005FC910(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 40h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC910
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_0062A0C0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC910:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FCA10] sub_005FCA10 (118 bytes)
// Allocates 0x50 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_0062C4D0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_0062C4D0();

extern "C" __declspec(naked) void __fastcall fn_005FCA10(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 50h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FCA10
        mov ecx, dword ptr [esp + 14h]
        sub esp, 10h
        mov edx, esp
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [esp + 28h]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, eax
        call ext_0062C4D0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FCA10:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}
