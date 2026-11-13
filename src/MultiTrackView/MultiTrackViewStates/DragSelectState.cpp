// Decompiled translation unit: src/MultiTrackView/MultiTrackViewStates/DragSelectState.cpp

// [0x00443630] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_1 (20 bytes)
extern "C" void ext_006A5E00();
extern "C" int mem_009256D8;

typedef void* (__stdcall *SetCaptureFn)(void*);
typedef void (__stdcall *ThunkFn)(void*);

extern "C" void __fastcall fn_00443630(void* self) {
    char* p = *(char**)((char*)self + 0x8);
    void* prev = ((SetCaptureFn)mem_009256D8)(*(void**)(p + 0x20));
    ((ThunkFn)ext_006A5E00)(prev);
}

// [0x00443520] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_18 (174 bytes)
extern "C" void ext_00419EF0();
extern "C" void ext_00493D90();
extern "C" void ext_0066A330();
extern "C" void ext_006A6010();
extern "C" int mem_0087BA58;

extern "C" __declspec(naked) void __fastcall fn_00443520(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push offset mem_0087BA58
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov edi, [esp + 0x3c]
        mov esi, ecx
        push 1
        mov ecx, edi
        call ext_006A6010
        fld1
        mov eax, [esi + 4]
        mov ecx, [eax + 0x14]
        mov edx, [eax + 0x18]
        mov ebx, [eax + 0xc]
        mov eax, [eax + 0x10]
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        mov [esp + 0x24], ecx
        fst dword ptr [esp + 0x8]
        lea ecx, [esp + 0x2c]
        fst dword ptr [esp + 0x4]
        mov [esp + 0x1c], ebx
        fstp dword ptr [esp]
        mov [esp + 0x20], eax
        mov [esp + 0x28], edx
        call ext_0066A330
        mov ecx, [esi + 8]
        push 2
        push 1
        push eax
        lea eax, [esp + 0x18]
        push eax
        push edi
        add ecx, 0x1b4
        mov dword ptr [esp + 0x48], 0
        call ext_00419EF0
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x34], 0xffffffff
        call ext_00493D90
        mov ecx, [esp + 0x2c]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov fs:[0], ecx
        add esp, 0x2c
        ret 4
    }
}
