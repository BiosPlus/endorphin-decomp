// Decompiled translation unit: src/ExprParser/Operators/LessEqual.cpp

// [0x006A0940] ExprParser::Operators::LessEqual::vfunc_3 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A0940(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push esi
        call edx
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        fstp qword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fcomp qword ptr [esp + 0x4]
        mov byte ptr [esp + 0x10], 0x1
        fnstsw ax
        test ah, 0x1
        je short L_006A0983
        mov byte ptr [esp + 0x10], 0x0
    L_006A0983:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x24]
        push eax
        push esi
        call edx
        pop esi
        add esp, 0x8
        ret 0x8
    }
}
