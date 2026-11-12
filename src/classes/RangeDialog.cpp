// Decompiled translation unit: src/classes/RangeDialog.cpp

extern "C" void ext_006A5F44();

// [0x004495D0] RangeDialog::vfunc_63 (82 bytes)
extern "C" void __fastcall fn_004495D0(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    typedef void (__stdcall *DdxFn)(int, int, void*);
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x499, p + 0x78);
    ddx(a1, 0x49b, (void*)*(int*)(p + 0xcc));
    ddx(a1, 0x49a, p + 0xd0);
    ddx(a1, 0x49c, (void*)*(int*)(p + 0x124));
}

// [0x004495A0] RangeDialog::vfunc_86 (35 bytes)
extern "C" void ext_004490F0();
extern "C" void ext_00449160();
extern "C" void ext_006A5FB0();

extern "C" void __fastcall fn_004495A0(void* self) {
    char* p = (char*)self;
    typedef int (__fastcall *GetFn)(void*);
    typedef void (__fastcall *TailFn)(void*);
    *(int*)(p + 0x144) = ((GetFn)ext_004490F0)(self);
    *(int*)(p + 0x148) = ((GetFn)ext_00449160)(self);
    ((TailFn)ext_006A5FB0)(self);
}

extern "C" void ext_00404F00();
extern "C" void ext_004490F0();
extern "C" void ext_00449160();
extern "C" void ext_004491D0();
extern "C" void ext_00449220();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

// [0x00449630] RangeDialog::vfunc_1_off_74 (235 bytes)
extern "C" __declspec(naked) void __fastcall fn_00449630(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x87cce2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x38
        sub eax, 0x49b
        push esi
        push edi
        mov esi, ecx
        je L_449630_alt
        sub eax, 0x1
        jne L_449630_end
        lea edi, [esi - 0x74]
        mov ecx, edi
        call ext_00449160
        sub eax, 0x1
        mov dword ptr [esp + 0x50], eax
        lea eax, [esp + 0x50]
        push eax
        mov ecx, edi
        call ext_00449220
        mov ecx, dword ptr [esp + 0x50]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x5c]
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        jmp L_449630_dtor
L_449630_alt:
        lea edi, [esi - 0x74]
        mov ecx, edi
        call ext_004490F0
        sub eax, 0x1
        mov dword ptr [esp + 0x50], eax
        lea eax, [esp + 0x50]
        push eax
        mov ecx, edi
        call ext_004491D0
        mov ecx, dword ptr [esp + 0x50]
        push ecx
        lea edx, [esp + 0x28]
        push edx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x4]
        call ext_006A5F50
        lea ecx, [esp + 0x24]
L_449630_dtor:
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
L_449630_end:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}

// [0x00449720] RangeDialog::vfunc_0_off_74 (235 bytes)
extern "C" __declspec(naked) void __fastcall fn_00449720(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x87cce2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x38
        sub eax, 0x49b
        push esi
        push edi
        mov esi, ecx
        je L_449720_alt
        sub eax, 0x1
        jne L_449720_end
        lea edi, [esi - 0x74]
        mov ecx, edi
        call ext_00449160
        add eax, 0x1
        mov dword ptr [esp + 0x50], eax
        lea eax, [esp + 0x50]
        push eax
        mov ecx, edi
        call ext_00449220
        mov ecx, dword ptr [esp + 0x50]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x5c]
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        jmp L_449720_dtor
L_449720_alt:
        lea edi, [esi - 0x74]
        mov ecx, edi
        call ext_004490F0
        add eax, 0x1
        mov dword ptr [esp + 0x50], eax
        lea eax, [esp + 0x50]
        push eax
        mov ecx, edi
        call ext_004491D0
        mov ecx, dword ptr [esp + 0x50]
        push ecx
        lea edx, [esp + 0x28]
        push edx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x4]
        call ext_006A5F50
        lea ecx, [esp + 0x24]
L_449720_dtor:
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
L_449720_end:
        mov ecx, dword ptr [esp + 0x40]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}
