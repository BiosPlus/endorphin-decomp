// Decompiled translation unit: src/Geometry/SphylType.cpp

extern "C" void ext_00647C10();
extern "C" void ext_006484A0();

// [0x005B1180] Geometry::SphylType::vfunc_1 (12 bytes)
extern "C" void __fastcall fn_005B1180(void* self, int edx_unused, void* a1) {
    ((void (__fastcall*)(void*))ext_00647C10)(a1);
}

// [0x005B1070] Geometry::SphylType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1070(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006484A0
        ret 0x8
    }
}

// [0x005B1A30] Geometry::SphylType::vfunc_3 (59 bytes)
extern "C" void ext_005B11E0();
extern "C" int mem_0095FFC8;
extern "C" int mem_009576E8;

extern "C" __declspec(naked) void __fastcall fn_005B1A30(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x4]
        push 0x1
        call ext_005B11E0
        fld dword ptr [esp + 0x4]
        fld qword ptr [mem_0095FFC8]
        fmul st, st(1)
        faddp st(2), st
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005B17B0] Geometry::SphylType::vfunc_5 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B17B0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        push 0x1
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmul st, st(1)
        call ext_005B11E0
        mov eax, dword ptr [esp + 0xc]
        fxch st(2)
        fadd st(0), st
        fmulp st(2), st
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x8]
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fmul dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax]
        fld dword ptr [esp]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fadd dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        pop ecx
        ret 0x8
    }
}

// [0x005B1540] Geometry::SphylType::vfunc_4 (305 bytes)
extern "C" void ext_0047FFA0();
extern "C" void ext_0053B470();
extern "C" void ext_00540D60();
extern "C" void ext_00547080();
extern "C" void ext_006A7250();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_005B1540(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 0x20
        fldz
        push ebx
        mov ebx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [esp + 0x2c]
        push edi
        fst dword ptr [esi]
        push 0x1
        fstp dword ptr [esi + 0x4]
        mov ecx, ebx
        call ext_005B11E0
        fmul qword ptr [mem_00993828]
        mov edi, dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x30]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp loc_5B159B
        fchs
        fstp dword ptr [esp + 0x30]
        fld dword ptr [edi + 0x8]
        fld dword ptr [esp + 0x30]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        je loc_5B159B
        fstp st(0)
        fld dword ptr [edi + 0x8]
loc_5B159B:
        fstp dword ptr [esi + 0x8]
        push esi
        fld1
        lea eax, [esp + 0x10]
        push eax
        fstp dword ptr [esi + 0xc]
        mov ecx, edi
        call ext_0047FFA0
        lea ecx, [esp + 0xc]
        call ext_00540D60
        push 0x0
        mov ecx, ebx
        call ext_005B11E0
        push ecx
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [esp + 0xc]
        lea edx, [esp + 0xc]
        fld dword ptr [eax + 0x4]
        push edx
        fstp dword ptr [esp + 0x14]
        mov ecx, esi
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [eax + 0xc]
        lea eax, [esp + 0x20]
        push eax
        fstp dword ptr [esp + 0x20]
        call ext_00547080
        fld dword ptr [eax]
        fstp dword ptr [esi]
        push esi
        fld dword ptr [eax + 0x4]
        lea ecx, [esp + 0x20]
        fstp dword ptr [esi + 0x4]
        push ecx
        fld dword ptr [eax + 0x8]
        mov ecx, edi
        fstp dword ptr [esi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xc]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x14]
        fld st(1)
        fmulp st(2), st
        fld st(2)
        fmulp st(3), st
        fxch st(1)
        faddp st(2), st
        fmul st(0), st
        faddp st(1), st
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        call ext_006A7250
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x30]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xc
    }
}

// [0x005B4E40] Geometry::SphylType::vfunc_16 (806 bytes)
extern "C" void ext_00539AA0();
extern "C" void ext_00539FB0();
extern "C" void ext_006A6EAA();
extern "C" void ext_006A6EB0();
extern "C" void ext_006A73BA();
extern "C" int mem_00925134;
extern "C" int mem_00955090;

extern "C" __declspec(naked) void __fastcall fn_005B4E40(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0x28
        mov ecx, dword ptr [esp + 0x2c]
        push ebx
        push ebp
        push esi
        push edi
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x3c]
        push 0x1
        call ext_005B11E0
        fstp dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x40]
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        mov ebp, dword ptr [mem_00925134]
        jbe chk_a
        call ebp
