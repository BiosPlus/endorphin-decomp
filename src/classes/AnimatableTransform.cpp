// Decompiled translation unit: src/classes/AnimatableTransform.cpp

extern "C" void ext_00593630();

// [0x0058A1A0] AnimatableTransform::vfunc_33 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A1A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 0x38]
        lea ecx, [esi + 8]
        call edx
        mov ecx, esi
        pop esi
        jmp ext_00593630
    }
}

// [0x00661990] AnimatableTransform::vfunc_12 (20 bytes)
extern "C" void ext_0046F7D0();
extern "C" void* __stdcall fn_00661990(void* a1) {
    ((void (__cdecl*)(void*))ext_0046F7D0)(a1);
    return a1;
}

// [0x006619B0] AnimatableTransform::vfunc_13 (20 bytes)
extern "C" void* __fastcall fn_006619B0(void* self, int edx_unused, void* a1, void* a2) {
    ((void (__cdecl*)(void*))ext_0046F7D0)(a1);
    return a1;
}

// [0x0058A3C0] AnimatableTransform::vfunc_57 (24 bytes)
extern "C" void ext_0058A2B0();
extern "C" void* __fastcall fn_0058A3C0(void* self, int edx_unused, int a1) {
    int idx = ((int (__stdcall*)(int))ext_0058A2B0)(a1);
    return (char*)self + idx * 8 + 0xf4;
}

// [0x00626410] AnimatableTransform::vfunc_4_off_4 (27 bytes)
extern "C" void ext_00585A80();
extern "C" __declspec(naked) void* __stdcall fn_00626410(void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push edx
        push esi
        call ext_00585A80
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x005DF1F0] AnimatableTransform::vfunc_15 (30 bytes)
extern "C" void ext_00671F30();
extern "C" __declspec(naked) void* __fastcall fn_005DF1F0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00593680] AnimatableTransform::vfunc_9_off_4 (42 bytes)
extern "C" void ext_00661A60();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void* __fastcall fn_00593680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        test al, al
        je short not_taken_00593680
        mov eax, dword ptr [esi + 0xe4]
        mov ecx, dword ptr [mem_00B40640]
        push eax
        call ext_00661A60
        pop esi
        ret
not_taken_00593680:
        mov eax, dword ptr [esi + 0xe0]
        pop esi
        ret
    }
}

// [0x0058A550] AnimatableTransform::vfunc_1_off_8 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_0058A550(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, ecx
        mov esi, 0x3
    loop_0058A563:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        push ebp
        push esi
        push ebx
        mov ecx, edi
        call edx
        add esi, 0x1
        cmp esi, 0x7
        jl loop_0058A563
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00585170] AnimatableTransform::vfunc_34 (52 bytes)
extern "C" void ext_00493E40();
extern "C" int mem_00B40640;
extern "C" __declspec(naked) void __fastcall fn_00585170(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [mem_00B40640]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov eax, dword ptr [eax + 0x8]
        push 0x0
        lea ecx, [esi + 0x4]
        push 0x0
        push edx
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0xd8]
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_00493E40
        pop esi
        ret 0x4
    }
}

// [0x00593D00] AnimatableTransform::vfunc_2_off_4 (60 bytes)
extern "C" void ext_00661B10();
extern "C" void ext_0053E290();
extern "C" __declspec(naked) void* __fastcall fn_00593D00(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        push edi
        call edx
        test al, al
        je L_fail
        mov edi, dword ptr [esp + 0xc]
        mov ecx, edi
        call ext_00661B10
        test al, al
        jne L_fail
        mov eax, dword ptr [esi + 0xe4]
        push eax
        mov ecx, edi
        call ext_0053E290
        pop edi
        pop esi
        ret 0x4
    L_fail:
        mov eax, dword ptr [esi + 0xe0]
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005936B0] AnimatableTransform::vfunc_43 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_005936B0(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax + 0x24]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov ecx, esi
        call edx
        mov edi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, esi
        call edx
        fld dword ptr [eax + 0x30]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x34]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [edi + 0x30]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [edi + 0x34]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [edi + 0x38]
        fld1
        fstp dword ptr [edi + 0x3c]
        pop edi
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0058A670] AnimatableTransform::vfunc_12_off_8 (94 bytes)
extern "C" void ext_0041CF50();
extern "C" __declspec(naked) void __fastcall fn_0058A670(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x89f968
        push eax
        mov dword ptr fs:[0x0], esp
        mov edx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [ecx + edx*8 + 0xec]
        mov dword ptr [esp + 0xc], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x8], 0xffffffff
        je short skip_0058A670
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x78]
        lea edx, [esp + 0x14]
        push edx
        call eax
skip_0058A670:
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0xc
    }
}
