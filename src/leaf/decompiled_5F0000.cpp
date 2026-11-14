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

// [0x005FCA90] sub_005FCA90 (118 bytes)
// Allocates 0x50 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_0062C510 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_0062C510();

extern "C" __declspec(naked) void __fastcall fn_005FCA90(void* self) {
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
        je null_path_5FCA90
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
        call ext_0062C510
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FCA90:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FF610] sub_005FF610 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF610(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 78h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF610
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
        call ext_00629850
        mov dword ptr [esi], 96EEF4h
        mov dword ptr [esi + 30h], 96EEDCh
        mov eax, esi
    done_5FF610:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF690] sub_005FF690 (119 bytes)
extern "C" void ext_00629850();
extern "C" __declspec(naked) void __fastcall fn_005FF690(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 78h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF690
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
        call ext_00629850
        mov dword ptr [esi], 96EF7Ch
        mov dword ptr [esi + 30h], 96EF64h
        mov eax, esi
    done_5FF690:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FF710] sub_005FF710 (119 bytes)
extern "C" void ext_00629850();
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void __fastcall fn_005FF710(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 78h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr [esp + 10h], eax
        je done_5FF710
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
        call ext_00629850
        mov dword ptr [esi], 96F004h
        mov dword ptr [esi + 30h], 96EFECh
        mov eax, esi
    done_5FF710:
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 10h
        ret
    }
}

// [0x005FC790] sub_005FC790 (121 bytes)
// Allocates 0x80 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_00629AA0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_00629AA0();

extern "C" __declspec(naked) void __fastcall fn_005FC790(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 80h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC790
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
        call ext_00629AA0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC790:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005FC190] sub_005FC190 (121 bytes)
// Allocates 0xa0 bytes via ext_006A5C62 (operator new), wraps the body in an MSVC SEH frame
// (state -1, __ehhandler 0x8A7A5B), copies 4 stack args into a 16-byte block and calls
// sub_006273B0 on the new object. Returns the new object's eax, or NULL if allocation failed.
extern "C" void ext_006A5C62();
extern "C" void ext_006273B0();

extern "C" __declspec(naked) void __fastcall fn_005FC190(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0A0h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC190
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
        call ext_006273B0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC190:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005F5BC0] sub_005F5BC0 (79 bytes)
extern "C" void ext_00480430();
extern "C" void ext_004C5010();
extern "C" int mem_00B40640;

typedef void (__thiscall *Sub5F5BC0_TargetFn1)(void* self);
typedef void (__thiscall *Sub5F5BC0_TargetFn2)(void* self, float val);
typedef void* (__thiscall *Sub5F5BC0_SubFn)(void* self, int key);

extern "C" void __fastcall fn_005F5BC0(void* self, int edx_unused, float val) {
    (void)edx_unused;
    char* p = (char*)self;
    *(float*)(p + 0x164) = val;
    void* sub = p + 4;
    ((Sub5F5BC0_TargetFn1)ext_00480430)(((Sub5F5BC0_SubFn)(*(void***)sub)[3])(sub, mem_00B40640));
    ((Sub5F5BC0_TargetFn2)ext_004C5010)(((Sub5F5BC0_SubFn)(*(void***)sub)[3])(sub, mem_00B40640), *(float*)(p + 0x164));
}

// [0x005FC210] sub_005FC210 (121 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00627970();

extern "C" __declspec(naked) void __fastcall fn_005FC210(void* self) {
    __asm {
        push -1
        push 8A7A5Bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 88h
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0ch], 0
        je null_path_5FC210
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
        call ext_00627970
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC210:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005F4480] sub_005F4480 (236 bytes)
extern "C" void ext_005F3E70();
extern "C" int mem_00925134;
extern "C" int mem_00B46790;

