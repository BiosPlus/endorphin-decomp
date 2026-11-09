// Decompiled translation unit: src/ExprParser/Operators/Not.cpp

// [0x006A16B0] ExprParser::Operators::Not::vfunc_3 (45 bytes)
// Stack-argument thiscall: this in ecx, one stack arg (a1, esi), ret 4.
// Calls this->child->vfunc_3(a1), then child->vfunc_9(a1, (bool)!result) via the arg slot.
extern "C" __declspec(naked) void __fastcall fn_006A16B0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x24]
        test al, al
        sete al
        mov byte ptr [esp + 0x8], al
        mov eax, dword ptr [esp + 0x8]
        push eax
        push esi
        call edx
        pop esi
        ret 0x4
    }
}
