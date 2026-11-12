// Decompiled translation unit: src/classes/EditBox.cpp

extern "C" void ext_00415430();
extern "C" void ext_006A5DA0();
extern "C" int mem_00925694;

// [0x004154A0] EditBox::vfunc_66 (149 bytes)
extern "C" __declspec(naked) int __fastcall fn_004154A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        cmp dword ptr [edi + 4], 100h
        mov esi, ecx
        jne L_base
        mov eax, dword ptr [edi + 8]
        cmp eax, 0Dh
        jne L_notret
        mov eax, dword ptr [esi + 20h]
        mov edi, dword ptr [mem_00925694]
        push 0
        push 0
        push 0B8h
        push eax
        call edi
        test eax, eax
        je L_ret1
        mov ecx, dword ptr [esi + 20h]
        push 0
        push 0
        push 0B9h
        push ecx
        call edi
        mov ecx, esi
        call ext_00415430
        mov edx, dword ptr [esi + 20h]
        push -1
        push 0
        push 0B1h
        push edx
        call edi
        mov eax, dword ptr [esi + 20h]
        push 0
        push 0
        push 0B7h
        push eax
        call edi
    L_ret1:
        pop edi
        mov eax, 1
        pop esi
        ret 4
    L_notret:
        cmp eax, 9
        je L_base
        mov ecx, dword ptr [esi + 20h]
        push 0
        push 1
        push 0B9h
        push ecx
        call dword ptr [mem_00925694]
    L_base:
        push edi
        mov ecx, esi
        call ext_006A5DA0
        pop edi
        pop esi
        ret 4
    }
}
