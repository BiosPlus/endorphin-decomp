// Decompiled translation unit: src/Sensors/SensorTreeCentreOfMassX.cpp

extern "C" void ext_006298B0();

// [0x00629A70] Sensors::SensorTreeCentreOfMassX::vfunc_17 (13 bytes)
extern "C" __declspec(naked) float __fastcall fn_00629A70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006298B0
        fld dword ptr [esi + 0x64]
        pop esi
        ret
    }
}
