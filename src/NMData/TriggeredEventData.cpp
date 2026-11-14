// Decompiled translation unit: src/NMData/TriggeredEventData.cpp

// [0x004BFBA0] NMData::TriggeredEventData::vfunc_1_off_154 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFBA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esi + 0x18]
        push edx
        call eax
        mov edx, dword ptr [esi - 0x154]
        mov eax, dword ptr [edx + 0x16c]
        lea ecx, [esi - 0x154]
        call eax
        pop esi
        ret 0x4
    }
}

extern "C" void ext_00427550();
extern "C" void ext_0058F650();
extern "C" void ext_0063F8D0();
extern "C" void ext_00640110();
extern "C" void ext_00640270();
extern "C" void ext_006404E0();
extern "C" void ext_00640A50();
extern "C" void ext_00640A80();
extern "C" int mem_00A9F9B8;
extern "C" int mem_00A9F610;
extern "C" int mem_00A9F604;
extern "C" int mem_00A9F554;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F144;
extern "C" int mem_00925134;
extern "C" int mem_00A9F140;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

// [0x004C1DE0] NMData::TriggeredEventData::vfunc_22 (432 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C1DE0(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        mov eax, dword ptr fs:[0x0]
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x38]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call ext_0058F650
        mov eax, dword ptr [mem_00A9F9B8]
        push eax
        mov ecx, ebp
        call ext_00640110
        mov ecx, dword ptr [esi + 0x15c]
        push ecx
        push eax
        call ext_00640A50
        mov edx, dword ptr [mem_00A9F610]
        add esp, 0x8
        push edx
        mov ecx, ebp
        call ext_00640110
        mov ecx, dword ptr [esi + 0x160]
        push ecx
        push eax
        call ext_00640A50
        add esp, 0x8
        push 0x944dfc
        mov ecx, ebp
        call ext_00640110
        mov edx, dword ptr [esi + 0x164]
        push edx
        push eax
        call ext_00640A50
        mov eax, dword ptr [mem_00A9F604]
        add esp, 0x8
        push eax
        mov ecx, ebp
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x17c]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
        cmp dword ptr [esi + 0x168], 0x0
        je loc_4c1ebc
        mov edx, dword ptr [mem_00A9F554]
        push edx
        mov ecx, ebp
        call ext_00640110
        mov edi, eax
        mov eax, dword ptr [esi + 0x168]
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        mov ecx, eax
        mov dword ptr [esp + 0x10], edi
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
loc_4c1ebc:
        mov eax, dword ptr [mem_00A9F144]
        push eax
        mov ecx, ebp
        call ext_006404E0
        mov ebx, dword ptr [esi + 0x170]
        cmp ebx, dword ptr [esi + 0x174]
        lea edi, [esi + 0x16c]
        mov dword ptr [esp + 0x10], eax
        jbe loc_4c1ee7
        call dword ptr [mem_00925134]
loc_4c1ee7:
        mov esi, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], esi
        jbe loc_4c1ef5
        call dword ptr [mem_00925134]
loc_4c1ef5:
        cmp edi, edi
        je loc_4c1eff
        call dword ptr [mem_00925134]
loc_4c1eff:
        cmp ebx, esi
        je loc_4c1f79
        cmp ebx, dword ptr [edi + 0x8]
        jb loc_4c1f0e
        call dword ptr [mem_00925134]
loc_4c1f0e:
        mov ecx, dword ptr [mem_00A9F140]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        call ext_006404E0
        mov ecx, ebx
        mov esi, eax
        call dword ptr [mem_00924FF0]
        mov ecx, esi
        mov ebp, eax
        call ext_0063F8D0
        push ebp
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE4]
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x3c], 0x0
        call ext_00640270
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x38], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp ebx, dword ptr [edi + 0x8]
        jb loc_4c1f6d
        call dword ptr [mem_00925134]
loc_4c1f6d:
        mov ebp, dword ptr [esp + 0x40]
        add ebx, 0x1c
        jmp loc_4c1ee7
