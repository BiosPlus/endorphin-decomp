// Decompiled translation unit: src/NMData/EffectorData.cpp

// [0x0060BDF0] NMData::EffectorData::vfunc_19 (24 bytes)
extern "C" void ext_0060BB50();
extern "C" void ext_0060BCD0();

extern "C" __declspec(naked) void __fastcall fn_0060BDF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0060BB50
        mov dword ptr [esi + 0x44], 0
        lea ecx, [esi + 0x48]
        pop esi
        jmp ext_0060BCD0
    }
}
