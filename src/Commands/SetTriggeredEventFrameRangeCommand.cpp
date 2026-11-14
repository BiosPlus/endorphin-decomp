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

extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

// [0x0048E9D0] Commands::SetTriggeredEventFrameRangeCommand::vfunc_3 (203 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E9D0(void* self) {
    __asm {
        push    -1
        push    0x88533c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x84
        push    esi
        push    1
        mov     esi, ecx
        push    2
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0xc], 0
        call    dword ptr [mem_00924E4C]
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x14]
        push    0x93bf0c
        push    eax
        push    0x93e6f8
        push    ecx
        lea     edx, [esp + 0x18]
        push    0x93e6dc
        push    edx
        mov     dword ptr [esp + 0xa8], 1
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    eax
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    eax
        call    ext_00435D00
        mov     esi, dword ptr [esp + 0xa0]
        add     esp, 8
        push    esi
        lea     ecx, [esp + 0xc]
        call    dword ptr [mem_00924E54]
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 4], 1
        mov     byte ptr [esp + 0x90], 0
        call    dword ptr [mem_00924E58]
        mov     ecx, dword ptr [esp + 0x88]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x90
        ret     4
    }
}

extern "C" void ext_0048EF20();
extern "C" void ext_0048EF80();
extern "C" void ext_0047D870();
extern "C" void ext_0047D970();

// [0x0048F430] Commands::SetTriggeredEventFrameRangeCommand::vfunc_1 (186 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048F430(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, [esi + 2Ch]
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp dword ptr [ebx + 4], edi
        jbe short L_a
        call dword ptr [mem_00925134]
    L_a:
        mov ebp, dword ptr [ebx + 4]
        cmp ebp, dword ptr [ebx + 8]
        jbe short L_b
        call dword ptr [mem_00925134]
    L_b:
        push edi
        push ebx
        push ebp
        push ebx
        lea eax, [esp + 20h]
        push eax
        mov ecx, ebx
        call ext_0048EF20
        mov ebp, dword ptr [esi + 44h]
        cmp dword ptr [esi + 40h], ebp
        lea edi, [esi + 3Ch]
        jbe short L_c
        call dword ptr [mem_00925134]
    L_c:
        mov eax, dword ptr [edi + 4]
        cmp eax, dword ptr [edi + 8]
        mov dword ptr [esp + 10h], eax
        jbe short L_d
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 10h]
    L_d:
        push ebp
        push edi
        push eax
        push edi
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, edi
        call ext_0048EF80
        mov ecx, dword ptr [esi + 4Ch]
        push ebx
        call ext_0047D870
        mov ecx, dword ptr [esi + 4Ch]
        push edi
        call ext_0047D970
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1Ch]
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 14h], eax
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 124h]
        lea eax, [esp + 10h]
        push eax
        call edx
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 28h]
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
