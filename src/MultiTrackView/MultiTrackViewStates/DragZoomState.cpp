// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/DragZoomState.cpp

extern "C" int mem_00925688;
extern "C" int mem_009256E0;

// [0x00443440] MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_2 (23 bytes)
extern "C" __declspec(naked) void __fastcall fn_00443440(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [eax + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        jmp dword ptr [mem_009256E0]
    }
}
