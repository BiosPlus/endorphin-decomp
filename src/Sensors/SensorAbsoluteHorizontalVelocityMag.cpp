// Decompiled translation unit: src/Sensors/SensorAbsoluteHorizontalVelocityMag.cpp

extern "C" void ext_00627280();
extern "C" void ext_006A7250();

// [0x00627300] Sensors::SensorAbsoluteHorizontalVelocityMag::vfunc_17 (68 bytes)
extern "C" __declspec(naked) float __fastcall fn_00627300(void* self) {
    __asm {
        push ecx
        push esi
        __asm _emit 0x8B __asm _emit 0xF1 // mov esi, ecx
        call ext_00627280
        __asm _emit 0xD9 __asm _emit 0x46 __asm _emit 0x38 // fld dword ptr [esi + 0x38]
        __asm _emit 0xD9 __asm _emit 0x46 __asm _emit 0x30 // fld dword ptr [esi + 0x30]
        __asm _emit 0xDC __asm _emit 0xC8                  // fmul st(0), st
        __asm _emit 0xD9 __asm _emit 0xC1                  // fld st(1)
        __asm _emit 0xDE __asm _emit 0xCA                  // fmulp st(2), st
        __asm _emit 0xDE __asm _emit 0xC1                  // faddp st(1), st
        __asm _emit 0xD9 __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x04 // fstp dword ptr [esp + 4]
        __asm _emit 0xD9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // fld dword ptr [esp + 4]
        call ext_006A7250
        __asm _emit 0xD9 __asm _emit 0x5C __asm _emit 0x24 __asm _emit 0x04 // fstp dword ptr [esp + 4]
        __asm _emit 0xD9 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // fld dword ptr [esp + 4]
        __asm _emit 0x5E                                   // pop esi
        __asm _emit 0xD9 __asm _emit 0x1C __asm _emit 0x24 // fstp dword ptr [esp]
        __asm _emit 0xD9 __asm _emit 0xEE                  // fldz
        __asm _emit 0xD9 __asm _emit 0x04 __asm _emit 0x24 // fld dword ptr [esp]
        __asm _emit 0xD8 __asm _emit 0xD1                  // fcom st(1)
        __asm _emit 0xDF __asm _emit 0xE0                  // fnstsw ax
        __asm _emit 0xDD __asm _emit 0xD9                  // fstp st(1)
        __asm _emit 0xF6 __asm _emit 0xC4 __asm _emit 0x05 // test ah, 0x5
        __asm _emit 0x7A __asm _emit 0x02                  // jp +2
        __asm _emit 0xD9 __asm _emit 0xE0                  // fchs
        __asm _emit 0x59                                   // pop ecx
        __asm _emit 0xC3                                   // ret
    }
}
