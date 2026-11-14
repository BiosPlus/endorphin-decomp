// Decompiled translation unit: src/NMData/PoseData.cpp

// [0x0048C120] NMData::PoseData::vfunc_6 (35 bytes)
extern "C" int mem_00A9F1A4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_0048C120(void* ecx_unused, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1A4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005B0370] NMData::PoseData::vfunc_3 (1035 bytes)
extern "C" int mem_00A9F554;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F8D8;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00925134;
extern "C" int mem_00B40640;
extern "C" int mem_00A9F0C4;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FE4;
extern "C" int mem_00A9F200;
extern "C" int mem_00A9F1F8;
extern "C" int mem_00A9ED98;
extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_005937B0();
extern "C" void ext_006404E0();
extern "C" void ext_00593520();
extern "C" void ext_00593D00();
extern "C" void ext_00593AE0();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640270();
extern "C" void ext_0065F2A0();
extern "C" void ext_005877B0();
extern "C" void ext_00486E30();

extern "C" __declspec(naked) void __fastcall fn_005B0370(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8a3046
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x328
        mov eax, dword ptr [mem_00A9F554]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x340]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x28], esi
        call ext_00640110
        lea ecx, [esi + 0x64]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov ecx, dword ptr [esi + 0x80]
        push ecx
        lea edx, [esp + 0x34]
        push edx
        call ext_005937B0
        add esp, 8
        mov edi, eax
        mov eax, dword ptr [mem_00A9F8D8]
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x344], 0
        call ext_00640110
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x340], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [mem_00A9F0C0]
        push ecx
        mov ecx, ebp
        call ext_006404E0
        lea ebx, [esi + 8]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ebx + 4]
        mov edi, dword ptr [eax]
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x14], ebx
        jmp L_0440
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_0440:
        test ebx, ebx
        mov edx, dword ptr [esi + 0xc]
        lea eax, [esi + 8]
        mov dword ptr [esp + 0x20], edx
        je L_0452
        cmp ebx, eax
        je L_0458
L_0452:
        call dword ptr [mem_00925134]
L_0458:
        cmp edi, dword ptr [esp + 0x20]
        je L_0571
        lea ecx, [esp + 0x68]
        call ext_00593520
        test ebx, ebx
        mov dword ptr [esp + 0x340], 1
        jne L_0480
        call dword ptr [mem_00925134]
L_0480:
        cmp edi, dword ptr [ebx + 4]
        jne L_048B
        call dword ptr [mem_00925134]
L_048B:
        mov eax, dword ptr [mem_00B40640]
        push eax
        lea ecx, [esp + 0x70]
        lea ebp, [edi + 0xc]
        call ext_00593D00
        mov edi, eax
        lea esi, [ebp + 0x1c]
        mov ecx, 0x10
        rep movsd
        mov ecx, dword ptr [mem_00A9F0C4]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        call ext_006404E0
        push eax
        lea ecx, [esp + 0x6c]
        call ext_00593AE0
        mov edx, dword ptr [esp + 0x18]
        cmp edx, dword ptr [ebx + 4]
        mov esi, eax
        jne L_04D4
        call dword ptr [mem_00925134]
L_04D4:
        mov eax, dword ptr [mem_00A9F838]
        push eax
        mov ecx, esi
        call ext_00640110
        mov ecx, ebp
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov ecx, esi
        mov edi, eax
        call ext_0063F8D0
        push edi
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x344], 2
        call ext_00640270
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x340], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14c]
        mov dword ptr [esp + 0x340], 3
        call ext_0065F2A0
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x340], -1
        call ext_005877B0
        lea ecx, [esp + 0x14]
        call ext_00486E30
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x348]
        jmp L_0440
L_0571:
        mov edx, dword ptr [mem_00A9F200]
        push edx
        mov ecx, ebp
        call ext_006404E0
        mov ecx, dword ptr [esi + 0x1c]
        mov edi, dword ptr [ecx]
        mov dword ptr [esp + 0x10], eax
        lea eax, [esi + 0x18]
        mov ebx, eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x1c], ebx
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_05A0:
        test ebx, ebx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x2c], ecx
        je L_05AF
        cmp ebx, eax
        je L_05B5
L_05AF:
        call dword ptr [mem_00925134]
L_05B5:
        cmp edi, dword ptr [esp + 0x2c]
        je L_06DF
        lea ecx, [esp + 0x158]
        call ext_00593520
        test ebx, ebx
        mov dword ptr [esp + 0x340], 4
        jne L_05E0
        call dword ptr [mem_00925134]
L_05E0:
        cmp edi, dword ptr [ebx + 4]
        jne L_05EB
        call dword ptr [mem_00925134]
