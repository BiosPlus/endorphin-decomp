// Decompiled translation unit: src/NMData/TriggeredEventData.cpp

// [0x004BFBA0] NMData::TriggeredEventData::vfunc_1_off_154 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BFBA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esi + 0x18]
        push edx
        call eax
        mov edx, dword ptr [esi - 0x154]
        mov eax, dword ptr [edx + 0x16c]
        lea ecx, [esi - 0x154]
        call eax
        pop esi
        ret 0x4
    }
}
