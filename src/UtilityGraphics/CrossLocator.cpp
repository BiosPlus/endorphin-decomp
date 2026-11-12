// Decompiled translation unit: src/UtilityGraphics/CrossLocator.cpp

extern "C" int mem_00993828;
extern "C" int mem_00925490;
extern "C" int mem_009254A4;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;

// [0x00538780] UtilityGraphics::CrossLocator::vfunc_22 (276 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538780(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x14]
        push edi
        fmul qword ptr [mem_00993828]
        push 1
        fstp dword ptr [esp + 0x10]
        call dword ptr [mem_00925490]
        cmp byte ptr [esi + 0x18], 0
        fldz
        mov ebx, dword ptr [mem_009254A4]
        je SHORT L_a
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld1
        fstp dword ptr [esp]
        call ebx
        fldz
L_a:
        fld dword ptr [esp + 0xc]
        mov edi, dword ptr [mem_0092548C]
        fchs
        sub esp, 0xc
        fstp dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        call edi
        cmp byte ptr [esi + 0x18], 0
        je SHORT L_b
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld1
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
L_b:
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        cmp byte ptr [esi + 0x18], 0
        je SHORT L_c
        fld1
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call ebx
L_c:
        fld dword ptr [esp + 0x10]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
    }
}
