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

// [0x00443750] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_4 (528 bytes)
extern "C" void ext_0041C880();
extern "C" void ext_0043C9B0();
extern "C" void ext_0043CDD0();
extern "C" void ext_0043D620();
extern "C" void ext_0043DD60();
extern "C" void ext_0043F2E0();
extern "C" void ext_0043F490();
extern "C" void ext_0043F4C0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A60D0();
extern "C" int mem_0087BA98;
extern "C" int mem_00925134;
extern "C" int mem_00925688;

extern "C" __declspec(naked) void __fastcall fn_00443750(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push offset mem_0087BA98
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x10
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x1c], eax
        mov esi, dword ptr [esp + 0x30]
        and esi, 0x8
        mov ebx, dword ptr [esp + 0x34]
        mov ebp, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x28], eax
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [eax + 0x10]
        je loc_004437d8
        test byte ptr [esp + 0x30], 0x4
        je loc_004437d8
        cmp ecx, ebx
        mov eax, ecx
        jg loc_004437ad
        mov eax, ebx
        jge loc_004437ad
        mov ebx, ecx
    loc_004437ad:
        mov ecx, dword ptr [edi + 0x8]
        push eax
        call ext_0043CDD0
        mov ecx, dword ptr [edi + 0x8]
        sub esp, 0x8
        fstp qword ptr [esp]
        push ebx
        call ext_0043CDD0
        mov ecx, dword ptr [edi + 0x8]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_0043DD60
        jmp loc_00443915
    loc_004437d8:
        lea eax, [esp + 0x10]
        push eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edi + 0x8]
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], ebx
        mov dword ptr [eax + 0xc], ebp
        call ext_0043F2E0
        test esi, esi
        je loc_0044384b
        mov esi, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        cmp esi, eax
        mov ebp, dword ptr [mem_00925134]
        jbe loc_00443811
        call ebp
        mov eax, dword ptr [esp + 0x18]
    loc_00443811:
        cmp dword ptr [esp + 0x14], eax
        mov ebx, eax
        jbe loc_0044381f
        call ebp
        mov eax, dword ptr [esp + 0x18]
    loc_0044381f:
        cmp esi, ebx
        je loc_0044390b
        cmp esi, eax
        jb loc_0044382d
        call ebp
    loc_0044382d:
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, dword ptr [edi + 0x8]
        call ext_0043F490
        mov eax, dword ptr [esp + 0x18]
        cmp esi, eax
        jb loc_00443846
        call ebp
        mov eax, dword ptr [esp + 0x18]
    loc_00443846:
        add esi, 0x4
        jmp loc_00443811
    loc_0044384b:
        test byte ptr [esp + 0x30], 0x4
        je loc_004438bd
        mov esi, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        cmp esi, eax
        mov ebp, dword ptr [mem_00925134]
        jbe loc_00443870
        call ebp
        mov eax, dword ptr [esp + 0x18]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    loc_00443870:
        cmp dword ptr [esp + 0x14], eax
        mov ebx, eax
        jbe loc_0044387e
        call ebp
        mov eax, dword ptr [esp + 0x18]
    loc_0044387e:
        cmp esi, ebx
        je loc_00443915
        cmp esi, eax
        jb loc_0044388c
        call ebp
    loc_0044388c:
        mov eax, dword ptr [esi]
        cmp byte ptr [eax + 0x88], 0x0
        jne loc_004438a0
        mov ecx, dword ptr [edi + 0x8]
        push eax
        call ext_0043F490
    loc_004438a0:
        mov ecx, dword ptr [edi + 0x8]
        push 0x0
        call ext_0043C9B0
        mov eax, dword ptr [esp + 0x18]
        cmp esi, eax
        jb loc_004438b8
        call ebp
        mov eax, dword ptr [esp + 0x18]
    loc_004438b8:
        add esi, 0x4
        jmp loc_00443870
    loc_004438bd:
        mov ecx, dword ptr [edi + 0x8]
        lea edx, [esp + 0x34]
        push edx
        call ext_0043D620
        test eax, eax
        je loc_004438df
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        test al, al
        jne loc_004438df
        mov dl, 0x1
        jmp loc_004438e1
    loc_004438df:
        xor dl, dl
    loc_004438e1:
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        jne loc_004438ed
        xor eax, eax
        jmp loc_004438f6
    loc_004438ed:
        mov eax, dword ptr [esp + 0x18]
        sub eax, ecx
        sar eax, 0x2
    loc_004438f6:
        test dl, dl
        jne loc_004438fe
        test eax, eax
        je loc_00443915
    loc_004438fe:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [edi + 0x8]
        call ext_0043F4C0
    loc_0044390b:
        mov ecx, dword ptr [edi + 0x8]
        push 0x0
        call ext_0043C9B0
    loc_00443915:
        mov ecx, dword ptr [edi + 0x8]
        call ext_006A60D0
        mov edx, dword ptr [edi + 0x8]
        mov eax, dword ptr [edx + 0x20]
        push 0x1
        push 0x0
        push eax
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [edi + 0x4]
        push 0x0
        call ext_0041C880
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je loc_00443949
        push eax
        call ext_006A5C5C
        add esp, 0x4
    loc_00443949:
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        mov fs:[0], ecx
        pop ebx
        add esp, 0x1c
        ret 0xc
    }
}