extern "C" __declspec(naked) void __fastcall fn_005F4480(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        jbe L_5F44DE
        call ebx
    L_5F44DE:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F44F0
        call ebx
    L_5F44F0:
        test esi, esi
        je L_5F44F8
        cmp esi, esi
        je L_5F44FA
    L_5F44F8:
        call ebx
    L_5F44FA:
        cmp edi, ebp
        je L_5F45C2
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F456D
        test esi, esi
        jne L_5F4516
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4516:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4522
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F4522:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F4538
        call dword ptr [mem_00925134]
    L_5F4538:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F4545
        call dword ptr [mem_00925134]
    L_5F4545:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F458B
    L_5F456D:
        test esi, esi
        jne L_5F4573
        call ebx
    L_5F4573:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F457A
        call ebx
    L_5F457A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x64]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F458B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4592
        call ebx
    L_5F4592:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F44F0
    L_5F45C2:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005F4570] sub_005F4570 (236 bytes)
extern "C" void ext_005F3E70();
extern "C" int mem_00925134;
extern "C" int mem_00B46790;

extern "C" __declspec(naked) void __fastcall fn_005F4570(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        jbe L_5F458E
        call ebx
    L_5F458E:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F45A0
        call ebx
    L_5F45A0:
        test esi, esi
        je L_5F45A8
        cmp esi, esi
        je L_5F45AA
    L_5F45A8:
        call ebx
    L_5F45AA:
        cmp edi, ebp
        je L_5F4652
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F461D
        test esi, esi
        jne L_5F45C6
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F45C6:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F45D2
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F45D2:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F45E8
        call dword ptr [mem_00925134]
    L_5F45E8:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F45F5
        call dword ptr [mem_00925134]
    L_5F45F5:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F463B
    L_5F461D:
        test esi, esi
        jne L_5F4623
        call ebx
    L_5F4623:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F462A
        call ebx
    L_5F462A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x68]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F463B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4642
        call ebx
    L_5F4642:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F45A0
    L_5F4652:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005F4660] sub_005F4660 (236 bytes)
extern "C" void ext_005F3E70();
extern "C" int mem_00925134;
extern "C" int mem_00B46790;

extern "C" __declspec(naked) void __fastcall fn_005F4660(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        jbe L_5F467E
        call ebx
    L_5F467E:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F4690
        call ebx
    L_5F4690:
        test esi, esi
        je L_5F4698
        cmp esi, esi
        je L_5F469A
    L_5F4698:
        call ebx
    L_5F469A:
        cmp edi, ebp
        je L_5F4742
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F470D
        test esi, esi
        jne L_5F46B6
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F46B6:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F46C2
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F46C2:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F46D8
        call dword ptr [mem_00925134]
    L_5F46D8:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F46E5
        call dword ptr [mem_00925134]
    L_5F46E5:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F472B
    L_5F470D:
        test esi, esi
        jne L_5F4713
        call ebx
    L_5F4713:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F471A
        call ebx
    L_5F471A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x6c]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F472B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4732
        call ebx
    L_5F4732:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F4690
    L_5F4742:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005F4750] sub_005F4750 (236 bytes)
extern "C" void ext_005F3E70();
extern "C" int mem_00925134;
extern "C" int mem_00B46790;

extern "C" __declspec(naked) void __fastcall fn_005F4750(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push ebp
        push esi
        lea esi, [ecx + 0x2c]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        jbe L_5F476E
        call ebx
    L_5F476E:
        mov ebp, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebp
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x14], ebp
        jbe L_5F4780
        call ebx
    L_5F4780:
        test esi, esi
        je L_5F4788
        cmp esi, esi
        je L_5F478A
    L_5F4788:
        call ebx
    L_5F478A:
        cmp edi, ebp
        je L_5F4832
        mov eax, dword ptr [mem_00B46790]
        test eax, eax
        je L_5F47FD
        test esi, esi
        jne L_5F47A6
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F47A6:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F47B2
        call ebx
        mov eax, dword ptr [mem_00B46790]
    L_5F47B2:
        mov ebx, dword ptr [eax + 0x8]
        cmp dword ptr [eax + 0x4], ebx
        lea edi, [eax + 0x8]
        lea ebp, [eax + 0x4]
        mov esi, eax
        jbe L_5F47C8
        call dword ptr [mem_00925134]
    L_5F47C8:
        mov ebp, dword ptr [ebp]
        cmp ebp, dword ptr [edi]
        jbe L_5F47D5
        call dword ptr [mem_00925134]
    L_5F47D5:
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        push ebx
        push esi
        push ebp
        push esi
        call ext_005F3E70
        mov esi, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x34]
        mov ebx, dword ptr [mem_00925134]
        add esp, 0x18
        test al, al
        je L_5F481B
    L_5F47FD:
        test esi, esi
        jne L_5F4803
        call ebx
    L_5F4803:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F480A
        call ebx
    L_5F480A:
        mov ecx, dword ptr [edi]
        fld dword ptr [esp + 0x24]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x70]
        push ecx
        fstp dword ptr [esp]
        call eax
    L_5F481B:
        cmp edi, dword ptr [esi + 0x8]
        jb L_5F4822
        call ebx
    L_5F4822:
        mov ebp, dword ptr [esp + 0x14]
        add edi, 4
        mov dword ptr [esp + 0x1c], edi
        jmp L_5F4780
    L_5F4832:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005F9B90] sub_005F9B90 (260 bytes)
