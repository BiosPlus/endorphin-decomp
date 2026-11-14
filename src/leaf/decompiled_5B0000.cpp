// Decompiled translation unit: src/leaf/decompiled_5B0000.cpp

// [0x005B6970] sub_005B6970 (9 bytes)
extern "C" void ext_005B6930();

extern "C" __declspec(naked) void __cdecl fn_005B6970() {
    __asm {
        call ext_005B6930
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x005B67C0] sub_005B67C0 (32 bytes)
extern "C" void ext_00647F50();

extern "C" __declspec(naked) void __fastcall fn_005B67C0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        je done
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        fstp dword ptr [esp]
        call ext_00647F50
    done:
        ret 4
    }
}

// [0x005B7000] sub_005B7000 (32 bytes)
extern "C" void ext_00648180();

extern "C" __declspec(naked) void __fastcall fn_005B7000(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        je done
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        fstp dword ptr [esp]
        call ext_00648180
    done:
        ret 4
    }
}

// [0x005B7020] sub_005B7020 (32 bytes)
extern "C" void ext_006481A0();

extern "C" __declspec(naked) void __fastcall fn_005B7020(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        je done
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        fstp dword ptr [esp]
        call ext_006481A0
    done:
        ret 4
    }
}

// [0x005B6B60] sub_005B6B60 (33 bytes)
extern "C" void ext_005CE9C0();

extern "C" __declspec(naked) void __fastcall fn_005B6B60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1b8]
        je L_005B6B7F
        push eax
        call ext_005CE9C0
        lea eax, [esi + 0x1b8]
L_005B6B7F:
        pop esi
        ret
    }
}

// [0x005B6B90] sub_005B6B90 (33 bytes)
extern "C" void ext_005CE9D0();

extern "C" __declspec(naked) void __fastcall fn_005B6B90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1c4]
        je L_005B6BAF
        push eax
        call ext_005CE9D0
        lea eax, [esi + 0x1c4]
L_005B6BAF:
        pop esi
        ret
    }
}

// [0x005B6BC0] sub_005B6BC0 (33 bytes)
extern "C" void ext_005CE9E0();

extern "C" __declspec(naked) void* __fastcall fn_005B6BC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1d0]
        je done
        push eax
        call ext_005CE9E0
        lea eax, [esi + 0x1d0]
done:
        pop esi
        ret
    }
}

// [0x005B6BF0] sub_005B6BF0 (33 bytes)
extern "C" void ext_005CE9F0();

extern "C" __declspec(naked) void* __fastcall fn_005B6BF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1dc]
        je done_5B6BF0
        push eax
        call ext_005CE9F0
        lea eax, [esi + 0x1dc]
done_5B6BF0:
        pop esi
        ret
    }
}

// [0x005B6C20] sub_005B6C20 (33 bytes)
extern "C" void ext_005CEA00();

extern "C" __declspec(naked) void __fastcall fn_005B6C20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1e8]
        je done_5B6C20
        push eax
        call ext_005CEA00
        lea eax, [esi + 0x1e8]
done_5B6C20:
        pop esi
        ret
    }
}

// [0x005B6C50] sub_005B6C50 (33 bytes)
extern "C" void ext_005CEA10();

extern "C" __declspec(naked) void __fastcall fn_005B6C50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1f4]
        je short L_done_5B6C50
        push eax
        call ext_005CEA10
        lea eax, [esi + 0x1f4]
L_done_5B6C50:
        pop esi
        ret
    }
}

// [0x005B1B60] sub_005B1B60 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1B60(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x18]
        fld dword ptr [eax + 0xc]
        mov byte ptr [ecx + 0x4], 0x1
        fstp dword ptr [ecx + 0x1c]
        ret 0x4
    }
}

// [0x005B0E60] sub_005B0E60 (40 bytes)
extern "C" int mem_00A88A40;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_005B0E60(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [4*eax + mem_00A88A40]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x005B6C80] sub_005B6C80 (40 bytes)
extern "C" void ext_005CEA20();

extern "C" void* __fastcall fn_005B6C80(void* self, int edx_unused, void* a1) {
    char* p = (char*)self;
    if (*(void**)(p + 0x158)) {
        ((void (__thiscall*)(void*, void*, void*))ext_005CEA20)(*(void**)(p + 0x158), p + 0x200, a1);
    }
    return p + 0x200;
}

// [0x005B6850] sub_005B6850 (43 bytes)
extern "C" void ext_00647E00();

extern "C" float* __fastcall fn_005B6850(void* self, int edx_unused, float* out) {
    typedef float* (__thiscall *Fn)(void*, float*);
    out[2] = 0.0f;
    out[1] = 0.0f;
    out[0] = 0.0f;
    void* p = *(void**)((char*)self + 0x158);
    if (p) {
        void* q = *(void**)((char*)p + 0xac);
        ((Fn)ext_00647E00)(q, out);
    }
    return out;
}

// [0x005B6750] sub_005B6750 (47 bytes)
extern "C" void __fastcall fn_005B6750(void* self, int edx_unused, void* a1) {
    char* p = (char*)self;
    void* old = *(void**)(p + 0x158);
    if (a1 != old && old) {
        void** vtbl = *(void***)old;
        ((void (__thiscall*)(void*, int))vtbl[0])(old, 1);
    }
    *(void**)(p + 0x158) = a1;
    *(void**)((char*)a1 + 0xb0) = self;
}

// [0x005B34C0] sub_005B34C0 (50 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B34C0(void* self) {
    __asm {
        push esi
        mov al, 0x1
        xor esi, esi
        mov edx, ecx
    loop_top:
        cmp esi, 0x3
        jge short loop_done
        mov eax, edx
        mov ecx, dword ptr [eax + 0x4]
        add esi, 0x1
        add edx, 0x10
        test ecx, ecx
        jne short nonzero
        xor eax, eax
        jmp short compute
    nonzero:
        mov eax, dword ptr [eax + 0x8]
        sub eax, ecx
        sar eax, 0x2
    compute:
        test eax, eax
        sete al
        test al, al
        jne short loop_top
    loop_done:
        pop esi
        ret
    }
}

// [0x005B68F0] sub_005B68F0 (56 bytes)
extern "C" double mem_00928E78;

extern "C" __declspec(naked) float __fastcall fn_005B68F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [ecx + 0x158]
        test esi, esi
        je zero_path
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x24]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x70]
        pop esi
        fmul dword ptr [esp]
        fmul qword ptr [mem_00928E78]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
zero_path:
        fldz
        pop esi
        pop ecx
        ret
    }
}

// [0x005B6930] sub_005B6930 (64 bytes)
extern "C" void ext_00647E00();
extern "C" int mem_00B40640;

extern "C" void* __fastcall fn_005B6930(void* self) {
    char* p = static_cast<char*>(self);
    if (*reinterpret_cast<int*>(p + 0x184) > 1) {
        void* obj = *reinterpret_cast<void**>(p + 0x158);
        if (obj) {
            char* esi = p + 0x214;
            void* inner = *reinterpret_cast<void**>(static_cast<char*>(obj) + 0xac);
            typedef void (__thiscall *CalleeFn)(void*, void*);
            reinterpret_cast<CalleeFn>(&ext_00647E00)(inner, esi);
            return esi;
        }
    }
    void* sub = *reinterpret_cast<void**>(p + 4);
    typedef void* (__thiscall *VFn)(void*, int);
    VFn fnp = *reinterpret_cast<VFn*>(static_cast<char*>(sub) + 0x14);
    void* r = fnp(p + 4, mem_00B40640);
    return static_cast<char*>(r) + 0x30;
}

// [0x005B1930] sub_005B1930 (70 bytes)
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void* __fastcall fn_005B1930(void* self) {
    __asm {
        push -1
        push 0x8a33a8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x95fcf4
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005B1B90] sub_005B1B90 (72 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B1B90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x10
        cmp eax, 0x3
        jge short L_5B1BD0
        fld dword ptr [ecx + 0x10]
        push esi
        fstp dword ptr [esp + 0x4]
        lea esi, [esp + 0x4]
        fld dword ptr [ecx + 0x14]
        push esi
        fstp dword ptr [esp + 0xc]
        push eax
        fld dword ptr [ecx + 0x18]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [ecx + 0x1c]
        mov ecx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        pop esi
        add esp, 0x10
        ret 0x4
L_5B1BD0:
        fldz
        add esp, 0x10
        ret 0x4
    }
}

// [0x005B51E0] sub_005B51E0 (83 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B51E0(void* self) {
    __asm {
        push -1
        push 0x008A3649
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], 0x0096085C
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xC], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1C], ecx
        mov dword ptr [eax + 0x20], ecx
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2C], ecx
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x38], ecx
        mov dword ptr [eax + 0x3C], ecx
        mov dword ptr [eax + 0x40], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005B3CB0] sub_005B3CB0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43550;
extern "C" int mem_00B4354C;

extern "C" __declspec(naked) void* __fastcall fn_005B3CB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a34be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43550], al
        jne L_done
        or dword ptr [mem_00B43550], eax
        mov ecx, offset mem_00B4354C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4354C], 0x95ffd4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4354C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B3FF0] sub_005B3FF0 (30 bytes)
extern "C" void ext_005B3CB0();

extern "C" __declspec(naked) void __fastcall fn_005B3FF0(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005B3CB0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005B3D10] sub_005B3D10 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43558;
extern "C" int mem_00B43554;

extern "C" __declspec(naked) void* __fastcall fn_005B3D10(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a34de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43558], al
        jne L_done
        or dword ptr [mem_00B43558], eax
        mov ecx, offset mem_00B43554
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43554], 0x960184
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43554
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B4010] sub_005B4010 (30 bytes)
extern "C" void ext_005B3D10();

extern "C" __declspec(naked) void __fastcall fn_005B4010(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005B3D10
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005B3D70] sub_005B3D70 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43560;
extern "C" int mem_00B4355C;

extern "C" __declspec(naked) void* __fastcall fn_005B3D70(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a34fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43560], al
        jne L_done
        or dword ptr [mem_00B43560], eax
        mov ecx, offset mem_00B4355C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4355C], 0x960334
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4355C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B4030] sub_005B4030 (30 bytes)
extern "C" void ext_005B3D70();

extern "C" __declspec(naked) void __fastcall fn_005B4030(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005B3D70
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005B3DD0] sub_005B3DD0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43568;
extern "C" int mem_00B43564;

extern "C" __declspec(naked) void* __fastcall fn_005B3DD0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a351e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43568], al
        jne L_done
        or dword ptr [mem_00B43568], eax
        mov ecx, offset mem_00B43564
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43564], 0x9604e4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43564
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B4050] sub_005B4050 (30 bytes)
extern "C" void ext_005B3DD0();

extern "C" __declspec(naked) void __fastcall fn_005B4050(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005B3DD0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005B3E30] sub_005B3E30 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4356C;
extern "C" int mem_00B43570;

extern "C" __declspec(naked) void* __fastcall fn_005B3E30(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a353e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43570], al
        jne L_done
        or dword ptr [mem_00B43570], eax
        mov ecx, offset mem_00B4356C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B4356C], 0x960694
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B4356C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8180] sub_005B8180 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CA0;
extern "C" int mem_00B43C9C;

extern "C" __declspec(naked) void* __fastcall fn_005B8180(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3b3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CA0], al
        jne L_done
        or dword ptr [mem_00B43CA0], eax
        mov ecx, offset mem_00B43C9C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43C9C], 0x960b04
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43C9C
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B4130] sub_005B4130 (30 bytes)
extern "C" void ext_005B3E30();

extern "C" __declspec(naked) void __fastcall fn_005B4130(void* self) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        call ext_005B3E30
        mov edx, dword ptr [esp + 0xc]
        mov ecx, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ecx
        ret
    }
}

// [0x005B81E0] sub_005B81E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CA8;
extern "C" int mem_00B43CA4;

