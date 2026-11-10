// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/ZoomState.cpp

extern "C" void ext_0043C900();
extern "C" void ext_006A5E00();
extern "C" int mem_009256D8;

// [0x00443390] MultiTrackView::MultiTrackViewStates::ZoomState::vfunc_1 (49 bytes)
extern "C" __declspec(naked) void __fastcall fn_00443390(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        fld qword ptr [ecx + 0xf0]
        push 3
        fsub qword ptr [ecx + 0xe8]
        fstp qword ptr [esi + 0x10]
        call ext_0043C900
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
