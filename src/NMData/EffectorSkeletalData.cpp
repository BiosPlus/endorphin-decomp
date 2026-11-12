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