L_05EB:
        mov edx, dword ptr [mem_00B40640]
        push edx
        lea ecx, [esp + 0x160]
        lea ebp, [edi + 0xc]
        call ext_00593D00
        mov edi, eax
        lea esi, [ebp + 0x1c]
        mov ecx, 0x10
        rep movsd
        mov eax, dword ptr [mem_00A9F1F8]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_006404E0
        push eax
        lea ecx, [esp + 0x15c]
        call ext_00593AE0
        mov ecx, dword ptr [esp + 0x20]
        cmp ecx, dword ptr [ebx + 4]
        mov esi, eax
        jne L_063A
        call dword ptr [mem_00925134]
L_063A:
        mov edx, dword ptr [mem_00A9F838]
        push edx
        mov ecx, esi
        call ext_00640110
        mov ecx, ebp
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov ecx, esi
        mov edi, eax
        call ext_0063F8D0
        push edi
        lea ecx, [esp + 0x50]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4c]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x344], 5
        call ext_00640270
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x340], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x23c]
        mov dword ptr [esp + 0x340], 6
        call ext_0065F2A0
        lea ecx, [esp + 0x158]
        mov dword ptr [esp + 0x340], -1
        call ext_005877B0
        lea ecx, [esp + 0x1c]
        call ext_00486E30
        mov ebx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x24]
        mov ebp, dword ptr [esp + 0x348]
        mov eax, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x20]
        jmp L_05A0
L_06DF:
        lea ecx, [esp + 0x248]
        call ext_00593520
        mov ecx, dword ptr [mem_00B40640]
        push ecx
        lea ecx, [esp + 0x250]
        mov dword ptr [esp + 0x344], 7
        call ext_00593D00
        mov edi, eax
        add esi, 0x24
        mov ecx, 0x10
        rep movsd
        mov edx, dword ptr [mem_00A9ED98]
        push edx
        mov ecx, ebp
        call ext_006404E0
        push eax
        lea ecx, [esp + 0x24c]
        call ext_00593AE0
        lea ecx, [esp + 0x32c]
        mov dword ptr [esp + 0x340], 8
        call ext_0065F2A0
        lea ecx, [esp + 0x248]
        mov dword ptr [esp + 0x340], -1
        call ext_005877B0
        mov ecx, dword ptr [esp + 0x338]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x334
        ret 0x4
    }
}

// [0x005B0820] NMData::PoseData::vfunc_1 (1140 bytes)
extern "C" int mem_00A9F554;
extern "C" int mem_00A9F8D8;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00925134;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F200;
extern "C" int mem_00A9ED98;
extern "C" void ext_004275E0();
extern "C" void ext_00427A60();
extern "C" void ext_005877B0();
extern "C" void ext_00593520();
extern "C" void ext_00593710();
extern "C" void ext_00593910();
extern "C" void ext_005A2640();
extern "C" void ext_005B0780();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0065F2A0();

extern "C" __declspec(naked) void __fastcall fn_005B0820(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        mov eax, dword ptr fs:[0]
        push 0x8a30aa
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x324
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_005B0780
        mov eax, dword ptr [mem_00A9F554]
        mov esi, dword ptr [esp + 0x344]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [ebp + 0x64]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F8D8]
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_0898
        cmp eax, 0xb53b30
        je L_0898
        cmp eax, 0xb53ab0
        je L_0898
        cmp eax, 0xb53a70
        je L_0898
        cmp eax, 0xb53af0
        jne L_08A4
L_0898:
        mov dword ptr [ebp + 0x80], 0
        jmp L_08D2
L_08A4:
        mov eax, dword ptr [mem_00A9F8D8]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        sub esp, 0x1c
        mov ecx, esp
        mov dword ptr [esp + 0x44], esp
        push ecx
        mov ecx, eax
        call edx
        call ext_00593710
        add esp, 0x1c
        mov dword ptr [ebp + 0x80], eax
L_08D2:
        mov eax, dword ptr [mem_00A9F0C0]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_0906
        cmp eax, 0xb53b30
        je L_0906
        cmp eax, 0xb53ab0
        je L_0906
        cmp eax, 0xb53a70
        je L_0906
        cmp eax, 0xb53af0
        jne L_090B
L_0906:
        mov eax, 0xb53b30
L_090B:
        mov edi, dword ptr [eax + 0x28]
        cmp edi, dword ptr [eax + 0x2c]
        lea esi, [eax + 0x24]
        jbe L_091C
        call dword ptr [mem_00925134]
L_091C:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_093F
        call dword ptr [mem_00925134]
L_093F:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        call ext_00427A60
        mov ebx, 0x2
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_0960:
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_096E
        cmp edi, dword ptr [esp + 0x20]
        je L_0974
L_096E:
        call dword ptr [mem_00925134]
L_0974:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_0A50
        lea ecx, [esp + 0x64]
        call ext_00593520
        test edi, edi
        mov dword ptr [esp + 0x33c], 0x0
        jne L_09A0
        call dword ptr [mem_00925134]
