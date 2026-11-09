// Decompiled translation unit: src/NMData/TopLevelState.cpp

// [0x004EBE10] NMData::TopLevelState::vfunc_1 (20 bytes)
extern "C" void ext_004EBC80();

extern "C" __declspec(naked) void __fastcall fn_004EBE10(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 4]
        lea eax, [ecx + 0x14c]
        push eax
        push edx
        call ext_004EBC80
        ret 4
    }
}
