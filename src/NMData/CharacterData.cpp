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

// [0x0059DFB0] NMData::CharacterData::vfunc_24_off_4 (164 bytes)
extern "C" void ext_0059D930();
extern "C" void ext_00594600();
extern "C" int mem_00924FC8;
extern "C" int mem_00924FB0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0059DFB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        push 0x928b5d
        push edi
        mov esi, ecx
        call dword ptr [mem_00924FC8]
        add esp, 0x8
        test al, al
        je L_done
        push edi
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esi - 0x4]
        call ext_0059D930
        lea edi, [esi + 0x30]
        lea ecx, [esp + 0x8]
        push edi
        push ecx
        mov dword ptr [esp + 0x34], 0
        call dword ptr [mem_00924FB0]
        add esp, 0x8
        test al, al
        je L_skip
        lea edx, [esp + 0x8]
        push edx
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esi + 0x5f4]
        test ecx, ecx
        je L_skip
        add esi, 0x14
        push esi
        call ext_00594600
L_skip:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
L_done:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}
