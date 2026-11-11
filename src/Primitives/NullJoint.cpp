// Decompiled translation unit: src/Primitives/NullJoint.cpp

// [0x0053DD90] Primitives::NullJoint::vfunc_25 (138 bytes)
extern "C" void ext_0053A610();
extern "C" void ext_005B11E0();
extern "C" void ext_00538550();
extern "C" int mem_00993838;

extern "C" __declspec(naked) void __fastcall fn_0053DD90(void* self, int edx_unused, int a1, int a2, int a3) {
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
        jne L_skip4
        xor eax, 0x4
        mov dword ptr [esi + 0x1c], eax
    L_skip4:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne L_skip40000
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
    L_skip40000:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x1
        je L_skip1
        xor eax, 0x1
        mov dword ptr [esi + 0x1c], eax
    L_skip1:
        push 0
        mov ecx, edi
        call ext_005B11E0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x41
        jne L_load_field
        push 0
        mov ecx, edi
        call ext_005B11E0
        jmp L_join
    L_load_field:
        fld dword ptr [ebx + 0xb8]
    L_join:
        push 0
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        push 0
        push ecx
        lea ecx, [esi + 0x3c]
        fstp dword ptr [esp]
        call ext_00538550
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}
