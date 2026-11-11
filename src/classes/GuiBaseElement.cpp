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

// [0x004EBA60] GuiBaseElement::vfunc_15 (65 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00596660();

extern "C" __declspec(naked) void __fastcall fn_004EBA60(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_skip1
        call ebp
    L_skip1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_skip2
        call ebp
    L_skip2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}
