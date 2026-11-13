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
