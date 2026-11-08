// Decompiled translation unit: src/NMData/MagnetJointData.cpp

// [0x005F0D20] NMData::MagnetJointData::vfunc_8 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_005F0D20(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xec]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
