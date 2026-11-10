// Decompiled translation unit: src/ExprParser/Operators/Or.cpp

// [0x006A0A00] ExprParser::Operators::Or::vfunc_3 (69 bytes)
// Stack-argument thiscall: a1 (esi) and a2 on stack, ret 8. Short-circuit OR:
// if a1->child->vfunc_3(a1) is true -> result=1; else result=a2->child->vfunc_3(a2);
// then a1->child->vfunc_9(a1, result) with the result pushed as a dword from the a1 slot.
extern "C" __declspec(naked) void __stdcall fn_006A0A00(void* self, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        test al, al
        jne L_true
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        test al, al
        mov byte ptr [esp + 0x8], 0x0
        je L_store
L_true:
        mov byte ptr [esp + 0x8], 0x1
L_store:
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x24]
        push eax
        push esi
        call edx
        pop esi
        ret 0x8
    }
}
