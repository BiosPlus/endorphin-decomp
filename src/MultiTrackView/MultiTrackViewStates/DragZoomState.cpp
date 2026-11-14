// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/DragZoomState.cpp

extern "C" int mem_00925688;
extern "C" int mem_009256E0;
extern "C" void ext_0041C880();
extern "C" void ext_0043CDD0();
extern "C" void ext_0043DD60();
extern "C" int mem_0092A270;

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

// [0x00443460] MultiTrackView::MultiTrackViewStates::DragZoomState::vfunc_7 (158 bytes)
extern "C" __declspec(naked) void __fastcall fn_00443460(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub     esp, 8
        test    byte ptr [esp + 0xc], 4
        push    esi
        mov     esi, ecx
        je      loc_4434eb
        mov     eax, dword ptr [esi + 4]
        mov     ecx, dword ptr [esi + 8]
        add     eax, 0xc
        mov     eax, dword ptr [eax]
        push    eax
        call    ext_0043CDD0
        fstp    qword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esi + 8]
        call    ext_0043CDD0
        fld     qword ptr [esp + 4]
        fcom    st(1)
        fnstsw  ax
        test    ah, 0x41
        jne     loc_44349e
        fxch    st(1)
loc_44349e:
        fld     st(1)
        fsub    st, st(1)
        fcomp   qword ptr [mem_0092A270]
        fnstsw  ax
        test    ah, 0x41
        jne     loc_4434e7
        mov     ecx, dword ptr [esi + 8]
        fxch    st(1)
        sub     esp, 0x10
        fstp    qword ptr [esp + 8]
        fstp    qword ptr [esp]
        call    ext_0043DD60
        mov     edx, dword ptr [esi + 8]
        mov     eax, dword ptr [edx + 0x20]
        push    1
        push    0
        push    eax
        call    dword ptr [mem_00925688]
        mov     ecx, dword ptr [esi + 4]
        push    0
        call    ext_0041C880
        mov     al, 1
        pop     esi
        add     esp, 8
        ret     0xc
loc_4434e7:
        fstp    st(1)
        fstp    st(0)
loc_4434eb:
        mov     ecx, dword ptr [esi + 4]
        push    0
        call    ext_0041C880
        mov     al, 1
        pop     esi
        add     esp, 8
        ret     0xc
    }
}
