// Decompiled translation unit: src/NMData/EffectorSkeletalData.cpp

extern "C" void ext_0060BB50();
extern "C" void ext_0063D8F0();

// [0x00626D00] NMData::EffectorSkeletalData::vfunc_19 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_00626D00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0060BB50
        lea ecx, [esi + 0x44]
        pop esi
        jmp ext_0063D8F0
    }
}

// [0x00626820] NMData::EffectorSkeletalData::vfunc_8 (34 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0x4).
// Constructs the std::string in the hidden buffer from the literal "EffectorSkeletal".
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_00626820(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x97778c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00626850] NMData::EffectorSkeletalData::vfunc_20 (157 bytes)
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_00626850(void* self, int edx_unused, void* sret, int a2) {
    __asm {
        push -0x1
        push 0x8a86bc
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push esi
        mov esi, ecx
        push 0x9777a0
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

// [0x00626900] NMData::EffectorSkeletalData::vfunc_17 (253 bytes)
extern "C" void ext_00622290();
extern "C" void ext_006A5C62();
extern "C" int mem_0093E990;
extern "C" int mem_009777B8;

extern "C" __declspec(naked) void __fastcall fn_00626900(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x2c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x10], esi
        je skip_ctor
        mov ecx, eax
        call ext_00622290
        mov esi, eax
    skip_ctor:
        mov eax, dword ptr [esi]
        fld dword ptr [mem_0093E990]
        mov edx, dword ptr [eax + 0x44]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x14], 0xffffffff
        call edx
        fld dword ptr [mem_0093E990]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x60]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_0093E990]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x40]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_0093E990]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x50]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_0093E990]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x58]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009777B8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x48]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_0093E990]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x54]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_0093E990]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009777B8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4c]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00626A00] NMData::EffectorSkeletalData::vfunc_18 (253 bytes)
extern "C" int mem_009518E0;

extern "C" __declspec(naked) void __fastcall fn_00626A00(void* self) {
    __asm {
        push -1
        push 0x008A7A5B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x2c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x10], esi
        je skip_ctor
        mov ecx, eax
        call ext_00622290
        mov esi, eax
    skip_ctor:
        mov eax, dword ptr [esi]
        fld dword ptr [mem_009518E0]
        mov edx, dword ptr [eax + 0x44]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x14], 0xffffffff
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x60]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x40]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x50]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x58]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x48]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x54]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [mem_009518E0]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4c]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00626D20] NMData::EffectorSkeletalData::vfunc_12 (313 bytes)
extern "C" void ext_006267B0();
extern "C" void ext_006A5C62();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __fastcall fn_00626D20(void* self) {
    __asm {
        push -0x1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        push 0xa8
        mov edi, ecx
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x14], esi
        je loc_626d5e
        mov ecx, eax
        call ext_006267B0
        mov esi, eax
    loc_626d5e:
        lea eax, [edi + 0x4]
        push eax
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x18], 0xffffffff
        call dword ptr [mem_00924FDC]
        lea ecx, [edi + 0x20]
        push ecx
        lea ecx, [esi + 0x20]
        call dword ptr [mem_00924FDC]
        fld dword ptr [edi + 0x50]
        fstp dword ptr [esi + 0x50]
        fld dword ptr [edi + 0x54]
        fstp dword ptr [esi + 0x54]
        fld dword ptr [edi + 0x58]
        fstp dword ptr [esi + 0x58]
        fld dword ptr [edi + 0x44]
        fstp dword ptr [esi + 0x44]
        fld dword ptr [edi + 0x48]
        fstp dword ptr [esi + 0x48]
        fld dword ptr [edi + 0x4c]
        fstp dword ptr [esi + 0x4c]
        fld dword ptr [edi + 0x5c]
        fstp dword ptr [esi + 0x5c]
        fld dword ptr [edi + 0x60]
        fstp dword ptr [esi + 0x60]
        fld dword ptr [edi + 0x64]
        fstp dword ptr [esi + 0x64]
        fld dword ptr [edi + 0x68]
        fstp dword ptr [esi + 0x68]
        fld dword ptr [edi + 0x6c]
        fstp dword ptr [esi + 0x6c]
        fld dword ptr [edi + 0x70]
        fstp dword ptr [esi + 0x70]
        mov dl, byte ptr [edi + 0x7c]
        mov byte ptr [esi + 0x7c], dl
        mov eax, dword ptr [edi + 0x74]
        mov dword ptr [esi + 0x74], eax
        mov ecx, dword ptr [edi + 0x78]
        mov dword ptr [esi + 0x78], ecx
        fld dword ptr [edi + 0x80]
        fstp dword ptr [esi + 0x80]
        mov ecx, dword ptr [esp + 0xc]
        fld dword ptr [edi + 0x84]
        mov eax, esi
        fstp dword ptr [esi + 0x84]
        fld dword ptr [edi + 0x88]
        fstp dword ptr [esi + 0x88]
        fld dword ptr [edi + 0x8c]
        fstp dword ptr [esi + 0x8c]
        fld dword ptr [edi + 0x90]
        fstp dword ptr [esi + 0x90]
        fld dword ptr [edi + 0x94]
        fstp dword ptr [esi + 0x94]
        fld dword ptr [edi + 0x98]
        fstp dword ptr [esi + 0x98]
        fld dword ptr [edi + 0x9c]
        fstp dword ptr [esi + 0x9c]
        fld dword ptr [edi + 0xa0]
        pop edi
        fstp dword ptr [esi + 0xa0]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00626EB0] NMData::EffectorSkeletalData::vfunc_13 (597 bytes)