extern "C" __declspec(naked) void* __fastcall fn_005B81E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3b5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CA8], al
        jne L_done
        or dword ptr [mem_00B43CA8], eax
        mov ecx, offset mem_00B43CA4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CA4], 0x960cb4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CA4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8240] sub_005B8240 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CB0;
extern "C" int mem_00B43CAC;

extern "C" __declspec(naked) void* __fastcall fn_005B8240(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3b7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CB0], al
        jne L_done
        or dword ptr [mem_00B43CB0], eax
        mov ecx, offset mem_00B43CAC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CAC], 0x960d8c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CAC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B82A0] sub_005B82A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CB8;
extern "C" int mem_00B43CB4;

extern "C" __declspec(naked) void* __fastcall fn_005B82A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3b9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CB8], al
        jne L_done
        or dword ptr [mem_00B43CB8], eax
        mov ecx, offset mem_00B43CB4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CB4], 0x960e64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CB4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8300] sub_005B8300 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CC0;
extern "C" int mem_00B43CBC;

extern "C" __declspec(naked) void* __fastcall fn_005B8300(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3bbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CC0], al
        jne L_done
        or dword ptr [mem_00B43CC0], eax
        mov ecx, offset mem_00B43CBC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CBC], 0x960f3c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CBC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8360] sub_005B8360 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CC8;
extern "C" int mem_00B43CC4;

extern "C" __declspec(naked) void* __fastcall fn_005B8360(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3bde
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CC8], al
        jne L_done
        or dword ptr [mem_00B43CC8], eax
        mov ecx, offset mem_00B43CC4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CC4], 0x961014
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CC4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B83C0] sub_005B83C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CD0;
extern "C" int mem_00B43CCC;

extern "C" __declspec(naked) void* __fastcall fn_005B83C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3bfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CD0], al
        jne L_done
        or dword ptr [mem_00B43CD0], eax
        mov ecx, offset mem_00B43CCC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CCC], 0x9610ec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CCC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8420] sub_005B8420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CD8;
extern "C" int mem_00B43CD4;

extern "C" __declspec(naked) void* __fastcall fn_005B8420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3c1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CD8], al
        jne L_done
        or dword ptr [mem_00B43CD8], eax
        mov ecx, offset mem_00B43CD4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CD4], 0x9611c4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CD4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8480] sub_005B8480 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CE0;
extern "C" int mem_00B43CDC;

extern "C" __declspec(naked) void* __fastcall fn_005B8480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3c3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CE0], al
        jne L_done
        or dword ptr [mem_00B43CE0], eax
        mov ecx, offset mem_00B43CDC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CDC], 0x96129c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CDC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B84E0] sub_005B84E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CE8;
extern "C" int mem_00B43CE4;

extern "C" __declspec(naked) void* __fastcall fn_005B84E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3c5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CE8], al
        jne L_done
        or dword ptr [mem_00B43CE8], eax
        mov ecx, offset mem_00B43CE4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CE4], 0x961374
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CE4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8540] sub_005B8540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CF0;
extern "C" int mem_00B43CEC;

extern "C" __declspec(naked) void* __fastcall fn_005B8540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3c7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CF0], al
        jne L_done
        or dword ptr [mem_00B43CF0], eax
        mov ecx, offset mem_00B43CEC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CEC], 0x961524
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CEC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B85A0] sub_005B85A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43CF8;
extern "C" int mem_00B43CF4;

extern "C" __declspec(naked) void* __fastcall fn_005B85A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3c9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43CF8], al
        jne L_done
        or dword ptr [mem_00B43CF8], eax
        mov ecx, offset mem_00B43CF4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CF4], 0x9616d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CF4
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B8600] sub_005B8600 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43D00;
extern "C" int mem_00B43CFC;

extern "C" __declspec(naked) void* __fastcall fn_005B8600(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a3cbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43D00], al
        jne L_done
        or dword ptr [mem_00B43D00], eax
        mov ecx, offset mem_00B43CFC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B43CFC], 0x961884
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B43CFC
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005B1870] sub_005B1870 (103 bytes)
extern "C" void ext_0065F440();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005B1870(void* self) {
    __asm {
        push -1
        push 0x8a3393
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x95f88c
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x0
        je L_005B18B8
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_005B18B8:
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0065F440
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005B8EA0] sub_005B8EA0 (118 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __cdecl fn_005B8EA0() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        push ebp
        mov ebp, dword ptr [esp + 0x28]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], edi
        nop
    L_005B8EC0:
        test esi, esi
        je L_005B8ECA
        cmp esi, dword ptr [esp + 0x28]
        je L_005B8ED0
    L_005B8ECA:
        call dword ptr [mem_00925134]
    L_005B8ED0:
        cmp edi, dword ptr [esp + 0x2c]
        je L_005B8F05
        test esi, esi
        jne L_005B8EE0
        call dword ptr [mem_00925134]
    L_005B8EE0:
        cmp edi, dword ptr [esi + 0x4]
        jne L_005B8EEB
        call dword ptr [mem_00925134]
    L_005B8EEB:
        mov ecx, dword ptr [edi + 0x28]
        add ecx, ebx
        call ebp
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_005B8EC0
    L_005B8F05:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x005BE990] sub_005BE990 (82 bytes)
extern "C" void ext_005B8EA0();
extern "C" void ext_005CF3E0();
extern "C" void fn_005B6600();

extern "C" __declspec(naked) void __fastcall fn_005BE990(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esi + 0x160]
        xor edx, edx
        push edx
        lea eax, [esi + 0x15c]
        mov ecx, offset fn_005B6600
        push ecx
        push edi
        push eax
        mov ebx, edi
        mov ebx, dword ptr [ebx]
        push ebx
        push eax
        lea eax, [esp + 0x24]
        push eax
        call ext_005B8EA0
        mov ecx, dword ptr [esi + 0x158]
        add esp, 0x1c
        test ecx, ecx
        je skip_cf3e0
        call ext_005CF3E0
skip_cf3e0:
        pop edi
        mov dword ptr [esi + 0x184], 0
        pop esi
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x005BED50] sub_005BED50 (120 bytes)
extern "C" void ext_005C40C0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005BED50(void* self, int edx_unused, int arg) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0x160]
        mov eax, dword ptr [eax]
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 0x160]
        push esi
        push edi
        lea edi, [ecx + 0x15c]
        mov esi, edi
        mov ebx, eax
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebx
    L_loop:
        test esi, esi
        je L_inv1
        cmp esi, edi
        je L_ok1
    L_inv1:
        call dword ptr [mem_00925134]
    L_ok1:
        cmp ebx, ebp
        je L_done
        test esi, esi
        jne L_ok2
        call dword ptr [mem_00925134]
    L_ok2:
        cmp ebx, dword ptr [esi + 0x4]
        jne L_ok3
        call dword ptr [mem_00925134]
    L_ok3:
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [ebx + 0x28]
        call ext_005C40C0
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebx, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x005B3500] sub_005B3500 (137 bytes)
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_005B3500(void* self) {
    __asm {
        push -1
        push 0x8a369f
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_00661980
        mov byte ptr [esi + 0x4], 0x1
        xor edi, edi
        mov dword ptr [esi], 0x95f88c
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0xc], edi
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, edi
        mov byte ptr [esp + 0x14], 0x2
        je L_005B3558
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_005B3558:
        fldz
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xc], edi
        mov dword ptr [esi + 0x48], edi
        mov byte ptr [esi + 0x44], 0x1
        fst dword ptr [esi + 0x10]
        fst dword ptr [esi + 0x14]
        pop edi
        fst dword ptr [esi + 0x18]
        mov eax, esi
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x20]
        fstp dword ptr [esi + 0x24]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005BEDD0] sub_005BEDD0 (140 bytes)
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005BEDD0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [ecx + 0x160]
        mov eax, dword ptr [eax]
        push ebx
        lea ebx, [ecx + 0x15c]
        push ebp
        push esi
        mov esi, ebx
        mov ebp, eax
        push edi
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], ebp
    L_loop_005BEDD0:
        test esi, esi
        mov edi, dword ptr [ebx + 0x4]
        je L_inv1_005BEDD0
        cmp esi, ebx
        je L_ok1_005BEDD0
    L_inv1_005BEDD0:
        call dword ptr [mem_00925134]
    L_ok1_005BEDD0:
        cmp ebp, edi
        je L_done_005BEDD0
        test esi, esi
        jne L_ok2_005BEDD0
        call dword ptr [mem_00925134]
    L_ok2_005BEDD0:
        cmp ebp, dword ptr [esi + 0x4]
        jne L_ok3_005BEDD0
        call dword ptr [mem_00925134]
    L_ok3_005BEDD0:
        mov esi, dword ptr [ebp + 0x28]
        test esi, esi
        je L_advance_005BEDD0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x6c]
        mov ecx, esi
        call eax
        test al, al
        je L_advance_005BEDD0
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [edx + 0x10]
        lea ecx, [esi + 0xc]
        push eax
        call edx
    L_advance_005BEDD0:
        lea ecx, [esp + 0x10]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x10]
        jmp L_loop_005BEDD0
    L_done_005BEDD0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}

// [0x005B1AB0] sub_005B1AB0 (165 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1AB0(void* self, int edx_unused, const float* v) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        cmp eax, 0x4
        je branch2
        cmp eax, 0x5
        je branch2
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x10]
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [eax + 0x4]
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [eax + 0x8]
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x18]
        fstp dword ptr [ecx + 0x18]
        fld dword ptr [eax]
        mov byte ptr [ecx + 0x4], 0x1
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x1c]
        fstp dword ptr [ecx + 0x1c]
        ret 0x4
    branch2:
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x10]
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [eax + 0x8]
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x14]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [eax + 0x4]
        mov byte ptr [ecx + 0x4], 0x1
        fabs
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [ecx + 0x18]
        fstp dword ptr [ecx + 0x18]
        ret 0x4
    }
}

// [0x005B1BE0] sub_005B1BE0 (178 bytes)
extern "C" void ext_00493EE0();
extern "C" void ext_00594000();
extern "C" void ext_0065C640();
extern "C" void ext_0065C650();

extern "C" __declspec(naked) void __fastcall fn_005B1BE0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a33c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        fld dword ptr [esi + 0x14]
        mov ecx, dword ptr [esi + 0x48]
        fstp dword ptr [esp + 0x14]
        test ecx, ecx
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x28], 0x0
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x10]
        je short L_005B1C5D
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        lea edx, [esp + 0x10]
        push edx
        call eax
    L_005B1C5D:
        fld dword ptr [esp + 0x30]
        mov ecx, edi
        fstp dword ptr [esi + 0x10]
        mov byte ptr [esi + 0x4], 0x1
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x4
    }
}

// [0x005B1CA0] sub_005B1CA0 (178 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1CA0(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a33c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        fld dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x48]
        fstp dword ptr [esp + 0x10]
        test ecx, ecx
        fld dword ptr [esi + 0x18]
        fstp dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x28], 0x0
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x14]
        je short L_005B1D1D
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        lea edx, [esp + 0x10]
        push edx
        call eax
    L_005B1D1D:
        fld dword ptr [esp + 0x30]
        mov ecx, edi
        fstp dword ptr [esi + 0x14]
        mov byte ptr [esi + 0x4], 0x1
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x4
    }
}

