// Decompiled translation unit: src/NMData/AxisDefineSensorData.cpp

// [0x0060F0B0] NMData::AxisDefineSensorData::vfunc_0_off_150 (25 bytes)
extern "C" void ext_00480920();

extern "C" __declspec(naked) void __fastcall fn_0060F0B0(void* self, int edx_unused, void* dst) {
    __asm {
        push esi
        push edi
        call ext_00480920
        mov edi, dword ptr [esp + 0xc]
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
    }
}