loc_4c1f79:
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0047A4A0();
extern "C" void ext_0047A880();
extern "C" void ext_0049F540();
extern "C" void ext_0053F5F0();
extern "C" void ext_0058F630();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F9B8;
extern "C" int mem_00A9F610;
extern "C" int mem_00AE29D0;
extern "C" int mem_00A9F604;
extern "C" int mem_00A9F144;
extern "C" int mem_00A9F140;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9F554;
extern "C" int mem_00924FEC;
extern "C" int mem_009849B0;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x004C24C0] NMData::TriggeredEventData::vfunc_21 (666 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C24C0(void* self) {
    __asm {
        push -0x1
        push 0x8848f2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        push edi
        mov edi, dword ptr [esp + 0x50]
        push edi
        mov esi, ecx
        call ext_0058F630
        mov eax, dword ptr [mem_00A9F9B8]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x50]
        push ecx
        lea edx, [esi + 0x15c]
        push edx
        mov dword ptr [esp + 0x58], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F610]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x50]
        push ecx
        lea edx, [esi + 0x160]
        push edx
        mov dword ptr [esp + 0x58], eax
        call ext_0053F5F0
        add esp, 0x8
        push 0x944dfc
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je loc_4c2585
        cmp eax, 0xb53b30
        je loc_4c2585
        cmp eax, 0xb53ab0
        je loc_4c2585
        cmp eax, 0xb53a70
        je loc_4c2585
        cmp eax, 0xb53af0
        je loc_4c2585
        push 0x944dfc
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0x50], eax
        lea eax, [esp + 0x50]
        push eax
        lea ecx, [esi + 0x164]
        push ecx
        call ext_0053F5F0
        add esp, 0x8
        jmp loc_4c25a3
    loc_4c2585:
        mov eax, dword ptr [mem_00AE29D0]
        test eax, eax
        je loc_4c25a3
        cmp dword ptr [eax + 0x538], 0xa
        jge loc_4c25a3
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x174]
        mov ecx, esi
        call eax
    loc_4c25a3:
        mov ecx, dword ptr [mem_00A9F604]
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je loc_4c25fa
        cmp eax, 0xb53b30
        je loc_4c25fa
        cmp eax, 0xb53ab0
        je loc_4c25fa
        cmp eax, 0xb53a70
        je loc_4c25fa
        cmp eax, 0xb53af0
        je loc_4c25fa
        mov edx, dword ptr [mem_00A9F604]
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov dword ptr [esp + 0x50], eax
        lea eax, [esp + 0x50]
        push eax
        lea ecx, [esi + 0x17c]
        push ecx
        call ext_00427640
        add esp, 0x8
    loc_4c25fa:
        mov edx, dword ptr [mem_00A9F144]
        push 0x1
        push 0x0
        push edx
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_4c262f
        cmp eax, 0xb53b30
        je loc_4c262f
        cmp eax, 0xb53ab0
        je loc_4c262f
        cmp eax, 0xb53a70
        je loc_4c262f
        cmp eax, 0xb53af0
        jne loc_4c2634
    loc_4c262f:
        mov eax, 0xb53b30
    loc_4c2634:
        mov ecx, dword ptr [mem_00A9F140]
        push 0x0
        push ecx
        lea edx, [esi + 0x16c]
        push edx
        push eax
        call ext_0049F540
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x16c]
        add esp, 0x10
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9F554]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x4c], 0x0
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call ext_004275E0
        add esp, 0x8
        cmp dword ptr [mem_00AE29D0], 0x0
        je loc_4c2735
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FEC]
        test al, al
        mov ecx, dword ptr [mem_00AE29D0]
        jne loc_4c26b3
        lea edx, [esp + 0x8]
        push edx
        call ext_0047A4A0
        jmp loc_4c26b9
    loc_4c26b3:
        push esi
        call ext_0047A880
    loc_4c26b9:
        mov dword ptr [esi + 0x168], eax
        mov eax, dword ptr [mem_00AE29D0]
        test eax, eax
        je loc_4c2735
        mov eax, dword ptr [eax + 0x538]
        cmp eax, dword ptr [mem_009849B0]
        jge loc_4c2735
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xf8]
        mov ecx, esi
        call edx
        cmp eax, 0x2
        je loc_4c2735
        cmp eax, 0x8
        je loc_4c2735
        cmp eax, 0x7
        je loc_4c2735
        lea ecx, [8*eax]
        sub ecx, eax
        add esi, 0x14
        push esi
        lea edx, [4*ecx + 0xae2c28]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        call dword ptr [mem_00924FD0]
        add esp, 0xc
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x4c], 0x1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
    loc_4c2735:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}
