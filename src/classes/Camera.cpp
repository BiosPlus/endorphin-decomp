// Decompiled translation unit: src/classes/Camera.cpp

// [0x005490E0] Camera::vfunc_17 (200 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_00547820();
extern "C" void ext_00540D60();
extern "C" void ext_006936A0();
extern "C" void ext_0047FFA0();
extern "C" void ext_00549280();

extern "C" __declspec(naked) void __fastcall fn_005490E0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x74]
        push edi
        fstp dword ptr [esi + 0xd8]
        lea edi, [esi + 0xd8]
        fld dword ptr [esi + 0x78]
        push ecx
        fstp dword ptr [edi + 0x4]
        lea eax, [esp + 0x10]
        fld dword ptr [esi + 0x7c]
        mov ecx, edi
        fstp dword ptr [edi + 0x8]
        fldz
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x70]
        fstp dword ptr [esp]
        push eax
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [edi]
        push ecx
        fld dword ptr [eax + 0x4]
        lea ebx, [esi + 0x90]
        fstp dword ptr [edi + 0x4]
        lea ecx, [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x68]
        fstp dword ptr [esp]
        push ebx
        push ecx
        mov ecx, edi
        call ext_00547820
        mov ecx, eax
        call ext_00540D60
        push eax
        mov ecx, edi
        call ext_006936A0
        fld dword ptr [esi + 0x6c]
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, edi
        call ext_006936A0
        push edi
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esi + 0x80]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0xe8]
        pop edi
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0xec]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0xf0]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xf4]
        mov byte ptr [esi + 0x2c], 1
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00548390] Camera::vfunc_1 (335 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00517FC0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F698;
extern "C" int mem_00A9EF48;
extern "C" int mem_00A9ED50;
extern "C" int mem_00A9F47C;

extern "C" __declspec(naked) void __fastcall fn_00548390(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [edi + 8]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F698]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_5483E7
        cmp eax, 0xb53b30
        je L_5483E7
        cmp eax, 0xb53ab0
        je L_5483E7
        cmp eax, 0xb53a70
        je L_5483E7
        cmp eax, 0xb53af0
        jne L_54848E
    L_5483E7:
        mov eax, dword ptr [mem_00A9EF48]
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_54841B
        cmp eax, 0xb53b30
        je L_54841B
        cmp eax, 0xb53ab0
        je L_54841B
        cmp eax, 0xb53a70
        je L_54841B
        cmp eax, 0xb53af0
        jne L_548420
    L_54841B:
        mov eax, 0xb53b30
    L_548420:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0xd0]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_00517FC0
        mov eax, dword ptr [mem_00A9ED50]
        add esp, 8
        push 1
        push 0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_54846C
        cmp eax, 0xb53b30
        je L_54846C
        cmp eax, 0xb53ab0
        je L_54846C
        cmp eax, 0xb53a70
        je L_54846C
        cmp eax, 0xb53af0
        jne L_548471
    L_54846C:
        mov eax, 0xb53b30
    L_548471:
        lea ecx, [esp + 0xc]
        push ecx
        add edi, 0xc8
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_00517FC0
        add esp, 8
        pop edi
        pop esi
        ret 4
    L_54848E:
        mov edx, dword ptr [mem_00A9F698]
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [edi + 0xd0]
        push ecx
        call ext_00517FC0
        mov edx, dword ptr [mem_00A9F47C]
        add esp, 8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add edi, 0xc8
        push edi
        call ext_00517FC0
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_006A7250();
extern "C" int mem_00B40640;
extern "C" int mem_0093F7B8;

