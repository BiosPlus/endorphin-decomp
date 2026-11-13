// Decompiled translation unit: src/classes/MetaBodySelection.cpp

// [0x004EE010] MetaBodySelection::vfunc_1_off_18 (30 bytes)
extern "C" void ext_004EDC90();

extern "C" __declspec(naked) void __fastcall fn_004EE010(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        lea edx, [esi + 0x24]
        push edx
        call eax
        lea ecx, [esi - 0x18]
        call ext_004EDC90
        pop esi
        ret 0x4
    }
}
