// Decompiled translation unit: src/NMCamera/Perspective.cpp

// [0x00552270] NMCamera::Perspective::vfunc_4 (59 bytes)
extern "C" void ext_005481A0();
extern "C" void ext_005481C0();
extern "C" void ext_0063E048();

extern "C" __declspec(naked) void __fastcall fn_00552270(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005481A0
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_005481C0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        mov ecx, esi
        fld qword ptr [esi + 0xc0]
        fstp qword ptr [esp]
        call edx
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_0063E048
        pop esi
        ret
    }
}

// [0x005526A0] NMCamera::Perspective::vfunc_5 (124 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_005D0670();
extern "C" int mem_009574F0;
extern "C" int mem_00AF7AC0;

extern "C" __declspec(naked) float __fastcall fn_005526A0(void* self, int edx_unused, float* a1) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xa0]
        test eax, eax
        je L_005526FD
        push 0x2
        lea ecx, [eax + 0x210]
        call ext_005B11E0
        fstp dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0xa0]
        fmul dword ptr [esp + 0x4]
        fmul qword ptr [mem_009574F0]
        fstp qword ptr [esp + 0x4]
        call ext_005D0670
        fdivr qword ptr [esp + 0x4]
        pop esi
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x4
    L_005526FD:
        mov ecx, dword ptr [esp + 0x10]
        fld dword ptr [ecx]
        pop esi
        fadd st(0), st
        fmul qword ptr [mem_00AF7AC0]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x4
    }
}

// [0x00552340] NMCamera::Perspective::vfunc_19 (128 bytes)
extern "C" void ext_006A6DE0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_00552340(void* self, int edx_unused, float* a1, int* a2) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        push edi
        mov edi, dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x8]
        lea ecx, [esp + 0x10]
        push ecx
        fstp dword ptr [esp + 0x14]
        mov ecx, esi
        call edx
        fdiv qword ptr [esi + 0xb8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fdivp st(2), st
        fld qword ptr [esi + 0xb0]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fld qword ptr [mem_00993828]
        fmul st(1), st
        fxch st(3)
        faddp st(1), st
        fadd st, st(2)
        call ext_006A6DE0
        mov ebx, dword ptr [esp + 0x14]
        mov dword ptr [ebx], eax
        fld qword ptr [esi + 0xb8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        fmul st, st(2)
        fld dword ptr [edi + 0x4]
        fdivrp st(2), st
        fsubrp st(1), st
        faddp st(1), st
        call ext_006A6DE0
        pop edi
        pop esi
        mov dword ptr [ebx + 0x4], eax
        pop ebx
        ret 0x8
    }
}

// [0x005522B0] NMCamera::Perspective::vfunc_20 (134 bytes)
extern "C" int mem_00993828;
extern "C" int mem_0092C510;

extern "C" __declspec(naked) void __fastcall fn_005522B0(void* self, int edx_unused, int* a1, float* a2, float* a3) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        push edi
        call edx
        fmul qword ptr [mem_00993828]
        mov eax, dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x14]
        fild dword ptr [eax + 0x4]
        fld qword ptr [mem_0092C510]
        __asm _emit 0xdc
        __asm _emit 0xc9
        fxch st(1)
        fdiv qword ptr [esi + 0xb8]
        fld1
        fld st(0)
        __asm _emit 0xde
        __asm _emit 0xe2
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(3), st
        fxch st(2)
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edi]
        pop edi
        fstp dword ptr [esp + 0x4]
        fild dword ptr [eax]
        mov eax, dword ptr [esp + 0x14]
        fmulp st(3), st
        fxch st(2)
        fdiv qword ptr [esi + 0xb0]
        __asm _emit 0xde
        __asm _emit 0xe2
        fmul qword ptr [esi + 0xc0]
        pop esi
        fstp dword ptr [esp + 0xc]
        fmul dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp]
        fstp dword ptr [eax + 0x8]
        fld1
        fstp dword ptr [eax + 0xc]
        pop ecx
        ret 0xc
    }
}