// __thiscall with one stack arg (ret 0x4); SEH frame + std::string temporary.
extern "C" void ext_0060BA80();
extern "C" void ext_0063D8F0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EE80();
extern "C" void ext_0063EFE0();
extern "C" void ext_004275E0();
extern "C" void ext_00626770();
extern "C" void ext_00427640();
extern "C" int mem_00A9ED74;
extern "C" int mem_00A9F780;
extern "C" int mem_00A9F4AC;
extern "C" int mem_00A9F770;
extern "C" int mem_00A9F4A4;
extern "C" int mem_00A9F9FC;
extern "C" int mem_00A9F504;
extern "C" int mem_00A9FA5C;
extern "C" int mem_00A9F520;
extern "C" int mem_00A9F9EC;
extern "C" int mem_00A9F4F8;
extern "C" int mem_00A9FA44;
extern "C" int mem_00A9F510;
extern "C" int mem_00A9F77C;
extern "C" int mem_00A9F4A8;
extern "C" int mem_00A9F9F4;
extern "C" int mem_00A9F4FC;
extern "C" int mem_00A9FA4C;
extern "C" int mem_00A9F514;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9F774;
extern "C" int mem_00A9F458;
extern "C" int mem_00A9F43C;
extern "C" __declspec(naked) void __fastcall fn_00626EB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [esp + 0x30]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_0060BA80
        lea ecx, [esi + 0x44]
        call ext_0063D8F0
        mov eax, dword ptr [mem_00A9ED74]
        push 0x1
        push 0x0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_13
        cmp eax, 0xb53b30
        je L_13
        cmp eax, 0xb53ab0
        je L_13
        cmp eax, 0xb53a70
        je L_13
        cmp eax, 0xb53af0
        jne L_1A
L_13:
        mov edi, 0xb53b30
        jmp L_1C
L_1A:
        mov edi, eax
L_1C:
        cmp edi, 0xb53a34
        je L_58
        cmp edi, 0xb53b30
        je L_58
        cmp edi, 0xb53ab0
        je L_58
        cmp edi, 0xb53a70
        je L_58
        cmp edi, 0xb53af0
        je L_58
        mov ecx, dword ptr [mem_00A9F780]
        mov edx, dword ptr [mem_00A9F4AC]
        push ecx
        push edx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x80]
        mov eax, dword ptr [mem_00A9F770]
        mov ecx, dword ptr [mem_00A9F4A4]
        push eax
        push ecx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x84]
        mov edx, dword ptr [mem_00A9F9FC]
        mov eax, dword ptr [mem_00A9F504]
        push edx
        push eax
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x88]
        mov ecx, dword ptr [mem_00A9FA5C]
        mov edx, dword ptr [mem_00A9F520]
        push ecx
        push edx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x8c]
        mov eax, dword ptr [mem_00A9F9EC]
        mov ecx, dword ptr [mem_00A9F4F8]
        push eax
        push ecx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x90]
        mov edx, dword ptr [mem_00A9FA44]
        mov eax, dword ptr [mem_00A9F510]
        push edx
        push eax
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x94]
        mov ecx, dword ptr [mem_00A9F77C]
        mov edx, dword ptr [mem_00A9F4A8]
        add esp, 0x48
        push ecx
        push edx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0xa0]
        mov eax, dword ptr [mem_00A9F9F4]
        mov ecx, dword ptr [mem_00A9F4FC]
        push eax
        push ecx
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x98]
        mov edx, dword ptr [mem_00A9FA4C]
        mov eax, dword ptr [mem_00A9F514]
        push edx
        push eax
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0x9c]
        push 0x977068
        push 0x97705c
        push edi
        call ext_0067EE80
        fstp dword ptr [esi + 0xa4]
        add esp, 0x30
