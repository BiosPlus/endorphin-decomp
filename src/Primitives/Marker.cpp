// Decompiled translation unit: src/Primitives/Marker.cpp

// [0x0052F6F0] Primitives::Marker::vfunc_13 (25 bytes)
extern "C" void ext_00538550();

extern "C" __declspec(naked) void __fastcall fn_0052F6F0(void* self, int edx_unused, const float* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax]
        push 0
        push 0
        push ecx
        add ecx, 0x3c
        fstp dword ptr [esp]
        call ext_00538550
        ret 4
    }
}

// [0x0053BDD0] Primitives::Marker::vfunc_28 (53 bytes)
extern "C" int mem_0092546C;
extern "C" int mem_00955998;
extern "C" int mem_00925520;
extern "C" int mem_0092552C;

extern "C" __declspec(naked) void __fastcall fn_0053BDD0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        call dword ptr [mem_0092546C]
        fld dword ptr [mem_00955998]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        mov eax, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x3c]
        push edx
        call eax
        call dword ptr [mem_0092552C]
        pop esi
        ret 4
    }
}

// [0x0053D320] Primitives::Marker::vfunc_25 (157 bytes)
extern "C" void ext_00538550();
extern "C" void ext_005B11E0();
extern "C" int mem_00993838;

extern "C" __declspec(naked) void __fastcall fn_0053D320(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 0x8], eax
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x8
        push edi
        je L_b1
        xor eax, 0x8
        mov dword ptr [esi + 0x1c], eax
    L_b1:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x40
        je L_b2
        xor eax, 0x40
        mov dword ptr [esi + 0x1c], eax
    L_b2:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x2
        je L_b3
        xor eax, 0x2
        mov dword ptr [esi + 0x1c], eax
    L_b3:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne L_b4
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
    L_b4:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x1
        je L_b5
        xor eax, 0x1
        mov dword ptr [esi + 0x1c], eax
    L_b5:
        mov edi, dword ptr [esp + 0xc]
        push 0
        mov ecx, edi
        call ext_005B11E0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x41
        jne L_b6
        push 0
        mov ecx, edi
        call ext_005B11E0
        jmp L_b7
    L_b6:
        mov ecx, dword ptr [esp + 0x10]
        fld dword ptr [ecx + 0xb8]
    L_b7:
        push 0
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        push 0
        push ecx
        lea ecx, [esi + 0x3c]
        fstp dword ptr [esp]
        call ext_00538550
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0052FF70] Primitives::Marker::vfunc_0 (96 bytes)
extern "C" void ext_00532B40();
extern "C" void ext_0053A810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0052FF70(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 0
        call ext_00532B40
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        test byte ptr [esp + 0x18], 0x1
        je L_0052FFBC
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0052FFBC:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