// [0x00549600] Camera::vfunc_14 (424 bytes)
extern "C" __declspec(naked) void __fastcall fn_00549600(void* self) {
    __asm {
        sub esp, 0x44
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0xa0], 0
        push edi
        mov dword ptr [esp + 0x8], 0
        je L_549648
        mov eax, dword ptr [ebx + 0xa0]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xc]
        push edx
        call eax
        fld dword ptr [mem_0093F7B8]
        push ecx
        lea ecx, [esp + 0x30]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x20]
        call ext_0053B470
        jmp L_54965F
    L_549648:
        lea edx, [ebx + 0xe8]
        push edx
        lea eax, [esp + 0x40]
        push eax
        lea ecx, [ebx + 0x80]
        call ext_0047FFA0
    L_54965F:
        fld dword ptr [eax]
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x28]
        call ext_00540D60
        mov edi, dword ptr [esp + 0x58]
        push edi
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x24]
        call ext_00547820
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x14]
        fld st(1)
        __asm _emit 0xde
        __asm _emit 0xca
        fld st(2)
        __asm _emit 0xde
        __asm _emit 0xcb
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x58]
        call ext_006A7250
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x58]
        fabs
        fstp dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x58]
        fld dword ptr [esp + 0x60]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne L_5496E8
        pop edi
        xor al, al
        pop ebx
        add esp, 0x44
        ret 0x14
    L_5496E8:
        push esi
        push edi
        lea edx, [esp + 0x44]
        push edx
        lea ecx, [esp + 0x18]
        call ext_00547820
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x10]
        lea ecx, [esp + 0x10]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x1c]
        call ext_00540D60
        fld dword ptr [esp + 0x64]
        mov esi, dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x58]
        mov eax, dword ptr [ebx]
        push ecx
        fstp dword ptr [esp]
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x60]
        push edx
        mov edx, dword ptr [eax + 0x34]
        push ecx
        mov ecx, ebx
        call edx
        test al, al
        jne L_54974E
        pop esi
        pop edi
        pop ebx
        add esp, 0x44
        ret 0x14
    L_54974E:
        fld dword ptr [edi + 0x4]
        push ecx
        fmul dword ptr [esi + 0x4]
        lea eax, [esp + 0x44]
        fld dword ptr [edi]
        mov ecx, edi
        fmul dword ptr [esi]
        faddp st(1), st
        fld dword ptr [edi + 0x8]
        fmul dword ptr [esi + 0x8]
        faddp st(1), st
        fld dword ptr [edi + 0xc]
        fmul dword ptr [esi + 0xc]
        faddp st(1), st
        fstp dword ptr [esp + 0x68]
        fld dword ptr [esp + 0x68]
        fstp dword ptr [esp]
        push eax
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [esi]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        mov al, 1
        fstp dword ptr [esi + 0xc]
        fld1
        fstp dword ptr [esi + 0xc]
        pop esi
        pop edi
        pop ebx
        add esp, 0x44
        ret 0x14
    }
}

// [0x00547EB0] Camera::vfunc_18 (531 bytes)
extern "C" void ext_00546570();
extern "C" void ext_0067C550();
extern "C" void ext_006A6EA4();
extern "C" void ext_006A7250();

extern "C" __declspec(naked) void __fastcall fn_00547EB0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x38
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x48]
        lea ebx, [esi + 0x80]
        push edi
        mov ecx, ebx
        call ext_00546570
        test al, al
        je L_end
        fld dword ptr [esi + 0xe8]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esi + 0xec]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esi + 0xf0]
        fstp dword ptr [esp + 0x34]
        fld dword ptr [ebx]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x88]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [edi]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x24]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x2c]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x30]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x34]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x20]
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x38]
        fsubr dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x3c]
        fsubr dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x1c]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0x48]
        fldz
        fcomp dword ptr [esp + 0x48]
        fnstsw ax
        test ah, 0x44
        jnp L_skip1
        fld dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x40]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmulp st(2), st
        fxch st(2)
        faddp st(1), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        call ext_006A7250
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fdiv dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fmul dword ptr [esi + 0x70]
        fstp dword ptr [esi + 0x70]
L_skip1:
        push ebp
        lea ebp, [esi + 0x74]
        mov ecx, ebp
        call ext_0067C550
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        lea ecx, [esp + 0x3c]
        fstp qword ptr [esp + 0x10]
        call ext_0067C550
        fsubr qword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x6c]
        fld dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x7c]
        fstp qword ptr [esp + 0x24]
        fld dword ptr [ebp]
        fstp qword ptr [esp + 0x18]
        fld dword ptr [esp + 0x40]
        fstp qword ptr [esp + 0x10]
        fld st(1)
        fmulp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        call ext_006A7250
        fstp dword ptr [esp + 0x4c]
        fld qword ptr [esp + 0x10]
        fld dword ptr [esp + 0x4c]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x78]
        fstp qword ptr [esp + 0x30]
        fld qword ptr [esp + 0x18]
        fmul st(0), st
        fld qword ptr [esp + 0x24]
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        call ext_006A7250
        fstp dword ptr [esp + 0x4c]
        fld qword ptr [esp + 0x30]
        fld dword ptr [esp + 0x4c]
        call ext_006A6EA4
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esp + 0x4c]
        mov ecx, esi
        fsubr dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0x68]
        fld dword ptr [edi]
        fstp dword ptr [ebx]
        fld dword ptr [edi + 0x4]
        fstp dword ptr [ebx + 0x4]
        fld dword ptr [edi + 0x8]
        fstp dword ptr [ebx + 0x8]
        fld dword ptr [edi + 0xc]
        fstp dword ptr [ebx + 0xc]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x44]
        call edx
        pop ebp
L_end:
        pop edi
        pop esi
        pop ebx
        add esp, 0x38
        ret 4
    }
}

// [0x00549370] Camera::vfunc_15 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_00549370(void* self) {
    __asm {
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x28]
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 0x4]
        push edi
        fld dword ptr [eax + 0x4]
        mov edi, ecx
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0xc]
        lea eax, [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0x18]
        call ext_00549280
        mov esi, dword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x50]
        push esi
        lea eax, [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call edx
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esi]
        pop edi
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc]
        pop esi
        add esp, 0x20
        ret 0xc
    }
}
