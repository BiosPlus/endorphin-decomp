// Decompiled translation unit: src/SpinButtonStates/DragSpinState.cpp

extern "C" void ext_006A5E00();
extern "C" int mem_0092569C;
extern "C" int mem_009256A0;
extern "C" int mem_009256D8;

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
