// Decompiled translation unit: src/ExprParser/Operators/Min.cpp

// [0x006A1380] ExprParser::Operators::Min::vfunc_3 (85 bytes)
// Stack-argument thiscall: a1 (esi) and a2 on stack, ret 8.
// r1 = a2->child->vfunc_1(a2); r2 = a1->child->vfunc_1(a1);
// pick = (r2 <= r1) ? r2 : r1   (the smaller value; fcompp/test ah,41h)
// then a1->child->vfunc_7(a1, pick) with the value pushed as a dword in the slot.
extern "C" __declspec(naked) void __stdcall fn_006A1380(void* self, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push esi
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0xc]
        fld dword ptr [esp + 0x8]
        fcompp
        fnstsw ax
        test ah, 0x41
        lea eax, [esp + 0xc]
        je L_pick
        lea eax, [esp + 0x8]
L_pick:
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push esi
        call eax
        pop esi
        ret 0x8
    }
}
