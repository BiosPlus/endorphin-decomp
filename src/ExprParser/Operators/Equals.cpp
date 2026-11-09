// Decompiled translation unit: src/ExprParser/Operators/Equals.cpp

// [0x006A07D0] ExprParser::Operators::Equals::vfunc_3 (48 bytes)
extern "C" __declspec(naked) void __stdcall fn_006A07D0(void* self, void* a2) {
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
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x24]
        mov byte ptr [esp + 0x8], al
        mov eax, dword ptr [esp + 0x8]
        push eax
        push esi
        call edx
        pop esi
        ret 0x8
    }
}
