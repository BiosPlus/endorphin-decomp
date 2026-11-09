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