extern "C" void ext_00493E50();
extern "C" void ext_00528B90();
extern "C" void ext_00584C00();
extern "C" void ext_00594000();
extern "C" void ext_005F51D0();
extern "C" void ext_00661AA0();
extern "C" int mem_00B40640;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005F9B90(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88d648
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        cmp dword ptr [mem_00B40640], 0
        mov ebp, eax
        je L_5F9C01
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [eax + 0x1c]
        lea edi, [esi + 4]
        mov ecx, edi
        call edx
        test al, al
        jne L_5F9BDD
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x3c]
        push ecx
        mov ecx, edi
        call edx
    L_5F9BDD:
        cmp dword ptr [esi + 0x1a0], 0x7fffffff
        jne L_5F9C01
        mov ecx, dword ptr [mem_00B40640]
        lea eax, [esi + 0x158]
        push eax
        call ext_00661AA0
        mov dword ptr [esi + 0x1a0], eax
    L_5F9C01:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        lea ebx, [esi + 0x1c0]
        call eax
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esi + 0xe8]
        push eax
        push ecx
        push edx
        push ebx
        lea ecx, [ebp + 0x258]
        call ext_00493E50
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [edi + 0x20], ebx
        lea eax, [esi + 0x168]
        mov dword ptr [edi + 0x24], eax
        mov ebx, dword ptr [edi]
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0
        add ebx, 4
        call ext_00584C00
        mov edx, dword ptr [ebx]
        mov ecx, edi
        push eax
        call edx
        push edi
        lea ecx, [esi + 0xc]
        call ext_00528B90
        mov al, byte ptr [esi + 0x20c]
        mov byte ptr [esp + 0x24], al
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        mov ecx, esi
        call ext_005F51D0
        mov ecx, dword ptr [esp + 0x14]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005F59B0] sub_005F59B0 (205 bytes)
extern "C" void ext_0067DE10();
extern "C" void ext_006A7250();
extern "C" double mem_00A91848;

