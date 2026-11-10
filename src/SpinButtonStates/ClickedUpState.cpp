// Decompiled translation unit: src/SpinButtonStates/ClickedUpState.cpp

extern "C" void ext_004586A0();
extern "C" void ext_004586C0();
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

// [0x004587C0] SpinButtonStates::ClickedUpState::vfunc_3 (69 bytes)
extern "C" __declspec(naked) void __fastcall fn_004587C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        push esi
        mov esi, ecx
        jne not_three
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        push edi
        mov edi, dword ptr [eax]
        call ext_006A5EC0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi]
        push eax
        call edx
        pop edi
        pop esi
        ret 0x4
not_three:
        cmp eax, 0x2
        jne done
        mov ecx, dword ptr [esi + 0x8]
        push eax
        call ext_004586C0
        mov ecx, dword ptr [esi + 0x8]
        push 0x32
        push 0x3
        call ext_004586A0
done:
        pop esi
        ret 0x4
    }
}
