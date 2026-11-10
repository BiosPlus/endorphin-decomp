// Decompiled translation unit: src/ExprParser/Operators/And.cpp

// [0x006A1440] ExprParser::Operators::And::vfunc_3 (69 bytes)
// Stack-argument thiscall: this in ecx, two stack args (a1 = esi, a2), ret 8.
// result = this->child->vfunc_3(a1) && a2->child->vfunc_3(a2);
// this->child->vfunc_9(a1, result) via the arg slot.
extern "C" __declspec(naked) void __fastcall fn_006A1440(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        test al, al
        je short L_false
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        test al, al
        mov byte ptr [esp + 0x8], 0x1
        jne short L_store
    L_false:
        mov byte ptr [esp + 0x8], 0x0
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
