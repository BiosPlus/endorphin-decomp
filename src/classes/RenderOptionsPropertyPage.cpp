// Decompiled translation unit: src/classes/RenderOptionsPropertyPage.cpp

// [0x0044A170] RenderOptionsPropertyPage::vfunc_63 (103 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0044A170(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x477, p + 0x88);
    ddx(a1, 0x482, p + 0xf4);
    ddx(a1, 0x47d, p + 0x148);
    ddx(a1, 0x484, p + 0x19c);
    ddx(a1, 0x489, p + 0x1f8);
}

// [0x0044AF40] RenderOptionsPropertyPage::vfunc_91 (265 bytes)
extern "C" void ext_0044A900();
extern "C" void ext_006A6226();
extern "C" int mem_00925694;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0044AF40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_006A6226
        mov eax, dword ptr [edi + 0x168]
        mov ebx, dword ptr [mem_00925694]
        push 0xff
        push 0
        push 0x408
        push eax
        call ebx
        mov ecx, dword ptr [edi + 0x168]
        push 0
        push 0
        push 0x407
        push ecx
        call ebx
        mov edx, dword ptr [edi + 0xa8]
        push 0
        push 0
        push 0x184
        push edx
        call ebx
        mov esi, 0xad0f18
        jmp loop_start
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
    loop_start:
        push esi
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_00924FF0]
        push eax
        mov eax, dword ptr [edi + 0xa8]
        push 0
        push 0x180
        push eax
        call ebx
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        add esi, 0x38
        cmp esi, 0xad1b90
        jl loop_start
        mov eax, dword ptr [edi + 0xdc]
        test eax, eax
        jl loc_set_zero
        cmp eax, 0x38
        jle loc_set_cursel
    loc_set_zero:
        mov dword ptr [edi + 0xdc], 0
    loc_set_cursel:
        mov ecx, dword ptr [edi + 0xdc]
        mov edx, dword ptr [edi + 0xa8]
        push 0
        push ecx
        push 0x186
        push edx
        call ebx
        mov ecx, edi
        call ext_0044A900
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
