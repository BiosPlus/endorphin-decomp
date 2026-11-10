// Decompiled translation unit: src/ExprParser/BoolType.cpp

// [0x0046C430] ExprParser::BoolType::vfunc_51 (10 bytes)
extern "C" void ext_006A724A();

extern "C" __declspec(naked) void __fastcall fn_0046C430(void* self) {
    __asm {
        push ecx
        call ext_006A724A
        add esp, 0x4
        ret
    }
}

// [0x0067A6E0] ExprParser::BoolType::vfunc_34 (17 bytes)
extern "C" void ext_0041CF50();

extern "C" __declspec(naked) unsigned char __stdcall fn_0067A6E0(void* self, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_0041CF50
        ret 0x8
    }
}

// [0x0067A700] ExprParser::BoolType::vfunc_35 (19 bytes)
extern "C" void ext_00698ED0();

extern "C" __declspec(naked) void __stdcall fn_0067A700(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        call ext_00698ED0
        ret 0x8
    }
}

// [0x0067A750] ExprParser::BoolType::vfunc_8 (32 bytes)
extern "C" void ext_006720C0();

extern "C" void __stdcall fn_0067A750(void* a1, void* a2) {
    typedef void (__thiscall *VFn)(void* self, void* a);
    char* obj = (char*)a1;
    char* inner = *(char**)(obj + 0x4);
    void** vtbl = *(void***)inner;
    VFn vf = (VFn)vtbl[0x78 / 4];
    vf(inner, a1);
    ((VFn)ext_006720C0)(a1, a2);
}

// [0x0067A6B0] ExprParser::BoolType::vfunc_33 (33 bytes)
extern "C" void ext_00698A90();

extern "C" __declspec(naked) void __fastcall fn_0067A6B0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x74]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call edx
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        call ext_00698A90
        mov dword ptr [esi], eax
        pop esi
        ret 0xc
    }
}

// [0x0067AA30] ExprParser::BoolType::vfunc_25 (31 bytes)
extern "C" void ext_0041CEB0();

extern "C" __declspec(naked) void* __fastcall fn_0067AA30(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_0041CEB0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066AEC0] ExprParser::BoolType::vfunc_1 (35 bytes)
extern "C" float __stdcall fn_0066AEC0(char* a1) {
    return (*a1 != 0) ? 1.0f : 0.0f;
}

// [0x0067A720] ExprParser::BoolType::vfunc_7 (35 bytes)
extern "C" void ext_00672080();

extern "C" void __fastcall fn_0067A720(void* self, int edx_unused, char* a1, float a2) {
    typedef void (__thiscall *VFn)(void* self, void* a);
    typedef void (__thiscall *SubFn)(void* self, float a);
    char* inner = *(char**)(a1 + 0x4);
    void** vtbl = *(void***)inner;
    ((VFn)vtbl[0x78 / 4])(inner, a1);
    ((SubFn)ext_00672080)(a1, a2);
}

// [0x0066AE90] ExprParser::BoolType::vfunc_0 (36 bytes)
extern "C" void ext_006720A0();
extern "C" __declspec(naked) void* __fastcall fn_0066AE90(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        movzx ecx, byte ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006720A0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066AF10] ExprParser::BoolType::vfunc_4 (38 bytes)
extern "C" void ext_0046C460();

extern "C" __declspec(naked) void* __fastcall fn_0066AF10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        movzx ecx, byte ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_0046C460
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066B1A0] ExprParser::BoolType::vfunc_42 (46 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0066B1A0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push ebx
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov bl, al
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        xor ecx, ecx
        cmp bl, al
        sete cl
        mov al, cl
        pop ebx
        ret 0x8
    }
}

// [0x0066B1D0] ExprParser::BoolType::vfunc_43 (48 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0066B1D0(void* self, int edx_unused, unsigned char* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp byte ptr [esi], 0x0
        jne L_set_true
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        test al, al
        jne L_set_true
        xor eax, eax
        mov byte ptr [esi], al
        pop esi
        ret 0x8
    L_set_true:
        mov eax, 0x1
        mov byte ptr [esi], al
        pop esi
        ret 0x8
    }
}

// [0x0067A930] ExprParser::BoolType::vfunc_47 (64 bytes)
extern "C" __declspec(naked) float __fastcall fn_0067A930(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push esi
        call edx
        fstp dword ptr [esp + 0x8]
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp fn_0067A930_neg_done
        mov ecx, dword ptr [esi + 0x4]
        fchs
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push esi
        call edx
        pop esi
        ret 0x4
    fn_0067A930_neg_done:
        fstp st(0)
        pop esi
        ret 0x4
    }
}

// [0x0067AA50] ExprParser::BoolType::vfunc_46 (79 bytes)
extern "C" void ext_006A6EEC();

extern "C" __declspec(naked) void __fastcall fn_0067AA50(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push esi
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        fld dword ptr [esp + 0xc]
        call ext_006A6EEC
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        mov eax, dword ptr [edx + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push esi
        call eax
        pop esi
        ret 0x8
    }
}

// [0x0067A820] ExprParser::BoolType::vfunc_44 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0067A820(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push esi
        call edx
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        fstp qword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fsubr qword ptr [esp + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        fstp dword ptr [esp]
        push esi
        call eax
        pop esi
        add esp, 0x8
        ret 0x8
    }
}
