// Decompiled translation unit: src/Sensors/SensorAbsoluteTM.cpp

extern "C" void ext_00627450();
extern "C" void ext_0067DAD0();

// [0x006274B0] Sensors::SensorAbsoluteTM::vfunc_15 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_006274B0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00627450
        lea edi, [esi + 0x30]
        push edi
        lea ecx, [esi + 0x60]
        call ext_0067DAD0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
