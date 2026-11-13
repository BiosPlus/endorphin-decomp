// Decompiled translation unit: src/classes/CharacterSelection.cpp

extern "C" void ext_00494000();
extern "C" void ext_004940E0();

// [0x004EC9B0] CharacterSelection::vfunc_0_off_18 (124 bytes)
extern "C" __declspec(naked) void __fastcall fn_004EC9B0(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4) {
    __asm {
        sub esp, 0xc
        push esi
        push edi
        push 0x0
        push 0x0
        mov edi, ecx
        push 0x40
        lea ecx, [esp + 0x14]
        call ext_00494000
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [esi], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x4], edx
        mov eax, dword ptr [eax + 0x8]
        push 0x0
        push 0x1000
        mov ecx, esi
        mov dword ptr [esi + 0x8], eax
        call ext_004940E0
        push 0x1
        push 0x2000
        mov ecx, esi
        call ext_004940E0
        mov ecx, dword ptr [edi + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [esp + 0x20]
        pop edi
        mov dword ptr [eax], 0x6
        mov dword ptr [ecx], 0x6
        pop esi
        add esp, 0xc
        ret 0x10
    }
}

extern "C" void ext_0046F7D0();
extern "C" void ext_004C1BF0();
extern "C" void ext_0055DA20();

// [0x004ED400] CharacterSelection::vfunc_14 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_004ED400(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x54]
        mov dword ptr [esp + 0x4], 0x0
        call edx
        cmp dword ptr [esp + 0x10], eax
        jne L_mismatch_4ED400
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        push edi
        lea edi, [esi + 0x3c]
        je L_skip1_4ED400
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
L_skip1_4ED400:
        mov edx, dword ptr [esi + 0xc]
        test edx, edx
        jne L_nz_4ED400
        xor ecx, ecx
        jmp L_cmp_4ED400
L_nz_4ED400:
        mov ecx, dword ptr [esi + 0x10]
        sub ecx, edx
        sar ecx, 0x3
L_cmp_4ED400:
        cmp eax, ecx
        je L_call_4ED400
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esi + 0x18]
        call edx
L_call_4ED400:
        push edi
        call ext_004C1BF0
        mov esi, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
L_mismatch_4ED400:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004EE050] CharacterSelection::vfunc_1_off_18 (45 bytes)
extern "C" void ext_004EDC90();
extern "C" __declspec(naked) void __fastcall fn_004EE050(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x3c]
        lea edx, [esi + 0x24]
        push edx
        call eax
        lea ecx, [esi - 0x18]
        call ext_004EDC90
        cmp dword ptr [esi + 0x34], 0x0
        je L_done
        mov ecx, dword ptr [esi + 0x34]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        call eax
    L_done:
        pop esi
        ret 0x4
    }
}
