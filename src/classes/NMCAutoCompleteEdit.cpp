// Decompiled translation unit: src/classes/NMCAutoCompleteEdit.cpp

// [0x006B8470] NMCAutoCompleteEdit::vfunc_79 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B8470(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        cmp dword ptr [ecx + 0x58], 0x0
        je done
        mov eax, dword ptr [ecx + 0x58]
        mov ecx, dword ptr [ecx + 0x54]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, eax
        call edx
        pop esi
    done:
        ret 0xc
    }
}
