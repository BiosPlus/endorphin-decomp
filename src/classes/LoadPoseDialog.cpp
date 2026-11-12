// Decompiled translation unit: src/classes/LoadPoseDialog.cpp

// [0x0042F540] LoadPoseDialog::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0042F540(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4b0, p + 0x74);
    ddx(a1, 0x439, p + 0xc8);
    ddx(a1, 0x43a, p + 0x11c);
    ddx(a1, 0x43b, p + 0x170);
}

// [0x0042F650] LoadPoseDialog::vfunc_86 (139 bytes)
extern "C" void ext_006A5FB0();
extern "C" int mem_00925694;

extern "C" void __fastcall fn_0042F650(void* self) {
    typedef int (__stdcall *SendFn)(int, unsigned int, int, int);
    char* p = (char*)self;
    SendFn send = (SendFn)mem_00925694;
    int r;
    r = send(*(int*)(p + 0x94), 0xf0, 0, 0);
    *(unsigned char*)(p + 0x1c4) = (r == 1);
    r = send(*(int*)(p + 0xe8), 0xf0, 0, 0);
    *(unsigned char*)(p + 0x1c5) = (r == 1);
    r = send(*(int*)(p + 0x13c), 0xf0, 0, 0);
    *(unsigned char*)(p + 0x1c6) = (r == 1);
    r = send(*(int*)(p + 0x190), 0xf0, 0, 0);
    *(unsigned char*)(p + 0x1c7) = (r == 1);
    ((void (__fastcall *)(void*))ext_006A5FB0)(self);
}

// [0x0042F5A0] LoadPoseDialog::vfunc_84 (169 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5FC8();
extern "C" int mem_0092565C;
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_0042F5A0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006A5FC8
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        mov edi, dword ptr [mem_0092565C]
        push 0xfc
        push eax
        call edi
        mov ebx, eax
        call ext_006A5EDE
        mov eax, dword ptr [eax + 0x8]
        push 0xfd
        push eax
        call edi
        mov edi, dword ptr [mem_00925694]
        push ebx
        push 0x1
        mov ebp, eax
        mov eax, dword ptr [esi + 0x20]
        push 0x80
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x20]
        push ebp
        push 0x0
        push 0x80
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x94]
        push 0x0
        push 0x1
        push 0xf1
        push edx
        call edi
        mov eax, dword ptr [esi + 0xe8]
        push 0x0
        push 0x1
        push 0xf1
        push eax
        call edi
        mov ecx, dword ptr [esi + 0x13c]
        push 0x0
        push 0x1
        push 0xf1
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x190]
        push 0x0
        push 0x1
        push 0xf1
        push edx
        call edi
        pop edi
        pop esi
        pop ebp
        mov eax, 0x1
        pop ebx
        ret
    }
}
