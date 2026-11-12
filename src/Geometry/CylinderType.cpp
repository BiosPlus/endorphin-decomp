// Decompiled translation unit: src/Geometry/CylinderType.cpp

extern "C" void ext_00647C50();
extern "C" void ext_00648490();

// [0x005B1170] Geometry::CylinderType::vfunc_1 (12 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1170(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_00647C50
        ret 0x4
    }
}

// [0x005B1050] Geometry::CylinderType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1050(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_00648490
        ret 0x8
    }
}

extern "C" void ext_005B11E0();
extern "C" int mem_009576E8;

// [0x005B19F0] Geometry::CylinderType::vfunc_3 (49 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B19F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push 0
        call ext_005B11E0
        fstp dword ptr [esp + 4]
        push 1
        call ext_005B11E0
        fld dword ptr [esp + 4]
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fmulp st(1), st
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        ret 4
    }
}

// [0x005B1190] Geometry::CylinderType::vfunc_9 (57 bytes)
extern "C" int mem_00993828;

extern "C" float __fastcall fn_005B1190(void* self, int edx_unused, int a1, void* a2) {
    float* v = (float*)a2;
    if (a1 == 2) {
        return (float)(v[1] * *(double*)&mem_00993828);
    }
    if (a1 == 1) {
        return v[0];
    }
    return v[a1];
}

// [0x005B4210] Geometry::CylinderType::vfunc_18 (88 bytes)
extern "C" void ext_005B3FF0();
extern "C" void ext_005B4010();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_005B4210(void* self, int edx_unused, void* a1, int a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x29e
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L4010
        sub eax, 0x59
        je L3FF0
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L3FF0:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push esi
        call ext_005B3FF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L4010:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        call ext_005B4010
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B1740] Geometry::CylinderType::vfunc_5 (111 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B1740(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        push 0x0
        call ext_005B11E0
        fstp dword ptr [esp + 0x8]
        push 0x1
        call ext_005B11E0
        fld dword ptr [esp + 0x8]
        fld st(0)
        mov eax, dword ptr [esp + 0xc]
        fadd st, st(1)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp]
        fld qword ptr [mem_009576E8]
        fmul st, st(1)
        fmulp st(1), st
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul dword ptr [eax + 0x8]
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

// [0x005B1420] Geometry::CylinderType::vfunc_4 (273 bytes)
extern "C" void ext_0047FFA0();
extern "C" void ext_005B11E0();
extern "C" void ext_006A7250();
extern "C" int mem_00993828;
extern "C" __declspec(naked) float __fastcall fn_005B1420(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, [esp+0x1c]
        push esi
        mov esi, [esp+0x1c]
        push edi
        mov edi, [esp+0x28]
        fld dword ptr [edi]
        push 1
        fstp dword ptr [esi]
        mov ecx, ebx
        fld dword ptr [edi+4]
        fstp dword ptr [esi+4]
        call ext_005B11E0
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp+0x28]
        fld dword ptr [edi+8]
        fld dword ptr [esp+0x28]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5
        jnp L1
        fchs
        fstp dword ptr [esp+0x28]
        fld dword ptr [edi+8]
        fld dword ptr [esp+0x28]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        je L1
        fstp st(0)
        fld dword ptr [edi+8]
    L1:
        fstp dword ptr [esi+8]
        fld1
        fstp dword ptr [esi+0xc]
        fld dword ptr [edi+4]
        fld dword ptr [edi]
        fmul st(0), st
        fld st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp+0x28]
        fld dword ptr [esp+0x28]
        call ext_006A7250
        fstp dword ptr [esp+0x28]
        fld dword ptr [esp+0x28]
        push 0
        fstp dword ptr [esp+0x2c]
        mov ecx, ebx
        fld dword ptr [esp+0x2c]
        call ext_005B11E0
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp L2
        fld dword ptr [edi]
        push 0
        fdiv st, st(1)
        fstp dword ptr [esi]
        fdivr dword ptr [edi+4]
        fstp dword ptr [esi+4]
        call ext_005B11E0
        fmul dword ptr [esi]
        push 0
        fstp dword ptr [esi]
        call ext_005B11E0
        fmul dword ptr [esi+4]
        fstp dword ptr [esi+4]
        jmp L3
    L2:
        fstp st(0)
    L3:
        push esi
        lea eax, [esp+0x10]
        push eax
        mov ecx, edi
        call ext_0047FFA0
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
        fstp dword ptr [esp+0x28]
        fld dword ptr [esp+0x28]
        call ext_006A7250
        fstp dword ptr [esp+0x28]
        fld dword ptr [esp+0x28]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 0xc
    }
}
