// Decompiled translation unit: src/UtilityGraphics/Line.cpp

extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;

// [0x00538E40] UtilityGraphics::Line::vfunc_22 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538E40(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        push 1
        mov esi, ecx
        call dword ptr [mem_00925490]
        fldz
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0x0c
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x14]
        sub esp, 0x0c
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        pop edi
        pop esi
        ret 0x4
    }
}
