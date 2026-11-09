// Decompiled translation unit: src/leaf/decompiled_480000.cpp

// [0x004806E0] sub_004806E0 (31 bytes)
extern "C" void ext_004A57F0();

extern "C" __declspec(naked) void __fastcall fn_004806E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x3e4], eax
        mov dword ptr [ecx + 0x3f0], eax
        mov ecx, dword ptr [ecx + 0x3b4]
        mov dword ptr [esp + 0x4], eax
        jmp ext_004A57F0
    }
}

// [0x0048FB30] sub_0048FB30 (33 bytes)
// Returns 0 if this->f4 is 0; otherwise (this->f8 - this->f4) / 124 (signed).
extern "C" int __fastcall fn_0048FB30(const int* self) {
    int a = self[1];
    if (a == 0) {
        return 0;
    }
    return (self[2] - a) / 124;
}

// [0x0048A9A0] sub_0048A9A0 (22 bytes)
extern "C" void ext_0048A120();

extern "C" void __fastcall fn_0048A9A0(void* self, int edx_unused, int a1, int a2) {
    typedef void (__cdecl *fn_t)(int, int, void*);
    ((fn_t)ext_0048A120)(a1, a2, self);
}

// [0x0048ABB0] sub_0048ABB0 (22 bytes)
extern "C" void ext_0048A360();

extern "C" __declspec(naked) void __fastcall fn_0048ABB0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x234]
        test ecx, ecx
        je done
        fldz
        push ecx
        fstp dword ptr [esp]
        call ext_0048A360
done:
        ret
    }
}

// [0x00480750] sub_00480750 (25 bytes)
extern "C" void ext_004A7870();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00480750(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov ecx, esi
        call ext_004A7870
        push esi
        call ext_006A5C5C
        add esp, 4
    done:
        pop esi
        ret
    }
}

// [0x0048A9F0] sub_0048A9F0 (26 bytes)
extern "C" void ext_0048A1D0();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_0048A9F0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x234]
        test ecx, ecx
        je done
        mov edx, dword ptr [mem_00B40640]
        push edx
        push eax
        call ext_0048A1D0
    done:
        ret
    }
}

// [0x0048ABD0] sub_0048ABD0 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048ABD0(void* self, int edx_unused, float a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x234]
        test ecx, ecx
        je done
        fld dword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_0048A360
    done:
        ret 0x4
    }
}

// [0x0048CCA0] sub_0048CCA0 (27 bytes)
extern "C" void ext_0048CB80();

extern "C" __declspec(naked) void __fastcall fn_0048CCA0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0048CB80
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_004A6970();

// [0x00482640] sub_00482640 (28 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00482640(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], eax
        call ext_004A6970
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x004809B0] sub_004809B0 (35 bytes)
// Returns 0 if this->f8 is non-null, this->fc - this->f8 is non-zero (in elements),
// and this->f20 == 0; otherwise returns 1.
extern "C" __declspec(naked) int __fastcall fn_004809B0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x8]
        test eax, eax
        je short L_ret1_004809B0
        mov edx, dword ptr [ecx + 0xc]
        sub edx, eax
        sar edx, 0x2
        je short L_ret1_004809B0
        cmp byte ptr [ecx + 0x20], 0x0
        jne short L_ret1_004809B0
        xor eax, eax
        pop ecx
        ret
L_ret1_004809B0:
        mov eax, 0x1
        pop ecx
        ret
    }
}
