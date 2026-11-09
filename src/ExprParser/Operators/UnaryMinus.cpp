// Decompiled translation unit: src/ExprParser/Operators/UnaryMinus.cpp

// [0x006A1700] ExprParser::Operators::UnaryMinus::vfunc_3 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_006A1700(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push esi
        call edx
        fchs
        mov ecx, dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
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
