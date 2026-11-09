// Decompiled translation unit: src/Sensors/SensorAbsoluteVerticalVelocityMag.cpp

extern "C" void ext_00627280();

// [0x006272B0] Sensors::SensorAbsoluteVerticalVelocityMag::vfunc_17 (27 bytes)
extern "C" __declspec(naked) float __fastcall fn_006272B0(void* self) {
    __asm {
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00627280
        __asm _emit 0xD9 __asm _emit 0xEE // fldz
        __asm _emit 0xD8 __asm _emit 0x5E __asm _emit 0x34 // fcomp dword ptr [esi + 0x34]
        __asm _emit 0xDF __asm _emit 0xE0 // fnstsw ax
        __asm _emit 0xD9 __asm _emit 0x46 __asm _emit 0x34 // fld dword ptr [esi + 0x34]
        __asm _emit 0xF6 __asm _emit 0xC4 __asm _emit 0x41 // test ah, 0x41
        __asm _emit 0x75 __asm _emit 0x02 // jne +2
        __asm _emit 0xD9 __asm _emit 0xE0 // fchs
        __asm _emit 0x5E // pop esi
        __asm _emit 0xC3 // ret
    }
}
