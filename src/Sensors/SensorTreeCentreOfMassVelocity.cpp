// Decompiled translation unit: src/Sensors/SensorTreeCentreOfMassVelocity.cpp

extern "C" void ext_00629B10();

// [0x00629CB0] Sensors::SensorTreeCentreOfMassVelocity::vfunc_16 (20 bytes)
extern "C" float __fastcall fn_00629CB0(void* self, int edx_unused, int idx) {
    ext_00629B10();
    return ((float*)((char*)self + 0x60))[idx];
}

// [0x005FF200] Sensors::SensorTreeCentreOfMassVelocity::vfunc_14 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_005FF200(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        call ext_00629B10
        fld dword ptr [esi + 0x64]
        fstp dword ptr [esp + 0x4]
        lea eax, [esi + 0x70]
        fld dword ptr [esi + 0x68]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x60]
        pop esi
        fstp dword ptr [eax]
        fld dword ptr [esp]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x8]
        add esp, 8
        ret
    }
}