// [0x005B1D60] sub_005B1D60 (178 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1D60(void* self, int edx_unused, float a1) {
    __asm {
        push -1
        push 0x8a33c8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00594000
        mov ecx, dword ptr [eax + 0x258]
        lea edi, [eax + 0x258]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1d8]
        call edx
        mov ebx, eax
        mov ecx, ebx
        mov dword ptr [esp + 0xc], ebx
        call ext_0065C640
        fld dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x48]
        fstp dword ptr [esp + 0x10]
        test ecx, ecx
        fld dword ptr [esi + 0x14]
        fstp dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x28], 0x0
        fld dword ptr [esi + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x18]
        je short L_005B1DDD
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        lea edx, [esp + 0x10]
        push edx
        call eax
    L_005B1DDD:
        fld dword ptr [esp + 0x30]
        mov ecx, edi
        fstp dword ptr [esi + 0x18]
        mov byte ptr [esi + 0x4], 0x1
        call ext_00493EE0
        mov ecx, ebx
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_0065C650
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0x4
    }
}

// [0x005B5260] sub_005B5260 (184 bytes)
extern "C" void ext_005739E0();
extern "C" void ext_005B1140();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_005B5260(void* self) {
    __asm {
        push -0x1
        push 0x8a3649
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov eax, dword ptr [esi + 0x38]
        lea edi, [esi + 0x34]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 0x18], 0x3
        je skip1
        mov ecx, dword ptr [edi + 0x8]
        push ecx
        push eax
        mov ecx, edi
        call ext_005739E0
        mov edx, dword ptr [edi + 0x4]
        push edx
        call ext_006A5C5C
        add esp, 0x4
    skip1:
        mov dword ptr [edi + 0x4], ebx
        mov dword ptr [edi + 0x8], ebx
        mov dword ptr [edi + 0xc], ebx
        mov eax, dword ptr [esi + 0x28]
        cmp eax, ebx
        je skip2
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip2:
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov eax, dword ptr [esi + 0x18]
        cmp eax, ebx
        je skip3
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip3:
        mov dword ptr [esi + 0x18], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov eax, dword ptr [esi + 0x8]
        cmp eax, ebx
        je skip4
        push eax
        call ext_006A5C5C
        add esp, 0x4
    skip4:
        mov ecx, esi
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        call ext_005B1140
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005B0CA0] sub_005B0CA0 (228 bytes)
extern "C" void ext_00489350();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_005B0CA0(void* self) {
    __asm {
        push -1
        push 0x884e5e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        lea edi, [esi + 0x8]
        xor ebp, ebp
        mov dword ptr [esi], 0x93e184
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebp
        mov dword ptr [esi + 0x4], 0x93e17c
        call ext_00489350
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x69], 1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebp
        lea edi, [esi + 0x18]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 1
        mov dword ptr [esi + 0x14], 0x93e17c
        call ext_00489350
        mov dword ptr [edi + 0x4], eax
        mov byte ptr [eax + 0x69], 1
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov dword ptr [edi + 0x8], ebp
        fld1
        fst dword ptr [esi + 0x24]
        lea ecx, [esi + 0x64]
        fldz
        mov byte ptr [esp + 0x18], 2
        fst dword ptr [esi + 0x28]
        fst dword ptr [esi + 0x2c]
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x34]
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x40]
        fst dword ptr [esi + 0x44]
        fst dword ptr [esi + 0x48]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x58]
        fstp dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x4c]
        fstp dword ptr [esi + 0x60]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x80], ebp
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x005BEC50] sub_005BEC50 (253 bytes)
extern "C" void ext_0059E220();
extern "C" void ext_005C40C0();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005BEC50(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x28
        cmp dword ptr [ecx + 0x164], 1
        push ebx
        push ebp
        push esi
        push edi
        jbe L_done
        mov eax, dword ptr [ecx + 0x160]
        mov eax, dword ptr [eax]
        lea edi, [ecx + 0x15c]
        mov ebp, eax
        mov eax, dword ptr [edi + 4]
        mov ebx, edi
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x24], eax
        call ext_0059E220
L_check_first:
        test ebx, ebx
        je L_inv_first
        cmp ebx, dword ptr [esp + 0x20]
        je L_cmp_last
L_inv_first:
        call dword ptr [mem_00925134]
L_cmp_last:
        cmp ebp, dword ptr [esp + 0x24]
        je L_done
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x1c], ebp
        call ext_00673C20
        jmp L_loop
        __asm _emit 0x8D __asm _emit 0x49 __asm _emit 0x00 // lea ecx, [ecx + 0]
L_loop:
        mov esi, dword ptr [esp + 0x18]
        test esi, esi
        je L_inv_a
        cmp esi, edi
        je L_have_a
L_inv_a:
        call dword ptr [mem_00925134]
L_have_a:
        mov edi, dword ptr [esp + 0x1c]
        cmp edi, dword ptr [esp + 0x34]
        je L_pop_node
        test esi, esi
        jne L_chk_b
        call dword ptr [mem_00925134]
L_chk_b:
        cmp edi, dword ptr [esi + 4]
        mov esi, dword ptr [mem_00925134]
        jne L_chk_c
        call esi
L_chk_c:
        test ebx, ebx
        jne L_chk_d
        call esi
L_chk_d:
        cmp ebp, dword ptr [ebx + 4]
        jne L_work
        call esi
L_work:
        mov ecx, dword ptr [edi + 0x28]
        push ecx
        mov ecx, dword ptr [ebp + 0x28]
        call ext_005C40C0
        lea ecx, [esp + 0x18]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x14]
        jmp L_loop
L_pop_node:
        lea ecx, [esp + 0x28]
        call ext_00673C20
        mov ebp, dword ptr [esp + 0x2c]
        mov ebx, dword ptr [esp + 0x28]
        mov edi, dword ptr [esp + 0x14]
        jmp L_check_first
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x005B2010] sub_005B2010 (284 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B2010(void* self) {
    __asm {
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0xee
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x77
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0x3f
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd8
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0xeb
        __asm _emit 0x26
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xdf
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xc4
        __asm _emit 0x41
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0xd9
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xd9
        __asm _emit 0x59
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0xc3
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x4b
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x8b
        __asm _emit 0xc1
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x10
        __asm _emit 0x56
        __asm _emit 0x50
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xd2
        __asm _emit 0x5e
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// [0x005B28E0] sub_005B28E0 (284 bytes)
extern "C" void ext_00476530();
extern "C" void ext_00476630();
extern "C" void ext_0051A2D0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005B28E0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push -0x1
        push 0x8a3404
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xcc
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xe8]
        push esi
        mov esi, dword ptr [esp + 0xe8]
        or ebx, -0x1
        cmp esi, ebp
        push edi
        mov edi, dword ptr [esp + 0xf4]
        mov dword ptr [esp + 0x10], ecx
        je L5c
        nop
    L20:
        cmp edi, dword ptr [esp + 0xf8]
        je L58
        mov eax, dword ptr [esp + 0xfc]
        fld dword ptr [edi]
        mov ecx, dword ptr [esp + 0x10]
        add ebx, 0x1
        push ebx
        push eax
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi]
        fstp dword ptr [esp]
        call ext_0051A2D0
        add esi, 0x4
        add edi, 0x4
        cmp esi, ebp
        jne L20
        jmp L5c
    L58:
        cmp esi, ebp
        jne L65
    L5c:
        cmp edi, dword ptr [esp + 0xf8]
        je Le1
    L65:
        mov ecx, dword ptr [esp + 0xfc]
        push ecx
        lea edx, [esp + 0x50]
        push edx
        call ext_00476630
        push 0x93c028
        push eax
        lea eax, [esp + 0x24]
        push eax
        mov dword ptr [esp + 0xf8], 0x0
        call dword ptr [mem_00924ECC]
        add esp, 0x14
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0xe4], 0x2
        call dword ptr [mem_00924FF4]
        push 0x93c008
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0xec], 0x3
        call ext_00476530
        push 0x9dfd38
        lea eax, [esp + 0x6c]
        push eax
        call ext_006A6DD2
    Le1:
        mov ecx, dword ptr [esp + 0xdc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xd8
        ret 0x18
    }
}

// [0x005BE710] sub_005BE710 (297 bytes)
extern "C" int mem_00924EC4;
extern "C" int mem_00924EC8;
extern "C" int mem_00925120;
extern "C" int mem_009251E0;
extern "C" int mem_00924FC8;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" void ext_005DF5C0();

extern "C" __declspec(naked) void __fastcall fn_005BE710(void* self) {
    __asm {
        push -1
        push 0x8a3e5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x7c]
        push edi
        push ecx
        push 0x92e3bc
        mov ecx, esi
        call dword ptr [mem_00924EC8]
        add eax, 1
        push eax
        push 0
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        call dword ptr [mem_00925120]
        mov ebp, dword ptr [mem_009251E0]
        mov edi, 1
        push edi
        push 0x92e3b4
        lea eax, [esp + 0x54]
        push 0x1e
        push eax
        mov dword ptr [esp + 0x84], 0
        call ebp
        push 0x928b5d
        push esi
        call dword ptr [mem_00924FC8]
        mov ebx, dword ptr [mem_00924ECC]
        add esp, 0x18
        test al, al
        je L_5BE7C7
        lea ecx, [esp + 0x4c]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x38]
        push eax
        call ebx
        add esp, 0xc
        mov byte ptr [esp + 0x74], 1
    L_5BE7AF:
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x74], 0
        call dword ptr [mem_00924FF4]
    L_5BE7C7:
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x2c], esp
        push esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x98]
        call ext_005DF5C0
        test eax, eax
        je L_5BE814
        add edi, 1
        push edi
        push 0x92e3b4
        lea ecx, [esp + 0x54]
        push 0x1e
        push ecx
        call ebp
        lea edx, [esp + 0x5c]
        push edx
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        call ebx
        add esp, 0x1c
        mov byte ptr [esp + 0x74], 2
        jmp L_5BE7AF
    L_5BE814:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x74], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x6c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x68
        ret
    }
}

// [0x005BFA80] sub_005BFA80 (329 bytes)
extern "C" void ext_005DF5C0();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005BFA80(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x24
        mov eax, dword ptr [ecx + 0x20c]
        mov edx, dword ptr [eax + 0x18c]
        push ebx
        push ebp
        lea ebx, [ecx + 0x7c]
        push esi
        mov esi, dword ptr [ebx + 4]
        cmp esi, dword ptr [ebx + 8]
        push edi
        mov dword ptr [esp + 0x10], edx
        jbe short L_5BFAA8
        call dword ptr [mem_00925134]
    L_5BFAA8:
        mov ebp, dword ptr [esp + 0x3c]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_5BFAB0:
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe short L_5BFABE
        call dword ptr [mem_00925134]
    L_5BFABE:
        cmp ebx, ebx
        je short L_5BFAC8
        call dword ptr [mem_00925134]
    L_5BFAC8:
        cmp esi, edi
        je L_5BFBBF
        cmp esi, dword ptr [ebx + 8]
        jb short L_5BFADB
        call dword ptr [mem_00925134]
    L_5BFADB:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x2c]
        add ecx, 0x5e0
        call ext_005DF5C0
        test eax, eax
        je L_5BFBAC
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        fld dword ptr [eax + 0x30]
        mov ecx, dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x34]
        mov ecx, dword ptr [ecx + 8]
        cmp ecx, 5
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ebp]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x24]
        jne short L_5BFB4D
        fld dword ptr [ebp]
        jmp short L_5BFB5A
    L_5BFB4D:
        cmp ecx, 4
        jne short L_5BFB57
        fld dword ptr [ebp]
        jmp short L_5BFB5A
    L_5BFB57:
        fld dword ptr [ebp + 4]
    L_5BFB5A:
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [ebp + 8]
        fmul dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        fld1
        fst dword ptr [eax]
        fldz
        fst dword ptr [eax + 4]
        fst dword ptr [eax + 8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [eax + 0x38]
        fstp dword ptr [eax + 0x3c]
    L_5BFBAC:
        cmp esi, dword ptr [ebx + 8]
        jb short L_5BFBB7
        call dword ptr [mem_00925134]
    L_5BFBB7:
        add esi, 4
        jmp L_5BFAB0
    L_5BFBBF:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8
    }
}

