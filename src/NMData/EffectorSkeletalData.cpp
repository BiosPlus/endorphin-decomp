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
