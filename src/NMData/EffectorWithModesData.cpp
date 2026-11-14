// Decompiled translation unit: src/NMData/EffectorWithModesData.cpp

// [0x0060C3D0] NMData::EffectorWithModesData::vfunc_20 (157 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_0060C3D0(void* self, int edx_unused, void* sret, int a2) {
    __asm {
        push -0x1
        push 0x8a86bc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push esi
        mov esi, ecx
        push 0x972290
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        add esi, 0x4
        push esi
        push eax
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0x54], 0x1
        call dword ptr [mem_00924FD0]
        mov esi, dword ptr [esp + 0x5c]
        push 0x93bf0c
        push eax
        push esi
        mov byte ptr [esp + 0x60], 0x2
        call dword ptr [mem_00924ECC]
        add esp, 0x18
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8
    }
}

// [0x0060CF00] NMData::EffectorWithModesData::vfunc_22 (184 bytes)
// Same skeleton as 0x60CE80: forwards (a1, a2, a3) to 0x60C820, dynamic_cast<EffectorWithModesData&>(a1),
// compares int at +0x5c via 0x60C070, then the vec at +0x60 via 0x486CB0 and floats at +0x7c/+0x80 via 0x487A30.
extern "C" void ext_0060C820();
extern "C" void ext_0060C070();
extern "C" void ext_00486CB0();
extern "C" void ext_00487A30();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A94EF0;
extern "C" int mem_00A93790;
extern "C" int mem_00972380;
extern "C" int mem_009723BC;
extern "C" int mem_009723A0;
extern "C" int mem_00972390;
extern "C" __declspec(naked) void __fastcall fn_0060CF00(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0060C820
        push 1
        push offset mem_00A94EF0
        push offset mem_00A93790
        push 0
        push edi
        call ext_006A6E9E
        add esp, 0x14
        mov edi, eax
        mov edx, dword ptr [edi + 0x5c]
        mov eax, dword ptr [esi + 0x5c]
        push offset mem_00972380
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], edx
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x14], eax
        call ext_0060C070
        push offset mem_009723BC
        lea eax, [edi + 0x60]
        push eax
        lea ecx, [esi + 0x60]
        push ecx
        lea ecx, [esp + 0x20]
        call ext_00486CB0
        fld dword ptr [edi + 0x7c]
        push offset mem_009723A0
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x7c]
        fstp dword ptr [esp]
        call ext_00487A30
        fld dword ptr [edi + 0x80]
        push offset mem_00972390
        sub esp, 8
        fstp dword ptr [esp + 4]
        lea ecx, [esp + 0x20]
        fld dword ptr [esi + 0x80]
        fstp dword ptr [esp]
        call ext_00487A30
        pop edi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0060C9C0] NMData::EffectorWithModesData::vfunc_13 (328 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0046C0A0();
extern "C" void ext_0053F5F0();
extern "C" void ext_0060C640();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F0BC;
extern "C" int mem_00A9F408;
extern "C" int mem_00A9F40C;
extern "C" int mem_00A9F094;

extern "C" __declspec(naked) void __fastcall fn_0060C9C0(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        mov edi, ecx
        call ext_0060C640
        mov eax, dword ptr [mem_00A9F0BC]
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_60ca02
        cmp eax, 0xb53b30
        je loc_60ca02
        cmp eax, 0xb53ab0
        je loc_60ca02
        cmp eax, 0xb53a70
        je loc_60ca02
        cmp eax, 0xb53af0
        jne loc_60ca07
loc_60ca02:
        mov eax, 0xb53b30
loc_60ca07:
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [edi + 0x5c]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0053F5F0
        mov eax, dword ptr [mem_00A9F408]
        add esp, 0x8
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_60ca50
        cmp eax, 0xb53b30
        je loc_60ca50
        cmp eax, 0xb53ab0
        je loc_60ca50
        cmp eax, 0xb53a70
        je loc_60ca50
        cmp eax, 0xb53af0
        jne loc_60ca55
loc_60ca50:
        mov eax, 0xb53b30
loc_60ca55:
        push eax
        lea ecx, [edi + 0x60]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F40C]
        add esp, 0x8
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_60ca97
        cmp eax, 0xb53b30
        je loc_60ca97
        cmp eax, 0xb53ab0
        je loc_60ca97
        cmp eax, 0xb53a70
        je loc_60ca97
        cmp eax, 0xb53af0
        jne loc_60ca9c
loc_60ca97:
        mov eax, 0xb53b30
loc_60ca9c:
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [edi + 0x80]
        push ecx
        call ext_0046C0A0
        mov edx, dword ptr [mem_00A9F094]
        add esp, 0x8
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_60cae9
        cmp eax, 0xb53b30
        je loc_60cae9
        cmp eax, 0xb53ab0
        je loc_60cae9
        cmp eax, 0xb53a70
        je loc_60cae9
        cmp eax, 0xb53af0
        jne loc_60caee
loc_60cae9:
        mov eax, 0xb53b30
loc_60caee:
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0xc]
        push eax
        add edi, 0x7c
        push edi
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0060BF80] NMData::EffectorWithModesData::vfunc_14 (190 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0060BCF0();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_00640AA0();
extern "C" void ext_00640BC0();
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F0BC;
extern "C" int mem_00A9F408;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F40C;
extern "C" int mem_00A9F094;
extern "C" __declspec(naked) void* __fastcall fn_0060BF80(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0060BCF0
        mov edi, eax
        mov eax, dword ptr [mem_00A9FA6C]
        push eax
        mov ecx, edi
        call ext_00640110
        push 0x9719cc
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F0BC]
        push 0x0
        push ecx
        mov ecx, edi
        call ext_00640390
        mov edx, dword ptr [esi + 0x5c]
        push edx
        push eax
        call ext_00640AA0
        mov eax, dword ptr [mem_00A9F408]
        add esp, 0x8
        push 0x0
        push eax
        mov ecx, edi
        call ext_00640390
        lea ecx, [esi + 0x60]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F40C]
        push 0x0
        push ecx
        mov ecx, edi
        call ext_00640390
        fld dword ptr [esi + 0x80]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F094]
        add esp, 0x8
        push 0x0
        push edx
        mov ecx, edi
        call ext_00640390
        fld dword ptr [esi + 0x7c]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x4
    }
}