// [0x005B6E00] sub_005B6E00 (98 bytes)
extern "C" void ext_00647FB0();
extern "C" void ext_00694C10();

extern "C" __declspec(naked) void __fastcall fn_005B6E00(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x158], 0x0
        je done
        fldz
        mov eax, dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0xc]
        push eax
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x8]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        call ext_00694C10
        mov edx, dword ptr [esi + 0x158]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [edx + 0xac]
        call ext_00647FB0
    done:
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x005BF5F0] sub_005BF5F0 (384 bytes)
extern "C" void ext_005BED50();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005BF5F0(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x160]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebx + 0x160]
        push esi
        lea esi, [ebx + 0x15c]
        push edi
        mov edi, eax
        mov eax, dword ptr [ebx + 0x20c]
        test eax, eax
        mov dword ptr [esp + 0xc], ebx
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x20], ecx
        je near ptr L_exit
        cmp dword ptr [eax + 0x22c], ebx
        jne near ptr L_exit
        mov eax, dword ptr [eax + 0x228]
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        je near ptr L_exit
        push ebp
        jmp L_loop
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_loop:
        test esi, esi
        je L_assert1
        lea eax, [ebx + 0x15c]
        cmp esi, eax
        je L_noassert1
    L_assert1:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_chk2
    L_noassert1:
        mov ebp, dword ptr [mem_00925134]
    L_chk2:
        cmp edi, dword ptr [esp + 0x24]
        je near ptr L_pop_exit
        test esi, esi
        jne L_chk3
        call ebp
    L_chk3:
        cmp edi, dword ptr [esi + 0x4]
        jne L_body
        call ebp
    L_body:
        mov ebp, dword ptr [edi + 0x28]
        cmp byte ptr [ebp + 0x19c], 0
        jne L_chk_19d
        mov ecx, dword ptr [esp + 0x14]
        push ebp
        call ext_005BED50
    L_chk_19d:
        cmp byte ptr [ebp + 0x19d], 0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0x20c]
        mov ebx, dword ptr [edx + 0x190]
        test ebx, ebx
        je L_restore_ebx
        mov esi, dword ptr [ebx + 0x1d4]
        cmp esi, dword ptr [ebx + 0x1d8]
        jbe L_inner_a
        call dword ptr [mem_00925134]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_inner_a:
        mov edi, dword ptr [ebx + 0x1d8]
        cmp dword ptr [ebx + 0x1d4], edi
        jbe L_inner_b
        call dword ptr [mem_00925134]
    L_inner_b:
        cmp esi, edi
        je L_restore_ebx
        cmp esi, dword ptr [ebx + 0x1d8]
        jb L_inner_c
        call dword ptr [mem_00925134]
    L_inner_c:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x22c]
        test ecx, ecx
        je L_inner_d
        cmp ecx, dword ptr [esp + 0x10]
        je L_inner_d
        push ebp
        call ext_005BED50
    L_inner_d:
        cmp esi, dword ptr [ebx + 0x1d8]
        jb L_inner_e
        call dword ptr [mem_00925134]
    L_inner_e:
        add esi, 0x4
        jmp L_inner_a
    L_restore_ebx:
        mov ebx, dword ptr [esp + 0x10]
    L_chk_19e:
        cmp byte ptr [ebp + 0x19e], 0
        jne L_tail
        mov esi, dword ptr [esp + 0x14]
    L_walk:
        push ebp
        mov ecx, esi
        call ext_005BED50
        mov esi, dword ptr [esi + 0x20c]
        test esi, esi
        je L_walk_null
        mov esi, dword ptr [esi + 0x228]
        jmp L_walk_chk
    L_walk_null:
        xor esi, esi
    L_walk_chk:
        test esi, esi
        jne L_walk
    L_tail:
        lea ecx, [esp + 0x18]
        call ext_00673C20
        mov edi, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_loop
    L_pop_exit:
        pop ebp
    L_exit:
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x005B6A10] sub_005B6A10 (99 bytes)
extern "C" void ext_00647F20();
extern "C" void ext_00694840();
extern "C" __declspec(naked) void __fastcall fn_005B6A10(void* self) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x158]
        test eax, eax
        je short L_5B6A68
        fldz
        lea ecx, [esp + 0x4]
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0xac]
        call ext_00647F20
        lea edx, [esi + 0x194]
        push edx
        lea ecx, [esp + 0x8]
        call ext_00694840
L_5B6A68:
        lea eax, [esi + 0x194]
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x005B6A80] sub_005B6A80 (99 bytes)
extern "C" void ext_00647F20();
extern "C" void ext_00694880();
extern "C" __declspec(naked) void __fastcall fn_005B6A80(void* self) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x158]
        test eax, eax
        je short L_5B6A68
        fldz
        lea ecx, [esp + 0x4]
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0xac]
        call ext_00647F20
        lea edx, [esi + 0x1a0]
        push edx
        lea ecx, [esp + 0x8]
        call ext_00694880
    L_5B6A68:
        lea eax, [esi + 0x1a0]
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x005B6D20] sub_005B6D20 (98 bytes)
extern "C" void ext_00647FB0();
extern "C" void ext_006951A0();

extern "C" __declspec(naked) void __fastcall fn_005B6D20(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x158], 0x0
        je done
        fldz
        mov eax, dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0xc]
        push eax
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x8]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        call ext_006951A0
        mov edx, dword ptr [esi + 0x158]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [edx + 0xac]
        call ext_00647FB0
    done:
        pop esi
        add esp, 0x24
        ret 4
    }
}

extern "C" void ext_005CE8C0();
extern "C" void ext_00694480();
extern "C" int mem_00B40640;

// [0x005B71E0] sub_005B71E0 (96 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B71E0(void* self, int edx_unused, const float* vec) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [eax]
        mov edx, dword ptr [mem_00B40640]
        fstp dword ptr [esp]
        push esi
        fld dword ptr [eax + 4]
        mov esi, ecx
        fstp dword ptr [esp + 8]
        lea ecx, [esi + 4]
        fld dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0xC]
        fld1
        push edx
        fstp dword ptr [esp + 0x14]
        call eax
        push eax
        lea ecx, [esp + 8]
        call ext_00694480
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        pop esi
        je zero_ret
        lea edx, [esp]
        push edx
        call ext_005CE8C0
        add esp, 0x10
        ret 4
    zero_ret:
        fldz
        add esp, 0x10
        ret 4
    }
}

// [0x005B6D90] sub_005B6D90 (98 bytes)
extern "C" void ext_00647FB0();
extern "C" void ext_006951E0();

extern "C" __declspec(naked) void __fastcall fn_005B6D90(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x158], 0x0
        je done
        fldz
        mov eax, dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0xc]
        push eax
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x8]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        call ext_006951E0
        mov edx, dword ptr [esi + 0x158]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [edx + 0xac]
        call ext_00647FB0
    done:
        pop esi
        add esp, 0x24
        ret 4
    }
}

extern "C" void ext_005CE8B0();
extern "C" void ext_00694480();
extern "C" int mem_00B40640;
extern "C" float mem_0096091C;

// [0x005B7060] sub_005B7060 (124 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B7060(void* self, int edx_unused, const float* arg) {
    __asm {
        sub esp, 0x20
        fldz
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [mem_00B40640]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        push esi
        fst dword ptr [esp + 0x18]
        mov esi, ecx
        fstp dword ptr [esp + 0x14]
        lea ecx, [esi + 0x4]
        fld dword ptr [eax]
        push edx
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [ecx]
        fstp dword ptr [esp + 0x10]
        fld1
        mov eax, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x14]
        call eax
        push eax
        lea ecx, [esp + 0x8]
        call ext_00694480
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        pop esi
        je L_null
        lea edx, [esp]
        push edx
        lea eax, [esp + 0x14]
        push eax
        call ext_005CE8B0
        add esp, 0x20
        ret 4
    L_null:
        fld dword ptr [mem_0096091C]
        add esp, 0x20
        ret 4
    }
}

// [0x005B70E0] sub_005B70E0 (241 bytes)
extern "C" void ext_005CE8B0();
extern "C" void ext_006943B0();
extern "C" void ext_00694480();
extern "C" void ext_006A6C87();
extern "C" int mem_00B43C60;
extern "C" int mem_00B43C5C;
extern "C" int mem_00B43C58;
extern "C" int mem_00B43C54;
extern "C" int mem_00B43C50;
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void* __fastcall fn_005B70E0(void* self, int edx_unused, const float* v) {
    __asm {
        fldz
        sub esp, 0x20
        push esi
        mov eax, 1
        test byte ptr [mem_00B43C60], al
        push edi
        mov edi, ecx
        jne short L_join_5B70E0
        or dword ptr [mem_00B43C60], eax
        fst dword ptr [mem_00B43C5C]
        fst dword ptr [mem_00B43C58]
        push 0x91df20
        fst dword ptr [mem_00B43C54]
        fstp dword ptr [mem_00B43C50]
        call ext_006A6C87
        fldz
        add esp, 4
    L_join_5B70E0:
        mov eax, dword ptr [esp+0x2c]
        fst dword ptr [mem_00B43C5C]
        mov edx, dword ptr [mem_00B40640]
        fst dword ptr [mem_00B43C58]
        fst dword ptr [mem_00B43C54]
        lea ecx, [edi+4]
        fstp dword ptr [mem_00B43C50]
        push edx
        fld dword ptr [eax]
        fstp dword ptr [esp+0xc]
        fld dword ptr [eax+4]
        fstp dword ptr [esp+0x10]
        fld dword ptr [eax+8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax+0x14]
        fstp dword ptr [esp+0x14]
        fld1
        fstp dword ptr [esp+0x18]
        call eax
        mov esi, eax
        push esi
        lea ecx, [esp+0xc]
        call ext_00694480
        mov ecx, dword ptr [edi+0x158]
        test ecx, ecx
        je short L_skip_5B70E0
        lea edx, [esp+0x8]
        push edx
        push offset mem_00B43C50
        call ext_005CE8B0
        fstp st(0)
    L_skip_5B70E0:
        push esi
        lea eax, [esp+0x1c]
        push eax
        mov ecx, offset mem_00B43C50
        call ext_006943B0
        fld dword ptr [eax]
        fstp dword ptr [mem_00B43C50]
        pop edi
        fld dword ptr [eax+4]
        pop esi
        fstp dword ptr [mem_00B43C54]
        fld dword ptr [eax+8]
        fstp dword ptr [mem_00B43C58]
        fld dword ptr [eax+0xc]
        mov eax, offset mem_00B43C50
        fstp dword ptr [mem_00B43C5C]
        add esp, 0x20
        ret 4
    }
}

// [0x005B6AF0] sub_005B6AF0 (99 bytes)
extern "C" void ext_00647F20();
extern "C" void ext_00694D80();
extern "C" __declspec(naked) void __fastcall fn_005B6AF0(void* self) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x158]
        test eax, eax
        je short L_5B6B48
        fldz
        lea ecx, [esp + 0x4]
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0xac]
        call ext_00647F20
        lea edx, [esi + 0x1ac]
        push edx
        lea ecx, [esp + 0x8]
        call ext_00694D80
    L_5B6B48:
        lea eax, [esi + 0x1ac]
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x005B67E0] sub_005B67E0 (103 bytes)
extern "C" void ext_00647F20();
extern "C" void ext_00694D80();

extern "C" __declspec(naked) void __fastcall fn_005B67E0(void* self, int edx_unused, void* out) {
    __asm {
        sub esp, 0x24
        fldz
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        fld1
        fst dword ptr [esp]
        fst dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x20]
        je L_skip_5B67E0
        lea ecx, [esp]
        fstp st(0)
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        call ext_00647F20
        fldz
    L_skip_5B67E0:
        push esi
        mov esi, dword ptr [esp + 0x2c]
        fst dword ptr [esi + 0x8]
        push esi
        fst dword ptr [esi + 0x4]
        lea ecx, [esp + 0x8]
        fstp dword ptr [esi]
        call ext_00694D80
        mov eax, esi
        pop esi
        add esp, 0x24
        ret 0x4
    }
}

