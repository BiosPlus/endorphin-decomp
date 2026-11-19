// Decompiled translation unit: src/classes/GWCPropInPlaceEdit.cpp

// [0x006B0D30] GWCPropInPlaceEdit::vfunc_66 (129 bytes)
extern "C" int mem_009255A0;
extern "C" int mem_00925650;
extern "C" void ext_006A5DA0();
extern "C" void ext_006A5E00();
extern "C" void ext_006A60D0();

extern "C" __declspec(naked) int __fastcall fn_006B0D30(void* self, int edx_unused, void* msg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp dword ptr [eax + 4], 0x100
        push esi
        mov esi, ecx
        jne L_default
        mov ecx, dword ptr [eax + 8]
        add ecx, -9
        cmp ecx, 0x1f
        ja L_default
        movzx ecx, byte ptr [ecx + 0x6b0dc0]
        jmp dword ptr [4*ecx + 0x6b0db4]
L_caseA:
        push 1
        push 0
        push 0
        push 0
        push eax
        call dword ptr [mem_009255A0]
        mov edx, dword ptr [esi + 0x20]
        push edx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        mov eax, 1
        pop esi
        ret 4
L_caseB:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        mov ecx, eax
        call ext_006A60D0
        xor eax, eax
        pop esi
        ret 4
L_default:
        push eax
        mov ecx, esi
        call ext_006A5DA0
        pop esi
        ret 4
    }
}
