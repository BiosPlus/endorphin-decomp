// Decompiled translation unit: src/Commands/SetTriggeredEventFrameRangeCommand.cpp

extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

// [0x0048F920] Commands::SetTriggeredEventFrameRangeCommand::vfunc_0 (86 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0048F920(void* self, int edx_unused, unsigned int flags) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 40h]
        push edi
        xor edi, edi
        cmp eax, edi
        je short L_skip40
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip40:
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 44h], edi
        mov dword ptr [esi + 48h], edi
        mov eax, dword ptr [esi + 30h]
        cmp eax, edi
        je short L_skip30
        push eax
        call ext_006A5C5C
        add esp, 4
    L_skip30:
        mov ecx, esi
        mov dword ptr [esi + 30h], edi
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 38h], edi
        call ext_00665810
        test byte ptr [esp + 0Ch], 1
        je short L_noself
        push esi
        call ext_006A5C5C
        add esp, 4
    L_noself:
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}

extern "C" int mem_00925134;

// [0x0048ED30] Commands::SetTriggeredEventFrameRangeCommand::vfunc_2 (238 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048ED30(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [ecx + 30h]
        cmp esi, dword ptr [ecx + 34h]
        push edi
        lea edi, [ecx + 2Ch]
        mov dword ptr [esp + 10h], ecx
        jbe short L1_loop
        call ebp
        _emit 8Bh
        _emit 0FFh
    L1_loop:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe short L1_a
        call ebp
    L1_a:
        cmp edi, edi
        je short L1_b
        call ebp
    L1_b:
        cmp esi, ebx
        je short L1_done
        cmp esi, dword ptr [edi + 8]
        jb short L1_c
        call ebp
    L1_c:
        cmp esi, dword ptr [edi + 8]
        mov ebx, dword ptr [esi]
        jb short L1_d
        call ebp
    L1_d:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 124h]
        lea ecx, [esi + 4]
        push ecx
        mov ecx, ebx
        call edx
        cmp esi, dword ptr [edi + 8]
        jb short L1_e
        call ebp
    L1_e:
        add esi, 0Ch
        jmp short L1_loop
    L1_done:
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [edi + 40h]
        add edi, 3Ch
        cmp esi, dword ptr [edi + 8]
        jbe short L2_loop
        call ebp
    L2_loop:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe short L2_a
        call ebp
    L2_a:
        cmp edi, edi
        je short L2_b
        call ebp
    L2_b:
        cmp esi, ebx
        je short L2_done
        cmp esi, dword ptr [edi + 8]
        jb short L2_c
        call ebp
    L2_c:
        cmp esi, dword ptr [edi + 8]
        mov ebx, dword ptr [esi]
        jb short L2_d
        call ebp
    L2_d:
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 120h]
        push ecx
        mov ecx, ebx
        call edx
        cmp esi, dword ptr [edi + 8]
        jb short L2_e
        call ebp
    L2_e:
        add esi, 8
        jmp short L2_loop
    L2_done:
        mov esi, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 20h]
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [esp + 10h], eax
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 124h]
        lea eax, [esp + 10h]
        push eax
        call edx
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 24h]
        mov eax, dword ptr [eax + 120h]
        push edx
        call eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
