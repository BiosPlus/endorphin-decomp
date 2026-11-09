// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/PanState.cpp

// [0x00442BA0] MultiTrackView::MultiTrackViewStates::PanState::vfunc_4 (15 bytes)
extern "C" void ext_0041C880();

extern "C" __declspec(naked) bool __fastcall fn_00442BA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov ecx, dword ptr [ecx + 4]
        push 0
        call ext_0041C880
        mov al, 1
        ret 0Ch
    }
}

// [0x00442CC0] MultiTrackView::MultiTrackViewStates::PanState::vfunc_2 (16 bytes)
extern "C" void ext_0043C900();
extern "C" int mem_009256E0;

extern "C" __declspec(naked) void __fastcall fn_00442CC0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 8]
        push 0
        call ext_0043C900
        jmp dword ptr [mem_009256E0]
    }
}

// [0x004432D0] MultiTrackView::MultiTrackViewStates::PanState::vfunc_1 (34 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_009256D8;

extern "C" __declspec(naked) void __fastcall fn_004432D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 8]
        push 1
        call ext_0043C900
        mov esi, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 20h]
        push eax
        call dword ptr [mem_009256D8]
        push eax
        call ext_006A5E00
        pop esi
        ret
    }
}
