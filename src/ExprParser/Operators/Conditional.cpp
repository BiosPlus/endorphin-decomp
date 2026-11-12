// Decompiled translation unit: src/ExprParser/Operators/Conditional.cpp

// [0x006A1500] ExprParser::Operators::Conditional::vfunc_3 (52 bytes)
// Stack-argument thiscall (ret 0xc): self is the first stack operand (ecx ignored).
// Calls self->child(+4)->vtable[3](self); if true, dispatch sub_006A1490(self, a2),
// otherwise sub_006A1490(self, a3).
extern "C" void ext_006A1490();

extern "C" __declspec(naked) void __fastcall fn_006A1500(void* ecx_unused, int edx_unused, void* self, void* a2, void* a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push esi
        call edx
        test al, al
        je else_branch
        mov eax, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_006A1490
        pop esi
        ret 0xc
    else_branch:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_006A1490
        pop esi
        ret 0xc
    }
}