chk_a:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe chk_b
        call ebp
chk_b:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x34]
        push eax
        mov ecx, esi
        call ext_00539AA0
        fld dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x44]
        cdq
        sub eax, edx
        mov ebp, eax
        sar ebp, 1
        mov eax, ebp
        test eax, eax
        mov dword ptr [esp + 0x40], eax
        mov edi, dword ptr [esp + 0x48]
        fidiv dword ptr [esp + 0x40]
        fstp dword ptr [esp + 0x14]
        fldz
        jle pos_zero
        mov ecx, eax
        neg ecx
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x1c], eax
        jmp loop1_top
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
loop1_top:
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x2c]
        fild dword ptr [esp + 0x10]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fst qword ptr [esp + 0x24]
        fdiv dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A73BA
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        xor ebx, ebx
        test edi, edi
        fmul dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x40], ebx
        fstp dword ptr [esp + 0x18]
        jle loop1_end
        fild dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x20]
        fmul qword ptr [mem_00993828]
        fsubr qword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x34]
loop1_inner:
        fild dword ptr [esp + 0x40]
        fmul qword ptr [mem_00955090]
        fdiv dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x40]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        lea ecx, [esp + 0x2c]
        fmul dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 0x34]
        call ext_00539FB0
        add ebx, 0x1
        cmp ebx, edi
        mov dword ptr [esp + 0x40], ebx
        jl loop1_inner
loop1_end:
        fldz
        mov eax, 0x1
        add dword ptr [esp + 0x10], eax
        sub dword ptr [esp + 0x1c], eax
        jne loop1_top
pos_zero:
        xor ebx, ebx
        fst dword ptr [esp + 0x34]
        test edi, edi
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x40], ebx
        jle tail_b
        fild dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x34]
        jmp loop2_top
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8d
        _emit 0x49
        _emit 0x00
loop2_top:
        fild dword ptr [esp + 0x40]
        fmul qword ptr [mem_00955090]
        fdiv dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x40]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        lea edx, [esp + 0x2c]
        fmul dword ptr [esp + 0x3c]
        push edx
        mov ecx, esi
        fstp dword ptr [esp + 0x34]
        call ext_00539FB0
        add ebx, 0x1
        cmp ebx, edi
        mov dword ptr [esp + 0x40], ebx
        jl loop2_top
        fldz
tail_b:
        fld dword ptr [esp + 0x3c]
        mov eax, ebp
        mov dword ptr [esp + 0x40], eax
        fidiv dword ptr [esp + 0x40]
        mov ebp, 0x1
        add eax, ebp
        cmp eax, ebp
        mov dword ptr [esp + 0x40], ebp
        mov dword ptr [esp + 0x18], eax
        fstp dword ptr [esp + 0x14]
        jg loop3_body
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0x10
        _emit 0x8b
        _emit 0xff
loop3_top:
        fldz
loop3_body:
        fst dword ptr [esp + 0x34]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x2c]
        fild dword ptr [esp + 0x40]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        fst qword ptr [esp + 0x24]
        fdiv dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A73BA
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        xor ebx, ebx
        test edi, edi
        fmul dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x40], ebx
        fstp dword ptr [esp + 0x1c]
        _emit 0x0f
        _emit 0x8e
        _emit 0x7d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        fild dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esp + 0x20]
        fmul qword ptr [mem_00993828]
        fadd qword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x34]
        jmp loop4_top
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loop4_top:
        fild dword ptr [esp + 0x40]
        fmul qword ptr [mem_00955090]
        fdiv dword ptr [esp + 0x44]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        call ext_006A6EAA
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x40]
        call ext_006A6EB0
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x40]
        lea eax, [esp + 0x2c]
        fmul dword ptr [esp + 0x1c]
        push eax
        mov ecx, esi
        fstp dword ptr [esp + 0x34]
        call ext_00539FB0
        add ebx, 0x1
        cmp ebx, edi
        mov dword ptr [esp + 0x40], ebx
        jl loop4_top
loop3_end:
        add ebp, 0x1
        cmp ebp, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x40], ebp
        jl loop3_top
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0x10
    }
}
