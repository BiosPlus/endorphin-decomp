// Decompiled translation unit: src/NMCamera/Orthogonal.cpp

// [0x00551A10] NMCamera::Orthogonal::vfunc_5 (8 bytes)
// Calls sub_005480D0 and returns, popping one stack argument.
extern "C" void ext_005480D0();

extern "C" __declspec(naked) void __fastcall fn_00551A10(void* self) {
    __asm {
        call ext_005480D0
        ret 4
    }
}

// [0x00551AF0] NMCamera::Orthogonal::vfunc_8 (88 bytes)
extern "C" void ext_00546520();
extern "C" void ext_00551960();

extern "C" __declspec(naked) void __fastcall fn_00551AF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xa0], 0
        jne ok
        lea eax, [esi + 0x58]
        push eax
        lea ecx, [esi + 0x90]
        call ext_00546520
        test al, al
        je fail
        lea ecx, [esi + 0x3c]
        push ecx
        lea ecx, [esi + 0x74]
        call ext_00551960
        test al, al
        je fail
        fld dword ptr [esi + 0x68]
        fld dword ptr [esi + 0x30]
        fucompp
        fnstsw ax
        test ah, 0x44
        jp fail
        fld dword ptr [esi + 0x6c]
        fld dword ptr [esi + 0x34]
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp ok
    fail:
        xor eax, eax
        pop esi
        ret
    ok:
        mov eax, 1
        pop esi
        ret
    }
}

// [0x00551CB0] NMCamera::Orthogonal::vfunc_19 (104 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00551CB0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_005480D0
        fdiv qword ptr [esi + 0xb8]
        mov edi, dword ptr [esp + 0x14]
        fld qword ptr [esi + 0xb0]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fld dword ptr [edi]
        fdiv st, st(3)
        faddp st(2), st
        fadd st(1), st
        fxch st(1)
        call ext_006A6DE0
        mov ebx, dword ptr [esp + 0x18]
        mov dword ptr [ebx], eax
        fld qword ptr [esi + 0xb8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fmul st, st(1)
        fld dword ptr [edi + 0x4]
        fdivrp st(3), st
        fsubrp st(2), st
        faddp st(1), st
        call ext_006A6DE0
        pop edi
        pop esi
        mov dword ptr [ebx + 0x4], eax
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x00551A80] NMCamera::Orthogonal::vfunc_4 (106 bytes)
extern "C" int mem_00925410;

extern "C" __declspec(naked) void __fastcall fn_00551A80(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x3c
        push esi
        mov esi, ecx
        call ext_005480D0
        fmul qword ptr [mem_00993828]
        sub esp, 0x30
        fstp dword ptr [esp + 0x6c]
        fld dword ptr [esp + 0x6c]
        fld st(0)
        fchs
        fstp dword ptr [esp + 0x6c]
        fld qword ptr [esi + 0xc8]
        fstp qword ptr [esp + 0x28]
        fld qword ptr [esi + 0xd0]
        fstp qword ptr [esp + 0x20]
        fst qword ptr [esp + 0x18]
        fld dword ptr [esp + 0x6c]
        fst qword ptr [esp + 0x10]
        fxch st(1)
        fmul qword ptr [esi + 0xc0]
        fstp qword ptr [esp + 0x8]
        fmul qword ptr [esi + 0xc0]
        fstp qword ptr [esp]
        call dword ptr [mem_00925410]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00551C30] NMCamera::Orthogonal::vfunc_20 (125 bytes)
extern "C" void ext_005480D0();
extern "C" int mem_0092A270;
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00551C30(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov esi, ecx
        call ext_005480D0
        mov edi, dword ptr [esp + 0x10]
        fild dword ptr [edi]
        mov ecx, esi
        fadd st(0), st
        fdiv qword ptr [esi + 0xb0]
        fsub qword ptr [mem_0092A270]
        fmulp st(1), st
        fmul qword ptr [mem_00993828]
        fmul qword ptr [esi + 0xc0]
        fstp dword ptr [esp + 0x10]
        call ext_005480D0
        fild dword ptr [edi + 0x4]
        mov eax, dword ptr [esp + 0x14]
        pop edi
        fadd st(0), st
        fdiv qword ptr [esi + 0xb8]
        pop esi
        fld1
        fsubrp st(1), st
        fmulp st(1), st
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp]
        fld dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax]
        fld dword ptr [esp]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x8]
        fld1
        fstp dword ptr [eax + 0xc]
        pop ecx
        ret 0xc
    }
}