// [0x005BF060] sub_005BF060 (206 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00A895A0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005BF060(void* self) {
    __asm {
        push -0x1
        push 0x8a3e82
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x68
        push ebx
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x84]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x84], 0x0
        call ext_005A07A0
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je L_invalid
        cmp edi, esi
        je L_valid
    L_invalid:
        call dword ptr [mem_00925134]
    L_valid:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ebx
        jne L_skip_throw
        mov edx, dword ptr [mem_00A895A0]
        push edx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x84]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x84], 0x1
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x34]
        push edx
        call ext_006A6DD2
    L_skip_throw:
        push eax
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AE1B0
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0x7c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x74]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x74
        ret 0x1c
    }
}

// [0x005B69A0] sub_005B69A0 (101 bytes)
extern "C" void ext_00647F20();
extern "C" void ext_00694B60();
extern "C" __declspec(naked) void __fastcall fn_005B69A0(void* self) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x158]
        test eax, eax
        je short L_5B69FA
        fldz
        lea ecx, [esp + 0x4]
        fst dword ptr [esp + 0xc]
        push ecx
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x20]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0xac]
        call ext_00647F20
        lea edx, [esi + 0x188]
        push edx
        push 0
        lea ecx, [esp + 0xc]
        call ext_00694B60
    L_5B69FA:
        lea eax, [esi + 0x188]
        pop esi
        add esp, 0x24
        ret
    }
}

// [0x005BF330] sub_005BF330 (206 bytes)
extern "C" int mem_00A895A4;
extern "C" __declspec(naked) void __fastcall fn_005BF330(void* self) {
    __asm {
        push -0x1
        push 0x8a3e82
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x68
        push ebx
        push esi
        push edi
        mov esi, ecx
        lea eax, [esp + 0x84]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x84], 0x0
        call ext_005A07A0
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov ebx, dword ptr [esi + 0x4]
        je L_invalid
        cmp edi, esi
        je L_valid
    L_invalid:
        call dword ptr [mem_00925134]
    L_valid:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ebx
        jne L_skip_throw
        mov edx, dword ptr [mem_00A895A4]
        push edx
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x84]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x84], 0x1
        call ext_0041FF30
        push 0x9d3748
        lea edx, [esp + 0x34]
        push edx
        call ext_006A6DD2
    L_skip_throw:
        push eax
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_005AE1B0
        lea ecx, [esp + 0x84]
        mov dword ptr [esp + 0x7c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x74]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x74
        ret 0x1c
    }
}

// [0x005BEF60] sub_005BEF60 (247 bytes)
extern "C" __declspec(naked) void __fastcall fn_005BEF60(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00A895A0]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x005BF230] sub_005BF230 (247 bytes)
extern "C" __declspec(naked) void __fastcall fn_005BF230(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00A895A4]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x005B6CB0] sub_005B6CB0 (100 bytes)
extern "C" void ext_00647FB0();
extern "C" void ext_00694A70();

extern "C" __declspec(naked) void __fastcall fn_005B6CB0(void* self, int edx_unused, float a1) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x158], 0x0
        je done
        fldz
        mov eax, dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0xc]
        push eax
        fst dword ptr [esp + 0xc]
        push 0x0
        fst dword ptr [esp + 0x20]
        lea ecx, [esp + 0xc]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x24]
        fld1
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        call ext_00694A70
        mov edx, dword ptr [esi + 0x158]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [edx + 0xac]
        call ext_00647FB0
    done:
        pop esi
        add esp, 0x24
        ret 4
    }
}

// [0x005BFDE0] sub_005BFDE0 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00A2E458;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005BFDE0(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00A2E458]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x005BFEE0] sub_005BFEE0 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00A2E45C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005BFEE0(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00A2E45C]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x005BFFE0] sub_005BFFE0 (247 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_005A07A0();
extern "C" void ext_005AE1B0();
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00AC74E4;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005BFFE0(void* self) {
    __asm {
        push    -1
        push    0x8a3e82
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x88], 0
        call    ext_005A07A0
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        mov     ebp, dword ptr [esi + 0x4]
        je      L_1
        cmp     edi, esi
        je      L_2
    L_1:
        call    dword ptr [mem_00925134]
    L_2:
        mov     ebx, dword ptr [esp + 0x14]
        cmp     ebx, ebp
        jne     L_3
        mov     edx, dword ptr [mem_00AC74E4]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     byte ptr [esp + 0x88], 1
        call    ext_0041FF30
        push    0x9d3748
        lea     edx, [esp + 0x38]
        push    edx
        call    ext_006A6DD2
    L_3:
        test    edi, edi
        jne     L_4
        call    dword ptr [mem_00925134]
    L_4:
        cmp     ebx, dword ptr [edi + 0x4]
        jne     L_5
        call    dword ptr [mem_00925134]
    L_5:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        je      L_6
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        push    1
        call    edx
    L_6:
        push    ebx
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    ext_005AE1B0
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x78]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x74
        ret     0x1c
    }
}

// [0x005BE8B0] sub_005BE8B0 (224 bytes)
extern "C" void ext_00594000();
extern "C" void ext_005CF340();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_005BE8B0(void* self) {
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        call    ext_00594000
        mov     eax, dword ptr [eax + 0xf8]
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0xc], ecx
        add     ecx, 1
        mov     dword ptr [eax + 0x14], ecx
        mov     ecx, dword ptr [ebx + 0x160]
        mov     esi, dword ptr [ecx]
        lea     eax, [ebx + 0x15c]
        mov     edi, eax
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], esi
        push    ebp
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_loop:
        test    edi, edi
        mov     ebp, dword ptr [ebx + 0x160]
        lea     eax, [ebx + 0x15c]
        je      L_inv1
        cmp     edi, eax
        je      L_chk2
    L_inv1:
        call    dword ptr [mem_00925134]
    L_chk2:
        cmp     esi, ebp
        je      L_done_loop
        test    edi, edi
        jne     L_chk3
        call    dword ptr [mem_00925134]
    L_chk3:
        cmp     esi, dword ptr [edi + 4]
        jne     L_chk4
        call    dword ptr [mem_00925134]
    L_chk4:
        mov     edx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 0x28]
        mov     eax, dword ptr [ebx + 4]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [eax + 0x14]
        mov     ebp, dword ptr [ebx + 0x158]
        lea     ecx, [ebx + 4]
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        push    edx
        add     esi, 0xfc
        call    eax
        mov     edx, dword ptr [esi]
        push    eax
        push    ebp
        mov     ecx, edi
        call    edx
        lea     ecx, [esp + 0x14]
        call    ext_00673C20
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x14]
        jmp     L_loop
    L_done_loop:
        mov     esi, dword ptr [ebx + 0x158]
        test    esi, esi
        pop     ebp
        je      L_exit
        mov     eax, dword ptr [ebx + 4]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [eax + 0x14]
        lea     ecx, [ebx + 4]
        push    edx
        call    eax
        push    eax
        mov     ecx, esi
        call    ext_005CF340
    L_exit:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}

// [0x005B02E0] sub_005B02E0 (37 bytes)
extern "C" void ext_005AE5B0();
extern "C" void ext_005AE720();
extern "C" void ext_005AE8C0();
extern "C" void ext_005B0080();
extern "C" void ext_005AF8B0();

extern "C" __declspec(naked) void __fastcall fn_005B02E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005AE5B0
        mov ecx, esi
        call ext_005AE720
        mov ecx, esi
        call ext_005B0080
        mov ecx, esi
        call ext_005AE8C0
        mov ecx, esi
        pop esi
        jmp ext_005AF8B0
    }
}

extern "C" void ext_005BF460();
extern "C" void ext_005DF5C0();
extern "C" int mem_00924FE0;

// [0x005BF4E0] sub_005BF4E0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_005BF4E0(void* self, int edx_unused, const void* str) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 8]
        push esi
        sub esp, 0x1c
        mov esi, ecx
        mov ecx, esp
        mov dword ptr [esp + 0x20], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [esi + 0x15c]
        call ext_005DF5C0
        push eax
        mov ecx, esi
        call ext_005BF460
        pop esi
        pop ecx
        ret 4
    }
}

// [0x005B3E90] sub_005B3E90 (350 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_005B34C0();
extern "C" void ext_00662810();
extern "C" int mem_00924FE8;
extern "C" int mem_00924EA8;
extern "C" int mem_00925134;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005B3E90(void* self, int edx_unused, void* arg1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x87deeb
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        push esi
        mov esi, ecx
        call ext_005B34C0
        test al, al
        jne loc_5B3FD8
        push ebx
        push ebp
        push edi
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE8]
        mov dword ptr [esp + 0x70], 0
        mov dword ptr [esp + 0x10], 0xb43c44
        lea ebx, [esi + 4]
        jmp loc_5B3EE0

        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    loc_5B3EE0:
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924EA8]
        mov esi, dword ptr [ebx]
        cmp esi, dword ptr [ebx + 4]
        lea edi, [ebx - 4]
        jbe loc_5B3F00
        call dword ptr [mem_00925134]

        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

    loc_5B3F00:
        mov ebp, dword ptr [ebx + 4]
        cmp dword ptr [ebx], ebp
        ja loc_5B3F0B
        cmp ebp, ebp
        jbe loc_5B3F11
    loc_5B3F0B:
        call dword ptr [mem_00925134]
    loc_5B3F11:
        cmp edi, edi
        je loc_5B3F1B
        call dword ptr [mem_00925134]
    loc_5B3F1B:
        cmp esi, ebp
        je loc_5B3F94
        cmp esi, dword ptr [edi + 8]
        jb loc_5B3F2A
        call dword ptr [mem_00925134]
    loc_5B3F2A:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x50]
        push ecx
        call ext_00404F00
        push 0x92ab78
        push eax
        lea edx, [esp + 0x40]
        push edx
        mov byte ptr [esp + 0x84], 1
        call dword ptr [mem_00924ECC]
        add esp, 0x14
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x74], 2
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x70], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], 0
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [edi + 8]
        jb loc_5B3F8C
        call dword ptr [mem_00925134]
    loc_5B3F8C:
        add esi, 4
        jmp loc_5B3F00
    loc_5B3F94:
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x78]
        lea eax, [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_00662810
        add esi, 4
        add esp, 0xc
        add ebx, 0x10
        cmp esi, 0xb43c50
        mov dword ptr [esp + 0x10], esi
        jl loc_5B3EE0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x70], 0xffffffff
        call dword ptr [mem_00924FF4]
        pop edi
        pop ebp
        pop ebx
    loc_5B3FD8:
        mov ecx, dword ptr [esp + 0x5c]
        mov eax, dword ptr [esp + 0x6c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret 4
    }
}