L_58:
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [mem_00A9F774]
        push ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x34], 0x0
        call ext_0063EFE0
        push eax
        lea edx, [esp + 0x10]
        push edx
        call ext_004275E0
        lea eax, [esp + 0x14]
        push eax
        call ext_00626770
        mov dword ptr [esi + 0x74], eax
        mov ecx, dword ptr [mem_00A9F458]
        add esp, 0xc
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        push eax
        lea edx, [esp + 0x10]
        push edx
        call ext_004275E0
        lea eax, [esp + 0x14]
        push eax
        call ext_00626770
        mov dword ptr [esi + 0x78], eax
        mov ecx, dword ptr [mem_00A9F43C]
        add esp, 0xc
        push ecx
        mov ecx, ebx
        call ext_0063EFE0
        lea edx, [esp + 0x38]
        push edx
        add esi, 0x7c
        push esi
        mov dword ptr [esp + 0x40], eax
        call ext_00427640
        add esp, 0x8
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00626B00] NMData::EffectorSkeletalData::vfunc_14 (501 bytes)
extern "C" void ext_00427550();
extern "C" void ext_0060BAD0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00640A80();
extern "C" void ext_0067EF60();
extern "C" int mem_00A9EE64;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F43C;
extern "C" int mem_00A9F774;
extern "C" int mem_00A9F458;
extern "C" int mem_00A9ED74;
extern "C" int mem_00A9F4AC;
extern "C" int mem_00A9F780;
extern "C" int mem_00A9F770;
extern "C" int mem_00A9F9FC;
extern "C" int mem_00A9FA5C;
extern "C" int mem_00A9F9EC;
extern "C" int mem_00A9FA44;
extern "C" int mem_00A9F77C;
extern "C" int mem_00A9F4A8;
extern "C" int mem_00A9F9F4;
extern "C" int mem_00A9F4FC;
extern "C" int mem_00A9FA4C;
extern "C" int mem_00A9F514;

extern "C" __declspec(naked) void __fastcall fn_00626B00(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9EE64]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        call ext_006404E0
        mov ebx, eax
        push ebx
        mov ecx, esi
        call ext_0060BAD0
        mov ecx, dword ptr [mem_00A9FA6C]
        push ecx
        mov ecx, ebx
        call ext_00640110
        push 0x9719e4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        call ext_00427550
        mov edx, dword ptr [mem_00A9F43C]
        push edx
        mov ecx, ebx
        call ext_00640110
        movzx ecx, byte ptr [esi + 0x7c]
        push ecx
        push eax
        call ext_00640A80
        mov edx, dword ptr [mem_00A9F774]
        add esp, 0x8
        push edx
        mov ecx, ebx
        call ext_00640110
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esi + 0x74]
        mov ecx, dword ptr [eax * 4 + 0xa97f70]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov edx, dword ptr [mem_00A9F458]
        push edx
        mov ecx, ebx
        call ext_00640110
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esi + 0x78]
        mov ecx, dword ptr [eax * 4 + 0xa97f70]
        push ecx
        lea ecx, [esp + 0x14]
        call ext_00427550
        mov edx, dword ptr [mem_00A9ED74]
        push edx
        mov ecx, ebx
        call ext_006404E0
        fld dword ptr [esi + 0x80]
        mov ecx, dword ptr [mem_00A9F4AC]
        mov edi, eax
        mov eax, dword ptr [mem_00A9F780]
        push eax
        push ecx
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x84]
        mov edx, dword ptr [mem_00A9F770]
        add esp, 0x10
        push edx
        push 0x972cd0
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x88]
        mov eax, dword ptr [mem_00A9F9FC]
        add esp, 0x10
        push eax
        push 0x972d14
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        mov ecx, dword ptr [mem_00A9FA5C]
        fld dword ptr [esi + 0x8c]
        add esp, 0x10
        push ecx
        push 0x972d24
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x90]
        mov edx, dword ptr [mem_00A9F9EC]
        add esp, 0x10
        push edx
        push 0x972ce0
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x94]
        mov eax, dword ptr [mem_00A9FA44]
        add esp, 0x10
        push eax
        push 0x972cf0
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0xa0]
        mov ecx, dword ptr [mem_00A9F77C]
        mov edx, dword ptr [mem_00A9F4A8]
        add esp, 0x10
        push ecx
        push edx
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x98]
        mov eax, dword ptr [mem_00A9F9F4]
        mov ecx, dword ptr [mem_00A9F4FC]
        add esp, 0x10
        push eax
        push ecx
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x9c]
        mov edx, dword ptr [mem_00A9FA4C]
        mov eax, dword ptr [mem_00A9F514]
        add esp, 0x10
        push edx
        push eax
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        fld dword ptr [esi + 0x9c]
        add esp, 0x10
        push 0x977068
        push 0x97705c
        push ecx
        fstp dword ptr [esp]
        push edi
        call ext_0067EF60
        add esp, 0x10
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x4
    }
}

extern "C" void ext_006301E0();
extern "C" void ext_005A0FF0();

// [0x00627110] NMData::EffectorSkeletalData::vfunc_15 (140 bytes)
extern "C" __declspec(naked) void __fastcall fn_00627110(void* self) {
    __asm {
        push -1
        push 0x8a4a23
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x180
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x14], esi
        je skip_ctor
        mov ecx, eax
        call ext_006301E0
        mov esi, eax
    skip_ctor:
        mov dword ptr [esp + 8], esi
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [edi + 0x20]
        push eax
        mov dword ptr [esp + 0x18], 1
        call ext_005A0FF0
        mov eax, dword ptr [eax + 0x234]
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [edi + 0x3c], eax
        mov dword ptr [esi + 8], eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        push edi
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [edi + 0x40], esi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}
