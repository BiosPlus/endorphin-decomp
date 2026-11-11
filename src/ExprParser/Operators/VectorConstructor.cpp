// Decompiled translation unit: src/ExprParser/Operators/VectorConstructor.cpp

// [0x006A0A50] ExprParser::Operators::VectorConstructor::vfunc_3 (100 bytes)
// Stack-argument thiscall (ret 0xc): three stack operands a1, a2, a3 (ecx ignored).
// Each operand's child (operand+4) vtable[1] is called with the operand as its argument,
// collecting floats; then child(a1)->vtable[11](a1, &z) is tail-dispatched.
extern "C" __declspec(naked) void __fastcall fn_006A0A50(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push esi
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0xc]
        lea eax, [esp + 0x8]
        fld dword ptr [esp + 0x4]
        push eax
        fstp dword ptr [esp + 0x14]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x2c]
        push esi
        call edx
        pop esi
        add esp, 0x10
        ret 0xc
    }
}
