// Decompiled translation unit: src/NMData/CharacterData.cpp

// [0x005A98B0] NMData::CharacterData::vfunc_11 (54 bytes)
extern "C" bool __fastcall ext_00410390(void* self);

extern "C" __declspec(naked) bool __fastcall fn_005A98B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne ret_true
        mov ecx, esi
        call ext_00410390
        test al, al
        jne ret_true
        mov eax, 1
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        pop esi
        ret
ret_true:
        xor eax, eax
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        pop esi
        ret
    }
}

// [0x0059F370] NMData::CharacterData::vfunc_34_off_4 (129 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) int __fastcall fn_0059F370(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0891da8h
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, [edi - 4]
        test eax, eax
        je short L_null
        lea eax, [edi + 0ch]
        jmp short L_cont
    L_null:
        xor eax, eax
    L_cont:
        mov edx, dword ptr [edi + 4]
        mov edx, dword ptr [edx + 0ch]
        push 0
        lea ecx, [edi + 4]
        push eax
        mov eax, dword ptr [mem_00B40640]
        push eax
        lea ebx, [edi + 4f4h]
        call edx
        mov ecx, dword ptr [esp + 24h]
        push eax
        push ebx
        call ext_00493E40
        mov esi, eax
        mov dword ptr [esp + 1ch], esi
        test esi, esi
        mov dword ptr [esp + 14h], 0
        je short L_skip
        push esi
        lea ecx, [edi + 0ch]
        mov dword ptr [esi + 20h], ebx
        call ext_00528B90
    L_skip:
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0ch
        ret 4
    }
}
