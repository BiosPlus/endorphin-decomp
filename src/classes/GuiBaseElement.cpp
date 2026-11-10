// Decompiled translation unit: src/classes/GuiBaseElement.cpp

extern "C" double mem_0094B868;

// [0x004EBA00] GuiBaseElement::vfunc_14 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EBA00(void* self) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp], edx
        fld dword ptr [esp]
        fld st(0)
        mov edx, dword ptr [ecx]
        fld qword ptr [mem_0094B868]
        mov edx, dword ptr [edx + 0x34]
        fsub st(1), st
        mov dword ptr [esp + 0x4], eax
        fxch st(1)
        lea eax, [esp + 0x8]
        push eax
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fld st(0)
        fsub st, st(2)
        fstp dword ptr [esp + 0x10]
        fxch st(2)
        fadd st, st(1)
        fstp dword ptr [esp + 0x14]
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        call edx
        add esp, 0x18
        ret 4
    }
}
