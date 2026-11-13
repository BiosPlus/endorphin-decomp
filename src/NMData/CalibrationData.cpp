// Decompiled translation unit: src/NMData/CalibrationData.cpp

extern "C" void ext_006720E0();

// [0x005A7260] NMData::CalibrationData::vfunc_2 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005A7260(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0x0C]
        add     ecx, 4
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 8], 0
        call    ext_006720E0
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     8
    }
}

