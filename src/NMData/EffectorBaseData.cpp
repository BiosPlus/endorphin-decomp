// Decompiled translation unit: src/NMData/EffectorBaseData.cpp

extern "C" int mem_00924EA8;

// [0x0060BB50] NMData::EffectorBaseData::vfunc_19 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060BB50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 4]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 0x20]
        pop esi
        jmp dword ptr [mem_00924EA8]
    }
}

extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F748;

// [0x0060BA80] NMData::EffectorBaseData::vfunc_13 (73 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060BA80(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4c]
        push edi
        call edx
        mov eax, dword ptr [mem_00A9F838]
        mov edi, dword ptr [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea ecx, [esi + 4]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F748]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_0063EFE0
        push eax
        add esi, 0x20
        push esi
        call ext_004275E0
        add esp, 8
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_00486CB0();
extern "C" int mem_0093F7BC;
extern "C" int mem_009722A8;

// [0x0060C530] NMData::EffectorBaseData::vfunc_21 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060C530(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x24]
        mov esi, ecx
        mov ecx, edi
        call edx
        push offset mem_0093F7BC
        push eax
        lea eax, [esi + 4]
        push eax
        lea ecx, [esp + 0x1c]
        call ext_00486CB0
        push offset mem_009722A8
        add edi, 0x20
        push edi
        add esi, 0x20
        push esi
        lea ecx, [esp + 0x1c]
        call ext_00486CB0
        pop edi
        pop esi
        ret 0xc
    }
}

extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;

// [0x0060BC20] NMData::EffectorBaseData::vfunc_20 (157 bytes)
// Stack args: (std::string* out [hidden return buffer], int a2). Builds
// std::string(literal0) + this->member(+4) + literal1 into `out`, with
// temporaries destroyed under an SEH frame. Returns `out` in eax.
extern "C" __declspec(naked) void __fastcall fn_0060BC20(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push -1
        push 0x8a86bc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x3c
        push esi
        mov esi, ecx
        push 0x97214c
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 0
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
        mov dword ptr fs:[0], ecx
        add esp, 0x48
        ret 0x8
    }
}
