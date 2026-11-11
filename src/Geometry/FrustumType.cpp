// Decompiled translation unit: src/Geometry/FrustumType.cpp

// [0x005B10B0] Geometry::FrustumType::vfunc_2 (17 bytes)
extern "C" void ext_006484B0();

extern "C" __declspec(naked) void __stdcall fn_005B10B0(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        push eax
        call ext_006484B0
        ret 8
    }
}

// [0x005B1A70] Geometry::FrustumType::vfunc_3 (64 bytes)
extern "C" void ext_005B11E0();
extern "C" int mem_00993828;
extern "C" int mem_009576E8;

extern "C" __declspec(naked) void __stdcall fn_005B1A70(void* a1) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push 1
        call ext_005B11E0
        push 0
        call ext_005B11E0
        faddp st(1), st
        push 2
        fmul qword ptr [mem_00993828]
        fstp dword ptr [esp + 8]
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

// [0x005B42D0] Geometry::FrustumType::vfunc_18 (114 bytes)
extern "C" void ext_005B3FF0();
extern "C" void ext_005B4010();
extern "C" void ext_005B4030();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_005B42D0(void* self, int edx_unused, void* p, int a, int b) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x29e
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 4], 0
        je L_29e
        sub eax, 0x5a
        je L_2f8
        sub eax, 1
        je L_2f9
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_2f9:
        mov eax, dword ptr [esp + 0x14]
        push eax
        push esi
        call ext_005B4010
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_2f8:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        call ext_005B3FF0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    L_29e:
        mov edx, dword ptr [esp + 0x14]
        push edx
        push esi
        call ext_005B4030
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}
