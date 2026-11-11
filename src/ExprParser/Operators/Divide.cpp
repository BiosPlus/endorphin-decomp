// Decompiled translation unit: src/ExprParser/Operators/Divide.cpp

// [0x006A1540] ExprParser::Operators::Divide::vfunc_3 (103 bytes)
// x = a2->child->vfunc_1(a2); if (x == 0) a1->child->vfunc_7(a1, 0.0f);
// else a1->child->vfunc_7(a1, a1->child->vfunc_1(a1) / x);
// Stack-argument fastcall shape: self (ecx) unused, a1 at [esp+4], a2 at [esp+8], ret 8.
extern "C" __declspec(naked) void __fastcall fn_006A1540(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x8]
        fldz
        fcom dword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x44
        jnp L_006A1591
        push esi
        fstp st(0)
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        fdiv dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        push ecx
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [esp]
        push esi
        call eax
        pop esi
        ret 0x8
    L_006A1591:
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push ecx
        fstp dword ptr [esp]
        push eax
        mov eax, dword ptr [edx + 0x1c]
        call eax
        ret 0x8
    }
}