extern "C" __declspec(naked) void __fastcall fn_005F59B0(void* self, int edx_unused, void* arg0) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x4]
        mov esi, ecx
        fld dword ptr [edi]
        fld dword ptr [edi + 0x8]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld qword ptr [mem_00A91848]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne loc_5F5A3E
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0xc]
        lea ecx, [esi + 0x4]
        push edx
        call eax
        fld1
        fst dword ptr [eax]
        pop edi
        fldz
        pop esi
        fst dword ptr [eax + 0x4]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fst dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x30]
        fst dword ptr [eax + 0x34]
        fstp dword ptr [eax + 0x38]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x3c]
        ret 0x4

    loc_5F5A3E:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 0xc]
        add esi, 0x4
        push eax
        mov ecx, esi
        call edx
        fld dword ptr [edi]
        fstp dword ptr [eax]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [eax + 0x8]
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        call ext_0067DE10
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005F9A70] sub_005F9A70 (284 bytes)
extern "C" void ext_00401D20();
extern "C" void ext_00532770();
extern "C" void ext_00594000();
extern "C" void ext_005B1870();
extern "C" void ext_0065C660();
extern "C" void ext_00661AC0();
extern "C" void ext_00661AD0();
extern "C" void ext_006622F0();
extern "C" int mem_00B40640;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F9A70(void* self) {
    __asm {
        push -1
        push 0x8a73ac
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ebx, [esi + 0x154]
        lea edi, [esi + 0x15c]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esi], 0x96e48c
        mov dword ptr [esi + 4], 0x96e444
        mov dword ptr [esi + 8], 0x96e404
        mov dword ptr [esi + 0xc], 0x96e3b4
        mov dword ptr [esi + 0x150], 0x96e3a0
        mov dword ptr [ebx], 0x96e374
        mov dword ptr [esi + 0x158], 0x96e368
        mov dword ptr [edi], 0x96e360
        mov dword ptr [esp + 0x1c], 4
        call ext_00594000
        test eax, eax
        je L_5F9AFA
        call ext_00594000
        push edi
        lea ecx, [eax + 0x1c8]
        call ext_006622F0
    L_5F9AFA:
        mov ecx, dword ptr [mem_00B40640]
        test ecx, ecx
        je L_5F9B1B
        mov eax, dword ptr [esi + 0xe8]
        cmp eax, -1
        jae L_5F9B1B
        push eax
        call ext_00661AC0
        mov ecx, dword ptr [mem_00B40640]
    L_5F9B1B:
        mov eax, dword ptr [esi + 0x1a0]
        cmp eax, 0x7fffffff
        je L_5F9B2E
        push eax
        call ext_00661AD0
    L_5F9B2E:
        lea ecx, [esi + 0x1c0]
        mov byte ptr [esp + 0x1c], 3
        call ext_005B1870
        lea ecx, [esi + 0x1a4]
        mov byte ptr [esp + 0x1c], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x168]
        mov byte ptr [esp + 0x1c], 1
        call ext_00532770
        mov ecx, ebx
        mov byte ptr [esp + 0x1c], 0
        call ext_0065C660
        mov ecx, esi
        mov dword ptr [esp + 0x1c], -1
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x005FD2D0] sub_005FD2D0 (95 bytes)
extern "C" void ext_0066AD10();
extern "C" void ext_006A6C87();
extern "C" int mem_00B47074;
extern "C" int mem_00B47058;

extern "C" __declspec(naked) void __fastcall fn_005FD2D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a7a3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B47074], al
        jne skip_init
        or dword ptr [mem_00B47074], eax
        push 0xa92ec0
        push offset mem_00B47058
        mov dword ptr [esp + 0x10], 0x0
        call ext_0066AD10
        push 0x91e6b0
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B47058
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FC050] sub_005FC050 (60 bytes)
extern "C" void ext_0066AC90();
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00A92CB4;
extern "C" int mem_00B5CE94;

