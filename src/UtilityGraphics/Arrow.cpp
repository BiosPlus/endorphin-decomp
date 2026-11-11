// Decompiled translation unit: src/UtilityGraphics/Arrow.cpp

extern "C" void ext_00538E40();
extern "C" void ext_0063E02A();
extern "C" int mem_00925414;
extern "C" int mem_00996D08;
extern "C" int mem_009253D0;
extern "C" int mem_00996CB8;
extern "C" int mem_009520D8;
extern "C" int mem_00925404;

// [0x00538F20] UtilityGraphics::Arrow::vfunc_22 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538F20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00538E40
        call dword ptr [mem_00925414]
        fld dword ptr [esi + 0x14]
        fmul qword ptr [mem_00996D08]
        sub esp, 0x0c
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        fld dword ptr [esi + 0x14]
        fmul qword ptr [mem_00996CB8]
        mov ecx, dword ptr [esi + 0x18]
        push 1
        push 8
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fldz
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esi + 0x14]
        fmul qword ptr [mem_009520D8]
        fstp qword ptr [esp]
        push ecx
        call ext_0063E02A
        call dword ptr [mem_00925404]
        pop esi
        ret 0x4
    }
}
