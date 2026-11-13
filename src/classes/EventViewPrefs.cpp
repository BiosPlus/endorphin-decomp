// Decompiled translation unit: src/classes/EventViewPrefs.cpp

// [0x00416D90] EventViewPrefs::vfunc_63 (103 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00416D90(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x42e, p + 0x8c);
    ddx(a1, 0x42f, p + 0xe0);
    ddx(a1, 0x438, p + 0x134);
    ddx(a1, 0x430, p + 0x188);
    ddx(a1, 0x431, p + 0x1dc);
}

// [0x00417230] EventViewPrefs::vfunc_91 (204 bytes)
extern "C" void ext_006A6226();
extern "C" void ext_00416E00();
extern "C" void ext_00404F00();
extern "C" void ext_006A5F50();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00417230(void* self) {
    __asm {
        push -1
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x76
        __asm _emit 0x87
        __asm _emit 0x00
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        call ext_006A6226
        mov ecx, esi
        call ext_00416E00
        mov eax, dword ptr [esi + 0x88]
        mov eax, dword ptr [eax + 0x170]
        push eax
        lea ecx, [esp + 0x8]
        push ecx
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x44], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x188]
        call ext_006A5F50
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov edx, dword ptr [esi + 0x88]
        mov eax, dword ptr [edx + 0x174]
        push eax
        lea eax, [esp + 0x24]
        push eax
        call ext_00404F00
        add esp, 8
        mov ecx, eax
        mov dword ptr [esp + 0x44], 1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x1dc]
        call ext_006A5F50
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x44], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, 1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x44
        ret
    }
}
