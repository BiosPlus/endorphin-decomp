// Decompiled translation unit: src/UtilityGraphics/CubeLocator.cpp

extern "C" int mem_00955080;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;

// [0x005388A0] UtilityGraphics::CubeLocator::vfunc_22 (604 bytes)
extern "C" __declspec(naked) void __fastcall fn_005388A0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        fld dword ptr [ecx + 0x14]
        push esi
        fmul qword ptr [mem_00955080]
        push 0x1
        fstp dword ptr [esp + 0x8]
        call dword ptr [mem_00925490]
        fld dword ptr [esp + 0x4]
        mov esi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fld st(0)
        fchs
        fstp dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        call dword ptr [mem_00925488]
        pop esi
        add esp, 0x8
        ret 0x4
    }
}
