// Decompiled translation unit: src/SpinButtonStates/ClickedUpState.cpp

extern "C" void ext_006A5EC0();
extern "C" void ext_00458860();

// [0x00458940] SpinButtonStates::ClickedUpState::vfunc_5 (62 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458940(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi]
        push eax
        call edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        mov edi, dword ptr [eax]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x8]
        push eax
        call edx
        mov ecx, dword ptr [esi + 0xc]
        push 0x0
        call ext_00458860
        pop edi
        pop esi
        ret 0x8
    }
}