// [0x005B4070] sub_005B4070 (186 bytes)
extern "C" void ext_005B3E90();
extern "C" void ext_006404E0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005B4070(void* self) {
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        je      loc_5B4094
        mov     ecx, dword ptr [edi + 0x8]
        sub     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        jne     loc_5B409B
    loc_5B4094:
        mov     eax, 0xb53b30
        pop     edi
        ret
    loc_5B409B:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        je      loc_5B40B4
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        call    ext_006404E0
        mov     ebp, eax
        jmp     loc_5B40B8
    loc_5B40B4:
        mov     ebp, dword ptr [esp + 0x18]
    loc_5B40B8:
        mov     esi, dword ptr [edi + 0x4]
        cmp     esi, dword ptr [edi + 0x8]
        jbe     loc_5B40C6
        call    dword ptr [mem_00925134]
    loc_5B40C6:
        mov     eax, dword ptr [edi + 0x8]
        cmp     dword ptr [edi + 0x4], eax
        mov     dword ptr [esp + 0x14], eax
        jbe     loc_5B40D8
        call    dword ptr [mem_00925134]
    loc_5B40D8:
        mov     ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    loc_5B40E0:
        cmp     esi, dword ptr [esp + 0x14]
        je      loc_5B4123
        test    ebx, ebx
        je      loc_5B4100
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_5B40F5
        call    dword ptr [mem_00925134]
    loc_5B40F5:
        push    ebx
        mov     ecx, ebp
        call    ext_006404E0
        push    eax
        jmp     loc_5B410C
    loc_5B4100:
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_5B410B
        call    dword ptr [mem_00925134]
    loc_5B410B:
        push    ebp
    loc_5B410C:
        mov     ecx, esi
        call    ext_005B3E90
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_5B411E
        call    dword ptr [mem_00925134]
    loc_5B411E:
        add     esi, 0x30
        jmp     loc_5B40E0
    loc_5B4123:
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     edi
        ret
    }
}

// [0x005BF460] sub_005BF460 (59 bytes)
extern "C" void ext_00587470(void*);
extern "C" void ext_005BEF60();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005BF460(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        push esi
        call ext_00587470
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x15c]
        call ext_005BEF60
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x005BF4A0] sub_005BF4A0 (59 bytes)
extern "C" void ext_00587470(void*);
extern "C" void ext_005BF060();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005BF4A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        push esi
        call ext_00587470
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x15c]
        call ext_005BF060
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x005BF570] sub_005BF570 (59 bytes)
extern "C" void ext_005BF230();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005BF570(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        push esi
        call ext_00587470
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x168]
        call ext_005BF230
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x005BF5B0] sub_005BF5B0 (59 bytes)
extern "C" void ext_00587470(void*);
extern "C" void ext_005BF330();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005BF5B0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        push esi
        call ext_00587470
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x28], esp
        push eax
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x168]
        call ext_005BF330
    done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x005B0780] sub_005B0780 (150 bytes)
extern "C" void ext_0048A0E0();
extern "C" int mem_00924EA8;
extern "C" void __fastcall fn_005B0780(void* self) {
    unsigned char* s = (unsigned char*)self;
    unsigned char* p = *(unsigned char**)(s + 0xc);
    int v = *(int*)(p + 0x4);
    typedef void (__thiscall *sub_fn)(void*, int);
    sub_fn sub = (sub_fn)ext_0048A0E0;

    unsigned char* h = s + 0x8;
    sub(h, v);
    unsigned char* n = *(unsigned char**)(h + 0x4);
    *(unsigned char**)(n + 0x4) = n;
    n = *(unsigned char**)(h + 0x4);
    *(int*)(h + 0x8) = 0;
    *(unsigned char**)n = n;
    n = *(unsigned char**)(h + 0x4);
    *(unsigned char**)(n + 0x8) = n;

    unsigned char* q = *(unsigned char**)(s + 0x1c);
    int w = *(int*)(q + 0x4);
    h = s + 0x18;
    sub(h, w);
    n = *(unsigned char**)(h + 0x4);
    *(unsigned char**)(n + 0x4) = n;
    n = *(unsigned char**)(h + 0x4);
    *(int*)(h + 0x8) = 0;
    *(unsigned char**)n = n;
    n = *(unsigned char**)(h + 0x4);
    *(unsigned char**)(n + 0x8) = n;

    typedef void (__thiscall *clear_fn)(void*);
    (*(clear_fn*)&mem_00924EA8)(s + 0x64);

    *(float*)(s + 0x24) = 1.0f;
    *(float*)(s + 0x28) = 0.0f;
    *(float*)(s + 0x2c) = 0.0f;
    *(float*)(s + 0x30) = 0.0f;
    *(float*)(s + 0x34) = 0.0f;
    *(float*)(s + 0x38) = 1.0f;
    *(float*)(s + 0x3c) = 0.0f;
    *(float*)(s + 0x40) = 0.0f;
    *(float*)(s + 0x44) = 0.0f;
    *(float*)(s + 0x48) = 0.0f;
    *(float*)(s + 0x4c) = 1.0f;
    *(float*)(s + 0x50) = 0.0f;
    *(float*)(s + 0x54) = 0.0f;
    *(float*)(s + 0x58) = 0.0f;
    *(float*)(s + 0x5c) = 0.0f;
    *(float*)(s + 0x60) = 1.0f;
}

// [0x005B0D90] sub_005B0D90 (198 bytes)
extern "C" void ext_0048AC80();
extern "C" void ext_0065C660();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005B0D90(void* self) {
    __asm {
        push    -1
        push    0x8a30de
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x93e184
        lea     ecx, [esi + 0x64]
        mov     dword ptr [esp + 0x20], 2
        call    dword ptr [mem_00924FF4]
        lea     edi, [esi + 0x18]
        mov     dword ptr [esi + 0x14], 0x93e17c
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [eax]
        push    eax
        push    edi
        push    ecx
        push    edi
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0x34], 1
        call    ext_0048AC80
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    ext_006A5C5C
        xor     ebx, ebx
        mov     dword ptr [edi + 4], ebx
        mov     dword ptr [edi + 8], ebx
        add     esp, 4
        lea     edi, [esi + 8]
        mov     dword ptr [esi + 4], 0x93e17c
        mov     eax, dword ptr [edi + 4]
        mov     ecx, dword ptr [eax]
        push    eax
        push    edi
        push    ecx
        push    edi
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x34], bl
        call    ext_0048AC80
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    ext_006A5C5C
        add     esp, 4
        mov     ecx, esi
        mov     dword ptr [edi + 4], ebx
        mov     dword ptr [edi + 8], ebx
        mov     dword ptr [esp + 0x20], -1
        call    ext_0065C660
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x18
        ret
    }
}

// [0x005B47A0] sub_005B47A0 (83 bytes)
extern "C" void ext_004AFF30();
extern "C" __declspec(naked) void* __cdecl fn_005B47A0(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, dword ptr [esp + 0x8]
        je loc_5B47EE
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
loc_5B47B2:
        mov edi, dword ptr [esp + 0x14]
        mov esi, ebp
        sub edi, ebp
        mov ebx, 0x3
        nop
loc_5B47C0:
        lea ecx, [edi + esi]
        push ecx
        mov ecx, esi
        call ext_004AFF30
        add esi, 0x10
        sub ebx, 0x1
        jne loc_5B47C0
        mov eax, dword ptr [esp + 0x14]
        add eax, 0x30
        add ebp, 0x30
        cmp eax, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], eax
        jne loc_5B47B2
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
loc_5B47EE:
        mov eax, dword ptr [esp + 0xc]
        ret
    }
}

// [0x005B4800] sub_005B4800 (88 bytes)
extern "C" void ext_005B47A0();

extern "C" __declspec(naked) void* __cdecl fn_005B4800(void* a1, void* a2, void* a3) {
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
        call ext_005B47A0
        sub esi, ebx
        mov eax, 0x2aaaaaab
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 2*eax]
        add esp, 0x18
        shl eax, 4
        add eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret
    }
}

// [0x005B5170] sub_005B5170 (105 bytes)
extern "C" void ext_005739E0();
extern "C" void ext_005B4800();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_005B5170(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        test ebp, ebp
        push esi
        mov esi, ecx
        je fail
        cmp ebp, dword ptr [esp + 1Ch]
        je ok
    fail:
        call dword ptr [mem_00925134]
    ok:
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 20h]
        cmp ebx, ecx
        je done
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [esp + 18h], 0
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        push ebx
        push eax
        push ecx
        call ext_005B4800
        mov edi, eax
        mov eax, dword ptr [esi + 8]
        add esp, 18h
        push eax
        push edi
        mov ecx, esi
        call ext_005739E0
        mov dword ptr [esi + 8], edi
        pop edi
    done:
        mov eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [eax], ebp
        pop ebp
        mov dword ptr [eax + 4], ebx
        pop ebx
        ret 14h
    }
}

// [0x005B5B50] sub_005B5B50 (73 bytes)
extern "C" void ext_005B5A70();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005B5B50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x881709
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0xc], 0
        call ext_005B5A70
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x1c
    }
}

// [0x005B5A10] sub_005B5A10 (89 bytes)
extern "C" void ext_005B5380();
extern "C" int mem_0093F8EC;
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __fastcall fn_005B5A10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x0c]
        test ecx, ecx
        je loc_5B5A22
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
loc_5B5A22:
        mov dword ptr [esi + 0x0c], 0
        push 1
        mov ecx, esi
        mov dword ptr [esi + 8], 1
        call ext_005B5380
        fldz
        mov byte ptr [esi + 0x44], 1
        fst dword ptr [esi + 0x10]
        fst dword ptr [esi + 0x14]
        lea ecx, [esi + 0x28]
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x20]
        fstp dword ptr [esi + 0x24]
        fld dword ptr [mem_0093F8EC]
        fstp dword ptr [esi + 0x10]
        call dword ptr [mem_00924EA8]
        mov byte ptr [esi + 4], 1
        pop esi
        ret
    }
}

// [0x005B5AF0] sub_005B5AF0 (92 bytes)
extern "C" void ext_005B5780();
extern "C" void ext_006A6C87();
extern "C" int mem_00B43614;

extern "C" __declspec(naked) void __fastcall fn_005B5AF0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a36ee
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B43614], al
        jne done_005B5AF0
        or dword ptr [mem_00B43614], eax
        push 0x0
        mov ecx, 0xb435c8
        mov dword ptr [esp + 0xc], 0x0
        call ext_005B5780
        push 0x91dcf0
        call ext_006A6C87
        add esp, 0x4
    done_005B5AF0:
        mov ecx, dword ptr [esp]
        mov eax, 0xb435c8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x005BF400] sub_005BF400 (93 bytes)
extern "C" void ext_00587920();
extern "C" void ext_005BE710();
extern "C" void ext_005BEE60();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005BF400(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 24h]
        mov ecx, esi
        lea ebx, [edi + 15ch]
        call edx
        push eax
        push ebx
        call ext_005BE710
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 24h]
        add esp, 8
        push esi
        mov ecx, esi
        call edx
        sub esp, 1ch
        mov ecx, esp
        mov dword ptr [esp + 30h], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, ebx
        call ext_005BEE60
        push 0
        push esi
        mov ecx, edi
        mov dword ptr [esi + 164h], edi
        call ext_00587920
done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x005BF510] sub_005BF510 (93 bytes)
extern "C" void ext_00587920();
extern "C" void ext_005BE710();
extern "C" void ext_005BF130();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005BF510(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        test esi, esi
        push edi
        mov edi, ecx
        je done
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 24h]
        mov ecx, esi
        lea ebx, [edi + 168h]
        call edx
        push eax
        push ebx
        call ext_005BE710
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 24h]
        add esp, 8
        push esi
        mov ecx, esi
        call edx
        sub esp, 1ch
        mov ecx, esp
        mov dword ptr [esp + 30h], esp
        push eax
        call dword ptr [mem_00924FE0]
        mov ecx, ebx
        call ext_005BF130
        push 0
        push esi
        mov ecx, edi
        mov dword ptr [esi + 164h], edi
        call ext_00587920
done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

extern "C" void ext_005AED80();
extern "C" void __fastcall ext_005B02E0(void* self);
extern "C" int mem_00B40640;

// [0x005B0310] sub_005B0310 (96 bytes)
extern "C" void __fastcall fn_005B0310(void* self, int edx_unused, void* a1) {
    ((void (__thiscall *)(void*, void*))ext_005AED80)(self, a1 ? (char*)a1 + 4 : 0);
    ext_005B02E0(self);
    void* obj = (char*)a1 + 0x164;
    typedef float* (__thiscall *Fn)(void*, int);
    Fn fn = (*(Fn**)obj)[5];
    float* res = fn(obj, mem_00B40640);
    float* dst = (float*)((char*)self + 0x200);
    dst[0] = res[0];
    dst[1] = res[1];
    dst[2] = res[2];
    dst[3] = res[3];
}

