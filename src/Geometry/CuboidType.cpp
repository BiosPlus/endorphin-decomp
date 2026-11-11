// Decompiled translation unit: src/Geometry/CuboidType.cpp

extern "C" void ext_00647C30();
extern "C" void ext_006484C0();
extern "C" void ext_005B11E0();

// [0x005B1160] Geometry::CuboidType::vfunc_1 (12 bytes)
extern "C" __declspec(naked) void __stdcall fn_005B1160(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_00647C30
        ret 0x4
    }
}

// [0x005B1030] Geometry::CuboidType::vfunc_2 (17 bytes)
extern "C" __declspec(naked) void fn_005B1030() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006484C0
        ret 0x8
    }
}

// [0x005B19C0] Geometry::CuboidType::vfunc_3 (40 bytes)
extern "C" __declspec(naked) float __stdcall fn_005B19C0(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push 0x1
        call ext_005B11E0
        push 0x0
        call ext_005B11E0
        fmulp st(1), st
        push 0x2
        call ext_005B11E0
        fmulp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x005B4190] Geometry::CuboidType::vfunc_18 (116 bytes)
extern "C" void ext_005B3FF0();
extern "C" void ext_005B4010();
extern "C" void ext_005B4030();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_005B4190(void* self, int edx_unused, void* p, int a, int b) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x271
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 4], 0
        je L_271
        sub eax, 0x2d
        je L_29e
        sub eax, 0xe0
        je L_37e
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_37e:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push esi
        call ext_005B3FF0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_29e:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        call ext_005B4030
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_271:
        mov edx, dword ptr [esp + 0x14]
        push edx
        push esi
        call ext_005B4010
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B1680] Geometry::CuboidType::vfunc_5 (121 bytes)
extern "C" __declspec(naked) float __fastcall fn_005B1680(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push 0x2
        call ext_005B11E0
        push 0x1
        call ext_005B11E0
        fmulp st(1), st
        mov edx, dword ptr [esp + 0x8]
        push 0x2
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul dword ptr [edx]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fabs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        call ext_005B11E0
        push 0x0
        call ext_005B11E0
        fmulp st(1), st
        push 0x1
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        fmul dword ptr [edx + 0x4]
        faddp st(1), st
        call ext_005B11E0
        push 0x0
        call ext_005B11E0
        fmulp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        fmul dword ptr [edx + 0x8]
        faddp st(1), st
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x4]
        ret 0x8
    }
}
