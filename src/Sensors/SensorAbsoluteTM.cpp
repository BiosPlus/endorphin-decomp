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

// [0x00627480] Sensors::SensorAbsoluteTM::vfunc_14 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00627480(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00627450
        fld dword ptr [esi + 0x90]
        lea eax, [esi + 0x54]
        fstp dword ptr [eax]
        fld dword ptr [esi + 0x94]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esi + 0x98]
        pop esi
        fstp dword ptr [eax + 0x8]
        ret
    }
}