L_09A0:
        cmp esi, dword ptr [edi + 0x8]
        jb L_09AB
        call dword ptr [mem_00925134]
L_09AB:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x68]
        call ext_00593910
        cmp esi, dword ptr [edi + 0x8]
        jb L_09C2
        call dword ptr [mem_00925134]
L_09C2:
        mov edx, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [esi]
        push edx
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, dword ptr [esp + 0x148]
        push ecx
        push eax
        lea ecx, [ebp + 0x4]
        mov byte ptr [esp + 0x344], 0x1
        call ext_005A2640
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x33c], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x148]
        mov dword ptr [esp + 0x33c], ebx
        call ext_0065F2A0
        lea ecx, [esp + 0x64]
        mov dword ptr [esp + 0x33c], 0xffffffff
        call ext_005877B0
        cmp esi, dword ptr [edi + 0x8]
        jb L_0A3B
        call dword ptr [mem_00925134]
L_0A3B:
        add esi, 0x4
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x18], esi
        call ext_00427A60
        jmp L_0960
L_0A50:
        mov edx, dword ptr [mem_00A9F200]
        mov ecx, dword ptr [esp + 0x344]
        push 0x1
        push 0x0
        push edx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_0A8A
        cmp eax, 0xb53b30
        je L_0A8A
        cmp eax, 0xb53ab0
        je L_0A8A
        cmp eax, 0xb53a70
        je L_0A8A
        cmp eax, 0xb53af0
        jne L_0A8F
L_0A8A:
        mov eax, 0xb53b30
L_0A8F:
        mov edi, dword ptr [eax + 0x28]
        cmp edi, dword ptr [eax + 0x2c]
        lea esi, [eax + 0x24]
        jbe L_0AA0
        call dword ptr [mem_00925134]
L_0AA0:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_0AC3
        call dword ptr [mem_00925134]
L_0AC3:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        call ext_00427A60
        mov ebx, 0x3
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_0AE0:
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        je L_0AEE
        cmp edi, dword ptr [esp + 0x20]
        je L_0AF4
L_0AEE:
        call dword ptr [mem_00925134]
L_0AF4:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [esp + 0x24]
        jae L_0BD7
        lea ecx, [esp + 0x154]
        call ext_00593520
        test edi, edi
        mov dword ptr [esp + 0x33c], ebx
        jne L_0B1F
        call dword ptr [mem_00925134]
L_0B1F:
        cmp esi, dword ptr [edi + 0x8]
        jb L_0B2A
        call dword ptr [mem_00925134]
L_0B2A:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x158]
        call ext_00593910
        cmp esi, dword ptr [edi + 0x8]
        jb L_0B44
        call dword ptr [mem_00925134]
L_0B44:
        mov eax, dword ptr [mem_00A9F838]
        mov ecx, dword ptr [esi]
        push eax
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x48]
        push ecx
        mov ecx, eax
        call edx
        mov ecx, dword ptr [esp + 0x238]
        push ecx
        push eax
        lea ecx, [ebp + 0x14]
        mov byte ptr [esp + 0x344], 0x4
        call ext_005A2640
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x33c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x238]
        mov dword ptr [esp + 0x33c], 0x5
        call ext_0065F2A0
        lea ecx, [esp + 0x154]
        mov dword ptr [esp + 0x33c], 0xffffffff
        call ext_005877B0
        cmp esi, dword ptr [edi + 0x8]
        jb L_0BC2
        call dword ptr [mem_00925134]
L_0BC2:
        add esi, 0x4
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x18], esi
        call ext_00427A60
        jmp L_0AE0
L_0BD7:
        lea ecx, [esp + 0x244]
        call ext_00593520
        mov edx, dword ptr [mem_00A9ED98]
        mov ecx, dword ptr [esp + 0x344]
        push 0x1
        push 0x0
        push edx
        mov dword ptr [esp + 0x348], 0x6
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_0C28
        cmp eax, 0xb53b30
        je L_0C28
        cmp eax, 0xb53ab0
        je L_0C28
        cmp eax, 0xb53a70
        je L_0C28
        cmp eax, 0xb53af0
        jne L_0C2D
L_0C28:
        mov eax, 0xb53b30
L_0C2D:
        push eax
        lea ecx, [esp + 0x248]
        call ext_00593910
        mov esi, dword ptr [esp + 0x328]
        lea edi, [ebp + 0x24]
        mov ecx, 0x10
        _emit 0xf3
        _emit 0xa5
        lea ecx, [esp + 0x328]
        mov dword ptr [esp + 0x33c], 0x7
        call ext_0065F2A0
        lea ecx, [esp + 0x244]
        mov dword ptr [esp + 0x33c], 0xffffffff
        call ext_005877B0
        mov ecx, dword ptr [esp + 0x334]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x330
        ret 0x4
    }
}
