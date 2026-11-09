// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/ResizeLeftState.cpp

// [0x004436D0] MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_1 (44 bytes)
extern "C" void ext_0043C900();
extern "C" void ext_006A5E00();
extern "C" int mem_00925718;
extern "C" int mem_009256D8;

extern "C" __declspec(naked) void __fastcall fn_004436D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0xc]
        push eax
        call dword ptr [mem_00925718]   // USER32!GetCursorPos
        mov ecx, dword ptr [esi + 0x8]
        push 0x3
        call ext_0043C900
        mov esi, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0x20]
        push ecx
        call dword ptr [mem_009256D8]   // USER32!SetCapture
        push eax
        call ext_006A5E00
        pop esi
        ret
    }
}
