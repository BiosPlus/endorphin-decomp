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