// [0x005B64E0] sub_005B64E0 (239 bytes)
extern "C" void ext_00660A50();
extern "C" void ext_006262D0();
extern "C" void ext_00671F30();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005B64E0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x30
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x8], edi
        call ext_00660A50
        mov ecx, dword ptr [esp + 0x4c]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        push edi
        push edi
        push edi
        push ecx
        mov ecx, eax
        call edx
        push edi
        push 0xa2fb78
        push 0xa2e2f8
        push edi
        push eax
        call ext_006A6E9E
        add esp, 0x14
        cmp eax, edi
        je fallback
        mov ecx, dword ptr [esi + 0x20c]
        mov ecx, dword ptr [ecx + 0x18c]
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x1c], edi
        call ext_006262D0
        mov esi, eax
        add esp, 0x4
        cmp esi, edi
        je fallback
        push 0x960940
        lea ecx, [esp + 0x20]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x40], edi
        mov edi, dword ptr [esp + 0x48]
        push ecx
        push edi
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x40], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, edi
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 8
    fallback:
        mov esi, dword ptr [esp + 0x48]
        push esi
        call ext_00671F30
        mov ecx, dword ptr [esp + 0x3c]
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x3c
        ret 8
    }
}

// [0x005B44B0] sub_005B44B0 (752 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00427550();
extern "C" void ext_005B4070();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_0067EF60();
extern "C" void ext_0067F130();
extern "C" int mem_00A9EF58;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F724;
extern "C" int mem_00924FEC;
extern "C" int mem_00A9F8F0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FC8;
extern "C" int mem_00A9F640;
extern "C" int mem_00A9FAC8;
extern "C" int mem_00A9F3C4;
extern "C" int mem_00A9FA18;
extern "C" int mem_00A9F328;
extern "C" int mem_00A9F840;
extern "C" int mem_00A9F110;
extern "C" int mem_00A9EED0;
extern "C" int mem_00A9EEE0;

extern "C" __declspec(naked) void __fastcall fn_005B44B0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a3580
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x94
        mov eax, dword ptr [mem_00A9EF58]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xb4]
        push eax
        call ext_006404E0
        mov ecx, dword ptr [mem_00A9FA6C]
        mov edi, eax
        push ecx
        mov ecx, edi
        call ext_00640110
        mov edx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [edx*4 + 0xa88a40]
        push ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        call ext_00427550
        cmp byte ptr [esi + 0x44], 0
        jne L_452C
        mov eax, dword ptr [mem_00A9F724]
        push eax
        mov ecx, edi
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x44]
        push ecx
        push eax
        call ext_00640A80
        add esp, 8
    L_452C:
        lea ebx, [esi + 0x28]
        mov ecx, ebx
        call dword ptr [mem_00924FEC]
        test al, al
        jne L_455F
        mov edx, dword ptr [mem_00A9F8F0]
        push edx
        mov ecx, edi
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
    L_455F:
        push 0x960844
        lea ecx, [esp + 0x54]
        call dword ptr [mem_00924FE4]
        xor ebp, ebp
        push 0x96083c
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0xb0], ebp
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [eax*4 + 0x95f750], ebp
        mov byte ptr [esp + 0xac], 1
        jbe L_467B
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x10], ecx
    L_45A5:
        lea edx, [esp + 0x18]
        push ebp
        push edx
        call ext_00404F00
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x5c]
        push ecx
        lea edx, [esp + 0x98]
        push edx
        mov byte ptr [esp + 0xc0], 2
        call dword ptr [mem_00924FD0]
        mov ebx, eax
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x4c]
        push ecx
        lea edx, [esp + 0x88]
        push edx
        mov byte ptr [esp + 0xcc], 3
        call dword ptr [mem_00924FD0]
        add esp, 0x20
        mov dword ptr [esp + 0x14], eax
        mov ecx, ebx
        mov byte ptr [esp + 0xac], 4
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call dword ptr [mem_00924FF0]
        mov ebx, dword ptr [esp + 0x14]
        fld dword ptr [ebx]
        push eax
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        add esp, 0x10
        lea ecx, [esp + 0x6c]
        mov byte ptr [esp + 0xac], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x88]
        mov byte ptr [esp + 0xac], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0xac], 1
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi + 0x8]
        add ebp, 1
        add ebx, 4
        cmp ebp, dword ptr [eax*4 + 0x95f750]
        mov dword ptr [esp + 0x10], ebx
        jb L_45A5
    L_467B:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        call eax
        push 0x928b5d
        push eax
        call dword ptr [mem_00924FC8]
        add esp, 8
        test al, al
        je L_46C8
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        call eax
        mov ecx, dword ptr [mem_00A9F640]
        push ecx
        mov ecx, edi
        mov ebx, eax
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x18]
        call ext_00427550
    L_46C8:
        cmp dword ptr [esi + 0x8], 0xf
        jne L_475C
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x30]
        call eax
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov ebx, eax
        mov eax, dword ptr [edx + 0x38]
        call eax
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov ebp, eax
        mov eax, dword ptr [edx + 0x34]
        call eax
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [edx + 0x3c]
        call eax
        mov ecx, dword ptr [mem_00A9FAC8]
        mov edx, dword ptr [mem_00A9F3C4]
        push ecx
        push edx
        push edi
        push ebx
        mov esi, eax
        call ext_0067F130
        mov eax, dword ptr [mem_00A9FA18]
        mov ecx, dword ptr [mem_00A9F328]
        push eax
        push ecx
        push edi
        push ebp
        call ext_0067F130
        mov edx, dword ptr [mem_00A9F840]
        mov eax, dword ptr [mem_00A9F110]
        mov ecx, dword ptr [esp + 0x34]
        push edx
        push eax
        push edi
        push ecx
        call ext_0067F130
        mov edx, dword ptr [mem_00A9EED0]
        mov eax, dword ptr [mem_00A9EEE0]
        push edx
        push eax
        push edi
        push esi
        call ext_005B4070
        add esp, 0x40
    L_475C:
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0xac], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xac], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0xa4]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xa0
        ret 4
    }
}

extern "C" void ext_005881D0();
extern "C" void ext_0065F280();

// [0x005B6610] sub_005B6610 (311 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005B6610(void* self, int edx_unused, void* src) {
    __asm {
        sub esp, 0x0c
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push ebp
        push esi
        push edi
        push ebx
        mov edi, ecx
        call ext_005881D0
        lea eax, [ebx + 0xe4]
        push eax
        lea ecx, [edi + 0xe4]
        call ext_0065F280
        mov ecx, dword ptr [ebx + 0xe8]
        mov dword ptr [edi + 0xe8], ecx
        mov edx, dword ptr [ebx + 0xec]
        mov dword ptr [edi + 0xec], edx
        mov eax, dword ptr [ebx + 0xf0]
        mov edx, edi
        sub edx, ebx
        mov dword ptr [edi + 0xf0], eax
        lea ebp, [edi + 0xf4]
        lea esi, [ebx + 0xf8]
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x10], 7

    loc_5b6675:
        lea ecx, [esi - 4]
        cmp ebp, ecx
        je loc_5b66c2
        mov ecx, dword ptr [edx + esi]
        test ecx, ecx
        je loc_5b668f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x78]
        push ebp
        call eax
        mov edx, dword ptr [esp + 0x20]

    loc_5b668f:
        mov ecx, dword ptr [esi]
        mov dword ptr [edx + esi], ecx
        cmp dword ptr [esi], 0
        je loc_5b66b1
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        lea eax, [esi - 4]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call edx
        mov edx, dword ptr [esp + 0x20]
        jmp loc_5b66bd

    loc_5b66b1:
        mov dword ptr [esp + 0x14], 0
        lea eax, [esp + 0x14]

    loc_5b66bd:
        mov eax, dword ptr [eax]
        mov dword ptr [ebp], eax

    loc_5b66c2:
        add esi, 8
        add ebp, 8
        sub dword ptr [esp + 0x10], 1
        jne loc_5b6675

        fld dword ptr [ebx + 0x12c]
        mov eax, edi
        fstp dword ptr [edi + 0x12c]
        fld dword ptr [ebx + 0x130]
        fstp dword ptr [edi + 0x130]
        fld dword ptr [ebx + 0x134]
        fstp dword ptr [edi + 0x134]
        fld dword ptr [ebx + 0x138]
        fstp dword ptr [edi + 0x138]
        fld dword ptr [ebx + 0x13c]
        fstp dword ptr [edi + 0x13c]
        fld dword ptr [ebx + 0x140]
        fstp dword ptr [edi + 0x140]
        fld dword ptr [ebx + 0x144]
        fstp dword ptr [edi + 0x144]
        mov cl, byte ptr [ebx + 0x148]
        mov byte ptr [edi + 0x148], cl
        mov edx, dword ptr [ebx + 0x14c]
        mov dword ptr [edi + 0x14c], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x0c
        ret 4
    }
}

// [0x005BE460] sub_005BE460 (675 bytes)
extern "C" void ext_00587EE0();
extern "C" void ext_005A2F30();
extern "C" void ext_005B0E60();
extern "C" void ext_005B1B90();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FDC;
extern "C" int mem_00B40640;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_005BE460(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8a3e31
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xdc
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr [esp + 0x10], ecx
        xor ebp, ebp
        __asm _emit 0xeb __asm _emit 0x09
        __asm _emit 0x8d __asm _emit 0xa4 __asm _emit 0x24 __asm _emit 0 __asm _emit 0 __asm _emit 0 __asm _emit 0
    L_490:
        xor edi, edi
    L_492:
        push 0x178
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        cmp eax, edi
        mov dword ptr [esp + 0xf4], edi
        je L_4B9
        mov ecx, eax
        call ext_00587EE0
        mov esi, eax
        jmp L_4BB
    L_4B9:
        xor esi, esi
    L_4BB:
        mov dword ptr [esp + 0x14], esi
        mov eax, dword ptr [esp + 0x10]
        add eax, 0x14
        push eax
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0xf8], 1
        call dword ptr [mem_00924FDC]
        fldz
        mov ebx, dword ptr [esp + 0x100]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        push ebp
        mov ecx, ebx
        fstp dword ptr [esp + 0x24]
        mov dword ptr [esi + 0x170], edi
        call ext_005B1B90
        fstp dword ptr [esp + 4*ebp + 0x18]
        mov ecx, dword ptr [mem_00B40640]
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [eax + 0xc]
        lea edi, [esi + 4]
        push ecx
        mov ecx, edi
        call edx
        fld1
        fst dword ptr [eax]
        push 2
        fldz
        mov ecx, edi
        fst dword ptr [eax + 4]
        fst dword ptr [eax + 8]
        fst dword ptr [eax + 0xc]
        fst dword ptr [eax + 0x10]
        fst dword ptr [eax + 0x18]
        fst dword ptr [eax + 0x1c]
        fst dword ptr [eax + 0x20]
        fst dword ptr [eax + 0x24]
        fstp dword ptr [eax + 0x2c]
        fst dword ptr [eax + 0x14]
        fst dword ptr [eax + 0x28]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [eax + 0x34]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [eax + 0x38]
        fstp dword ptr [eax + 0x3c]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 4]
        call edx
        lea eax, [esp + 0xd0]
        push eax
        mov ecx, ebx
        call ext_005B0E60
        mov edi, eax
        lea ecx, [esp + 0x98]
        push ebp
        push ecx
        mov byte ptr [esp + 0xfc], 2
        call ext_00404F00
        mov ebx, eax
        mov eax, dword ptr [esp + 0x18]
        push 0x92f1b4
        add eax, 0x14
        push eax
        lea edx, [esp + 0x70]
        push edx
        mov byte ptr [esp + 0x108], 3
        call dword ptr [mem_00924ECC]
        push ebx
        mov ebx, dword ptr [mem_00924FD0]
        push eax
        lea eax, [esp + 0xd0]
        push eax
        mov byte ptr [esp + 0x114], 4
        call ebx
        push 0x92f150
        push eax
        lea ecx, [esp + 0xa4]
        push ecx
        mov byte ptr [esp + 0x120], 5
        call dword ptr [mem_00924ECC]
        push edi
        push eax
        lea edx, [esp + 0x78]
        push edx
        mov byte ptr [esp + 0x12c], 6
        call ebx
        add esp, 0x38
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x5c]
        mov ecx, esi
        mov byte ptr [esp + 0xf8], 7
        call eax
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0xf4], 6
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x7c]
        mov byte ptr [esp + 0xf4], 5
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xb4]
        mov byte ptr [esp + 0xf4], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0xf4], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x98]
        mov byte ptr [esp + 0xf4], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xd0]
        mov byte ptr [esp + 0xf4], 1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x10]
        push 0
        push esi
        call ext_00587920
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, esi
        call eax
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        push esi
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [esp + 0x104]
        mov byte ptr [esp + 0xfc], 8
        mov dword ptr [esp + 0x1c], 0
        call ext_005A2F30
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xf4], 1
        call dword ptr [mem_00924FF4]
        add ebp, 1
        cmp ebp, 4
        mov dword ptr [esp + 0xf4], -1
        jl L_490
        mov ecx, dword ptr [esp + 0xec]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xe8
        ret 8
    }
}

