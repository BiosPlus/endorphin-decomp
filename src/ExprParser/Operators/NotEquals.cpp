// Decompiled translation unit: src/ExprParser/Operators/NotEquals.cpp

// [0x006A09C0] ExprParser::Operators::NotEquals::vfunc_3 (53 bytes)
extern "C" __declspec(naked) void __stdcall fn_006A09C0(void* self, void* a2) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xa8]
        push edx
        push esi
        call eax
        test al, al
        sete cl
        mov byte ptr [esp + 0x8], cl
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
