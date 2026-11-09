// Decompiled translation unit: src/NMData/DriveFrame.cpp

extern "C" void ext_006125B0();

// [0x005EC060] NMData::DriveFrame::vfunc_67 (15 bytes)
extern "C" __declspec(naked) float __fastcall fn_005EC060(void* self, int edx_unused, int idx) {
    __asm {
        call ext_006125B0
        mov ecx, dword ptr [esp + 0x4]
        fld dword ptr [eax + 4*ecx]
        ret 0x4
    }
}