extern "C" __declspec(naked) void* __fastcall fn_005FC050(void* self) {
    __asm {
        push ecx
        push esi
        push offset mem_00B5CE94
        mov ecx, offset mem_00A92CB4
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

// [0x005FC290] sub_005FC290 (118 bytes)
extern "C" void ext_006291D0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005FC290(void* self) {
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
        je null_path_5FC290
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
        call ext_006291D0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC290:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005F56E0] sub_005F56E0 (32 bytes)
extern "C" void ext_0067E560();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005F56E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, [esp + 4]
        mov edx, [ecx + 4]
        mov edx, [edx + 0xc]
        add ecx, 4
        push eax
        mov eax, [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E560
        ret 4
    }
}

// [0x005F57F0] sub_005F57F0 (99 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694840();
extern "C" int mem_00B40640;

struct Matrix3_005F57F0 {
    float m[9];
};

extern "C" void* __fastcall fn_005F57F0(void* self) {
    void* vtable_ptr = *(void**)((char*)self + 4);
    void* (__thiscall *fn)(void*, int) = ((void* (__thiscall**)(void*, int))vtable_ptr)[2];
    void* obj = fn((char*)self + 4, mem_00B40640);
    Matrix3_005F57F0 m;
    m.m[2] = 0.0f;
    m.m[1] = 0.0f;
    m.m[5] = 0.0f;
    m.m[3] = 0.0f;
    m.m[7] = 0.0f;
    m.m[6] = 0.0f;
    m.m[0] = 1.0f;
    m.m[4] = 1.0f;
    m.m[8] = 1.0f;
    ((void (__thiscall*)(void*, Matrix3_005F57F0*))ext_0067DAD0)(obj, &m);
    void* res = (char*)self + 0x214;
    ((void (__thiscall*)(Matrix3_005F57F0*, void*))ext_00694840)(&m, res);
    return res;
}

// [0x005F5860] sub_005F5860 (99 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694880();
extern "C" int mem_00B40640;

struct Matrix3_005F5860 {
    float m[9];
};

extern "C" void* __fastcall fn_005F5860(void* self) {
    void* vtable_ptr = *(void**)((char*)self + 4);
    void* (__thiscall *fn)(void*, int) = ((void* (__thiscall**)(void*, int))vtable_ptr)[2];
    void* obj = fn((char*)self + 4, mem_00B40640);
    Matrix3_005F5860 m;
    m.m[2] = 0.0f;
    m.m[1] = 0.0f;
    m.m[5] = 0.0f;
    m.m[3] = 0.0f;
    m.m[7] = 0.0f;
    m.m[6] = 0.0f;
    m.m[0] = 1.0f;
    m.m[4] = 1.0f;
    m.m[8] = 1.0f;
    ((void (__thiscall*)(void*, Matrix3_005F5860*))ext_0067DAD0)(obj, &m);
    void* res = (char*)self + 0x214;
    ((void (__thiscall*)(Matrix3_005F5860*, void*))ext_00694880)(&m, res);
    return res;
}

// [0x005F5160] sub_005F5160 (38 bytes)
extern "C" void ext_006944D0();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void* __fastcall fn_005F5160(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B40640]
        mov eax, ecx
        lea ecx, [eax + 0x4]
        push esi
        lea esi, [eax + 0x220]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        push edx
        call eax
        push eax
        mov ecx, esi
        call ext_006944D0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x005F54A0] sub_005F54A0 (456 bytes)
extern "C" void ext_005B11D0();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FC0;
extern "C" int mem_00955998;
extern "C" int mem_00993858;
extern "C" int mem_0093C188;
extern "C" int mem_00965D08;
extern "C" int mem_0096CD10;
extern "C" int mem_0096CCFC;
extern "C" int mem_009518D8;
extern "C" int mem_009518E0;
extern "C" int mem_0096CCEC;

extern "C" __declspec(naked) void __fastcall fn_005F54A0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x1a4]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov ebx, dword ptr [mem_00924FC0]
        push 0x96cd5c
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f54e1
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fldz
        jmp L_5f5655
    L_5f54e1:
        push 0x96cd4c
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f5504
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld1
        jmp L_5f5655
    L_5f5504:
        push 0x96cd3c
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f552b
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_00955998]
        jmp L_5f5655
    L_5f552b:
        push 0x96cd2c
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f5552
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_00993858]
        jmp L_5f5655
    L_5f5552:
        push 0x96cd24
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f5579
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_0093C188]
        jmp L_5f5655
    L_5f5579:
        push 0x96cd14
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f55a0
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_00965D08]
        jmp L_5f5655
    L_5f55a0:
        push 0x960900
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f55c7
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_0096CD10]
        jmp L_5f5655
    L_5f55c7:
        push 0x96cd00
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f55eb
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_0096CCFC]
        jmp L_5f5655
    L_5f55eb:
        push 0x96ccf4
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f560f
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_009518D8]
        jmp L_5f5655
    L_5f560f:
        push 0x960910
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f5633
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_009518E0]
        jmp L_5f5655
    L_5f5633:
        push 0x96ccf0
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je L_5f5657
        push 0x1
        lea ecx, [esi + 0x1c0]
        call ext_005B11D0
        fld dword ptr [mem_0096CCEC]
    L_5f5655:
        fstp dword ptr [eax]
    L_5f5657:
        mov esi, dword ptr [esi + 0x10]
        test esi, esi
        je L_5f5662
        mov byte ptr [esi + 0x4], 0x1
    L_5f5662:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x005F5730] sub_005F5730 (32 bytes)
