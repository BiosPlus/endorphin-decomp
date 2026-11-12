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
