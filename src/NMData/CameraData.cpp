// Decompiled translation unit: src/NMData/CameraData.cpp

// [0x005D1000] NMData::CameraData::vfunc_8_off_C (19 bytes)
extern "C" void ext_005CFE10();

struct CameraTailTarget {
    void tail(int a1);
};
typedef void (CameraTailTarget::*CameraTailFn)(int);

extern "C" void __fastcall fn_005D1000(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x5c) = (unsigned char)a1;
    CameraTailTarget* next = (CameraTailTarget*)(p - 0xc);
    CameraTailFn f;
    *(void**)&f = (void*)ext_005CFE10;
    (next->*f)(a1);
}

// [0x005D06E0] NMData::CameraData::vfunc_57 (44 bytes)
extern "C" void ext_0058A3C0();
extern "C" void ext_005CFD60();

extern "C" __declspec(naked) void* __fastcall fn_005D06E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_005CFD60
        cmp eax, 0x3
        je L_vfunc57
        pop edi
        lea eax, [esi + 8*eax + 0x264]
        pop esi
        ret 0x4
    L_vfunc57:
        push edi
        mov ecx, esi
        call ext_0058A3C0
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005D13B0] NMData::CameraData::vfunc_7_off_C (115 bytes)
extern "C" void ext_005B11D0();
extern "C" int mem_00B3F200;

extern "C" __declspec(naked) void __fastcall fn_005D13B0(void* self) {
    __asm {
        push -1
        push 0x008A5248
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov byte ptr [mem_00B3F200], 0x1
        mov ecx, dword ptr [esi + 0x25c]
        mov edx, dword ptr [ecx]
        lea eax, [esi + 0x258]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x18], 0x0
        call eax
        fstp dword ptr [esp + 0x8]
        push 0x0
        lea ecx, [esi + 0x204]
        call ext_005B11D0
        fld dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        fstp dword ptr [eax]
        mov byte ptr [esi + 0x208], 0x1
        mov byte ptr [mem_00B3F200], 0x0
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x005CFC20] NMData::CameraData::vfunc_14 (85 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_005CFC20(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x1b9
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_match
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_match:
        cmp byte ptr [ecx + 0x1f0], 0x0
        je L_zero
        add ecx, 0x1a8
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_zero:
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005DCB00] NMData::CameraData::vfunc_14_off_8 (179 bytes)
extern "C" void ext_005DC4D0();
extern "C" void ext_0041CF50();
extern "C" void ext_005DC4F0();
extern "C" void ext_0058F030();

extern "C" __declspec(naked) void __fastcall fn_005DCB00(void* self) {
    __asm {
        push -1
        push 0x008B6C40
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push esi
        push edi
        mov esi, ecx
        lea edi, [esi - 0x8]
        lea eax, [esp + 0x8]
        push edi
        push eax
        call ext_005DC4D0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x264]
        mov dword ptr [esp + 0x24], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        mov dword ptr [esp + 0x20], 0xffffffff
        je L_skip1
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x8]
        push eax
        call edx
    L_skip1:
        lea eax, [esp + 0x10]
        push edi
        push eax
        call ext_005DC4F0
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x25c]
        mov dword ptr [esp + 0x24], 0x1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x20], 0xffffffff
        je L_skip2
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
    L_skip2:
        mov ecx, esi
        call ext_0058F030
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret
    }
}

// [0x005CFE70] NMData::CameraData::vfunc_2 (78 bytes)
extern "C" void ext_005CFD60();
extern "C" void ext_006721F0();
extern "C" void ext_0058A370();