extern "C" void ext_0067E510();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005F5730(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, [esp + 4]
        mov edx, [ecx + 4]
        mov edx, [edx + 0xc]
        add ecx, 4
        push eax
        mov eax, [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E510
        ret 4
    }
}

// [0x005F56A0] sub_005F56A0 (32 bytes)
extern "C" void ext_0067E5B0();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005F56A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, [esp + 4]
        mov edx, [ecx + 4]
        mov edx, [edx + 0xc]
        add ecx, 4
        push eax
        mov eax, [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E5B0
        ret 4
    }
}

// [0x005F56C0] sub_005F56C0 (32 bytes)
extern "C" void ext_0067E600();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_005F56C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, [esp + 4]
        mov edx, [ecx + 4]
        mov edx, [edx + 0xc]
        add ecx, 4
        push eax
        mov eax, [mem_00B40640]
        push eax
        call edx
        mov ecx, eax
        call ext_0067E600
        ret 4
    }
}

// [0x005FC490] sub_005FC490 (118 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006295E0();

extern "C" __declspec(naked) void __fastcall fn_005FC490(void* self) {
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
        je null_path_5FC490
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
        call ext_006295E0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC490:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005F58D0] sub_005F58D0 (99 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694D80();
extern "C" int mem_00B40640;

struct Matrix3_005F58D0 {
    float m[9];
};

extern "C" void* __fastcall fn_005F58D0(void* self) {
    void* vtable_ptr = *(void**)((char*)self + 4);
    void* (__thiscall *fn)(void*, int) = ((void* (__thiscall**)(void*, int))vtable_ptr)[2];
    void* obj = fn((char*)self + 4, mem_00B40640);
    Matrix3_005F58D0 m;
    m.m[2] = 0.0f;
    m.m[1] = 0.0f;
    m.m[5] = 0.0f;
    m.m[3] = 0.0f;
    m.m[7] = 0.0f;
    m.m[6] = 0.0f;
    m.m[0] = 1.0f;
    m.m[4] = 1.0f;
    m.m[8] = 1.0f;
    ((void (__thiscall*)(void*, Matrix3_005F58D0*))ext_0067DAD0)(obj, &m);
    void* res = (char*)self + 0x214;
    ((void (__thiscall*)(Matrix3_005F58D0*, void*))ext_00694D80)(&m, res);
    return res;
}

// [0x005F5940] sub_005F5940 (101 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694B60();
extern "C" int mem_00B40640;

struct Matrix3_005F5940 {
    float m[9];
};

extern "C" void* __fastcall fn_005F5940(void* self) {
    void* vtable_ptr = *(void**)((char*)self + 4);
    void* (__thiscall *fn)(void*, int) = ((void* (__thiscall**)(void*, int))vtable_ptr)[2];
    void* obj = fn((char*)self + 4, mem_00B40640);
    Matrix3_005F5940 m;
    m.m[2] = 0.0f;
    m.m[1] = 0.0f;
    m.m[5] = 0.0f;
    m.m[3] = 0.0f;
    m.m[7] = 0.0f;
    m.m[6] = 0.0f;
    m.m[0] = 1.0f;
    m.m[4] = 1.0f;
    m.m[8] = 1.0f;
    ((void (__thiscall*)(void*, Matrix3_005F5940*))ext_0067DAD0)(obj, &m);
    void* res = (char*)self + 0x214;
    ((void (__thiscall*)(Matrix3_005F5940*, int, void*))ext_00694B60)(&m, 0, res);
    return res;
}

// [0x005F5700] sub_005F5700 (34 bytes)
extern "C" void ext_0067E410();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005F5700(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 4]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov eax, dword ptr [mem_00B40640]
        add ecx, 4
        push 0
        push eax
        call edx
        mov ecx, eax
        call ext_0067E410
        ret 4
    }
}

