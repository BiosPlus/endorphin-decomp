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

// [0x00444090] MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_4 (134 bytes)
extern "C" void ext_0041A920();
extern "C" void ext_0041C880();
extern "C" void ext_0043F520();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00444090(void* self) {
    __asm {
        push -0x1
        push 0x87ba98
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x14
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], edi
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [eax + 0xa0]
        lea edx, [esp + 0x8]
        mov dword ptr [esp + 0x8], ecx
        push edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x28], edi
        call ext_0041A920
        mov ecx, dword ptr [esi + 0x8]
        push edi
        lea eax, [esp + 0x10]
        push eax
        call ext_0043F520
        mov ecx, dword ptr [esi + 0x4]
        push edi
        call ext_0041C880
        mov eax, dword ptr [esp + 0x10]
        cmp eax, edi
        pop edi
        pop esi
        je done
        push eax
        call ext_006A5C5C
        add esp, 0x4
    done:
        mov ecx, dword ptr [esp + 0x14]
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        add esp, 0x20
        ret 0xc
    }
}
