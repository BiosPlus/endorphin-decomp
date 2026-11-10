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
