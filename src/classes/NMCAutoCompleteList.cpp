// Decompiled translation unit: src/classes/NMCAutoCompleteList.cpp

// [0x006B8AB0] NMCAutoCompleteList::vfunc_66 (90 bytes)
extern "C" void ext_006A5DA0();
extern "C" int mem_009255A0;

extern "C" __declspec(naked) int __fastcall fn_006B8AB0(void* self, int edx_unused, int* msg) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp dword ptr [edi + 0x4], 0x100
        mov esi, ecx
        jne short L_fwd_006B8AB0
        mov eax, dword ptr [edi + 0x8]
        cmp eax, 0x26
        je short L_fwd_006B8AB0
        cmp eax, 0x28
        je short L_fwd_006B8AB0
        cmp eax, 0x1b
        je short L_fwd_006B8AB0
        test esi, esi
        jne short L_have_006B8AB0
        xor eax, eax
        jmp short L_pm_006B8AB0
    L_have_006B8AB0:
        mov eax, dword ptr [esi + 0x20]
    L_pm_006B8AB0:
        push 1
        push 0
        push 0
        push eax
        push edi
        call dword ptr [mem_009255A0]
        mov eax, dword ptr [esi + 0x5c]
        test eax, eax
        je short L_skip_006B8AB0
        mov eax, dword ptr [eax + 0x20]
        mov dword ptr [edi], eax
    L_skip_006B8AB0:
        pop edi
        xor eax, eax
        pop esi
        ret 4
    L_fwd_006B8AB0:
        push edi
        call ext_006A5DA0
        pop edi
        pop esi
        ret 4
    }
}
