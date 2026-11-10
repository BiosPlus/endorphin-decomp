// Decompiled translation unit: src/ExprParser/Operators/Tanh.cpp

extern "C" void ext_006A73DE();

// [0x006A1C90] ExprParser::Operators::Tanh::vfunc_3 (56 bytes)
extern "C" __declspec(naked) void __stdcall fn_006A1C90(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push esi
        call edx
        call ext_006A73DE
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        mov edx, dword ptr [eax + 0x1c]
        push ecx
        fstp dword ptr [esp]
        push esi
        call edx
        pop esi
        ret 0x4
    }
}
