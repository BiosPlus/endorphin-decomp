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

// [0x00443300] MultiTrackView::MultiTrackViewStates::PanState::vfunc_12 (99 bytes)
extern "C" void ext_0043CDD0();
extern "C" void ext_0043DDF0();
extern "C" int mem_00925688;

extern "C" __declspec(naked) bool __fastcall fn_00443300(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        add eax, 0Ch
        mov eax, dword ptr [eax]
        push edi
        push eax
        call ext_0043CDD0
        fstp qword ptr [esp + 8]
        mov edi, dword ptr [esp + 18h]
        mov ecx, dword ptr [esi + 8]
        push edi
        call ext_0043CDD0
        fsubr qword ptr [esp + 8]
        mov ecx, dword ptr [esi + 8]
        sub esp, 8
        fstp qword ptr [esp]
        call ext_0043DDF0
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 1Ch]
        mov dword ptr [eax + 0Ch], edi
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edx + 20h]
        push 1
        push 0
        push eax
        call dword ptr [mem_00925688]
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 0Ch
    }
}
