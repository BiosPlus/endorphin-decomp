// Decompiled translation unit: src/SpinButtonStates/DragSpinState.cpp

extern "C" void ext_006A5E00();
extern "C" void ext_006A5EC0();
extern "C" void ext_00458860();
extern "C" int mem_0092569C;
extern "C" int mem_009256A0;
extern "C" int mem_009256D8;
extern "C" int mem_009256DC;
extern "C" int mem_009256E0;

// [0x00458810] SpinButtonStates::DragSpinState::vfunc_1 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458810(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call dword ptr [mem_0092569C]
        push 0x0
        mov dword ptr [esi + 0x10], eax
        call dword ptr [mem_009256A0]
        mov esi, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        pop esi
        ret
    }
}

// [0x00458990] SpinButtonStates::DragSpinState::vfunc_5 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_00458990(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        mov ecx, eax
        shr ecx, 0x10
        movsx edx, cx
        push edi
        movsx eax, ax
        push edx
        push eax
        call dword ptr [mem_009256DC]
        push 0x1
        call dword ptr [mem_009256A0]
        call dword ptr [mem_009256E0]
        mov ecx, dword ptr [esi + 0x4]
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
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
