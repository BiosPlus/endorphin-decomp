// Decompiled translation unit: src/classes/UndoHistoryDialog.cpp

// [0x00460D00] UndoHistoryDialog::vfunc_66 (59 bytes)
extern "C" void ext_006A5E00();
extern "C" void ext_006A5F7A();
extern "C" void ext_006A5F44();
extern "C" int mem_00925654;

typedef void* (__stdcall *GetFocusFn)();
typedef void* (__stdcall *FromHandleFn)(void*);
typedef int (__thiscall *BaseFn)(void*, void*);

extern "C" int __fastcall fn_00460D00(void* self, int edx_unused, void* msg) {
    if (((int*)msg)[1] == 0x100) {
        void* focus = ((GetFocusFn)mem_00925654)();
        void* wnd = ((FromHandleFn)ext_006A5E00)(focus);
        if (wnd != (char*)self + 0x128) {
            return 0;
        }
    }
    return ((BaseFn)ext_006A5F7A)(self, msg);
}

// [0x00460C50] UndoHistoryDialog::vfunc_63 (136 bytes)
extern "C" void __fastcall fn_00460C50(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x432, p + 0x7c);
    ddx(a1, 0x433, p + 0xd0);
    ddx(a1, 0x42e, p + 0x128);
    ddx(a1, 0x438, p + 0x17c);
    ddx(a1, 0x43e, (void*)*(int*)(p + 0x124));
    ddx(a1, 0x43f, p + 0x1d0);
    ddx(a1, 0x440, p + 0x224);
}

// [0x00460FB0] UndoHistoryDialog::vfunc_0_off_78 (141 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_0092568C;

extern "C" __declspec(naked) void __fastcall fn_00460FB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        cmp dword ptr [esp + 0x2c], 0x43e
        push esi
        mov esi, ecx
        jne skip_update
        add dword ptr [esi + 0x200], 1
        mov eax, dword ptr [esi + 0x200]
        push eax
        lea eax, [esp + 8]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x28], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xb0]
        call ext_006A5F50
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xd0]
        push ecx
        call dword ptr [mem_0092568C]
    skip_update:
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x00461040] UndoHistoryDialog::vfunc_1_off_78 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_00461040(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        cmp dword ptr [esp + 0x2c], 0x43e
        push esi
        mov esi, ecx
        jne skip_update
        mov eax, dword ptr [esi + 0x200]
        test eax, eax
        jle skip_update
        add eax, -1
        push eax
        mov dword ptr [esi + 0x200], eax
        lea eax, [esp + 8]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x28], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xb0]
        call ext_006A5F50
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0xd0]
        push ecx
        call dword ptr [mem_0092568C]
    skip_update:
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}

// [0x00460D40] UndoHistoryDialog::vfunc_84 (182 bytes)
extern "C" void ext_006A5FC8();
extern "C" void ext_00665870();
extern "C" void ext_006A5F50();
extern "C" void ext_00404F00();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925694;
extern "C" int mem_00928B5D;

extern "C" __declspec(naked) void __fastcall fn_00460D40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        call ext_006A5FC8
        call ext_00665870
        mov eax, dword ptr [eax + 0x8]
        cmp eax, -1
        jne not_equal
        push offset mem_00928B5D
        lea ecx, [esi + 0x128]
        call ext_006A5F50
        mov eax, dword ptr [esi + 0x19c]
        push 0
        push 0
        push 0xf1
        push eax
        jmp send_msg
    not_equal:
        push eax
        lea ecx, [esp + 8]
        push ecx
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x28], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x128]
        call ext_006A5F50
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi + 0x19c]
        push 0
        push 1
        push 0xf1
        push edx
    send_msg:
        call dword ptr [mem_00925694]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
