// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/ResizeRightState.cpp

extern "C" void ext_00442CF0(int a1, void* a2, double a3);

// [0x00443720] MultiTrackView::MultiTrackViewStates::ResizeRightState::vfunc_18 (37 bytes)
extern "C" unsigned char __fastcall fn_00443720(void* self, int edx_unused, int a1) {
    void* eax = *(void**)((char*)self + 0x8);
    char* ecx = *(char**)((char*)eax + 0xa0);
    double d = *(double*)(ecx + 0x58);
    ext_00442CF0(a1, eax, d);
    return 0;
}

// [0x004441E0] MultiTrackView::MultiTrackViewStates::ResizeRightState::vfunc_12 (213 bytes)
extern "C" void ext_00441040();
extern "C" void ext_0043CDD0();
extern "C" void ext_0043F520();
extern "C" void ext_004408B0();
extern "C" void ext_0041A920();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_004441E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        mov eax, [esi + 8]
        push edi
        mov edi, [eax + 0xa0]
        mov ecx, edi
        mov [esp + 0x10], edi
        call ext_00441040
        mov ecx, [esp + 0x38]
        mov [esp + 8], eax
        fild dword ptr [esp + 8]
        push ecx
        mov ecx, [esi + 8]
        fstp qword ptr [esp + 0xc]
        call ext_0043CDD0
        sub esp, 8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_004408B0
        mov ecx, edi
        call ext_00441040
        mov [esp + 0x38], eax
        fild dword ptr [esp + 0x38]
        fcomp qword ptr [esp + 8]
        fnstsw ax
        test ah, 0x44
        jnp done
        xor edi, edi
        mov [esp + 0x18], edi
        mov [esp + 0x1c], edi
        mov [esp + 0x20], edi
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esp + 0x18]
        mov [esp + 0x30], edi
        call ext_0041A920
        mov ecx, [esi + 8]
        push 1
        lea eax, [esp + 0x18]
        push eax
        call ext_0043F520
        mov ecx, [esi + 8]
        mov edx, [ecx + 0x20]
        push 1
        push edi
        push edx
        call dword ptr [mem_00925688]
        mov eax, [esp + 0x18]
        cmp eax, edi
        je done
        push eax
        call ext_006A5C5C
        add esp, 4
    done:
        mov ecx, [esp + 0x24]
        pop edi
        mov al, 1
        pop esi
        mov fs:[0], ecx
        add esp, 0x28
        ret 0xc
    }
}