// [0x005B5A70] sub_005B5A70 (115 bytes)
extern "C" int mem_00924FC0;
extern "C" void ext_005B3630();

extern "C" __declspec(naked) void __fastcall fn_005B5A70(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0xc], 0
        sete byte ptr [esp + 0x13]
        xor esi, esi
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    L_loop:
        mov eax, dword ptr [esi*4 + mem_00A88A40]
        push eax
        push ebp
        call ebx
        add esp, 8
        test al, al
        jne L_found
        add esi, 1
        cmp esi, 0x18
        jl L_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    L_found:
        push esi
        mov ecx, edi
        call ext_005B3630
        push esi
        mov dword ptr [edi + 8], esi
        call ext_005B5380
        mov ecx, dword ptr [edi + 0x48]
        test ecx, ecx
        mov byte ptr [edi + 4], 1
        je L_done
        cmp byte ptr [esp + 0x13], 0
        jne L_done
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x005B5990] sub_005B5990 (118 bytes)
extern "C" void ext_005B5380();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_005B5990(void* self, int edx_unused, void* other) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        cmp esi, edi
        je done
        mov eax, dword ptr [edi + 0x8]
        push eax
        mov dword ptr [esi + 0x8], eax
        call ext_005B5380
        mov al, byte ptr [edi + 0x44]
        mov byte ptr [esi + 0x44], al
        fld dword ptr [edi + 0x10]
        fstp dword ptr [esi + 0x10]
        lea ecx, [edi + 0x28]
        fld dword ptr [edi + 0x14]
        push ecx
        fstp dword ptr [esi + 0x14]
        lea ecx, [esi + 0x28]
        fld dword ptr [edi + 0x18]
        fstp dword ptr [esi + 0x18]
        fld dword ptr [edi + 0x1c]
        fstp dword ptr [esi + 0x1c]
        fld dword ptr [edi + 0x20]
        fstp dword ptr [esi + 0x20]
        fld dword ptr [edi + 0x24]
        fstp dword ptr [esi + 0x24]
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [edi + 0xc]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        call eax
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        mov byte ptr [esi + 0x4], 0x1
        mov dword ptr [esi + 0x48], 0x0
    done:
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x005B5BA0] sub_005B5BA0 (132 bytes)
extern "C" void ext_005B5990();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_005B5BA0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a369f
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_00661980
        mov byte ptr [esi + 0x4], 0x1
        mov dword ptr [esi], 0x95f88c
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi + 0xc], 0x0
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        mov byte ptr [esp + 0x10], 0x2
        je skip_dtor_5B5BA0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    skip_dtor_5B5BA0:
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0xc], 0x0
        call ext_005B5990
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005B4980] sub_005B4980 (385 bytes)
extern "C" void ext_0059A140();
extern "C" void ext_0063EFE0();
extern "C" int mem_008A3614;
extern "C" int mem_00B43C44;
extern "C" int mem_00B43C50;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_0092509C;
extern "C" int mem_009250D4;
extern "C" int mem_009250DC;
extern "C" int mem_00925134;
extern "C" int mem_009250A0;

extern "C" __declspec(naked) void __fastcall fn_005B4980(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push offset mem_008A3614
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0D0h
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 10h]
        call dword ptr [mem_00924FE8]
        mov dword ptr [esp + 0E4h], 0
        mov ebx, offset mem_00B43C44
    L_loop:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebp + 8]
        push eax
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 34h]
        push ecx
        mov ecx, eax
        call edx
        push eax
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 0E8h], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 34h]
        mov byte ptr [esp + 0E4h], 0
        call dword ptr [mem_00924FF4]
        push 1
        push 3
        lea eax, [esp + 18h]
        push eax
        lea ecx, [esp + 5Ch]
        call dword ptr [mem_0092509C]
        lea ecx, [esp + 0Ch]
        push ecx
        lea ecx, [esp + 54h]
        mov byte ptr [esp + 0E8h], 2
        call dword ptr [mem_009250D4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        call dword ptr [mem_009250DC]
        test eax, eax
        je L_end
    L_inner:
        mov edx, dword ptr [esi + 4]
        test edx, edx
        jne L_nz
        xor ecx, ecx
        jmp L_cmp
    L_nz:
        mov ecx, dword ptr [esi + 8]
        sub ecx, edx
        sar ecx, 2
    L_cmp:
        test edx, edx
        je L_full
        mov eax, dword ptr [esi + 0Ch]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae L_full
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 0Ch]
        mov dword ptr [eax], ecx
        add eax, 4
        mov dword ptr [esi + 8], eax
        jmp L_after
    L_full:
        mov edi, dword ptr [esi + 8]
        cmp edx, edi
        ja L_bad
        cmp edi, edi
        jbe L_ok
    L_bad:
        call dword ptr [mem_00925134]
    L_ok:
        lea edx, [esp + 0Ch]
        push edx
        push edi
        push esi
        lea eax, [esp + 38h]
        push eax
        mov ecx, esi
        call ext_0059A140
    L_after:
        lea ecx, [esp + 0Ch]
        push ecx
        lea ecx, [esp + 54h]
        call dword ptr [mem_009250D4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        call dword ptr [mem_009250DC]
        test eax, eax
        jne L_inner
    L_end:
        lea ecx, [esp + 50h]
        mov byte ptr [esp + 0E4h], 0
        call dword ptr [mem_009250A0]
        add ebx, 4
        add esi, 10h
        cmp ebx, offset mem_00B43C50
        jl L_loop
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 0E4h], 0FFFFFFFFh
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0DCh]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x005B5780] sub_005B5780 (144 bytes)
extern "C" void ext_005B5380();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;
extern "C" __declspec(naked) void __fastcall fn_005B5780(void* self) {
    __asm {
        push -1
        push 0x8a369f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_00661980
        mov byte ptr [esi + 4], 1
        mov dword ptr [esi], 0x95f88c
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi + 0xc], 0
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi + 8], eax
        call ext_005B5380
        fldz
        mov ecx, dword ptr [esp + 8]
        mov byte ptr [esi + 0x44], 1
        mov dword ptr [esi + 0x48], 0
        fst dword ptr [esi + 0x10]
        fst dword ptr [esi + 0x14]
        mov eax, esi
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x20]
        fstp dword ptr [esi + 0x24]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x005B5810] sub_005B5810 (165 bytes)
extern "C" void ext_005B5380();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_005B5810(void* self, int edx_unused, int a1, const float* a2) {
    __asm {
        push -1
        push 08a369fh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        call ext_00661980
        mov byte ptr [esi+4], 1
        mov dword ptr [esi], 095f88ch
        mov dword ptr [esp+10h], 0
        mov dword ptr [esi+0ch], 0
        lea ecx, [esi+28h]
        mov byte ptr [esp+10h], 1
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp+18h]
        push eax
        mov ecx, esi
        mov byte ptr [esp+14h], 2
        mov dword ptr [esi+8], eax
        call ext_005B5380
        fldz
        mov eax, dword ptr [esp+1ch]
        mov ecx, dword ptr [esp+8]
        mov byte ptr [esi+44h], 1
        fst dword ptr [esi+10h]
        fst dword ptr [esi+14h]
        fst dword ptr [esi+18h]
        fst dword ptr [esi+1ch]
        fst dword ptr [esi+20h]
        fstp dword ptr [esi+24h]
        fld dword ptr [eax]
        fstp dword ptr [esi+10h]
        fld dword ptr [eax+4]
        fstp dword ptr [esi+14h]
        fld dword ptr [eax+8]
        mov dword ptr [esi+48h], 0
        fstp dword ptr [esi+18h]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret 8
    }
}

// [0x005B58C0] sub_005B58C0 (194 bytes)
extern "C" void ext_005B5380();
extern "C" void ext_00661980();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_005B58C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8a36cf
        push eax
        mov dword ptr fs:[0x0], esp
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov ecx, esi
        call ext_00661980
        mov byte ptr [esi + 0x4], 0x1
        xor edi, edi
        mov dword ptr [esi], 0x95f88c
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0xc], edi
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x20]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x18], 0x2
        mov dword ptr [esi + 0x8], eax
        call ext_005B5380
        mov ebp, dword ptr [esp + 0x24]
        cmp ebp, edi
        mov byte ptr [esi + 0x44], 0x1
        jle L_005B5940
        lea eax, [esp + 0x28]
        sub eax, 0x8
        lea ecx, [esi + 0x10]
        mov edx, ebp
    L_005B5930:
        fld qword ptr [eax + 0x8]
        add eax, 0x8
        fstp dword ptr [ecx]
        add ecx, 0x4
        sub edx, 0x1
        jne L_005B5930
    L_005B5940:
        cmp ebp, 0x6
        jge L_005B596B
        mov ecx, 0x6
        sub ecx, ebp
        xor eax, eax
        lea edi, [esi + 4*ebp + 0x10]
        rep stosd
        mov dword ptr [esi + 0x48], eax
        mov eax, esi
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebp
        add esp, 0xc
        ret
    L_005B596B:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x48], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebp
        add esp, 0xc
        ret
    }
}

// [0x005BEE60] sub_005BEE60 (254 bytes)
extern "C" void ext_004142E0();
extern "C" void ext_00478910();
extern "C" __declspec(naked) void __fastcall fn_005BEE60(void* self) {
    __asm {
        push -0x1
        push 0x008a1712
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x58
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esp + 0x8c]
        mov dword ptr [esp + 0x68], 0x0
        mov dword ptr [esp + 0x8c], edi
        sub esp, 0x1c
        lea eax, [esp + 0x8c]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov byte ptr [esp + 0x88], 0x1
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        call ext_005DF5C0
        test eax, eax
        je loc_5beef4
        mov ecx, dword ptr [mem_00A895A0]
        push ecx
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x70]
        push edx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x70], 0x2
        call ext_004142E0
        push 0x009d1278
        lea ecx, [esp + 0x3c]
        push ecx
        call ext_006A6DD2
    loc_5beef4:
        lea edx, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x90], 0x0
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x34], edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x70], 0x3
        call ext_00478910
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x68], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x68], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x60]
        mov eax, edi
        pop edi
        mov fs:[0], ecx
        pop esi
        add esp, 0x64
        ret 0x20
    }
}
