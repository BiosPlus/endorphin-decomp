// Decompiled translation unit: src/classes/NullRelationship.cpp

// [0x00645A80] NullRelationship::vfunc_48 (78 bytes)
extern "C" __declspec(naked) int __fastcall fn_00645A80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x68], 0x0
        mov eax, dword ptr [ecx + 0x22c]
        test eax, eax
        push edi
        je skip1
        mov eax, dword ptr [eax + 0x158]
        test eax, eax
        je skip1
        mov eax, dword ptr [eax + 0xac]
        mov dword ptr [esi + 0x68], eax
skip1:
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x14]
        mov edi, dword ptr [esi]
        add ecx, 0x4
        push eax
        call edx
        push eax
        mov eax, dword ptr [edi + 0xac]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x8
    }
}
