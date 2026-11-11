// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/ZoomState.cpp

extern "C" void ext_0043C900();
extern "C" void ext_006A5E00();
extern "C" int mem_009256D8;
extern "C" int mem_00925688;

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

// [0x004433D0] MultiTrackView::MultiTrackViewStates::ZoomState::vfunc_12 (109 bytes)
extern "C" void __stdcall ext_0043DD60(double a, double b);

extern "C" __declspec(naked) bool __fastcall fn_004433D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        mov edx, dword ptr [eax + 0xfc]
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        sub eax, edx
        sub ecx, edx
        test eax, eax
        mov dword ptr [esp + 0x4], eax
        mov dword ptr [esp + 0x10], ecx
        jle done
        cmp ecx, 0x5
        jle done
        fild dword ptr [esp + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        sub esp, 0x10
        fmul qword ptr [esi + 0x10]
        fidiv dword ptr [esp + 0x20]
        fadd qword ptr [ecx + 0xe8]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ecx + 0xe8]
        fstp qword ptr [esp]
        call ext_0043DD60
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [edx + 0x20]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
done:
        mov al, 0x1
        pop esi
        pop ecx
        ret 0xc
    }
}
