// Decompiled translation unit: src/classes/GWCPropInPlaceSpinEdit.cpp

extern "C" void ext_006A5DA0();
extern "C" void ext_006A663A();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();
extern "C" int mem_00925650;

// [0x006B6720] GWCPropInPlaceSpinEdit::vfunc_66 (118 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B6720(void* self, int edx_unused, void* msg) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        cmp dword ptr [edx + 0x4], 0x100
        jne short L_006B6747
        lea eax, [ecx + 0xa8]
        test eax, eax
        jne short L_006B6742
        mov dword ptr [edx], eax
        mov dword ptr [esp + 0x4], edx
        jmp ext_006A5DA0
L_006B6742:
        mov eax, dword ptr [eax + 0x20]
        mov dword ptr [edx], eax
L_006B6747:
        mov dword ptr [esp + 0x4], edx
        jmp ext_006A5DA0
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, ecx
        call ext_006A663A
        test esi, esi
        je short L_006B6765
        mov esi, dword ptr [esi + 0x20]
L_006B6765:
        lea ecx, [edi + 0xa8]
        test ecx, ecx
        jne short L_006B6773
        xor eax, eax
        jmp short L_006B6776
L_006B6773:
        mov eax, dword ptr [ecx + 0x20]
L_006B6776:
        cmp esi, eax
        jne short L_006B678C
        mov eax, dword ptr [edi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
L_006B678C:
        call ext_006A60D0
        pop edi
        pop esi
        ret 0x4
    }
}
