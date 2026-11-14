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

extern "C" void ext_0041C880();
extern "C" void ext_0043CEF0();

// [0x00442C10] MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_20 (44 bytes)
extern "C" __declspec(naked) void __fastcall fn_00442C10(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        call ext_0043CEF0
        test al, al
        mov ecx, dword ptr [esi + 0x4]
        je short L_00442C2F
        push 0x6
        call ext_0041C880
        mov al, 0x1
        pop esi
        ret 0x4
    L_00442C2F:
        push 0x0
        call ext_0041C880
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

extern "C" void ext_0043CD80();
extern "C" void ext_0043C9B0();
extern "C" void ext_0043F460();
extern "C" void ext_0043F490();
extern "C" int mem_00925688;

// [0x004435D0] MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_4 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_004435D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        call ext_0043CD80
        mov ecx, dword ptr [esi + 0x8]
        mov eax, dword ptr [ecx + 0xa0]
        test eax, eax
        je short L_0044361A_4435D0
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test bl, 0x8
        push eax
        je short L_004435FA_4435D0
        call ext_0043F490
        jmp short L_004435FF_4435D0
    L_004435FA_4435D0:
        call ext_0043F460
    L_004435FF_4435D0:
        mov ecx, dword ptr [esi + 0x8]
        push ebx
        call ext_0043C9B0
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0x20]
        push 1
        push 0
        push ecx
        call dword ptr [mem_00925688]
        pop ebx
    L_0044361A_4435D0:
        mov ecx, dword ptr [esi + 0x4]
        push 0
        call ext_0041C880
        mov al, 1
        pop esi
        ret 0xc
    }
}
