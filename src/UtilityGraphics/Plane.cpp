// Decompiled translation unit: src/UtilityGraphics/Plane.cpp

extern "C" int mem_00993828;
extern "C" int mem_0092546C;
extern "C" int mem_0092551C;
extern "C" int mem_00925438;
extern "C" int mem_00925490;
extern "C" int mem_009254AC;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_0092552C;

// [0x005393B0] UtilityGraphics::Plane::vfunc_22 (216 bytes)
extern "C" __declspec(naked) void __fastcall fn_005393B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        fld dword ptr [ecx + 0x14]
        push esi
        fmul qword ptr [mem_00993828]
        push 0x2008
        fstp dword ptr [esp + 0x8]
        call dword ptr [mem_0092546C]
        push 0x1b02
        push 0x408
        call dword ptr [mem_0092551C]
        push 0xb44
        call dword ptr [mem_00925438]
        push 0x7
        call dword ptr [mem_00925490]
        fld1
        sub esp, 0x0c
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254AC]
        fldz
        mov esi, dword ptr [mem_0092548C]
        sub esp, 0x0c
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x4]
        fld st(0)
        sub esp, 0x0c
        fchs
        fstp dword ptr [esp + 0x14]
        fldz
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0x0c
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0x0c
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call esi
        call dword ptr [mem_00925488]
        call dword ptr [mem_0092552C]
        pop esi
        add esp, 0x8
        ret 0x4
    }
}
