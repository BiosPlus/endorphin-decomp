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
