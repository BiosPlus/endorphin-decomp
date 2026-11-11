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
