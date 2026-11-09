// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/SelectOrMoveState.cpp

extern "C" void __stdcall ext_0043CD60(int arg);

// [0x00442BF0] MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_1 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00442BF0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x8]
        mov eax, dword ptr [ecx + 0x170]
        push eax
        call ext_0043CD60
        ret
    }
}
