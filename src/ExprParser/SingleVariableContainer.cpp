// Decompiled translation unit: src/ExprParser/SingleVariableContainer.cpp

// [0x0069B5E0] ExprParser::SingleVariableContainer::vfunc_2 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0069B5E0(void* self, int edx_unused, void* out, void* a2) {
    __asm {
        push ecx
        mov dword ptr [esp], 0
        mov ecx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push esi
        call edx
        mov esi, eax
        cmp dword ptr [esi + 0x4], 0
        je L_zero_0069B5E0
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x70]
        push esi
        lea edx, [esp + 0x8]
        push edx
        call eax
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0x8
L_zero_0069B5E0:
        mov edx, dword ptr [esi + 0x4]
        lea eax, [esp + 0x4]
        mov dword ptr [esp + 0x4], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0x8
    }
}