extern "C" __declspec(naked) void* __fastcall fn_005CFE70(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], 0x0
        call ext_005CFD60
        cmp eax, 0x3
        je L_fallback
        lea eax, [esi + eax*8 + 0x264]
        mov esi, dword ptr [esp + 0x10]
        push eax
        push esi
        call ext_006721F0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_fallback:
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        mov ecx, esi
        call ext_0058A370
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x005DDA40] NMData::CameraData::vfunc_23 (154 bytes)
extern "C" void ext_005CFC80();
extern "C" void ext_005DD020();
extern "C" void ext_005DD090();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005DDA40(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, ecx
        xor bl, bl
        cmp dword ptr [esi + 0x154], 0
        je label1
        mov bl, 1
        call ext_005CFC80
    label1:
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0
        call ext_005DD020
        lea edx, [esp + 0x8]
        push edx
        lea ecx, [esi + 0x14]
        call dword ptr [mem_00924FDC]
        mov eax, dword ptr [esi + 0x158]
        test eax, eax
        je label2
        test bl, bl
        je label2
        push eax
        mov ecx, esi
        call ext_005DD090
    label2:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

extern "C" void ext_00480920();
extern "C" void ext_00493E00();
extern "C" void ext_00493E40();
extern "C" void ext_00493E50();
extern "C" void ext_00493E70();
extern "C" void ext_00528B90();
extern "C" void ext_00528BB0();
extern "C" void ext_00548190();
extern "C" void ext_005CFE10();
extern "C" void ext_005DD090();
extern "C" int mem_00B40640;

// [0x005DD190] NMData::CameraData::vfunc_34 (315 bytes)
extern "C" __declspec(naked) void __fastcall fn_005DD190(void* self) {
    __asm {
        push -0x1
        push 0x8a5780
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x20]
        push edi
        call ext_00493E00
        push eax
        mov ecx, esi
        call ext_005DD090
        xor eax, eax
        mov dword ptr [esp + 0x10], eax
        lea ebx, [esi + 0x4]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x1c]
        mov ecx, ebx
        call edx
        test al, al
        lea edi, [esi + 0xc]
        push 0x0
        lea ebp, [esi + 0x15c]
        push edi
        je L_005dd1f6
        mov eax, dword ptr [esi + 0xe8]
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        push ebp
        call ext_00493E50
        jmp L_005dd210
    L_005dd1f6:
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [mem_00B40640]
        mov edx, dword ptr [edx + 0xc]
        push eax
        mov ecx, ebx
        call edx
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        push ebp
        call ext_00493E40
    L_005dd210:
        mov ebx, eax
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [ebx + 0x20], ebp
        call ext_00528B90
        push 0x1
        push 0x100
        mov ecx, edi
        call ext_00528BB0
        push 0x1
        push 0x40000
        mov ecx, edi
        call ext_00528BB0
        mov edi, dword ptr [esp + 0x24]
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        call ext_00493E70
        mov ebx, eax
        mov dword ptr [esp + 0x24], ebx
        mov ecx, dword ptr [esi + 0x154]
        test ecx, ecx
        mov byte ptr [esp + 0x1c], 0x1
        je L_005dd26c
        push esi
        call ext_00548190
    L_005dd26c:
        push 0x0
        push 0x0
        lea ebp, [esi + 0x210]
        call ext_00480920
        push eax
        push ebp
        mov ecx, edi
        call ext_00493E40
        mov edi, eax
        mov dword ptr [edi + 0x20], ebp
        movzx eax, byte ptr [esi + 0x1f2]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x2c4], edi
        call ext_005CFE10
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0xc]
        push edi
        mov ecx, ebx
        mov dword ptr [esp + 0x14], 0x0
        call eax
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005DCFB0] NMData::CameraData::vfunc_17_off_C (99 bytes)
extern "C" void ext_005DCDA0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005DCFB0(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 2c8h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_005DCFB0_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_005DCDA0
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_005DCFB0_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x005D0D30] NMData::CameraData::vfunc_22 (706 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0058F650();
extern "C" void ext_005B11E0();
extern "C" void ext_005CFCC0();
extern "C" void ext_005CFE50();
extern "C" void ext_005D0980();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9ED7C;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F808;
extern "C" int mem_00A9F45C;
extern "C" int mem_00A9F460;
extern "C" int mem_00A9F9A8;
extern "C" int mem_00A9F870;
extern "C" int mem_00A9F668;
extern "C" int mem_00A9F550;
extern "C" int mem_00A9F698;
extern "C" int mem_00A9F47C;
extern "C" int mem_00A9F648;
extern "C" int mem_00A9FACC;
extern "C" int mem_00A9F66C;
extern "C" int mem_00A9F634;
extern "C" int mem_00A9F97C;

extern "C" __declspec(naked) void* __fastcall fn_005D0D30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9ED7C]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        call ext_006404E0
        mov esi, eax
        push esi
        mov ecx, edi
        call ext_0058F650
        mov ecx, dword ptr [mem_00A9FA6C]
        push ecx
        mov ecx, esi
        call ext_00640110
        mov edx, eax
        mov eax, dword ptr [edi + 0x260]
        push eax
        mov ecx, edi
        call ext_005CFCC0
        mov ecx, eax
        mov dword ptr [esp + 0x14], edx
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x18]
        call ext_00427550
        mov eax, dword ptr [edi + 0x25c]
        mov ecx, dword ptr [mem_00A9F808]
        lea ebx, [eax*8]
        sub ebx, eax
        push ecx
        mov ecx, esi
        lea ebx, [ebx*4 + 0xb45890]
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x18]
        call ext_00427550
        mov edx, dword ptr [mem_00A9F45C]
        push edx
        mov ecx, esi
        call ext_00640110
        lea ebx, [edi + 0x210]
        push 0x1
        mov ecx, ebx
        mov ebp, eax
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebp
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F460]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_00640110
        push 0x2
        mov ecx, ebx
        mov ebp, eax
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebp
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F9A8]
        add esp, 0x8
        push ecx
        mov ecx, esi
        call ext_00640110
        push 0x5
        mov ecx, ebx
        mov ebp, eax
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebp
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F870]
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x204]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F668]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_00640110
        push 0x0
        mov ecx, ebx
        mov ebp, eax
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebp
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F550]
        add esp, 0x8
        push ecx
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x1f4]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F698]
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_00640110
        push 0x3
        mov ecx, ebx
        mov ebp, eax
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebp
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F47C]
        add esp, 0x8
        push eax
        mov ecx, esi
        call ext_00640110
        push 0x4
        mov ecx, ebx
        mov ebp, eax
        call ext_005B11E0
        push ecx
        fstp dword ptr [esp]
        push ebp
        call ext_00640BC0
        mov eax, dword ptr [edi + 0x208]
        mov ecx, dword ptr [mem_00A9F648]
        add esp, 0x8
        lea ebx, [eax*8]
        sub ebx, eax
        push ecx
        mov ecx, esi
        lea ebx, [ebx*4 + 0xb45938]
        call ext_00640110
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x18]
        call ext_00427550
        mov edx, dword ptr [mem_00A9FACC]
        push edx
        mov ecx, esi
        call ext_00640110
        movzx ecx, byte ptr [edi + 0x1f0]
        push ecx
        push eax
        call ext_00640A80
        add esp, 0x8
        push 0x965d30
        mov ecx, esi
        call ext_00640110
        movzx edx, byte ptr [edi + 0x1f1]
        push edx
        push eax
        call ext_00640A80
        add esp, 0x8
        push 0x965d20
        mov ecx, esi
        call ext_00640110
        mov ecx, edi
        mov ebx, eax
        call ext_005CFE50
        push eax
        push ebx
        call ext_00640A80
        add esp, 0x8
        push esi
        lea ecx, [edi + 0x1a8]
        call ext_005D0980
        mov eax, dword ptr [mem_00A9F66C]
        push eax
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x1fc]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F634]
        add esp, 0x8
        push ecx
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x1f8]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F97C]
        add esp, 0x8
        push edx
        mov ecx, esi
        call ext_00640110
        fld dword ptr [edi + 0x200]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}