// [0x005FF000] sub_005FF000 (53 bytes)
extern "C" void ext_005FD330();
extern "C" int mem_00B4B3F0;
extern "C" int mem_00B4B3F4;
extern "C" int mem_00B4B3EC;
extern "C" __declspec(naked) void __fastcall fn_005FF000(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B4B3F0]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, offset mem_00B4B3EC
        call ext_005FD330
        mov eax, dword ptr [mem_00B4B3F0]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [mem_00B4B3F0]
        mov dword ptr [mem_00B4B3F4], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [mem_00B4B3F0]
        mov dword ptr [eax + 8], eax
        ret
    }
}

// [0x005FD330] sub_005FD330 (53 bytes)
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_005FD330(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x19], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_005FD330
        mov esi, dword ptr [esi]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x19], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005F14E0] sub_005F14E0 (66 bytes)
extern "C" void ext_005EF180();
extern "C" __declspec(naked) void* __fastcall fn_005F14E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005EF180
        mov dword ptr [esi], 0x96b814
        mov dword ptr [esi + 4], 0x96b7cc
        mov dword ptr [esi + 8], 0x96b78c
        mov dword ptr [esi + 0xc], 0x96b73c
        mov dword ptr [esi + 0x150], 0x96b728
        mov dword ptr [esi + 0x154], 0x96b720
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x005F1A80] sub_005F1A80 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_004CA3E0();
extern "C" void ext_00584F10();
extern "C" void ext_005851E0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_005F1A80(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa3065c
        push 0xa2fbbc
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x2fc
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_005851E0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_004CA3E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x2fc
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_00584F10
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x005F1530] sub_005F1530 (66 bytes)
extern "C" void ext_005EF180();
extern "C" __declspec(naked) void* __fastcall fn_005F1530(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005EF180
        mov dword ptr [esi], 0x958674
        mov dword ptr [esi + 4], 0x95862c
        mov dword ptr [esi + 8], 0x9585ec
        mov dword ptr [esi + 0xc], 0x95859c
        mov dword ptr [esi + 0x150], 0x958584
        mov dword ptr [esi + 0x154], 0x95857c
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x005F1580] sub_005F1580 (66 bytes)
extern "C" void ext_005EF180();
extern "C" __declspec(naked) void* __fastcall fn_005F1580(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push eax
        mov esi, ecx
        call ext_005EF180
        mov dword ptr [esi], 0x96b3dc
        mov dword ptr [esi + 4], 0x96b394
        mov dword ptr [esi + 8], 0x96b354
        mov dword ptr [esi + 0xc], 0x96b304
        mov dword ptr [esi + 0x150], 0x96b2f0
        mov dword ptr [esi + 0x154], 0x96b2e8
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x005F1D20] sub_005F1D20 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_004CA3E0();
extern "C" void ext_0055DDE0();
extern "C" void ext_005F1530();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_005F1D20(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa36694
        push 0xa2fbbc
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x2f8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_005F1530
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_004CA3E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x2f8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_0055DDE0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x005F28D0] sub_005F28D0 (154 bytes)
extern "C" void ext_004CDF40();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_005F28D0(void* self) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        push 0x1
        lea ecx, [esp + 0xc]
        push 0x0
        push ecx
        mov dword ptr [esp + 0x38], 0x0
        call ext_004CDF40
        mov edx, dword ptr [esp + 0x44]
        mov esi, eax
        mov eax, dword ptr [esp + 0x48]
        add esp, 0xc
        test eax, eax
        mov dword ptr [esi + 0x18c], edx
        mov dword ptr [esi + 0x190], eax
        je L_skip
        mov al, byte ptr [eax + 0x178]
        mov byte ptr [esi + 0x178], al
    L_skip:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x54]
        push edi
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x005FFFB0] sub_005FFFB0 (90 bytes)
extern "C" void ext_005FF8A0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B4709C;

