// Decompiled translation unit: src/classes/HotkeyEditDialog.cpp

// [0x00421F50] HotkeyEditDialog::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00421F50(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x452, p + 0x74);
    ddx(a1, 0x476, p + 0x170);
    ddx(a1, 0x475, p + 0x11c);
    ddx(a1, 0x479, p + 0x1e8);
}

// [0x00421FB0] HotkeyEditDialog::vfunc_84 (371 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FC8();
extern "C" void ext_006A60D0();
extern "C" void ext_00428A40();
extern "C" int mem_0092565C;
extern "C" int mem_00925694;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00421FB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        _emit 0x68
        _emit 0xf9
        _emit 0x56
        _emit 0x8b
        _emit 0x00
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        call ext_006A5FC8
        test eax, eax
        jne L1
        pop esi
        mov ecx, dword ptr [esp+0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    L1:
        push ebx
        push ebp
        push edi
        call ext_006A5EDE
        mov eax, dword ptr [eax+8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax+8]
        push 0xfd
        push eax
        call edi
        mov edi, dword ptr [mem_00925694]
        push ebx
        push 1
        mov ebp, eax
        mov eax, dword ptr [esi+0x20]
        push 0x80
        push eax
        call edi
        mov ecx, dword ptr [esi+0x20]
        push ebp
        push 0
        push 0x80
        push ecx
        call edi
        lea ecx, [esi+0xc8]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi+0x11c]
        call ext_006A5F50
        push 0x92e764
        lea ecx, [esp+0x14]
        call dword ptr [mem_00924FE4]
        lea edx, [esi+0xe4]
        push edx
        lea ecx, [esp+0x14]
        mov dword ptr [esp+0x38], 0
        call dword ptr [mem_00924FD8]
        lea ecx, [esp+0x10]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi+0x170]
        call ext_006A5F50
        lea ecx, [esi+0x100]
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi+0x1e8]
        call ext_006A5F50
        xor ebx, ebx
        cmp byte ptr [esi+0x1c6], bl
        je L2
        mov ebx, 4
    L2:
        cmp byte ptr [esi+0x1c4], 0
        je L3
        or ebx, 2
    L3:
        cmp byte ptr [esi+0x1c5], 0
        je L4
        or ebx, 1
    L4:
        mov ecx, dword ptr [esi+0x1e4]
        lea eax, [esi+0x1c8]
        push eax
        call ext_00428A40
        mov edx, dword ptr [esi+0x94]
        xor ecx, ecx
        mov ch, bl
        push 0
        mov cl, al
        push ecx
        push 0x401
        push edx
        call edi
        lea ecx, [esi+0x74]
        call ext_006A60D0
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp+0x2c]
        pop edi
        pop ebp
        pop ebx
        mov eax, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
