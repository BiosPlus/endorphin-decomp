// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/MoveState.cpp

// [0x00442C70] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_2 (25 bytes)
extern "C" void ext_0043C900();
extern "C" int mem_009256E0;

extern "C" __declspec(naked) void __fastcall fn_00442C70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x0
        call ext_0043C900
        call dword ptr [mem_009256E0]
        mov byte ptr [esi + 0x30], 0x0
        pop esi
        ret
    }
}

// [0x00443650] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_7 (44 bytes)
extern "C" int mem_00925718;
extern "C" int mem_009256DC;

extern "C" __declspec(naked) void __fastcall fn_00443650(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x8
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call dword ptr [mem_00925718]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esi + 0x1c]
        push ecx
        push edx
        call dword ptr [mem_009256DC]
        test eax, eax
        setne al
        pop esi
        add esp, 0x8
        ret 0xc
    }
}