extern "C" __declspec(naked) void __fastcall fn_005FFFB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a7a7e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B4709C], al
        jne done_005FFFB0
        or dword ptr [mem_00B4709C], eax
        mov ecx, 0xb47078
        mov dword ptr [esp + 0x8], 0x0
        call ext_005FF8A0
        push 0x91e6c0
        call ext_006A6C87
        add esp, 0x4
    done_005FFFB0:
        mov ecx, dword ptr [esp]
        mov eax, 0xb47078
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005FC990] sub_005FC990 (118 bytes)
extern "C" void ext_0062B250();

extern "C" __declspec(naked) void __fastcall fn_005FC990(void* self) {
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
        je null_path_5FC990
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
        call ext_0062B250
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    null_path_5FC990:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005F4BF0] sub_005F4BF0 (114 bytes)
// [0x005F4BF0] sub_005F4BF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F3730();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4BF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F3730
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F1BD0] sub_005F1BD0 (335 bytes)
extern "C" void ext_00403560();
extern "C" void ext_004CA3E0();
extern "C" void ext_005EFEE0();
extern "C" void ext_005F14E0();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6DD2();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;

extern "C" __declspec(naked) void __fastcall fn_005F1BD0(void* self) {
    __asm {
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov eax, fs:[0]
        push -1
        push 0x8a870a
        push eax
        mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], esp
        sub esp, 0x80
        test eax, eax
        je L_null2
        push esi
        push 0
        push 0xa91218
        push 0xa2fbbc
        push 0
        push eax
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_nodyn
        push 0x2f8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x8c], 0
        je L_ret0
        push esi
        mov ecx, eax
        call ext_005F14E0
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov fs:[0], ecx
        add esp, 0x8c
        ret
    L_ret0:
        xor eax, eax
        pop esi
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nodyn:
        lea eax, dword ptr [esp + 0x8]
        push eax
        call ext_004CA3E0
        add esp, 4
        mov esi, eax
        push 0x92f9d4
        lea ecx, dword ptr [esp + 0x28]
        mov dword ptr [esp + 0x90], 1
        call dword ptr [mem_00924FE4]
        push esi
        push eax
        lea ecx, dword ptr [esp + 0x48]
        push ecx
        mov byte ptr [esp + 0x98], 2
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        push eax
        lea ecx, dword ptr [esp + 0x60]
        mov byte ptr [esp + 0x90], 3
        call ext_00403560
        push 0x9d47a4
        lea edx, dword ptr [esp + 0x60]
        push edx
        call ext_006A6DD2
    L_null2:
        push 0x2f8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0x88], 4
        je L_nz
        mov ecx, eax
        call ext_005EFEE0
        mov ecx, dword ptr [esp + 0x80]
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    L_nz:
        mov ecx, dword ptr [esp + 0x80]
        xor eax, eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x8c
        ret
    }
}

// [0x005F4C70] sub_005F4C70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F3790();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4C70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F3790
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F4CF0] sub_005F4CF0 (114 bytes)
extern "C" void ext_005F37F0();
extern "C" void ext_00475960();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4CF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F37F0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F4D70] sub_005F4D70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F3850();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4D70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F3850
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F4DF0] sub_005F4DF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F38B0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4DF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F38B0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F4E70] sub_005F4E70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F3910();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4E70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F3910
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F4EF0] sub_005F4EF0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F3970();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F4EF0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F3970
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005F4F70] sub_005F4F70 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005F39D0();
extern "C" __declspec(naked) void __fastcall fn_005F4F70(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005F39D0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005FFCB0] sub_005FFCB0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005FD090();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005FFCB0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005FD090
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005FFD30] sub_005FFD30 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005FD0F0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005FFD30(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005FD0F0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005FFDB0] sub_005FFDB0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005FD150();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005FFDB0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005FD150
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005FFE30] sub_005FFE30 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005FD1B0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005FFE30(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005FD1B0
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005FFEB0] sub_005FFEB0 (114 bytes)
extern "C" void ext_00475960();
extern "C" void ext_005FD210();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005FFEB0(void* self, int edx_unused, const char* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_005FD210
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        push 0x1
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi]
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x38], 0x0
        call ext_00475960
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}
