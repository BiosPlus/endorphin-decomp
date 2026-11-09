// Decompiled translation unit: src/Sensors/SensorTreeCentreOfMassZ.cpp

extern "C" void ext_006298B0();

// [0x00629A90] Sensors::SensorTreeCentreOfMassZ::vfunc_17 (13 bytes)
extern "C" __declspec(naked) float __fastcall fn_00629A90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006298B0
        fld dword ptr [esi + 0x6c]
        pop esi
        ret
    }
}
