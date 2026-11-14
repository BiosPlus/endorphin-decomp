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

// [0x00552490] NMCamera::Perspective::vfunc_6 (259 bytes)
extern "C" void ext_0047FFA0();
extern "C" void ext_0053B470();
extern "C" void ext_00540D60();
extern "C" int mem_00B40640;
extern "C" int mem_0093F7B8;

extern "C" __declspec(naked) void __fastcall fn_00552490(void* self, int edx_unused, float* a1) {
    __asm {
        sub esp, 0x34
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        cmp dword ptr [esi + 0xa0], 0
        je L_552490_else
        mov eax, dword ptr [esi + 0xa0]
        mov edx, dword ptr [mem_00B40640]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        call eax
        fld dword ptr [mem_0093F7B8]
        push ecx
        lea ecx, [esp + 0x1c]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [eax + 0x20]
        call ext_0053B470
        jmp L_552490_join
    L_552490_else:
        lea edx, [esi + 0xe8]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esi + 0x80]
        call ext_0047FFA0
    L_552490_join:
        cmp dword ptr [esi + 0xa0], 0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esp + 0x14]
        je L_552490_else2
        mov eax, dword ptr [esi + 0xa0]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0x14]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [mem_00B40640]
        push eax
        call edx
        add eax, 0x30
        jmp L_552490_store
    L_552490_else2:
        lea eax, [esi + 0xe8]
    L_552490_store:
        mov ecx, dword ptr [esp + 0x3c]
        push eax
        lea eax, [esp + 0x1c]
        push eax
        call ext_0047FFA0
        lea ecx, [esp + 0x8]
        call ext_00540D60
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [esp + 0xc]
        mov edx, dword ptr [esi]
        fld dword ptr [esp + 0x18]
        mov edx, dword ptr [edx + 0x14]
        fmul dword ptr [esp + 0x8]
        lea eax, [esp + 0x4]
        push eax
        mov ecx, esi
        faddp st(1), st
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x14]
        faddp st(1), st
        fld dword ptr [esp + 0x28]
        fmul dword ptr [esp + 0x18]
        faddp st(1), st
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x8]
        call edx
        pop esi
        add esp, 0x34
        ret 0x4
    }
}

// [0x005523E0] NMCamera::Perspective::vfunc_1 (166 bytes)
extern "C" void ext_00517FC0();
extern "C" void ext_00548390();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9EEE4;

extern "C" __declspec(naked) void __fastcall fn_005523E0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, ecx
        call ext_00548390
        push 0x9574e0
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_0055241D
        cmp eax, 0xb53b30
        je L_0055241D
        cmp eax, 0xb53ab0
        je L_0055241D
        cmp eax, 0xb53a70
        je L_0055241D
        cmp eax, 0xb53af0
        jne L_0055245D
    L_0055241D:
        mov eax, dword ptr [mem_00A9EEE4]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_00552451
        cmp eax, 0xb53b30
        je L_00552451
        cmp eax, 0xb53ab0
        je L_00552451
        cmp eax, 0xb53a70
        je L_00552451
        cmp eax, 0xb53af0
        jne L_00552456
    L_00552451:
        mov eax, 0xb53b30
    L_00552456:
        lea ecx, [esp + 0xc]
        push ecx
        jmp L_0055246E
    L_0055245D:
        push 0x9574e0
        mov ecx, esi
        call ext_0063EFE0
        lea edx, [esp + 0xc]
        push edx
    L_0055246E:
        add edi, 0xf8
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_00517FC0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005525A0] NMCamera::Perspective::vfunc_10 (251 bytes)
extern "C" void ext_004875A0();
extern "C" void ext_00548150();
extern "C" void ext_00551D20();
extern "C" void ext_00552130();
extern "C" void ext_006943B0();

extern "C" __declspec(naked) void __fastcall fn_005525A0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x94
        push ebx
        mov ebx, dword ptr [esp + 0xa4]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        push 0x3
        lea eax, [esp + 0x54]
        push eax
        mov ecx, ebx
        call ext_00552130
        mov edx, dword ptr [esi + 0x18]
        push eax
        mov ecx, edi
        call edx
        fdiv qword ptr [edi + 0xb8]
        mov esi, dword ptr [esp + 0xb0]
        mov eax, dword ptr [esp + 0xa8]
        neg eax
        mov dword ptr [esp + 0xc], eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        fild dword ptr [esp + 0xa8]
        fmul st, st(1)
        fstp dword ptr [esi]
        fild dword ptr [esp + 0x10]
        fmulp st(1), st
        fstp dword ptr [esi + 0x4]
        fldz
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0xc]
        fld1
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x38]
        fst dword ptr [esp + 0x40]
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x4c]
        call ext_00548150
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x64]
        push eax
        mov ecx, ebx
        call ext_004875A0
        lea ecx, [esp + 0x60]
        call ext_00551D20
        lea ecx, [esp + 0x60]
        push ecx
        lea edx, [esp + 0x54]
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
        pop ebx
        add esp, 0x94
        ret 0x10
    }
}

// [0x005521E0] NMCamera::Perspective::vfunc_2 (99 bytes)
extern "C" void ext_00427550();
extern "C" void ext_00548A20();
extern "C" void ext_00640110();
extern "C" void ext_00640AD0();
extern "C" int mem_009574E0;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00AF76A4;
extern "C" int mem_00924FF0;

extern "C" __declspec(naked) void __fastcall fn_005521E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push offset mem_009574E0
        mov ecx, edi
        call ext_00640110
        mov ebx, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        call edx
        sub esp, 0x8
        fstp qword ptr [esp]
        push ebx
        call ext_00640AD0
        mov eax, dword ptr [mem_00A9FA6C]
        add esp, 0xc
        push eax
        mov ecx, edi
        call ext_00640110
        mov ecx, offset mem_00AF76A4
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        push edi
        mov ecx, esi
        call ext_00548A20
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