// [0x00551B50] NMCamera::Orthogonal::vfunc_7 (182 bytes)
extern "C" void ext_00547AB0();
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00551B50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b2ae2
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x20]
        call edx
        test al, al
        mov ecx, esi
        je fail
        call ext_00547AB0
        pop esi
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    fail:
        call ext_00547AB0
        push eax
        lea eax, [esp + 0x24]
        push 0x957430
        push eax
        call dword ptr [mem_00924FCC]
        push 0x93bf0c
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        mov dword ptr [esp + 0x5c], 0
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        add esi, 0xf8
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x48], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x44], 0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x00551DE0] NMCamera::Orthogonal::vfunc_17 (323 bytes)
extern "C" void ext_0047FFA0(); extern "C" void ext_00540D60(); extern "C" void ext_00547820(); extern "C" void ext_006936A0(); extern "C" void ext_006A7250(); extern "C" int mem_00993838;
extern "C" __declspec(naked) void __fastcall fn_00551DE0(void* self) {
    __asm {
        sub esp, 0x34
        push esi
        mov esi, ecx
        fld dword ptr [esi+0x74]
        push edi
        fstp dword ptr [esi+0xd8]
        lea edi, [esi+0xd8]
        fld dword ptr [esi+0x78]
        lea eax, [esp+0x1c]
        fstp dword ptr [edi+4]
        push eax
        fld dword ptr [esi+0x7c]
        lea ecx, [esp+0x10]
        fstp dword ptr [edi+8]
        push ecx
        fldz
        lea ecx, [esp+0x34]
        fstp dword ptr [edi+0xc]
        fld dword ptr [esi+0x90]
        fstp dword ptr [esp+0x24]
        fld dword ptr [esi+0x94]
        fstp dword ptr [esp+0x28]
        fld dword ptr [esi+0x98]
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esi+0x9c]
        fstp dword ptr [esp+0x30]
        fld dword ptr [edi]
        fstp dword ptr [esp+0x34]
        fld dword ptr [edi+4]
        fstp dword ptr [esp+0x38]
        fld dword ptr [edi+8]
        fstp dword ptr [esp+0x3c]
        fld dword ptr [edi+0xc]
        fstp dword ptr [esp+0x40]
        call ext_00547820
        fld dword ptr [esp+0x10]
        fld dword ptr [esp+0xc]
        fld dword ptr [esp+0x14]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        call ext_006A7250
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x44
        jnp L1
        lea ecx, [esp+0xc]
        call ext_00540D60
        fld dword ptr [eax]
        fstp dword ptr [esp+0xc]
        push ecx
        fld dword ptr [eax+4]
        lea edx, [esp+0x10]
        fstp dword ptr [esp+0x14]
        mov ecx, edi
        fld dword ptr [eax+8]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+0xc]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [esi+0x68]
        fstp dword ptr [esp]
        push edx
        call ext_006936A0
    L1:
        fld dword ptr [esi+0x6c]
        push ecx
        lea eax, [esp+0x20]
        fstp dword ptr [esp]
        push eax
        mov ecx, edi
        call ext_006936A0
        push edi
        lea ecx, [esp+0x30]
        push ecx
        lea ecx, [esi+0x80]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esi+0xe8]
        pop edi
        fld dword ptr [eax+4]
        fstp dword ptr [esi+0xec]
        fld dword ptr [eax+8]
        fstp dword ptr [esi+0xf0]
        fld dword ptr [eax+0xc]
        fstp dword ptr [esi+0xf4]
        mov byte ptr [esi+0x2c], 1
        pop esi
        add esp, 0x34
        ret
    }
}

// [0x00551F30] NMCamera::Orthogonal::vfunc_10 (228 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_005480D0();
extern "C" void ext_00548150();
extern "C" void ext_00551D20();
extern "C" void ext_006943B0();

extern "C" __declspec(naked) void __fastcall fn_00551F30(void* self) {
    __asm {
        sub esp, 0x94
        push esi
        push edi
        mov edi, ecx
        call ext_005480D0
        fdiv qword ptr [edi + 0xb8]
        mov esi, dword ptr [esp + 0xac]
        mov eax, dword ptr [esp + 0xa4]
        neg eax
        mov dword ptr [esp + 0x8], eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        fild dword ptr [esp + 0xa4]
        fmul st, st(1)
        fstp dword ptr [esi]
        fild dword ptr [esp + 0xc]
        fmulp st(1), st
        fstp dword ptr [esi + 0x4]
        fldz
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0xc]
        fld1
        fst dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x3c]
        fst dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x48]
        call ext_00548150
        mov ecx, dword ptr [esp + 0xa8]
        lea edx, [esp + 0xc]
        push edx
        lea eax, [esp + 0x60]
        push eax
        call ext_004875A0
        lea ecx, [esp + 0x5c]
        call ext_00551D20
        lea ecx, [esp + 0x5c]
        push ecx
        lea edx, [esp + 0x50]
        push edx
        mov ecx, esi
        call ext_006943B0
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
        add esp, 0x94
        ret 0x10
    }
}
