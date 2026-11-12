// Decompiled translation unit: src/Primitives/RPRO.cpp

extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;
extern "C" int mem_0092552C;

// [0x0053C1A0] Primitives::RPRO::vfunc_28 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053C1A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push 0x4
        mov esi, ecx
        call dword ptr [mem_0092546C]
        fld1
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x44]
        push eax
        call dword ptr [mem_009253C8]
        mov edx, dword ptr [esi + 0x108]
        mov eax, dword ptr [edx + 0x58]
        lea ecx, [esi + 0x108]
        push 0x1
        call eax
        call dword ptr [mem_00925404]
        call dword ptr [mem_0092552C]
        pop esi
        ret 0x4
    }
}

// [0x0053C150] Primitives::RPRO::vfunc_29 (75 bytes)
extern "C" void ext_0053AD10();

extern "C" __declspec(naked) void __fastcall fn_0053C150(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0053AD10
        fld1
        fst dword ptr [esi + 0x3c]
        fst dword ptr [esi + 0x44]
        fldz
        fst dword ptr [esi + 0x48]
        fst dword ptr [esi + 0x4c]
        fst dword ptr [esi + 0x50]
        fst dword ptr [esi + 0x54]
        fst dword ptr [esi + 0x5c]
        fst dword ptr [esi + 0x60]
        fst dword ptr [esi + 0x64]
        fst dword ptr [esi + 0x68]
        fst dword ptr [esi + 0x70]
        fst dword ptr [esi + 0x74]
        fst dword ptr [esi + 0x78]
        fstp dword ptr [esi + 0x7c]
        fst dword ptr [esi + 0x58]
        fst dword ptr [esi + 0x6c]
        fstp dword ptr [esi + 0x80]
        mov dword ptr [esi + 0x40], 0x0
        pop esi
        ret
    }
}

// [0x0053C0C0] Primitives::RPRO::vfunc_13 (133 bytes)
extern "C" int mem_0092A280;
extern "C" int mem_0093F790;
extern "C" void ext_00538550();
extern "C" void ext_00538D10();

extern "C" __declspec(naked) void __fastcall fn_0053C0C0(void* self, int edx_unused, float* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov byte ptr [esi + 0x4], 0x1
        fld dword ptr [eax]
        push 0x0
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        push 0x0
        push ecx
        fst dword ptr [esi + 0x3c]
        lea ecx, [esi + 0xec]
        fstp dword ptr [esp]
        call ext_00538550
        fld dword ptr [esi + 0x3c]
        push 0x0
        push 0x0
        push ecx
        lea ecx, [esi + 0x108]
        fstp dword ptr [esp]
        call ext_00538550
        fld dword ptr [esi + 0x3c]
        fmul qword ptr [mem_0092A280]
        push 0xa
        sub esp, 0xc
        lea ecx, [esi + 0xc4]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x3c]
        fmul qword ptr [mem_0093F790]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp]
        call ext_00538D10
        pop esi
        ret 0x4
    }
}

// [0x0053DFD0] Primitives::RPRO::vfunc_25 (225 bytes)
extern "C" int mem_00993838;
extern "C" void ext_0053A610();
extern "C" void ext_005B11E0();

extern "C" __declspec(naked) void __fastcall fn_0053DFD0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        push ebx
        push edi
        mov esi, ecx
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x4
        jne L_a
        xor eax, 0x4
        mov dword ptr [esi + 0x1c], eax
    L_a:
        push 0x0
        mov ecx, edi
        call ext_005B11E0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x41
        jne L_b
        push 0x0
        mov ecx, edi
        call ext_005B11E0
        jmp L_c
    L_b:
        fld dword ptr [ebx + 0xb8]
    L_c:
        push 0x0
        fstp dword ptr [esi + 0x3c]
        fld dword ptr [esi + 0x3c]
        push 0x0
        push ecx
        lea ecx, [esi + 0xec]
        fstp dword ptr [esp]
        call ext_00538550
        fld dword ptr [esi + 0x3c]
        push 0x0
        push 0x0
        push ecx
        lea ecx, [esi + 0x108]
        fstp dword ptr [esp]
        call ext_00538550
        fld dword ptr [esi + 0x3c]
        fmul qword ptr [mem_0092A280]
        push 0xa
        sub esp, 0xc
        lea ecx, [esi + 0xc4]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x3c]
        fmul qword ptr [mem_0093F790]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp]
        call ext_00538D10
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne L_d
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
    L_d:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x1
        je L_e
        xor eax, 0x1
        mov dword ptr [esi + 0x1c], eax
    L_e:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}
